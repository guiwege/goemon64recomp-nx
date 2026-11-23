#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D3B20_642970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3B20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D3B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D3B28: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D3B2C: lh          $v0, 0xA4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA4);
    // 0x801D3B30: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801D3B34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3B38: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D3B3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D3B40: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801D3B44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D3B48: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D3B4C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801D3B50: sh          $t7, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r15;
    // 0x801D3B54: bne         $t7, $zero, L_801D3B68
    if (ctx->r15 != 0) {
        // 0x801D3B58: swc1        $f8, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
            goto L_801D3B68;
    }
    // 0x801D3B58: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    // 0x801D3B5C: jal         0x801D3BE0
    // 0x801D3B60: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    func_801D3BE0_642A30(rdram, ctx);
        goto after_0;
    // 0x801D3B60: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    after_0:
    // 0x801D3B64: lh          $v0, 0x26($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X26);
L_801D3B68:
    // 0x801D3B68: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x801D3B6C: beq         $at, $zero, L_801D3BD0
    if (ctx->r1 == 0) {
        // 0x801D3B70: addiu       $t8, $zero, 0x14
        ctx->r24 = ADD32(0, 0X14);
            goto L_801D3BD0;
    }
    // 0x801D3B70: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801D3B74: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x801D3B78: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801D3B7C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3B80: ldc1        $f18, -0xF58($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XF58);
    // 0x801D3B84: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D3B88: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D3B8C: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x801D3B90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D3B94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3B98: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801D3B9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D3BA0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801D3BA4: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    // 0x801D3BA8: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801D3BAC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x801D3BB0: nop

    // 0x801D3BB4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801D3BB8: nop

    // 0x801D3BBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3BC0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D3BC4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801D3BC8: jal         0x8000EE50
    // 0x801D3BCC: nop

    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801D3BCC: nop

    after_1:
L_801D3BD0:
    // 0x801D3BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D3BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D3BD8: jr          $ra
    // 0x801D3BDC: nop

    TRACE_RETURN()
    return;
    // 0x801D3BDC: nop

;}
RECOMP_FUNC void func_801D5290_6440E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5290: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5294: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x801D5298: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D529C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D52A0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D52A4: lwc1        $f16, 0xA8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801D52A8: lh          $t6, 0xBA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XBA);
    // 0x801D52AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D52B0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x801D52B4: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x801D52B8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D52BC: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D52C0: beq         $t7, $zero, L_801D52D4
    if (ctx->r15 == 0) {
        // 0x801D52C4: swc1        $f18, 0xA8($a0)
        MEM_W(0XA8, ctx->r4) = ctx->f18.u32l;
            goto L_801D52D4;
    }
    // 0x801D52C4: swc1        $f18, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f18.u32l;
    // 0x801D52C8: lw          $t8, 0xB0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB0);
    // 0x801D52CC: b           L_801D52D8
    // 0x801D52D0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
        goto L_801D52D8;
    // 0x801D52D0: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
L_801D52D4:
    // 0x801D52D4: sh          $t9, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r25;
L_801D52D8:
    // 0x801D52D8: bgez        $v0, L_801D52E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D52DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D52E8;
    }
    // 0x801D52DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D52E0: b           L_801D52E8
    // 0x801D52E4: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D52E8;
    // 0x801D52E4: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D52E8:
    // 0x801D52E8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D52EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D52F0: ldc1        $f8, -0xEE0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XEE0);
    // 0x801D52F4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D52F8: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D52FC: nop

    // 0x801D5300: bc1f        L_801D530C
    if (!c1cs) {
        // 0x801D5304: nop
    
            goto L_801D530C;
    }
    // 0x801D5304: nop

    // 0x801D5308: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
L_801D530C:
    // 0x801D530C: jr          $ra
    // 0x801D5310: sw          $v0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D5310: sw          $v0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E1F70_650DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1F70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E1F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E1F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E1F7C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801E1F80: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E1F84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E1F88: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x801E1F8C: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x801E1F90: beq         $t7, $zero, L_801E21A4
    if (ctx->r15 == 0) {
        // 0x801E1F94: andi        $t8, $v1, 0x2
        ctx->r24 = ctx->r3 & 0X2;
            goto L_801E21A4;
    }
    // 0x801E1F94: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x801E1F98: beq         $t8, $zero, L_801E1FA4
    if (ctx->r24 == 0) {
        // 0x801E1F9C: addiu       $t9, $zero, 0x5DC0
        ctx->r25 = ADD32(0, 0X5DC0);
            goto L_801E1FA4;
    }
    // 0x801E1F9C: addiu       $t9, $zero, 0x5DC0
    ctx->r25 = ADD32(0, 0X5DC0);
    // 0x801E1FA0: sw          $t9, 0x318($v0)
    MEM_W(0X318, ctx->r2) = ctx->r25;
L_801E1FA4:
    // 0x801E1FA4: lw          $t0, 0x31C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X31C);
    // 0x801E1FA8: lw          $t1, 0x318($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X318);
    // 0x801E1FAC: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E1FB0: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E1FB4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x801E1FB8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801E1FBC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E1FC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E1FC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E1FC8: sw          $v1, 0x31C($v0)
    MEM_W(0X31C, ctx->r2) = ctx->r3;
    // 0x801E1FCC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1FD0: ldc1        $f18, -0xBE8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XBE8);
    // 0x801E1FD4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E1FD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E1FDC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E1FE0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801E1FE4: lbu         $a0, 0x317($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X317);
    // 0x801E1FE8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E1FEC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801E1FF0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1FF4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E1FF8: swc1        $f0, 0x320($v0)
    MEM_W(0X320, ctx->r2) = ctx->f0.u32l;
    // 0x801E1FFC: div.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x801E2000: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801E2004: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801E2008: nop

    // 0x801E200C: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x801E2010: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801E2014: nop

    // 0x801E2018: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801E201C: beql        $a3, $zero, L_801E2070
    if (ctx->r7 == 0) {
        // 0x801E2020: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801E2070;
    }
    goto skip_0;
    // 0x801E2020: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x801E2024: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E2028: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E202C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E2030: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x801E2034: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801E2038: nop

    // 0x801E203C: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x801E2040: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801E2044: nop

    // 0x801E2048: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801E204C: bne         $a3, $zero, L_801E2064
    if (ctx->r7 != 0) {
        // 0x801E2050: nop
    
            goto L_801E2064;
    }
    // 0x801E2050: nop

    // 0x801E2054: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801E2058: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E205C: b           L_801E207C
    // 0x801E2060: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801E207C;
    // 0x801E2060: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801E2064:
    // 0x801E2064: b           L_801E207C
    // 0x801E2068: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801E207C;
    // 0x801E2068: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801E206C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801E2070:
    // 0x801E2070: nop

    // 0x801E2074: bltz        $a3, L_801E2064
    if (SIGNED(ctx->r7) < 0) {
        // 0x801E2078: nop
    
            goto L_801E2064;
    }
    // 0x801E2078: nop

L_801E207C:
    // 0x801E207C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x801E2080: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801E2084: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801E2088: beq         $at, $zero, L_801E21A4
    if (ctx->r1 == 0) {
        // 0x801E208C: or          $a3, $t3, $zero
        ctx->r7 = ctx->r11 | 0;
            goto L_801E21A4;
    }
    // 0x801E208C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x801E2090: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x801E2094: addiu       $t4, $a0, 0x1
    ctx->r12 = ADD32(ctx->r4, 0X1);
    // 0x801E2098: sb          $t4, 0x317($v0)
    MEM_B(0X317, ctx->r2) = ctx->r12;
    // 0x801E209C: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    // 0x801E20A0: beq         $t5, $zero, L_801E214C
    if (ctx->r13 == 0) {
        // 0x801E20A4: lw          $a2, 0x328($v0)
        ctx->r6 = MEM_W(ctx->r2, 0X328);
            goto L_801E214C;
    }
    // 0x801E20A4: lw          $a2, 0x328($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X328);
    // 0x801E20A8: lw          $a0, 0x32C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X32C);
    // 0x801E20AC: sll         $t8, $t3, 5
    ctx->r24 = S32(ctx->r11 << 5);
    // 0x801E20B0: subu        $t8, $t8, $t3
    ctx->r24 = SUB32(ctx->r24, ctx->r11);
    // 0x801E20B4: addu        $t6, $a0, $t3
    ctx->r14 = ADD32(ctx->r4, ctx->r11);
    // 0x801E20B8: lb          $a1, 0x0($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X0);
    // 0x801E20BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801E20C0: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x801E20C4: bgez        $a1, L_801E2144
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801E20C8: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801E2144;
    }
    // 0x801E20C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801E20CC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801E20D0: andi        $t7, $v1, 0xFFFB
    ctx->r15 = ctx->r3 & 0XFFFB;
    // 0x801E20D4: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x801E20D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801E20DC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801E20E0: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801E20E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E20E8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E20EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E20F0: swc1        $f18, 0x324($v0)
    MEM_W(0X324, ctx->r2) = ctx->f18.u32l;
    // 0x801E20F4: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801E20F8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x801E20FC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x801E2100: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E2104: lhu         $t0, -0x520C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X520C);
    // 0x801E2108: addiu       $a0, $a0, 0x21B8
    ctx->r4 = ADD32(ctx->r4, 0X21B8);
    // 0x801E210C: bnel        $t0, $at, L_801E2148
    if (ctx->r8 != ctx->r1) {
        // 0x801E2110: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_801E2148;
    }
    goto skip_1;
    // 0x801E2110: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    skip_1:
    // 0x801E2114: sb          $t1, 0x5C($t2)
    MEM_B(0X5C, ctx->r10) = ctx->r9;
    // 0x801E2118: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E211C: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    // 0x801E2120: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801E2124: jal         0x8003521C
    // 0x801E2128: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801E2128: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x801E212C: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E2130: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x801E2134: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E2138: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x801E213C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801E2140: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_801E2144:
    // 0x801E2144: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
L_801E2148:
    // 0x801E2148: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
L_801E214C:
    // 0x801E214C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x801E2150: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2154: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x801E2158: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x801E215C: sw          $t5, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r13;
    // 0x801E2160: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801E2164: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801E2168: sw          $s0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r16;
    // 0x801E216C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x801E2170: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801E2174: sw          $v1, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r3;
    // 0x801E2178: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801E217C: beql        $v0, $zero, L_801E2198
    if (ctx->r2 == 0) {
        // 0x801E2180: cvt.s.d     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
            goto L_801E2198;
    }
    goto skip_2;
    // 0x801E2180: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    skip_2:
    // 0x801E2184: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E2188:
    // 0x801E2188: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801E218C: bnel        $v0, $zero, L_801E2188
    if (ctx->r2 != 0) {
        // 0x801E2190: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E2188;
    }
    goto skip_3;
    // 0x801E2190: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_3:
    // 0x801E2194: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
L_801E2198:
    // 0x801E2198: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x801E219C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x801E21A0: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
L_801E21A4:
    // 0x801E21A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E21A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E21AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E21B0: jr          $ra
    // 0x801E21B4: nop

    TRACE_RETURN()
    return;
    // 0x801E21B4: nop

;}
RECOMP_FUNC void func_801E2A84_6518D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2A84: lhu         $a1, 0x66($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X66);
    // 0x801E2A88: lhu         $a3, 0x6A($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X6A);
    // 0x801E2A8C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801E2A90: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x801E2A94: lhu         $v1, 0x64($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X64);
    // 0x801E2A98: srl         $a1, $t8, 5
    ctx->r5 = S32(U32(ctx->r24) >> 5);
    // 0x801E2A9C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x801E2AA0: lhu         $a2, 0x68($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X68);
    // 0x801E2AA4: lhu         $t0, 0x62($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X62);
    // 0x801E2AA8: srl         $a3, $t8, 5
    ctx->r7 = S32(U32(ctx->r24) >> 5);
    // 0x801E2AAC: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801E2AB0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x801E2AB4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E2AB8: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801E2ABC: srl         $v1, $t6, 5
    ctx->r3 = S32(U32(ctx->r14) >> 5);
    // 0x801E2AC0: addiu       $t9, $t9, -0x1990
    ctx->r25 = ADD32(ctx->r25, -0X1990);
    // 0x801E2AC4: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x801E2AC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2ACC: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x801E2AD0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x801E2AD4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x801E2AD8: srl         $a2, $t6, 5
    ctx->r6 = S32(U32(ctx->r14) >> 5);
    // 0x801E2ADC: sra         $t7, $t0, 4
    ctx->r15 = S32(SIGNED(ctx->r8) >> 4);
    // 0x801E2AE0: andi        $t7, $t7, 0xFF
    ctx->r15 = ctx->r15 & 0XFF;
    // 0x801E2AE4: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x801E2AE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2AEC: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x801E2AF0: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x801E2AF4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801E2AF8: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x801E2AFC: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x801E2B00: lbu         $t6, 0x5E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5E);
    // 0x801E2B04: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B08: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x801E2B0C: lui         $t7, 0xBB00
    ctx->r15 = S32(0XBB00 << 16);
    // 0x801E2B10: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x801E2B14: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x801E2B18: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B1C: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x801E2B20: ori         $t8, $t8, 0x8000
    ctx->r24 = ctx->r24 | 0X8000;
    // 0x801E2B24: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x801E2B28: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x801E2B2C: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x801E2B30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B34: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x801E2B38: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x801E2B3C: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x801E2B40: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x801E2B44: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x801E2B48: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x801E2B4C: addiu       $t7, $t7, 0x90
    ctx->r15 = ADD32(ctx->r15, 0X90);
    // 0x801E2B50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B54: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x801E2B58: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x801E2B5C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801E2B60: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x801E2B64: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B68: lui         $t9, 0x701
    ctx->r25 = S32(0X701 << 16);
    // 0x801E2B6C: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x801E2B70: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x801E2B74: ori         $t9, $t9, 0x4060
    ctx->r25 = ctx->r25 | 0X4060;
    // 0x801E2B78: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x801E2B7C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2B80: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x801E2B84: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x801E2B88: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x801E2B8C: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x801E2B90: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x801E2B94: lui         $t8, 0x77F
    ctx->r24 = S32(0X77F << 16);
    // 0x801E2B98: ori         $t8, $t8, 0xF080
    ctx->r24 = ctx->r24 | 0XF080;
    // 0x801E2B9C: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x801E2BA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E2BA4: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x801E2BA8: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x801E2BAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2BB0: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x801E2BB4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x801E2BB8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x801E2BBC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2BC0: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x801E2BC4: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x801E2BC8: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x801E2BCC: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x801E2BD0: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x801E2BD4: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x801E2BD8: lui         $t2, 0xF510
    ctx->r10 = S32(0XF510 << 16);
    // 0x801E2BDC: ori         $t2, $t2, 0x2000
    ctx->r10 = ctx->r10 | 0X2000;
    // 0x801E2BE0: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x801E2BE4: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x801E2BE8: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801E2BEC: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x801E2BF0: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x801E2BF4: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x801E2BF8: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x801E2BFC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2C00: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801E2C04: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x801E2C08: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x801E2C0C: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x801E2C10: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2C14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E2C18: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x801E2C1C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x801E2C20: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x801E2C24: lui         $t8, 0x101
    ctx->r24 = S32(0X101 << 16);
    // 0x801E2C28: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x801E2C2C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x801E2C30: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x801E2C34: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x801E2C38: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2C3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E2C40: andi        $t8, $a3, 0xFFF
    ctx->r24 = ctx->r7 & 0XFFF;
    // 0x801E2C44: lui         $t9, 0x10F
    ctx->r25 = S32(0X10F << 16);
    // 0x801E2C48: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801E2C4C: ori         $t9, $t9, 0xC07C
    ctx->r25 = ctx->r25 | 0XC07C;
    // 0x801E2C50: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x801E2C54: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x801E2C58: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x801E2C5C: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x801E2C60: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x801E2C64: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x801E2C68: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E2C6C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E2C70: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801E2C74: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x801E2C78: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x801E2C7C: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
L_801E2C80:
    // 0x801E2C80: or          $t7, $t8, $v0
    ctx->r15 = ctx->r24 | ctx->r2;
    // 0x801E2C84: or          $t9, $t7, $v1
    ctx->r25 = ctx->r15 | ctx->r3;
    // 0x801E2C88: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x801E2C8C: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x801E2C90: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x801E2C94: bnel        $t4, $zero, L_801E2C80
    if (ctx->r12 != 0) {
        // 0x801E2C98: lw          $t8, 0x6C($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X6C);
            goto L_801E2C80;
    }
    goto skip_0;
    // 0x801E2C98: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    skip_0:
    // 0x801E2C9C: jr          $ra
    // 0x801E2CA0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801E2CA0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801E36C8_652518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E36C8: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x801E36CC: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x801E36D0: lbu         $t7, 0x15F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X15F);
    // 0x801E36D4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801E36D8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x801E36DC: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x801E36E0: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x801E36E4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x801E36E8: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x801E36EC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x801E36F0: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x801E36F4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x801E36F8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x801E36FC: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x801E3700: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x801E3704: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x801E3708: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x801E370C: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x801E3710: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801E3714: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x801E3718: lbu         $t6, 0x315($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X315);
    // 0x801E371C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801E3720: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x801E3724: beq         $t7, $zero, L_801E3E60
    if (ctx->r15 == 0) {
        // 0x801E3728: sb          $t6, 0x137($sp)
        MEM_B(0X137, ctx->r29) = ctx->r14;
            goto L_801E3E60;
    }
    // 0x801E3728: sb          $t6, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r14;
    // 0x801E372C: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801E3730: mtc1        $at, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r1;
    // 0x801E3734: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E3738: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801E373C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801E3740: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801E3744: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E3748: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801E374C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801E3750: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x801E3754: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801E3758: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801E375C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801E3760: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801E3764: addiu       $s5, $s5, -0x1D70
    ctx->r21 = ADD32(ctx->r21, -0X1D70);
    // 0x801E3768: addiu       $fp, $sp, 0x120
    ctx->r30 = ADD32(ctx->r29, 0X120);
    // 0x801E376C: addiu       $s7, $sp, 0xAC
    ctx->r23 = ADD32(ctx->r29, 0XAC);
    // 0x801E3770: lbu         $t8, 0x15F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X15F);
