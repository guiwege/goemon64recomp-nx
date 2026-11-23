#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001860_7310F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001860: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x08001864: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x08001868: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x0800186C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001870: sw          $v0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r2;
    // 0x08001874: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001878: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x0800187C: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001880: jr          $ra
    // 0x08001884: swc1        $f10, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08001884: swc1        $f10, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_08000BA8_730438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000BAC: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x08000BB0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000BB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000BB8: beq         $t6, $zero, L_08000CB4
    if (ctx->r14 == 0) {
        // 0x08000BBC: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08000CB4;
    }
    // 0x08000BBC: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000BC0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000BC4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000BC8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x08000BCC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000BD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000BD4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000BD8: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000BDC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000BE0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000BE4: nop

    // 0x08000BE8: bc1fl       L_08000C04
    if (!c1cs) {
        // 0x08000BEC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_08000C04;
    }
    goto skip_0;
    // 0x08000BEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x08000BF0: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000BF4: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x08000BF8: b           L_08000C24
    // 0x08000BFC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
        goto L_08000C24;
    // 0x08000BFC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000C00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_08000C04:
    // 0x08000C04: nop

    // 0x08000C08: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000C0C: nop

    // 0x08000C10: bc1fl       L_08000C28
    if (!c1cs) {
        // 0x08000C14: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_08000C28;
    }
    goto skip_1;
    // 0x08000C14: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x08000C18: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x08000C1C: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x08000C20: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_08000C24:
    // 0x08000C24: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_08000C28:
    // 0x08000C28: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000C2C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x08000C30: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000C34: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000C38: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x08000C3C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000C40: nop

    // 0x08000C44: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000C48: beql        $t0, $zero, L_08000C98
    if (ctx->r8 == 0) {
        // 0x08000C4C: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_08000C98;
    }
    goto skip_2;
    // 0x08000C4C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08000C50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C54: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000C58: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000C5C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000C60: nop

    // 0x08000C64: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08000C68: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000C6C: nop

    // 0x08000C70: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000C74: bne         $t0, $zero, L_08000C8C
    if (ctx->r8 != 0) {
        // 0x08000C78: nop
    
            goto L_08000C8C;
    }
    // 0x08000C78: nop

    // 0x08000C7C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x08000C80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000C84: b           L_08000CA4
    // 0x08000C88: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08000CA4;
    // 0x08000C88: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08000C8C:
    // 0x08000C8C: b           L_08000CA4
    // 0x08000C90: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08000CA4;
    // 0x08000C90: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000C94: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_08000C98:
    // 0x08000C98: nop

    // 0x08000C9C: bltz        $t0, L_08000C8C
    if (SIGNED(ctx->r8) < 0) {
        // 0x08000CA0: nop
    
            goto L_08000C8C;
    }
    // 0x08000CA0: nop

L_08000CA4:
    // 0x08000CA4: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08000CA8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000CAC: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x08000CB0: nop

L_08000CB4:
    // 0x08000CB4: jr          $ra
    // 0x08000CB8: nop

    TRACE_RETURN()
    return;
    // 0x08000CB8: nop

;}
RECOMP_FUNC void func_08000DE0_730670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DE0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08000DE4: addiu       $a2, $a2, -0x39F4
    ctx->r6 = ADD32(ctx->r6, -0X39F4);
    // 0x08000DE8: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08000DEC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000DF0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x08000DF4: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08000DF8: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x08000DFC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000E00: subu        $v1, $t8, $t6
    ctx->r3 = SUB32(ctx->r24, ctx->r14);
    // 0x08000E04: bgezl       $v1, L_08000E14
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000E08: slti        $at, $v1, 0x201
        ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
            goto L_08000E14;
    }
    goto skip_0;
    // 0x08000E08: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
    skip_0:
    // 0x08000E0C: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x08000E10: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
L_08000E14:
    // 0x08000E14: bne         $at, $zero, L_08000E40
    if (ctx->r1 != 0) {
        // 0x08000E18: subu        $t0, $t9, $v1
        ctx->r8 = SUB32(ctx->r25, ctx->r3);
            goto L_08000E40;
    }
    // 0x08000E18: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x08000E1C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000E20: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x08000E24: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000E28: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x08000E2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000E30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000E34: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000E38: b           L_08000E60
    // 0x08000E3C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
        goto L_08000E60;
    // 0x08000E3C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_08000E40:
    // 0x08000E40: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x08000E44: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x08000E48: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x08000E4C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000E50: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000E54: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x08000E58: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000E5C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_08000E60:
    // 0x08000E60: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x08000E64: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x08000E68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000E6C: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08000E70: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x08000E74: bgez        $t2, L_08000E88
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08000E78: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000E88;
    }
    // 0x08000E78: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000E7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E80: nop

    // 0x08000E84: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_08000E88:
    // 0x08000E88: jr          $ra
    // 0x08000E8C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000E8C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001468_730CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001468: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x0800146C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001474: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08001478: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x0800147C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08001480: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001484: beq         $t6, $zero, L_080014C8
    if (ctx->r14 == 0) {
        // 0x08001488: lui         $t1, 0x600
        ctx->r9 = S32(0X600 << 16);
            goto L_080014C8;
    }
    // 0x08001488: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x0800148C: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08001490: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08001494: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x08001498: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800149C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x080014A0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080014A4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x080014A8: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x080014AC: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x080014B0: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x080014B4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x080014B8: nop

    // 0x080014BC: bc1fl       L_080014CC
    if (!c1cs) {
        // 0x080014C0: addiu       $v1, $a2, 0xD0
        ctx->r3 = ADD32(ctx->r6, 0XD0);
            goto L_080014CC;
    }
    goto skip_0;
    // 0x080014C0: addiu       $v1, $a2, 0xD0
    ctx->r3 = ADD32(ctx->r6, 0XD0);
    skip_0:
    // 0x080014C4: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
L_080014C8:
    // 0x080014C8: addiu       $v1, $a2, 0xD0
    ctx->r3 = ADD32(ctx->r6, 0XD0);
L_080014CC:
    // 0x080014CC: lw          $s0, 0x1C($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X1C);
    // 0x080014D0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x080014D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(62, 0X1890) << 16);
    // 0x080014D8: or          $t9, $s0, $at
    ctx->r25 = ctx->r16 | ctx->r1;
    // 0x080014DC: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x080014E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014E4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x080014E8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x080014EC: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x080014F0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x080014F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080014F8: addiu       $a0, $a0, 0x1890
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(62, 0X1890));
    // 0x080014FC: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x08001500: jalr        $t9
    // 0x08001504: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001504: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_0:
    // 0x08001508: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800150C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x08001510: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x08001514: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x08001518: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x0800151C: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x08001520: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x08001524: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08001528: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x0800152C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x08001530: beq         $at, $zero, L_08001594
    if (ctx->r1 == 0) {
        // 0x08001534: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08001594;
    }
    // 0x08001534: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08001538: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x0800153C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x08001540: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x08001544: addiu       $a1, $a1, -0x22A8
    ctx->r5 = ADD32(ctx->r5, -0X22A8);
    // 0x08001548: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x0800154C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x08001550: jalr        $a1
    // 0x08001554: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_1;
    // 0x08001554: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x08001558: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800155C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08001560: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08001564: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x08001568: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x0800156C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x08001570: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x08001574: beql        $at, $zero, L_08001598
    if (ctx->r1 == 0) {
        // 0x08001578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001598;
    }
    goto skip_1;
    // 0x08001578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x0800157C: jalr        $a1
    // 0x08001580: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_2;
    // 0x08001580: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x08001584: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001588: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x0800158C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x08001590: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
L_08001594:
    // 0x08001594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_08001598:
    // 0x08001598: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x0800159C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x080015A0: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x080015A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x080015A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x080015AC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x080015B0: beq         $t3, $zero, L_080015C4
    if (ctx->r11 == 0) {
        // 0x080015B4: lui         $t8, 0xB800
        ctx->r24 = S32(0XB800 << 16);
            goto L_080015C4;
    }
    // 0x080015B4: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x080015B8: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x080015BC: b           L_080015E0
    // 0x080015C0: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
        goto L_080015E0;
    // 0x080015C0: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
L_080015C4:
    // 0x080015C4: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x080015C8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080015CC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080015D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080015D4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080015D8: mul.d       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x080015DC: nop

L_080015E0:
    // 0x080015E0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x080015E4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x080015E8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x080015EC: cvt.w.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_D(ctx->f0.d);
    // 0x080015F0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x080015F4: nop

    // 0x080015F8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x080015FC: beql        $t5, $zero, L_08001650
    if (ctx->r13 == 0) {
        // 0x08001600: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_08001650;
    }
    goto skip_2;
    // 0x08001600: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x08001604: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001608: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800160C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08001610: sub.d       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f0.d - ctx->f8.d;
    // 0x08001614: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x08001618: nop

    // 0x0800161C: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x08001620: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x08001624: nop

    // 0x08001628: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x0800162C: bne         $t5, $zero, L_08001644
    if (ctx->r13 != 0) {
        // 0x08001630: nop
    
            goto L_08001644;
    }
    // 0x08001630: nop

    // 0x08001634: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x08001638: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800163C: b           L_0800165C
    // 0x08001640: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_0800165C;
    // 0x08001640: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_08001644:
    // 0x08001644: b           L_0800165C
    // 0x08001648: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_0800165C;
    // 0x08001648: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x0800164C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_08001650:
    // 0x08001650: nop

    // 0x08001654: bltz        $t5, L_08001644
    if (SIGNED(ctx->r13) < 0) {
        // 0x08001658: nop
    
            goto L_08001644;
    }
    // 0x08001658: nop

L_0800165C:
    // 0x0800165C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x08001660: ori         $t7, $t6, 0x6000
    ctx->r15 = ctx->r14 | 0X6000;
    // 0x08001664: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x08001668: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800166C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x08001670: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x08001674: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08001678: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800167C: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x08001680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001688: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x0800168C: jr          $ra
    // 0x08001690: nop

    TRACE_RETURN()
    return;
    // 0x08001690: nop

;}
RECOMP_FUNC void func_08001380_730C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001380: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001384: jr          $ra
    // 0x08001388: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    TRACE_RETURN()
    return;
    // 0x08001388: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
;}
RECOMP_FUNC void func_08000CBC_73054C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000CC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000CC8: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000CCC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(62, 0XBA8) << 16);
    // 0x08000CD0: addiu       $a1, $a1, 0xBA8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(62, 0XBA8));
    // 0x08000CD4: jalr        $t9
    // 0x08000CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000CDC: bne         $v0, $zero, L_08000CEC
    if (ctx->r2 != 0) {
        // 0x08000CE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000CEC;
    }
    // 0x08000CE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000CE4: b           L_08000D30
    // 0x08000CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000D30;
    // 0x08000CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000CEC:
    // 0x08000CEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000CF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000CF4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000CF8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x08000CFC: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x08000D00: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08000D04: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x08000D08: sb          $a1, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r5;
    // 0x08000D0C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000D10: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x08000D14: addiu       $a0, $a0, 0x4CC0
    ctx->r4 = ADD32(ctx->r4, 0X4CC0);
    // 0x08000D18: sb          $a1, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = ctx->r5;
    // 0x08000D1C: sh          $zero, 0x307A($a0)
    MEM_H(0X307A, ctx->r4) = 0;
    // 0x08000D20: sh          $zero, 0x307C($a0)
    MEM_H(0X307C, ctx->r4) = 0;
    // 0x08000D24: sh          $zero, 0x30F2($a0)
    MEM_H(0X30F2, ctx->r4) = 0;
    // 0x08000D28: sh          $zero, 0x30F4($a0)
    MEM_H(0X30F4, ctx->r4) = 0;
    // 0x08000D2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08000D30:
    // 0x08000D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D38: jr          $ra
    // 0x08000D3C: nop

    TRACE_RETURN()
    return;
    // 0x08000D3C: nop

;}
RECOMP_FUNC void func_08001824_732AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001828: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800182C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001830: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001834: addiu       $t6, $zero, 0x22A
    ctx->r14 = ADD32(0, 0X22A);
    // 0x08001838: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800183C: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x08001840: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001844: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001848: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800184C: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08001850: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x08001854: addiu       $t9, $zero, 0xFA
    ctx->r25 = ADD32(0, 0XFA);
    // 0x08001858: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x0800185C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001860: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001864: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x08001868: jalr        $t9
    // 0x0800186C: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800186C: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_0:
    // 0x08001870: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08001874: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001878: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800187C: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08001880: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001888: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0800188C: jalr        $t9
    // 0x08001890: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001890: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    after_1:
    // 0x08001894: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001898: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x0800189C: jalr        $t9
    // 0x080018A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080018A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018A8: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080018AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080018B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080018B8: jalr        $t9
    // 0x080018BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080018BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080018C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(63, 0X18E8) << 16);
    // 0x080018CC: jalr        $t9
    // 0x080018D0: addiu       $a0, $a0, 0x18E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X18E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080018D0: addiu       $a0, $a0, 0x18E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X18E8));
    after_4:
    // 0x080018D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080018D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080018DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080018E0: jr          $ra
    // 0x080018E4: nop

    TRACE_RETURN()
    return;
    // 0x080018E4: nop

;}
RECOMP_FUNC void func_080014F0_7327A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080014F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080014F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080014FC: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x08001500: addiu       $t7, $zero, 0x3E9
    ctx->r15 = ADD32(0, 0X3E9);
    // 0x08001504: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001508: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800150C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001510: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001514: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800151C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08001520: jalr        $t9
    // 0x08001524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001528: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0800152C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(63, 0X1C70) << 16);
    // 0x08001530: lwc1        $f0, 0x1C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(63, 0X1C70));
    // 0x08001534: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001538: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x0800153C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001540: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001544: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08001548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800154C: sh          $t8, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r24;
    // 0x08001550: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001554: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08001558: jalr        $t9
    // 0x0800155C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800155C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08001560: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001564: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001568: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800156C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001570: jalr        $t9
    // 0x08001574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08001578: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800157C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001580: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001584: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001588: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800158C: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08001590: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001594: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(63, 0X15BC) << 16);
    // 0x08001598: addiu       $a0, $a0, 0x15BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X15BC));
    // 0x0800159C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080015A0: jalr        $t9
    // 0x080015A4: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015A4: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    after_3:
    // 0x080015A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080015AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080015B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080015B4: jr          $ra
    // 0x080015B8: nop

    TRACE_RETURN()
    return;
    // 0x080015B8: nop

