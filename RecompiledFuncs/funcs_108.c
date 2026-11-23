#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08004654_6C3DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800465C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004660: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004664: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004668: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800466C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004670: bne         $v0, $zero, L_08004684
    if (ctx->r2 != 0) {
        // 0x08004674: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004684;
    }
    // 0x08004674: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004678: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4594) << 16);
    // 0x0800467C: jalr        $t9
    // 0x08004680: addiu       $a0, $a0, 0x4594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4594));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004680: addiu       $a0, $a0, 0x4594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4594));
    after_0:
L_08004684:
    // 0x08004684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800468C: jr          $ra
    // 0x08004690: nop

    TRACE_RETURN()
    return;
    // 0x08004690: nop

;}
RECOMP_FUNC void func_08002480_6C1BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002480: jr          $ra
    // 0x08002484: nop

    TRACE_RETURN()
    return;
    // 0x08002484: nop

;}
RECOMP_FUNC void func_08006AA8_6C61F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006AB0: lui         $at, 0x43C6
    ctx->r1 = S32(0X43C6 << 16);
    // 0x08006AB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006AB8: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08006ABC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08006AC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006AC4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x08006AC8: nop

    // 0x08006ACC: bc1fl       L_08006AF4
    if (!c1cs) {
        // 0x08006AD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08006AF4;
    }
    goto skip_0;
    // 0x08006AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08006AD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08006AD8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08006ADC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006AE0: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x08006AE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6B00) << 16);
    // 0x08006AE8: jalr        $t9
    // 0x08006AEC: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6B00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006AEC: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6B00));
    after_0:
    // 0x08006AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08006AF4:
    // 0x08006AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006AF8: jr          $ra
    // 0x08006AFC: nop

    TRACE_RETURN()
    return;
    // 0x08006AFC: nop

;}
RECOMP_FUNC void func_08006C18_6C6368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006C18: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08006C1C: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x08006C20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08006C24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006C28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006C2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006C30: bne         $t6, $zero, L_08006C48
    if (ctx->r14 != 0) {
        // 0x08006C34: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_08006C48;
    }
    // 0x08006C34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08006C38: lui         $t7, 0x2A0
    ctx->r15 = S32(0X2A0 << 16);
    // 0x08006C3C: ori         $t7, $t7, 0x7E1
    ctx->r15 = ctx->r15 | 0X7E1;
    // 0x08006C40: b           L_08006F34
    // 0x08006C44: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
        goto L_08006F34;
    // 0x08006C44: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_08006C48:
    // 0x08006C48: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x08006C4C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x08006C50: ori         $t0, $t0, 0x20
    ctx->r8 = ctx->r8 | 0X20;
    // 0x08006C54: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x08006C58: beq         $t9, $zero, L_08006C84
    if (ctx->r25 == 0) {
        // 0x08006C5C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08006C84;
    }
    // 0x08006C5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08006C60: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08006C64: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08006C68: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x08006C6C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08006C70: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08006C74: sh          $t1, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r9;
    // 0x08006C78: swc1        $f4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f4.u32l;
    // 0x08006C7C: b           L_08006E74
    // 0x08006C80: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
        goto L_08006E74;
    // 0x08006C80: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
L_08006C84:
    // 0x08006C84: lhu         $v0, 0xDC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XDC);
    // 0x08006C88: lui         $t5, 0xE80
    ctx->r13 = S32(0XE80 << 16);
    // 0x08006C8C: ori         $t5, $t5, 0x320
    ctx->r13 = ctx->r13 | 0X320;
    // 0x08006C90: beq         $v0, $zero, L_08006CA0
    if (ctx->r2 == 0) {
        // 0x08006C94: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_08006CA0;
    }
    // 0x08006C94: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08006C98: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    // 0x08006C9C: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
L_08006CA0:
    // 0x08006CA0: bne         $v0, $at, L_08006CD8
    if (ctx->r2 != ctx->r1) {
        // 0x08006CA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006CD8;
    }
    // 0x08006CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006CA8: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x08006CAC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08006CB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006CB4: andi        $t3, $v0, 0x3000
    ctx->r11 = ctx->r2 & 0X3000;
    // 0x08006CB8: beq         $t3, $zero, L_08006CD8
    if (ctx->r11 == 0) {
        // 0x08006CBC: ori         $t4, $v0, 0x2
        ctx->r12 = ctx->r2 | 0X2;
            goto L_08006CD8;
    }
    // 0x08006CBC: ori         $t4, $v0, 0x2
    ctx->r12 = ctx->r2 | 0X2;
    // 0x08006CC0: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08006CC4: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    // 0x08006CC8: jalr        $t9
    // 0x08006CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x08006CD0: b           L_08006F38
    // 0x08006CD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08006F38;
    // 0x08006CD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08006CD8:
    // 0x08006CD8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08006CDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08006CE0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08006CE4: lwc1        $f8, 0xD0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x08006CE8: lwc1        $f10, 0xD4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x08006CEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006CF0: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08006CF4: addiu       $t9, $t9, -0x25E4
    ctx->r25 = ADD32(ctx->r25, -0X25E4);
    // 0x08006CF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08006CFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08006D00: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x08006D04: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x08006D08: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08006D0C: jalr        $t9
    // 0x08006D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08006D14: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08006D18: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08006D1C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08006D20: bnel        $t7, $zero, L_08006E68
    if (ctx->r15 != 0) {
        // 0x08006D24: lwc1        $f18, 0x78($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
            goto L_08006E68;
    }
    goto skip_0;
    // 0x08006D24: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    skip_0:
    // 0x08006D28: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08006D2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08006D30: lui         $t0, 0x8E80
    ctx->r8 = S32(0X8E80 << 16);
    // 0x08006D34: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x08006D38: nop

    // 0x08006D3C: bc1fl       L_08006E68
    if (!c1cs) {
        // 0x08006D40: lwc1        $f18, 0x78($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
            goto L_08006E68;
    }
    goto skip_1;
    // 0x08006D40: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    skip_1:
    // 0x08006D44: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x08006D48: ori         $t0, $t0, 0x320
    ctx->r8 = ctx->r8 | 0X320;
    // 0x08006D4C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08006D50: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x08006D54: bne         $v1, $zero, L_08006D74
    if (ctx->r3 != 0) {
        // 0x08006D58: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_08006D74;
    }
    // 0x08006D58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08006D5C: lhu         $t1, 0x18($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X18);
    // 0x08006D60: bnel        $t1, $zero, L_08006D78
    if (ctx->r9 != 0) {
        // 0x08006D64: slti        $at, $v0, 0x201
        ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
            goto L_08006D78;
    }
    goto skip_2;
    // 0x08006D64: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    skip_2:
    // 0x08006D68: swc1        $f12, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f12.u32l;
    // 0x08006D6C: b           L_08006E64
    // 0x08006D70: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
        goto L_08006E64;
    // 0x08006D70: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
L_08006D74:
    // 0x08006D74: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