L_801E3774:
    // 0x801E3774: lw          $t0, 0x158($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X158);
    // 0x801E3778: lbu         $t5, 0x163($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X163);
    // 0x801E377C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801E3780: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x801E3784: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801E3788: sb          $t9, 0x15F($sp)
    MEM_B(0X15F, ctx->r29) = ctx->r25;
    // 0x801E378C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801E3790: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
    // 0x801E3794: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801E3798: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x801E379C: lb          $s0, 0x74($s2)
    ctx->r16 = MEM_B(ctx->r18, 0X74);
    // 0x801E37A0: lbu         $s4, 0x75($s2)
    ctx->r20 = MEM_BU(ctx->r18, 0X75);
    // 0x801E37A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E37A8: andi        $t4, $s0, 0x10
    ctx->r12 = ctx->r16 & 0X10;
    // 0x801E37AC: beq         $t4, $zero, L_801E37D8
    if (ctx->r12 == 0) {
        // 0x801E37B0: addu        $t8, $t7, $s4
        ctx->r24 = ADD32(ctx->r15, ctx->r20);
            goto L_801E37D8;
    }
    // 0x801E37B0: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x801E37B4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801E37B8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801E37BC: addu        $t0, $s5, $t1
    ctx->r8 = ADD32(ctx->r21, ctx->r9);
    // 0x801E37C0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x801E37C4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E37C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E37CC: jalr        $t9
    // 0x801E37D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E37D0: nop

    after_0:
    // 0x801E37D4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E37D8:
    // 0x801E37D8: andi        $t2, $s0, 0x20
    ctx->r10 = ctx->r16 & 0X20;
    // 0x801E37DC: beql        $t2, $zero, L_801E3E44
    if (ctx->r10 == 0) {
        // 0x801E37E0: lb          $t6, 0x74($s2)
        ctx->r14 = MEM_B(ctx->r18, 0X74);
            goto L_801E3E44;
    }
    goto skip_0;
    // 0x801E37E0: lb          $t6, 0x74($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X74);
    skip_0:
    // 0x801E37E4: lh          $t3, 0x0($s3)
    ctx->r11 = MEM_H(ctx->r19, 0X0);
    // 0x801E37E8: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x801E37EC: beql        $t4, $zero, L_801E3DCC
    if (ctx->r12 == 0) {
        // 0x801E37F0: lbu         $t7, 0x137($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X137);
            goto L_801E3DCC;
    }
    goto skip_1;
    // 0x801E37F0: lbu         $t7, 0x137($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X137);
    skip_1:
    // 0x801E37F4: bnel        $v1, $zero, L_801E3DCC
    if (ctx->r3 != 0) {
        // 0x801E37F8: lbu         $t7, 0x137($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X137);
            goto L_801E3DCC;
    }
    goto skip_2;
    // 0x801E37F8: lbu         $t7, 0x137($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X137);
    skip_2:
    // 0x801E37FC: lwc1        $f4, 0xEC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XEC);
    // 0x801E3800: lw          $v1, 0x18($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X18);
    // 0x801E3804: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x801E3808: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    // 0x801E380C: lwc1        $f6, 0xF0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XF0);
    // 0x801E3810: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x801E3814: addiu       $t8, $sp, 0xB0
    ctx->r24 = ADD32(ctx->r29, 0XB0);
    // 0x801E3818: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x801E381C: lwc1        $f8, 0xF4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XF4);
    // 0x801E3820: addiu       $t1, $sp, 0xB4
    ctx->r9 = ADD32(ctx->r29, 0XB4);
    // 0x801E3824: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x801E3828: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801E382C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E3830: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x801E3834: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E3838: cvt.d.s     $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.d = CVT_D_S(ctx->f0.fl);
    // 0x801E383C: mul.d       $f4, $f20, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f30.d); 
    ctx->f4.d = MUL_D(ctx->f20.d, ctx->f30.d);
    // 0x801E3840: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E3844: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x801E3848: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x801E384C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E3850: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E3854: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801E3858: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E385C: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801E3860: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E3864: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E3868: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x801E386C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E3870: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801E3874: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E3878: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E387C: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801E3880: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E3884: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x801E3888: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E388C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E3890: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801E3894: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3898: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x801E389C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E38A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E38A4: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x801E38A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E38AC: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x801E38B0: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E38B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E38B8: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801E38BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E38C0: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x801E38C4: lhu         $t5, 0x14($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X14);
    // 0x801E38C8: sh          $t5, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r13;
    // 0x801E38CC: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x801E38D0: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    // 0x801E38D4: sh          $t6, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r14;
    // 0x801E38D8: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x801E38DC: andi        $a1, $t6, 0xFFFF
    ctx->r5 = ctx->r14 & 0XFFFF;
    // 0x801E38E0: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    // 0x801E38E4: lwc1        $f8, 0x84($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X84);
    // 0x801E38E8: andi        $a2, $t7, 0xFFFF
    ctx->r6 = ctx->r15 & 0XFFFF;
    // 0x801E38EC: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x801E38F0: lwc1        $f10, 0x88($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X88);
    // 0x801E38F4: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E38F8: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x801E38FC: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E3900: lwc1        $f16, 0x8C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X8C);
    // 0x801E3904: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E3908: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x801E390C: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E3910: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E3914: c.eq.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl == ctx->f10.fl;
    // 0x801E3918: nop

    // 0x801E391C: bc1tl       L_801E3964
    if (c1cs) {
        // 0x801E3920: srl         $t0, $s0, 1
        ctx->r8 = S32(U32(ctx->r16) >> 1);
            goto L_801E3964;
    }
    goto skip_3;
    // 0x801E3920: srl         $t0, $s0, 1
    ctx->r8 = S32(U32(ctx->r16) >> 1);
    skip_3:
    // 0x801E3924: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E3928: jal         0x80033898
    // 0x801E392C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E392C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x801E3930: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E3934: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E3938: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E393C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E3940: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E3944: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E3948: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E394C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E3950: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801E3954: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E3958: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801E395C: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x801E3960: srl         $t0, $s0, 1
    ctx->r8 = S32(U32(ctx->r16) >> 1);
L_801E3964:
    // 0x801E3964: beq         $t0, $zero, L_801E3B00
    if (ctx->r8 == 0) {
        // 0x801E3968: lwc1        $f8, 0xA0($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
            goto L_801E3B00;
    }
    // 0x801E3968: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E396C: lwc1        $f6, 0x78($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E3970: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E3974: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E3978: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E397C: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E3980: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E3984: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3988: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E398C: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E3990: addiu       $t9, $sp, 0x100
    ctx->r25 = ADD32(ctx->r29, 0X100);
    // 0x801E3994: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x801E3998: lwc1        $f18, 0x7C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X7C);
    // 0x801E399C: addiu       $t2, $sp, 0xF0
    ctx->r10 = ADD32(ctx->r29, 0XF0);
    // 0x801E39A0: addiu       $t3, $sp, 0xE0
    ctx->r11 = ADD32(ctx->r29, 0XE0);
    // 0x801E39A4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801E39A8: addiu       $t4, $sp, 0xD0
    ctx->r12 = ADD32(ctx->r29, 0XD0);
    // 0x801E39AC: addiu       $t5, $sp, 0xC4
    ctx->r13 = ADD32(ctx->r29, 0XC4);
    // 0x801E39B0: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x801E39B4: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x801E39B8: lwc1        $f6, 0x80($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X80);
    // 0x801E39BC: c.lt.s      $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f4.fl < ctx->f24.fl;
    // 0x801E39C0: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801E39C4: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E39C8: bc1f        L_801E39DC
    if (!c1cs) {
        // 0x801E39CC: swc1        $f10, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
            goto L_801E39DC;
    }
    // 0x801E39CC: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x801E39D0: neg.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = -ctx->f4.fl;
    // 0x801E39D4: b           L_801E39F4
    // 0x801E39D8: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
        goto L_801E39F4;
    // 0x801E39D8: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_801E39DC:
    // 0x801E39DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E39E0: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E39E4: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E39E8: add.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x801E39EC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x801E39F0: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_801E39F4:
    // 0x801E39F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E39F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E39FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801E3A00: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801E3A04: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801E3A08: jal         0x801E58A4
    // 0x801E3A0C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_2;
    // 0x801E3A0C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_2:
    // 0x801E3A10: bne         $v0, $zero, L_801E3DC8
    if (ctx->r2 != 0) {
        // 0x801E3A14: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E3DC8;
    }
    // 0x801E3A14: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E3A18: lwc1        $f6, 0x104($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X104);
    // 0x801E3A1C: mul.d       $f16, $f20, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f20.d, ctx->f26.d);
    // 0x801E3A20: addiu       $t7, $sp, 0x100
    ctx->r15 = ADD32(ctx->r29, 0X100);
    // 0x801E3A24: swc1        $f6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f6.u32l;
    // 0x801E3A28: lwc1        $f10, 0x108($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X108);
    // 0x801E3A2C: addiu       $t8, $sp, 0xF0
    ctx->r24 = ADD32(ctx->r29, 0XF0);
    // 0x801E3A30: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x801E3A34: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x801E3A38: lwc1        $f4, 0x10C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10C);
    // 0x801E3A3C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3A40: addiu       $t0, $sp, 0xD0
    ctx->r8 = ADD32(ctx->r29, 0XD0);
    // 0x801E3A44: addiu       $t9, $sp, 0xC4
    ctx->r25 = ADD32(ctx->r29, 0XC4);
    // 0x801E3A48: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x801E3A4C: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x801E3A50: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801E3A54: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801E3A58: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801E3A5C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801E3A60: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E3A64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E3A68: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E3A6C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3A70: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E3A74: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E3A78: jal         0x801E58A4
    // 0x801E3A7C: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_3;
    // 0x801E3A7C: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x801E3A80: bne         $v0, $zero, L_801E3DC8
    if (ctx->r2 != 0) {
        // 0x801E3A84: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E3DC8;
    }
    // 0x801E3A84: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E3A88: lwc1        $f8, 0xF8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XF8);
    // 0x801E3A8C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E3A90: ldc1        $f4, -0xB80($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XB80);
    // 0x801E3A94: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    // 0x801E3A98: lwc1        $f6, 0xFC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XFC);
    // 0x801E3A9C: mul.d       $f16, $f20, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = MUL_D(ctx->f20.d, ctx->f4.d);
    // 0x801E3AA0: addiu       $t3, $sp, 0x100
    ctx->r11 = ADD32(ctx->r29, 0X100);
    // 0x801E3AA4: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    // 0x801E3AA8: lwc1        $f10, 0x100($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X100);
    // 0x801E3AAC: addiu       $t4, $sp, 0xF0
    ctx->r12 = ADD32(ctx->r29, 0XF0);
    // 0x801E3AB0: addiu       $t5, $sp, 0xE0
    ctx->r13 = ADD32(ctx->r29, 0XE0);
    // 0x801E3AB4: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x801E3AB8: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x801E3ABC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E3AC0: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x801E3AC4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E3AC8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E3ACC: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x801E3AD0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E3AD4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E3AD8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E3ADC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E3AE0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E3AE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3AE8: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E3AEC: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E3AF0: jal         0x801E58A4
    // 0x801E3AF4: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_4;
    // 0x801E3AF4: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801E3AF8: b           L_801E3DC8
    // 0x801E3AFC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
        goto L_801E3DC8;
    // 0x801E3AFC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E3B00:
    // 0x801E3B00: beql        $s4, $zero, L_801E3CC0
    if (ctx->r20 == 0) {
        // 0x801E3B04: lwc1        $f16, 0x78($s2)
        ctx->f16.u32l = MEM_W(ctx->r18, 0X78);
            goto L_801E3CC0;
    }
    goto skip_4;
    // 0x801E3B04: lwc1        $f16, 0x78($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X78);
    skip_4:
    // 0x801E3B08: lwc1        $f8, 0x90($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X90);
    // 0x801E3B0C: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E3B10: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E3B14: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x801E3B18: lwc1        $f6, 0x94($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X94);
    // 0x801E3B1C: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E3B20: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E3B24: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E3B28: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E3B2C: lwc1        $f10, 0x98($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X98);
    // 0x801E3B30: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x801E3B34: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801E3B38: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x801E3B3C: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E3B40: addiu       $t1, $sp, 0xB0
    ctx->r9 = ADD32(ctx->r29, 0XB0);
    // 0x801E3B44: addiu       $t0, $sp, 0xB4
    ctx->r8 = ADD32(ctx->r29, 0XB4);
    // 0x801E3B48: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E3B4C: c.eq.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl == ctx->f6.fl;
    // 0x801E3B50: nop

    // 0x801E3B54: bc1tl       L_801E3B8C
    if (c1cs) {
        // 0x801E3B58: lwc1        $f10, 0xA0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
            goto L_801E3B8C;
    }
    goto skip_5;
    // 0x801E3B58: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    skip_5:
    // 0x801E3B5C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E3B60: jal         0x80033898
    // 0x801E3B64: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E3B64: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x801E3B68: jal         0x8001D394
    // 0x801E3B6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_6;
    // 0x801E3B6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_6:
    // 0x801E3B70: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x801E3B74: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801E3B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E3B7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E3B80: jal         0x8001DB04
    // 0x801E3B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_7;
    // 0x801E3B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x801E3B88: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
L_801E3B8C:
    // 0x801E3B8C: lwc1        $f4, 0x78($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E3B90: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E3B94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x801E3B98: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801E3B9C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E3BA0: addiu       $t9, $sp, 0xB0
    ctx->r25 = ADD32(ctx->r29, 0XB0);
    // 0x801E3BA4: addiu       $t2, $sp, 0xB4
    ctx->r10 = ADD32(ctx->r29, 0XB4);
    // 0x801E3BA8: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x801E3BAC: lwc1        $f18, 0x7C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X7C);
    // 0x801E3BB0: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801E3BB4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E3BB8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x801E3BBC: lwc1        $f4, 0x80($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X80);
    // 0x801E3BC0: c.lt.s      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.fl < ctx->f24.fl;
    // 0x801E3BC4: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x801E3BC8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801E3BCC: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x801E3BD0: mul.d       $f10, $f18, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f28.d);
    // 0x801E3BD4: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x801E3BD8: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801E3BDC: bc1f        L_801E3BF4
    if (!c1cs) {
        // 0x801E3BE0: swc1        $f4, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
            goto L_801E3BF4;
    }
    // 0x801E3BE0: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x801E3BE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E3BE8: neg.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = -ctx->f6.fl;
    // 0x801E3BEC: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x801E3BF0: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_801E3BF4:
    // 0x801E3BF4: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E3BF8: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E3BFC: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E3C00: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E3C04: jal         0x80033898
    // 0x801E3C08: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801E3C08: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_8:
    // 0x801E3C0C: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E3C10: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E3C14: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801E3C18: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E3C1C: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801E3C20: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E3C24: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E3C28: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E3C2C: cvt.d.s     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.d = CVT_D_S(ctx->f12.fl);
    // 0x801E3C30: add.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801E3C34: mul.d       $f12, $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f28.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f28.d);
    // 0x801E3C38: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E3C3C: cvt.d.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.d = CVT_D_S(ctx->f14.fl);
    // 0x801E3C40: addiu       $t3, $sp, 0xB0
    ctx->r11 = ADD32(ctx->r29, 0XB0);
    // 0x801E3C44: addiu       $t4, $sp, 0xB4
    ctx->r12 = ADD32(ctx->r29, 0XB4);
    // 0x801E3C48: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x801E3C4C: add.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E3C50: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x801E3C54: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x801E3C58: sub.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = ctx->f14.d - ctx->f12.d;
    // 0x801E3C5C: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x801E3C60: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x801E3C64: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801E3C68: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    // 0x801E3C6C: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801E3C70: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801E3C74: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x801E3C78: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x801E3C7C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E3C80: jal         0x80033898
    // 0x801E3C84: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801E3C84: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_9:
    // 0x801E3C88: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E3C8C: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801E3C90: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E3C94: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801E3C98: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E3C9C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801E3CA0: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E3CA4: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E3CA8: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x801E3CAC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E3CB0: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801E3CB4: b           L_801E3CD4
    // 0x801E3CB8: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
        goto L_801E3CD4;
    // 0x801E3CB8: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x801E3CBC: lwc1        $f16, 0x78($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X78);
L_801E3CC0:
    // 0x801E3CC0: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E3CC4: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x801E3CC8: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E3CCC: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801E3CD0: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
L_801E3CD4:
    // 0x801E3CD4: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E3CD8: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801E3CDC: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x801E3CE0: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801E3CE4: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x801E3CE8: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E3CEC: lw          $v0, -0x1D4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D4C);
    // 0x801E3CF0: addiu       $t6, $sp, 0x100
    ctx->r14 = ADD32(ctx->r29, 0X100);
    // 0x801E3CF4: addiu       $t7, $sp, 0xF0
    ctx->r15 = ADD32(ctx->r29, 0XF0);
    // 0x801E3CF8: addiu       $t8, $sp, 0xE0
    ctx->r24 = ADD32(ctx->r29, 0XE0);
    // 0x801E3CFC: addiu       $t1, $sp, 0xD0
    ctx->r9 = ADD32(ctx->r29, 0XD0);
    // 0x801E3D00: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801E3D04: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E3D08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E3D0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E3D10: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801E3D14: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E3D18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3D1C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E3D20: jalr        $v0
    // 0x801E3D24: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x801E3D24: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    after_10:
    // 0x801E3D28: bne         $v0, $zero, L_801E3DC8
    if (ctx->r2 != 0) {
        // 0x801E3D2C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801E3DC8;
    }
    // 0x801E3D2C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801E3D30: lwc1        $f18, 0x120($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X120);
    // 0x801E3D34: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801E3D38: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801E3D3C: swc1        $f18, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f18.u32l;
    // 0x801E3D40: mul.d       $f18, $f20, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = MUL_D(ctx->f20.d, ctx->f26.d);
    // 0x801E3D44: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x801E3D48: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x801E3D4C: lwc1        $f8, 0xF8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0XF8);
    // 0x801E3D50: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x801E3D54: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E3D58: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    // 0x801E3D5C: lwc1        $f6, 0xFC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XFC);
    // 0x801E3D60: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801E3D64: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x801E3D68: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
    // 0x801E3D6C: lwc1        $f16, 0x100($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X100);
    // 0x801E3D70: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x801E3D74: lui         $v0, 0x801F
    ctx->r2 = S32(0X801F << 16);
    // 0x801E3D78: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x801E3D7C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E3D80: lw          $v0, -0x1D4C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D4C);
    // 0x801E3D84: addiu       $t3, $sp, 0x100
    ctx->r11 = ADD32(ctx->r29, 0X100);
    // 0x801E3D88: addiu       $t4, $sp, 0xF0
    ctx->r12 = ADD32(ctx->r29, 0XF0);
    // 0x801E3D8C: addiu       $t5, $sp, 0xE0
    ctx->r13 = ADD32(ctx->r29, 0XE0);
    // 0x801E3D90: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x801E3D94: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x801E3D98: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E3D9C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E3DA0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E3DA4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E3DA8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801E3DAC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E3DB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3DB4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x801E3DB8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x801E3DBC: jalr        $v0
    // 0x801E3DC0: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x801E3DC0: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x801E3DC4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E3DC8:
    // 0x801E3DC8: lbu         $t7, 0x137($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X137);
L_801E3DCC:
    // 0x801E3DCC: beql        $t7, $zero, L_801E3E44
    if (ctx->r15 == 0) {
        // 0x801E3DD0: lb          $t6, 0x74($s2)
        ctx->r14 = MEM_B(ctx->r18, 0X74);
            goto L_801E3E44;
    }
    goto skip_6;
    // 0x801E3DD0: lb          $t6, 0x74($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X74);
    skip_6:
    // 0x801E3DD4: bne         $v1, $zero, L_801E3E40
    if (ctx->r3 != 0) {
        // 0x801E3DD8: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_801E3E40;
    }
    // 0x801E3DD8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801E3DDC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_801E3DE0:
    // 0x801E3DE0: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801E3DE4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x801E3DE8: addu        $t0, $s3, $t1
    ctx->r8 = ADD32(ctx->r19, ctx->r9);
    // 0x801E3DEC: lw          $s1, 0x2D0($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X2D0);
    // 0x801E3DF0: sll         $t3, $s4, 2
    ctx->r11 = S32(ctx->r20 << 2);
    // 0x801E3DF4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801E3DF8: lb          $t9, 0x74($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X74);
    // 0x801E3DFC: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x801E3E00: andi        $t2, $t9, 0x80
    ctx->r10 = ctx->r25 & 0X80;
    // 0x801E3E04: bne         $t2, $zero, L_801E3E24
    if (ctx->r10 != 0) {
        // 0x801E3E08: nop
    
            goto L_801E3E24;
    }
    // 0x801E3E08: nop

    // 0x801E3E0C: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x801E3E10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E3E14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E3E18: jalr        $t9
    // 0x801E3E1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x801E3E1C: nop

    after_12:
    // 0x801E3E20: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E3E24:
    // 0x801E3E24: bne         $v1, $zero, L_801E3E34
    if (ctx->r3 != 0) {
        // 0x801E3E28: nop
    
            goto L_801E3E34;
    }
    // 0x801E3E28: nop

    // 0x801E3E2C: bnel        $s0, $zero, L_801E3DE0
    if (ctx->r16 != 0) {
        // 0x801E3E30: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_801E3DE0;
    }
    goto skip_7;
    // 0x801E3E30: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_7:
L_801E3E34:
    // 0x801E3E34: beq         $v1, $zero, L_801E3E40
    if (ctx->r3 == 0) {
        // 0x801E3E38: addiu       $t5, $zero, -0x80
        ctx->r13 = ADD32(0, -0X80);
            goto L_801E3E40;
    }
    // 0x801E3E38: addiu       $t5, $zero, -0x80
    ctx->r13 = ADD32(0, -0X80);
    // 0x801E3E3C: sb          $t5, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r13;
L_801E3E40:
    // 0x801E3E40: lb          $t6, 0x74($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X74);
L_801E3E44:
    // 0x801E3E44: sltu        $t7, $zero, $v1
    ctx->r15 = 0 < ctx->r3 ? 1 : 0;
    // 0x801E3E48: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x801E3E4C: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x801E3E50: sb          $t1, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r9;
    // 0x801E3E54: lbu         $t0, 0x15F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X15F);
    // 0x801E3E58: bnel        $t0, $zero, L_801E3774
    if (ctx->r8 != 0) {
        // 0x801E3E5C: lbu         $t8, 0x15F($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X15F);
            goto L_801E3774;
    }
    goto skip_8;
    // 0x801E3E5C: lbu         $t8, 0x15F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X15F);
    skip_8:
L_801E3E60:
    // 0x801E3E60: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801E3E64: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801E3E68: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x801E3E6C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x801E3E70: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x801E3E74: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x801E3E78: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x801E3E7C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801E3E80: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x801E3E84: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x801E3E88: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x801E3E8C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x801E3E90: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x801E3E94: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x801E3E98: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x801E3E9C: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x801E3EA0: jr          $ra
    // 0x801E3EA4: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    TRACE_RETURN()
    return;
    // 0x801E3EA4: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_801CB4F8_63A348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4F8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CB4FC: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801CB500: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CB504: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x801CB508: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x801CB50C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB514: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x801CB518: lhu         $t7, 0x2DD2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2DD2);
    // 0x801CB51C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801CB524: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801CB528: sh          $t8, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r24;
    // 0x801CB52C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801CB530: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x801CB534: lhu         $t1, 0x307C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X307C);
    // 0x801CB538: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x801CB53C: beq         $t2, $zero, L_801CB554
    if (ctx->r10 == 0) {
        // 0x801CB540: nop
    
            goto L_801CB554;
    }
    // 0x801CB540: nop

    // 0x801CB544: jal         0x80003478
    // 0x801CB548: nop

    func_80003478_4078(rdram, ctx);
        goto after_0;
    // 0x801CB548: nop

    after_0:
    // 0x801CB54C: b           L_801CB560
    // 0x801CB550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CB560;
    // 0x801CB550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB554:
    // 0x801CB554: jal         0x80034734
    // 0x801CB558: nop

    func_80034734_35334(rdram, ctx);
        goto after_1;
    // 0x801CB558: nop

    after_1:
    // 0x801CB55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB560:
    // 0x801CB560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB564: jr          $ra
    // 0x801CB568: nop

    TRACE_RETURN()
    return;
    // 0x801CB568: nop

;}
RECOMP_FUNC void func_801D81DC_64702C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D81DC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D81E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D81E4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D81E8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D81EC: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D81F0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D81F4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D81F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D81FC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D8200: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D8204: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D8208: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D820C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D8210: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D8214: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D8218: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D821C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D8220: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D8224: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D8228: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D822C: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D8230: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D8234: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D8238: nop

    // 0x801D823C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D8240: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D8244: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801D8248: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D824C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D8250: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D8254: nop

    // 0x801D8258: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x801D825C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801D8260: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801D8264: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D8268: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D826C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D8270: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D8274: jal         0x80033898
    // 0x801D8278: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D8278: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D827C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801D8280: addiu       $t9, $zero, 0xC6
    ctx->r25 = ADD32(0, 0XC6);
    // 0x801D8284: addiu       $t0, $zero, 0x39
    ctx->r8 = ADD32(0, 0X39);
    // 0x801D8288: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D828C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D8290: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D8294: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D8298: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D829C: lwc1        $f16, 0x5C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D82A0: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D82A4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D82A8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D82AC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D82B0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D82B4: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D82B8: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D82BC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801D82C0: lwc1        $f6, 0x60($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D82C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D82C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D82CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D82D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D82D4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x801D82D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D82DC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801D82E0: lwc1        $f16, 0x64($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D82E4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D82E8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D82EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D82F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D82F4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D82F8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801D82FC: jal         0x801CDA88
    // 0x801D8300: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D8300: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801D8304: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D8308: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D830C: lwc1        $f8, 0x5C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D8310: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D8314: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D831C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D8320: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D8324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D8328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D832C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D8330: lwc1        $f18, 0x60($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D8334: lui         $a2, 0x42D2
    ctx->r6 = S32(0X42D2 << 16);
    // 0x801D8338: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D833C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D8340: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D8344: lwc1        $f8, 0x64($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D8348: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D834C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8350: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D8354: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D8358: jal         0x801DF9EC
    // 0x801D835C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D835C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801D8360: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8364: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D8368: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D836C: bnel        $t6, $zero, L_801D83C4
    if (ctx->r14 != 0) {
        // 0x801D8370: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D83C4;
    }
    goto skip_0;
    // 0x801D8370: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D8374: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D8378: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D837C: bne         $t7, $at, L_801D839C
    if (ctx->r15 != ctx->r1) {
        // 0x801D8380: nop
    
            goto L_801D839C;
    }
    // 0x801D8380: nop

    // 0x801D8384: jal         0x80038B98
    // 0x801D8388: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D8388: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D838C: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D8390: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D8394: b           L_801D83B0
    // 0x801D8398: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D83B0;
    // 0x801D8398: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D839C:
    // 0x801D839C: jal         0x80038B98
    // 0x801D83A0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D83A0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D83A4: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D83A8: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D83AC: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D83B0:
    // 0x801D83B0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D83B4: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D83B8: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D83BC: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D83C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D83C4:
    // 0x801D83C4: jal         0x801E8824
    // 0x801D83C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D83C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D83CC: jal         0x801D2B90
    // 0x801D83D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D83D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D83D4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D83D8: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D83DC: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D83E0: jr          $ra
    // 0x801D83E4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D83E4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801CD690_63C4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD690: lw          $v0, 0xEC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XEC);
    // 0x801CD694: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD698: ldc1        $f8, -0x11E0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X11E0);
    // 0x801CD69C: lwc1        $f4, 0x320($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X320);
    // 0x801CD6A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD6A4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801CD6A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD6AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD6B0: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801CD6B4: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801CD6B8: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CD6BC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CD6C0: nop

    // 0x801CD6C4: bc1fl       L_801CD6D4
    if (!c1cs) {
        // 0x801CD6C8: div.s       $f18, $f12, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
            goto L_801CD6D4;
    }
    goto skip_0;
    // 0x801CD6C8: div.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    skip_0:
    // 0x801CD6CC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801CD6D0: div.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
L_801CD6D4:
    // 0x801CD6D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CD6D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CD6E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD6E4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CD6E8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CD6EC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801CD6F0: nop

    // 0x801CD6F4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801CD6F8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801CD6FC: nop

    // 0x801CD700: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801CD704: beql        $v0, $zero, L_801CD754
    if (ctx->r2 == 0) {
        // 0x801CD708: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_801CD754;
    }
    goto skip_1;
    // 0x801CD708: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x801CD70C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CD710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CD714: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801CD718: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801CD71C: nop

    // 0x801CD720: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CD724: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801CD728: nop

    // 0x801CD72C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801CD730: bne         $v0, $zero, L_801CD748
    if (ctx->r2 != 0) {
        // 0x801CD734: nop
    
            goto L_801CD748;
    }
    // 0x801CD734: nop

    // 0x801CD738: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801CD73C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD740: b           L_801CD760
    // 0x801CD744: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801CD760;
    // 0x801CD744: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801CD748:
    // 0x801CD748: b           L_801CD760
    // 0x801CD74C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801CD760;
    // 0x801CD74C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801CD750: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_801CD754:
    // 0x801CD754: nop

    // 0x801CD758: bltz        $v0, L_801CD748
    if (SIGNED(ctx->r2) < 0) {
        // 0x801CD75C: nop
    
            goto L_801CD748;
    }
    // 0x801CD75C: nop

L_801CD760:
    // 0x801CD760: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801CD764: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CD768: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x801CD76C: bne         $at, $zero, L_801CD778
    if (ctx->r1 != 0) {
        // 0x801CD770: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801CD778;
    }
    // 0x801CD770: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801CD774: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_801CD778:
    // 0x801CD778: jr          $ra
    // 0x801CD77C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801CD77C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801D5314_644164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5314: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D5318: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D531C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D5320: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D5324: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D5328: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D532C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D5330: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5334: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D5338: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D533C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D5340: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D5344: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x801D5348: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D534C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D5350: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D5354: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D5358: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D535C: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D5360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D5364: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D5368: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D536C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D5370: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D5374: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D5378: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D537C: nop

    // 0x801D5380: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D5384: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D5388: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D538C: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D5390: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D5394: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D5398: nop

    // 0x801D539C: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D53A0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D53A4: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D53A8: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D53AC: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D53B0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D53B4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D53B8: jal         0x80033898
    // 0x801D53BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D53BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D53C0: addiu       $t8, $zero, 0xBD
    ctx->r24 = ADD32(0, 0XBD);
    // 0x801D53C4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x801D53C8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801D53CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D53D0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D53D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D53D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D53DC: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D53E0: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D53E4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D53E8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D53EC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D53F0: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D53F4: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D53F8: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801D53FC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D5400: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D5404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D5408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D540C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5410: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D5414: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D5418: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D541C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D5420: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D5424: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801D5428: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801D542C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D5430: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D5434: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D5438: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D543C: jal         0x801CDA88
    // 0x801D5440: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D5440: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D5444: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x801D5448: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D544C: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D5450: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D5454: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D5458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D545C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5460: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D5464: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D5468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D546C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D5470: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D5474: lui         $a2, 0x4325
    ctx->r6 = S32(0X4325 << 16);
    // 0x801D5478: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D547C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D5480: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D5484: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D5488: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D548C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D5490: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5494: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D5498: jal         0x801DF9EC
    // 0x801D549C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D549C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D54A0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D54A4: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D54A8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801D54AC: bnel        $t5, $zero, L_801D5504
    if (ctx->r13 != 0) {
        // 0x801D54B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D5504;
    }
    goto skip_0;
    // 0x801D54B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D54B4: lhu         $t6, 0xE4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D54B8: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D54BC: bne         $t6, $at, L_801D54DC
    if (ctx->r14 != ctx->r1) {
        // 0x801D54C0: nop
    
            goto L_801D54DC;
    }
    // 0x801D54C0: nop

    // 0x801D54C4: jal         0x80038B98
    // 0x801D54C8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D54C8: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D54CC: lw          $t8, 0xEC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XEC);
    // 0x801D54D0: addiu       $t7, $zero, 0x299
    ctx->r15 = ADD32(0, 0X299);
    // 0x801D54D4: b           L_801D54F0
    // 0x801D54D8: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
        goto L_801D54F0;
    // 0x801D54D8: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_801D54DC:
    // 0x801D54DC: jal         0x80038B98
    // 0x801D54E0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D54E0: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D54E4: lw          $t0, 0xEC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XEC);
    // 0x801D54E8: addiu       $t9, $zero, 0x298
    ctx->r25 = ADD32(0, 0X298);
    // 0x801D54EC: sh          $t9, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r25;
L_801D54F0:
    // 0x801D54F0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D54F4: lhu         $t1, 0xE2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D54F8: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801D54FC: sh          $t2, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r10;
    // 0x801D5500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D5504:
    // 0x801D5504: jal         0x801E8824
    // 0x801D5508: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D5508: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D550C: jal         0x801E11BC
    // 0x801D5510: lw          $a0, 0xBC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XBC);
    func_801E11BC_65000C(rdram, ctx);
        goto after_6;
    // 0x801D5510: lw          $a0, 0xBC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XBC);
    after_6:
    // 0x801D5514: jal         0x801D2B90
    // 0x801D5518: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_7;
    // 0x801D5518: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x801D551C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D5520: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D5524: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D5528: jr          $ra
    // 0x801D552C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D552C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801CCE18_63BC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCE1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCE20: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x801CCE24: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CCE28: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CCE2C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x801CCE30: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x801CCE34: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CCE38: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CCE3C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CCE40: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801CCE44: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CCE48: lh          $a2, 0x307E($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X307E);
    // 0x801CCE4C: jal         0x801CCE64
    // 0x801CCE50: lh          $a3, 0x3080($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X3080);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801CCE50: lh          $a3, 0x3080($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X3080);
    after_0:
    // 0x801CCE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCE5C: jr          $ra
    // 0x801CCE60: nop

    TRACE_RETURN()
    return;
    // 0x801CCE60: nop

;}
RECOMP_FUNC void func_801CC69C_63B4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC69C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801CC6A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CC6A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CC6A8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801CC6AC: lhu         $v0, 0x33E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X33E);
    // 0x801CC6B0: lhu         $t6, 0x358($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X358);
    // 0x801CC6B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CC6B8: lwc1        $f20, 0x340($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X340);
    // 0x801CC6BC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801CC6C0: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x801CC6C4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801CC6C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC6CC: bgez        $t7, L_801CC6E4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801CC6D0: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_801CC6E4;
    }
    // 0x801CC6D0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CC6D4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC6D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC6DC: nop

    // 0x801CC6E0: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801CC6E4:
    // 0x801CC6E4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC6E8: ldc1        $f10, -0x1218($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1218);
    // 0x801CC6EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC6F0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801CC6F4: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x801CC6F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CC6FC: nop

    // 0x801CC700: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x801CC704: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC708: jal         0x800417F0
    // 0x801CC70C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x801CC70C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801CC710: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801CC714: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801CC718: jal         0x800419B0
    // 0x801CC71C: swc1        $f8, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f8.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x801CC71C: swc1        $f8, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x801CC720: lhu         $t8, 0x33C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X33C);
    // 0x801CC724: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801CC728: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC72C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801CC730: bgez        $t8, L_801CC748
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CC734: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_801CC748;
    }
    // 0x801CC734: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CC738: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801CC73C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CC740: nop

    // 0x801CC744: add.d       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f10.d + ctx->f16.d;
L_801CC748:
    // 0x801CC748: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC74C: ldc1        $f18, -0x1210($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1210);
    // 0x801CC750: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC754: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC758: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x801CC75C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC760: nop

    // 0x801CC764: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x801CC768: jal         0x800417F0
    // 0x801CC76C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x801CC76C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x801CC770: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801CC774: lhu         $t9, 0x33C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X33C);
    // 0x801CC778: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC77C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801CC780: swc1        $f16, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->f16.u32l;
    // 0x801CC784: bgez        $t9, L_801CC79C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CC788: cvt.d.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
            goto L_801CC79C;
    }
    // 0x801CC788: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CC78C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC790: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC794: nop

    // 0x801CC798: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_801CC79C:
    // 0x801CC79C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC7A0: ldc1        $f8, -0x1208($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1208);
    // 0x801CC7A4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC7A8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801CC7AC: mul.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x801CC7B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CC7B4: nop

    // 0x801CC7B8: div.d       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f16.d);
    // 0x801CC7BC: jal         0x800419B0
    // 0x801CC7C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x801CC7C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x801CC7C4: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801CC7C8: swc1        $f4, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f4.u32l;
    // 0x801CC7CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CC7D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CC7D4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801CC7D8: jr          $ra
    // 0x801CC7DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801CC7DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801CC9F0_63B840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC9F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC9F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC9FC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCA00: addiu       $a0, $a0, 0x2040
    ctx->r4 = ADD32(ctx->r4, 0X2040);
    // 0x801CCA04: jal         0x80034DD8
    // 0x801CCA08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCA08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCA0C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801CCA10: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801CCA14: sw          $v0, 0xCC($v1)
    MEM_W(0XCC, ctx->r3) = ctx->r2;
    // 0x801CCA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCA1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCA20: jr          $ra
    // 0x801CCA24: nop

    TRACE_RETURN()
    return;
    // 0x801CCA24: nop

;}
RECOMP_FUNC void func_801DF7F4_64E644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF7F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DF7F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DF7FC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801DF800: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801DF804: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801DF808: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801DF80C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801DF810: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801DF814: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801DF818: lh          $t7, 0x70($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X70);
    // 0x801DF81C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF820: lhu         $t6, 0x76($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X76);
    // 0x801DF824: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DF828: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x801DF82C: bne         $t6, $t7, L_801DF870
    if (ctx->r14 != ctx->r15) {
        // 0x801DF830: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801DF870;
    }
    // 0x801DF830: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DF834: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DF838: beq         $v1, $zero, L_801DF870
    if (ctx->r3 == 0) {
        // 0x801DF83C: nop
    
            goto L_801DF870;
    }
    // 0x801DF83C: nop

    // 0x801DF840: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x801DF844: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x801DF848: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x801DF84C: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801DF850: lwc1        $f8, 0x64($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801DF854: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801DF858: lhu         $t8, 0x14($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X14);
    // 0x801DF85C: sh          $t8, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r24;
    // 0x801DF860: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x801DF864: sh          $t9, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r25;
    // 0x801DF868: lhu         $t0, 0x18($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X18);
    // 0x801DF86C: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
L_801DF870:
    // 0x801DF870: beq         $s1, $zero, L_801DF974
    if (ctx->r17 == 0) {
        // 0x801DF874: addiu       $s3, $sp, 0x48
        ctx->r19 = ADD32(ctx->r29, 0X48);
            goto L_801DF974;
    }
    // 0x801DF874: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x801DF878: ldc1        $f20, -0xC88($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0XC88);
    // 0x801DF87C: addiu       $s2, $sp, 0x44
    ctx->r18 = ADD32(ctx->r29, 0X44);
    // 0x801DF880: lwc1        $f10, 0x88($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