;}
RECOMP_FUNC void func_080014E4_732794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080014E8: jr          $ra
    // 0x080014EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080014EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800012C_7313DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800012C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000130: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000134: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000138: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x0800013C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000140: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000144: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000148: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800014C: jalr        $t9
    // 0x08000150: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000150: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x08000154: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000158: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x0800015C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000160: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000164: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08000168: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800016C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000170: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08000174: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x08000178: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0800017C: jalr        $t9
    // 0x08000180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000184: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000188: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800018C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000190: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000194: jalr        $t9
    // 0x08000198: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000198: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    after_2:
    // 0x0800019C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001A0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080001A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001A8: lui         $a1, 0xC2DE
    ctx->r5 = S32(0XC2DE << 16);
    // 0x080001AC: lui         $a2, 0xC2E6
    ctx->r6 = S32(0XC2E6 << 16);
    // 0x080001B0: jalr        $t9
    // 0x080001B4: lui         $a3, 0x43C2
    ctx->r7 = S32(0X43C2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001B4: lui         $a3, 0x43C2
    ctx->r7 = S32(0X43C2 << 16);
    after_3:
    // 0x080001B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001BC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080001C0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001C4: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x080001C8: lui         $a2, 0xC204
    ctx->r6 = S32(0XC204 << 16);
    // 0x080001CC: jalr        $t9
    // 0x080001D0: lui         $a3, 0x4371
    ctx->r7 = S32(0X4371 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080001D0: lui         $a3, 0x4371
    ctx->r7 = S32(0X4371 << 16);
    after_4:
    // 0x080001D4: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080001D8: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x080001DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080001E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001E4: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080001E8: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x080001EC: jalr        $t9
    // 0x080001F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080001F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_5:
    // 0x080001F4: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x080001F8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x080001FC: addiu       $t5, $zero, 0x138
    ctx->r13 = ADD32(0, 0X138);
    // 0x08000200: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x08000204: lui         $at, 0x4383
    ctx->r1 = S32(0X4383 << 16);
    // 0x08000208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800020C: sh          $t3, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r11;
    // 0x08000210: sh          $t4, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r12;
    // 0x08000214: sh          $t5, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r13;
    // 0x08000218: sh          $t6, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r14;
    // 0x0800021C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000220: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08000224: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(63, 0X13DC) << 16);
    // 0x08000228: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x0800022C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000230: addiu       $a1, $a1, 0x13DC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(63, 0X13DC));
    // 0x08000234: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000238: lui         $a2, 0xC264
    ctx->r6 = S32(0XC264 << 16);
    // 0x0800023C: lui         $a3, 0x43EF
    ctx->r7 = S32(0X43EF << 16);
    // 0x08000240: jalr        $t9
    // 0x08000244: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000244: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x08000248: beq         $v0, $zero, L_08000270
    if (ctx->r2 == 0) {
        // 0x0800024C: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000270;
    }
    // 0x0800024C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000250: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000254: addiu       $t8, $zero, 0x48
    ctx->r24 = ADD32(0, 0X48);
    // 0x08000258: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800025C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000260: jalr        $t9
    // 0x08000264: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000264: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_7:
    // 0x08000268: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0800026C: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_08000270:
    // 0x08000270: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000274: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000278: jalr        $t9
    // 0x0800027C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800027C: nop

    after_8:
    // 0x08000280: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x08000284: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800028C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(63, 0X2B0) << 16);
    // 0x08000290: addiu       $a0, $a0, 0x2B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X2B0));
    // 0x08000294: jalr        $t9
    // 0x08000298: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000298: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    after_9:
    // 0x0800029C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080002A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080002A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080002A8: jr          $ra
    // 0x080002AC: nop

    TRACE_RETURN()
    return;
    // 0x080002AC: nop

;}
RECOMP_FUNC void func_080015C8_732878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015C8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x080015CC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x080015D0: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x080015D4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x080015D8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x080015DC: addiu       $s6, $s6, 0x71A8
    ctx->r22 = ADD32(ctx->r22, 0X71A8);
    // 0x080015E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080015E4: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x080015E8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x080015EC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x080015F0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x080015F4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x080015F8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x080015FC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08001600: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001604: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08001608: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0800160C: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08001610: jalr        $s6
    // 0x08001614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_0;
    // 0x08001614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08001618: beq         $v0, $zero, L_08001744
    if (ctx->r2 == 0) {
        // 0x0800161C: sw          $v0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r2;
            goto L_08001744;
    }
    // 0x0800161C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x08001620: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001624: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001628: jalr        $t9
    // 0x0800162C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800162C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_1:
    // 0x08001630: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08001634: addiu       $s4, $s4, -0x61F8
    ctx->r20 = ADD32(ctx->r20, -0X61F8);
    // 0x08001638: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x0800163C: jalr        $s4
    // 0x08001640: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_2;
    // 0x08001640: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x08001644: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(63, 0X1C74) << 16);
    // 0x08001648: lwc1        $f22, 0x1C74($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(63, 0X1C74));
    // 0x0800164C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001650: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08001654: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08001658: addiu       $s5, $s5, 0x2088
    ctx->r21 = ADD32(ctx->r21, 0X2088);
    // 0x0800165C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001660: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_08001664:
    // 0x08001664: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x08001668: jalr        $s6
    // 0x0800166C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_3;
    // 0x0800166C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08001670: beq         $v0, $zero, L_080016BC
    if (ctx->r2 == 0) {
        // 0x08001674: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_080016BC;
    }
    // 0x08001674: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001678: sll         $s2, $s0, 2
    ctx->r18 = S32(ctx->r16 << 2);
    // 0x0800167C: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x08001680: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08001684: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x08001688: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x0800168C: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x08001690: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x08001694: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x08001698: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x0800169C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x080016A0: jalr        $s4
    // 0x080016A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_4;
    // 0x080016A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x080016A8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x080016AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080016B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080016B4: jalr        $s3
    // 0x080016B8: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_5;
    // 0x080016B8: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    after_5:
L_080016BC:
    // 0x080016BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x080016C0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x080016C4: bnel        $at, $zero, L_08001664
    if (ctx->r1 != 0) {
        // 0x080016C8: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_08001664;
    }
    goto skip_0;
    // 0x080016C8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    skip_0:
    // 0x080016CC: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x080016D0: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x080016D4: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x080016D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080016DC: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x080016E0: addiu       $s7, $s7, 0x242C
    ctx->r23 = ADD32(ctx->r23, 0X242C);
    // 0x080016E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x080016E8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x080016EC: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x080016F0: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
    // 0x080016F4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_080016F8:
    // 0x080016F8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x080016FC: jalr        $s6
    // 0x08001700: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_6;
    // 0x08001700: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x08001704: beq         $v0, $zero, L_08001730
    if (ctx->r2 == 0) {
        // 0x08001708: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001730;
    }
    // 0x08001708: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x0800170C: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001710: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x08001714: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001718: addiu       $a2, $zero, 0x301
    ctx->r6 = ADD32(0, 0X301);
    // 0x0800171C: mflo        $a3
    ctx->r7 = lo;
    // 0x08001720: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x08001724: jalr        $s3
    // 0x08001728: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_7;
    // 0x08001728: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_7:
    // 0x0800172C: sh          $s4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r20;
L_08001730:
    // 0x08001730: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08001734: bnel        $s0, $s5, L_080016F8
    if (ctx->r16 != ctx->r21) {
        // 0x08001738: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_080016F8;
    }
    goto skip_1;
    // 0x08001738: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    skip_1:
    // 0x0800173C: b           L_08001748
    // 0x08001740: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
        goto L_08001748;
    // 0x08001740: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_08001744:
    // 0x08001744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001748:
    // 0x08001748: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0800174C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08001750: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08001754: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001758: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0800175C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08001760: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08001764: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x08001768: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x0800176C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x08001770: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x08001774: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x08001778: jr          $ra
    // 0x0800177C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x0800177C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08001780_732A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001780: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001784: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001788: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800178C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001790: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08001794: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001798: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(63, 0X1824) << 16);
    // 0x0800179C: addiu       $a1, $a1, 0x1824
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(63, 0X1824));
    // 0x080017A0: jalr        $t9
    // 0x080017A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080017A8: beq         $v0, $zero, L_08001814
    if (ctx->r2 == 0) {
        // 0x080017AC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08001814;
    }
    // 0x080017AC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x080017B0: addiu       $t6, $zero, 0x48
    ctx->r14 = ADD32(0, 0X48);
    // 0x080017B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080017B8: sh          $t6, 0x28($a2)
    MEM_H(0X28, ctx->r6) = ctx->r14;
    // 0x080017BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080017C0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080017C4: jalr        $t9
    // 0x080017C8: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017C8: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_1:
    // 0x080017CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080017D0: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x080017D4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080017D8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x080017DC: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x080017E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080017E4: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080017E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080017EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080017F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080017F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017F8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x080017FC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001800: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08001804: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001808: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x0800180C: jalr        $t9
    // 0x08001810: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001810: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    after_2:
L_08001814:
    // 0x08001814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800181C: jr          $ra
    // 0x08001820: nop

    TRACE_RETURN()
    return;
    // 0x08001820: nop

;}
RECOMP_FUNC void func_08000000_7312B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000010: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000014: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000018: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0800001C: jalr        $v1
    // 0x08000020: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000020: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08000024: beq         $v0, $zero, L_08000044
    if (ctx->r2 == 0) {
        // 0x08000028: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000044;
    }
    // 0x08000028: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800002C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000030: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000034: jalr        $t9
    // 0x08000038: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000038: nop

    after_1:
    // 0x0800003C: b           L_08000120
    // 0x08000040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000120;
    // 0x08000040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000044:
    // 0x08000044: jalr        $v1
    // 0x08000048: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08000048: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    after_2:
    // 0x0800004C: bne         $v0, $zero, L_0800006C
    if (ctx->r2 != 0) {
        // 0x08000050: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_0800006C;
    }
    // 0x08000050: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000054: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000058: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800005C: jalr        $t9
    // 0x08000060: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000060: nop

    after_3:
    // 0x08000064: b           L_08000120
    // 0x08000068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000120;
    // 0x08000068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800006C:
    // 0x0800006C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000070: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000074: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000078: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x0800007C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000080: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08000084: jalr        $t9
    // 0x08000088: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000088: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_4:
    // 0x0800008C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000090: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000094: bne         $v0, $zero, L_080000B4
    if (ctx->r2 != 0) {
        // 0x08000098: sw          $v0, 0xD0($t6)
        MEM_W(0XD0, ctx->r14) = ctx->r2;
            goto L_080000B4;
    }
    // 0x08000098: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x0800009C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000A0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000A4: jalr        $t9
    // 0x080000A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000A8: nop

    after_5:
    // 0x080000AC: b           L_08000120
    // 0x080000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000120;
    // 0x080000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000B4:
    // 0x080000B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B8: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080000BC: jalr        $t9
    // 0x080000C0: sh          $zero, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000C0: sh          $zero, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = 0;
    after_6:
    // 0x080000C4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080000C8: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x080000CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x080000D0: jalr        $v0
    // 0x080000D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x080000D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x080000D8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x080000DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x080000E0: jalr        $t9
    // 0x080000E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080000E4: nop

    after_8:
    // 0x080000E8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x080000EC: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080000F4: nop

    after_9:
    // 0x080000F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080000FC: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000100: jalr        $t9
    // 0x08000104: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000104: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x08000108: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800010C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000110: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(63, 0X12C) << 16);
    // 0x08000114: jalr        $t9
    // 0x08000118: addiu       $a0, $a0, 0x12C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X12C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000118: addiu       $a0, $a0, 0x12C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X12C));
    after_11:
    // 0x0800011C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000120:
    // 0x08000120: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000124: jr          $ra
    // 0x08000128: nop

    TRACE_RETURN()
    return;
    // 0x08000128: nop

;}
RECOMP_FUNC void func_080015BC_73286C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080015C0: jr          $ra
    // 0x080015C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080015C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080013DC_73268C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080013E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080013E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080013E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080013EC: lui         $t6, 0x280
    ctx->r14 = S32(0X280 << 16);
    // 0x080013F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013F4: ori         $t6, $t6, 0x301
    ctx->r14 = ctx->r14 | 0X301;
    // 0x080013F8: addiu       $t7, $zero, 0x2E1
    ctx->r15 = ADD32(0, 0X2E1);
    // 0x080013FC: addiu       $t8, $zero, 0x355
    ctx->r24 = ADD32(0, 0X355);
    // 0x08001400: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001408: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800140C: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x08001410: sb          $zero, 0x75($a0)
    MEM_B(0X75, ctx->r4) = 0;
    // 0x08001414: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001418: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800141C: jalr        $t9
    // 0x08001420: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001420: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x08001424: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001428: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800142C: addiu       $t0, $zero, -0x5
    ctx->r8 = ADD32(0, -0X5);
    // 0x08001430: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08001434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001438: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0800143C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001440: jalr        $t9
    // 0x08001444: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001444: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x08001448: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800144C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001450: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001454: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08001458: jalr        $t9
    // 0x0800145C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800145C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08001460: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001464: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001468: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800146C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001470: jalr        $t9
    // 0x08001474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08001478: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800147C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001480: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001484: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001488: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x0800148C: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08001490: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001494: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001498: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x0800149C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080014A0: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    // 0x080014A4: sh          $t4, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r12;
    // 0x080014A8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080014AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080014B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080014B4: jalr        $t9
    // 0x080014B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080014B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080014BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(63, 0X14E4) << 16);
    // 0x080014C8: jalr        $t9
    // 0x080014CC: addiu       $a0, $a0, 0x14E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X14E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080014CC: addiu       $a0, $a0, 0x14E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(63, 0X14E4));
    after_5:
    // 0x080014D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080014D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080014D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080014DC: jr          $ra
    // 0x080014E0: nop

    TRACE_RETURN()
    return;
    // 0x080014E0: nop

;}
RECOMP_FUNC void func_080002B0_731560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002B0: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x080002B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080002B8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080002BC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080002C0: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x080002C4: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080002C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080002CC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x080002D0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x080002D4: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x080002D8: sw          $t8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r24;
    // 0x080002DC: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x080002E0: sltiu       $at, $t9, 0x1A
    ctx->r1 = ctx->r25 < 0X1A ? 1 : 0;
    // 0x080002E4: beq         $at, $zero, L_080013A0
    if (ctx->r1 == 0) {
        // 0x080002E8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_080013A0;
    }
    // 0x080002E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x080002EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(63, 0X1BF8) << 16);
    // 0x080002F0: addu        $at, $at, $t9
    gpr jr_addend_080002F8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x080002F4: lw          $t9, 0x1BF8($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(63, 0X1BF8));
    // 0x080002F8: jr          $t9
    // 0x080002FC: nop

    switch (jr_addend_080002F8 >> 2) {
        case 0: goto L_08000300; break;
        case 1: goto L_08000408; break;
        case 2: goto L_08000498; break;
        case 3: goto L_080004F0; break;
        case 4: goto L_08000590; break;
        case 5: goto L_08000678; break;
        case 6: goto L_0800087C; break;
        case 7: goto L_08000ABC; break;
        case 8: goto L_08000BB8; break;
        case 9: goto L_08000C08; break;
        case 10: goto L_08000CEC; break;
        case 11: goto L_08000D3C; break;
        case 12: goto L_08000D88; break;
        case 13: goto L_08000DD0; break;
        case 14: goto L_08000D98; break;
        case 15: goto L_08001148; break;
        case 16: goto L_08001110; break;
        case 17: goto L_080009F0; break;
        case 18: goto L_08000C54; break;
        case 19: goto L_08000F14; break;
        case 20: goto L_080010AC; break;
        case 21: goto L_08000B6C; break;
        case 22: goto L_08000B08; break;
        case 23: goto L_080009D0; break;
        case 24: goto L_08001040; break;
        case 25: goto L_080011E4; break;
        default: switch_error(__func__, 0x080002F8, 0x08001BF8);
    }
    // 0x080002FC: nop