L_08006D78:
    // 0x08006D78: bne         $at, $zero, L_08006DA8
    if (ctx->r1 != 0) {
        // 0x08006D7C: addiu       $t2, $v0, -0x400
        ctx->r10 = ADD32(ctx->r2, -0X400);
            goto L_08006DA8;
    }
    // 0x08006D7C: addiu       $t2, $v0, -0x400
    ctx->r10 = ADD32(ctx->r2, -0X400);
    // 0x08006D80: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x08006D84: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x08006D88: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08006D8C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08006D90: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x08006D94: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x08006D98: add.d       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f0.d + ctx->f0.d;
    // 0x08006D9C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08006DA0: b           L_08006DEC
    // 0x08006DA4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
        goto L_08006DEC;
    // 0x08006DA4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
L_08006DA8:
    // 0x08006DA8: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x08006DAC: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x08006DB0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08006DB4: bgez        $v1, L_08006DCC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006DB8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_08006DCC;
    }
    // 0x08006DB8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08006DBC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08006DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006DC4: nop

    // 0x08006DC8: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_08006DCC:
    // 0x08006DCC: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x08006DD0: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08006DD4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08006DD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08006DDC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08006DE0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08006DE4: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x08006DE8: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
L_08006DEC:
    // 0x08006DEC: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x08006DF0: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x08006DF4: bne         $at, $zero, L_08006E18
    if (ctx->r1 != 0) {
        // 0x08006DF8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08006E18;
    }
    // 0x08006DF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08006DFC: addiu       $t3, $v1, -0x400
    ctx->r11 = ADD32(ctx->r3, -0X400);
    // 0x08006E00: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x08006E04: nop

    // 0x08006E08: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08006E0C: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08006E10: b           L_08006E54
    // 0x08006E14: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
        goto L_08006E54;
    // 0x08006E14: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
L_08006E18:
    // 0x08006E18: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08006E1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08006E20: bgez        $v0, L_08006E34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08006E24: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08006E34;
    }
    // 0x08006E24: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08006E28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006E2C: nop

    // 0x08006E30: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_08006E34:
    // 0x08006E34: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x08006E38: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08006E3C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08006E40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08006E44: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x08006E48: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08006E4C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x08006E50: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
L_08006E54:
    // 0x08006E54: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08006E58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08006E5C: nop

    // 0x08006E60: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
L_08006E64:
    // 0x08006E64: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
L_08006E68:
    // 0x08006E68: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08006E6C: swc1        $f18, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f18.u32l;
    // 0x08006E70: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
L_08006E74:
    // 0x08006E74: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x08006E78: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08006E7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08006E80: lwc1        $f0, 0x8($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X8);
    // 0x08006E84: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x08006E88: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x08006E8C: nop

    // 0x08006E90: bc1fl       L_08006F38
    if (!c1cs) {
        // 0x08006E94: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08006F38;
    }
    goto skip_3;
    // 0x08006E94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x08006E98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08006E9C: lui         $at, 0x42CE
    ctx->r1 = S32(0X42CE << 16);
    // 0x08006EA0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x08006EA4: nop

    // 0x08006EA8: bc1fl       L_08006F38
    if (!c1cs) {
        // 0x08006EAC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08006F38;
    }
    goto skip_4;
    // 0x08006EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x08006EB0: lwc1        $f0, 0x10($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08006EB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006EB8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x08006EBC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08006EC0: nop

    // 0x08006EC4: bc1fl       L_08006F38
    if (!c1cs) {
        // 0x08006EC8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08006F38;
    }
    goto skip_5;
    // 0x08006EC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x08006ECC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08006ED0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08006ED4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08006ED8: nop

    // 0x08006EDC: bc1fl       L_08006F38
    if (!c1cs) {
        // 0x08006EE0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08006F38;
    }
    goto skip_6;
    // 0x08006EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x08006EE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08006EE8: lwc1        $f6, 0xC($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0XC);
    // 0x08006EEC: lui         $t5, 0x6A0
    ctx->r13 = S32(0X6A0 << 16);
    // 0x08006EF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6F48) << 16);
    // 0x08006EF4: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x08006EF8: ori         $t5, $t5, 0x7E1
    ctx->r13 = ctx->r13 | 0X7E1;
    // 0x08006EFC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x08006F00: addiu       $a0, $a0, 0x6F48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6F48));
    // 0x08006F04: bc1fl       L_08006F38
    if (!c1cs) {
        // 0x08006F08: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08006F38;
    }
    goto skip_7;
    // 0x08006F08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x08006F0C: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x08006F10: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08006F14: swc1        $f12, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f12.u32l;
    // 0x08006F18: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x08006F1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006F20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006F24: sw          $t6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r14;
    // 0x08006F28: swc1        $f12, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f12.u32l;
    // 0x08006F2C: jalr        $t9
    // 0x08006F30: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006F30: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
    after_2:
L_08006F34:
    // 0x08006F34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08006F38:
    // 0x08006F38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08006F3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08006F40: jr          $ra
    // 0x08006F44: nop

    TRACE_RETURN()
    return;
    // 0x08006F44: nop

;}
RECOMP_FUNC void func_08002CEC_6C243C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002CF4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002CF8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A08) << 16);
    // 0x08002CFC: ldc1        $f8, -0x75F8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A08));
    // 0x08002D00: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002D04: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002D08: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002D0C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002D10: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002D14: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08002D18: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002D1C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002D20: bne         $v0, $zero, L_08002D54
    if (ctx->r2 != 0) {
        // 0x08002D24: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002D54;
    }
    // 0x08002D24: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002D28: jalr        $t9
    // 0x08002D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x08002D30: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002D34: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002D38: jalr        $t9
    // 0x08002D3C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D3C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x08002D40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2D64) << 16);
    // 0x08002D4C: jalr        $t9
    // 0x08002D50: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2D64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D50: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2D64));
    after_2:
L_08002D54:
    // 0x08002D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D5C: jr          $ra
    // 0x08002D60: nop

    TRACE_RETURN()
    return;
    // 0x08002D60: nop

;}
RECOMP_FUNC void func_08005590_6C4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005590: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005594: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005598: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800559C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080055A0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080055A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080055A8: addiu       $t6, $zero, 0x23F
    ctx->r14 = ADD32(0, 0X23F);
    // 0x080055AC: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x080055B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080055B4: lui         $a2, 0x3CA3
    ctx->r6 = S32(0X3CA3 << 16);
    // 0x080055B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080055BC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080055C0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080055C4: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x080055C8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x080055CC: jalr        $t9
    // 0x080055D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080055D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080055D4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A4C) << 16);
    // 0x080055D8: lwc1        $f0, -0x75B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A4C));
    // 0x080055DC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080055E0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x080055E4: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
    // 0x080055E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080055EC: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x080055F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080055F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5624) << 16);
    // 0x080055F8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080055FC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08005600: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08005604: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08005608: jalr        $t9
    // 0x0800560C: addiu       $a0, $a0, 0x5624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5624));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800560C: addiu       $a0, $a0, 0x5624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5624));
    after_1:
    // 0x08005610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800561C: jr          $ra
    // 0x08005620: nop

    TRACE_RETURN()
    return;
    // 0x08005620: nop