L_801DF884:
    // 0x801DF884: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801DF888: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801DF88C: lwc1        $f16, 0x8C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801DF890: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x801DF894: lwc1        $f18, 0x90($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801DF898: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801DF89C: lhu         $a2, 0x76($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X76);
    // 0x801DF8A0: lhu         $a1, 0x74($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X74);
    // 0x801DF8A4: lhu         $a0, 0x72($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X72);
    // 0x801DF8A8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801DF8AC: jal         0x80033898
    // 0x801DF8B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DF8B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_0:
    // 0x801DF8B4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801DF8B8: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801DF8BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF8C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DF8C4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801DF8C8: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x801DF8CC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801DF8D0: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801DF8D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF8D8: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801DF8DC: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    // 0x801DF8E0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DF8E4: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801DF8E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DF8EC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801DF8F0: jal         0x801CD504
    // 0x801DF8F4: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DF8F4: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x801DF8F8: beq         $v0, $zero, L_801DF924
    if (ctx->r2 == 0) {
        // 0x801DF8FC: lwc1        $f10, 0x44($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801DF924;
    }
    // 0x801DF8FC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801DF900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF904: jal         0x801CDFE4
    // 0x801DF908: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_2;
    // 0x801DF908: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801DF90C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF910: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DF914: jal         0x80036158
    // 0x801DF918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_3;
    // 0x801DF918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801DF91C: b           L_801DF96C
    // 0x801DF920: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_801DF96C;
    // 0x801DF920: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_801DF924:
    // 0x801DF924: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801DF928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF92C: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x801DF930: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DF934: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DF938: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x801DF93C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801DF940: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DF944: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x801DF948: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DF94C: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x801DF950: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DF954: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DF958: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x801DF95C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801DF960: jal         0x801CE068
    // 0x801DF964: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    func_801CE068_63CEB8(rdram, ctx);
        goto after_4;
    // 0x801DF964: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x801DF968: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_801DF96C:
    // 0x801DF96C: bnel        $s1, $zero, L_801DF884
    if (ctx->r17 != 0) {
        // 0x801DF970: lwc1        $f10, 0x88($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
            goto L_801DF884;
    }
    goto skip_0;
    // 0x801DF970: lwc1        $f10, 0x88($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
    skip_0:
L_801DF974:
    // 0x801DF974: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DF978: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801DF97C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801DF980: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801DF984: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801DF988: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801DF98C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801DF990: jr          $ra
    // 0x801DF994: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801DF994: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801CD8E4_63C734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD8E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CD8E8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801CD8EC: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x801CD8F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD8F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CD8F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801CD8FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801CD900: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801CD904: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801CD908: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x801CD90C: sh          $t7, 0x4C($t1)
    MEM_H(0X4C, ctx->r9) = ctx->r15;
    // 0x801CD910: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801CD914: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CD918: jal         0x800141C4
    // 0x801CD91C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801CD91C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x801CD920: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x801CD924: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x801CD928: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x801CD92C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801CD930: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x801CD934: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD938: and         $v1, $v0, $at
    ctx->r3 = ctx->r2 & ctx->r1;
    // 0x801CD93C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x801CD940: sw          $v1, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->r3;
    // 0x801CD944: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x801CD948: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD94C: sll         $t9, $t8, 25
    ctx->r25 = S32(ctx->r24 << 25);
    // 0x801CD950: subu        $t3, $t6, $t9
    ctx->r11 = SUB32(ctx->r14, ctx->r25);
    // 0x801CD954: addu        $t2, $v1, $t3
    ctx->r10 = ADD32(ctx->r3, ctx->r11);
    // 0x801CD958: sw          $t2, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r10;
    // 0x801CD95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CD964: jr          $ra
    // 0x801CD968: nop

    TRACE_RETURN()
    return;
    // 0x801CD968: nop

;}
RECOMP_FUNC void func_801D0910_63F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0910: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D0914: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801D0918: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D091C: ldc1        $f8, -0x10F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10F0);
    // 0x801D0920: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D0924: nop

    // 0x801D0928: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D092C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D0930: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D0934: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D0938: nop

    // 0x801D093C: slti        $at, $v0, 0x7148
    ctx->r1 = SIGNED(ctx->r2) < 0X7148 ? 1 : 0;
    // 0x801D0940: bne         $at, $zero, L_801D0958
    if (ctx->r1 != 0) {
        // 0x801D0944: nop
    
            goto L_801D0958;
    }
    // 0x801D0944: nop

    // 0x801D0948: addiu       $v0, $v0, -0x7148
    ctx->r2 = ADD32(ctx->r2, -0X7148);
L_801D094C:
    // 0x801D094C: slti        $at, $v0, 0x7148
    ctx->r1 = SIGNED(ctx->r2) < 0X7148 ? 1 : 0;
    // 0x801D0950: beql        $at, $zero, L_801D094C
    if (ctx->r1 == 0) {
        // 0x801D0954: addiu       $v0, $v0, -0x7148
        ctx->r2 = ADD32(ctx->r2, -0X7148);
            goto L_801D094C;
    }
    goto skip_0;
    // 0x801D0954: addiu       $v0, $v0, -0x7148
    ctx->r2 = ADD32(ctx->r2, -0X7148);
    skip_0:
L_801D0958:
    // 0x801D0958: jr          $ra
    // 0x801D095C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D095C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E4DE8_653C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4DE8: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x801E4DEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E4DF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E4DF4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801E4DF8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E4DFC: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E4E00: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801E4E04: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E4E08: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E4E0C: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x801E4E10: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4E14: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E4E18: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E4E1C: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801E4E20: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E4E24: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E4E28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E4E2C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E4E30: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E4E34: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E4E38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E4E3C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E4E40: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E4E44: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801E4E48: nop

    // 0x801E4E4C: bc1fl       L_801E4E5C
    if (!c1cs) {
        // 0x801E4E50: andi        $t0, $v0, 0xFF
        ctx->r8 = ctx->r2 & 0XFF;
            goto L_801E4E5C;
    }
    goto skip_0;
    // 0x801E4E50: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    skip_0:
    // 0x801E4E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E4E58: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
L_801E4E5C:
    // 0x801E4E5C: jr          $ra
    // 0x801E4E60: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    TRACE_RETURN()
    return;
    // 0x801E4E60: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void func_801DAB98_6499E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAB98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DABA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DABA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DABA8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DABAC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DABB0: bgezl       $t6, L_801DABD8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DABB4: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DABD8;
    }
    goto skip_0;
    // 0x801DABB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DABB8: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DABBC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DABC0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DABC4: jal         0x800352EC
    // 0x801DABC8: addiu       $a0, $a0, -0x53E0
    ctx->r4 = ADD32(ctx->r4, -0X53E0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DABC8: addiu       $a0, $a0, -0x53E0
    ctx->r4 = ADD32(ctx->r4, -0X53E0);
    after_0:
    // 0x801DABCC: b           L_801DAC14
    // 0x801DABD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAC14;
    // 0x801DABD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DABD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DABD8:
    // 0x801DABD8: jal         0x801CD504
    // 0x801DABDC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DABDC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DABE0: beq         $v0, $zero, L_801DABF8
    if (ctx->r2 == 0) {
        // 0x801DABE4: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DABF8;
    }
    // 0x801DABE4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DABE8: jal         0x801D8BF0
    // 0x801DABEC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DABEC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DABF0: b           L_801DAC14
    // 0x801DABF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAC14;
    // 0x801DABF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DABF8:
    // 0x801DABF8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DABFC: jal         0x801CD634
    // 0x801DAC00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DAC00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DAC04: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DAC08: jal         0x801CD780
    // 0x801DAC0C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DAC0C: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DAC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAC14:
    // 0x801DAC14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAC18: jr          $ra
    // 0x801DAC1C: nop

    TRACE_RETURN()
    return;
    // 0x801DAC1C: nop

;}
RECOMP_FUNC void func_801D5F64_644DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D5F68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5F6C: lh          $t7, 0xB8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XB8);
    // 0x801D5F70: lh          $t6, 0xBA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XBA);
    // 0x801D5F74: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801D5F78: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801D5F7C: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x801D5F80: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D5F84: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x801D5F88: bne         $at, $zero, L_801D5F94
    if (ctx->r1 != 0) {
        // 0x801D5F8C: sh          $t9, 0xB8($a0)
        MEM_H(0XB8, ctx->r4) = ctx->r25;
            goto L_801D5F94;
    }
    // 0x801D5F8C: sh          $t9, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r25;
    // 0x801D5F90: sb          $t0, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r8;
L_801D5F94:
    // 0x801D5F94: jal         0x801D68E0
    // 0x801D5F98: nop

    func_801D68E0_645730(rdram, ctx);
        goto after_0;
    // 0x801D5F98: nop

    after_0:
    // 0x801D5F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D5FA4: jr          $ra
    // 0x801D5FA8: nop

    TRACE_RETURN()
    return;
    // 0x801D5FA8: nop

;}
RECOMP_FUNC void func_801E2710_651560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2710: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E2714: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801E2718: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x801E271C: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x801E2720: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x801E2724: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x801E2728: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801E272C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801E2730: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x801E2734: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801E2738: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801E273C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801E2740: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801E2744: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801E2748: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E274C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E2750: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E2754: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2758: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E275C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x801E2760: swc1        $f4, 0x330($v0)
    MEM_W(0X330, ctx->r2) = ctx->f4.u32l;
    // 0x801E2764: lwc1        $f28, -0xBC0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0XBC0);
    // 0x801E2768: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E276C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801E2770: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E2774: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x801E2778: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E277C: lui         $s3, 0x800
    ctx->r19 = S32(0X800 << 16);
    // 0x801E2780: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801E2784: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E2788: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x801E278C: addiu       $s3, $s3, 0x40
    ctx->r19 = ADD32(ctx->r19, 0X40);
    // 0x801E2790: lwc1        $f22, -0xBBC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0XBBC);
    // 0x801E2794: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
    // 0x801E2798: lui         $s4, 0x4000
    ctx->r20 = S32(0X4000 << 16);
    // 0x801E279C: addiu       $s5, $zero, 0x4C3
    ctx->r21 = ADD32(0, 0X4C3);
    // 0x801E27A0: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
L_801E27A4:
    // 0x801E27A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E27A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E27AC: jal         0x80035EEC
    // 0x801E27B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E27B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E27B4: beq         $v0, $zero, L_801E2808
    if (ctx->r2 == 0) {
        // 0x801E27B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2808;
    }
    // 0x801E27B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E27BC: addu        $t6, $s3, $s4
    ctx->r14 = ADD32(ctx->r19, ctx->r20);
    // 0x801E27C0: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x801E27C4: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x801E27C8: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801E27CC: swc1        $f30, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f30.u32l;
    // 0x801E27D0: swc1        $f26, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f26.u32l;
    // 0x801E27D4: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    // 0x801E27D8: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x801E27DC: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801E27E0: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801E27E4: swc1        $f28, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f28.u32l;
    // 0x801E27E8: swc1        $f22, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f22.u32l;
    // 0x801E27EC: swc1        $f22, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f22.u32l;
    // 0x801E27F0: sh          $s5, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r21;
    // 0x801E27F4: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x801E27F8: sh          $zero, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = 0;
    // 0x801E27FC: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x801E2800: jal         0x80014218
    // 0x801E2804: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x801E2804: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    after_1:
L_801E2808:
    // 0x801E2808: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x801E280C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801E2810: add.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = ctx->f6.d + ctx->f24.d;
    // 0x801E2814: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801E2818: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801E281C: bne         $t7, $zero, L_801E27A4
    if (ctx->r15 != 0) {
        // 0x801E2820: cvt.s.d     $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
            goto L_801E27A4;
    }
    // 0x801E2820: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x801E2824: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x801E2828: addiu       $t9, $zero, 0x1A0
    ctx->r25 = ADD32(0, 0X1A0);
    // 0x801E282C: addiu       $t0, $zero, 0x3A0
    ctx->r8 = ADD32(0, 0X3A0);
    // 0x801E2830: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x801E2834: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801E2838: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x801E283C: sb          $t8, 0x5D($s1)
    MEM_B(0X5D, ctx->r17) = ctx->r24;
    // 0x801E2840: sb          $zero, 0x5C($s1)
    MEM_B(0X5C, ctx->r17) = 0;
    // 0x801E2844: sh          $zero, 0x64($s1)
    MEM_H(0X64, ctx->r17) = 0;
    // 0x801E2848: sh          $zero, 0x66($s1)
    MEM_H(0X66, ctx->r17) = 0;
    // 0x801E284C: sh          $t9, 0x68($s1)
    MEM_H(0X68, ctx->r17) = ctx->r25;
    // 0x801E2850: sh          $t0, 0x6A($s1)
    MEM_H(0X6A, ctx->r17) = ctx->r8;
    // 0x801E2854: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x801E2858: sb          $t1, 0x5F($s1)
    MEM_B(0X5F, ctx->r17) = ctx->r9;
    // 0x801E285C: sh          $t2, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r10;
    // 0x801E2860: sb          $t3, 0x5E($s1)
    MEM_B(0X5E, ctx->r17) = ctx->r11;
    // 0x801E2864: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801E2868: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801E286C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801E2870: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801E2874: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x801E2878: jal         0x800148F0
    // 0x801E287C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_2;
    // 0x801E287C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x801E2880: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
    // 0x801E2884: jal         0x801E2A84
    // 0x801E2888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801E2A84_6518D4(rdram, ctx);
        goto after_3;
    // 0x801E2888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801E288C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2890: jal         0x8003521C
    // 0x801E2894: addiu       $a0, $a0, 0x28D4
    ctx->r4 = ADD32(ctx->r4, 0X28D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E2894: addiu       $a0, $a0, 0x28D4
    ctx->r4 = ADD32(ctx->r4, 0X28D4);
    after_4:
    // 0x801E2898: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801E289C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801E28A0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801E28A4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801E28A8: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801E28AC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801E28B0: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x801E28B4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801E28B8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801E28BC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x801E28C0: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x801E28C4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x801E28C8: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x801E28CC: jr          $ra
    // 0x801E28D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801E28D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801CC87C_63B6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC87C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CC880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC884: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CC888: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801CC88C: lw          $t0, 0xEC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XEC);
    // 0x801CC890: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CC894: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801CC898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CC89C: lbu         $a2, 0x2($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X2);
L_801CC8A0:
    // 0x801CC8A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CC8A4: sllv        $a3, $t7, $v0
    ctx->r7 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x801CC8A8: and         $t8, $a2, $a3
    ctx->r24 = ctx->r6 & ctx->r7;
    // 0x801CC8AC: bnel        $t8, $zero, L_801CC940
    if (ctx->r24 != 0) {
        // 0x801CC8B0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801CC940;
    }
    goto skip_0;
    // 0x801CC8B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x801CC8B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801CC8B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CC8BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CC8C0: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    // 0x801CC8C4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801CC8C8: jal         0x80035EEC
    // 0x801CC8CC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801CC8CC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_0:
    // 0x801CC8D0: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x801CC8D4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801CC8D8: beq         $v0, $zero, L_801CC94C
    if (ctx->r2 == 0) {
        // 0x801CC8DC: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_801CC94C;
    }
    // 0x801CC8DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CC8E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801CC8E4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801CC8E8: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x801CC8EC: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x801CC8F0: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x801CC8F4: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x801CC8F8: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    // 0x801CC8FC: swl         $at, 0x3C8($a0)
    do_swl(rdram, 0X3C8, ctx->r4, ctx->r1);
    // 0x801CC900: swr         $at, 0x3CB($a0)
    do_swr(rdram, 0X3CB, ctx->r4, ctx->r1);
    // 0x801CC904: lbu         $at, 0x4($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X4);
    // 0x801CC908: addiu       $a0, $a0, 0x3C8
    ctx->r4 = ADD32(ctx->r4, 0X3C8);
    // 0x801CC90C: sb          $at, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r1;
    // 0x801CC910: lbu         $t3, 0x5($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X5);
    // 0x801CC914: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801CC918: addu        $t4, $a0, $at
    ctx->r12 = ADD32(ctx->r4, ctx->r1);
    // 0x801CC91C: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    // 0x801CC920: sw          $t4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r12;
    // 0x801CC924: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x801CC928: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x801CC92C: lbu         $t5, 0x2($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X2);
    // 0x801CC930: or          $t6, $t5, $a3
    ctx->r14 = ctx->r13 | ctx->r7;
    // 0x801CC934: b           L_801CC94C
    // 0x801CC938: sb          $t6, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r14;
        goto L_801CC94C;
    // 0x801CC938: sb          $t6, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r14;
    // 0x801CC93C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801CC940:
    // 0x801CC940: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x801CC944: bne         $a0, $v0, L_801CC8A0
    if (ctx->r4 != ctx->r2) {
        // 0x801CC948: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CC8A0;
    }
    // 0x801CC948: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801CC94C:
    // 0x801CC94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC950: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CC954: jr          $ra
    // 0x801CC958: nop

    TRACE_RETURN()
    return;
    // 0x801CC958: nop

;}
RECOMP_FUNC void func_801CC814_63B664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC820: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CC824: addiu       $a0, $a0, 0x2ED0
    ctx->r4 = ADD32(ctx->r4, 0X2ED0);
    // 0x801CC828: jal         0x80034DD8
    // 0x801CC82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CC82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CC830: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CC834: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CC838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC83C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC840: jr          $ra
    // 0x801CC844: nop

    TRACE_RETURN()
    return;
    // 0x801CC844: nop

;}
RECOMP_FUNC void func_801D2B90_6419E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2B98: lw          $a3, 0xEC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XEC);
    // 0x801D2B9C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801D2BA0: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x801D2BA4: lw          $t7, 0x110($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X110);
    // 0x801D2BA8: addiu       $a1, $a3, 0x110
    ctx->r5 = ADD32(ctx->r7, 0X110);
    // 0x801D2BAC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D2BB0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D2BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D2BB8: beq         $a0, $t7, L_801D2BE0
    if (ctx->r4 == ctx->r15) {
        // 0x801D2BBC: lbu         $t0, 0x312($a3)
        ctx->r8 = MEM_BU(ctx->r7, 0X312);
            goto L_801D2BE0;
    }
    // 0x801D2BBC: lbu         $t0, 0x312($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X312);
    // 0x801D2BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D2BC4:
    // 0x801D2BC4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D2BC8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D2BCC: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801D2BD0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801D2BD4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801D2BD8: bnel        $a2, $t2, L_801D2BC4
    if (ctx->r6 != ctx->r10) {
        // 0x801D2BDC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D2BC4;
    }
    goto skip_0;
    // 0x801D2BDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_801D2BE0:
    // 0x801D2BE0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801D2BE4: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x801D2BE8: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D2BEC: sb          $a0, 0x312($a3)
    MEM_B(0X312, ctx->r7) = ctx->r4;
    // 0x801D2BF0: beq         $at, $zero, L_801D2C24
    if (ctx->r1 == 0) {
        // 0x801D2BF4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D2C24;
    }
    // 0x801D2BF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D2BF8:
    // 0x801D2BF8: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801D2BFC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D2C00: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801D2C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D2C08: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801D2C0C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801D2C10: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x801D2C14: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D2C18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D2C1C: bne         $at, $zero, L_801D2BF8
    if (ctx->r1 != 0) {
        // 0x801D2C20: sw          $t6, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r14;
            goto L_801D2BF8;
    }
    // 0x801D2C20: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_801D2C24:
    // 0x801D2C24: jal         0x80034EF8
    // 0x801D2C28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801D2C28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801D2C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2C34: jr          $ra
    // 0x801D2C38: nop

    TRACE_RETURN()
    return;
    // 0x801D2C38: nop