L_08000300:
    // 0x08000300: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x08000304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000308: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x0800030C: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x08000310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000314: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x08000318: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x0800031C: lui         $at, 0x4397
    ctx->r1 = S32(0X4397 << 16);
    // 0x08000320: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000324: swc1        $f6, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f6.u32l;
    // 0x08000328: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x0800032C: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x08000330: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000334: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x08000338: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800033C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000340: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08000344: bnel        $v1, $at, L_080003CC
    if (ctx->r3 != ctx->r1) {
        // 0x08000348: slti        $at, $v1, 0x64
        ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
            goto L_080003CC;
    }
    goto skip_0;
    // 0x08000348: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    skip_0:
    // 0x0800034C: jalr        $t9
    // 0x08000350: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000350: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_0:
    // 0x08000354: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000358: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800035C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000360: lui         $a1, 0xC2EA
    ctx->r5 = S32(0XC2EA << 16);
    // 0x08000364: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000368: jalr        $t9
    // 0x0800036C: lui         $a3, 0x4323
    ctx->r7 = S32(0X4323 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800036C: lui         $a3, 0x4323
    ctx->r7 = S32(0X4323 << 16);
    after_1:
    // 0x08000370: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x08000374: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000378: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800037C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000384: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000388: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800038C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000390: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000394: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000398: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800039C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080003A0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080003A4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080003A8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080003AC: jalr        $t9
    // 0x080003B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003B0: nop

    after_2:
    // 0x080003B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003B8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080003BC: jalr        $t9
    // 0x080003C0: addiu       $a0, $zero, 0x2AC
    ctx->r4 = ADD32(0, 0X2AC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003C0: addiu       $a0, $zero, 0x2AC
    ctx->r4 = ADD32(0, 0X2AC);
    after_3:
    // 0x080003C4: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x080003C8: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
L_080003CC:
    // 0x080003CC: bne         $at, $zero, L_080003F0
    if (ctx->r1 != 0) {
        // 0x080003D0: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080003F0;
    }
    // 0x080003D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003D4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080003D8: jalr        $t9
    // 0x080003DC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080003DC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_4:
    // 0x080003E0: bne         $v0, $zero, L_080003F0
    if (ctx->r2 != 0) {
        // 0x080003E4: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_080003F0;
    }
    // 0x080003E4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080003E8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080003EC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_080003F0:
    // 0x080003F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003F4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080003F8: jalr        $t9
    // 0x080003FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003FC: nop

    after_5:
    // 0x08000400: b           L_080013A4
    // 0x08000404: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000404: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000408:
    // 0x08000408: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x0800040C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000410: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000414: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000418: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800041C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000420: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000424: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000428: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800042C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000430: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000434: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000438: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x0800043C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000440: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000444: jalr        $t9
    // 0x08000448: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000448: nop

    after_6:
    // 0x0800044C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000450: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x08000454: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000458: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800045C: lhu         $t5, 0x98($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X98);
    // 0x08000460: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000464: beq         $t5, $zero, L_08000488
    if (ctx->r13 == 0) {
        // 0x08000468: nop
    
            goto L_08000488;
    }
    // 0x08000468: nop

    // 0x0800046C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08000470: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000474: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x08000478: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x0800047C: sb          $v0, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r2;
    // 0x08000480: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000484: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_08000488:
    // 0x08000488: jalr        $t9
    // 0x0800048C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800048C: nop

    after_7:
    // 0x08000490: b           L_080013A4
    // 0x08000494: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000494: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000498:
    // 0x08000498: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800049C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080004A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x080004A4: bne         $v1, $at, L_080004D8
    if (ctx->r3 != ctx->r1) {
        // 0x080004A8: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_080004D8;
    }
    // 0x080004A8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080004AC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x080004B0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080004B4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080004B8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080004BC: sb          $v0, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r2;
    // 0x080004C0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080004C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080004C8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080004CC: jalr        $t9
    // 0x080004D0: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080004D0: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    after_8:
    // 0x080004D4: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_080004D8:
    // 0x080004D8: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x080004DC: bne         $v1, $at, L_080013A0
    if (ctx->r3 != ctx->r1) {
        // 0x080004E0: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_080013A0;
    }
    // 0x080004E0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080004E4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080004E8: b           L_080013A0
    // 0x080004EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_080013A0;
    // 0x080004EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080004F0:
    // 0x080004F0: lhu         $t0, 0x8A($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X8A);
    // 0x080004F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080004F8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x080004FC: bne         $t0, $at, L_08000580
    if (ctx->r8 != ctx->r1) {
        // 0x08000500: addiu       $t4, $zero, 0x200
        ctx->r12 = ADD32(0, 0X200);
            goto L_08000580;
    }
    // 0x08000500: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x08000504: lw          $t2, 0x60($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X60);
    // 0x08000508: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800050C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000510: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x08000514: sw          $t3, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r11;
    // 0x08000518: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x0800051C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000524: sh          $t4, 0x14($t5)
    MEM_H(0X14, ctx->r13) = ctx->r12;
    // 0x08000528: jalr        $t9
    // 0x0800052C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800052C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_9:
    // 0x08000530: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000534: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000538: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800053C: jalr        $t9
    // 0x08000540: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000540: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    after_10:
    // 0x08000544: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000548: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800054C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000550: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    // 0x08000554: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x08000558: jalr        $t9
    // 0x0800055C: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800055C: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    after_11:
    // 0x08000560: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000564: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000568: lui         $a3, 0x4383
    ctx->r7 = S32(0X4383 << 16);
    // 0x0800056C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000570: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000574: lui         $a1, 0xC260
    ctx->r5 = S32(0XC260 << 16);
    // 0x08000578: jalr        $t9
    // 0x0800057C: lui         $a2, 0x42D0
    ctx->r6 = S32(0X42D0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800057C: lui         $a2, 0x42D0
    ctx->r6 = S32(0X42D0 << 16);
    after_12:
L_08000580:
    // 0x08000580: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000584: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08000588: b           L_080013A0
    // 0x0800058C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080013A0;
    // 0x0800058C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000590:
    // 0x08000590: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000594: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000598: lui         $a1, 0x42D8
    ctx->r5 = S32(0X42D8 << 16);
    // 0x0800059C: bne         $v1, $at, L_0800062C
    if (ctx->r3 != ctx->r1) {
        // 0x080005A0: lui         $v0, 0x8001
        ctx->r2 = S32(0X8001 << 16);
            goto L_0800062C;
    }
    // 0x080005A0: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080005A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005A8: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080005AC: jalr        $v0
    // 0x080005B0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x080005B0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_13:
    // 0x080005B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005B8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080005BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005C0: lui         $a1, 0xC254
    ctx->r5 = S32(0XC254 << 16);
    // 0x080005C4: lui         $a2, 0x42A4
    ctx->r6 = S32(0X42A4 << 16);
    // 0x080005C8: jalr        $t9
    // 0x080005CC: lui         $a3, 0x438B
    ctx->r7 = S32(0X438B << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080005CC: lui         $a3, 0x438B
    ctx->r7 = S32(0X438B << 16);
    after_14:
    // 0x080005D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080005D4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005D8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x080005DC: jalr        $t9
    // 0x080005E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080005E0: nop

    after_15:
    // 0x080005E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005E8: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x080005EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005F0: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(63, 0X1980) << 16);
    // 0x080005F4: addiu       $t7, $zero, 0x6C
    ctx->r15 = ADD32(0, 0X6C);
    // 0x080005F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080005FC: addiu       $a2, $a2, 0x1980
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(63, 0X1980));
    // 0x08000600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000604: jalr        $t9
    // 0x08000608: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000608: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_16:
    // 0x0800060C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x08000610: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000614: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08000618: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800061C: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    // 0x08000620: jalr        $t9
    // 0x08000624: sb          $t8, 0x75($t0)
    MEM_B(0X75, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000624: sb          $t8, 0x75($t0)
    MEM_B(0X75, ctx->r8) = ctx->r24;
    after_17:
    // 0x08000628: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_0800062C:
    // 0x0800062C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000630: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x08000634: mfhi        $t2
    ctx->r10 = hi;
    // 0x08000638: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x0800063C: beq         $t2, $zero, L_08000654
    if (ctx->r10 == 0) {
        // 0x08000640: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08000654;
    }
    // 0x08000640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000644: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(63, 0X1780) << 16);
    // 0x08000648: addiu       $t9, $t9, 0x1780
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(63, 0X1780));
    // 0x0800064C: jalr        $t9
    // 0x08000650: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000650: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_18:
L_08000654:
    // 0x08000654: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000658: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800065C: jalr        $t9
    // 0x08000660: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000660: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_19:
    // 0x08000664: bne         $v0, $zero, L_080013A0
    if (ctx->r2 != 0) {
        // 0x08000668: addiu       $t3, $zero, 0x5
        ctx->r11 = ADD32(0, 0X5);
            goto L_080013A0;
    }
    // 0x08000668: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x0800066C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000670: b           L_080013A0
    // 0x08000674: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080013A0;
    // 0x08000674: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000678:
    // 0x08000678: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800067C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000680: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000684: bne         $v1, $at, L_08000770
    if (ctx->r3 != ctx->r1) {
        // 0x08000688: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000770;
    }
    // 0x08000688: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800068C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000690: jalr        $t9
    // 0x08000694: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000694: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_20:
    // 0x08000698: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800069C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080006A0: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    // 0x080006A4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x080006A8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006AC: lui         $a1, 0xC2B0
    ctx->r5 = S32(0XC2B0 << 16);
    // 0x080006B0: jalr        $t9
    // 0x080006B4: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080006B4: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    after_21:
    // 0x080006B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006BC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080006C0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006C4: lui         $a1, 0xC23C
    ctx->r5 = S32(0XC23C << 16);
    // 0x080006C8: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    // 0x080006CC: jalr        $t9
    // 0x080006D0: lui         $a3, 0x4392
    ctx->r7 = S32(0X4392 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080006D0: lui         $a3, 0x4392
    ctx->r7 = S32(0X4392 << 16);
    after_22:
    // 0x080006D4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080006D8: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080006DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080006E0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080006E4: jalr        $t9
    // 0x080006E8: addiu       $a1, $zero, 0xD5
    ctx->r5 = ADD32(0, 0XD5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080006E8: addiu       $a1, $zero, 0xD5
    ctx->r5 = ADD32(0, 0XD5);
    after_23:
    // 0x080006EC: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x080006F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006F4: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x080006F8: sb          $zero, 0x75($t1)
    MEM_B(0X75, ctx->r9) = 0;
    // 0x080006FC: jalr        $t9
    // 0x08000700: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000700: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_24:
    // 0x08000704: lui         $at, 0xC264
    ctx->r1 = S32(0XC264 << 16);
    // 0x08000708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800070C: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x08000710: lui         $at, 0xC2AC
    ctx->r1 = S32(0XC2AC << 16);
    // 0x08000714: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000718: lui         $at, 0x4383
    ctx->r1 = S32(0X4383 << 16);
    // 0x0800071C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000720: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    // 0x08000724: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x08000728: swc1        $f16, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f16.u32l;
    // 0x0800072C: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
    // 0x08000730: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000734: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000738: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800073C: lw          $t5, 0x60($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X60);
    // 0x08000740: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000744: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08000748: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x0800074C: sw          $t6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r14;
    // 0x08000750: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000754: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000758: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x0800075C: jalr        $t9
    // 0x08000760: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000760: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x08000764: jal         0x080015C8
    // 0x08000768: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_080015C8_732878(rdram, ctx);
        goto after_26;
    // 0x08000768: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_26:
    // 0x0800076C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000770:
    // 0x08000770: slti        $at, $v1, 0x33
    ctx->r1 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x08000774: beq         $at, $zero, L_08000840
    if (ctx->r1 == 0) {
        // 0x08000778: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_08000840;
    }
    // 0x08000778: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x0800077C: beq         $v0, $zero, L_080007AC
    if (ctx->r2 == 0) {
        // 0x08000780: lui         $a1, 0xC2B0
        ctx->r5 = S32(0XC2B0 << 16);
            goto L_080007AC;
    }
    // 0x08000780: lui         $a1, 0xC2B0
    ctx->r5 = S32(0XC2B0 << 16);
    // 0x08000784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000788: beq         $v0, $at, L_08000840
    if (ctx->r2 == ctx->r1) {
        // 0x0800078C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08000840;
    }
    // 0x0800078C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000790: beq         $v0, $at, L_080007F8
    if (ctx->r2 == ctx->r1) {
        // 0x08000794: lui         $a1, 0xC2B0
        ctx->r5 = S32(0XC2B0 << 16);
            goto L_080007F8;
    }
    // 0x08000794: lui         $a1, 0xC2B0
    ctx->r5 = S32(0XC2B0 << 16);
    // 0x08000798: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800079C: beql        $v0, $at, L_08000844
    if (ctx->r2 == ctx->r1) {
        // 0x080007A0: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_08000844;
    }
    goto skip_1;
    // 0x080007A0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_1:
    // 0x080007A4: b           L_08000844
    // 0x080007A8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
        goto L_08000844;
    // 0x080007A8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_080007AC:
    // 0x080007AC: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x080007B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080007B8: addiu       $t7, $t7, 0x2818
    ctx->r15 = ADD32(ctx->r15, 0X2818);
    // 0x080007BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007C0: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    // 0x080007C4: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x080007C8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x080007CC: jalr        $t9
    // 0x080007D0: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080007D0: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    after_27:
    // 0x080007D4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080007D8: lui         $a3, 0x4392
    ctx->r7 = S32(0X4392 << 16);
    // 0x080007DC: ori         $a3, $a3, 0x199A
    ctx->r7 = ctx->r7 | 0X199A;
    // 0x080007E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007E4: lui         $a1, 0xC23C
    ctx->r5 = S32(0XC23C << 16);
    // 0x080007E8: jalr        $t9
    // 0x080007EC: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x080007EC: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    after_28:
    // 0x080007F0: b           L_08000840
    // 0x080007F4: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
        goto L_08000840;
    // 0x080007F4: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_080007F8:
    // 0x080007F8: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x080007FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000800: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000804: addiu       $t8, $t8, 0x2818
    ctx->r24 = ADD32(ctx->r24, 0X2818);
    // 0x08000808: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800080C: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    // 0x08000810: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x08000814: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x08000818: jalr        $t9
    // 0x0800081C: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x0800081C: lui         $a2, 0xC298
    ctx->r6 = S32(0XC298 << 16);
    after_29:
    // 0x08000820: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08000824: lui         $a3, 0x4391
    ctx->r7 = S32(0X4391 << 16);
    // 0x08000828: ori         $a3, $a3, 0xE666
    ctx->r7 = ctx->r7 | 0XE666;
    // 0x0800082C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000830: lui         $a1, 0xC23C
    ctx->r5 = S32(0XC23C << 16);
    // 0x08000834: jalr        $t9
    // 0x08000838: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000838: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    after_30:
    // 0x0800083C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000840:
    // 0x08000840: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_08000844:
    // 0x08000844: bne         $v1, $at, L_08000864
    if (ctx->r3 != ctx->r1) {
        // 0x08000848: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08000864;
    }
    // 0x08000848: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800084C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000850: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000854: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000858: jalr        $t9
    // 0x0800085C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800085C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x08000860: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000864:
    // 0x08000864: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x08000868: bne         $v1, $at, L_080013A0
    if (ctx->r3 != ctx->r1) {
        // 0x0800086C: addiu       $t0, $zero, 0x6
        ctx->r8 = ADD32(0, 0X6);
            goto L_080013A0;
    }
    // 0x0800086C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000870: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000874: b           L_080013A0
    // 0x08000878: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_080013A0;
    // 0x08000878: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_0800087C:
    // 0x0800087C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000884: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000888: bne         $v1, $at, L_08000950
    if (ctx->r3 != ctx->r1) {
        // 0x0800088C: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000950;
    }
    // 0x0800088C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000890: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000894: jalr        $t9
    // 0x08000898: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000898: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_32:
    // 0x0800089C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008A0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080008A4: lui         $a3, 0x4398
    ctx->r7 = S32(0X4398 << 16);
    // 0x080008A8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x080008AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008B0: lui         $a1, 0xC240
    ctx->r5 = S32(0XC240 << 16);
    // 0x080008B4: jalr        $t9
    // 0x080008B8: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080008B8: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    after_33:
    // 0x080008BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008C0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080008C4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008C8: lui         $a1, 0xC280
    ctx->r5 = S32(0XC280 << 16);
    // 0x080008CC: lui         $a2, 0xC292
    ctx->r6 = S32(0XC292 << 16);
    // 0x080008D0: jalr        $t9
    // 0x080008D4: lui         $a3, 0x4364
    ctx->r7 = S32(0X4364 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x080008D4: lui         $a3, 0x4364
    ctx->r7 = S32(0X4364 << 16);
    after_34:
    // 0x080008D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008DC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080008E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008E4: jalr        $t9
    // 0x080008E8: lui         $a1, 0x436A
    ctx->r5 = S32(0X436A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080008E8: lui         $a1, 0x436A
    ctx->r5 = S32(0X436A << 16);
    after_35:
    // 0x080008EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008F0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080008F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008F8: lui         $a1, 0xC278
    ctx->r5 = S32(0XC278 << 16);
    // 0x080008FC: lui         $a2, 0xC29A
    ctx->r6 = S32(0XC29A << 16);
    // 0x08000900: jalr        $t9
    // 0x08000904: lui         $a3, 0x438F
    ctx->r7 = S32(0X438F << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08000904: lui         $a3, 0x438F
    ctx->r7 = S32(0X438F << 16);
    after_36:
    // 0x08000908: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800090C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000910: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000914: lui         $a1, 0xC258
    ctx->r5 = S32(0XC258 << 16);
    // 0x08000918: lui         $a2, 0xC28E
    ctx->r6 = S32(0XC28E << 16);
    // 0x0800091C: jalr        $t9
    // 0x08000920: lui         $a3, 0x4372
    ctx->r7 = S32(0X4372 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08000920: lui         $a3, 0x4372
    ctx->r7 = S32(0X4372 << 16);
    after_37:
    // 0x08000924: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000928: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800092C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000930: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000934: jalr        $t9
    // 0x08000938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08000938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x0800093C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000940: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000944: jalr        $t9
    // 0x08000948: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08000948: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    after_39:
    // 0x0800094C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000950:
    // 0x08000950: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08000954: bnel        $v1, $at, L_08000974
    if (ctx->r3 != ctx->r1) {
        // 0x08000958: slti        $at, $v1, 0x3C
        ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
            goto L_08000974;
    }
    goto skip_2;
    // 0x08000958: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    skip_2:
    // 0x0800095C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000960: lw          $t2, 0x60($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X60);
    // 0x08000964: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08000968: sw          $t3, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r11;
    // 0x0800096C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000970: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_08000974:
    // 0x08000974: bne         $at, $zero, L_080013A0
    if (ctx->r1 != 0) {
        // 0x08000978: lw          $t1, 0xD8($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XD8);
            goto L_080013A0;
    }
    // 0x08000978: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x0800097C: lbu         $t4, 0x7C($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X7C);
    // 0x08000980: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000984: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000988: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x0800098C: beql        $t5, $zero, L_080013A4
    if (ctx->r13 == 0) {
        // 0x08000990: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_3;
    // 0x08000990: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x08000994: jalr        $t9
    // 0x08000998: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000998: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_40:
    // 0x0800099C: bne         $v0, $zero, L_080013A0
    if (ctx->r2 != 0) {
        // 0x080009A0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_080013A0;
    }
    // 0x080009A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009AC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080009B0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080009B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080009B8: jalr        $t9
    // 0x080009BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080009BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_41:
    // 0x080009C0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080009C4: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x080009C8: b           L_080013A0
    // 0x080009CC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080013A0;
    // 0x080009CC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_080009D0:
    // 0x080009D0: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x080009D4: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x080009D8: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x080009DC: bnel        $at, $zero, L_080013A4
    if (ctx->r1 != 0) {
        // 0x080009E0: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_4;
    // 0x080009E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_4:
    // 0x080009E4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080009E8: b           L_080013A0
    // 0x080009EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_080013A0;
    // 0x080009EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080009F0:
    // 0x080009F0: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x080009F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080009F8: addiu       $a1, $zero, 0xDFC
    ctx->r5 = ADD32(0, 0XDFC);
    // 0x080009FC: bne         $v1, $at, L_08000A58
    if (ctx->r3 != ctx->r1) {
        // 0x08000A00: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000A58;
    }
    // 0x08000A00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A04: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000A08: jalr        $t9
    // 0x08000A0C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000A0C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_42:
    // 0x08000A10: lui         $at, 0xC2A4
    ctx->r1 = S32(0XC2A4 << 16);
    // 0x08000A14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000A18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A1C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000A20: lui         $a3, 0x43A7
    ctx->r7 = S32(0X43A7 << 16);
    // 0x08000A24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000A28: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000A2C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000A30: jalr        $t9
    // 0x08000A34: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08000A34: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_43:
    // 0x08000A38: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A3C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000A40: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000A44: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08000A48: lui         $a2, 0xC180
    ctx->r6 = S32(0XC180 << 16);
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: lui         $a3, 0x4315
    ctx->r7 = S32(0X4315 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08000A50: lui         $a3, 0x4315
    ctx->r7 = S32(0X4315 << 16);
    after_44:
    // 0x08000A54: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000A58:
    // 0x08000A58: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000A5C: bne         $v1, $at, L_08000A78
    if (ctx->r3 != ctx->r1) {
        // 0x08000A60: addiu       $a1, $zero, 0x3E
        ctx->r5 = ADD32(0, 0X3E);
            goto L_08000A78;
    }
    // 0x08000A60: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x08000A64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A68: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000A6C: jalr        $t9
    // 0x08000A70: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08000A70: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_45:
    // 0x08000A74: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000A78:
    // 0x08000A78: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x08000A7C: bne         $at, $zero, L_080013A0
    if (ctx->r1 != 0) {
        // 0x08000A80: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080013A0;
    }
    // 0x08000A80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A84: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000A88: jalr        $t9
    // 0x08000A8C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08000A8C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_46:
    // 0x08000A90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A94: bne         $v0, $at, L_080013A0
    if (ctx->r2 != ctx->r1) {
        // 0x08000A98: addiu       $a0, $zero, 0x1EE
        ctx->r4 = ADD32(0, 0X1EE);
            goto L_080013A0;
    }
    // 0x08000A98: addiu       $a0, $zero, 0x1EE
    ctx->r4 = ADD32(0, 0X1EE);
    // 0x08000A9C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000AA0: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000AA4: jalr        $t9
    // 0x08000AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08000AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_47:
    // 0x08000AAC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000AB0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x08000AB4: b           L_080013A0
    // 0x08000AB8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_080013A0;
    // 0x08000AB8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000ABC:
    // 0x08000ABC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AC0: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000AC4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000AC8: jalr        $t9
    // 0x08000ACC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000ACC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_48:
    // 0x08000AD0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AD4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000AD8: jalr        $t9
    // 0x08000ADC: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000ADC: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_49:
    // 0x08000AE0: beq         $v0, $zero, L_080013A0
    if (ctx->r2 == 0) {
        // 0x08000AE4: addiu       $t2, $zero, 0x16
        ctx->r10 = ADD32(0, 0X16);
            goto L_080013A0;
    }
    // 0x08000AE4: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x08000AE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AEC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000AF0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000AF4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x08000AF8: jalr        $t9
    // 0x08000AFC: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08000AFC: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_50:
    // 0x08000B00: b           L_080013A4
    // 0x08000B04: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000B04: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000B08:
    // 0x08000B08: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000B0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000B10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000B14: bne         $t3, $at, L_08000B30
    if (ctx->r11 != ctx->r1) {
        // 0x08000B18: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08000B30;
    }
    // 0x08000B18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000B1C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B20: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B24: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000B28: jalr        $t9
    // 0x08000B2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08000B2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_51:
L_08000B30:
    // 0x08000B30: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x08000B34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B38: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B3C: lbu         $t4, 0x7C($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X7C);
    // 0x08000B40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000B44: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000B48: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x08000B4C: beq         $t5, $zero, L_080013A0
    if (ctx->r13 == 0) {
        // 0x08000B50: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_080013A0;
    }
    // 0x08000B50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000B54: jalr        $t9
    // 0x08000B58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08000B58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_52:
    // 0x08000B5C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000B60: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x08000B64: b           L_080013A0
    // 0x08000B68: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080013A0;
    // 0x08000B68: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000B6C:
    // 0x08000B6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B70: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000B74: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000B78: jalr        $t9
    // 0x08000B7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08000B7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_53:
    // 0x08000B80: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B84: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000B88: jalr        $t9
    // 0x08000B8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08000B8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_54:
    // 0x08000B90: beq         $v0, $zero, L_080013A0
    if (ctx->r2 == 0) {
        // 0x08000B94: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_080013A0;
    }
    // 0x08000B94: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08000B98: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B9C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000BA0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000BA4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x08000BA8: jalr        $t9
    // 0x08000BAC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000BAC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_55:
    // 0x08000BB0: b           L_080013A4
    // 0x08000BB4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000BB4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000BB8:
    // 0x08000BB8: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000BBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000BC0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000BC4: bne         $t8, $at, L_08000BE0
    if (ctx->r24 != ctx->r1) {
        // 0x08000BC8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000BE0;
    }
    // 0x08000BC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BCC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000BD0: jalr        $t9
    // 0x08000BD4: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08000BD4: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_56:
    // 0x08000BD8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000BDC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_08000BE0:
    // 0x08000BE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BE4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000BE8: jalr        $t9
    // 0x08000BEC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08000BEC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_57:
    // 0x08000BF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000BF4: bne         $v0, $at, L_080013A0
    if (ctx->r2 != ctx->r1) {
        // 0x08000BF8: addiu       $t0, $zero, 0x9
        ctx->r8 = ADD32(0, 0X9);
            goto L_080013A0;
    }
    // 0x08000BF8: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x08000BFC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000C00: b           L_080013A0
    // 0x08000C04: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_080013A0;
    // 0x08000C04: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000C08:
    // 0x08000C08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C0C: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000C10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000C14: jalr        $t9
    // 0x08000C18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08000C18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_58:
    // 0x08000C1C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C20: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000C24: jalr        $t9
    // 0x08000C28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08000C28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_59:
    // 0x08000C2C: beq         $v0, $zero, L_080013A0
    if (ctx->r2 == 0) {
        // 0x08000C30: addiu       $t2, $zero, 0x12
        ctx->r10 = ADD32(0, 0X12);
            goto L_080013A0;
    }
    // 0x08000C30: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x08000C34: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C38: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000C3C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000C40: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x08000C44: jalr        $t9
    // 0x08000C48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08000C48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_60:
    // 0x08000C4C: b           L_080013A4
    // 0x08000C50: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000C50: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000C54:
    // 0x08000C54: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000C58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000C5C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x08000C60: bne         $t3, $at, L_08000C94
    if (ctx->r11 != ctx->r1) {
        // 0x08000C64: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08000C94;
    }
    // 0x08000C64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000C68: lw          $t4, 0x60($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X60);
    // 0x08000C6C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000C70: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x08000C74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C78: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x08000C7C: sw          $t5, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r13;
    // 0x08000C80: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000C88: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000C8C: jalr        $t9
    // 0x08000C90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08000C90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_61:
L_08000C94:
    // 0x08000C94: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x08000C98: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000C9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000CA0: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000CA8: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000CAC: beql        $t8, $zero, L_080013A4
    if (ctx->r24 == 0) {
        // 0x08000CB0: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_5;
    // 0x08000CB0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_5:
    // 0x08000CB4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000CB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CBC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000CC0: lw          $t0, 0x60($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X60);
    // 0x08000CC4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000CC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000CCC: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x08000CD0: sw          $t2, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r10;
    // 0x08000CD4: jalr        $t9
    // 0x08000CD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08000CD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_62:
    // 0x08000CDC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000CE0: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x08000CE4: b           L_080013A0
    // 0x08000CE8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080013A0;
    // 0x08000CE8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000CEC:
    // 0x08000CEC: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000CF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000CF4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000CF8: bne         $t4, $at, L_08000D14
    if (ctx->r12 != ctx->r1) {
        // 0x08000CFC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000D14;
    }
    // 0x08000CFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D00: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000D04: jalr        $t9
    // 0x08000D08: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08000D08: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_63:
    // 0x08000D0C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000D10: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_08000D14:
    // 0x08000D14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D18: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000D1C: jalr        $t9
    // 0x08000D20: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08000D20: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_64:
    // 0x08000D24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000D28: bne         $v0, $at, L_080013A0
    if (ctx->r2 != ctx->r1) {
        // 0x08000D2C: addiu       $t5, $zero, 0xB
        ctx->r13 = ADD32(0, 0XB);
            goto L_080013A0;
    }
    // 0x08000D2C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x08000D30: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000D34: b           L_080013A0
    // 0x08000D38: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080013A0;
    // 0x08000D38: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000D3C:
    // 0x08000D3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D40: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000D44: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000D48: jalr        $t9
    // 0x08000D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08000D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_65:
    // 0x08000D50: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D54: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000D58: jalr        $t9
    // 0x08000D5C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08000D5C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_66:
    // 0x08000D60: beq         $v0, $zero, L_080013A0
    if (ctx->r2 == 0) {
        // 0x08000D64: addiu       $t1, $zero, 0xC
        ctx->r9 = ADD32(0, 0XC);
            goto L_080013A0;
    }
    // 0x08000D64: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x08000D68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D6C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000D70: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000D74: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x08000D78: jalr        $t9
    // 0x08000D7C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08000D7C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_67:
    // 0x08000D80: b           L_080013A4
    // 0x08000D84: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080013A4;
    // 0x08000D84: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000D88:
    // 0x08000D88: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000D8C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x08000D90: b           L_080013A0
    // 0x08000D94: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080013A0;
    // 0x08000D94: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000D98:
    // 0x08000D98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D9C: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000DA0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000DA4: jalr        $t9
    // 0x08000DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08000DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_68:
    // 0x08000DAC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DB0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000DB4: jalr        $t9
    // 0x08000DB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08000DB8: nop

    after_69:
    // 0x08000DBC: bne         $v0, $zero, L_080013A0
    if (ctx->r2 != 0) {
        // 0x08000DC0: addiu       $t7, $zero, 0xD
        ctx->r15 = ADD32(0, 0XD);
            goto L_080013A0;
    }
    // 0x08000DC0: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x08000DC4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000DC8: b           L_080013A0
    // 0x08000DCC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_080013A0;
    // 0x08000DCC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000DD0:
    // 0x08000DD0: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000DD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000DD8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08000DDC: bne         $v0, $at, L_08000E1C
    if (ctx->r2 != ctx->r1) {
        // 0x08000DE0: lui         $a2, 0xC2A0
        ctx->r6 = S32(0XC2A0 << 16);
            goto L_08000E1C;
    }
    // 0x08000DE0: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    // 0x08000DE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DE8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000DEC: lui         $a3, 0x439E
    ctx->r7 = S32(0X439E << 16);
    // 0x08000DF0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000DF4: jalr        $t9
    // 0x08000DF8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08000DF8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_70:
    // 0x08000DFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E00: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000E04: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000E08: lui         $a1, 0xC384
    ctx->r5 = S32(0XC384 << 16);
    // 0x08000E0C: lui         $a2, 0xC200
    ctx->r6 = S32(0XC200 << 16);
    // 0x08000E10: jalr        $t9
    // 0x08000E14: lui         $a3, 0x4303
    ctx->r7 = S32(0X4303 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08000E14: lui         $a3, 0x4303
    ctx->r7 = S32(0X4303 << 16);
    after_71:
    // 0x08000E18: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08000E1C:
    // 0x08000E1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000E20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000E24: bgez        $v0, L_08000E40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000E28: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_08000E40;
    }
    // 0x08000E28: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000E2C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000E30: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000E34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000E38: nop

    // 0x08000E3C: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_08000E40:
    // 0x08000E40: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x08000E44: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000E48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E4C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000E50: c.eq.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d == ctx->f0.d;
    // 0x08000E54: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08000E58: bc1fl       L_08000EC0
    if (!c1cs) {
        // 0x08000E5C: lui         $at, 0x402E
        ctx->r1 = S32(0X402E << 16);
            goto L_08000EC0;
    }
    goto skip_6;
    // 0x08000E5C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    skip_6:
    // 0x08000E60: jalr        $t9
    // 0x08000E64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08000E64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_72:
    // 0x08000E68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E6C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000E70: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000E74: jalr        $t9
    // 0x08000E78: lui         $a1, 0x42D2
    ctx->r5 = S32(0X42D2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08000E78: lui         $a1, 0x42D2
    ctx->r5 = S32(0X42D2 << 16);
    after_73:
    // 0x08000E7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E80: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000E84: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000E88: lui         $a1, 0xC385
    ctx->r5 = S32(0XC385 << 16);
    // 0x08000E8C: lui         $a2, 0xC200
    ctx->r6 = S32(0XC200 << 16);
    // 0x08000E90: jalr        $t9
    // 0x08000E94: lui         $a3, 0x4339
    ctx->r7 = S32(0X4339 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x08000E94: lui         $a3, 0x4339
    ctx->r7 = S32(0X4339 << 16);
    after_74:
    // 0x08000E98: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000E9C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000EA0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x08000EA4: bgez        $t8, L_08000EBC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08000EA8: cvt.d.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
            goto L_08000EBC;
    }
    // 0x08000EA8: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x08000EAC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000EB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000EB4: nop

    // 0x08000EB8: add.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f0.d + ctx->f16.d;
L_08000EBC:
    // 0x08000EBC: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
L_08000EC0:
    // 0x08000EC0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000EC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000EC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ECC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000ED0: c.le.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d <= ctx->f0.d;
    // 0x08000ED4: nop

    // 0x08000ED8: bc1fl       L_080013A4
    if (!c1cs) {
        // 0x08000EDC: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_7;
    // 0x08000EDC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_7:
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08000EE4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_75:
    // 0x08000EE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000EEC: bne         $v0, $at, L_080013A0
    if (ctx->r2 != ctx->r1) {
        // 0x08000EF0: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080013A0;
    }
    // 0x08000EF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EF4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000EF8: jalr        $t9
    // 0x08000EFC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08000EFC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_76:
    // 0x08000F00: bne         $v0, $zero, L_080013A0
    if (ctx->r2 != 0) {
        // 0x08000F04: addiu       $t0, $zero, 0x13
        ctx->r8 = ADD32(0, 0X13);
            goto L_080013A0;
    }
    // 0x08000F04: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x08000F08: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000F0C: b           L_080013A0
    // 0x08000F10: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_080013A0;
    // 0x08000F10: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000F14:
    // 0x08000F14: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000F18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000F1C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000F20: bne         $t2, $at, L_08000F98
    if (ctx->r10 != ctx->r1) {
        // 0x08000F24: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_08000F98;
    }
    // 0x08000F24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000F28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F2C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F30: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000F34: jalr        $t9
    // 0x08000F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08000F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_77:
    // 0x08000F3C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F48: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08000F4C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(63, 0X14F0) << 16);
    // 0x08000F50: addiu       $t3, $zero, 0x138
    ctx->r11 = ADD32(0, 0X138);
    // 0x08000F54: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x08000F58: addiu       $a1, $a1, 0x14F0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(63, 0X14F0));
    // 0x08000F5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F60: lui         $a2, 0x42CA
    ctx->r6 = S32(0X42CA << 16);
    // 0x08000F64: lui         $a3, 0xC280
    ctx->r7 = S32(0XC280 << 16);
    // 0x08000F68: jalr        $t9
    // 0x08000F6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08000F6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_78:
    // 0x08000F70: beq         $v0, $zero, L_08000F98
    if (ctx->r2 == 0) {
        // 0x08000F74: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_08000F98;
    }
    // 0x08000F74: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000F78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F7C: addiu       $t4, $zero, 0x48
    ctx->r12 = ADD32(0, 0X48);
    // 0x08000F80: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000F84: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08000F88: jalr        $t9
    // 0x08000F8C: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08000F8C: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_79:
    // 0x08000F90: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x08000F94: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_08000F98:
    // 0x08000F98: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000F9C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x08000FA0: lw          $a1, 0xD8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD8);
    // 0x08000FA4: slti        $at, $t6, 0x18
    ctx->r1 = SIGNED(ctx->r14) < 0X18 ? 1 : 0;
    // 0x08000FA8: bne         $at, $zero, L_08001008
    if (ctx->r1 != 0) {
        // 0x08000FAC: lui         $a2, 0x800
        ctx->r6 = S32(0X800 << 16);
            goto L_08001008;
    }
    // 0x08000FAC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08000FB0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000FB4: addiu       $t9, $t9, -0x46E8
    ctx->r25 = ADD32(ctx->r25, -0X46E8);
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: addiu       $a2, $a2, 0x4698
    ctx->r6 = ADD32(ctx->r6, 0X4698);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08000FBC: addiu       $a2, $a2, 0x4698
    ctx->r6 = ADD32(ctx->r6, 0X4698);
    after_80:
    // 0x08000FC0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08000FC4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08000FC8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000FCC: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x08000FD0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000FD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000FD8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x08000FDC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08000FE0: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08000FE4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08000FE8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000FEC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000FF0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000FF4: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x08000FF8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000FFC: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08001000: ori         $t0, $t8, 0x20
    ctx->r8 = ctx->r24 | 0X20;
    // 0x08001004: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_08001008:
    // 0x08001008: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x0800100C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001010: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001014: lbu         $t3, 0x7C($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X7C);
    // 0x08001018: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    // 0x0800101C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x08001020: beql        $t4, $zero, L_080013A4
    if (ctx->r12 == 0) {
        // 0x08001024: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_8;
    // 0x08001024: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_8:
    // 0x08001028: jalr        $t9
    // 0x0800102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x0800102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_81:
    // 0x08001030: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001034: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x08001038: b           L_080013A0
    // 0x0800103C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080013A0;
    // 0x0800103C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08001040:
    // 0x08001040: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001044: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(63, 0X1C60) << 16);
    // 0x08001048: ldc1        $f8, 0x1C60($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(63, 0X1C60));
    // 0x0800104C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x08001050: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001054: bgez        $t1, L_0800106C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001058: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_0800106C;
    }
    // 0x08001058: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x0800105C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001060: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001064: nop

    // 0x08001068: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_0800106C:
    // 0x0800106C: c.eq.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d == ctx->f16.d;
    // 0x08001070: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001074: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08001078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800107C: bc1fl       L_080013A4
    if (!c1cs) {
        // 0x08001080: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_9;
    // 0x08001080: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_9:
    // 0x08001084: jalr        $t9
    // 0x08001088: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x08001088: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_82:
    // 0x0800108C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001090: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001094: jalr        $t9
    // 0x08001098: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x08001098: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_83:
    // 0x0800109C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080010A0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x080010A4: b           L_080013A0
    // 0x080010A8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080013A0;
    // 0x080010A8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_080010AC:
    // 0x080010AC: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x080010B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080010B4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x080010B8: bne         $t7, $at, L_080010D4
    if (ctx->r15 != ctx->r1) {
        // 0x080010BC: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_080010D4;
    }
    // 0x080010BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080010C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080010C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080010C8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080010CC: jalr        $t9
    // 0x080010D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x080010D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_84:
L_080010D4:
    // 0x080010D4: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x080010D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080010DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080010E0: lbu         $t0, 0x7C($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X7C);
    // 0x080010E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080010E8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080010EC: andi        $t2, $t0, 0x2
    ctx->r10 = ctx->r8 & 0X2;
    // 0x080010F0: beq         $t2, $zero, L_080013A0
    if (ctx->r10 == 0) {
        // 0x080010F4: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_080013A0;
    }
    // 0x080010F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080010F8: jalr        $t9
    // 0x080010FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x080010FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_85:
    // 0x08001100: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001104: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x08001108: b           L_080013A0
    // 0x0800110C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080013A0;
    // 0x0800110C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001110:
    // 0x08001110: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001114: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08001118: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0800111C: jalr        $t9
    // 0x08001120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08001120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_86:
    // 0x08001124: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001128: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800112C: jalr        $t9
    // 0x08001130: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x08001130: nop

    after_87:
    // 0x08001134: bne         $v0, $zero, L_080013A0
    if (ctx->r2 != 0) {
        // 0x08001138: addiu       $t4, $zero, 0xF
        ctx->r12 = ADD32(0, 0XF);
            goto L_080013A0;
    }
    // 0x08001138: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x0800113C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001140: b           L_080013A0
    // 0x08001144: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_080013A0;
    // 0x08001144: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08001148:
    // 0x08001148: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800114C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001150: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08001154: bne         $v0, $at, L_0800116C
    if (ctx->r2 != ctx->r1) {
        // 0x08001158: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800116C;
    }
    // 0x08001158: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800115C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001160: jalr        $t9
    // 0x08001164: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x08001164: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_88:
    // 0x08001168: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_0800116C:
    // 0x0800116C: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x08001170: andi        $t1, $t5, 0xFFFF
    ctx->r9 = ctx->r13 & 0XFFFF;
    // 0x08001174: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08001178: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x0800117C: mfhi        $t6
    ctx->r14 = hi;
    // 0x08001180: sh          $t5, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r13;
    // 0x08001184: bne         $t6, $zero, L_080011BC
    if (ctx->r14 != 0) {
        // 0x08001188: addiu       $a0, $zero, 0x217
        ctx->r4 = ADD32(0, 0X217);
            goto L_080011BC;
    }
    // 0x08001188: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x0800118C: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x08001190: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x08001194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001198: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x0800119C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011A0: addiu       $t9, $t9, -0x918
    ctx->r25 = ADD32(ctx->r25, -0X918);
    // 0x080011A4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x080011A8: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x080011AC: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x080011B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x080011B4: jalr        $t9
    // 0x080011B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x080011B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_89:
L_080011BC:
    // 0x080011BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011C0: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080011C4: jalr        $t9
    // 0x080011C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x080011C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_90:
    // 0x080011CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080011D0: bne         $v0, $at, L_080013A0
    if (ctx->r2 != ctx->r1) {
        // 0x080011D4: addiu       $t8, $zero, 0x19
        ctx->r24 = ADD32(0, 0X19);
            goto L_080013A0;
    }
    // 0x080011D4: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x080011D8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080011DC: b           L_080013A0
    // 0x080011E0: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_080013A0;
    // 0x080011E0: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080011E4:
    // 0x080011E4: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080011E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080011EC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x080011F0: bne         $v0, $at, L_08001254
    if (ctx->r2 != ctx->r1) {
        // 0x080011F4: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08001254;
    }
    // 0x080011F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011F8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080011FC: jalr        $t9
    // 0x08001200: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x08001200: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_91:
    // 0x08001204: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001208: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800120C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001210: jalr        $t9
    // 0x08001214: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x08001214: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    after_92:
    // 0x08001218: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800121C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001220: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001224: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08001228: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    // 0x0800122C: jalr        $t9
    // 0x08001230: lui         $a3, 0x4393
    ctx->r7 = S32(0X4393 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x08001230: lui         $a3, 0x4393
    ctx->r7 = S32(0X4393 << 16);
    after_93:
    // 0x08001234: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001238: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800123C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001240: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    // 0x08001244: lui         $a2, 0xC282
    ctx->r6 = S32(0XC282 << 16);
    // 0x08001248: jalr        $t9
    // 0x0800124C: lui         $a3, 0x4391
    ctx->r7 = S32(0X4391 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_94;
    // 0x0800124C: lui         $a3, 0x4391
    ctx->r7 = S32(0X4391 << 16);
    after_94:
    // 0x08001250: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08001254:
    // 0x08001254: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08001258: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800125C: bgez        $v0, L_08001278
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001260: cvt.d.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
            goto L_08001278;
    }
    // 0x08001260: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x08001264: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001268: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800126C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001270: nop

    // 0x08001274: add.d       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f0.d + ctx->f18.d;
L_08001278:
    // 0x08001278: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x0800127C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001280: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001284: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001288: c.eq.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d == ctx->f0.d;
    // 0x0800128C: nop

    // 0x08001290: bc1f        L_080012C4
    if (!c1cs) {
        // 0x08001294: nop
    
            goto L_080012C4;
    }
    // 0x08001294: nop

    // 0x08001298: jalr        $t9
    // 0x0800129C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_95;
    // 0x0800129C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    after_95:
    // 0x080012A0: lhu         $t0, 0x8A($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X8A);
    // 0x080012A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080012A8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x080012AC: bgez        $t0, L_080012C4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x080012B0: cvt.d.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
            goto L_080012C4;
    }
    // 0x080012B0: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x080012B4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080012B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080012BC: nop

    // 0x080012C0: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
L_080012C4:
    // 0x080012C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(63, 0X1C68) << 16);
    // 0x080012C8: ldc1        $f6, 0x1C68($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(63, 0X1C68));
    // 0x080012CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012D0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080012D4: c.eq.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d == ctx->f0.d;
    // 0x080012D8: nop

    // 0x080012DC: bc1fl       L_080013A4
    if (!c1cs) {
        // 0x080012E0: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_080013A4;
    }
    goto skip_10;
    // 0x080012E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_10:
    // 0x080012E4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080012E8: jalr        $t9
    // 0x080012EC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_96;
    // 0x080012EC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_96:
    // 0x080012F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012F4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080012F8: jalr        $t9
    // 0x080012FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_97;
    // 0x080012FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_97:
    // 0x08001300: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001304: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08001308: jalr        $t9
    // 0x0800130C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_98;
    // 0x0800130C: nop

    after_98:
    // 0x08001310: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001314: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001318: jalr        $t9
    // 0x0800131C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_99;
    // 0x0800131C: nop

    after_99:
    // 0x08001320: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08001324: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08001328: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800132C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001330: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08001334: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08001338: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x0800133C: jalr        $t9
    // 0x08001340: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_100;
    // 0x08001340: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_100:
    // 0x08001344: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08001348: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x0800134C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08001350: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08001354: sb          $zero, 0x64($t3)
    MEM_B(0X64, ctx->r11) = 0;
    // 0x08001358: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x0800135C: lw          $t5, -0x39DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39DC);
    // 0x08001360: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001364: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001368: sb          $t4, 0xD0($t5)
    MEM_B(0XD0, ctx->r13) = ctx->r12;
    // 0x0800136C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001370: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001374: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08001378: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800137C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08001380: jalr        $t9
    // 0x08001384: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_101;
    // 0x08001384: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_101:
    // 0x08001388: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800138C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001390: jalr        $t9
    // 0x08001394: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_102;
    // 0x08001394: nop

    after_102:
    // 0x08001398: b           L_080013CC
    // 0x0800139C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080013CC;
    // 0x0800139C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080013A0:
    // 0x080013A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_080013A4:
    // 0x080013A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013A8: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080013AC: beql        $a0, $zero, L_080013C0
    if (ctx->r4 == 0) {
        // 0x080013B0: lhu         $t1, 0x8A($s1)
        ctx->r9 = MEM_HU(ctx->r17, 0X8A);
            goto L_080013C0;
    }
    goto skip_11;
    // 0x080013B0: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    skip_11:
    // 0x080013B4: jalr        $t9
    // 0x080013B8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_103;
    // 0x080013B8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_103:
    // 0x080013BC: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
L_080013C0:
    // 0x080013C0: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x080013C4: sh          $t6, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r14;
    // 0x080013C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080013CC:
    // 0x080013CC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080013D0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080013D4: jr          $ra
    // 0x080013D8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x080013D8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_080018E8_732B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080018EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080018F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080018F4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080018F8: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x080018FC: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    // 0x08001900: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08001904: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08001908: beq         $at, $zero, L_08001914
    if (ctx->r1 == 0) {
        // 0x0800190C: addiu       $t6, $zero, 0xFA
        ctx->r14 = ADD32(0, 0XFA);
            goto L_08001914;
    }
    // 0x0800190C: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x08001910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08001914:
    // 0x08001914: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001918: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
    // 0x0800191C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001920: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001924: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001928: jalr        $t9
    // 0x0800192C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800192C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_0:
    // 0x08001930: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001934: addiu       $t9, $t9, -0x61C0
    ctx->r25 = ADD32(ctx->r25, -0X61C0);
    // 0x08001938: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x0800193C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001940: jalr        $t9
    // 0x08001944: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001944: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_1:
    // 0x08001948: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800194C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001950: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001954: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001958: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800195C: bnel        $t7, $at, L_08001970
    if (ctx->r15 != ctx->r1) {
        // 0x08001960: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001970;
    }
    goto skip_0;
    // 0x08001960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001964: jalr        $t9
    // 0x08001968: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001968: nop

    after_2:
    // 0x0800196C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001970:
    // 0x08001970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001974: jr          $ra
    // 0x08001978: nop

    TRACE_RETURN()
    return;
    // 0x08001978: nop

;}
RECOMP_FUNC void func_08000CA8_733BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CA8: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x08000CAC: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000CB0: jr          $ra
    // 0x08000CB4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08000CB4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_08000DB8_733CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000DC0: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x08000DC4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000DC8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08000DCC: beql        $t6, $zero, L_08000E04
    if (ctx->r14 == 0) {
        // 0x08000DD0: lw          $v1, 0x68($a2)
        ctx->r3 = MEM_W(ctx->r6, 0X68);
            goto L_08000E04;
    }
    goto skip_0;
    // 0x08000DD0: lw          $v1, 0x68($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X68);
    skip_0:
    // 0x08000DD4: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x08000DD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DDC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000DE0: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x08000DE4: bne         $t8, $zero, L_08000E00
    if (ctx->r24 != 0) {
        // 0x08000DE8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000E00;
    }
    // 0x08000DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000DEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08000DF0: jalr        $t9
    // 0x08000DF4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DF4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000DF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000DFC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_08000E00:
    // 0x08000E00: lw          $v1, 0x68($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X68);
L_08000E04:
    // 0x08000E04: addiu       $v0, $a2, 0xD0
    ctx->r2 = ADD32(ctx->r6, 0XD0);
    // 0x08000E08: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000E0C: andi        $t0, $v1, 0x200
    ctx->r8 = ctx->r3 & 0X200;
    // 0x08000E10: bne         $t0, $zero, L_08000E24
    if (ctx->r8 != 0) {
        // 0x08000E14: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000E24;
    }
    // 0x08000E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E18: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x08000E1C: andi        $t4, $v1, 0x1000
    ctx->r12 = ctx->r3 & 0X1000;
    // 0x08000E20: beq         $t1, $zero, L_08000E64
    if (ctx->r9 == 0) {
        // 0x08000E24: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000E64;
    }
L_08000E24:
    // 0x08000E24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E28: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000E2C: jalr        $t9
    // 0x08000E30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000E34: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000E38: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08000E3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E40: lw          $t2, 0x60($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X60);
    // 0x08000E44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E48: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08000E4C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08000E50: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    // 0x08000E54: jalr        $t9
    // 0x08000E58: sw          $t3, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E58: sw          $t3, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r11;
    after_2:
    // 0x08000E5C: b           L_08000EA0
    // 0x08000E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000EA0;
    // 0x08000E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000E64:
    // 0x08000E64: beql        $t4, $zero, L_08000E84
    if (ctx->r12 == 0) {
        // 0x08000E68: lhu         $t5, 0x16($a3)
        ctx->r13 = MEM_HU(ctx->r7, 0X16);
            goto L_08000E84;
    }
    goto skip_1;
    // 0x08000E68: lhu         $t5, 0x16($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X16);
    skip_1:
    // 0x08000E6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000E70: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08000E74: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    // 0x08000E78: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x08000E7C: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x08000E80: lhu         $t5, 0x16($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X16);
L_08000E84:
    // 0x08000E84: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x08000E88: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08000E8C: sh          $t7, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r15;
    // 0x08000E90: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x08000E94: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000E98: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x08000E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000EA0:
    // 0x08000EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000EA4: jr          $ra
    // 0x08000EA8: nop

    TRACE_RETURN()
    return;
    // 0x08000EA8: nop

;}
RECOMP_FUNC void func_08000CC0_733BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CC0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CC4: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08000CC8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000CCC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08000CD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000CD4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000CD8: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x08000CDC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000CE0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08000CE4: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
    // 0x08000CE8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08000CEC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000CF0: jr          $ra
    // 0x08000CF4: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000CF4: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000000_732F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000010: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000018: jalr        $t9
    // 0x0800001C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x08000020: beq         $v0, $zero, L_08000040
    if (ctx->r2 == 0) {
        // 0x08000024: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_08000040;
    }
    // 0x08000024: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000028: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800002C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000030: jalr        $t9
    // 0x08000034: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000034: nop

    after_1:
    // 0x08000038: b           L_08000084
    // 0x0800003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000084;
    // 0x0800003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000040:
    // 0x08000040: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000044: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000048: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800004C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000050: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000054: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x08000058: jalr        $t9
    // 0x0800005C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800005C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x08000060: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08000064: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000068: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800006C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(64, 0X90) << 16);
    // 0x08000070: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x08000074: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x08000078: jalr        $t9
    // 0x0800007C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(64, 0X90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800007C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(64, 0X90));
    after_3:
    // 0x08000080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000084:
    // 0x08000084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000088: jr          $ra
    // 0x0800008C: nop

    TRACE_RETURN()
    return;
    // 0x0800008C: nop

;}
RECOMP_FUNC void func_080012FC_73422C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012FC: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001300: jr          $ra
    // 0x08001304: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    TRACE_RETURN()
    return;
    // 0x08001304: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
;}
RECOMP_FUNC void func_08001324_734254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001324: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001328: jr          $ra
    // 0x0800132C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800132C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_080015F8_734528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015F8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x080015FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001600: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001608: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x0800160C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001610: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x08001614: jalr        $t9
    // 0x08001618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800161C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001624: jr          $ra
    // 0x08001628: nop

    TRACE_RETURN()
    return;
    // 0x08001628: nop

;}
RECOMP_FUNC void func_08000CB8_733BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CB8: jr          $ra
    // 0x08000CBC: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000CBC: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_080011AC_7340DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080011B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080011B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080011B8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080011BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(64, 0X1008) << 16);
    // 0x080011C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080011C4: addiu       $a1, $a1, 0x1008
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(64, 0X1008));
    // 0x080011C8: jalr        $t9
    // 0x080011CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080011D0: bne         $v0, $zero, L_080011E0
    if (ctx->r2 != 0) {
        // 0x080011D4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080011E0;
    }
    // 0x080011D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080011D8: b           L_08001288
    // 0x080011DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001288;
    // 0x080011DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080011E0:
    // 0x080011E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011E4: addiu       $t6, $zero, 0x49
    ctx->r14 = ADD32(0, 0X49);
    // 0x080011E8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080011EC: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x080011F0: jalr        $t9
    // 0x080011F4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011F4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x080011F8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080011FC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001200: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001204: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001208: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800120C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001210: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001214: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x08001218: jalr        $t9
    // 0x0800121C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800121C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x08001220: addiu       $t7, $zero, 0x352
    ctx->r15 = ADD32(0, 0X352);
    // 0x08001224: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001228: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x0800122C: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08001230: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001234: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08001238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001240: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001244: jalr        $t9
    // 0x08001248: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001248: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x0800124C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08001250: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001254: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x08001258: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x0800125C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08001260: lbu         $t1, 0xD8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XD8);
    // 0x08001264: lui         $at, 0x4460
    ctx->r1 = S32(0X4460 << 16);
    // 0x08001268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800126C: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08001270: lbu         $t2, 0xD8($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XD8);
    // 0x08001274: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08001278: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x0800127C: sb          $t3, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r11;
    // 0x08001280: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x08001284: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
L_08001288:
    // 0x08001288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800128C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001294: jr          $ra
    // 0x08001298: nop

    TRACE_RETURN()
    return;
    // 0x08001298: nop

    // 0x0800129C: jr          $ra
    // 0x080012A0: nop

    TRACE_RETURN()
    return;
    // 0x080012A0: nop

;}
RECOMP_FUNC void func_08001330_734260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001330: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08001334: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08001338: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x0800133C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001340: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x08001344: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x08001348: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x0800134C: bgezl       $a2, L_0800135C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x08001350: slti        $at, $a2, 0x201
        ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
            goto L_0800135C;
    }
    goto skip_0;
    // 0x08001350: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
    skip_0:
    // 0x08001354: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x08001358: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
L_0800135C:
    // 0x0800135C: bne         $at, $zero, L_08001384
    if (ctx->r1 != 0) {
        // 0x08001360: subu        $t9, $t8, $a2
        ctx->r25 = SUB32(ctx->r24, ctx->r6);
            goto L_08001384;
    }
    // 0x08001360: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x08001364: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08001368: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x0800136C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x08001370: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001374: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001378: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x0800137C: b           L_080013A4
    // 0x08001380: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
        goto L_080013A4;
    // 0x08001380: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_08001384:
    // 0x08001384: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08001388: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x0800138C: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x08001390: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001394: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001398: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x0800139C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x080013A0: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_080013A4:
    // 0x080013A4: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    // 0x080013A8: lhu         $t0, 0x16($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X16);
    // 0x080013AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080013B0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x080013B4: bgez        $t0, L_080013C8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x080013B8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_080013C8;
    }
    // 0x080013B8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080013BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080013C0: nop

    // 0x080013C4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_080013C8:
    // 0x080013C8: jr          $ra
    // 0x080013CC: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080013CC: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000DA8_733CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DA8: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x08000DAC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x08000DB0: jr          $ra
    // 0x08000DB4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08000DB4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_08001008_733F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800100C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001010: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001014: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001018: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x0800101C: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x08001020: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x08001024: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08001028: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x0800102C: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x08001030: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001034: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001038: beql        $t1, $zero, L_08001060
    if (ctx->r9 == 0) {
        // 0x0800103C: lw          $t2, 0x10($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X10);
            goto L_08001060;
    }
    goto skip_0;
    // 0x0800103C: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x08001040: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001044: jalr        $t9
    // 0x08001048: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001048: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800104C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001050: beq         $v0, $zero, L_0800105C
    if (ctx->r2 == 0) {
        // 0x08001054: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_0800105C;
    }
    // 0x08001054: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001058: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_0800105C:
    // 0x0800105C: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
L_08001060:
    // 0x08001060: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001064: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08001068: beql        $t2, $zero, L_0800109C
    if (ctx->r10 == 0) {
        // 0x0800106C: lw          $t3, 0x2C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X2C);
            goto L_0800109C;
    }
    goto skip_1;
    // 0x0800106C: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    skip_1:
    // 0x08001070: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x08001074: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x08001078: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x0800107C: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x08001080: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001084: jalr        $t9
    // 0x08001088: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001088: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x0800108C: bne         $v0, $zero, L_08001098
    if (ctx->r2 != 0) {
        // 0x08001090: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08001098;
    }
    // 0x08001090: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001094: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_08001098:
    // 0x08001098: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
L_0800109C:
    // 0x0800109C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080010A0: beql        $t3, $zero, L_080011A0
    if (ctx->r11 == 0) {
        // 0x080010A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080011A0;
    }
    goto skip_2;
    // 0x080010A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x080010A8: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x080010AC: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x080010B0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x080010B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080010B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080010BC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080010C0: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x080010C4: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x080010C8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x080010CC: nop

    // 0x080010D0: bc1fl       L_080010EC
    if (!c1cs) {
        // 0x080010D4: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_080010EC;
    }
    goto skip_3;
    // 0x080010D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_3:
    // 0x080010D8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x080010DC: swc1        $f16, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f16.u32l;
    // 0x080010E0: b           L_0800110C
    // 0x080010E4: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
        goto L_0800110C;
    // 0x080010E4: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x080010E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_080010EC:
    // 0x080010EC: nop

    // 0x080010F0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x080010F4: nop

    // 0x080010F8: bc1fl       L_08001110
    if (!c1cs) {
        // 0x080010FC: cfc1        $t7, $FpcCsr
        ctx->r15 = get_cop1_cs();
            goto L_08001110;
    }
    goto skip_4;
    // 0x080010FC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    skip_4:
    // 0x08001100: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x08001104: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x08001108: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
L_0800110C:
    // 0x0800110C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_08001110:
    // 0x08001110: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08001114: lw          $t4, 0x2C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X2C);
    // 0x08001118: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x0800111C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x08001120: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
    // 0x08001124: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08001128: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x0800112C: nop

    // 0x08001130: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x08001134: beql        $t8, $zero, L_08001184
    if (ctx->r24 == 0) {
        // 0x08001138: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_08001184;
    }
    goto skip_5;
    // 0x08001138: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_5:
    // 0x0800113C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001140: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001144: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08001148: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x0800114C: nop

    // 0x08001150: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08001154: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08001158: nop

    // 0x0800115C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x08001160: bne         $t8, $zero, L_08001178
    if (ctx->r24 != 0) {
        // 0x08001164: nop
    
            goto L_08001178;
    }
    // 0x08001164: nop

    // 0x08001168: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x0800116C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001170: b           L_08001190
    // 0x08001174: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_08001190;
    // 0x08001174: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_08001178:
    // 0x08001178: b           L_08001190
    // 0x0800117C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_08001190;
    // 0x0800117C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x08001180: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_08001184:
    // 0x08001184: nop

    // 0x08001188: bltz        $t8, L_08001178
    if (SIGNED(ctx->r24) < 0) {
        // 0x0800118C: nop
    
            goto L_08001178;
    }
    // 0x0800118C: nop

L_08001190:
    // 0x08001190: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08001194: sh          $t8, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r24;
    // 0x08001198: nop

    // 0x0800119C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080011A0:
    // 0x080011A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080011A4: jr          $ra
    // 0x080011A8: nop

    TRACE_RETURN()
    return;
    // 0x080011A8: nop

;}
RECOMP_FUNC void func_080013D0_734300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013D0: jr          $ra
    // 0x080013D4: nop

    TRACE_RETURN()
    return;
    // 0x080013D4: nop

;}
RECOMP_FUNC void func_08000EAC_733DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000EB0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000EB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000EB8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000EBC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(64, 0XDB8) << 16);
    // 0x08000EC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000EC4: addiu       $a1, $a1, 0xDB8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(64, 0XDB8));
    // 0x08000EC8: jalr        $t9
    // 0x08000ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08000ED0: bne         $v0, $zero, L_08000EE0
    if (ctx->r2 != 0) {
        // 0x08000ED4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000EE0;
    }
    // 0x08000ED4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000ED8: b           L_08000FB4
    // 0x08000EDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000FB4;
    // 0x08000EDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000EE0:
    // 0x08000EE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EE4: addiu       $t6, $zero, 0x49
    ctx->r14 = ADD32(0, 0X49);
    // 0x08000EE8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000EEC: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08000EF0: jalr        $t9
    // 0x08000EF4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EF4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x08000EF8: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000EFC: addiu       $t7, $zero, 0x350
    ctx->r15 = ADD32(0, 0X350);
    // 0x08000F00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F04: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000F08: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000F0C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000F18: jalr        $t9
    // 0x08000F1C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F1C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x08000F20: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(64, 0X1854) << 16);
    // 0x08000F24: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000F28: lwc1        $f0, 0x1854($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X1854));
    // 0x08000F2C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000F30: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000F34: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000F38: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08000F3C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000F40: lbu         $t1, 0xD8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XD8);
    // 0x08000F44: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08000F48: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000F4C: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08000F50: lbu         $t2, 0xD8($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XD8);
    // 0x08000F54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F5C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000F60: sb          $t3, 0xD8($t0)
    MEM_B(0XD8, ctx->r8) = ctx->r11;
    // 0x08000F64: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F6C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000F70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000F74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000F78: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x08000F7C: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    // 0x08000F80: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x08000F84: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000F88: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000F8C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000F90: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x08000F94: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x08000F98: jalr        $t9
    // 0x08000F9C: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F9C: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    after_3:
    // 0x08000FA0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000FA4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000FA8: jalr        $t9
    // 0x08000FAC: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000FAC: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_4:
    // 0x08000FB0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_08000FB4:
    // 0x08000FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000FBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000FC0: jr          $ra
    // 0x08000FC4: nop

    TRACE_RETURN()
    return;
    // 0x08000FC4: nop

;}
RECOMP_FUNC void func_0800165C_73458C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800165C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001664: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001668: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x0800166C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001670: beql        $v0, $zero, L_08001694
    if (ctx->r2 == 0) {
        // 0x08001674: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_08001694;
    }
    goto skip_0;
    // 0x08001674: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x08001678: beq         $v0, $at, L_080016AC
    if (ctx->r2 == ctx->r1) {
        // 0x0800167C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080016AC;
    }
    // 0x0800167C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001680: beq         $v0, $at, L_080016E4
    if (ctx->r2 == ctx->r1) {
        // 0x08001684: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_080016E4;
    }
    // 0x08001684: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001688: b           L_080016EC
    // 0x0800168C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
        goto L_080016EC;
    // 0x0800168C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001690: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_08001694:
    // 0x08001694: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08001698: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x0800169C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x080016A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080016A4: b           L_080016EC
    // 0x080016A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_080016EC;
    // 0x080016A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_080016AC:
    // 0x080016AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080016B0: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x080016B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x080016B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080016BC: bne         $v1, $at, L_080016EC
    if (ctx->r3 != ctx->r1) {
        // 0x080016C0: addiu       $t9, $t9, 0x4ED4
        ctx->r25 = ADD32(ctx->r25, 0X4ED4);
            goto L_080016EC;
    }
    // 0x080016C0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080016C4: jalr        $t9
    // 0x080016C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x080016CC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080016D0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x080016D4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x080016D8: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080016DC: b           L_080016EC
    // 0x080016E0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_080016EC;
    // 0x080016E0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_080016E4:
    // 0x080016E4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080016E8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_080016EC:
    // 0x080016EC: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x080016F0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x080016F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080016F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080016FC: jr          $ra
    // 0x08001700: nop

    TRACE_RETURN()
    return;
    // 0x08001700: nop

;}
RECOMP_FUNC void func_08000C64_733B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C6C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000C70: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x08000C74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C78: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08000C7C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000C80: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000C84: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08000C88: jalr        $t9
    // 0x08000C8C: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C8C: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    after_0:
    // 0x08000C90: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000C94: sw          $v0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r2;
    // 0x08000C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000CA0: jr          $ra
    // 0x08000CA4: nop

    TRACE_RETURN()
    return;
    // 0x08000CA4: nop

;}
RECOMP_FUNC void func_080015F0_734520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015F0: jr          $ra
    // 0x080015F4: nop

    TRACE_RETURN()
    return;
    // 0x080015F4: nop

;}
RECOMP_FUNC void func_08000FC8_733EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(64, 0X1858) << 16);
    // 0x08000FCC: lwc1        $f4, 0x1858($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X1858));
    // 0x08000FD0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000FD4: lui         $at, 0x280
    ctx->r1 = S32(0X280 << 16);
    // 0x08000FD8: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x08000FDC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x08000FE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08000FE4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000FE8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000FEC: sb          $t8, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r24;
    // 0x08000FF0: sw          $t9, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r25;
    // 0x08000FF4: jr          $ra
    // 0x08000FF8: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000FF8: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080014B0_7343E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080014B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080014B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080014BC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080014C0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(64, 0X13D8) << 16);
    // 0x080014C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080014C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080014CC: addiu       $a1, $a1, 0x13D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(64, 0X13D8));
    // 0x080014D0: jalr        $t9
    // 0x080014D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x080014D8: bne         $v0, $zero, L_080014E8
    if (ctx->r2 != 0) {
        // 0x080014DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080014E8;
    }
    // 0x080014DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080014E0: b           L_080015DC
    // 0x080014E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080015DC;
    // 0x080014E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080014E8:
    // 0x080014E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014EC: addiu       $t6, $zero, 0x49
    ctx->r14 = ADD32(0, 0X49);
    // 0x080014F0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080014F4: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x080014F8: jalr        $t9
    // 0x080014FC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014FC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x08001500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001504: addiu       $t7, $zero, 0x310
    ctx->r15 = ADD32(0, 0X310);
    // 0x08001508: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800150C: lui         $a2, 0x3CCC
    ctx->r6 = S32(0X3CCC << 16);
    // 0x08001510: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08001514: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x08001518: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x0800151C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001524: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001528: jalr        $t9
    // 0x0800152C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800152C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001530: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001534: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x08001538: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800153C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08001540: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001544: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001548: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x0800154C: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08001550: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001554: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800155C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08001560: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x08001564: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08001568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800156C: jalr        $t9
    // 0x08001570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001574: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001578: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800157C: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x08001580: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001584: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
    // 0x08001588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800158C: jalr        $t9
    // 0x08001590: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001590: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x08001594: lui         $at, 0xC2F8
    ctx->r1 = S32(0XC2F8 << 16);
    // 0x08001598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800159C: lui         $at, 0x4304
    ctx->r1 = S32(0X4304 << 16);
    // 0x080015A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080015A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080015A8: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x080015AC: sh          $t4, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r12;
    // 0x080015B0: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080015B4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x080015B8: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x080015BC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080015C0: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x080015C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080015C8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x080015CC: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x080015D0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x080015D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x080015D8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