;}
RECOMP_FUNC void func_08000334_6BFA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800033C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000340: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    // 0x08000344: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x08000348: addiu       $t6, $zero, 0x322
    ctx->r14 = ADD32(0, 0X322);
    // 0x0800034C: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x08000350: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000354: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000358: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800035C: bne         $t8, $at, L_0800036C
    if (ctx->r24 != ctx->r1) {
        // 0x08000360: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_0800036C;
    }
    // 0x08000360: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000364: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000368: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_0800036C:
    // 0x0800036C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000370: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000374: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800037C: jalr        $t9
    // 0x08000380: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000380: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000384: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000388: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800038C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000390: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3B0) << 16);
    // 0x08000394: addiu       $a0, $a0, 0x3B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B0));
    // 0x08000398: jalr        $t9
    // 0x0800039C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800039C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    after_1:
    // 0x080003A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003A8: jr          $ra
    // 0x080003AC: nop

    TRACE_RETURN()
    return;
    // 0x080003AC: nop

;}
RECOMP_FUNC void func_08006968_6C60B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006968: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800696C: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08006970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006978: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800697C: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x08006980: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08006984: addiu       $a0, $zero, 0x2BA
    ctx->r4 = ADD32(0, 0X2BA);
    // 0x08006988: bne         $a1, $t7, L_080069B8
    if (ctx->r5 != ctx->r15) {
        // 0x0800698C: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_080069B8;
    }
    // 0x0800698C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08006990: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006994: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08006998: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800699C: jalr        $t9
    // 0x080069A0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080069A0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_0:
    // 0x080069A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080069A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080069AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X69C8) << 16);
    // 0x080069B0: jalr        $t9
    // 0x080069B4: addiu       $a0, $a0, 0x69C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X69C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080069B4: addiu       $a0, $a0, 0x69C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X69C8));
    after_1:
L_080069B8:
    // 0x080069B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080069BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080069C0: jr          $ra
    // 0x080069C4: nop

    TRACE_RETURN()
    return;
    // 0x080069C4: nop

;}
RECOMP_FUNC void func_080078E0_6C7030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080078E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080078E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080078E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080078EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080078F0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080078F4: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x080078F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080078FC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x08007900: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08007904: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08007908: jalr        $t9
    // 0x0800790C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800790C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x08007910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08007914: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08007918: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800791C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08007920: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08007924: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08007928: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x0800792C: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x08007930: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
    // 0x08007934: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08007938: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x0800793C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08007940: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08007944: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x08007948: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800794C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08007950: bne         $t0, $zero, L_08007960
    if (ctx->r8 != 0) {
        // 0x08007954: nop
    
            goto L_08007960;
    }
    // 0x08007954: nop

    // 0x08007958: jalr        $t9
    // 0x0800795C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800795C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_08007960:
    // 0x08007960: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007964: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007968: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X7984) << 16);
    // 0x0800796C: jalr        $t9
    // 0x08007970: addiu       $a0, $a0, 0x7984
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7984));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007970: addiu       $a0, $a0, 0x7984
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7984));
    after_2:
    // 0x08007974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800797C: jr          $ra
    // 0x08007980: nop

    TRACE_RETURN()
    return;
    // 0x08007980: nop

;}
RECOMP_FUNC void func_08001920_6C1070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001928: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x0800192C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001930: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001934: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08001938: nop

    // 0x0800193C: bc1tl       L_08001968
    if (c1cs) {
        // 0x08001940: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001968;
    }
    goto skip_0;
    // 0x08001940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001944: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001948: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800194C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001950: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08001954: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1974) << 16);
    // 0x08001958: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x0800195C: jalr        $t9
    // 0x08001960: addiu       $a0, $a0, 0x1974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1974));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001960: addiu       $a0, $a0, 0x1974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1974));
    after_0:
    // 0x08001964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001968:
    // 0x08001968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800196C: jr          $ra
    // 0x08001970: nop

    TRACE_RETURN()
    return;
    // 0x08001970: nop

;}
RECOMP_FUNC void func_0800209C_6C17EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800209C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080020A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080020A4: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x080020A8: addiu       $t6, $zero, 0x1B9
    ctx->r14 = ADD32(0, 0X1B9);
    // 0x080020AC: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x080020B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080020B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080020B8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080020BC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080020C0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080020C4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080020C8: jalr        $t9
    // 0x080020CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x080020D0: lui         $at, 0xC357
    ctx->r1 = S32(0XC357 << 16);
    // 0x080020D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080020D8: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x080020DC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080020E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080020E4: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x080020E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080020EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2090) << 16);
    // 0x080020F8: addiu       $a0, $a0, 0x2090
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2090));
    // 0x080020FC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08002100: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08002104: jalr        $t9
    // 0x08002108: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002108: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_1:
    // 0x0800210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002114: jr          $ra
    // 0x08002118: nop

    TRACE_RETURN()
    return;
    // 0x08002118: nop

;}
RECOMP_FUNC void func_080057D0_6C4F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080057D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080057D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080057D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080057DC: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080057E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080057E4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080057E8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080057EC: beq         $t7, $zero, L_08005844
    if (ctx->r15 == 0) {
        // 0x080057F0: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_08005844;
    }
    // 0x080057F0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x080057F4: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x080057F8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080057FC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08005800: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08005804: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08005808: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800580C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08005810: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x08005814: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005818: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800581C: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    // 0x08005820: jalr        $t9
    // 0x08005824: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005824: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08005828: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800582C: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08005830: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005834: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5624) << 16);
    // 0x08005838: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x0800583C: jalr        $t9
    // 0x08005840: addiu       $a0, $a0, 0x5624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5624));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005840: addiu       $a0, $a0, 0x5624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5624));
    after_1:
L_08005844:
    // 0x08005844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800584C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005850: jr          $ra
    // 0x08005854: nop

    TRACE_RETURN()
    return;
    // 0x08005854: nop

;}
RECOMP_FUNC void func_0800000C_6BF75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800000C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000018: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x0800001C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000020: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000024: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x08000028: bne         $v0, $zero, L_08000040
    if (ctx->r2 != 0) {
        // 0x0800002C: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08000040;
    }
    // 0x0800002C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000030: lui         $t8, 0x8080
    ctx->r24 = S32(0X8080 << 16);
    // 0x08000034: ori         $t8, $t8, 0x221
    ctx->r24 = ctx->r24 | 0X221;
    // 0x08000038: b           L_08000054
    // 0x0800003C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_08000054;
    // 0x0800003C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
L_08000040:
    // 0x08000040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000044: bne         $v0, $at, L_08000054
    if (ctx->r2 != ctx->r1) {
        // 0x08000048: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000054;
    }
    // 0x08000048: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800004C: ori         $t9, $t9, 0x6E1
    ctx->r25 = ctx->r25 | 0X6E1;
    // 0x08000050: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_08000054:
    // 0x08000054: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000058: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800005C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000060: jalr        $t9
    // 0x08000064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800006C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000070: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800007C: jalr        $t9
    // 0x08000080: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000080: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000084: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000088: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x0800008C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000090: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000094: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000098: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800009C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080000A0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080000A4: lbu         $v0, 0xD1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD1);
    // 0x080000A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000AC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080000B0: bne         $v0, $at, L_080000CC
    if (ctx->r2 != ctx->r1) {
        // 0x080000B4: lui         $at, 0x801
        ctx->r1 = S32(RELOC_HI16(21, 0X8998) << 16);
            goto L_080000CC;
    }
    // 0x080000B4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8998) << 16);
    // 0x080000B8: lwc1        $f0, -0x7668($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8998));
    // 0x080000BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080000C0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080000C4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080000C8: lbu         $v0, 0xD1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD1);