;}
RECOMP_FUNC void func_801D35AC_6423FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D35AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D35B0: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801D35B4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801D35B8: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801D35BC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801D35C0: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D35C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D35C8: lwc1        $f2, 0x64($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801D35CC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D35D0: sltu        $t9, $zero, $a1
    ctx->r25 = 0 < ctx->r5 ? 1 : 0;
    // 0x801D35D4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D35D8: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x801D35DC: bc1fl       L_801D35EC
    if (!c1cs) {
        // 0x801D35E0: xor         $t0, $t8, $t9
        ctx->r8 = ctx->r24 ^ ctx->r25;
            goto L_801D35EC;
    }
    goto skip_0;
    // 0x801D35E0: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
    skip_0:
    // 0x801D35E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D35E8: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
L_801D35EC:
    // 0x801D35EC: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801D35F0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801D35F4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801D35F8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D35FC: ldc1        $f8, -0xF88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF88);
    // 0x801D3600: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D3604: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D3608: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D360C: jr          $ra
    // 0x801D3610: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801D3610: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_801CE83C_63D68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE83C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CE840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CE844: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CE848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CE84C: jal         0x801CCE18
    // 0x801CE850: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801CCE18_63BC68(rdram, ctx);
        goto after_0;
    // 0x801CE850: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CE854: lbu         $v0, 0x9D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9D);
    // 0x801CE858: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CE85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE860: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801CE864: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801CE868: lw          $t9, -0x7624($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7624);
    // 0x801CE86C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801CE870: jalr        $t9
    // 0x801CE874: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801CE874: nop

    after_1:
    // 0x801CE878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE87C: jal         0x801CC350
    // 0x801CE880: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801CC350_63B1A0(rdram, ctx);
        goto after_2;
    // 0x801CE880: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801CE884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE888: jal         0x801CD1C0
    // 0x801CE88C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801CD1C0_63C010(rdram, ctx);
        goto after_3;
    // 0x801CE88C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801CE890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CE894: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CE898: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CE89C: jr          $ra
    // 0x801CE8A0: nop

    TRACE_RETURN()
    return;
    // 0x801CE8A0: nop

;}
RECOMP_FUNC void func_801CE638_63D488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE638: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CE63C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE640: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CE644: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CE648: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x801CE64C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CE650: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CE654: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801CE658: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801CE65C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CE660: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801CE664: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801CE668: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x801CE66C: lh          $a0, -0x4F80($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4F80);
    // 0x801CE670: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801CE674: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x801CE678: jal         0x801CCBD0
    // 0x801CE67C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_0;
    // 0x801CE67C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x801CE680: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x801CE684: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801CE688: addiu       $a2, $zero, 0x32C8
    ctx->r6 = ADD32(0, 0X32C8);
    // 0x801CE68C: lw          $v1, 0xB4($t0)
    ctx->r3 = MEM_W(ctx->r8, 0XB4);
    // 0x801CE690: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801CE694: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CE698: slti        $a0, $v1, 0x32C8
    ctx->r4 = SIGNED(ctx->r3) < 0X32C8 ? 1 : 0;
    // 0x801CE69C: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x801CE6A0: bne         $t1, $zero, L_801CE6B8
    if (ctx->r9 != 0) {
        // 0x801CE6A4: andi        $a1, $a0, 0xFF
        ctx->r5 = ctx->r4 & 0XFF;
            goto L_801CE6B8;
    }
    // 0x801CE6A4: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x801CE6A8: slti        $a1, $v1, 0x6978
    ctx->r5 = SIGNED(ctx->r3) < 0X6978 ? 1 : 0;
    // 0x801CE6AC: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x801CE6B0: addiu       $a2, $zero, 0x6978
    ctx->r6 = ADD32(0, 0X6978);
    // 0x801CE6B4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_801CE6B8:
    // 0x801CE6B8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CE6BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE6C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE6C4: ldc1        $f16, -0x11C0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X11C0);
    // 0x801CE6C8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CE6CC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CE6D0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801CE6D4: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801CE6D8: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x801CE6DC: nop

    // 0x801CE6E0: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x801CE6E4: slt         $t5, $v1, $a2
    ctx->r13 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x801CE6E8: xori        $t5, $t5, 0x1
    ctx->r13 = ctx->r13 ^ 0X1;
    // 0x801CE6EC: and         $a1, $a1, $t5
    ctx->r5 = ctx->r5 & ctx->r13;
    // 0x801CE6F0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801CE6F4: beql        $t6, $zero, L_801CE738
    if (ctx->r14 == 0) {
        // 0x801CE6F8: slti        $at, $v1, 0x7148
        ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
            goto L_801CE738;
    }
    goto skip_0;
    // 0x801CE6F8: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    skip_0:
    // 0x801CE6FC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CE700: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CE704: xori        $a0, $a2, 0x32C8
    ctx->r4 = ctx->r6 ^ 0X32C8;
    // 0x801CE708: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CE70C: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x801CE710: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE714: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x801CE718: bne         $t8, $at, L_801CE734
    if (ctx->r24 != ctx->r1) {
        // 0x801CE71C: addiu       $a0, $a0, 0x29C
        ctx->r4 = ADD32(ctx->r4, 0X29C);
            goto L_801CE734;
    }
    // 0x801CE71C: addiu       $a0, $a0, 0x29C
    ctx->r4 = ADD32(ctx->r4, 0X29C);
    // 0x801CE720: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x801CE724: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x801CE728: jal         0x80038B98
    // 0x801CE72C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801CE72C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801CE730: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_801CE734:
    // 0x801CE734: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
L_801CE738:
    // 0x801CE738: bne         $at, $zero, L_801CE750
    if (ctx->r1 != 0) {
        // 0x801CE73C: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_801CE750;
    }
    // 0x801CE73C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x801CE740: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
L_801CE744:
    // 0x801CE744: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    // 0x801CE748: beql        $at, $zero, L_801CE744
    if (ctx->r1 == 0) {
        // 0x801CE74C: addiu       $v1, $v1, -0x7148
        ctx->r3 = ADD32(ctx->r3, -0X7148);
            goto L_801CE744;
    }
    goto skip_1;
    // 0x801CE74C: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    skip_1:
L_801CE750:
    // 0x801CE750: sw          $v1, 0xB4($t0)
    MEM_W(0XB4, ctx->r8) = ctx->r3;
    // 0x801CE754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CE758: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CE75C: jr          $ra
    // 0x801CE760: nop

    TRACE_RETURN()
    return;
    // 0x801CE760: nop

;}
RECOMP_FUNC void func_801D77BC_64660C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D77BC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D77C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D77C4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D77C8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D77CC: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D77D0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D77D4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D77D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D77DC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D77E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D77E4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D77E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D77EC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D77F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D77F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D77F8: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D77FC: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D7800: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D7804: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D7808: ldc1        $f8, -0xE08($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE08);
    // 0x801D780C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D7810: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D7814: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D7818: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D781C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D7820: nop

    // 0x801D7824: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D7828: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D782C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D7830: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D7834: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D7838: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D783C: nop

    // 0x801D7840: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D7844: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D7848: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D784C: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D7850: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D7854: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D7858: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D785C: jal         0x80033898
    // 0x801D7860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D7860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D7864: addiu       $t8, $zero, 0xF7
    ctx->r24 = ADD32(0, 0XF7);
    // 0x801D7868: addiu       $t9, $zero, 0x9D
    ctx->r25 = ADD32(0, 0X9D);
    // 0x801D786C: addiu       $t0, $zero, 0x4D
    ctx->r8 = ADD32(0, 0X4D);
    // 0x801D7870: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D7874: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D7878: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D787C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D7880: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D7884: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D7888: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D788C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D7890: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D7894: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D7898: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D789C: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D78A0: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D78A4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D78A8: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D78AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D78B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D78B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D78B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D78BC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D78C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D78C4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D78C8: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D78CC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D78D0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D78D4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D78D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D78DC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D78E0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D78E4: jal         0x801CDA88
    // 0x801D78E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D78E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D78EC: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D78F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D78F4: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D78F8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D78FC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D7900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7904: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D7908: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D790C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D7910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7914: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D7918: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D791C: lui         $a2, 0x42E1
    ctx->r6 = S32(0X42E1 << 16);
    // 0x801D7920: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D7924: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D7928: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D792C: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D7930: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D7934: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D7938: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D793C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D7940: jal         0x801DF9EC
    // 0x801D7944: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D7944: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D7948: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D794C: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D7950: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D7954: bnel        $t6, $zero, L_801D79AC
    if (ctx->r14 != 0) {
        // 0x801D7958: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D79AC;
    }
    goto skip_0;
    // 0x801D7958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D795C: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D7960: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D7964: bne         $t7, $at, L_801D7984
    if (ctx->r15 != ctx->r1) {
        // 0x801D7968: nop
    
            goto L_801D7984;
    }
    // 0x801D7968: nop

    // 0x801D796C: jal         0x80038B98
    // 0x801D7970: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D7970: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D7974: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D7978: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D797C: b           L_801D7998
    // 0x801D7980: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D7998;
    // 0x801D7980: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D7984:
    // 0x801D7984: jal         0x80038B98
    // 0x801D7988: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D7988: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D798C: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D7990: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D7994: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D7998:
    // 0x801D7998: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D799C: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D79A0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D79A4: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D79A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D79AC:
    // 0x801D79AC: jal         0x801E8824
    // 0x801D79B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D79B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D79B4: jal         0x801D2B90
    // 0x801D79B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D79B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D79BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D79C0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D79C4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D79C8: jr          $ra
    // 0x801D79CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D79CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D8428_647278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D842C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8430: lw          $a3, 0xEC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XEC);
    // 0x801D8434: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801D8438: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x801D843C: lw          $t7, 0x2E8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X2E8);
    // 0x801D8440: addiu       $a1, $a3, 0x2E8
    ctx->r5 = ADD32(ctx->r7, 0X2E8);
    // 0x801D8444: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D8448: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D844C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D8450: beq         $a0, $t7, L_801D8478
    if (ctx->r4 == ctx->r15) {
        // 0x801D8454: lbu         $t0, 0x316($a3)
        ctx->r8 = MEM_BU(ctx->r7, 0X316);
            goto L_801D8478;
    }
    // 0x801D8454: lbu         $t0, 0x316($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X316);
    // 0x801D8458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D845C:
    // 0x801D845C: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D8460: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D8464: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801D8468: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801D846C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801D8470: bnel        $a2, $t2, L_801D845C
    if (ctx->r6 != ctx->r10) {
        // 0x801D8474: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D845C;
    }
    goto skip_0;
    // 0x801D8474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_801D8478:
    // 0x801D8478: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x801D847C: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x801D8480: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D8484: sb          $a0, 0x316($a3)
    MEM_B(0X316, ctx->r7) = ctx->r4;
    // 0x801D8488: beq         $at, $zero, L_801D84BC
    if (ctx->r1 == 0) {
        // 0x801D848C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D84BC;
    }
    // 0x801D848C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D8490:
    // 0x801D8490: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801D8494: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801D8498: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801D849C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D84A0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801D84A4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801D84A8: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x801D84AC: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D84B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D84B4: bne         $at, $zero, L_801D8490
    if (ctx->r1 != 0) {
        // 0x801D84B8: sw          $t6, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r14;
            goto L_801D8490;
    }
    // 0x801D84B8: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_801D84BC:
    // 0x801D84BC: jal         0x80034EF8
    // 0x801D84C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801D84C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x801D84C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D84C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D84CC: jr          $ra
    // 0x801D84D0: nop

    TRACE_RETURN()
    return;
    // 0x801D84D0: nop

;}
RECOMP_FUNC void func_801E2CB0_651B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2CB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2CB8: lw          $a0, 0xEC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XEC);
    // 0x801E2CBC: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801E2CC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2CC4: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    // 0x801E2CC8: addiu       $t6, $zero, 0x134
    ctx->r14 = ADD32(0, 0X134);
    // 0x801E2CCC: sh          $t6, 0x33C($a0)
    MEM_H(0X33C, ctx->r4) = ctx->r14;
    // 0x801E2CD0: sh          $zero, 0x33E($a0)
    MEM_H(0X33E, ctx->r4) = 0;
    // 0x801E2CD4: swc1        $f4, 0x340($a0)
    MEM_W(0X340, ctx->r4) = ctx->f4.u32l;
    // 0x801E2CD8: jal         0x801CC69C
    // 0x801E2CDC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_801CC69C_63B4EC(rdram, ctx);
        goto after_0;
    // 0x801E2CDC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E2CE0: jal         0x801CC7E0
    // 0x801E2CE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801CC7E0_63B630(rdram, ctx);
        goto after_1;
    // 0x801E2CE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E2CE8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2CEC: jal         0x800352EC
    // 0x801E2CF0: addiu       $a0, $a0, 0x2D04
    ctx->r4 = ADD32(ctx->r4, 0X2D04);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801E2CF0: addiu       $a0, $a0, 0x2D04
    ctx->r4 = ADD32(ctx->r4, 0X2D04);
    after_2:
    // 0x801E2CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2CFC: jr          $ra
    // 0x801E2D00: nop

    TRACE_RETURN()
    return;
    // 0x801E2D00: nop

;}
RECOMP_FUNC void func_801D1918_640768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1918: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D191C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x801D1920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801D1924: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x801D1928: beq         $t7, $zero, L_801D1938
    if (ctx->r15 == 0) {
        // 0x801D192C: nop
    
            goto L_801D1938;
    }
    // 0x801D192C: nop

    // 0x801D1930: jr          $ra
    // 0x801D1934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D1934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D1938:
    // 0x801D1938: jr          $ra
    // 0x801D193C: nop

    TRACE_RETURN()
    return;
    // 0x801D193C: nop

;}
RECOMP_FUNC void func_801DB9D8_64A828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB9D8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DB9DC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DB9E0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DB9E4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DB9E8: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DB9EC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DB9F0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DB9F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB9F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DB9FC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DBA00: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DBA04: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DBA08: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x801DBA0C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DBA10: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DBA14: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DBA18: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DBA1C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DBA20: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DBA24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DBA28: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DBA2C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DBA30: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DBA34: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DBA38: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DBA3C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DBA40: nop

    // 0x801DBA44: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DBA48: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DBA4C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DBA50: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DBA54: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DBA58: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DBA5C: nop

    // 0x801DBA60: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DBA64: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DBA68: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DBA6C: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DBA70: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DBA74: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DBA78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DBA7C: jal         0x80033898
    // 0x801DBA80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DBA80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DBA84: addiu       $t8, $zero, 0xD3
    ctx->r24 = ADD32(0, 0XD3);
    // 0x801DBA88: addiu       $t9, $zero, 0xAF
    ctx->r25 = ADD32(0, 0XAF);
    // 0x801DBA8C: addiu       $t0, $zero, 0x7B
    ctx->r8 = ADD32(0, 0X7B);
    // 0x801DBA90: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DBA94: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DBA98: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DBA9C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DBAA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DBAA4: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DBAA8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DBAAC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DBAB0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DBAB4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DBAB8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DBABC: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DBAC0: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DBAC4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DBAC8: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DBACC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DBAD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DBAD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DBAD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DBADC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DBAE0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DBAE4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DBAE8: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DBAEC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DBAF0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DBAF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DBAF8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DBAFC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DBB00: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DBB04: jal         0x801CDA88
    // 0x801DBB08: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DBB08: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DBB0C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DBB10: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DBB14: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DBB18: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DBB1C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DBB20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DBB24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DBB28: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DBB2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DBB30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DBB34: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DBB38: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DBB3C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x801DBB40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DBB44: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DBB48: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DBB4C: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DBB50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DBB54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DBB58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DBB5C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DBB60: jal         0x801DF9EC
    // 0x801DBB64: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DBB64: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DBB68: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DBB6C: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DBB70: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DBB74: bnel        $t6, $zero, L_801DBBCC
    if (ctx->r14 != 0) {
        // 0x801DBB78: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DBBCC;
    }
    goto skip_0;
    // 0x801DBB78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DBB7C: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DBB80: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DBB84: bne         $t7, $at, L_801DBBA4
    if (ctx->r15 != ctx->r1) {
        // 0x801DBB88: nop
    
            goto L_801DBBA4;
    }
    // 0x801DBB88: nop

    // 0x801DBB8C: jal         0x80038B98
    // 0x801DBB90: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DBB90: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DBB94: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DBB98: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DBB9C: b           L_801DBBB8
    // 0x801DBBA0: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DBBB8;
    // 0x801DBBA0: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DBBA4:
    // 0x801DBBA4: jal         0x80038B98
    // 0x801DBBA8: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DBBA8: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DBBAC: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DBBB0: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DBBB4: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DBBB8:
    // 0x801DBBB8: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DBBBC: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DBBC0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DBBC4: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DBBC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DBBCC:
    // 0x801DBBCC: jal         0x801E8850
    // 0x801DBBD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DBBD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801DBBD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DBBD8: jal         0x801E8824
    // 0x801DBBDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8824_657674(rdram, ctx);
        goto after_6;
    // 0x801DBBDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x801DBBE0: jal         0x801D8BF0
    // 0x801DBBE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_7;
    // 0x801DBBE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x801DBBE8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DBBEC: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DBBF0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DBBF4: jr          $ra
    // 0x801DBBF8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DBBF8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D8568_6473B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8568: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D856C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D8570: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D8574: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801D8578: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801D857C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801D8580: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D8584: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8588: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D858C: bgezl       $t6, L_801D85A8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D8590: lwc1        $f0, 0x5C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_801D85A8;
    }
    goto skip_0;
    // 0x801D8590: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x801D8594: jal         0x800352EC
    // 0x801D8598: addiu       $a0, $a0, -0x787C
    ctx->r4 = ADD32(ctx->r4, -0X787C);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D8598: addiu       $a0, $a0, -0x787C
    ctx->r4 = ADD32(ctx->r4, -0X787C);
    after_0:
    // 0x801D859C: b           L_801D8770
    // 0x801D85A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D8770;
    // 0x801D85A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D85A4: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
L_801D85A8:
    // 0x801D85A8: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801D85AC: lwc1        $f20, 0x60($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D85B0: lwc1        $f6, 0xA4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801D85B4: lwc1        $f22, 0x64($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D85B8: lwc1        $f8, 0xA8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x801D85BC: add.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D85C0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D85C4: add.s       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801D85C8: swc1        $f16, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f16.u32l;
    // 0x801D85CC: add.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x801D85D0: swc1        $f2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
    // 0x801D85D4: swc1        $f12, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f12.u32l;
    // 0x801D85D8: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x801D85DC: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x801D85E0: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x801D85E4: jal         0x801CBC94
    // 0x801D85E8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_1;
    // 0x801D85E8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801D85EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D85F0: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D85F4: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x801D85F8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D85FC: nop

    // 0x801D8600: bc1f        L_801D8738
    if (!c1cs) {
        // 0x801D8604: nop
    
            goto L_801D8738;
    }
    // 0x801D8604: nop

    // 0x801D8608: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D860C: nop

    // 0x801D8610: bc1f        L_801D8738
    if (!c1cs) {
        // 0x801D8614: nop
    
            goto L_801D8738;
    }
    // 0x801D8614: nop

    // 0x801D8618: c.le.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl <= ctx->f20.fl;
    // 0x801D861C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8620: bc1f        L_801D8724
    if (!c1cs) {
        // 0x801D8624: nop
    
            goto L_801D8724;
    }
    // 0x801D8624: nop

    // 0x801D8628: sub.s       $f0, $f10, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x801D862C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x801D8630: sub.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x801D8634: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D8638: sub.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x801D863C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D8640: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801D8644: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D8648: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D864C: add.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801D8650: jal         0x801CBC94
    // 0x801D8654: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_2;
    // 0x801D8654: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x801D8658: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D865C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D8660: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D8664: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801D8668: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D866C: bc1f        L_801D8724
    if (!c1cs) {
        // 0x801D8670: nop
    
            goto L_801D8724;
    }
    // 0x801D8670: nop

    // 0x801D8674: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D8678: nop

    // 0x801D867C: bc1fl       L_801D8694
    if (!c1cs) {
        // 0x801D8680: sub.s       $f2, $f0, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
            goto L_801D8694;
    }
    goto skip_1;
    // 0x801D8680: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    skip_1:
    // 0x801D8684: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801D8688: b           L_801D8694
    // 0x801D868C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D8694;
    // 0x801D868C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D8690: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