L_080015DC:
    // 0x080015DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080015E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080015E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080015E8: jr          $ra
    // 0x080015EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080015EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080012C8_7341F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x080012CC: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080012D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080012D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x080012D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080012DC: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x080012E0: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x080012E4: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x080012E8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080012EC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x080012F0: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x080012F4: jr          $ra
    // 0x080012F8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x080012F8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_08001704_734634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001708: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800170C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001710: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08001714: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(64, 0X165C) << 16);
    // 0x08001718: addiu       $a1, $a1, 0x165C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(64, 0X165C));
    // 0x0800171C: jalr        $t9
    // 0x08001720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08001724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800172C: jr          $ra
    // 0x08001730: nop

    TRACE_RETURN()
    return;
    // 0x08001730: nop

;}
RECOMP_FUNC void func_08001308_734238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001308: jr          $ra
    // 0x0800130C: nop

    TRACE_RETURN()
    return;
    // 0x0800130C: nop

    // 0x08001310: jr          $ra
    // 0x08001314: nop

    TRACE_RETURN()
    return;
    // 0x08001314: nop

;}
RECOMP_FUNC void func_08000FFC_733F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001000: jr          $ra
    // 0x08001004: sw          $t6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x08001004: sw          $t6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_08000090_732FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000090: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000094: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000098: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800009C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x080000A0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080000A4: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080000A8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x080000AC: sltiu       $at, $t7, 0x19
    ctx->r1 = ctx->r15 < 0X19 ? 1 : 0;
    // 0x080000B0: beq         $at, $zero, L_08000A8C
    if (ctx->r1 == 0) {
        // 0x080000B4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08000A8C;
    }
    // 0x080000B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x080000B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(64, 0X17E8) << 16);
    // 0x080000BC: addu        $at, $at, $t7
    gpr jr_addend_080000C4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080000C0: lw          $t7, 0x17E8($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(64, 0X17E8));
    // 0x080000C4: jr          $t7
    // 0x080000C8: nop

    switch (jr_addend_080000C4 >> 2) {
        case 0: goto L_080000CC; break;
        case 1: goto L_08000224; break;
        case 2: goto L_08000258; break;
        case 3: goto L_08000290; break;
        case 4: goto L_080002FC; break;
        case 5: goto L_0800034C; break;
        case 6: goto L_0800041C; break;
        case 7: goto L_080004AC; break;
        case 8: goto L_080004DC; break;
        case 9: goto L_08000560; break;
        case 10: goto L_080005A8; break;
        case 11: goto L_08000620; break;
        case 12: goto L_0800067C; break;
        case 13: goto L_080006B0; break;
        case 14: goto L_080006EC; break;
        case 15: goto L_08000814; break;
        case 16: goto L_08000850; break;
        case 17: goto L_08000894; break;
        case 18: goto L_080008D0; break;
        case 19: goto L_08000900; break;
        case 20: goto L_08000948; break;
        case 21: goto L_080009B0; break;
        case 22: goto L_080009E0; break;
        case 23: goto L_08000A0C; break;
        case 24: goto L_08000A74; break;
        default: switch_error(__func__, 0x080000C4, 0x080017E8);
    }
    // 0x080000C8: nop