L_080000CC:
    // 0x080000CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080000D0: bne         $v0, $at, L_080000E0
    if (ctx->r2 != ctx->r1) {
        // 0x080000D4: sb          $zero, 0x4C($a0)
        MEM_B(0X4C, ctx->r4) = 0;
            goto L_080000E0;
    }
    // 0x080000D4: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x080000D8: jalr        $t9
    // 0x080000DC: lhu         $a1, 0xD6($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000DC: lhu         $a1, 0xD6($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD6);
    after_2:
L_080000E0:
    // 0x080000E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X108) << 16);
    // 0x080000EC: jalr        $t9
    // 0x080000F0: addiu       $a0, $a0, 0x108
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X108));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000F0: addiu       $a0, $a0, 0x108
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X108));
    after_3:
    // 0x080000F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080000F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080000FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000100: jr          $ra
    // 0x08000104: nop

    TRACE_RETURN()
    return;
    // 0x08000104: nop

;}
RECOMP_FUNC void func_0800221C_6C196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800221C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002220: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08002224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800222C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002230: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x08002234: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002238: bnel        $a1, $t7, L_080022F8
    if (ctx->r5 != ctx->r15) {
        // 0x0800223C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022F8;
    }
    goto skip_0;
    // 0x0800223C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002240: lw          $v0, -0x32A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X32A0);
    // 0x08002244: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800224C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002250: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x08002254: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08002258: nop

    // 0x0800225C: bc1fl       L_080022F8
    if (!c1cs) {
        // 0x08002260: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022F8;
    }
    goto skip_1;
    // 0x08002260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08002264: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002268: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x0800226C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08002270: nop

    // 0x08002274: bc1fl       L_080022F8
    if (!c1cs) {
        // 0x08002278: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022F8;
    }
    goto skip_2;
    // 0x08002278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x0800227C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002280: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002284: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x08002288: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x0800228C: nop

    // 0x08002290: bc1fl       L_080022F8
    if (!c1cs) {
        // 0x08002294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022F8;
    }
    goto skip_3;
    // 0x08002294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x08002298: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800229C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080022A0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080022A4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x080022A8: nop

    // 0x080022AC: bc1fl       L_080022F8
    if (!c1cs) {
        // 0x080022B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022F8;
    }
    goto skip_4;
    // 0x080022B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x080022B4: jalr        $t9
    // 0x080022B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022B8: nop

    after_0:
    // 0x080022BC: bne         $v0, $zero, L_080022F4
    if (ctx->r2 != 0) {
        // 0x080022C0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080022F4;
    }
    // 0x080022C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080022C4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080022C8: jalr        $t9
    // 0x080022CC: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080022CC: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    after_1:
    // 0x080022D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080022D4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080022D8: jalr        $t9
    // 0x080022DC: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080022DC: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    after_2:
    // 0x080022E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2304) << 16);
    // 0x080022EC: jalr        $t9
    // 0x080022F0: addiu       $a0, $a0, 0x2304
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2304));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080022F0: addiu       $a0, $a0, 0x2304
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2304));
    after_3:
L_080022F4:
    // 0x080022F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080022F8:
    // 0x080022F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080022FC: jr          $ra
    // 0x08002300: nop

    TRACE_RETURN()
    return;
    // 0x08002300: nop

;}
RECOMP_FUNC void func_08000000_6BF750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000004: jr          $ra
    // 0x08000008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08006778_6C5EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006778: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800677C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08006780: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08006784: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08006788: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x0800678C: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x08006790: addiu       $t6, $zero, 0x332
    ctx->r14 = ADD32(0, 0X332);
    // 0x08006794: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08006798: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800679C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080067A0: lbu         $v0, 0xD0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD0);
    // 0x080067A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080067A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080067AC: bne         $v0, $zero, L_080067D4
    if (ctx->r2 != 0) {
        // 0x080067B0: lui         $a2, 0x3DCC
        ctx->r6 = S32(0X3DCC << 16);
            goto L_080067D4;
    }
    // 0x080067B0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080067B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080067B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080067BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080067C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080067C4: jalr        $t9
    // 0x080067C8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080067C8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x080067CC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080067D0: lbu         $v0, 0xD0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD0);
L_080067D4:
    // 0x080067D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080067D8: bne         $v0, $at, L_08006808
    if (ctx->r2 != ctx->r1) {
        // 0x080067DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006808;
    }
    // 0x080067DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080067E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080067E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080067E8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080067EC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080067F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080067F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080067F8: jalr        $t9
    // 0x080067FC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080067FC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x08006800: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08006804: lbu         $v0, 0xD0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD0);
L_08006808:
    // 0x08006808: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800680C: bne         $v0, $at, L_0800683C
    if (ctx->r2 != ctx->r1) {
        // 0x08006810: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800683C;
    }
    // 0x08006810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006814: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006818: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800681C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08006820: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006824: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08006828: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0800682C: jalr        $t9
    // 0x08006830: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006830: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x08006834: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08006838: lbu         $v0, 0xD0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD0);
L_0800683C:
    // 0x0800683C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08006840: bne         $v0, $at, L_08006870
    if (ctx->r2 != ctx->r1) {
        // 0x08006844: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006870;
    }
    // 0x08006844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006848: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800684C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006850: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08006854: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800685C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08006860: jalr        $t9
    // 0x08006864: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08006864: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x08006868: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800686C: lbu         $v0, 0xD0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD0);
L_08006870:
    // 0x08006870: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08006874: bne         $v0, $at, L_08006898
    if (ctx->r2 != ctx->r1) {
        // 0x08006878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006898;
    }
    // 0x08006878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800687C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006880: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006884: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08006888: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800688C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08006890: jalr        $t9
    // 0x08006894: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08006894: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
L_08006898:
    // 0x08006898: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800689C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080068A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X676C) << 16);
    // 0x080068A4: jalr        $t9
    // 0x080068A8: addiu       $a0, $a0, 0x676C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X676C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080068A8: addiu       $a0, $a0, 0x676C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X676C));
    after_5:
    // 0x080068AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080068B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080068B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080068B8: jr          $ra
    // 0x080068BC: nop

    TRACE_RETURN()
    return;
    // 0x080068BC: nop

;}
RECOMP_FUNC void func_08000BE8_6C0338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000BEC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000BF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000BFC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000C00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000C04: jalr        $t9
    // 0x08000C08: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C08: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x08000C0C: beq         $v0, $zero, L_08000DA0
    if (ctx->r2 == 0) {
        // 0x08000C10: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_08000DA0;
    }
    // 0x08000C10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000C14: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08000C18: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08000C1C: jalr        $v0
    // 0x08000C20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000C20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000C24: beq         $v0, $zero, L_08000C40
    if (ctx->r2 == 0) {
        // 0x08000C28: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_08000C40;
    }
    // 0x08000C28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C2C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000C30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000C34: nop

    // 0x08000C38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000C3C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_08000C40:
    // 0x08000C40: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000C44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C4C: nop

    after_2:
    // 0x08000C50: beq         $v0, $zero, L_08000C6C
    if (ctx->r2 == 0) {
        // 0x08000C54: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_08000C6C;
    }
    // 0x08000C54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C58: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000C5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000C60: nop

    // 0x08000C64: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08000C68: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