L_801D8694:
    // 0x801D8694: ldc1        $f6, -0xDE0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XDE0);
    // 0x801D8698: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801D869C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801D86A0: nop

    // 0x801D86A4: bc1fl       L_801D86FC
    if (!c1cs) {
        // 0x801D86A8: lwc1        $f0, 0x64($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
            goto L_801D86FC;
    }
    goto skip_2;
    // 0x801D86A8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    skip_2:
    // 0x801D86AC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D86B0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D86B4: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D86B8: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801D86BC: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D86C0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D86C4: div.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D86C8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D86CC: div.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801D86D0: mul.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x801D86D4: sub.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x801D86D8: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x801D86DC: sub.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801D86E0: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D86E4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D86E8: div.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D86EC: sub.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x801D86F0: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D86F4: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801D86F8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
L_801D86FC:
    // 0x801D86FC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D8700: sub.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x801D8704: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D8708: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D870C: swc1        $f16, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f16.u32l;
    // 0x801D8710: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    // 0x801D8714: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D8718: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801D871C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D8720: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
L_801D8724:
    // 0x801D8724: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8728: jal         0x800352EC
    // 0x801D872C: addiu       $a0, $a0, -0x787C
    ctx->r4 = ADD32(ctx->r4, -0X787C);
    func_800352EC_35EEC(rdram, ctx);
        goto after_3;
    // 0x801D872C: addiu       $a0, $a0, -0x787C
    ctx->r4 = ADD32(ctx->r4, -0X787C);
    after_3:
    // 0x801D8730: b           L_801D8770
    // 0x801D8734: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D8770;
    // 0x801D8734: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D8738:
    // 0x801D8738: jal         0x801CD504
    // 0x801D873C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_4;
    // 0x801D873C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D8740: beq         $v0, $zero, L_801D8758
    if (ctx->r2 == 0) {
        // 0x801D8744: nop
    
            goto L_801D8758;
    }
    // 0x801D8744: nop

    // 0x801D8748: jal         0x801D8428
    // 0x801D874C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8428_647278(rdram, ctx);
        goto after_5;
    // 0x801D874C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D8750: b           L_801D8770
    // 0x801D8754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D8770;
    // 0x801D8754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D8758:
    // 0x801D8758: jal         0x801CD634
    // 0x801D875C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_6;
    // 0x801D875C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D8760: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D8764: jal         0x801CD780
    // 0x801D8768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_7;
    // 0x801D8768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x801D876C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D8770:
    // 0x801D8770: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801D8774: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801D8778: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D877C: jr          $ra
    // 0x801D8780: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801D8780: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801DFBE0_64EA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFBE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DFBE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801DFBEC: bne         $a1, $zero, L_801DFC2C
    if (ctx->r5 != 0) {
        // 0x801DFBF0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801DFC2C;
    }
    // 0x801DFBF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801DFBF4: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801DFBF8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DFBFC: addiu       $a1, $a1, -0xA00
    ctx->r5 = ADD32(ctx->r5, -0XA00);
    // 0x801DFC00: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801DFC04: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801DFC08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DFC0C: jal         0x80034E08
    // 0x801DFC10: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801DFC10: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DFC14: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFC18: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801DFC1C: beq         $v0, $zero, L_801DFC2C
    if (ctx->r2 == 0) {
        // 0x801DFC20: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801DFC2C;
    }
    // 0x801DFC20: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801DFC24: sw          $a3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r7;
    // 0x801DFC28: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
L_801DFC2C:
    // 0x801DFC2C: beql        $a1, $zero, L_801DFC50
    if (ctx->r5 == 0) {
        // 0x801DFC30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DFC50;
    }
    goto skip_0;
    // 0x801DFC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DFC34: sw          $a3, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r7;
    // 0x801DFC38: sb          $zero, 0x78($a1)
    MEM_B(0X78, ctx->r5) = 0;
    // 0x801DFC3C: lhu         $t6, 0x76($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X76);
    // 0x801DFC40: sh          $t6, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r14;
    // 0x801DFC44: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x801DFC48: sb          $t7, 0x6A($a1)
    MEM_B(0X6A, ctx->r5) = ctx->r15;
    // 0x801DFC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DFC50:
    // 0x801DFC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DFC54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801DFC58: jr          $ra
    // 0x801DFC5C: nop

    TRACE_RETURN()
    return;
    // 0x801DFC5C: nop

;}
RECOMP_FUNC void func_801CEDE0_63DC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEDE0: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801CEDE4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CEDE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801CEDEC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801CEDF0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801CEDF4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801CEDF8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801CEDFC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801CEE00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CEE04: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801CEE08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CEE0C: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801CEE10: sb          $zero, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = 0;
    // 0x801CEE14: lh          $t7, 0x0($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X0);
    // 0x801CEE18: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CEE1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CEE20: andi        $t8, $t7, 0xF9FF
    ctx->r24 = ctx->r15 & 0XF9FF;
    // 0x801CEE24: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x801CEE28: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801CEE2C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801CEE30: sb          $t9, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = ctx->r25;
    // 0x801CEE34: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CEE38: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x801CEE3C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801CEE40: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801CEE44: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x801CEE48: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x801CEE4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CEE50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801CEE54: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x801CEE58: nop

    // 0x801CEE5C: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x801CEE60: lw          $v0, 0x318($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X318);
    // 0x801CEE64: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x801CEE68: sra         $t2, $v0, 3
    ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
    // 0x801CEE6C: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x801CEE70: sw          $t3, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r11;
    // 0x801CEE74: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801CEE78: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x801CEE7C: lhu         $v1, -0x520C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520C);
    // 0x801CEE80: beql        $v1, $zero, L_801CEE9C
    if (ctx->r3 == 0) {
        // 0x801CEE84: lw          $t5, 0xEC($s6)
        ctx->r13 = MEM_W(ctx->r22, 0XEC);
            goto L_801CEE9C;
    }
    goto skip_0;
    // 0x801CEE84: lw          $t5, 0xEC($s6)
    ctx->r13 = MEM_W(ctx->r22, 0XEC);
    skip_0:
    // 0x801CEE88: beq         $v1, $at, L_801CEEC8
    if (ctx->r3 == ctx->r1) {
        // 0x801CEE8C: lui         $s2, 0x801F
        ctx->r18 = S32(0X801F << 16);
            goto L_801CEEC8;
    }
    // 0x801CEE8C: lui         $s2, 0x801F
    ctx->r18 = S32(0X801F << 16);
    // 0x801CEE90: b           L_801CEF94
    // 0x801CEE94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801CEF94;
    // 0x801CEE94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CEE98: lw          $t5, 0xEC($s6)
    ctx->r13 = MEM_W(ctx->r22, 0XEC);
L_801CEE9C:
    // 0x801CEE9C: lhu         $t6, 0xE2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0XE2);
    // 0x801CEEA0: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x801CEEA4: bnel        $t7, $zero, L_801CEF94
    if (ctx->r15 != 0) {
        // 0x801CEEA8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801CEF94;
    }
    goto skip_1;
    // 0x801CEEA8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x801CEEAC: jal         0x80038B98
    // 0x801CEEB0: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801CEEB0: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    after_0:
    // 0x801CEEB4: lw          $v0, 0xEC($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XEC);
    // 0x801CEEB8: lhu         $t8, 0xE2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XE2);
    // 0x801CEEBC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x801CEEC0: b           L_801CEF90
    // 0x801CEEC4: sh          $t9, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r25;
        goto L_801CEF90;
    // 0x801CEEC4: sh          $t9, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r25;
L_801CEEC8:
    // 0x801CEEC8: lw          $v0, 0xDC($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XDC);
    // 0x801CEECC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CEED0: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x801CEED4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801CEED8: addiu       $s2, $s2, -0x768C
    ctx->r18 = ADD32(ctx->r18, -0X768C);
    // 0x801CEEDC: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x801CEEE0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801CEEE4: addiu       $s4, $sp, 0x50
    ctx->r20 = ADD32(ctx->r29, 0X50);
    // 0x801CEEE8: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
L_801CEEEC:
    // 0x801CEEEC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_801CEEF0:
    // 0x801CEEF0: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x801CEEF4: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x801CEEF8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x801CEEFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801CEF00: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801CEF04: jal         0x8001B918
    // 0x801CEF08: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    func_8001B918_1C518(rdram, ctx);
        goto after_1;
    // 0x801CEF08: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    after_1:
    // 0x801CEF0C: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801CEF10: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x801CEF14: addu        $v0, $s5, $t1
    ctx->r2 = ADD32(ctx->r21, ctx->r9);
    // 0x801CEF18: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CEF1C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801CEF20: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x801CEF24: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x801CEF28: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x801CEF2C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CEF30: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801CEF34: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CEF38: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CEF3C: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x801CEF40: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CEF44: swc1        $f18, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f18.u32l;
    // 0x801CEF48: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CEF4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CEF50: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801CEF54: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CEF58: bne         $t2, $zero, L_801CEEEC
    if (ctx->r10 != 0) {
        // 0x801CEF5C: swc1        $f10, 0x8C($v0)
        MEM_W(0X8C, ctx->r2) = ctx->f10.u32l;
            goto L_801CEEEC;
    }
    // 0x801CEF5C: swc1        $f10, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f10.u32l;
    // 0x801CEF60: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x801CEF64: bnel        $at, $zero, L_801CEF80
    if (ctx->r1 != 0) {
        // 0x801CEF68: lw          $v0, 0xE4($s6)
        ctx->r2 = MEM_W(ctx->r22, 0XE4);
            goto L_801CEF80;
    }
    goto skip_2;
    // 0x801CEF68: lw          $v0, 0xE4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XE4);
    skip_2:
    // 0x801CEF6C: lw          $v0, 0xE0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XE0);
    // 0x801CEF70: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x801CEF74: b           L_801CEF88
    // 0x801CEF78: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
        goto L_801CEF88;
    // 0x801CEF78: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
    // 0x801CEF7C: lw          $v0, 0xE4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XE4);
L_801CEF80:
    // 0x801CEF80: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    // 0x801CEF84: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
L_801CEF88:
    // 0x801CEF88: bnel        $s0, $zero, L_801CEEF0
    if (ctx->r16 != 0) {
        // 0x801CEF8C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_801CEEF0;
    }
    goto skip_3;
    // 0x801CEF8C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_3:
L_801CEF90:
    // 0x801CEF90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801CEF94:
    // 0x801CEF94: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801CEF98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CEF9C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801CEFA0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801CEFA4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x801CEFA8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x801CEFAC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x801CEFB0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x801CEFB4: jr          $ra
    // 0x801CEFB8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801CEFB8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801CF290_63E0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF290: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CF294: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CF298: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CF29C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801CF2A0: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CF2A4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF2A8: ldc1        $f8, -0x1160($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1160);
    // 0x801CF2AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CF2B0: lw          $v1, 0xE4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE4);
    // 0x801CF2B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CF2B8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CF2BC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x801CF2C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF2C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CF2C8: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x801CF2CC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CF2D0: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x801CF2D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF2D8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x801CF2DC: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CF2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF2E4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x801CF2E8: nop

    // 0x801CF2EC: sw          $t0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r8;
    // 0x801CF2F0: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x801CF2F4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x801CF2F8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x801CF2FC: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x801CF300: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x801CF304: sw          $v0, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->r2;
    // 0x801CF308: srl         $t1, $v0, 22
    ctx->r9 = S32(U32(ctx->r2) >> 22);
    // 0x801CF30C: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801CF310: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CF314: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801CF318: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801CF31C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801CF320: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x801CF324: jal         0x80033898
    // 0x801CF328: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801CF328: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_0:
    // 0x801CF32C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801CF330: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801CF334: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801CF338: slti        $at, $t0, 0x4268
    ctx->r1 = SIGNED(ctx->r8) < 0X4268 ? 1 : 0;
    // 0x801CF33C: bne         $at, $zero, L_801CF3FC
    if (ctx->r1 != 0) {
        // 0x801CF340: nop
    
            goto L_801CF3FC;
    }
    // 0x801CF340: nop

    // 0x801CF344: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x801CF348: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF34C: sb          $t4, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r12;
    // 0x801CF350: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CF354: lui         $t4, 0xA000
    ctx->r12 = S32(0XA000 << 16);
    // 0x801CF358: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801CF35C: subu        $v0, $t4, $t3
    ctx->r2 = SUB32(ctx->r12, ctx->r11);
    // 0x801CF360: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x801CF364: lw          $t5, 0xA8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XA8);
    // 0x801CF368: sb          $zero, 0x9E($s0)
    MEM_B(0X9E, ctx->r16) = 0;
    // 0x801CF36C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CF370: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801CF374: lw          $t8, 0xA4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA4);
    // 0x801CF378: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801CF37C: lb          $t6, 0x9F($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X9F);
    // 0x801CF380: addiu       $t2, $zero, 0x4E20
    ctx->r10 = ADD32(0, 0X4E20);
    // 0x801CF384: mflo        $t5
    ctx->r13 = lo;
    // 0x801CF388: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF38C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801CF390: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CF394: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CF398: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801CF39C: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    // 0x801CF3A0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CF3A4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CF3A8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801CF3AC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801CF3B0: nop

    // 0x801CF3B4: sw          $t7, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r15;
    // 0x801CF3B8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CF3BC: andi        $t7, $t6, 0xFFBE
    ctx->r15 = ctx->r14 & 0XFFBE;
    // 0x801CF3C0: sw          $t2, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r10;
    // 0x801CF3C4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CF3C8: sw          $t5, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r13;
    // 0x801CF3CC: sb          $t7, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r15;
    // 0x801CF3D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CF3D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801CF3D8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801CF3DC: nop

    // 0x801CF3E0: sw          $t1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r9;
    // 0x801CF3E4: lwc1        $f4, -0x1158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1158);
    // 0x801CF3E8: sh          $t8, 0xE0($v1)
    MEM_H(0XE0, ctx->r3) = ctx->r24;
    // 0x801CF3EC: sh          $a1, 0xDE($v1)
    MEM_H(0XDE, ctx->r3) = ctx->r5;
    // 0x801CF3F0: sh          $a1, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r5;
    // 0x801CF3F4: jal         0x80038B98
    // 0x801CF3F8: swc1        $f4, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f4.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801CF3F8: swc1        $f4, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f4.u32l;
    after_1:
L_801CF3FC:
    // 0x801CF3FC: jal         0x8001D394
    // 0x801CF400: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801CF400: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x801CF404: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801CF408: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801CF40C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CF414: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CF418: jal         0x8001DB04
    // 0x801CF41C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801CF41C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x801CF420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CF424: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CF428: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CF42C: jr          $ra
    // 0x801CF430: nop

    TRACE_RETURN()
    return;
    // 0x801CF430: nop

;}
RECOMP_FUNC void func_801D7FD0_646E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7FD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D7FD4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D7FD8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D7FDC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D7FE0: addiu       $t6, $t6, 0x1FC0
    ctx->r14 = ADD32(ctx->r14, 0X1FC0);
    // 0x801D7FE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D7FE8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D7FEC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D7FF0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D7FF4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801D7FF8: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D7FFC: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D8000: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D8004: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801D8008: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D800C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8010: addiu       $t0, $zero, -0xFA0
    ctx->r8 = ADD32(0, -0XFA0);
    // 0x801D8014: addiu       $t1, $zero, 0x190
    ctx->r9 = ADD32(0, 0X190);
    // 0x801D8018: addiu       $t2, $zero, -0x190
    ctx->r10 = ADD32(0, -0X190);
    // 0x801D801C: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801D8020: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x801D8024: sw          $zero, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = 0;
    // 0x801D8028: sw          $t2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r10;
    // 0x801D802C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D8030: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D8034: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D8038: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x801D803C: lui         $a3, 0xC20C
    ctx->r7 = S32(0XC20C << 16);
    // 0x801D8040: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D8044: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D8048: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D804C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D8050: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D8054: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D8058: jal         0x801E8378
    // 0x801D805C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D805C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D8060: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8064: jal         0x800352EC
    // 0x801D8068: addiu       $a0, $a0, -0x7F80
    ctx->r4 = ADD32(ctx->r4, -0X7F80);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D8068: addiu       $a0, $a0, -0x7F80
    ctx->r4 = ADD32(ctx->r4, -0X7F80);
    after_1:
    // 0x801D806C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D8070: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D8074: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D8078: jr          $ra
    // 0x801D807C: nop

    TRACE_RETURN()
    return;
    // 0x801D807C: nop

;}
RECOMP_FUNC void func_801E462C_65347C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E462C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E4630: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E4634: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x801E4638: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x801E463C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x801E4640: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x801E4644: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801E4648: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801E464C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801E4650: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801E4654: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4658: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801E465C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801E4660: lbu         $fp, 0x315($a0)
    ctx->r30 = MEM_BU(ctx->r4, 0X315);
    // 0x801E4664: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801E4668: andi        $s6, $a2, 0xFF
    ctx->r22 = ctx->r6 & 0XFF;
    // 0x801E466C: beql        $fp, $zero, L_801E4738
    if (ctx->r30 == 0) {
        // 0x801E4670: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E4738;
    }
    goto skip_0;
    // 0x801E4670: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x801E4674: beq         $s6, $zero, L_801E4734
    if (ctx->r22 == 0) {
        // 0x801E4678: addiu       $s7, $zero, -0x80
        ctx->r23 = ADD32(0, -0X80);
            goto L_801E4734;
    }
    // 0x801E4678: addiu       $s7, $zero, -0x80
    ctx->r23 = ADD32(0, -0X80);
    // 0x801E467C: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801E4680: addiu       $s4, $s4, -0x1D70
    ctx->r20 = ADD32(ctx->r20, -0X1D70);
    // 0x801E4684: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
L_801E4688:
    // 0x801E4688: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x801E468C: andi        $t6, $s6, 0xFF
    ctx->r14 = ctx->r22 & 0XFF;
    // 0x801E4690: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801E4694: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801E4698: lw          $s2, 0x0($t9)
    ctx->r18 = MEM_W(ctx->r25, 0X0);
    // 0x801E469C: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x801E46A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E46A4: lb          $v0, 0x74($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X74);
    // 0x801E46A8: andi        $s0, $fp, 0xFF
    ctx->r16 = ctx->r30 & 0XFF;
    // 0x801E46AC: andi        $t0, $v0, 0x20
    ctx->r8 = ctx->r2 & 0X20;
    // 0x801E46B0: beq         $t0, $zero, L_801E472C
    if (ctx->r8 == 0) {
        // 0x801E46B4: nop
    
            goto L_801E472C;
    }
    // 0x801E46B4: nop

    // 0x801E46B8: lbu         $s3, 0x75($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X75);
    // 0x801E46BC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_801E46C0:
    // 0x801E46C0: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x801E46C4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801E46C8: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x801E46CC: lw          $s1, 0x2D0($t3)
    ctx->r17 = MEM_W(ctx->r11, 0X2D0);
    // 0x801E46D0: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x801E46D4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x801E46D8: lb          $t4, 0x74($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X74);
    // 0x801E46DC: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x801E46E0: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x801E46E4: bne         $t5, $zero, L_801E4704
    if (ctx->r13 != 0) {
        // 0x801E46E8: nop
    
            goto L_801E4704;
    }
    // 0x801E46E8: nop

    // 0x801E46EC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801E46F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E46F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E46F8: jalr        $t9
    // 0x801E46FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E46FC: nop

    after_0:
    // 0x801E4700: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_801E4704:
    // 0x801E4704: bne         $v1, $zero, L_801E4714
    if (ctx->r3 != 0) {
        // 0x801E4708: nop
    
            goto L_801E4714;
    }
    // 0x801E4708: nop

    // 0x801E470C: bnel        $s0, $zero, L_801E46C0
    if (ctx->r16 != 0) {
        // 0x801E4710: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_801E46C0;
    }
    goto skip_1;
    // 0x801E4710: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_1:
L_801E4714:
    // 0x801E4714: beq         $v1, $zero, L_801E472C
    if (ctx->r3 == 0) {
        // 0x801E4718: nop
    
            goto L_801E472C;
    }
    // 0x801E4718: nop

    // 0x801E471C: lb          $t8, 0x74($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X74);
    // 0x801E4720: ori         $t0, $t8, 0x80
    ctx->r8 = ctx->r24 | 0X80;
    // 0x801E4724: sb          $t0, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r8;
    // 0x801E4728: sb          $s7, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r23;
L_801E472C:
    // 0x801E472C: bnel        $s6, $zero, L_801E4688
    if (ctx->r22 != 0) {
        // 0x801E4730: lw          $t7, 0x44($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X44);
            goto L_801E4688;
    }
    goto skip_2;
    // 0x801E4730: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    skip_2:
L_801E4734:
    // 0x801E4734: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E4738:
    // 0x801E4738: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E473C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4740: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801E4744: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801E4748: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801E474C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x801E4750: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x801E4754: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x801E4758: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x801E475C: jr          $ra
    // 0x801E4760: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E4760: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801DFE90_64ECE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DFE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DFE98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DFE9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DFEA0: sb          $zero, 0x68($a0)
    MEM_B(0X68, ctx->r4) = 0;
    // 0x801DFEA4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DFEA8: jal         0x800352EC
    // 0x801DFEAC: addiu       $a0, $a0, -0x140
    ctx->r4 = ADD32(ctx->r4, -0X140);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DFEAC: addiu       $a0, $a0, -0x140
    ctx->r4 = ADD32(ctx->r4, -0X140);
    after_0:
    // 0x801DFEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DFEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DFEB8: jr          $ra
    // 0x801DFEBC: nop

    TRACE_RETURN()
    return;
    // 0x801DFEBC: nop

;}
RECOMP_FUNC void func_801D4DD0_643C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4DD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D4DD4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D4DD8: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D4DDC: addiu       $t6, $t6, 0x890
    ctx->r14 = ADD32(ctx->r14, 0X890);
    // 0x801D4DE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D4DE4: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D4DE8: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D4DEC: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D4DF0: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801D4DF4: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D4DF8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D4DFC: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D4E00: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801D4E04: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D4E08: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D4E0C: addiu       $t0, $zero, 0x12C0
    ctx->r8 = ADD32(0, 0X12C0);
    // 0x801D4E10: addiu       $t1, $zero, 0x320
    ctx->r9 = ADD32(0, 0X320);
    // 0x801D4E14: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x801D4E18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D4E1C: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D4E20: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801D4E24: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x801D4E28: sh          $t2, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r10;
    // 0x801D4E2C: sb          $t3, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r11;
    // 0x801D4E30: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4E34: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x801D4E38: lwc1        $f4, -0xF00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XF00);
    // 0x801D4E3C: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D4E40: addiu       $t4, $zero, -0x258
    ctx->r12 = ADD32(0, -0X258);
    // 0x801D4E44: swc1        $f0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f0.u32l;
    // 0x801D4E48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4E4C: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
    // 0x801D4E50: sw          $t4, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r12;
    // 0x801D4E54: sw          $zero, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = 0;
    // 0x801D4E58: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D4E5C: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
    // 0x801D4E60: swc1        $f6, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f6.u32l;
    // 0x801D4E64: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D4E68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D4E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4E70: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801D4E74: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D4E78: lui         $a3, 0xC25C
    ctx->r7 = S32(0XC25C << 16);
    // 0x801D4E7C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D4E80: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D4E84: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D4E88: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D4E8C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D4E90: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801D4E94: jal         0x801E8378
    // 0x801D4E98: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D4E98: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801D4E9C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D4EA0: jal         0x800352EC
    // 0x801D4EA4: addiu       $a0, $a0, 0x4EB8
    ctx->r4 = ADD32(ctx->r4, 0X4EB8);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D4EA4: addiu       $a0, $a0, 0x4EB8
    ctx->r4 = ADD32(ctx->r4, 0X4EB8);
    after_1:
    // 0x801D4EA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D4EAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D4EB0: jr          $ra
    // 0x801D4EB4: nop

    TRACE_RETURN()
    return;
    // 0x801D4EB4: nop

;}
RECOMP_FUNC void func_801D5530_644380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5530: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D5534: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D5538: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D553C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D5540: addiu       $t6, $t6, 0xDC0
    ctx->r14 = ADD32(ctx->r14, 0XDC0);
    // 0x801D5544: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D5548: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D554C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D5550: addiu       $t9, $t9, -0x1BE8
    ctx->r25 = ADD32(ctx->r25, -0X1BE8);
    // 0x801D5554: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D5558: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x801D555C: lwc1        $f2, 0x60($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D5560: addiu       $t0, $zero, -0x5DC0
    ctx->r8 = ADD32(0, -0X5DC0);
    // 0x801D5564: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801D5568: sw          $zero, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = 0;
    // 0x801D556C: sh          $zero, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = 0;
    // 0x801D5570: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D5574: swc1        $f2, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f2.u32l;
    // 0x801D5578: ldc1        $f6, -0xED0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XED0);
    // 0x801D557C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801D5580: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5584: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D5588: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D558C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D5590: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D5594: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D5598: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x801D559C: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x801D55A0: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
    // 0x801D55A4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D55A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D55AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D55B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D55B4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D55B8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D55BC: jal         0x801E8378
    // 0x801D55C0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D55C0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801D55C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D55C8: jal         0x800352EC
    // 0x801D55CC: addiu       $a0, $a0, 0x55E0
    ctx->r4 = ADD32(ctx->r4, 0X55E0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801D55CC: addiu       $a0, $a0, 0x55E0
    ctx->r4 = ADD32(ctx->r4, 0X55E0);
    after_1:
    // 0x801D55D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D55D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D55D8: jr          $ra
    // 0x801D55DC: nop

    TRACE_RETURN()
    return;
    // 0x801D55DC: nop

;}
RECOMP_FUNC void func_801D51A8_643FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D51A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D51AC: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D51B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D51B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D51B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D51BC: lwc1        $f16, 0x5C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D51C0: lh          $t6, 0xB8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XB8);
    // 0x801D51C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D51C8: lw          $v1, 0xA4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA4);
    // 0x801D51CC: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x801D51D0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801D51D4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D51D8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D51DC: beq         $t7, $zero, L_801D51EC
    if (ctx->r15 == 0) {
        // 0x801D51E0: swc1        $f18, 0x5C($a0)
        MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
            goto L_801D51EC;
    }
    // 0x801D51E0: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x801D51E4: b           L_801D51F0
    // 0x801D51E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_801D51F0;
    // 0x801D51E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_801D51EC:
    // 0x801D51EC: sh          $t8, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r24;
L_801D51F0:
    // 0x801D51F0: bgez        $v0, L_801D5200
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D51F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D5200;
    }
    // 0x801D51F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D51F8: b           L_801D5200
    // 0x801D51FC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D5200;
    // 0x801D51FC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D5200:
    // 0x801D5200: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D5204: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D5208: ldc1        $f8, -0xEE8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XEE8);
    // 0x801D520C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D5210: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D5214: nop

    // 0x801D5218: bc1f        L_801D5224
    if (!c1cs) {
        // 0x801D521C: nop
    
            goto L_801D5224;
    }
    // 0x801D521C: nop

    // 0x801D5220: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
L_801D5224:
    // 0x801D5224: jr          $ra
    // 0x801D5228: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D5228: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D841C_64726C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D841C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D8420: jr          $ra
    // 0x801D8424: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D8424: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D7660_6464B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7660: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D7664: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D7668: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D766C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D7670: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D7674: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D7678: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801D767C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D7680: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D7684: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D7688: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D768C: bne         $v0, $zero, L_801D7698
    if (ctx->r2 != 0) {
        // 0x801D7690: swc1        $f18, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
            goto L_801D7698;
    }
    // 0x801D7690: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D7694: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
L_801D7698:
    // 0x801D7698: jr          $ra
    // 0x801D769C: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D769C: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801DDE10_64CC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDE10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DDE14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DDE18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DDE1C: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DDE20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDE24: bgezl       $t6, L_801DDE4C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DDE28: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801DDE4C;
    }
    goto skip_0;
    // 0x801DDE28: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801DDE2C: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DDE30: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DDE34: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DDE38: jal         0x800352EC
    // 0x801DDE3C: addiu       $a0, $a0, -0x2018
    ctx->r4 = ADD32(ctx->r4, -0X2018);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DDE3C: addiu       $a0, $a0, -0x2018
    ctx->r4 = ADD32(ctx->r4, -0X2018);
    after_0:
    // 0x801DDE40: b           L_801DDEA0
    // 0x801DDE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DDEA0;
    // 0x801DDE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDE48: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801DDE4C:
    // 0x801DDE4C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DDE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDE54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DDE58: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DDE5C: lw          $t9, -0x27A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X27A0);
    // 0x801DDE60: jalr        $t9
    // 0x801DDE64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801DDE64: nop

    after_1:
    // 0x801DDE68: jal         0x801CD504
    // 0x801DDE6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801DDE6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DDE70: beq         $v0, $zero, L_801DDE88
    if (ctx->r2 == 0) {
        // 0x801DDE74: nop
    
            goto L_801DDE88;
    }
    // 0x801DDE74: nop

    // 0x801DDE78: jal         0x801DBEB0
    // 0x801DDE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_3;
    // 0x801DDE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DDE80: b           L_801DDEA0
    // 0x801DDE84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DDEA0;
    // 0x801DDE84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DDE88:
    // 0x801DDE88: jal         0x801CD634
    // 0x801DDE8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_4;
    // 0x801DDE8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DDE90: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801DDE94: jal         0x801CD780
    // 0x801DDE98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_5;
    // 0x801DDE98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x801DDE9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DDEA0:
    // 0x801DDEA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DDEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DDEA8: jr          $ra
    // 0x801DDEAC: nop

    TRACE_RETURN()
    return;
    // 0x801DDEAC: nop

;}
RECOMP_FUNC void func_801DECCC_64DB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DECCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801DECD0: lbu         $a3, 0xA0($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XA0);
    // 0x801DECD4: lbu         $a2, 0xA1($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XA1);
    // 0x801DECD8: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x801DECDC: subu        $t6, $t2, $a3
    ctx->r14 = SUB32(ctx->r10, ctx->r7);
    // 0x801DECE0: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801DECE4: bne         $at, $zero, L_801DECF4
    if (ctx->r1 != 0) {
        // 0x801DECE8: addu        $v0, $a3, $a2
        ctx->r2 = ADD32(ctx->r7, ctx->r6);
            goto L_801DECF4;
    }
    // 0x801DECE8: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x801DECEC: b           L_801DECFC
    // 0x801DECF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_801DECFC;
    // 0x801DECF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_801DECF4:
    // 0x801DECF4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801DECF8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_801DECFC:
    // 0x801DECFC: lbu         $v1, 0xA2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA2);
    // 0x801DED00: lbu         $a1, 0xA3($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA3);
    // 0x801DED04: sb          $v0, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = ctx->r2;
    // 0x801DED08: subu        $t8, $t2, $v1
    ctx->r24 = SUB32(ctx->r10, ctx->r3);
    // 0x801DED0C: slt         $t1, $a1, $t8
    ctx->r9 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801DED10: xori        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 ^ 0X1;
    // 0x801DED14: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x801DED18: bne         $t9, $zero, L_801DEDA8
    if (ctx->r25 != 0) {
        // 0x801DED1C: andi        $a2, $t1, 0xFF
        ctx->r6 = ctx->r9 & 0XFF;
            goto L_801DEDA8;
    }
    // 0x801DED1C: andi        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 & 0XFF;
    // 0x801DED20: lui         $t5, 0x801F
    ctx->r13 = S32(0X801F << 16);
    // 0x801DED24: addu        $t3, $v1, $a1
    ctx->r11 = ADD32(ctx->r3, ctx->r5);
    // 0x801DED28: addiu       $t5, $t5, -0x1828
    ctx->r13 = ADD32(ctx->r13, -0X1828);
    // 0x801DED2C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801DED30: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x801DED34: sb          $t3, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r11;
    // 0x801DED38: sw          $t5, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r13;
    // 0x801DED3C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801DED40: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801DED44: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x801DED48: sw          $t4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r12;
    // 0x801DED4C: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x801DED50: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x801DED54: andi        $t3, $t3, 0xFF
    ctx->r11 = ctx->r11 & 0XFF;
    // 0x801DED58: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x801DED5C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x801DED60: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x801DED64: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x801DED68: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801DED6C: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x801DED70: sw          $t8, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r24;
    // 0x801DED74: sw          $t9, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r25;
    // 0x801DED78: sw          $t4, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r12;
    // 0x801DED7C: sw          $t6, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r14;
    // 0x801DED80: sw          $t5, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r13;
    // 0x801DED84: sw          $t7, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->r15;
    // 0x801DED88: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x801DED8C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x801DED90: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x801DED94: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x801DED98: lwc1        $f6, 0xA4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801DED9C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x801DEDA0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DEDA4: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
L_801DEDA8:
    // 0x801DEDA8: jr          $ra
    // 0x801DEDAC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    TRACE_RETURN()
    return;
    // 0x801DEDAC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_801D7E80_646CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7E80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D7E84: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801D7E88: addiu       $t6, $zero, 0xC9
    ctx->r14 = ADD32(0, 0XC9);
    // 0x801D7E8C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x801D7E90: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x801D7E94: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801D7E98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D7E9C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D7EA0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D7EA4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D7EA8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801D7EAC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D7EB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D7EB4: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D7EB8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D7EBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D7EC0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D7EC4: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D7EC8: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x801D7ECC: addiu       $t1, $zero, 0x300
    ctx->r9 = ADD32(0, 0X300);
    // 0x801D7ED0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801D7ED4: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D7ED8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x801D7EDC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801D7EE0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D7EE4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D7EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7EEC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D7EF0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D7EF4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x801D7EF8: jal         0x801CDA88
    // 0x801D7EFC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_0;
    // 0x801D7EFC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801D7F00: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D7F04: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D7F08: lwc1        $f16, 0x5C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D7F0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7F14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D7F18: lwc1        $f18, 0x60($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D7F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7F20: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x801D7F24: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801D7F28: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D7F2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D7F30: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D7F34: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D7F38: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D7F3C: jal         0x801DF9EC
    // 0x801D7F40: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_1;
    // 0x801D7F40: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D7F44: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D7F48: lhu         $t3, 0xE2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D7F4C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x801D7F50: bnel        $t4, $zero, L_801D7FA8
    if (ctx->r12 != 0) {
        // 0x801D7F54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D7FA8;
    }
    goto skip_0;
    // 0x801D7F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801D7F58: lhu         $t5, 0xE4($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D7F5C: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D7F60: bne         $t5, $at, L_801D7F80
    if (ctx->r13 != ctx->r1) {
        // 0x801D7F64: nop
    
            goto L_801D7F80;
    }
    // 0x801D7F64: nop

    // 0x801D7F68: jal         0x80038B98
    // 0x801D7F6C: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801D7F6C: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_2:
    // 0x801D7F70: lw          $t7, 0xEC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XEC);
    // 0x801D7F74: addiu       $t6, $zero, 0x299
    ctx->r14 = ADD32(0, 0X299);
    // 0x801D7F78: b           L_801D7F94
    // 0x801D7F7C: sh          $t6, 0xE4($t7)
    MEM_H(0XE4, ctx->r15) = ctx->r14;
        goto L_801D7F94;
    // 0x801D7F7C: sh          $t6, 0xE4($t7)
    MEM_H(0XE4, ctx->r15) = ctx->r14;
L_801D7F80:
    // 0x801D7F80: jal         0x80038B98
    // 0x801D7F84: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D7F84: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_3:
    // 0x801D7F88: lw          $t9, 0xEC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XEC);
    // 0x801D7F8C: addiu       $t8, $zero, 0x298
    ctx->r24 = ADD32(0, 0X298);
    // 0x801D7F90: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D7F94:
    // 0x801D7F94: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D7F98: lhu         $t0, 0xE2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D7F9C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x801D7FA0: sh          $t1, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r9;
    // 0x801D7FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D7FA8:
    // 0x801D7FA8: jal         0x801E8824
    // 0x801D7FAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_4;
    // 0x801D7FAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x801D7FB0: jal         0x801D2B90
    // 0x801D7FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_5;
    // 0x801D7FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D7FB8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7FBC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801D7FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D7FC4: jr          $ra
    // 0x801D7FC8: nop

    TRACE_RETURN()
    return;
    // 0x801D7FC8: nop

;}
RECOMP_FUNC void func_801D9030_647E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D9034: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D9038: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D903C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D9040: addiu       $t6, $t6, 0x930
    ctx->r14 = ADD32(ctx->r14, 0X930);
    // 0x801D9044: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D9048: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D904C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D9050: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D9054: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D9058: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D905C: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D9060: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9064: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801D9068: beq         $t9, $zero, L_801D90C0
    if (ctx->r25 == 0) {
        // 0x801D906C: lui         $a2, 0x41C8
        ctx->r6 = S32(0X41C8 << 16);
            goto L_801D90C0;
    }
    // 0x801D906C: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D9070: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801D9074: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9078: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D907C: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801D9080: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D9084: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801D9088: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D908C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801D9090: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x801D9094: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D9098: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D909C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D90A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D90A4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D90A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D90AC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D90B0: jal         0x801E8378
    // 0x801D90B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D90B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D90B8: b           L_801D9100
    // 0x801D90BC: nop

        goto L_801D9100;
    // 0x801D90BC: nop

L_801D90C0:
    // 0x801D90C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D90C4: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801D90C8: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801D90CC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801D90D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801D90D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D90D8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801D90DC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D90E0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D90E4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D90E8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D90EC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D90F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D90F4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D90F8: jal         0x801E8378
    // 0x801D90FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D90FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801D9100:
    // 0x801D9100: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9104: jal         0x800352EC
    // 0x801D9108: addiu       $a0, $a0, -0x6EE0
    ctx->r4 = ADD32(ctx->r4, -0X6EE0);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801D9108: addiu       $a0, $a0, -0x6EE0
    ctx->r4 = ADD32(ctx->r4, -0X6EE0);
    after_2:
    // 0x801D910C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D9110: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D9114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D9118: jr          $ra
    // 0x801D911C: nop

    TRACE_RETURN()
    return;
    // 0x801D911C: nop