L_080000CC:
    // 0x080000CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080000D4: jalr        $t9
    // 0x080000D8: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000D8: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    after_0:
    // 0x080000DC: beq         $v0, $zero, L_08000A8C
    if (ctx->r2 == 0) {
        // 0x080000E0: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000A8C;
    }
    // 0x080000E0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080000E4: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x080000E8: jalr        $t9
    // 0x080000EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000EC: nop

    after_1:
    // 0x080000F0: jal         0x08000BD8
    // 0x080000F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_08000BD8_733B08(rdram, ctx);
        goto after_2;
    // 0x080000F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x080000F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000FC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000100: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000104: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000108: jalr        $t9
    // 0x0800010C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800010C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08000110: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08000114: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000118: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x0800011C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000120: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000124: lw          $t0, 0x2C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X2C);
    // 0x08000128: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800012C: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000130: and         $a1, $t0, $at
    ctx->r5 = ctx->r8 & ctx->r1;
    // 0x08000134: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x08000138: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x0800013C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000140: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000144: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x08000148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800014C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x08000150: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08000154: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x08000158: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x0800015C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000160: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08000164: jalr        $t9
    // 0x08000168: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000168: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x0800016C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000170: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000174: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08000178: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800017C: sb          $t5, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r13;
    // 0x08000180: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000184: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000188: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800018C: jalr        $v0
    // 0x08000190: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000190: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_5:
    // 0x08000194: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000198: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800019C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080001A4: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_6:
    // 0x080001A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080001AC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080001B0: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080001B4: jalr        $t9
    // 0x080001B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001B8: nop

    after_7:
    // 0x080001BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001C0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080001C4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080001C8: lui         $a1, 0xC32A
    ctx->r5 = S32(0XC32A << 16);
    // 0x080001CC: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x080001D0: jalr        $t9
    // 0x080001D4: lui         $a3, 0xC220
    ctx->r7 = S32(0XC220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001D4: lui         $a3, 0xC220
    ctx->r7 = S32(0XC220 << 16);
    after_8:
    // 0x080001D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080001DC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080001E0: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001E8: nop

    after_9:
    // 0x080001EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080001F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001F4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080001F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080001FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000200: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000204: jalr        $t9
    // 0x08000208: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000208: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_10:
    // 0x0800020C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000210: addiu       $t7, $zero, 0x69
    ctx->r15 = ADD32(0, 0X69);
    // 0x08000214: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x08000218: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800021C: b           L_08000A8C
    // 0x08000220: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000A8C;
    // 0x08000220: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_08000224:
    // 0x08000224: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000228: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x0800022C: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000230: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000A8C;
    }
    // 0x08000230: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000234: jal         0x08000EAC
    // 0x08000238: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_08000EAC_733DDC(rdram, ctx);
        goto after_11;
    // 0x08000238: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x0800023C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000240: addiu       $t2, $zero, 0x4B
    ctx->r10 = ADD32(0, 0X4B);
    // 0x08000244: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08000248: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800024C: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x08000250: b           L_08000A8C
    // 0x08000254: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A8C;
    // 0x08000254: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000258:
    // 0x08000258: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0800025C: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08000260: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000264: sw          $t5, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r13;
            goto L_08000A8C;
    }
    // 0x08000264: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x08000268: jal         0x08000FC8
    // 0x0800026C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000FC8_733EF8(rdram, ctx);
        goto after_12;
    // 0x0800026C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_12:
    // 0x08000270: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000274: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000278: jalr        $t9
    // 0x0800027C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800027C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_13:
    // 0x08000280: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000284: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000288: b           L_08000A8C
    // 0x0800028C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000A8C;
    // 0x0800028C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000290:
    // 0x08000290: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x08000294: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000298: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800029C: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080002A0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080002A4: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x080002A8: jalr        $t9
    // 0x080002AC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080002AC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_14:
    // 0x080002B0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x080002B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002B8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080002BC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080002C0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080002C4: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x080002C8: jalr        $t9
    // 0x080002CC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080002CC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_15:
    // 0x080002D0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x080002D4: lw          $t1, 0x68($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X68);
    // 0x080002D8: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x080002DC: beql        $t2, $zero, L_08000A90
    if (ctx->r10 == 0) {
        // 0x080002E0: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_08000A90;
    }
    goto skip_0;
    // 0x080002E0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x080002E4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x080002E8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x080002EC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080002F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080002F4: b           L_08000A8C
    // 0x080002F8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A8C;
    // 0x080002F8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_080002FC:
    // 0x080002FC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000300: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08000304: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000308: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800030C: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000310: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08000A8C;
    }
    // 0x08000310: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x08000314: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000318: jalr        $t9
    // 0x0800031C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800031C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_16:
    // 0x08000320: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000324: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000328: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800032C: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x08000330: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x08000334: jalr        $t9
    // 0x08000338: lw          $a3, 0x30($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000338: lw          $a3, 0x30($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X30);
    after_17:
    // 0x0800033C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08000340: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000344: b           L_08000A8C
    // 0x08000348: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08000A8C;
    // 0x08000348: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_0800034C:
    // 0x0800034C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000350: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000354: jalr        $t9
    // 0x08000358: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000358: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_18:
    // 0x0800035C: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000360: lui         $v1, 0x8020
        ctx->r3 = S32(0X8020 << 16);
            goto L_08000A8C;
    }
    // 0x08000360: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000364: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000368: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800036C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000370: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000374: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x08000378: nop

    // 0x0800037C: bc1fl       L_080003B8
    if (!c1cs) {
        // 0x08000380: lwc1        $f18, 0x10($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
            goto L_080003B8;
    }
    goto skip_1;
    // 0x08000380: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x08000384: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000388: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x0800038C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x08000390: nop

    // 0x08000394: bc1f        L_080003A4
    if (!c1cs) {
        // 0x08000398: nop
    
            goto L_080003A4;
    }
    // 0x08000398: nop

    // 0x0800039C: b           L_080003A4
    // 0x080003A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_080003A4;
    // 0x080003A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_080003A4:
    // 0x080003A4: jal         0x08000C64
    // 0x080003A8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000C64_733B94(rdram, ctx);
        goto after_19;
    // 0x080003A8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_19:
    // 0x080003AC: b           L_080003DC
    // 0x080003B0: nop

        goto L_080003DC;
    // 0x080003B0: nop

    // 0x080003B4: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