L_08000C6C:
    // 0x08000C6C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08000C70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000C74: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000C78: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000C7C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000C80: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08000C84: ori         $a0, $zero, 0x8154
    ctx->r4 = 0 | 0X8154;
    // 0x08000C88: bc1fl       L_08000C9C
    if (!c1cs) {
        // 0x08000C8C: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_08000C9C;
    }
    goto skip_0;
    // 0x08000C8C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    skip_0:
    // 0x08000C90: jalr        $t9
    // 0x08000C94: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C94: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x08000C98: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
L_08000C9C:
    // 0x08000C9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000CA0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000CA4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CA8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000CAC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x08000CB0: ori         $a0, $zero, 0x8154
    ctx->r4 = 0 | 0X8154;
    // 0x08000CB4: bc1fl       L_08000CC8
    if (!c1cs) {
        // 0x08000CB8: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_08000CC8;
    }
    goto skip_1;
    // 0x08000CB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CC0: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x08000CC4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_08000CC8:
    // 0x08000CC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08000CCC: jalr        $t9
    // 0x08000CD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000CD0: nop

    after_5:
    // 0x08000CD4: beq         $v0, $zero, L_08000DA0
    if (ctx->r2 == 0) {
        // 0x08000CD8: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_08000DA0;
    }
    // 0x08000CD8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000CDC: jalr        $t9
    // 0x08000CE0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000CE0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x08000CE4: beq         $v0, $zero, L_08000DA0
    if (ctx->r2 == 0) {
        // 0x08000CE8: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_08000DA0;
    }
    // 0x08000CE8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x08000CEC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x08000CF0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000CF4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000CF8: addiu       $t6, $t6, -0x7468
    ctx->r14 = ADD32(ctx->r14, -0X7468);
    // 0x08000CFC: jalr        $t9
    // 0x08000D00: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000D00: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_7:
    // 0x08000D04: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000D08: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08000D0C: jalr        $t9
    // 0x08000D10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D10: nop

    after_8:
    // 0x08000D14: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000D18: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000D1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000D20: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000D24: jalr        $t9
    // 0x08000D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x08000D2C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000D30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000D34: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000D38: lui         $at, 0xC33E
    ctx->r1 = S32(0XC33E << 16);
    // 0x08000D3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000D40: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000D44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XDB4) << 16);
    // 0x08000D4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D50: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08000D54: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08000D58: addiu       $a0, $a0, 0xDB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XDB4));
    // 0x08000D5C: bc1fl       L_08000D8C
    if (!c1cs) {
        // 0x08000D60: lw          $t7, 0x60($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X60);
            goto L_08000D8C;
    }
    goto skip_2;
    // 0x08000D60: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    skip_2:
    // 0x08000D64: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1488) << 16);
    // 0x08000D68: jalr        $t9
    // 0x08000D6C: addiu       $a0, $a0, 0x1488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1488));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000D6C: addiu       $a0, $a0, 0x1488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1488));
    after_10:
    // 0x08000D70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000D74: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08000D78: jalr        $t9
    // 0x08000D7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000D7C: nop

    after_11:
    // 0x08000D80: b           L_08000DA4
    // 0x08000D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000DA4;
    // 0x08000D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D88: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
L_08000D8C:
    // 0x08000D8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D94: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08000D98: jalr        $t9
    // 0x08000D9C: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000D9C: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    after_12:
L_08000DA0:
    // 0x08000DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000DA4:
    // 0x08000DA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000DAC: jr          $ra
    // 0x08000DB0: nop

    TRACE_RETURN()
    return;
    // 0x08000DB0: nop

;}
RECOMP_FUNC void func_080079C8_6C7118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080079C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080079CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080079D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080079D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080079D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080079DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X79FC) << 16);
    // 0x080079E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080079E4: jalr        $t9
    // 0x080079E8: addiu       $a0, $a0, 0x79FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X79FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080079E8: addiu       $a0, $a0, 0x79FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X79FC));
    after_0:
    // 0x080079EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080079F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080079F4: jr          $ra
    // 0x080079F8: nop

    TRACE_RETURN()
    return;
    // 0x080079F8: nop

;}
RECOMP_FUNC void func_08006010_6C5760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006010: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08006014: jr          $ra
    // 0x08006018: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08006018: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080019E4_6C1134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080019F0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080019F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019FC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001A00: bne         $v0, $zero, L_08001A14
    if (ctx->r2 != 0) {
        // 0x08001A04: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001A14;
    }
    // 0x08001A04: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001A08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1A24) << 16);
    // 0x08001A0C: jalr        $t9
    // 0x08001A10: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1A24));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A10: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1A24));
    after_0:
L_08001A14:
    // 0x08001A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A1C: jr          $ra
    // 0x08001A20: nop

    TRACE_RETURN()
    return;
    // 0x08001A20: nop

;}
RECOMP_FUNC void func_08002390_6C1AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002394: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800239C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080023A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080023A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080023A8: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080023AC: sb          $t6, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r14;
    // 0x080023B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080023B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080023B8: jalr        $t9
    // 0x080023BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x080023C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X23E4) << 16);
    // 0x080023CC: jalr        $t9
    // 0x080023D0: addiu       $a0, $a0, 0x23E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X23E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023D0: addiu       $a0, $a0, 0x23E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X23E4));
    after_1:
    // 0x080023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080023D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080023DC: jr          $ra
    // 0x080023E0: nop

    TRACE_RETURN()
    return;
    // 0x080023E0: nop

;}
RECOMP_FUNC void func_080056FC_6C4E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080056FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005700: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005704: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005708: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800570C: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005710: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08005714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005718: bnel        $t6, $at, L_08005780
    if (ctx->r14 != ctx->r1) {
        // 0x0800571C: lhu         $v0, 0x8A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X8A);
            goto L_08005780;
    }
    goto skip_0;
    // 0x0800571C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    skip_0:
    // 0x08005720: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08005724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005728: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800572C: bne         $t7, $at, L_0800577C
    if (ctx->r15 != ctx->r1) {
        // 0x08005730: addiu       $t9, $t9, -0x5B1C
        ctx->r25 = ADD32(ctx->r25, -0X5B1C);
            goto L_0800577C;
    }
    // 0x08005730: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08005734: jalr        $t9
    // 0x08005738: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005738: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800573C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005740: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08005744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005748: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    // 0x0800574C: jalr        $t9
    // 0x08005750: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005750: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x08005754: beq         $v0, $zero, L_0800577C
    if (ctx->r2 == 0) {
        // 0x08005758: addiu       $t8, $zero, 0x39
        ctx->r24 = ADD32(0, 0X39);
            goto L_0800577C;
    }
    // 0x08005758: addiu       $t8, $zero, 0x39
    ctx->r24 = ADD32(0, 0X39);
    // 0x0800575C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08005760: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08005764: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08005768: sw          $t8, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r24;
    // 0x0800576C: sw          $t0, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r8;
    // 0x08005770: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x08005774: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x08005778: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
L_0800577C:
    // 0x0800577C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_08005780:
    // 0x08005780: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005784: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005788: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x0800578C: bne         $v0, $zero, L_080057BC
    if (ctx->r2 != 0) {
        // 0x08005790: sh          $t1, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r9;
            goto L_080057BC;
    }
    // 0x08005790: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08005794: jalr        $t9
    // 0x08005798: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005798: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_2:
    // 0x0800579C: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x080057A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080057A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080057A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X57D0) << 16);
    // 0x080057AC: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x080057B0: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x080057B4: jalr        $t9
    // 0x080057B8: addiu       $a0, $a0, 0x57D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X57D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080057B8: addiu       $a0, $a0, 0x57D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X57D0));
    after_3:
L_080057BC:
    // 0x080057BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080057C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080057C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080057C8: jr          $ra
    // 0x080057CC: nop

    TRACE_RETURN()
    return;
    // 0x080057CC: nop

;}
RECOMP_FUNC void func_08002930_6C2080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800293C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002940: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89E8) << 16);
    // 0x08002944: ldc1        $f8, -0x7618($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X89E8));
    // 0x08002948: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800294C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002950: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08002954: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002958: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x0800295C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002960: jalr        $t9
    // 0x08002964: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002964: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    after_0:
    // 0x08002968: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800296C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002970: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002974: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002978: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800297C: bne         $v0, $zero, L_08002990
    if (ctx->r2 != 0) {
        // 0x08002980: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002990;
    }
    // 0x08002980: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002984: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X29A0) << 16);
    // 0x08002988: jalr        $t9
    // 0x0800298C: addiu       $a0, $a0, 0x29A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X29A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800298C: addiu       $a0, $a0, 0x29A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X29A0));
    after_1:
L_08002990:
    // 0x08002990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002998: jr          $ra
    // 0x0800299C: nop

    TRACE_RETURN()
    return;
    // 0x0800299C: nop

;}
RECOMP_FUNC void func_080053A4_6C4AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080053A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080053A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080053AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080053B0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080053B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080053B8: jalr        $t9
    // 0x080053BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080053BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080053C0: bne         $v0, $zero, L_080053F4
    if (ctx->r2 != 0) {
        // 0x080053C4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080053F4;
    }
    // 0x080053C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080053C8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080053CC: jalr        $t9
    // 0x080053D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080053D0: nop

    after_1:
    // 0x080053D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080053D8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080053DC: jalr        $t9
    // 0x080053E0: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080053E0: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_2:
    // 0x080053E4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080053E8: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x080053EC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x080053F0: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
L_080053F4:
    // 0x080053F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080053F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080053FC: jr          $ra
    // 0x08005400: nop

    TRACE_RETURN()
    return;
    // 0x08005400: nop

;}
RECOMP_FUNC void func_08001778_6C0EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001778: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x0800177C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08001780: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001784: jr          $ra
    // 0x08001788: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08001788: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08004FDC_6C472C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004FDC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08004FE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004FE4: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08004FE8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08004FEC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08004FF0: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x08004FF4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08004FF8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08004FFC: bc1f        L_08005010
    if (!c1cs) {
        // 0x08005000: nop
    
            goto L_08005010;
    }
    // 0x08005000: nop

    // 0x08005004: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08005008: nop

    // 0x0800500C: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
L_08005010:
    // 0x08005010: jr          $ra
    // 0x08005014: nop

    TRACE_RETURN()
    return;
    // 0x08005014: nop

;}
RECOMP_FUNC void func_08001488_6C0BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800148C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001494: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001498: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x0800149C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014A4: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080014A8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080014AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X14C8) << 16);
    // 0x080014B0: jalr        $t9
    // 0x080014B4: addiu       $a0, $a0, 0x14C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X14C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014B4: addiu       $a0, $a0, 0x14C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X14C8));
    after_0:
    // 0x080014B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080014BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080014C0: jr          $ra
    // 0x080014C4: nop

    TRACE_RETURN()
    return;
    // 0x080014C4: nop

;}
RECOMP_FUNC void func_0800498C_6C40DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800498C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004990: jr          $ra
    // 0x08004994: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004994: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003A74_6C31C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003A78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08003A7C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003A80: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08003A84: jr          $ra
    // 0x08003A88: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08003A88: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_08005090_6C47E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005098: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800509C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080050A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080050A4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080050A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080050AC: jalr        $t9
    // 0x080050B0: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080050B0: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    after_0:
    // 0x080050B4: beq         $v0, $zero, L_08005140
    if (ctx->r2 == 0) {
        // 0x080050B8: lui         $t6, 0x20
        ctx->r14 = S32(0X20 << 16);
            goto L_08005140;
    }
    // 0x080050B8: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x080050BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080050C0: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x080050C4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080050C8: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x080050CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080050D0: jalr        $t9
    // 0x080050D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080050D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x080050D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080050DC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080050E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080050E4: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080050E8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x080050EC: jalr        $t9
    // 0x080050F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080050F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080050F4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A48) << 16);
    // 0x080050F8: lwc1        $f0, -0x75B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A48));
    // 0x080050FC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08005100: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005104: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08005108: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x0800510C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005110: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08005114: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08005118: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800511C: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x08005120: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08005124: jalr        $t9
    // 0x08005128: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005128: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_3:
    // 0x0800512C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005130: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005134: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5154) << 16);
    // 0x08005138: jalr        $t9
    // 0x0800513C: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5154));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800513C: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5154));
    after_4:
L_08005140:
    // 0x08005140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005144: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800514C: jr          $ra
    // 0x08005150: nop

    TRACE_RETURN()
    return;
    // 0x08005150: nop

;}
RECOMP_FUNC void func_08001594_6C0CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800159C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080015A0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080015A4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080015A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080015AC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080015B0: bne         $v0, $zero, L_080015F0
    if (ctx->r2 != 0) {
        // 0x080015B4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080015F0;
    }
    // 0x080015B4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080015B8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080015BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080015C4: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x080015C8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080015CC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080015D0: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x080015D4: jalr        $t9
    // 0x080015D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080015DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1600) << 16);
    // 0x080015E8: jalr        $t9
    // 0x080015EC: addiu       $a0, $a0, 0x1600
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1600));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015EC: addiu       $a0, $a0, 0x1600
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1600));
    after_1:
L_080015F0:
    // 0x080015F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080015F8: jr          $ra
    // 0x080015FC: nop

    TRACE_RETURN()
    return;
    // 0x080015FC: nop

;}
RECOMP_FUNC void func_08004398_6C3AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004398: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0800439C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x080043A0: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x080043A4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x080043A8: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x080043AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080043B0: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x080043B4: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x080043B8: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x080043BC: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x080043C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x080043C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080043C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080043CC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080043D0: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x080043D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080043D8: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x080043DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x080043E0: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x080043E4: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x080043E8: addiu       $t5, $t5, 0x2360
    ctx->r13 = ADD32(ctx->r13, 0X2360);
    // 0x080043EC: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x080043F0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080043F4: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x080043F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080043FC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08004400: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08004404: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08004408: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x0800440C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08004410: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08004414: lbu         $t0, 0xE0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE0);
    // 0x08004418: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800441C: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08004420: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x08004424: lbu         $t1, 0xE1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE1);
    // 0x08004428: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x0800442C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08004430: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x08004434: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x08004438: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0800443C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08004440: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x08004444: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x08004448: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0800444C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08004450: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08004454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800445C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004460: jalr        $t9
    // 0x08004464: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004464: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08004468: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0800446C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08004470: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08004474: jr          $ra
    // 0x08004478: nop

    TRACE_RETURN()
    return;
    // 0x08004478: nop