;}
RECOMP_FUNC void func_801E2410_651260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2410: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E2414: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801E2418: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x801E241C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801E2420: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x801E2424: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E2428: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801E242C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x801E2430: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x801E2434: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801E2438: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801E243C: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E2440: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x801E2444: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x801E2448: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x801E244C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x801E2450: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x801E2454: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x801E2458: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x801E245C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E2460: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E2464: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E2468: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x801E246C: lui         $s4, 0x801F
    ctx->r20 = S32(0X801F << 16);
    // 0x801E2470: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801E2474: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x801E2478: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801E247C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E2480: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x801E2484: addiu       $s4, $s4, -0x1BE8
    ctx->r20 = ADD32(ctx->r20, -0X1BE8);
    // 0x801E2488: addiu       $s2, $s2, 0x1CF0
    ctx->r18 = ADD32(ctx->r18, 0X1CF0);
    // 0x801E248C: lwc1        $f20, -0xBD0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0XBD0);
    // 0x801E2490: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x801E2494: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801E2498: addiu       $s5, $zero, 0x4BF
    ctx->r21 = ADD32(0, 0X4BF);
L_801E249C:
    // 0x801E249C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E24A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E24A4: jal         0x80035EEC
    // 0x801E24A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E24A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E24AC: beq         $v0, $zero, L_801E2504
    if (ctx->r2 == 0) {
        // 0x801E24B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2504;
    }
    // 0x801E24B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E24B4: addu        $t6, $s2, $s3
    ctx->r14 = ADD32(ctx->r18, ctx->r19);
    // 0x801E24B8: sb          $s1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r17;
    // 0x801E24BC: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x801E24C0: sw          $s4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r20;
    // 0x801E24C4: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801E24C8: swc1        $f26, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f26.u32l;
    // 0x801E24CC: swc1        $f28, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f28.u32l;
    // 0x801E24D0: swc1        $f22, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f22.u32l;
    // 0x801E24D4: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x801E24D8: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801E24DC: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801E24E0: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x801E24E4: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x801E24E8: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x801E24EC: sh          $s5, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r21;
    // 0x801E24F0: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x801E24F4: sh          $zero, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = 0;
    // 0x801E24F8: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x801E24FC: jal         0x80014218
    // 0x801E2500: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x801E2500: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    after_1:
L_801E2504:
    // 0x801E2504: cvt.d.s     $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.d = CVT_D_S(ctx->f22.fl);
    // 0x801E2508: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801E250C: add.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = ctx->f4.d + ctx->f24.d;
    // 0x801E2510: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801E2514: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801E2518: bne         $t7, $zero, L_801E249C
    if (ctx->r15 != 0) {
        // 0x801E251C: cvt.s.d     $f22, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
            goto L_801E249C;
    }
    // 0x801E251C: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    // 0x801E2520: lui         $t8, 0x2D
    ctx->r24 = S32(0X2D << 16);
    // 0x801E2524: ori         $t8, $t8, 0xC6C0
    ctx->r24 = ctx->r24 | 0XC6C0;
    // 0x801E2528: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801E252C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E2530: sw          $t8, 0x5C($s6)
    MEM_W(0X5C, ctx->r22) = ctx->r24;
    // 0x801E2534: sb          $t9, 0x60($s6)
    MEM_B(0X60, ctx->r22) = ctx->r25;
    // 0x801E2538: jal         0x8003521C
    // 0x801E253C: addiu       $a0, $a0, 0x257C
    ctx->r4 = ADD32(ctx->r4, 0X257C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E253C: addiu       $a0, $a0, 0x257C
    ctx->r4 = ADD32(ctx->r4, 0X257C);
    after_2:
    // 0x801E2540: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801E2544: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E2548: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801E254C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801E2550: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x801E2554: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x801E2558: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E255C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x801E2560: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801E2564: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x801E2568: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x801E256C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x801E2570: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x801E2574: jr          $ra
    // 0x801E2578: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801E2578: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801DFC60_64EAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFC60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DFC64: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801DFC68: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DFC6C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DFC70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DFC74: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801DFC78: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801DFC7C: bne         $a0, $zero, L_801DFC8C
    if (ctx->r4 != 0) {
        // 0x801DFC80: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_801DFC8C;
    }
    // 0x801DFC80: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801DFC84: b           L_801DFE14
    // 0x801DFC88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DFE14;
    // 0x801DFC88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DFC8C:
    // 0x801DFC8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFC90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DFC94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DFC98: jal         0x80035EEC
    // 0x801DFC9C: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801DFC9C: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801DFCA0: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DFCA4: beq         $v0, $zero, L_801DFE14
    if (ctx->r2 == 0) {
        // 0x801DFCA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801DFE14;
    }
    // 0x801DFCA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801DFCAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFCB0: jal         0x801CDF74
    // 0x801DFCB4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801DFCB4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801DFCB8: bne         $v0, $zero, L_801DFCD8
    if (ctx->r2 != 0) {
        // 0x801DFCBC: lwc1        $f12, 0x34($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
            goto L_801DFCD8;
    }
    // 0x801DFCBC: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DFCC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFCC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DFCC8: jal         0x80036158
    // 0x801DFCCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801DFCCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801DFCD0: b           L_801DFE14
    // 0x801DFCD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DFE14;
    // 0x801DFCD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DFCD8:
    // 0x801DFCD8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801DFCDC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x801DFCE0: or          $t8, $v0, $a2
    ctx->r24 = ctx->r2 | ctx->r6;
    // 0x801DFCE4: swc1        $f4, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f4.u32l;
    // 0x801DFCE8: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801DFCEC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DFCF0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801DFCF4: swc1        $f6, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f6.u32l;
    // 0x801DFCF8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801DFCFC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DFD00: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DFD04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DFD08: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801DFD0C: swc1        $f8, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->f8.u32l;
    // 0x801DFD10: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801DFD14: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DFD18: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DFD1C: addiu       $t6, $t6, 0x40
    ctx->r14 = ADD32(ctx->r14, 0X40);
    // 0x801DFD20: swc1        $f10, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->f10.u32l;
    // 0x801DFD24: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801DFD28: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x801DFD2C: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801DFD30: swc1        $f16, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->f16.u32l;
    // 0x801DFD34: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801DFD38: addiu       $t1, $t1, -0x17B0
    ctx->r9 = ADD32(ctx->r9, -0X17B0);
    // 0x801DFD3C: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x801DFD40: swc1        $f18, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f18.u32l;
    // 0x801DFD44: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
    // 0x801DFD48: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x801DFD4C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x801DFD50: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801DFD54: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x801DFD58: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x801DFD5C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801DFD60: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x801DFD64: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x801DFD68: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x801DFD6C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x801DFD70: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801DFD74: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801DFD78: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DFD7C: ldc1        $f16, -0xC78($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC78);
    // 0x801DFD80: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x801DFD84: addiu       $t6, $zero, 0x4A9
    ctx->r14 = ADD32(0, 0X4A9);
    // 0x801DFD88: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x801DFD8C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801DFD90: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x801DFD94: sh          $t6, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r14;
    // 0x801DFD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFD9C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801DFDA0: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801DFDA4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801DFDA8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801DFDAC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801DFDB0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801DFDB4: jal         0x80014218
    // 0x801DFDB8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801DFDB8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x801DFDBC: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x801DFDC0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801DFDC4: addiu       $t8, $zero, 0x4A9
    ctx->r24 = ADD32(0, 0X4A9);
    // 0x801DFDC8: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x801DFDCC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801DFDD0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801DFDD4: addiu       $a1, $a1, -0x2160
    ctx->r5 = ADD32(ctx->r5, -0X2160);
    // 0x801DFDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFDDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DFDE0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801DFDE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801DFDE8: jal         0x801CD7C0
    // 0x801DFDEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801CD7C0_63C610(rdram, ctx);
        goto after_4;
    // 0x801DFDEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x801DFDF0: lbu         $v0, 0x6A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6A);
    // 0x801DFDF4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DFDF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFDFC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801DFE00: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x801DFE04: lw          $t9, -0x2120($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2120);
    // 0x801DFE08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DFE0C: jalr        $t9
    // 0x801DFE10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801DFE10: nop

    after_5:
L_801DFE14:
    // 0x801DFE14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801DFE18: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801DFE1C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801DFE20: jr          $ra
    // 0x801DFE24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801DFE24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CB5A0_63A3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB5A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CB5A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB5A8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB5AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CB5B0: lui         $s0, 0x4
    ctx->r16 = S32(0X4 << 16);
    // 0x801CB5B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB5B8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CB5BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CB5C0: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x801CB5C4: lbu         $s0, -0x520B($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X520B);
    // 0x801CB5C8: jal         0x8003FF50
    // 0x801CB5CC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB5CC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x801CB5D0: jal         0x80013940
    // 0x801CB5D4: nop

    func_80013940_14540(rdram, ctx);
        goto after_1;
    // 0x801CB5D4: nop

    after_1:
    // 0x801CB5D8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x801CB5DC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801CB5E0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x801CB5E4: jal         0x80013AC4
    // 0x801CB5E8: lw          $a0, -0x770C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X770C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_2;
    // 0x801CB5E8: lw          $a0, -0x770C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X770C);
    after_2:
    // 0x801CB5EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CB5F0: bne         $s0, $at, L_801CB610
    if (ctx->r16 != ctx->r1) {
        // 0x801CB5F4: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_801CB610;
    }
    // 0x801CB5F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CB5F8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB5FC: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CB600: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB604: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801CB608: jal         0x8001198C
    // 0x801CB60C: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    func_8001198C_1258C(rdram, ctx);
        goto after_3;
    // 0x801CB60C: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    after_3:
L_801CB610:
    // 0x801CB610: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB614: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801CB618: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801CB61C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801CB620: addiu       $a1, $zero, 0x63F0
    ctx->r5 = ADD32(0, 0X63F0);
    // 0x801CB624: jal         0x800148F0
    // 0x801CB628: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_4;
    // 0x801CB628: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_4:
    // 0x801CB62C: bne         $v0, $zero, L_801CB644
    if (ctx->r2 != 0) {
        // 0x801CB630: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801CB644;
    }
    // 0x801CB630: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CB634: jal         0x80034ED4
    // 0x801CB638: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801CB638: nop

    after_5:
    // 0x801CB63C: b           L_801CB82C
    // 0x801CB640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CB82C;
    // 0x801CB640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB644:
    // 0x801CB644: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x801CB648: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x801CB64C: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x801CB650: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB654: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x801CB658: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801CB65C: sb          $zero, -0x51D8($at)
    MEM_B(-0X51D8, ctx->r1) = 0;
    // 0x801CB660: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x801CB664: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801CB668: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CB66C: addu        $v0, $t1, $a1
    ctx->r2 = ADD32(ctx->r9, ctx->r5);
    // 0x801CB670: lbu         $t2, 0x5619($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5619);
    // 0x801CB674: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x801CB678: sb          $t3, 0x5619($v0)
    MEM_B(0X5619, ctx->r2) = ctx->r11;
    // 0x801CB67C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x801CB680: addu        $v0, $t4, $a1
    ctx->r2 = ADD32(ctx->r12, ctx->r5);
    // 0x801CB684: lbu         $t5, 0x598D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X598D);
    // 0x801CB688: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x801CB68C: sb          $t6, 0x598D($v0)
    MEM_B(0X598D, ctx->r2) = ctx->r14;
    // 0x801CB690: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x801CB694: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x801CB698: lhu         $v1, -0x520C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520C);
    // 0x801CB69C: bne         $v1, $at, L_801CB6C4
    if (ctx->r3 != ctx->r1) {
        // 0x801CB6A0: addu        $v0, $a0, $a1
        ctx->r2 = ADD32(ctx->r4, ctx->r5);
            goto L_801CB6C4;
    }
    // 0x801CB6A0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x801CB6A4: lbu         $t7, 0x52A5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X52A5);
    // 0x801CB6A8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB6AC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801CB6B0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x801CB6B4: sb          $t8, 0x52A5($v0)
    MEM_B(0X52A5, ctx->r2) = ctx->r24;
    // 0x801CB6B8: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801CB6BC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x801CB6C0: lhu         $v1, -0x520C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520C);
L_801CB6C4:
    // 0x801CB6C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CB6C8: bne         $v1, $at, L_801CB6F0
    if (ctx->r3 != ctx->r1) {
        // 0x801CB6CC: addiu       $t0, $zero, 0x270F
        ctx->r8 = ADD32(0, 0X270F);
            goto L_801CB6F0;
    }
    // 0x801CB6CC: addiu       $t0, $zero, 0x270F
    ctx->r8 = ADD32(0, 0X270F);
    // 0x801CB6D0: sh          $t0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r8;
    // 0x801CB6D4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801CB6D8: jal         0x80004910
    // 0x801CB6DC: sw          $zero, 0x7C60($at)
    MEM_W(0X7C60, ctx->r1) = 0;
    func_80004910_5510(rdram, ctx);
        goto after_6;
    // 0x801CB6DC: sw          $zero, 0x7C60($at)
    MEM_W(0X7C60, ctx->r1) = 0;
    after_6:
    // 0x801CB6E0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CB6E4: addiu       $a1, $a1, -0x1570
    ctx->r5 = ADD32(ctx->r5, -0X1570);
    // 0x801CB6E8: jal         0x80004964
    // 0x801CB6EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80004964_5564(rdram, ctx);
        goto after_7;
    // 0x801CB6EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
L_801CB6F0:
    // 0x801CB6F0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x801CB6F4: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x801CB6F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CB6FC: sw          $s0, 0xEC($t1)
    MEM_W(0XEC, ctx->r9) = ctx->r16;
    // 0x801CB700: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x801CB704: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
    // 0x801CB708: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x801CB70C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB710: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x801CB714: ori         $t4, $t3, 0x100
    ctx->r12 = ctx->r11 | 0X100;
    // 0x801CB718: sh          $zero, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = 0;
    // 0x801CB71C: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x801CB720: sh          $zero, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = 0;
    // 0x801CB724: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x801CB728: sb          $zero, 0x312($s0)
    MEM_B(0X312, ctx->r16) = 0;
    // 0x801CB72C: sb          $zero, 0x313($s0)
    MEM_B(0X313, ctx->r16) = 0;
    // 0x801CB730: sb          $zero, 0x314($s0)
    MEM_B(0X314, ctx->r16) = 0;
    // 0x801CB734: sb          $zero, 0x315($s0)
    MEM_B(0X315, ctx->r16) = 0;
    // 0x801CB738: sb          $zero, 0x316($s0)
    MEM_B(0X316, ctx->r16) = 0;
    // 0x801CB73C: sh          $zero, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = 0;
    // 0x801CB740: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x801CB744: sh          $zero, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = 0;
    // 0x801CB748: sw          $zero, 0x3E0($s0)
    MEM_W(0X3E0, ctx->r16) = 0;
    // 0x801CB74C: sw          $zero, 0x3E4($s0)
    MEM_W(0X3E4, ctx->r16) = 0;
    // 0x801CB750: sw          $zero, 0x3E8($s0)
    MEM_W(0X3E8, ctx->r16) = 0;
    // 0x801CB754: sw          $zero, 0x3EC($s0)
    MEM_W(0X3EC, ctx->r16) = 0;
    // 0x801CB758: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    // 0x801CB75C: addiu       $a0, $a0, -0x1F30
    ctx->r4 = ADD32(ctx->r4, -0X1F30);
    // 0x801CB760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CB764: jal         0x80034B24
    // 0x801CB768: swc1        $f4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f4.u32l;
    func_80034B24_35724(rdram, ctx);
        goto after_8;
    // 0x801CB768: swc1        $f4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f4.u32l;
    after_8:
    // 0x801CB76C: sw          $s0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r16;
    // 0x801CB770: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x801CB774: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x801CB778: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x801CB77C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CB780: bne         $t5, $at, L_801CB7A0
    if (ctx->r13 != ctx->r1) {
        // 0x801CB784: lui         $t6, 0x195
        ctx->r14 = S32(0X195 << 16);
            goto L_801CB7A0;
    }
    // 0x801CB784: lui         $t6, 0x195
    ctx->r14 = S32(0X195 << 16);
    // 0x801CB788: ori         $t6, $t6, 0xE240
    ctx->r14 = ctx->r14 | 0XE240;
    // 0x801CB78C: sw          $t6, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r14;
    // 0x801CB790: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CB794: lwc1        $f6, -0x1260($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1260);
    // 0x801CB798: b           L_801CB7AC
    // 0x801CB79C: swc1        $f6, 0x320($s0)
    MEM_W(0X320, ctx->r16) = ctx->f6.u32l;
        goto L_801CB7AC;
    // 0x801CB79C: swc1        $f6, 0x320($s0)
    MEM_W(0X320, ctx->r16) = ctx->f6.u32l;
L_801CB7A0:
    // 0x801CB7A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CB7A4: sw          $zero, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = 0;
    // 0x801CB7A8: swc1        $f8, 0x320($s0)
    MEM_W(0X320, ctx->r16) = ctx->f8.u32l;
L_801CB7AC:
    // 0x801CB7AC: jal         0x801CBA40
    // 0x801CB7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBA40_63A890(rdram, ctx);
        goto after_9;
    // 0x801CB7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801CB7B4: jal         0x801CBF58
    // 0x801CB7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBF58_63ADA8(rdram, ctx);
        goto after_10;
    // 0x801CB7B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801CB7BC: jal         0x801CC814
    // 0x801CB7C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC814_63B664(rdram, ctx);
        goto after_11;
    // 0x801CB7C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801CB7C4: jal         0x801CC848
    // 0x801CB7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC848_63B698(rdram, ctx);
        goto after_12;
    // 0x801CB7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801CB7CC: jal         0x801CC9F0
    // 0x801CB7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC9F0_63B840(rdram, ctx);
        goto after_13;
    // 0x801CB7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x801CB7D4: jal         0x801CCAC8
    // 0x801CB7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCAC8_63B918(rdram, ctx);
        goto after_14;
    // 0x801CB7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801CB7DC: jal         0x801CCA94
    // 0x801CB7E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCA94_63B8E4(rdram, ctx);
        goto after_15;
    // 0x801CB7E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x801CB7E4: jal         0x801CCA28
    // 0x801CB7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCA28_63B878(rdram, ctx);
        goto after_16;
    // 0x801CB7E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x801CB7EC: jal         0x801CCA5C
    // 0x801CB7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCA5C_63B8AC(rdram, ctx);
        goto after_17;
    // 0x801CB7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801CB7F4: jal         0x801CCAFC
    // 0x801CB7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCAFC_63B94C(rdram, ctx);
        goto after_18;
    // 0x801CB7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x801CB7FC: jal         0x801CCB34
    // 0x801CB800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCB34_63B984(rdram, ctx);
        goto after_19;
    // 0x801CB800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x801CB804: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801CB808: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CB80C: beq         $t7, $at, L_801CB81C
    if (ctx->r15 == ctx->r1) {
        // 0x801CB810: nop
    
            goto L_801CB81C;
    }
    // 0x801CB810: nop

    // 0x801CB814: jal         0x801CCB68
    // 0x801CB818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CCB68_63B9B8(rdram, ctx);
        goto after_20;
    // 0x801CB818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_801CB81C:
    // 0x801CB81C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB820: jal         0x8003521C
    // 0x801CB824: addiu       $a0, $a0, -0x47C4
    ctx->r4 = ADD32(ctx->r4, -0X47C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_21;
    // 0x801CB824: addiu       $a0, $a0, -0x47C4
    ctx->r4 = ADD32(ctx->r4, -0X47C4);
    after_21:
    // 0x801CB828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB82C:
    // 0x801CB82C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CB830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CB834: jr          $ra
    // 0x801CB838: nop

    TRACE_RETURN()
    return;
    // 0x801CB838: nop

;}
RECOMP_FUNC void func_801E3410_652260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3410: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E3414: jr          $ra
    // 0x801E3418: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E3418: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