L_080003B8:
    // 0x080003B8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080003BC: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x080003C0: nop

    // 0x080003C4: bc1f        L_080003D4
    if (!c1cs) {
        // 0x080003C8: nop
    
            goto L_080003D4;
    }
    // 0x080003C8: nop

    // 0x080003CC: b           L_080003D4
    // 0x080003D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_080003D4;
    // 0x080003D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_080003D4:
    // 0x080003D4: jal         0x08000C64
    // 0x080003D8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000C64_733B94(rdram, ctx);
        goto after_20;
    // 0x080003D8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_20:
L_080003DC:
    // 0x080003DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003E0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080003E4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080003E8: jalr        $t9
    // 0x080003EC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080003EC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_21:
    // 0x080003F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080003F8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080003FC: lui         $a1, 0xC28C
    ctx->r5 = S32(0XC28C << 16);
    // 0x08000400: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x08000404: jalr        $t9
    // 0x08000408: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000408: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_22:
    // 0x0800040C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x08000410: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000414: b           L_08000A8C
    // 0x08000418: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000A8C;
    // 0x08000418: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_0800041C:
    // 0x0800041C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000420: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000424: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000428: jalr        $t9
    // 0x0800042C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800042C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_23:
    // 0x08000430: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000434: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000438: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800043C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000444: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000448: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800044C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000450: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000454: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000458: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800045C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000460: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000464: jalr        $t9
    // 0x08000468: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000468: nop

    after_24:
    // 0x0800046C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(64, 0XCA8) << 16);
    // 0x08000470: addiu       $t9, $t9, 0xCA8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(64, 0XCA8));
    // 0x08000474: jalr        $t9
    // 0x08000478: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000478: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_25:
    // 0x0800047C: bnel        $v0, $zero, L_08000A90
    if (ctx->r2 != 0) {
        // 0x08000480: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_08000A90;
    }
    goto skip_2;
    // 0x08000480: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_2:
    // 0x08000484: jal         0x08000FFC
    // 0x08000488: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000FFC_733F2C(rdram, ctx);
        goto after_26;
    // 0x08000488: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_26:
    // 0x0800048C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000490: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000494: jalr        $t9
    // 0x08000498: addiu       $a0, $zero, 0x73
    ctx->r4 = ADD32(0, 0X73);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000498: addiu       $a0, $zero, 0x73
    ctx->r4 = ADD32(0, 0X73);
    after_27:
    // 0x0800049C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080004A0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080004A4: b           L_08000A8C
    // 0x080004A8: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000A8C;
    // 0x080004A8: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080004AC:
    // 0x080004AC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080004B0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080004B4: jalr        $t9
    // 0x080004B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x080004B8: nop

    after_28:
    // 0x080004BC: bnel        $v0, $zero, L_08000A90
    if (ctx->r2 != 0) {
        // 0x080004C0: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_08000A90;
    }
    goto skip_3;
    // 0x080004C0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_3:
    // 0x080004C4: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x080004C8: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x080004CC: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x080004D0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080004D4: b           L_08000A8C
    // 0x080004D8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08000A8C;
    // 0x080004D8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_080004DC:
    // 0x080004DC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080004E0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080004E4: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x080004E8: sw          $t7, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r15;
            goto L_08000A8C;
    }
    // 0x080004E8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x080004EC: jal         0x080011AC
    // 0x080004F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_080011AC_7340DC(rdram, ctx);
        goto after_29;
    // 0x080004F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_29:
    // 0x080004F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080004F8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080004FC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000500: jalr        $t9
    // 0x08000504: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000504: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_30:
    // 0x08000508: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800050C: lui         $a1, 0xC286
    ctx->r5 = S32(0XC286 << 16);
    // 0x08000510: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x08000514: jal         0x080012A4
    // 0x08000518: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    func_080012A4_7341D4(rdram, ctx);
        goto after_31;
    // 0x08000518: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    after_31:
    // 0x0800051C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(64, 0X184C) << 16);
    // 0x08000520: lwc1        $f10, 0x184C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X184C));
    // 0x08000524: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000528: lui         $a1, 0xC286
    ctx->r5 = S32(0XC286 << 16);
    // 0x0800052C: lui         $a2, 0xC2AC
    ctx->r6 = S32(0XC2AC << 16);
    // 0x08000530: lui         $a3, 0x4280
    ctx->r7 = S32(0X4280 << 16);
    // 0x08000534: jal         0x080012C8
    // 0x08000538: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_080012C8_7341F8(rdram, ctx);
        goto after_32;
    // 0x08000538: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_32:
    // 0x0800053C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000540: jal         0x08001318
    // 0x08000544: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_08001318_734248(rdram, ctx);
        goto after_33;
    // 0x08000544: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_33:
    // 0x08000548: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0800054C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08000550: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x08000554: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000558: b           L_08000A8C
    // 0x0800055C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000A8C;
    // 0x0800055C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000560:
    // 0x08000560: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000564: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000568: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800056C: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000570: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08000574: beq         $a1, $zero, L_08000584
    if (ctx->r5 == 0) {
        // 0x08000578: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_08000584;
    }
    // 0x08000578: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x0800057C: jalr        $t9
    // 0x08000580: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000580: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_34:
L_08000584:
    // 0x08000584: jal         0x080012FC
    // 0x08000588: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_080012FC_73422C(rdram, ctx);
        goto after_35;
    // 0x08000588: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_35:
    // 0x0800058C: bnel        $v0, $zero, L_08000A90
    if (ctx->r2 != 0) {
        // 0x08000590: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_08000A90;
    }
    goto skip_4;
    // 0x08000590: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_4:
    // 0x08000594: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000598: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800059C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080005A0: b           L_08000A8C
    // 0x080005A4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A8C;
    // 0x080005A4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_080005A8:
    // 0x080005A8: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x080005AC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x080005B0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005B4: jal         0x08001318
    // 0x080005B8: subu        $a1, $t6, $t5
    ctx->r5 = SUB32(ctx->r14, ctx->r13);
    func_08001318_734248(rdram, ctx);
        goto after_36;
    // 0x080005B8: subu        $a1, $t6, $t5
    ctx->r5 = SUB32(ctx->r14, ctx->r13);
    after_36:
    // 0x080005BC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080005C0: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x080005C4: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x080005C8: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x080005CC: beq         $at, $zero, L_08000618
    if (ctx->r1 == 0) {
        // 0x080005D0: addiu       $t9, $v0, 0x2
        ctx->r25 = ADD32(ctx->r2, 0X2);
            goto L_08000618;
    }
    // 0x080005D0: addiu       $t9, $v0, 0x2
    ctx->r25 = ADD32(ctx->r2, 0X2);
    // 0x080005D4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005D8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x080005DC: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x080005E0: slti        $at, $a1, 0x1B1
    ctx->r1 = SIGNED(ctx->r5) < 0X1B1 ? 1 : 0;
    // 0x080005E4: beq         $at, $zero, L_08000618
    if (ctx->r1 == 0) {
        // 0x080005E8: slti        $at, $a1, 0x19D
        ctx->r1 = SIGNED(ctx->r5) < 0X19D ? 1 : 0;
            goto L_08000618;
    }
    // 0x080005E8: slti        $at, $a1, 0x19D
    ctx->r1 = SIGNED(ctx->r5) < 0X19D ? 1 : 0;
    // 0x080005EC: bne         $at, $zero, L_08000618
    if (ctx->r1 != 0) {
        // 0x080005F0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000618;
    }
    // 0x080005F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080005F4: jal         0x08001318
    // 0x080005F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_08001318_734248(rdram, ctx);
        goto after_37;
    // 0x080005F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_37:
    // 0x080005FC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000600: addiu       $t0, $zero, 0x1B0
    ctx->r8 = ADD32(0, 0X1B0);
    // 0x08000604: sh          $t0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r8;
    // 0x08000608: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x0800060C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000610: b           L_08000A8C
    // 0x08000614: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08000A8C;
    // 0x08000614: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08000618:
    // 0x08000618: b           L_08000A8C
    // 0x0800061C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_08000A8C;
    // 0x0800061C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_08000620:
    // 0x08000620: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000624: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000628: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800062C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000630: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000634: jalr        $t9
    // 0x08000638: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08000638: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_38:
    // 0x0800063C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000640: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000644: jalr        $t9
    // 0x08000648: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08000648: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    after_39:
    // 0x0800064C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000650: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    // 0x08000654: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000658: jal         0x08000CB8
    // 0x0800065C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_08000CB8_733BE8(rdram, ctx);
        goto after_40;
    // 0x0800065C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_40:
    // 0x08000660: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000664: jal         0x08000CF8
    // 0x08000668: addiu       $a1, $zero, 0x3A0
    ctx->r5 = ADD32(0, 0X3A0);
    func_08000CF8_733C28(rdram, ctx);
        goto after_41;
    // 0x08000668: addiu       $a1, $zero, 0x3A0
    ctx->r5 = ADD32(0, 0X3A0);
    after_41:
    // 0x0800066C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000670: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000674: b           L_08000A8C
    // 0x08000678: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A8C;
    // 0x08000678: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_0800067C:
    // 0x0800067C: jal         0x08000DA8
    // 0x08000680: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000DA8_733CD8(rdram, ctx);
        goto after_42;
    // 0x08000680: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_42:
    // 0x08000684: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000688: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08000A8C;
    }
    // 0x08000688: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800068C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000690: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000694: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000698: jalr        $t9
    // 0x0800069C: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800069C: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    after_43:
    // 0x080006A0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080006A4: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x080006A8: b           L_08000A8C
    // 0x080006AC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000A8C;
    // 0x080006AC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_080006B0:
    // 0x080006B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006B4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080006B8: jalr        $t9
    // 0x080006BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x080006BC: nop

    after_44:
    // 0x080006C0: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x080006C4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000A8C;
    }
    // 0x080006C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006C8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080006CC: jalr        $t9
    // 0x080006D0: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x080006D0: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    after_45:
    // 0x080006D4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x080006D8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x080006DC: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x080006E0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080006E4: b           L_08000A8C
    // 0x080006E8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000A8C;
    // 0x080006E8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_080006EC:
    // 0x080006EC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080006F0: lui         $a1, 0x4364
    ctx->r5 = S32(0X4364 << 16);
    // 0x080006F4: lui         $a2, 0x4230
    ctx->r6 = S32(0X4230 << 16);
    // 0x080006F8: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080006FC: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000700: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000A8C;
    }
    // 0x08000700: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000704: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000708: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800070C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000710: jalr        $t9
    // 0x08000714: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08000714: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_46:
    // 0x08000718: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800071C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000720: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000724: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000728: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x0800072C: jalr        $t9
    // 0x08000730: lui         $a3, 0x42D0
    ctx->r7 = S32(0X42D0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08000730: lui         $a3, 0x42D0
    ctx->r7 = S32(0X42D0 << 16);
    after_47:
    // 0x08000734: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000738: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800073C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000740: jalr        $t9
    // 0x08000744: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000744: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_48:
    // 0x08000748: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800074C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000750: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000754: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000758: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800075C: lui         $a2, 0xC362
    ctx->r6 = S32(0XC362 << 16);
    // 0x08000760: jalr        $t9
    // 0x08000764: lui         $a3, 0xC35A
    ctx->r7 = S32(0XC35A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000764: lui         $a3, 0xC35A
    ctx->r7 = S32(0XC35A << 16);
    after_49:
    // 0x08000768: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800076C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000770: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000774: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000778: lui         $a2, 0xC228
    ctx->r6 = S32(0XC228 << 16);
    // 0x0800077C: jalr        $t9
    // 0x08000780: lui         $a3, 0x42D0
    ctx->r7 = S32(0X42D0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08000780: lui         $a3, 0x42D0
    ctx->r7 = S32(0X42D0 << 16);
    after_50:
    // 0x08000784: jal         0x080014B0
    // 0x08000788: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_080014B0_7343E0(rdram, ctx);
        goto after_51;
    // 0x08000788: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_51:
    // 0x0800078C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08000790: jal         0x08001704
    // 0x08000794: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_08001704_734634(rdram, ctx);
        goto after_52;
    // 0x08000794: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_52:
    // 0x08000798: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x0800079C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007A0: lui         $a1, 0xC1E0
    ctx->r5 = S32(0XC1E0 << 16);
    // 0x080007A4: lui         $a2, 0xC32A
    ctx->r6 = S32(0XC32A << 16);
    // 0x080007A8: jal         0x080012A4
    // 0x080007AC: lui         $a3, 0xC294
    ctx->r7 = S32(0XC294 << 16);
    func_080012A4_7341D4(rdram, ctx);
        goto after_53;
    // 0x080007AC: lui         $a3, 0xC294
    ctx->r7 = S32(0XC294 << 16);
    after_53:
    // 0x080007B0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007B4: jal         0x08001324
    // 0x080007B8: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_08001324_734254(rdram, ctx);
        goto after_54;
    // 0x080007B8: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_54:
    // 0x080007BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007C0: jal         0x08001330
    // 0x080007C4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    func_08001330_734260(rdram, ctx);
        goto after_55;
    // 0x080007C4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_55:
    // 0x080007C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080007CC: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    // 0x080007D0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080007D4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x080007D8: lui         $a2, 0xC354
    ctx->r6 = S32(0XC354 << 16);
    // 0x080007DC: jal         0x08000CC0
    // 0x080007E0: lui         $a3, 0xC306
    ctx->r7 = S32(0XC306 << 16);
    func_08000CC0_733BF0(rdram, ctx);
        goto after_56;
    // 0x080007E0: lui         $a3, 0xC306
    ctx->r7 = S32(0XC306 << 16);
    after_56:
    // 0x080007E4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080007E8: jal         0x08000CB8
    // 0x080007EC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_08000CB8_733BE8(rdram, ctx);
        goto after_57;
    // 0x080007EC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_57:
    // 0x080007F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080007F4: jal         0x08000CF8
    // 0x080007F8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    func_08000CF8_733C28(rdram, ctx);
        goto after_58;
    // 0x080007F8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    after_58:
    // 0x080007FC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000800: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08000804: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x08000808: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800080C: b           L_08000A8C
    // 0x08000810: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A8C;
    // 0x08000810: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000814:
    // 0x08000814: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000818: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800081C: jalr        $t9
    // 0x08000820: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08000820: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    after_59:
    // 0x08000824: beq         $v0, $zero, L_08000A8C
    if (ctx->r2 == 0) {
        // 0x08000828: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000A8C;
    }
    // 0x08000828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800082C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08000830: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000834: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000838: jal         0x080015F8
    // 0x0800083C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_080015F8_734528(rdram, ctx);
        goto after_60;
    // 0x0800083C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_60:
    // 0x08000840: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000844: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x08000848: b           L_08000A8C
    // 0x0800084C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000A8C;
    // 0x0800084C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000850:
    // 0x08000850: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000854: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000858: jalr        $t9
    // 0x0800085C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x0800085C: nop

    after_61:
    // 0x08000860: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000864: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_08000A8C;
    }
    // 0x08000864: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000868: jal         0x0800162C
    // 0x0800086C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_0800162C_73455C(rdram, ctx);
        goto after_62;
    // 0x0800086C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_62:
    // 0x08000870: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000874: jal         0x08001634
    // 0x08000878: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_08001634_734564(rdram, ctx);
        goto after_63;
    // 0x08000878: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_63:
    // 0x0800087C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000880: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08000884: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x08000888: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800088C: b           L_08000A8C
    // 0x08000890: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000A8C;
    // 0x08000890: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_08000894:
    // 0x08000894: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000898: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x0800089C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080008A0: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x080008A4: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000A8C;
    }
    // 0x080008A4: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x080008A8: jal         0x08001324
    // 0x080008AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_08001324_734254(rdram, ctx);
        goto after_64;
    // 0x080008AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_64:
    // 0x080008B0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008B4: jal         0x08001330
    // 0x080008B8: addiu       $a1, $zero, 0x1C8
    ctx->r5 = ADD32(0, 0X1C8);
    func_08001330_734260(rdram, ctx);
        goto after_65;
    // 0x080008B8: addiu       $a1, $zero, 0x1C8
    ctx->r5 = ADD32(0, 0X1C8);
    after_65:
    // 0x080008BC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x080008C0: addiu       $t2, $zero, 0x25
    ctx->r10 = ADD32(0, 0X25);
    // 0x080008C4: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x080008C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080008CC: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_080008D0:
    // 0x080008D0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080008D4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008D8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080008DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080008E0: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x080008E4: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08000A8C;
    }
    // 0x080008E4: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x080008E8: jalr        $t9
    // 0x080008EC: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x080008EC: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    after_66:
    // 0x080008F0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x080008F4: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x080008F8: b           L_08000A8C
    // 0x080008FC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000A8C;
    // 0x080008FC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000900:
    // 0x08000900: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000904: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000908: jalr        $t9
    // 0x0800090C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x0800090C: nop

    after_67:
    // 0x08000910: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000914: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000A8C;
    }
    // 0x08000914: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000918: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800091C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000920: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000924: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000928: jalr        $t9
    // 0x0800092C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x0800092C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_68:
    // 0x08000930: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x08000934: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x08000938: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x0800093C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000940: b           L_08000A8C
    // 0x08000944: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000A8C;
    // 0x08000944: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000948:
    // 0x08000948: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0800094C: lui         $a1, 0xC1E0
    ctx->r5 = S32(0XC1E0 << 16);
    // 0x08000950: lui         $a3, 0xC294
    ctx->r7 = S32(0XC294 << 16);
    // 0x08000954: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08000958: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x0800095C: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_08000A8C;
    }
    // 0x0800095C: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x08000960: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000964: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(64, 0X1850) << 16);
    // 0x08000968: lwc1        $f16, 0x1850($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X1850));
    // 0x0800096C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000970: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000974: jal         0x080012C8
    // 0x08000978: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_080012C8_7341F8(rdram, ctx);
        goto after_69;
    // 0x08000978: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_69:
    // 0x0800097C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000980: jal         0x08001318
    // 0x08000984: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_08001318_734248(rdram, ctx);
        goto after_70;
    // 0x08000984: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_70:
    // 0x08000988: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800098C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000990: jalr        $t9
    // 0x08000994: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08000994: addiu       $a0, $zero, 0x17C
    ctx->r4 = ADD32(0, 0X17C);
    after_71:
    // 0x08000998: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x0800099C: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x080009A0: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x080009A4: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x080009A8: b           L_08000A8C
    // 0x080009AC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08000A8C;
    // 0x080009AC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_080009B0:
    // 0x080009B0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080009B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009B8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080009BC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x080009C0: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x080009C4: sw          $t5, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r13;
            goto L_08000A8C;
    }
    // 0x080009C4: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080009C8: jalr        $t9
    // 0x080009CC: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x080009CC: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    after_72:
    // 0x080009D0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x080009D4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080009D8: b           L_08000A8C
    // 0x080009DC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08000A8C;
    // 0x080009DC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_080009E0:
    // 0x080009E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009E4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080009E8: jalr        $t9
    // 0x080009EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x080009EC: nop

    after_73:
    // 0x080009F0: bnel        $v0, $zero, L_08000A90
    if (ctx->r2 != 0) {
        // 0x080009F4: lw          $a0, 0x1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X1C);
            goto L_08000A90;
    }
    goto skip_5;
    // 0x080009F4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    skip_5:
    // 0x080009F8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x080009FC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x08000A00: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08000A04: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000A08: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08000A0C:
    // 0x08000A0C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000A10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A14: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000A18: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08000A1C: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000A20: sw          $t3, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r11;
            goto L_08000A8C;
    }
    // 0x08000A20: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x08000A24: jalr        $t9
    // 0x08000A28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x08000A28: nop

    after_74:
    // 0x08000A2C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A30: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000A34: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000A38: addiu       $t9, $t9, -0x5B04
    ctx->r25 = ADD32(ctx->r25, -0X5B04);
    // 0x08000A3C: sb          $t4, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = ctx->r12;
    // 0x08000A40: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    // 0x08000A44: addiu       $a1, $zero, 0x3B6
    ctx->r5 = ADD32(0, 0X3B6);
    // 0x08000A48: addiu       $a2, $zero, -0xA5
    ctx->r6 = ADD32(0, -0XA5);
    // 0x08000A4C: addiu       $a3, $zero, 0x3A
    ctx->r7 = ADD32(0, 0X3A);
    // 0x08000A50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A54: jalr        $t9
    // 0x08000A58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08000A58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_75:
    // 0x08000A5C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A60: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000A64: jalr        $t9
    // 0x08000A68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08000A68: nop

    after_76:
    // 0x08000A6C: b           L_08000A90
    // 0x08000A70: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
        goto L_08000A90;
    // 0x08000A70: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