;}
RECOMP_FUNC void func_08005BC0_6C5310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005BC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005BCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005BD0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005BD4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08005BD8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08005BDC: bne         $v0, $zero, L_08005C24
    if (ctx->r2 != 0) {
        // 0x08005BE0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005C24;
    }
    // 0x08005BE0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005BE4: lbu         $t7, 0xD4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD4);
    // 0x08005BE8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005BEC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005BF0: bne         $t7, $zero, L_08005C04
    if (ctx->r15 != 0) {
        // 0x08005BF4: addiu       $a0, $zero, 0x256
        ctx->r4 = ADD32(0, 0X256);
            goto L_08005C04;
    }
    // 0x08005BF4: addiu       $a0, $zero, 0x256
    ctx->r4 = ADD32(0, 0X256);
    // 0x08005BF8: jalr        $t9
    // 0x08005BFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005BFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08005C00: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08005C04:
    // 0x08005C04: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A54) << 16);
    // 0x08005C08: lwc1        $f4, -0x75AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A54));
    // 0x08005C0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005C10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005C14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5C34) << 16);
    // 0x08005C18: addiu       $a0, $a0, 0x5C34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5C34));
    // 0x08005C1C: jalr        $t9
    // 0x08005C20: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005C20: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    after_1:
L_08005C24:
    // 0x08005C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005C2C: jr          $ra
    // 0x08005C30: nop

    TRACE_RETURN()
    return;
    // 0x08005C30: nop

;}
RECOMP_FUNC void func_080074D4_6C6C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080074D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080074D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080074DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080074E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080074E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080074E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X178C) << 16);
    // 0x080074EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080074F0: jalr        $t9
    // 0x080074F4: addiu       $a0, $a0, 0x178C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X178C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080074F4: addiu       $a0, $a0, 0x178C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X178C));
    after_0:
    // 0x080074F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080074FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007500: jr          $ra
    // 0x08007504: nop

    TRACE_RETURN()
    return;
    // 0x08007504: nop

;}
RECOMP_FUNC void func_080018C8_6C1018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080018D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080018D8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080018DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080018E0: jalr        $t9
    // 0x080018E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x080018E8: beq         $v0, $zero, L_08001910
    if (ctx->r2 == 0) {
        // 0x080018EC: lui         $at, 0x801
        ctx->r1 = S32(RELOC_HI16(21, 0X89D0) << 16);
            goto L_08001910;
    }
    // 0x080018EC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89D0) << 16);
    // 0x080018F0: lwc1        $f4, -0x7630($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89D0));
    // 0x080018F4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080018F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001900: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1920) << 16);
    // 0x08001904: addiu       $a0, $a0, 0x1920
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1920));
    // 0x08001908: jalr        $t9
    // 0x0800190C: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800190C: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    after_1:
L_08001910:
    // 0x08001910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001918: jr          $ra
    // 0x0800191C: nop

    TRACE_RETURN()
    return;
    // 0x0800191C: nop

;}
RECOMP_FUNC void func_08001874_6C0FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800187C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001880: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08001884: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001888: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800188C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x08001890: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08001894: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08001898: jalr        $t9
    // 0x0800189C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800189C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x080018A0: beq         $v0, $zero, L_080018B8
    if (ctx->r2 == 0) {
        // 0x080018A4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X18C8) << 16);
            goto L_080018B8;
    }
    // 0x080018A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X18C8) << 16);
    // 0x080018A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018B0: jalr        $t9
    // 0x080018B4: addiu       $a0, $a0, 0x18C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X18C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018B4: addiu       $a0, $a0, 0x18C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X18C8));
    after_1:
L_080018B8:
    // 0x080018B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018C0: jr          $ra
    // 0x080018C4: nop

    TRACE_RETURN()
    return;
    // 0x080018C4: nop

;}
RECOMP_FUNC void func_08004AE8_6C4238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AE8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004AEC: jr          $ra
    // 0x08004AF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004AF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08006B40_6C6290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08006B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08006B48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08006B4C: lui         $t7, 0x8EA0
    ctx->r15 = S32(0X8EA0 << 16);
    // 0x08006B50: addiu       $t6, $zero, 0x1C1
    ctx->r14 = ADD32(0, 0X1C1);
    // 0x08006B54: ori         $t7, $t7, 0x7E1
    ctx->r15 = ctx->r15 | 0X7E1;
    // 0x08006B58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006B5C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08006B60: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08006B64: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08006B68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08006B6C: jalr        $t9
    // 0x08006B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08006B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08006B78: addiu       $t8, $zero, 0x1E1
    ctx->r24 = ADD32(0, 0X1E1);
    // 0x08006B7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006B80: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08006B84: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08006B88: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08006B8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08006B90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08006B94: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08006B98: jalr        $t9
    // 0x08006B9C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006B9C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_1:
    // 0x08006BA0: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x08006BA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006BA8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08006BAC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08006BB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08006BB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08006BB8: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x08006BBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08006BC0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08006BC4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08006BC8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08006BCC: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08006BD0: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08006BD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006BD8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08006BDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08006BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006BE4: sh          $zero, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = 0;
    // 0x08006BE8: swc1        $f10, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f10.u32l;
    // 0x08006BEC: jalr        $t9
    // 0x08006BF0: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006BF0: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    after_2:
    // 0x08006BF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006BF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006BFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6C18) << 16);
    // 0x08006C00: jalr        $t9
    // 0x08006C04: addiu       $a0, $a0, 0x6C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6C18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08006C04: addiu       $a0, $a0, 0x6C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6C18));
    after_3:
    // 0x08006C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08006C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08006C10: jr          $ra
    // 0x08006C14: nop

    TRACE_RETURN()
    return;
    // 0x08006C14: nop

;}
RECOMP_FUNC void func_08007BDC_6C732C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007BE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007BE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007BEC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08007BF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08007BF4: jalr        $t9
    // 0x08007BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08007BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08007C00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007C04: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08007C08: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08007C0C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08007C10: bne         $v0, $zero, L_08007C20
    if (ctx->r2 != 0) {
        // 0x08007C14: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08007C20;
    }
    // 0x08007C14: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007C18: jalr        $t9
    // 0x08007C1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007C1C: nop

    after_1:
L_08007C20:
    // 0x08007C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007C28: jr          $ra
    // 0x08007C2C: nop

    TRACE_RETURN()
    return;
    // 0x08007C2C: nop

;}
RECOMP_FUNC void func_080068C0_6C6010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080068C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080068C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080068C8: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x080068CC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080068D0: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x080068D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080068D8: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x080068DC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080068E0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080068E4: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x080068E8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080068EC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080068F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080068F4: jalr        $t9
    // 0x080068F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080068F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080068FC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A70) << 16);
    // 0x08006900: lwc1        $f0, -0x7590($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A70));
    // 0x08006904: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08006908: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0800690C: lui         $at, 0x4342
    ctx->r1 = S32(0X4342 << 16);
    // 0x08006910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006914: lui         $at, 0xC2D0
    ctx->r1 = S32(0XC2D0 << 16);
    // 0x08006918: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800691C: lui         $at, 0x43C6
    ctx->r1 = S32(0X43C6 << 16);
    // 0x08006920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08006924: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006928: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800692C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6968) << 16);
    // 0x08006930: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08006934: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08006938: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x0800693C: swc1        $f4, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f4.u32l;
    // 0x08006940: swc1        $f6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f6.u32l;
    // 0x08006944: swc1        $f8, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f8.u32l;
    // 0x08006948: addiu       $a0, $a0, 0x6968
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6968));
    // 0x0800694C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08006950: jalr        $t9
    // 0x08006954: sb          $zero, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006954: sb          $zero, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = 0;
    after_1:
    // 0x08006958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800695C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006960: jr          $ra
    // 0x08006964: nop

    TRACE_RETURN()
    return;
    // 0x08006964: nop