L_08000A74:
    // 0x08000A74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A78: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000A7C: jalr        $t9
    // 0x08000A80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08000A80: nop

    after_77:
    // 0x08000A84: b           L_08000AAC
    // 0x08000A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000AAC;
    // 0x08000A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000A8C:
    // 0x08000A8C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
L_08000A90:
    // 0x08000A90: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A94: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000A98: beql        $a0, $zero, L_08000AAC
    if (ctx->r4 == 0) {
        // 0x08000A9C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000AAC;
    }
    goto skip_6;
    // 0x08000A9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x08000AA0: jalr        $t9
    // 0x08000AA4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08000AA4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_78:
    // 0x08000AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000AAC:
    // 0x08000AAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000AB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000AB4: jr          $ra
    // 0x08000AB8: nop

    TRACE_RETURN()
    return;
    // 0x08000AB8: nop

;}
RECOMP_FUNC void func_08000CF8_733C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CF8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08000CFC: addiu       $a2, $a2, -0x39F4
    ctx->r6 = ADD32(ctx->r6, -0X39F4);
    // 0x08000D00: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08000D04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000D08: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x08000D0C: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08000D10: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x08000D14: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000D18: subu        $v1, $t8, $t6
    ctx->r3 = SUB32(ctx->r24, ctx->r14);
    // 0x08000D1C: bgezl       $v1, L_08000D2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08000D20: slti        $at, $v1, 0x201
        ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
            goto L_08000D2C;
    }
    goto skip_0;
    // 0x08000D20: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
    skip_0:
    // 0x08000D24: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x08000D28: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
L_08000D2C:
    // 0x08000D2C: bne         $at, $zero, L_08000D58
    if (ctx->r1 != 0) {
        // 0x08000D30: subu        $t0, $t9, $v1
        ctx->r8 = SUB32(ctx->r25, ctx->r3);
            goto L_08000D58;
    }
    // 0x08000D30: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x08000D34: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000D38: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x08000D3C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000D40: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x08000D44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000D48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000D4C: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000D50: b           L_08000D78
    // 0x08000D54: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
        goto L_08000D78;
    // 0x08000D54: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_08000D58:
    // 0x08000D58: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x08000D5C: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x08000D60: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x08000D64: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000D68: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000D6C: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x08000D70: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000D74: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_08000D78:
    // 0x08000D78: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x08000D7C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x08000D80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000D84: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08000D88: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x08000D8C: bgez        $t2, L_08000DA0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08000D90: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000DA0;
    }
    // 0x08000D90: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000D94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000D98: nop

    // 0x08000D9C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_08000DA0:
    // 0x08000DA0: jr          $ra
    // 0x08000DA4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000DA4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000BD8_733B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BE4: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000BE8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(64, 0XABC) << 16);
    // 0x08000BEC: addiu       $a1, $a1, 0xABC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(64, 0XABC));
    // 0x08000BF0: jalr        $t9
    // 0x08000BF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000BF8: bne         $v0, $zero, L_08000C08
    if (ctx->r2 != 0) {
        // 0x08000BFC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000C08;
    }
    // 0x08000BFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000C00: b           L_08000C4C
    // 0x08000C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000C4C;
    // 0x08000C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000C08:
    // 0x08000C08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C10: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000C14: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x08000C18: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x08000C1C: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08000C20: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x08000C24: sb          $a1, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r5;
    // 0x08000C28: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000C2C: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x08000C30: addiu       $a0, $a0, 0x4CC0
    ctx->r4 = ADD32(ctx->r4, 0X4CC0);
    // 0x08000C34: sb          $a1, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = ctx->r5;
    // 0x08000C38: sh          $zero, 0x307A($a0)
    MEM_H(0X307A, ctx->r4) = 0;
    // 0x08000C3C: sh          $zero, 0x307C($a0)
    MEM_H(0X307C, ctx->r4) = 0;
    // 0x08000C40: sh          $zero, 0x30F2($a0)
    MEM_H(0X30F2, ctx->r4) = 0;
    // 0x08000C44: sh          $zero, 0x30F4($a0)
    MEM_H(0X30F4, ctx->r4) = 0;
    // 0x08000C48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08000C4C:
    // 0x08000C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C54: jr          $ra
    // 0x08000C58: nop

    TRACE_RETURN()
    return;
    // 0x08000C58: nop

    // 0x08000C5C: jr          $ra
    // 0x08000C60: nop

    TRACE_RETURN()
    return;
    // 0x08000C60: nop

;}
RECOMP_FUNC void func_08000ABC_7339EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ABC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000AC0: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x08000AC4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000AC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08000ACC: beq         $t6, $zero, L_08000BD0
    if (ctx->r14 == 0) {
        // 0x08000AD0: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08000BD0;
    }
    // 0x08000AD0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000AD4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000AD8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000ADC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x08000AE0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000AE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000AE8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000AEC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000AF0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000AF4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000AF8: nop

    // 0x08000AFC: bc1fl       L_08000B18
    if (!c1cs) {
        // 0x08000B00: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_08000B18;
    }
    goto skip_0;
    // 0x08000B00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x08000B04: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000B08: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x08000B0C: b           L_08000B38
    // 0x08000B10: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
        goto L_08000B38;
    // 0x08000B10: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000B14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_08000B18:
    // 0x08000B18: nop

    // 0x08000B1C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000B20: nop

    // 0x08000B24: bc1fl       L_08000B3C
    if (!c1cs) {
        // 0x08000B28: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_08000B3C;
    }
    goto skip_1;
    // 0x08000B28: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x08000B2C: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x08000B30: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x08000B34: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_08000B38:
    // 0x08000B38: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_08000B3C:
    // 0x08000B3C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x08000B40: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x08000B44: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000B48: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000B4C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x08000B50: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x08000B54: nop

    // 0x08000B58: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x08000B5C: beql        $v1, $zero, L_08000BAC
    if (ctx->r3 == 0) {
        // 0x08000B60: mfc1        $v1, $f4
        ctx->r3 = (int32_t)ctx->f4.u32l;
            goto L_08000BAC;
    }
    goto skip_2;
    // 0x08000B60: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08000B64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000B68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08000B6C: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000B70: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x08000B74: nop

    // 0x08000B78: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08000B7C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x08000B80: nop

    // 0x08000B84: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x08000B88: bne         $v1, $zero, L_08000BA0
    if (ctx->r3 != 0) {
        // 0x08000B8C: nop
    
            goto L_08000BA0;
    }
    // 0x08000B8C: nop

    // 0x08000B90: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x08000B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000B98: b           L_08000BB8
    // 0x08000B9C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_08000BB8;
    // 0x08000B9C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_08000BA0:
    // 0x08000BA0: b           L_08000BB8
    // 0x08000BA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_08000BB8;
    // 0x08000BA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x08000BA8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
L_08000BAC:
    // 0x08000BAC: nop

    // 0x08000BB0: bltz        $v1, L_08000BA0
    if (SIGNED(ctx->r3) < 0) {
        // 0x08000BB4: nop
    
            goto L_08000BA0;
    }
    // 0x08000BB4: nop

L_08000BB8:
    // 0x08000BB8: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08000BBC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000BC0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000BC4: sh          $v1, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r3;
    // 0x08000BC8: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x08000BCC: sh          $v1, 0x94($t2)
    MEM_H(0X94, ctx->r10) = ctx->r3;
L_08000BD0:
    // 0x08000BD0: jr          $ra
    // 0x08000BD4: nop

    TRACE_RETURN()
    return;
    // 0x08000BD4: nop

;}
RECOMP_FUNC void func_080013D8_734308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080013DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080013E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080013E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080013E8: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x080013EC: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080013F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080013F4: beq         $t7, $zero, L_08001434
    if (ctx->r15 == 0) {
        // 0x080013F8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_08001434;
    }
    // 0x080013F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080013FC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001400: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08001404: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001408: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x0800140C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001410: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08001414: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x08001418: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x0800141C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001420: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08001424: nop

    // 0x08001428: bc1fl       L_08001438
    if (!c1cs) {
        // 0x0800142C: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_08001438;
    }
    goto skip_0;
    // 0x0800142C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x08001430: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_08001434:
    // 0x08001434: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_08001438:
    // 0x08001438: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800143C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001440: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x08001444: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x08001448: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0800144C: andi        $a0, $v1, 0x1
    ctx->r4 = ctx->r3 & 0X1;
    // 0x08001450: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x08001454: beq         $a0, $zero, L_08001474
    if (ctx->r4 == 0) {
        // 0x08001458: sw          $t0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r8;
            goto L_08001474;
    }
    // 0x08001458: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x0800145C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001460: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001464: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x08001468: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800146C: b           L_08001498
    // 0x08001470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_08001498;
    // 0x08001470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08001474:
    // 0x08001474: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001478: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800147C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001480: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001484: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08001488: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x0800148C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08001490: nop

    // 0x08001494: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08001498:
    // 0x08001498: jalr        $t9
    // 0x0800149C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800149C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080014A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080014A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080014A8: jr          $ra
    // 0x080014AC: nop

    TRACE_RETURN()
    return;
    // 0x080014AC: nop

;}
RECOMP_FUNC void func_08001634_734564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001634: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x08001638: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x0800163C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08001640: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001644: sw          $v0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r2;
    // 0x08001648: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800164C: swc1        $f0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f0.u32l;
    // 0x08001650: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001654: jr          $ra
    // 0x08001658: swc1        $f10, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08001658: swc1        $f10, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_0800162C_73455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800162C: jr          $ra
    // 0x08001630: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001630: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_080012A4_7341D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012A4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x080012A8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080012AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080012B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x080012B4: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080012B8: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080012BC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080012C0: jr          $ra
    // 0x080012C4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080012C4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001318_734248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001318: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800131C: jr          $ra
    // 0x08001320: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001320: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_08003020_7377B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003020: jr          $ra
    // 0x08003024: nop

    TRACE_RETURN()
    return;
    // 0x08003024: nop

;}