;}
RECOMP_FUNC void func_080069C8_6C6118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080069C8: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x080069CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080069D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080069D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080069D8: lui         $at, 0xC3CA
    ctx->r1 = S32(0XC3CA << 16);
    // 0x080069DC: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x080069E0: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080069E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080069E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080069EC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x080069F0: nop

    // 0x080069F4: bc1fl       L_08006A2C
    if (!c1cs) {
        // 0x080069F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08006A2C;
    }
    goto skip_0;
    // 0x080069F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080069FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08006A00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006A04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006A08: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
    // 0x08006A0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6A38) << 16);
    // 0x08006A10: addiu       $a0, $a0, 0x6A38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6A38));
    // 0x08006A14: jalr        $t9
    // 0x08006A18: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006A18: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08006A1C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08006A20: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08006A24: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08006A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08006A2C:
    // 0x08006A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006A30: jr          $ra
    // 0x08006A34: nop

    TRACE_RETURN()
    return;
    // 0x08006A34: nop

;}
RECOMP_FUNC void func_08002090_6C17E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002090: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002094: jr          $ra
    // 0x08002098: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002098: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001DB0_6C1500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001DB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001DBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001DC0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001DC4: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x08001DC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001DCC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08001DD0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08001DD4: jalr        $t9
    // 0x08001DD8: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001DD8: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    after_0:
    // 0x08001DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001DE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001DE4: jr          $ra
    // 0x08001DE8: nop

    TRACE_RETURN()
    return;
    // 0x08001DE8: nop

;}
RECOMP_FUNC void func_08006138_6C5888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800613C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(21, 0X6048) << 16);
    // 0x08006140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006148: addiu       $t9, $t9, 0x6048
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(21, 0X6048));
    // 0x0800614C: jalr        $t9
    // 0x08006150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08006154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800615C: jr          $ra
    // 0x08006160: nop

    TRACE_RETURN()
    return;
    // 0x08006160: nop

;}
RECOMP_FUNC void func_08000AC0_6C0210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000AC4: jr          $ra
    // 0x08000AC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000AC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001C10_6C1360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001C18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001C1C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001C20: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001C24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001C2C: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x08001C30: beq         $t7, $zero, L_08001CB8
    if (ctx->r15 == 0) {
        // 0x08001C34: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08001CB8;
    }
    // 0x08001C34: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001C38: jalr        $t9
    // 0x08001C3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C3C: nop

    after_0:
    // 0x08001C40: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001C44: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001C48: jalr        $t9
    // 0x08001C4C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C4C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_1:
    // 0x08001C50: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001C54: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001C58: jalr        $t9
    // 0x08001C5C: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C5C: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    after_2:
    // 0x08001C60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C64: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001C6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001C74: jalr        $t9
    // 0x08001C78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001C78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001C7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C80: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08001C84: jalr        $t9
    // 0x08001C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08001C8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C90: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08001C94: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08001C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001C9C: jalr        $t9
    // 0x08001CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08001CA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1CCC) << 16);
    // 0x08001CB0: jalr        $t9
    // 0x08001CB4: addiu       $a0, $a0, 0x1CCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1CCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001CB4: addiu       $a0, $a0, 0x1CCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1CCC));
    after_6:
L_08001CB8:
    // 0x08001CB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001CC4: jr          $ra
    // 0x08001CC8: nop

    TRACE_RETURN()
    return;
    // 0x08001CC8: nop

;}
RECOMP_FUNC void func_08000414_6BFB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800041C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000420: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    // 0x08000424: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x08000428: addiu       $t6, $zero, 0x33B
    ctx->r14 = ADD32(0, 0X33B);
    // 0x0800042C: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x08000430: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000434: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000438: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800043C: bne         $t8, $at, L_0800044C
    if (ctx->r24 != ctx->r1) {
        // 0x08000440: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_0800044C;
    }
    // 0x08000440: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000444: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000448: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_0800044C:
    // 0x0800044C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000450: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000454: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800045C: jalr        $t9
    // 0x08000460: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000460: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000464: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000468: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800046C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000470: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3B0) << 16);
    // 0x08000474: addiu       $a0, $a0, 0x3B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B0));
    // 0x08000478: jalr        $t9
    // 0x0800047C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800047C: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    after_1:
    // 0x08000480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000488: jr          $ra
    // 0x0800048C: nop

    TRACE_RETURN()
    return;
    // 0x0800048C: nop

;}
RECOMP_FUNC void func_08002304_6C1A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002308: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800230C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002314: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002318: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800231C: jalr        $t9
    // 0x08002320: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002320: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x08002324: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002328: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800232C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002330: jalr        $t9
    // 0x08002334: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002334: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08002338: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800233C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002340: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002344: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08002348: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x0800234C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002350: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002354: jalr        $t9
    // 0x08002358: sb          $t6, 0x6C($t7)
    MEM_B(0X6C, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002358: sb          $t6, 0x6C($t7)
    MEM_B(0X6C, ctx->r15) = ctx->r14;
    after_2:
    // 0x0800235C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002360: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002364: jalr        $t9
    // 0x08002368: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002368: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    after_3:
    // 0x0800236C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002370: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002374: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2390) << 16);
    // 0x08002378: jalr        $t9
    // 0x0800237C: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2390));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800237C: addiu       $a0, $a0, 0x2390
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2390));
    after_4:
    // 0x08002380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002388: jr          $ra
    // 0x0800238C: nop

    TRACE_RETURN()
    return;
    // 0x0800238C: nop

;}
RECOMP_FUNC void func_08000DB4_6C0504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000DBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000DC0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000DC4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000DC8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000DCC: swc1        $f4, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->f4.u32l;
    // 0x08000DD0: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000DD4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DD8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000DDC: swc1        $f6, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f6.u32l;
    // 0x08000DE0: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000DE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000DE8: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08000DEC: jalr        $t9
    // 0x08000DF0: swc1        $f8, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DF0: swc1        $f8, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->f8.u32l;
    after_0:
    // 0x08000DF4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08000DF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E00: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000E04: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XE2C) << 16);
    // 0x08000E08: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000E0C: beql        $t7, $zero, L_08000E20
    if (ctx->r15 == 0) {
        // 0x08000E10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000E20;
    }
    goto skip_0;
    // 0x08000E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000E14: jalr        $t9
    // 0x08000E18: addiu       $a0, $a0, 0xE2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XE2C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E18: addiu       $a0, $a0, 0xE2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XE2C));
    after_1:
    // 0x08000E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000E20:
    // 0x08000E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E24: jr          $ra
    // 0x08000E28: nop

    TRACE_RETURN()
    return;
    // 0x08000E28: nop

;}
RECOMP_FUNC void func_08004980_6C40D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004980: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004984: jr          $ra
    // 0x08004988: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004988: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
