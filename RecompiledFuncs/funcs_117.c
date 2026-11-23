#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08004AA8_6DE978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004AB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004AB4: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08004AB8: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08004ABC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AC0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08004AC4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08004AC8: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08004ACC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004AD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004AD4: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x08004AD8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004ADC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08004AE0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08004AE4: jalr        $t9
    // 0x08004AE8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004AE8: nop

    after_0:
    // 0x08004AEC: bne         $v0, $zero, L_08004B08
    if (ctx->r2 != 0) {
        // 0x08004AF0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08004B08;
    }
    // 0x08004AF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004AF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AF8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08004AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004B00: jalr        $t9
    // 0x08004B04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08004B08:
    // 0x08004B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004B10: jr          $ra
    // 0x08004B14: nop

    TRACE_RETURN()
    return;
    // 0x08004B14: nop

;}
RECOMP_FUNC void func_08004E04_6DECD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004E04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08004E08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004E0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004E10: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08004E14: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x08004E18: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x08004E1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08004E20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08004E24: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08004E28: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004E2C: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x08004E30: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x08004E34: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x08004E38: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x08004E3C: jalr        $t9
    // 0x08004E40: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004E40: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08004E44: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08004E48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004E4C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08004E50: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08004E54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004E58: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08004E5C: addiu       $t9, $t9, -0x2EB4
    ctx->r25 = ADD32(ctx->r25, -0X2EB4);
    // 0x08004E60: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x08004E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004E68: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08004E6C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x08004E70: jalr        $t9
    // 0x08004E74: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004E74: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x08004E78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004E7C: addiu       $t9, $t9, -0x24FC
    ctx->r25 = ADD32(ctx->r25, -0X24FC);
    // 0x08004E80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x08004E84: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x08004E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004E8C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x08004E90: jalr        $t9
    // 0x08004E94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004E94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08004E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004E9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004EA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08004EA4: jr          $ra
    // 0x08004EA8: nop

    TRACE_RETURN()
    return;
    // 0x08004EA8: nop

;}
RECOMP_FUNC void func_080005C4_6DA494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080005C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080005CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080005D8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080005DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005E0: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080005E4: lw          $a3, 0xE8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE8);
    // 0x080005E8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080005EC: jalr        $t9
    // 0x080005F0: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005F0: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_0:
    // 0x080005F4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X4E04) << 16);
    // 0x080005F8: addiu       $t9, $t9, 0x4E04
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X4E04));
    // 0x080005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000600: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x08000604: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x08000608: jalr        $t9
    // 0x0800060C: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800060C: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08000610: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x08000614: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08000618: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x0800061C: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x08000620: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000624: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x08000628: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800062C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000630: addiu       $v1, $v1, 0x17E0
    ctx->r3 = ADD32(ctx->r3, 0X17E0);
    // 0x08000634: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08000638: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x0800063C: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000640: nop

    // 0x08000644: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08000648: jalr        $v1
    // 0x0800064C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x0800064C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_2:
    // 0x08000650: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08000654: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x08000658: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800065C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000660: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08000664: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000668: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x0800066C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000670: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000674: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000678: nop

    // 0x0800067C: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08000680: jalr        $v1
    // 0x08000684: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000684: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x08000688: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x0800068C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000690: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000694: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000698: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080006A4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080006A8: bc1fl       L_080006D8
    if (!c1cs) {
        // 0x080006AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080006D8;
    }
    goto skip_0;
    // 0x080006AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080006B0: jalr        $t9
    // 0x080006B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080006B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080006B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006BC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x080006C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X6E8) << 16);
    // 0x080006C8: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x080006CC: jalr        $t9
    // 0x080006D0: addiu       $a0, $a0, 0x6E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X6E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080006D0: addiu       $a0, $a0, 0x6E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X6E8));
    after_5:
    // 0x080006D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080006D8:
    // 0x080006D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080006DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080006E0: jr          $ra
    // 0x080006E4: nop

    TRACE_RETURN()
    return;
    // 0x080006E4: nop

;}
RECOMP_FUNC void func_08001C00_6DBAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001C0C: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x08001C10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C18: beq         $v0, $zero, L_08001C40
    if (ctx->r2 == 0) {
        // 0x08001C1C: nop
    
            goto L_08001C40;
    }
    // 0x08001C1C: nop

    // 0x08001C20: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x08001C24: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x08001C28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001C2C: bnel        $t6, $at, L_08001C40
    if (ctx->r14 != ctx->r1) {
        // 0x08001C30: sh          $zero, 0xE0($a0)
        MEM_H(0XE0, ctx->r4) = 0;
            goto L_08001C40;
    }
    goto skip_0;
    // 0x08001C30: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
    skip_0:
    // 0x08001C34: b           L_08001C40
    // 0x08001C38: sh          $t7, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r15;
        goto L_08001C40;
    // 0x08001C38: sh          $t7, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r15;
    // 0x08001C3C: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
L_08001C40:
    // 0x08001C40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1C5C) << 16);
    // 0x08001C44: jalr        $t9
    // 0x08001C48: addiu       $a0, $a0, 0x1C5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1C5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C48: addiu       $a0, $a0, 0x1C5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1C5C));
    after_0:
    // 0x08001C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C54: jr          $ra
    // 0x08001C58: nop

    TRACE_RETURN()
    return;
    // 0x08001C58: nop

;}
RECOMP_FUNC void func_08003084_6DCF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003088: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800308C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003090: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003094: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003098: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800309C: jalr        $t9
    // 0x080030A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080030A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080030A4: bne         $v0, $zero, L_080030E0
    if (ctx->r2 != 0) {
        // 0x080030A8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080030E0;
    }
    // 0x080030A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080030AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080030B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080030B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030B8: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    // 0x080030BC: lw          $v0, 0x84($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X84);
    // 0x080030C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X30F0) << 16);
    // 0x080030C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080030CC: addiu       $a0, $a0, 0x30F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X30F0));
    // 0x080030D0: swc1        $f4, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f4.u32l;
    // 0x080030D4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080030D8: jalr        $t9
    // 0x080030DC: swc1        $f6, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080030DC: swc1        $f6, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f6.u32l;
    after_1:
L_080030E0:
    // 0x080030E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080030E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080030E8: jr          $ra
    // 0x080030EC: nop

    TRACE_RETURN()
    return;
    // 0x080030EC: nop

;}
RECOMP_FUNC void func_08000D68_6DAC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000D6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000D70: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000D74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000D78: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000D7C: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x08000D80: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x08000D84: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08000D88: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000D8C: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000D90: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000D94: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x08000D98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000D9C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000DA0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000DA4: bne         $t8, $zero, L_08000DB8
    if (ctx->r24 != 0) {
        // 0x08000DA8: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_08000DB8;
    }
    // 0x08000DA8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000DAC: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x08000DB0: beq         $t9, $zero, L_08000DF0
    if (ctx->r25 == 0) {
        // 0x08000DB4: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_08000DF0;
    }
    // 0x08000DB4: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
L_08000DB8:
    // 0x08000DB8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08000DBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DC0: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
    // 0x08000DC4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000DC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000DCC: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x08000DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000DD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000DD8: jalr        $t9
    // 0x08000DDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000DE0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000DE4: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08000DE8: b           L_08000E5C
    // 0x08000DEC: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
        goto L_08000E5C;
    // 0x08000DEC: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
L_08000DF0:
    // 0x08000DF0: bne         $t2, $zero, L_08000DFC
    if (ctx->r10 != 0) {
        // 0x08000DF4: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_08000DFC;
    }
    // 0x08000DF4: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x08000DF8: beq         $t3, $zero, L_08000E5C
    if (ctx->r11 == 0) {
        // 0x08000DFC: addiu       $t4, $zero, 0x50
        ctx->r12 = ADD32(0, 0X50);
            goto L_08000E5C;
    }
L_08000DFC:
    // 0x08000DFC: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x08000E00: addiu       $t5, $zero, 0xC0
    ctx->r13 = ADD32(0, 0XC0);
    // 0x08000E04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E08: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08000E0C: sb          $t5, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r13;
    // 0x08000E10: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000E14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000E18: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x08000E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E24: jalr        $t9
    // 0x08000E28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000E2C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000E30: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000E34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E38: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
    // 0x08000E3C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000E40: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000E44: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x08000E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E4C: addiu       $a1, $zero, 0x384
    ctx->r5 = ADD32(0, 0X384);
    // 0x08000E50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E54: jalr        $t9
    // 0x08000E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_08000E5C:
    // 0x08000E5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E60: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E68: jalr        $t9
    // 0x08000E6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x08000E70: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x08000E74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E78: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E7C: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x08000E80: bne         $t8, $zero, L_08000E90
    if (ctx->r24 != 0) {
        // 0x08000E84: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0XEB4) << 16);
            goto L_08000E90;
    }
    // 0x08000E84: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0XEB4) << 16);
    // 0x08000E88: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x08000E8C: beq         $t0, $zero, L_08000E98
    if (ctx->r8 == 0) {
        // 0x08000E90: addiu       $t1, $zero, 0x200
        ctx->r9 = ADD32(0, 0X200);
            goto L_08000E98;
    }
L_08000E90:
    // 0x08000E90: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000E94: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
L_08000E98:
    // 0x08000E98: jalr        $t9
    // 0x08000E9C: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0XEB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E9C: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0XEB4));
    after_4:
    // 0x08000EA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000EA4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000EA8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000EAC: jr          $ra
    // 0x08000EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08001D0C_6DBBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001D14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001D18: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08001D1C: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08001D20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001D24: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5278) << 16);
    // 0x08001D28: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08001D2C: nop

    // 0x08001D30: bc1fl       L_08001D44
    if (!c1cs) {
        // 0x08001D34: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_08001D44;
    }
    goto skip_0;
    // 0x08001D34: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x08001D38: b           L_08001D44
    // 0x08001D3C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_08001D44;
    // 0x08001D3C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x08001D40: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08001D44:
    // 0x08001D44: ldc1        $f14, 0x5278($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5278));
    // 0x08001D48: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x08001D4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5280) << 16);
    // 0x08001D50: c.lt.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d < ctx->f4.d;
    // 0x08001D54: nop

    // 0x08001D58: bc1fl       L_08001D7C
    if (!c1cs) {
        // 0x08001D5C: swc1        $f12, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
            goto L_08001D7C;
    }
    goto skip_1;
    // 0x08001D5C: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
    skip_1:
    // 0x08001D60: ldc1        $f8, 0x5280($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5280));
    // 0x08001D64: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08001D68: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08001D6C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001D70: b           L_08001D7C
    // 0x08001D74: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
        goto L_08001D7C;
    // 0x08001D74: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x08001D78: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
L_08001D7C:
    // 0x08001D7C: lwc1        $f0, 0x80($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08001D80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5288) << 16);
    // 0x08001D84: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08001D88: nop

    // 0x08001D8C: bc1fl       L_08001DA0
    if (!c1cs) {
        // 0x08001D90: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_08001DA0;
    }
    goto skip_2;
    // 0x08001D90: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x08001D94: b           L_08001DA0
    // 0x08001D98: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_08001DA0;
    // 0x08001D98: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x08001D9C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08001DA0:
    // 0x08001DA0: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x08001DA4: c.lt.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d < ctx->f18.d;
    // 0x08001DA8: nop

    // 0x08001DAC: bc1fl       L_08001DD0
    if (!c1cs) {
        // 0x08001DB0: swc1        $f12, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->f12.u32l;
            goto L_08001DD0;
    }
    goto skip_3;
    // 0x08001DB0: swc1        $f12, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f12.u32l;
    skip_3:
    // 0x08001DB4: ldc1        $f6, 0x5288($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5288));
    // 0x08001DB8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08001DBC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08001DC0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001DC4: b           L_08001DD0
    // 0x08001DC8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
        goto L_08001DD0;
    // 0x08001DC8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08001DCC: swc1        $f12, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f12.u32l;
L_08001DD0:
    // 0x08001DD0: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08001DD4: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x08001DD8: beq         $at, $zero, L_08001DE4
    if (ctx->r1 == 0) {
        // 0x08001DDC: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_08001DE4;
    }
    // 0x08001DDC: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x08001DE0: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
L_08001DE4:
    // 0x08001DE4: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001DE8: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08001DEC: beql        $t8, $zero, L_08001F7C
    if (ctx->r24 == 0) {
        // 0x08001DF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001F7C;
    }
    goto skip_4;
    // 0x08001DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x08001DF4: lbu         $t9, 0x8D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X8D);
    // 0x08001DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DFC: bne         $t9, $zero, L_08001F40
    if (ctx->r25 != 0) {
        // 0x08001E00: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08001F40;
    }
    // 0x08001E00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E04: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x08001E08: jalr        $t9
    // 0x08001E0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08001E10: lhu         $t0, 0xE0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XE0);
    // 0x08001E14: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08001E18: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08001E1C: beq         $t0, $zero, L_08001E84
    if (ctx->r8 == 0) {
        // 0x08001E20: addiu       $a0, $zero, 0x3E8
        ctx->r4 = ADD32(0, 0X3E8);
            goto L_08001E84;
    }
    // 0x08001E20: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x08001E24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E28: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001E2C: jalr        $t9
    // 0x08001E30: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E30: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x08001E34: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x08001E38: beq         $at, $zero, L_08001F34
    if (ctx->r1 == 0) {
        // 0x08001E3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001F34;
    }
    // 0x08001E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E40: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E44: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001E48: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001E4C: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x08001E50: jalr        $t9
    // 0x08001E54: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001E54: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x08001E58: beq         $v0, $zero, L_08001F34
    if (ctx->r2 == 0) {
        // 0x08001E5C: addiu       $t1, $zero, 0x24
        ctx->r9 = ADD32(0, 0X24);
            goto L_08001F34;
    }
    // 0x08001E5C: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x08001E60: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E64: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08001E68: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001E6C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001E70: jalr        $t9
    // 0x08001E74: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E74: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_3:
    // 0x08001E78: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001E7C: b           L_08001F34
    // 0x08001E80: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
        goto L_08001F34;
    // 0x08001E80: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001E84:
    // 0x08001E84: jalr        $v1
    // 0x08001E88: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08001E88: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_4:
    // 0x08001E8C: slti        $at, $v0, 0x2BD
    ctx->r1 = SIGNED(ctx->r2) < 0X2BD ? 1 : 0;
    // 0x08001E90: bne         $at, $zero, L_08001EE0
    if (ctx->r1 != 0) {
        // 0x08001E94: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_08001EE0;
    }
    // 0x08001E94: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08001E98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E9C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001EA0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001EA4: addiu       $a1, $a1, 0x4314
    ctx->r5 = ADD32(ctx->r5, 0X4314);
    // 0x08001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001EAC: jalr        $t9
    // 0x08001EB0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001EB0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_5:
    // 0x08001EB4: beq         $v0, $zero, L_08001F34
    if (ctx->r2 == 0) {
        // 0x08001EB8: addiu       $t2, $zero, 0x24
        ctx->r10 = ADD32(0, 0X24);
            goto L_08001F34;
    }
    // 0x08001EB8: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x08001EBC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001EC0: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001EC4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001EC8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001ECC: jalr        $t9
    // 0x08001ED0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001ED0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_6:
    // 0x08001ED4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001ED8: b           L_08001F34
    // 0x08001EDC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
        goto L_08001F34;
    // 0x08001EDC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001EE0:
    // 0x08001EE0: jalr        $v1
    // 0x08001EE4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x08001EE4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_7:
    // 0x08001EE8: slti        $at, $v0, 0x321
    ctx->r1 = SIGNED(ctx->r2) < 0X321 ? 1 : 0;
    // 0x08001EEC: bne         $at, $zero, L_08001F34
    if (ctx->r1 != 0) {
        // 0x08001EF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001F34;
    }
    // 0x08001EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001EF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001EF8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001EFC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001F00: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x08001F04: jalr        $t9
    // 0x08001F08: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001F08: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_8:
    // 0x08001F0C: beq         $v0, $zero, L_08001F34
    if (ctx->r2 == 0) {
        // 0x08001F10: addiu       $t3, $zero, 0x24
        ctx->r11 = ADD32(0, 0X24);
            goto L_08001F34;
    }
    // 0x08001F10: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x08001F14: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F18: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08001F1C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001F20: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001F24: jalr        $t9
    // 0x08001F28: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001F28: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_9:
    // 0x08001F2C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001F30: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001F34:
    // 0x08001F34: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x08001F38: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x08001F3C: sw          $t5, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r13;
L_08001F40:
    // 0x08001F40: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08001F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F4C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001F50: bne         $v0, $zero, L_08001F78
    if (ctx->r2 != 0) {
        // 0x08001F54: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08001F78;
    }
    // 0x08001F54: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08001F58: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08001F5C: jalr        $t9
    // 0x08001F60: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001F60: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x08001F64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F6C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1F8C) << 16);
    // 0x08001F70: jalr        $t9
    // 0x08001F74: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1F8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001F74: addiu       $a0, $a0, 0x1F8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1F8C));
    after_11:
L_08001F78:
    // 0x08001F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001F7C:
    // 0x08001F7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001F84: jr          $ra
    // 0x08001F88: nop

    TRACE_RETURN()
    return;
    // 0x08001F88: nop

;}
RECOMP_FUNC void func_080008D8_6DA7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080008DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080008E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080008E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080008E8: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x080008EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5238) << 16);
    // 0x080008F0: ldc1        $f8, 0x5238($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5238));
    // 0x080008F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080008F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080008FC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08000900: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X4E04) << 16);
    // 0x08000904: addiu       $t9, $t9, 0x4E04
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X4E04));
    // 0x08000908: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800090C: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x08000910: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    // 0x08000914: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x08000918: jalr        $t9
    // 0x0800091C: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800091C: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    after_0:
    // 0x08000920: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000924: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000928: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800092C: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000934: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000938: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x0800093C: beq         $t8, $zero, L_08000968
    if (ctx->r24 == 0) {
        // 0x08000940: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_08000968;
    }
    // 0x08000940: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000944: jalr        $t9
    // 0x08000948: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000948: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800094C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000950: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x08000954: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000958: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X97C) << 16);
    // 0x0800095C: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08000960: jalr        $t9
    // 0x08000964: addiu       $a0, $a0, 0x97C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X97C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000964: addiu       $a0, $a0, 0x97C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X97C));
    after_2:
L_08000968:
    // 0x08000968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800096C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000974: jr          $ra
    // 0x08000978: nop

    TRACE_RETURN()
    return;
    // 0x08000978: nop

;}
RECOMP_FUNC void func_0800213C_6DC00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800213C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002140: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002144: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002148: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800214C: addiu       $t9, $zero, 0x3E1
    ctx->r25 = ADD32(0, 0X3E1);
    // 0x08002150: lui         $t6, 0x2A7
    ctx->r14 = S32(0X2A7 << 16);
    // 0x08002154: sh          $t9, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r25;
    // 0x08002158: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(27, 0X2CA4) << 16);
    // 0x0800215C: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08002160: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08002164: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x08002168: addiu       $t0, $t0, 0x2CA4
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(27, 0X2CA4));
    // 0x0800216C: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x08002170: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x08002174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002178: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800217C: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x08002180: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    // 0x08002184: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x08002188: sb          $t1, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r9;
    // 0x0800218C: sb          $t2, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r10;
    // 0x08002190: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002198: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800219C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080021A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080021A4: jalr        $t9
    // 0x080021A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080021AC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x080021B0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080021B4: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x080021B8: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x080021BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021C0: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x080021C4: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x080021C8: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x080021CC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x080021D0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080021D4: sh          $t5, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r13;
    // 0x080021D8: sh          $t6, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r14;
    // 0x080021DC: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x080021E0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x080021E4: sb          $t7, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r15;
    // 0x080021E8: sb          $v1, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r3;
    // 0x080021EC: sb          $v1, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r3;
    // 0x080021F0: sb          $zero, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = 0;
    // 0x080021F4: jalr        $t9
    // 0x080021F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080021F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080021FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002200: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002208: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0800220C: jalr        $t9
    // 0x08002210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08002214: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5290) << 16);
    // 0x08002218: lwc1        $f0, 0x5290($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5290));
    // 0x0800221C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08002220: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002224: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08002228: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X4EB0) << 16);
    // 0x0800222C: addiu       $a1, $a1, 0x4EB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X4EB0));
    // 0x08002230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002238: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x0800223C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002240: jalr        $t9
    // 0x08002244: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002244: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x08002248: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800224C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002258: jalr        $t9
    // 0x0800225C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800225C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x08002260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002264: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800226C: jr          $ra
    // 0x08002270: nop

    TRACE_RETURN()
    return;
    // 0x08002270: nop

;}
RECOMP_FUNC void func_080045A0_6DE470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080045A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080045A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080045AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080045B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080045B4: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    // 0x080045B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080045BC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080045C0: jalr        $t9
    // 0x080045C4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080045C4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x080045C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080045CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080045D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X45EC) << 16);
    // 0x080045D4: jalr        $t9
    // 0x080045D8: addiu       $a0, $a0, 0x45EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X45EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080045D8: addiu       $a0, $a0, 0x45EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X45EC));
    after_1:
    // 0x080045DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080045E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080045E4: jr          $ra
    // 0x080045E8: nop

    TRACE_RETURN()
    return;
    // 0x080045E8: nop

;}
RECOMP_FUNC void func_080009CC_6DA89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080009D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080009D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080009D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080009DC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x080009E0: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x080009E4: lui         $t7, 0x2C0
    ctx->r15 = S32(0X2C0 << 16);
    // 0x080009E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080009F0: addiu       $t6, $zero, 0x147
    ctx->r14 = ADD32(0, 0X147);
    // 0x080009F4: ori         $t7, $t7, 0x7E0
    ctx->r15 = ctx->r15 | 0X7E0;
    // 0x080009F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080009FC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000A04: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000A08: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000A0C: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08000A10: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000A14: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000A18: jalr        $t9
    // 0x08000A1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x08000A20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A24: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000A30: jalr        $t9
    // 0x08000A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08000A38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5240) << 16);
    // 0x08000A3C: lwc1        $f0, 0x5240($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5240));
    // 0x08000A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A44: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A4C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000A58: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000A5C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000A60: jalr        $t9
    // 0x08000A64: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A64: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08000A68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A6C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000A70: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000A74: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X1058) << 16);
    // 0x08000A78: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000A7C: addiu       $a1, $a1, 0x1058
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X1058));
    // 0x08000A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A84: jalr        $t9
    // 0x08000A88: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A88: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_3:
    // 0x08000A8C: beq         $v0, $zero, L_08000B00
    if (ctx->r2 == 0) {
        // 0x08000A90: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_08000B00;
    }
    // 0x08000A90: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x08000A94: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A98: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x08000A9C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000AA0: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000AA4: jalr        $t9
    // 0x08000AA8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000AA8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_4:
    // 0x08000AAC: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x08000AB0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08000AB4: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08000AB8: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x08000ABC: lw          $t4, 0xD0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD0);
    // 0x08000AC0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000AC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000AC8: sw          $s0, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->r16;
    // 0x08000ACC: lw          $t6, 0xD0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD0);
    // 0x08000AD0: sb          $t5, 0xDC($t6)
    MEM_B(0XDC, ctx->r14) = ctx->r13;
    // 0x08000AD4: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x08000AD8: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000ADC: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x08000AE0: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08000AE4: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000AE8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000AEC: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08000AF0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000AF4: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x08000AF8: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000AFC: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
L_08000B00:
    // 0x08000B00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0XB28) << 16);
    // 0x08000B0C: jalr        $t9
    // 0x08000B10: addiu       $a0, $a0, 0xB28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0XB28));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000B10: addiu       $a0, $a0, 0xB28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0XB28));
    after_5:
    // 0x08000B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B18: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000B1C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000B20: jr          $ra
    // 0x08000B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800296C_6DC83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800296C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002974: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002978: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x0800297C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x08002980: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08002984: lbu         $t8, 0xD9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD9);
    // 0x08002988: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x0800298C: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x08002990: bne         $t0, $zero, L_080029B0
    if (ctx->r8 != 0) {
        // 0x08002994: sb          $t9, 0xD9($a0)
        MEM_B(0XD9, ctx->r4) = ctx->r25;
            goto L_080029B0;
    }
    // 0x08002994: sb          $t9, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r25;
    // 0x08002998: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x0800299C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X29C0) << 16);
    // 0x080029A8: jalr        $t9
    // 0x080029AC: addiu       $a0, $a0, 0x29C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X29C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080029AC: addiu       $a0, $a0, 0x29C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X29C0));
    after_0:
L_080029B0:
    // 0x080029B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080029B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080029B8: jr          $ra
    // 0x080029BC: nop

    TRACE_RETURN()
    return;
    // 0x080029BC: nop

;}
RECOMP_FUNC void func_080048FC_6DE7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080048FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004904: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08004908: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800490C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08004910: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004914: beq         $t7, $zero, L_08004924
    if (ctx->r15 == 0) {
        // 0x08004918: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08004924;
    }
    // 0x08004918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800491C: jalr        $t9
    // 0x08004920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08004924:
    // 0x08004924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800492C: jr          $ra
    // 0x08004930: nop

    TRACE_RETURN()
    return;
    // 0x08004930: nop

;}
RECOMP_FUNC void func_08002CA4_6DCB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002CAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002CB4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CB8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2CD8) << 16);
    // 0x08002CBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002CC0: jalr        $t9
    // 0x08002CC4: addiu       $a0, $a0, 0x2CD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2CD8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CC4: addiu       $a0, $a0, 0x2CD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2CD8));
    after_0:
    // 0x08002CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002CD0: jr          $ra
    // 0x08002CD4: nop

    TRACE_RETURN()
    return;
    // 0x08002CD4: nop

;}
RECOMP_FUNC void func_08003F1C_6DDDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003F24: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08003F28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003F2C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08003F30: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003F34: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08003F38: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x08003F3C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08003F40: bc1fl       L_08003F90
    if (!c1cs) {
        // 0x08003F44: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_08003F90;
    }
    goto skip_0;
    // 0x08003F44: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_0:
    // 0x08003F48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003F4C: nop

    // 0x08003F50: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08003F54: nop

    // 0x08003F58: bc1fl       L_08003F90
    if (!c1cs) {
        // 0x08003F5C: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_08003F90;
    }
    goto skip_1;
    // 0x08003F5C: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_1:
    // 0x08003F60: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08003F64: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x08003F68: bgez        $v0, L_08003F78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08003F6C: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08003F78;
    }
    // 0x08003F6C: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08003F70: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x08003F74: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08003F78:
    // 0x08003F78: blezl       $t6, L_08003F8C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x08003F7C: sh          $t7, 0x7E($a1)
        MEM_H(0X7E, ctx->r5) = ctx->r15;
            goto L_08003F8C;
    }
    goto skip_2;
    // 0x08003F7C: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    skip_2:
    // 0x08003F80: b           L_08003F8C
    // 0x08003F84: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
        goto L_08003F8C;
    // 0x08003F84: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
    // 0x08003F88: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
L_08003F8C:
    // 0x08003F8C: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
L_08003F90:
    // 0x08003F90: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x08003F94: beq         $t9, $zero, L_08003FBC
    if (ctx->r25 == 0) {
        // 0x08003F98: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08003FBC;
    }
    // 0x08003F98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003F9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003FA0: jalr        $t9
    // 0x08003FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08003FA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3FCC) << 16);
    // 0x08003FB4: jalr        $t9
    // 0x08003FB8: addiu       $a0, $a0, 0x3FCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3FCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003FB8: addiu       $a0, $a0, 0x3FCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3FCC));
    after_1:
L_08003FBC:
    // 0x08003FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003FC4: jr          $ra
    // 0x08003FC8: nop

    TRACE_RETURN()
    return;
    // 0x08003FC8: nop

;}
RECOMP_FUNC void func_08002C20_6DCAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002C2C: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08002C30: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08002C34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C38: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002C3C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002C40: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002C44: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002C48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C4C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x08002C50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002C54: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002C58: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002C5C: jalr        $t9
    // 0x08002C60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C60: nop

    after_0:
    // 0x08002C64: bne         $v0, $zero, L_08002C94
    if (ctx->r2 != 0) {
        // 0x08002C68: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002C94;
    }
    // 0x08002C68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002C6C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002C70: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08002C74: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C7C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002C80: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08002C84: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08002C88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C8C: jalr        $t9
    // 0x08002C90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08002C94:
    // 0x08002C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002C9C: jr          $ra
    // 0x08002CA0: nop

    TRACE_RETURN()
    return;
    // 0x08002CA0: nop

;}
RECOMP_FUNC void func_080049C8_6DE898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080049CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080049D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080049D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080049D8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080049DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080049E0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080049E4: jalr        $t9
    // 0x080049E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080049E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080049EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080049F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080049F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4A10) << 16);
    // 0x080049F8: jalr        $t9
    // 0x080049FC: addiu       $a0, $a0, 0x4A10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4A10));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080049FC: addiu       $a0, $a0, 0x4A10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4A10));
    after_1:
    // 0x08004A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004A08: jr          $ra
    // 0x08004A0C: nop

    TRACE_RETURN()
    return;
    // 0x08004A0C: nop

;}
RECOMP_FUNC void func_08002734_6DC604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800273C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002740: lbu         $t6, 0xD8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD8);
    // 0x08002744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002748: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800274C: beq         $t6, $zero, L_08002778
    if (ctx->r14 == 0) {
        // 0x08002750: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_08002778;
    }
    // 0x08002750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002754: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002758: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800275C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002760: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x08002764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002768: jalr        $t9
    // 0x0800276C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800276C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002770: b           L_08002788
    // 0x08002774: nop

        goto L_08002788;
    // 0x08002774: nop

L_08002778:
    // 0x08002778: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800277C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002780: jalr        $t9
    // 0x08002784: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002784: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
L_08002788:
    // 0x08002788: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800278C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002790: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002794: jalr        $t9
    // 0x08002798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0800279C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080027A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080027A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X27C0) << 16);
    // 0x080027A8: jalr        $t9
    // 0x080027AC: addiu       $a0, $a0, 0x27C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X27C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080027AC: addiu       $a0, $a0, 0x27C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X27C0));
    after_3:
    // 0x080027B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080027B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080027B8: jr          $ra
    // 0x080027BC: nop

    TRACE_RETURN()
    return;
    // 0x080027BC: nop

;}
RECOMP_FUNC void func_080036FC_6DD5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003700: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x08003704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003708: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800370C: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x08003710: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003714: jalr        $t9
    // 0x08003718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800371C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003720: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08003724: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08003728: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800372C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003730: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08003734: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08003738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800373C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08003740: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003744: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08003748: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x0800374C: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08003750: jalr        $t9
    // 0x08003754: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003754: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x08003758: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800375C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08003760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003764: jalr        $t9
    // 0x08003768: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003768: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x0800376C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003770: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x08003774: jalr        $t9
    // 0x08003778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x0800377C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003780: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003784: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X37A4) << 16);
    // 0x08003788: jalr        $t9
    // 0x0800378C: addiu       $a0, $a0, 0x37A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X37A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800378C: addiu       $a0, $a0, 0x37A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X37A4));
    after_4:
    // 0x08003790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800379C: jr          $ra
    // 0x080037A0: nop

    TRACE_RETURN()
    return;
    // 0x080037A0: nop

;}
RECOMP_FUNC void func_08002A84_6DC954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A8C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002A90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A94: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002A98: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002A9C: beq         $t7, $zero, L_08002AAC
    if (ctx->r15 == 0) {
        // 0x08002AA0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08002AAC;
    }
    // 0x08002AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002AA4: jalr        $t9
    // 0x08002AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08002AAC:
    // 0x08002AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AB4: jr          $ra
    // 0x08002AB8: nop

    TRACE_RETURN()
    return;
    // 0x08002AB8: nop

;}
RECOMP_FUNC void func_08003E40_6DDD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003E44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003E48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08003E4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08003E50: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003E54: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X4B18) << 16);
    // 0x08003E58: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X4B18));
    // 0x08003E5C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08003E60: beq         $t8, $zero, L_08003F0C
    if (ctx->r24 == 0) {
        // 0x08003E64: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_08003F0C;
    }
    // 0x08003E64: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08003E68: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08003E6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003E70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08003E74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003E78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E7C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08003E80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08003E84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08003E88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08003E8C: jalr        $t9
    // 0x08003E90: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E90: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08003E94: beq         $v0, $zero, L_08003EBC
    if (ctx->r2 == 0) {
        // 0x08003E98: addiu       $t0, $zero, 0x24
        ctx->r8 = ADD32(0, 0X24);
            goto L_08003EBC;
    }
    // 0x08003E98: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x08003E9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003EA0: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08003EA4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003EA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08003EAC: jalr        $t9
    // 0x08003EB0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003EB0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x08003EB4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08003EB8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08003EBC:
    // 0x08003EBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003EC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003EC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003EC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003ECC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08003ED0: jalr        $t9
    // 0x08003ED4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003ED4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x08003ED8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003EDC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003EE0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003EE4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003EE8: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    // 0x08003EEC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08003EF0: jalr        $t9
    // 0x08003EF4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003EF4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
    // 0x08003EF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003EFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3F1C) << 16);
    // 0x08003F04: jalr        $t9
    // 0x08003F08: addiu       $a0, $a0, 0x3F1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3F1C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003F08: addiu       $a0, $a0, 0x3F1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3F1C));
    after_4:
L_08003F0C:
    // 0x08003F0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003F10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003F14: jr          $ra
    // 0x08003F18: nop

    TRACE_RETURN()
    return;
    // 0x08003F18: nop

;}
RECOMP_FUNC void func_080043B0_6DE280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080043B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080043B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080043BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080043C0: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080043C4: jalr        $t9
    // 0x080043C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080043C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080043CC: bne         $v0, $zero, L_080043F0
    if (ctx->r2 != 0) {
        // 0x080043D0: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_080043F0;
    }
    // 0x080043D0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x080043D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080043D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080043DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080043E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4400) << 16);
    // 0x080043E4: addiu       $a0, $a0, 0x4400
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4400));
    // 0x080043E8: jalr        $t9
    // 0x080043EC: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080043EC: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    after_1:
L_080043F0:
    // 0x080043F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080043F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080043F8: jr          $ra
    // 0x080043FC: nop

    TRACE_RETURN()
    return;
    // 0x080043FC: nop

;}
RECOMP_FUNC void func_080017DC_6DB6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080017E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080017E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080017E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080017EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080017F0: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080017F4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080017F8: jal         0x08004DA8
    // 0x080017FC: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    func_08004DA8_6DEC78(rdram, ctx);
        goto after_0;
    // 0x080017FC: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_0:
    // 0x08001800: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x08001804: bne         $at, $zero, L_08001814
    if (ctx->r1 != 0) {
        // 0x08001808: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001814;
    }
    // 0x08001808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800180C: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x08001810: bne         $at, $zero, L_080018A4
    if (ctx->r1 != 0) {
        // 0x08001814: lui         $v0, 0x8022
        ctx->r2 = S32(0X8022 << 16);
            goto L_080018A4;
    }
L_08001814:
    // 0x08001814: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001818: addiu       $v0, $v0, -0x48C4
    ctx->r2 = ADD32(ctx->r2, -0X48C4);
    // 0x0800181C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08001820: jalr        $v0
    // 0x08001824: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001824: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x08001828: beq         $v0, $zero, L_08001870
    if (ctx->r2 == 0) {
        // 0x0800182C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001870;
    }
    // 0x0800182C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001830: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001834: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800183C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001840: jalr        $t9
    // 0x08001844: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001844: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x08001848: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800184C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001854: jalr        $t9
    // 0x08001858: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001858: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x0800185C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001860: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001864: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X18D0) << 16);
    // 0x08001868: jalr        $t9
    // 0x0800186C: addiu       $a0, $a0, 0x18D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X18D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800186C: addiu       $a0, $a0, 0x18D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X18D0));
    after_4:
L_08001870:
    // 0x08001870: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08001874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001878: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x0800187C: jalr        $t9
    // 0x08001880: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001880: nop

    after_5:
    // 0x08001884: beq         $v0, $zero, L_080018A4
    if (ctx->r2 == 0) {
        // 0x08001888: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080018A4;
    }
    // 0x08001888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800188C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001890: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001894: jalr        $t9
    // 0x08001898: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001898: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x0800189C: b           L_080018C0
    // 0x080018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018C0;
    // 0x080018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080018A4:
    // 0x080018A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018A8: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x080018AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018B0: lhu         $a1, 0xDC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XDC);
    // 0x080018B4: jalr        $t9
    // 0x080018B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080018B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x080018BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080018C0:
    // 0x080018C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080018C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080018C8: jr          $ra
    // 0x080018CC: nop

    TRACE_RETURN()
    return;
    // 0x080018CC: nop

;}
RECOMP_FUNC void func_0800401C_6DDEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800401C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004024: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004028: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800402C: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004030: lhu         $a1, 0xDC($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XDC);
    // 0x08004034: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x08004038: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800403C: jalr        $t9
    // 0x08004040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08004044: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08004048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800404C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004050: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08004054: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004058: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x0800405C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08004060: beql        $t8, $zero, L_0800409C
    if (ctx->r24 == 0) {
        // 0x08004064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800409C;
    }
    goto skip_0;
    // 0x08004064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08004068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800406C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004070: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004074: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08004078: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x0800407C: jalr        $t9
    // 0x08004080: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004080: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x08004084: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004088: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800408C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X40A8) << 16);
    // 0x08004090: jalr        $t9
    // 0x08004094: addiu       $a0, $a0, 0x40A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X40A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004094: addiu       $a0, $a0, 0x40A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X40A8));
    after_2:
    // 0x08004098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800409C:
    // 0x0800409C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080040A0: jr          $ra
    // 0x080040A4: nop

    TRACE_RETURN()
    return;
    // 0x080040A4: nop

;}
RECOMP_FUNC void func_080045EC_6DE4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080045F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080045F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080045F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080045FC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08004600: jalr        $t9
    // 0x08004604: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004604: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x08004608: bne         $v0, $zero, L_0800462C
    if (ctx->r2 != 0) {
        // 0x0800460C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_0800462C;
    }
    // 0x0800460C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08004610: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x08004614: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004618: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800461C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X463C) << 16);
    // 0x08004620: addiu       $a0, $a0, 0x463C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X463C));
    // 0x08004624: jalr        $t9
    // 0x08004628: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004628: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    after_1:
L_0800462C:
    // 0x0800462C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004634: jr          $ra
    // 0x08004638: nop

    TRACE_RETURN()
    return;
    // 0x08004638: nop

;}
RECOMP_FUNC void func_080040A8_6DDF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080040A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080040AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080040B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080040B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080040B8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080040BC: jalr        $t9
    // 0x080040C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080040C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080040C4: bne         $v0, $zero, L_080040E8
    if (ctx->r2 != 0) {
        // 0x080040C8: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_080040E8;
    }
    // 0x080040C8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x080040CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080040D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080040D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080040D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X40F8) << 16);
    // 0x080040DC: addiu       $a0, $a0, 0x40F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X40F8));
    // 0x080040E0: jalr        $t9
    // 0x080040E4: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080040E4: sb          $t6, 0x7C($t7)
    MEM_B(0X7C, ctx->r15) = ctx->r14;
    after_1:
L_080040E8:
    // 0x080040E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080040EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080040F0: jr          $ra
    // 0x080040F4: nop

    TRACE_RETURN()
    return;
    // 0x080040F4: nop

;}
RECOMP_FUNC void func_08001C5C_6DBB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001C60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001C64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001C68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001C6C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001C70: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08001C74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C78: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08001C7C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001C80: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001C84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001C88: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001C8C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08001C90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001C94: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001C98: jalr        $t9
    // 0x08001C9C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C9C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x08001CA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CA4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001CAC: jalr        $t9
    // 0x08001CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x08001CB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CB8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001CBC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001CC0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001CC4: addiu       $a0, $zero, 0x25C
    ctx->r4 = ADD32(0, 0X25C);
    // 0x08001CC8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001CCC: jalr        $t9
    // 0x08001CD0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CD0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08001CD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CD8: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x08001CDC: jalr        $t9
    // 0x08001CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08001CE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CEC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1D0C) << 16);
    // 0x08001CF0: jalr        $t9
    // 0x08001CF4: addiu       $a0, $a0, 0x1D0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1D0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001CF4: addiu       $a0, $a0, 0x1D0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1D0C));
    after_4:
    // 0x08001CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001D04: jr          $ra
    // 0x08001D08: nop

    TRACE_RETURN()
    return;
    // 0x08001D08: nop

;}
RECOMP_FUNC void func_08002844_6DC714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002844: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800284C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002850: lbu         $t6, 0xD8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD8);
    // 0x08002854: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002858: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x0800285C: beq         $t6, $zero, L_08002884
    if (ctx->r14 == 0) {
        // 0x08002860: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_08002884;
    }
    // 0x08002860: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x08002864: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002868: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x0800286C: lui         $a2, 0x3FAC
    ctx->r6 = S32(0X3FAC << 16);
    // 0x08002870: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08002874: jalr        $t9
    // 0x08002878: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002878: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    after_0:
    // 0x0800287C: b           L_080028A0
    // 0x08002880: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
        goto L_080028A0;
    // 0x08002880: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_08002884:
    // 0x08002884: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002888: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x0800288C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002890: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x08002894: jalr        $t9
    // 0x08002898: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002898: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    after_1:
    // 0x0800289C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_080028A0:
    // 0x080028A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X27C0) << 16);
    // 0x080028A4: addiu       $a0, $a0, 0x27C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X27C0));
    // 0x080028A8: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080028AC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080028B0: beq         $v1, $zero, L_080028D4
    if (ctx->r3 == 0) {
        // 0x080028B4: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_080028D4;
    }
    // 0x080028B4: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x080028B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080028BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080028C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080028C4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x080028C8: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x080028CC: jalr        $t9
    // 0x080028D0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080028D0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_2:
L_080028D4:
    // 0x080028D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028D8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080028DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080028E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080028E4: jalr        $t9
    // 0x080028E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080028E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080028EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080028F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080028F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080028F8: jr          $ra
    // 0x080028FC: nop

    TRACE_RETURN()
    return;
    // 0x080028FC: nop

;}
RECOMP_FUNC void func_08004934_6DE804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004938: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800493C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004940: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004944: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004948: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    // 0x0800494C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004950: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004954: jalr        $t9
    // 0x08004958: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004958: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x0800495C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004960: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004964: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4980) << 16);
    // 0x08004968: jalr        $t9
    // 0x0800496C: addiu       $a0, $a0, 0x4980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4980));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800496C: addiu       $a0, $a0, 0x4980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4980));
    after_1:
    // 0x08004970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004978: jr          $ra
    // 0x0800497C: nop

    TRACE_RETURN()
    return;
    // 0x0800497C: nop

;}
RECOMP_FUNC void func_080006E8_6DA5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080006EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080006F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080006F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080006F8: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x080006FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5220) << 16);
    // 0x08000700: ldc1        $f8, 0x5220($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5220));
    // 0x08000704: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000708: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5228) << 16);
    // 0x0800070C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08000710: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(27, 0X4E04) << 16);
    // 0x08000714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000718: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x0800071C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000720: addiu       $v0, $v0, 0x4E04
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(27, 0X4E04));
    // 0x08000724: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x08000728: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x0800072C: ldc1        $f4, 0x5228($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5228));
    // 0x08000730: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5230) << 16);
    // 0x08000734: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08000738: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x0800073C: nop

    // 0x08000740: bc1fl       L_08000758
    if (!c1cs) {
        // 0x08000744: lw          $a1, 0x78($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X78);
            goto L_08000758;
    }
    goto skip_0;
    // 0x08000744: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    skip_0:
    // 0x08000748: lwc1        $f6, 0x5230($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5230));
    // 0x0800074C: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000750: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08000754: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
L_08000758:
    // 0x08000758: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800075C: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    // 0x08000760: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000764: jalr        $v0
    // 0x08000768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x0800076C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000770: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000774: bne         $v0, $zero, L_080008C4
    if (ctx->r2 != 0) {
        // 0x08000778: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_080008C4;
    }
    // 0x08000778: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x0800077C: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08000780: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000784: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000788: beq         $a0, $zero, L_08000798
    if (ctx->r4 == 0) {
        // 0x0800078C: nop
    
            goto L_08000798;
    }
    // 0x0800078C: nop

    // 0x08000790: jalr        $t9
    // 0x08000794: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000794: nop

    after_1:
L_08000798:
    // 0x08000798: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800079C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080007A8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080007AC: jalr        $t9
    // 0x080007B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x080007B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080007B8: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x080007BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080007C0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x080007C4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x080007C8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x080007CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007D0: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x080007D4: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x080007D8: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x080007DC: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x080007E0: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x080007E4: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x080007E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x080007EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080007F0: jalr        $t9
    // 0x080007F4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007F4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x080007F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007FC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000800: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X9CC) << 16);
    // 0x08000804: addiu       $a1, $a1, 0x9CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X9CC));
    // 0x08000808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800080C: jalr        $t9
    // 0x08000810: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000810: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x08000814: beq         $v0, $zero, L_080008B0
    if (ctx->r2 == 0) {
        // 0x08000818: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_080008B0;
    }
    // 0x08000818: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0800081C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000820: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x08000824: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000828: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800082C: jalr        $t9
    // 0x08000830: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000830: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_5:
    // 0x08000834: lw          $t2, 0xD4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD4);
    // 0x08000838: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800083C: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x08000840: lw          $t3, 0xD4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD4);
    // 0x08000844: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08000848: swc1        $f10, 0x7C($t3)
    MEM_W(0X7C, ctx->r11) = ctx->f10.u32l;
    // 0x0800084C: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000850: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x08000854: swc1        $f16, 0x78($t4)
    MEM_W(0X78, ctx->r12) = ctx->f16.u32l;
    // 0x08000858: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x0800085C: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x08000860: swc1        $f18, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f18.u32l;
    // 0x08000864: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000868: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x0800086C: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x08000870: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000874: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x08000878: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x0800087C: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000880: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08000884: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000888: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x0800088C: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000890: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08000894: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000898: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x0800089C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080008A0: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    // 0x080008A4: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x080008A8: jalr        $t9
    // 0x080008AC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080008AC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    after_6:
L_080008B0:
    // 0x080008B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X8D8) << 16);
    // 0x080008BC: jalr        $t9
    // 0x080008C0: addiu       $a0, $a0, 0x8D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X8D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080008C0: addiu       $a0, $a0, 0x8D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X8D8));
    after_7:
L_080008C4:
    // 0x080008C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080008C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080008CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080008D0: jr          $ra
    // 0x080008D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080008D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080042FC_6DE1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080042FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004304: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004308: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800430C: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08004310: lhu         $a1, 0xDC($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XDC);
    // 0x08004314: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004318: jalr        $t9
    // 0x0800431C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800431C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x08004320: beq         $v0, $zero, L_08004354
    if (ctx->r2 == 0) {
        // 0x08004324: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08004354;
    }
    // 0x08004324: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004328: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800432C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004334: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08004338: jalr        $t9
    // 0x0800433C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800433C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x08004340: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004344: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004348: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X401C) << 16);
    // 0x0800434C: jalr        $t9
    // 0x08004350: addiu       $a0, $a0, 0x401C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X401C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004350: addiu       $a0, $a0, 0x401C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X401C));
    after_2:
L_08004354:
    // 0x08004354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800435C: jr          $ra
    // 0x08004360: nop

    TRACE_RETURN()
    return;
    // 0x08004360: nop

;}
RECOMP_FUNC void func_08003944_6DD814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003948: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x0800394C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003950: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x08003954: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003958: jalr        $t9
    // 0x0800395C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800395C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003960: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08003964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003968: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800396C: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08003970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003974: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08003978: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x0800397C: beq         $t8, $zero, L_080039C8
    if (ctx->r24 == 0) {
        // 0x08003980: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_080039C8;
    }
    // 0x08003980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08003984: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08003988: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800398C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003990: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08003994: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x08003998: jalr        $t9
    // 0x0800399C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800399C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x080039A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080039A4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080039A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080039AC: jalr        $t9
    // 0x080039B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080039B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080039B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080039BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3364) << 16);
    // 0x080039C0: jalr        $t9
    // 0x080039C4: addiu       $a0, $a0, 0x3364
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3364));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080039C4: addiu       $a0, $a0, 0x3364
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3364));
    after_3:
L_080039C8:
    // 0x080039C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080039CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080039D0: jr          $ra
    // 0x080039D4: nop

    TRACE_RETURN()
    return;
    // 0x080039D4: nop

;}
RECOMP_FUNC void func_08003238_6DD108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800323C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003240: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003244: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003248: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x0800324C: lui         $t6, 0x2A6
    ctx->r14 = S32(0X2A6 << 16);
    // 0x08003250: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x08003254: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08003258: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x0800325C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003260: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(27, 0X36C8) << 16);
    // 0x08003264: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003268: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x0800326C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x08003270: addiu       $t1, $zero, 0x1E1
    ctx->r9 = ADD32(0, 0X1E1);
    // 0x08003274: addiu       $t2, $t2, 0x36C8
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(27, 0X36C8));
    // 0x08003278: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x0800327C: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x08003280: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x08003284: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08003288: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800328C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x08003290: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003294: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08003298: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x0800329C: sh          $t1, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r9;
    // 0x080032A0: sw          $t2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r10;
    // 0x080032A4: sb          $t3, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r11;
    // 0x080032A8: sh          $t4, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r12;
    // 0x080032AC: sh          $t5, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r13;
    // 0x080032B0: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x080032B4: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x080032B8: sb          $t6, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r14;
    // 0x080032BC: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x080032C0: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x080032C4: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    // 0x080032C8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x080032CC: jalr        $t9
    // 0x080032D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080032D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080032D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032D8: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080032DC: jalr        $t9
    // 0x080032E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080032E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080032E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080032E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080032EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080032F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080032F4: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080032F8: jalr        $t9
    // 0x080032FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080032FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08003300: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003304: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08003308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800330C: jalr        $t9
    // 0x08003310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08003314: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08003318: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800331C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003320: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08003324: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3364) << 16);
    // 0x08003328: addiu       $a0, $a0, 0x3364
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3364));
    // 0x0800332C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08003330: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x08003334: nop

    // 0x08003338: sh          $t8, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r24;
    // 0x0800333C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08003340: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003344: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x08003348: jalr        $t9
    // 0x0800334C: sh          $t1, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800334C: sh          $t1, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r9;
    after_4:
    // 0x08003350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800335C: jr          $ra
    // 0x08003360: nop

    TRACE_RETURN()
    return;
    // 0x08003360: nop

;}
RECOMP_FUNC void func_08002900_6DC7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002904: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800290C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002910: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002914: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800291C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002920: jalr        $t9
    // 0x08002924: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002924: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08002928: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800292C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002934: jalr        $t9
    // 0x08002938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x0800293C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08002940: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002944: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08002948: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800294C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X296C) << 16);
    // 0x08002950: addiu       $a0, $a0, 0x296C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X296C));
    // 0x08002954: jalr        $t9
    // 0x08002958: sb          $t6, 0xD9($t7)
    MEM_B(0XD9, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002958: sb          $t6, 0xD9($t7)
    MEM_B(0XD9, ctx->r15) = ctx->r14;
    after_2:
    // 0x0800295C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002964: jr          $ra
    // 0x08002968: nop

    TRACE_RETURN()
    return;
    // 0x08002968: nop

;}
RECOMP_FUNC void func_08001224_6DB0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001224: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001228: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x0800122C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001230: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08001234: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001238: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800123C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001240: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08001244: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001248: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x0800124C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x08001250: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x08001254: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x08001258: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x0800125C: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x08001260: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x08001264: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x08001268: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x0800126C: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x08001270: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x08001274: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08001278: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800127C: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x08001280: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001284: jalr        $t9
    // 0x08001288: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001288: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0800128C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001290: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x08001294: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08001298: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800129C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080012A0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080012A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080012A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012AC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080012B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x080012B4: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x080012B8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x080012BC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080012C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080012C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080012C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080012CC: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x080012D0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x080012D4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080012D8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080012DC: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x080012E0: lhu         $t0, -0x33D0($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X33D0);
    // 0x080012E4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x080012E8: beq         $t1, $zero, L_08001314
    if (ctx->r9 == 0) {
        // 0x080012EC: nop
    
            goto L_08001314;
    }
    // 0x080012EC: nop

    // 0x080012F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012F4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080012F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080012FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001300: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001304: jalr        $t9
    // 0x08001308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001308: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x0800130C: b           L_08001320
    // 0x08001310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001320;
    // 0x08001310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001314:
    // 0x08001314: jalr        $t9
    // 0x08001318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x0800131C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001320:
    // 0x08001320: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001324: jr          $ra
    // 0x08001328: nop

    TRACE_RETURN()
    return;
    // 0x08001328: nop

;}
RECOMP_FUNC void func_08003B60_6DDA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003B64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003B68: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08003B6C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52B0) << 16);
    // 0x08003B70: ldc1        $f8, 0x52B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X52B0));
    // 0x08003B74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003B78: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08003B7C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08003B80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52B8) << 16);
    // 0x08003B84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B88: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003B8C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003B90: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08003B94: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003B98: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003B9C: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x08003BA0: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08003BA4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003BA8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08003BAC: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x08003BB0: ldc1        $f8, 0x52B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X52B8));
    // 0x08003BB4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08003BB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003BBC: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08003BC0: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08003BC4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x08003BC8: beql        $t7, $zero, L_08003BFC
    if (ctx->r15 == 0) {
        // 0x08003BCC: lbu         $a1, 0xD0($a0)
        ctx->r5 = MEM_BU(ctx->r4, 0XD0);
            goto L_08003BFC;
    }
    goto skip_0;
    // 0x08003BCC: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    skip_0:
    // 0x08003BD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BD4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003BD8: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003BDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003BE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003BE4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x08003BE8: jalr        $t9
    // 0x08003BEC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003BEC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x08003BF0: b           L_08003C0C
    // 0x08003BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_08003C0C;
    // 0x08003BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003BF8: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
L_08003BFC:
    // 0x08003BFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003C00: jalr        $t9
    // 0x08003C04: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003C04: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x08003C08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08003C0C:
    // 0x08003C0C: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003C10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C14: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003C18: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x08003C1C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x08003C20: bne         $t3, $zero, L_08003C30
    if (ctx->r11 != 0) {
        // 0x08003C24: sb          $t2, 0xD0($a0)
        MEM_B(0XD0, ctx->r4) = ctx->r10;
            goto L_08003C30;
    }
    // 0x08003C24: sb          $t2, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r10;
    // 0x08003C28: jalr        $t9
    // 0x08003C2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003C2C: nop

    after_2:
L_08003C30:
    // 0x08003C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003C38: jr          $ra
    // 0x08003C3C: nop

    TRACE_RETURN()
    return;
    // 0x08003C3C: nop

;}
RECOMP_FUNC void func_0800253C_6DC40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800253C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002544: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08002548: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800254C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08002550: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08002554: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002558: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x0800255C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08002560: bc1fl       L_08002654
    if (!c1cs) {
        // 0x08002564: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_08002654;
    }
    goto skip_0;
    // 0x08002564: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_0:
    // 0x08002568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800256C: nop

    // 0x08002570: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08002574: nop

    // 0x08002578: bc1fl       L_08002654
    if (!c1cs) {
        // 0x0800257C: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_08002654;
    }
    goto skip_1;
    // 0x0800257C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_1:
    // 0x08002580: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08002584: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08002588: bnel        $at, $zero, L_08002654
    if (ctx->r1 != 0) {
        // 0x0800258C: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_08002654;
    }
    goto skip_2;
    // 0x0800258C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_2:
    // 0x08002590: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08002594: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08002598: bgez        $v0, L_080025B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800259C: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_080025B4;
    }
    // 0x0800259C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x080025A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080025A4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080025A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080025AC: nop

    // 0x080025B0: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_080025B4:
    // 0x080025B4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080025B8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080025BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080025C0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x080025C4: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x080025C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x080025CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x080025D0: nop

    // 0x080025D4: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x080025D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x080025DC: nop

    // 0x080025E0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x080025E4: beql        $t7, $zero, L_08002638
    if (ctx->r15 == 0) {
        // 0x080025E8: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_08002638;
    }
    goto skip_3;
    // 0x080025E8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_3:
    // 0x080025EC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080025F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080025F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080025F8: sub.d       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f4.d = ctx->f18.d - ctx->f4.d;
    // 0x080025FC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08002600: nop

    // 0x08002604: cvt.w.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_D(ctx->f4.d);
    // 0x08002608: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x0800260C: nop

    // 0x08002610: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08002614: bne         $t7, $zero, L_0800262C
    if (ctx->r15 != 0) {
        // 0x08002618: nop
    
            goto L_0800262C;
    }
    // 0x08002618: nop

    // 0x0800261C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x08002620: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002624: b           L_08002644
    // 0x08002628: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08002644;
    // 0x08002628: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_0800262C:
    // 0x0800262C: b           L_08002644
    // 0x08002630: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08002644;
    // 0x08002630: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08002634: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_08002638:
    // 0x08002638: nop

    // 0x0800263C: bltz        $t7, L_0800262C
    if (SIGNED(ctx->r15) < 0) {
        // 0x08002640: nop
    
            goto L_0800262C;
    }
    // 0x08002640: nop

L_08002644:
    // 0x08002644: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08002648: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    // 0x0800264C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08002650: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
L_08002654:
    // 0x08002654: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002658: nop

    // 0x0800265C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x08002660: nop

    // 0x08002664: bc1fl       L_080026F8
    if (!c1cs) {
        // 0x08002668: lui         $at, 0x4188
        ctx->r1 = S32(0X4188 << 16);
            goto L_080026F8;
    }
    goto skip_4;
    // 0x08002668: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    skip_4:
    // 0x0800266C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08002670: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08002674: lwc1        $f10, 0xD4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08002678: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x0800267C: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08002680: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08002684: nop

    // 0x08002688: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x0800268C: beql        $t9, $zero, L_080026DC
    if (ctx->r25 == 0) {
        // 0x08002690: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_080026DC;
    }
    goto skip_5;
    // 0x08002690: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_5:
    // 0x08002694: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002698: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x0800269C: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x080026A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x080026A4: nop

    // 0x080026A8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x080026AC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x080026B0: nop

    // 0x080026B4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x080026B8: bne         $t9, $zero, L_080026D0
    if (ctx->r25 != 0) {
        // 0x080026BC: nop
    
            goto L_080026D0;
    }
    // 0x080026BC: nop

    // 0x080026C0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x080026C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080026C8: b           L_080026E8
    // 0x080026CC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_080026E8;
    // 0x080026CC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_080026D0:
    // 0x080026D0: b           L_080026E8
    // 0x080026D4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_080026E8;
    // 0x080026D4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x080026D8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_080026DC:
    // 0x080026DC: nop

    // 0x080026E0: bltz        $t9, L_080026D0
    if (SIGNED(ctx->r25) < 0) {
        // 0x080026E4: nop
    
            goto L_080026D0;
    }
    // 0x080026E4: nop

L_080026E8:
    // 0x080026E8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x080026EC: sh          $t9, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r25;
    // 0x080026F0: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x080026F4: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
L_080026F8:
    // 0x080026F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080026FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002700: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x08002704: nop

    // 0x08002708: bc1fl       L_08002728
    if (!c1cs) {
        // 0x0800270C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002728;
    }
    goto skip_6;
    // 0x0800270C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x08002710: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002714: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002718: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800271C: jalr        $t9
    // 0x08002720: swc1        $f18, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002720: swc1        $f18, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
    after_0:
    // 0x08002724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002728:
    // 0x08002728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800272C: jr          $ra
    // 0x08002730: nop

    TRACE_RETURN()
    return;
    // 0x08002730: nop

;}
RECOMP_FUNC void func_080036C8_6DD598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080036CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080036D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080036D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X36FC) << 16);
    // 0x080036E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080036E4: jalr        $t9
    // 0x080036E8: addiu       $a0, $a0, 0x36FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X36FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036E8: addiu       $a0, $a0, 0x36FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X36FC));
    after_0:
    // 0x080036EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080036F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080036F4: jr          $ra
    // 0x080036F8: nop

    TRACE_RETURN()
    return;
    // 0x080036F8: nop

;}
RECOMP_FUNC void func_0800041C_6DA2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800041C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000420: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800042C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000430: lui         $t6, 0x80
    ctx->r14 = S32(0X80 << 16);
    // 0x08000434: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800043C: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    // 0x08000440: jalr        $t9
    // 0x08000444: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000444: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x08000448: beq         $v0, $zero, L_080005B0
    if (ctx->r2 == 0) {
        // 0x0800044C: lui         $t7, 0x26
        ctx->r15 = S32(0X26 << 16);
            goto L_080005B0;
    }
    // 0x0800044C: lui         $t7, 0x26
    ctx->r15 = S32(0X26 << 16);
    // 0x08000450: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000454: ori         $t7, $t7, 0x16E1
    ctx->r15 = ctx->r15 | 0X16E1;
    // 0x08000458: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x0800045C: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x08000460: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x08000464: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x08000468: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800046C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000470: sw          $t8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r24;
    // 0x08000474: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08000478: sb          $t1, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r9;
    // 0x0800047C: sb          $t2, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r10;
    // 0x08000480: jalr        $t9
    // 0x08000484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000488: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800048C: addiu       $t3, $zero, 0x46
    ctx->r11 = ADD32(0, 0X46);
    // 0x08000490: addiu       $t4, $zero, 0xFA
    ctx->r12 = ADD32(0, 0XFA);
    // 0x08000494: addiu       $t5, $zero, -0x7D
    ctx->r13 = ADD32(0, -0X7D);
    // 0x08000498: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x0800049C: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x080004A0: addiu       $t8, $zero, -0x19
    ctx->r24 = ADD32(0, -0X19);
    // 0x080004A4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080004A8: sh          $t3, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r11;
    // 0x080004AC: sh          $t4, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r12;
    // 0x080004B0: sh          $t5, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r13;
    // 0x080004B4: sw          $t6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r14;
    // 0x080004B8: sh          $t7, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r15;
    // 0x080004BC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x080004C0: sh          $t8, 0x52($s0)
    MEM_H(0X52, ctx->r16) = ctx->r24;
    // 0x080004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080004CC: jalr        $t9
    // 0x080004D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080004D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004D8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004E4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080004E8: jalr        $t9
    // 0x080004EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080004F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X521C) << 16);
    // 0x080004F4: lwc1        $f0, 0x521C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X521C));
    // 0x080004F8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080004FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000500: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08000504: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x08000508: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000510: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x08000514: jalr        $t9
    // 0x08000518: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000518: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    after_4:
    // 0x0800051C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X4E04) << 16);
    // 0x08000520: addiu       $t9, $t9, 0x4E04
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X4E04));
    // 0x08000524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000528: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x0800052C: lw          $a2, 0x7C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X7C);
    // 0x08000530: jalr        $t9
    // 0x08000534: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000534: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    after_5:
    // 0x08000538: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800053C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000540: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X1058) << 16);
    // 0x08000544: addiu       $a1, $a1, 0x1058
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X1058));
    // 0x08000548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800054C: jalr        $t9
    // 0x08000550: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000550: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_6:
    // 0x08000554: beq         $v0, $zero, L_0800059C
    if (ctx->r2 == 0) {
        // 0x08000558: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_0800059C;
    }
    // 0x08000558: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x0800055C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000560: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x08000564: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000568: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800056C: jalr        $t9
    // 0x08000570: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000570: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_7:
    // 0x08000574: lw          $t2, 0xD0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD0);
    // 0x08000578: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x0800057C: lui         $t6, 0x80
    ctx->r14 = S32(0X80 << 16);
    // 0x08000580: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x08000584: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x08000588: sw          $s0, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->r16;
    // 0x0800058C: lw          $t5, 0xD0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD0);
    // 0x08000590: sb          $t4, 0xDC($t5)
    MEM_B(0XDC, ctx->r13) = ctx->r12;
    // 0x08000594: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x08000598: sw          $t6, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r14;
L_0800059C:
    // 0x0800059C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X5C4) << 16);
    // 0x080005A8: jalr        $t9
    // 0x080005AC: addiu       $a0, $a0, 0x5C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X5C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080005AC: addiu       $a0, $a0, 0x5C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X5C4));
    after_8:
L_080005B0:
    // 0x080005B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080005B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080005B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080005BC: jr          $ra
    // 0x080005C0: nop

    TRACE_RETURN()
    return;
    // 0x080005C0: nop

;}
RECOMP_FUNC void func_08003DFC_6DDCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003E00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003E08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003E0C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003E10: jalr        $t9
    // 0x08003E14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x08003E18: bne         $v0, $zero, L_08003E30
    if (ctx->r2 != 0) {
        // 0x08003E1C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X3E40) << 16);
            goto L_08003E30;
    }
    // 0x08003E1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3E40) << 16);
    // 0x08003E20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E28: jalr        $t9
    // 0x08003E2C: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3E40));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E2C: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3E40));
    after_1:
L_08003E30:
    // 0x08003E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003E38: jr          $ra
    // 0x08003E3C: nop

    TRACE_RETURN()
    return;
    // 0x08003E3C: nop

;}
RECOMP_FUNC void func_08002ABC_6DC98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002AC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002AC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08002ACC: lh          $t8, 0xA0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA0);
    // 0x08002AD0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002AD4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002AD8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08002ADC: swc1        $f12, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f12.u32l;
    // 0x08002AE0: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x08002AE4: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    // 0x08002AE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002AEC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x08002AF0: lh          $t0, 0xA2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XA2);
    // 0x08002AF4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08002AF8: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08002AFC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08002B00: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002B04: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08002B08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002B0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08002B10: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x08002B14: swc1        $f10, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f10.u32l;
    // 0x08002B18: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08002B1C: lwc1        $f2, 0x10($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X10);
    // 0x08002B20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B24: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002B28: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x08002B2C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x08002B30: swc1        $f6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f6.u32l;
    // 0x08002B34: jalr        $t9
    // 0x08002B38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002B3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B40: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002B44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002B48: jalr        $t9
    // 0x08002B4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08002B50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2B74) << 16);
    // 0x08002B5C: jalr        $t9
    // 0x08002B60: addiu       $a0, $a0, 0x2B74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2B74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002B60: addiu       $a0, $a0, 0x2B74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2B74));
    after_2:
    // 0x08002B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B6C: jr          $ra
    // 0x08002B70: nop

    TRACE_RETURN()
    return;
    // 0x08002B70: nop

;}
RECOMP_FUNC void func_08001560_6DB430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800156C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001570: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08001574: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x08001578: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x0800157C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001580: jalr        $t9
    // 0x08001584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001588: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0800158C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X15D4) << 16);
    // 0x08001590: addiu       $a0, $a0, 0x15D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X15D4));
    // 0x08001594: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
    // 0x08001598: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800159C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080015A0: beq         $v1, $zero, L_080015C4
    if (ctx->r3 == 0) {
        // 0x080015A4: sh          $t7, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r15;
            goto L_080015C4;
    }
    // 0x080015A4: sh          $t7, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r15;
    // 0x080015A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080015AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015B4: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    // 0x080015B8: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x080015BC: jalr        $t9
    // 0x080015C0: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015C0: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    after_1:
L_080015C4:
    // 0x080015C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080015CC: jr          $ra
    // 0x080015D0: nop

    TRACE_RETURN()
    return;
    // 0x080015D0: nop

;}
RECOMP_FUNC void func_0800429C_6DE16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800429C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080042A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080042A4: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080042A8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080042AC: beql        $t7, $zero, L_080042F0
    if (ctx->r15 == 0) {
        // 0x080042B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080042F0;
    }
    goto skip_0;
    // 0x080042B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080042B4: lhu         $t8, 0xDE($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XDE);
    // 0x080042B8: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x080042BC: bne         $t8, $t9, L_080042D8
    if (ctx->r24 != ctx->r25) {
        // 0x080042C0: nop
    
            goto L_080042D8;
    }
    // 0x080042C0: nop

    // 0x080042C4: lhu         $t0, 0xDC($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XDC);
    // 0x080042C8: sh          $zero, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = 0;
    // 0x080042CC: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x080042D0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080042D4: sh          $t2, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = ctx->r10;
L_080042D8:
    // 0x080042D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080042DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080042E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X42FC) << 16);
    // 0x080042E4: jalr        $t9
    // 0x080042E8: addiu       $a0, $a0, 0x42FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X42FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080042E8: addiu       $a0, $a0, 0x42FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X42FC));
    after_0:
    // 0x080042EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080042F0:
    // 0x080042F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080042F4: jr          $ra
    // 0x080042F8: nop

    TRACE_RETURN()
    return;
    // 0x080042F8: nop

;}
RECOMP_FUNC void func_080039D8_6DD8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080039DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080039E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080039E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080039E8: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x080039EC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080039F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080039F4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x080039F8: beq         $t7, $zero, L_08003A38
    if (ctx->r15 == 0) {
        // 0x080039FC: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_08003A38;
    }
    // 0x080039FC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08003A00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A04: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003A08: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08003A0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003A10: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08003A14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x08003A18: jalr        $t9
    // 0x08003A1C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A1C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x08003A20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003A24: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08003A28: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003A2C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08003A30: b           L_08003A6C
    // 0x08003A34: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
        goto L_08003A6C;
    // 0x08003A34: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
L_08003A38:
    // 0x08003A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A3C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003A40: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08003A44: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08003A48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08003A4C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003A50: jalr        $t9
    // 0x08003A54: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003A54: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08003A58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003A5C: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x08003A60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003A64: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08003A68: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
L_08003A6C:
    // 0x08003A6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003A70: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08003A74: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x08003A78: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08003A7C: sh          $t5, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r13;
    // 0x08003A80: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x08003A84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08003A88: jalr        $t9
    // 0x08003A8C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003A8C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x08003A90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A94: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003A98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08003A9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003AA0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08003AA4: jalr        $t9
    // 0x08003AA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003AA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08003AAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52A8) << 16);
    // 0x08003AB0: lwc1        $f0, 0x52A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X52A8));
    // 0x08003AB4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08003AB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003ABC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08003AC0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08003AC4: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08003AC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003ACC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08003AD0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08003AD4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08003AD8: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x08003ADC: jalr        $v1
    // 0x08003AE0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08003AE0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x08003AE4: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x08003AE8: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x08003AEC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x08003AF0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08003AF4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08003AF8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08003AFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08003B00: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08003B04: jalr        $v1
    // 0x08003B08: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x08003B08: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x08003B0C: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x08003B10: addiu       $t1, $t0, -0x10
    ctx->r9 = ADD32(ctx->r8, -0X10);
    // 0x08003B14: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x08003B18: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08003B1C: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x08003B20: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08003B24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B28: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x08003B2C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x08003B30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3B60) << 16);
    // 0x08003B38: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x08003B3C: addiu       $a0, $a0, 0x3B60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3B60));
    // 0x08003B40: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x08003B44: jalr        $t9
    // 0x08003B48: sb          $t3, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003B48: sb          $t3, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r11;
    after_6:
    // 0x08003B4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003B50: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003B54: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003B58: jr          $ra
    // 0x08003B5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08003B5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080044B8_6DE388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080044B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080044BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080044C0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080044C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080044C8: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x080044CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080044D0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080044D4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x080044D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080044DC: bc1fl       L_0800452C
    if (!c1cs) {
        // 0x080044E0: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_0800452C;
    }
    goto skip_0;
    // 0x080044E0: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_0:
    // 0x080044E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080044E8: nop

    // 0x080044EC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x080044F0: nop

    // 0x080044F4: bc1fl       L_0800452C
    if (!c1cs) {
        // 0x080044F8: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_0800452C;
    }
    goto skip_1;
    // 0x080044F8: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_1:
    // 0x080044FC: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08004500: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x08004504: bgez        $v0, L_08004514
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08004508: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08004514;
    }
    // 0x08004508: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x0800450C: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x08004510: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08004514:
    // 0x08004514: blezl       $t6, L_08004528
    if (SIGNED(ctx->r14) <= 0) {
        // 0x08004518: sh          $t7, 0x7E($a1)
        MEM_H(0X7E, ctx->r5) = ctx->r15;
            goto L_08004528;
    }
    goto skip_2;
    // 0x08004518: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    skip_2:
    // 0x0800451C: b           L_08004528
    // 0x08004520: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
        goto L_08004528;
    // 0x08004520: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
    // 0x08004524: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
L_08004528:
    // 0x08004528: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
L_0800452C:
    // 0x0800452C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x08004530: beq         $t9, $zero, L_08004558
    if (ctx->r25 == 0) {
        // 0x08004534: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08004558;
    }
    // 0x08004534: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004538: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800453C: jalr        $t9
    // 0x08004540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08004544: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004548: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800454C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4568) << 16);
    // 0x08004550: jalr        $t9
    // 0x08004554: addiu       $a0, $a0, 0x4568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4568));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004554: addiu       $a0, $a0, 0x4568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4568));
    after_1:
L_08004558:
    // 0x08004558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800455C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004560: jr          $ra
    // 0x08004564: nop

    TRACE_RETURN()
    return;
    // 0x08004564: nop

;}
RECOMP_FUNC void func_08002E20_6DCCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002E28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002E2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002E34: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002E38: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08002E3C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002E40: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002E44: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002E48: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002E4C: bne         $v0, $zero, L_08002EA8
    if (ctx->r2 != 0) {
        // 0x08002E50: swc1        $f0, 0x78($a0)
        MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
            goto L_08002EA8;
    }
    // 0x08002E50: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002E54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E58: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002E5C: jalr        $t9
    // 0x08002E60: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E60: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002E64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E68: addiu       $t9, $t9, -0x4B04
    ctx->r25 = ADD32(ctx->r25, -0X4B04);
    // 0x08002E6C: jalr        $t9
    // 0x08002E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08002E74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08002E78: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08002E7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002E80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E84: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x08002E88: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x08002E8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2EB8) << 16);
    // 0x08002E94: addiu       $a0, $a0, 0x2EB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2EB8));
    // 0x08002E98: sb          $t7, 0x75($a1)
    MEM_B(0X75, ctx->r5) = ctx->r15;
    // 0x08002E9C: sh          $t8, 0x96($a1)
    MEM_H(0X96, ctx->r5) = ctx->r24;
    // 0x08002EA0: jalr        $t9
    // 0x08002EA4: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002EA4: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    after_2:
L_08002EA8:
    // 0x08002EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002EB0: jr          $ra
    // 0x08002EB4: nop

    TRACE_RETURN()
    return;
    // 0x08002EB4: nop

;}
RECOMP_FUNC void func_080013D0_6DB2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080013D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080013D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080013DC: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x080013E0: lui         $t6, 0x2AA
    ctx->r14 = S32(0X2AA << 16);
    // 0x080013E4: sh          $t9, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r25;
    // 0x080013E8: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x080013EC: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x080013F0: addiu       $t8, $zero, 0x4B
    ctx->r24 = ADD32(0, 0X4B);
    // 0x080013F4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x080013F8: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x080013FC: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x08001400: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001404: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001408: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x0800140C: sh          $t8, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r24;
    // 0x08001410: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x08001414: sw          $t0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r8;
    // 0x08001418: sh          $t1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r9;
    // 0x0800141C: sh          $t2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r10;
    // 0x08001420: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x08001424: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08001428: jalr        $t9
    // 0x0800142C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800142C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001430: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001434: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800143C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x08001440: jalr        $t9
    // 0x08001444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08001448: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800144C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001458: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800145C: jalr        $t9
    // 0x08001460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001464: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X526C) << 16);
    // 0x08001468: lwc1        $f0, 0x526C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X526C));
    // 0x0800146C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001470: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001474: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001478: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X14A0) << 16);
    // 0x0800147C: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X14A0));
    // 0x08001480: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08001484: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001488: jalr        $t9
    // 0x0800148C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800148C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x08001490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001498: jr          $ra
    // 0x0800149C: nop

    TRACE_RETURN()
    return;
    // 0x0800149C: nop

;}
RECOMP_FUNC void func_0800484C_6DE71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800484C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004854: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08004858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800485C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08004860: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08004864: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004868: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x0800486C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08004870: bc1fl       L_080048C0
    if (!c1cs) {
        // 0x08004874: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_080048C0;
    }
    goto skip_0;
    // 0x08004874: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_0:
    // 0x08004878: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800487C: nop

    // 0x08004880: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08004884: nop

    // 0x08004888: bc1fl       L_080048C0
    if (!c1cs) {
        // 0x0800488C: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_080048C0;
    }
    goto skip_1;
    // 0x0800488C: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_1:
    // 0x08004890: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08004894: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x08004898: bgez        $v0, L_080048A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800489C: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_080048A8;
    }
    // 0x0800489C: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x080048A0: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x080048A4: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_080048A8:
    // 0x080048A8: blezl       $t6, L_080048BC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x080048AC: sh          $t7, 0x7E($a1)
        MEM_H(0X7E, ctx->r5) = ctx->r15;
            goto L_080048BC;
    }
    goto skip_2;
    // 0x080048AC: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    skip_2:
    // 0x080048B0: b           L_080048BC
    // 0x080048B4: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
        goto L_080048BC;
    // 0x080048B4: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
    // 0x080048B8: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
L_080048BC:
    // 0x080048BC: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
L_080048C0:
    // 0x080048C0: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x080048C4: beq         $t9, $zero, L_080048EC
    if (ctx->r25 == 0) {
        // 0x080048C8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080048EC;
    }
    // 0x080048C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080048CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080048D0: jalr        $t9
    // 0x080048D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x080048D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080048DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080048E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X48FC) << 16);
    // 0x080048E4: jalr        $t9
    // 0x080048E8: addiu       $a0, $a0, 0x48FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X48FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080048E8: addiu       $a0, $a0, 0x48FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X48FC));
    after_1:
L_080048EC:
    // 0x080048EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080048F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080048F4: jr          $ra
    // 0x080048F8: nop

    TRACE_RETURN()
    return;
    // 0x080048F8: nop

;}
RECOMP_FUNC void func_0800032C_6DA1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800032C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000330: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000334: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000338: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800033C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000340: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000344: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000348: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0800034C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000354: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000358: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x0800035C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x08000360: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x08000364: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000368: jalr        $t9
    // 0x0800036C: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800036C: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    after_0:
    // 0x08000370: lh          $t6, 0x60($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X60);
    // 0x08000374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000378: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800037C: beq         $t6, $zero, L_08000394
    if (ctx->r14 == 0) {
        // 0x08000380: addiu       $t7, $zero, 0x6
        ctx->r15 = ADD32(0, 0X6);
            goto L_08000394;
    }
    // 0x08000380: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000384: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000388: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0800038C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000390: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
L_08000394:
    // 0x08000394: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000398: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x0800039C: lw          $a1, 0xDC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XDC);
    // 0x080003A0: lw          $a3, 0xE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE0);
    // 0x080003A4: jalr        $t9
    // 0x080003A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x080003AC: beq         $v0, $zero, L_080003D4
    if (ctx->r2 == 0) {
        // 0x080003B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080003D4;
    }
    // 0x080003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003B8: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003C0: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x080003C4: jalr        $t9
    // 0x080003C8: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003C8: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    after_2:
    // 0x080003CC: b           L_0800040C
    // 0x080003D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800040C;
    // 0x080003D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080003D4:
    // 0x080003D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003D8: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080003DC: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x080003E0: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x080003E4: lw          $a1, 0xDC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XDC);
    // 0x080003E8: jalr        $t9
    // 0x080003EC: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003EC: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    after_3:
    // 0x080003F0: bne         $v0, $zero, L_08000408
    if (ctx->r2 != 0) {
        // 0x080003F4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X144) << 16);
            goto L_08000408;
    }
    // 0x080003F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X144) << 16);
    // 0x080003F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000400: jalr        $t9
    // 0x08000404: addiu       $a0, $a0, 0x144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X144));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000404: addiu       $a0, $a0, 0x144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X144));
    after_4:
L_08000408:
    // 0x08000408: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800040C:
    // 0x0800040C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000410: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000414: jr          $ra
    // 0x08000418: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000418: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08002D78_6DCC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002D84: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x08002D88: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x08002D8C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002D90: beq         $v0, $at, L_08002DA8
    if (ctx->r2 == ctx->r1) {
        // 0x08002D94: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_08002DA8;
    }
    // 0x08002D94: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08002D98: addiu       $t6, $v0, -0x20
    ctx->r14 = ADD32(ctx->r2, -0X20);
    // 0x08002D9C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08002DA0: b           L_08002DB4
    // 0x08002DA4: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
        goto L_08002DB4;
    // 0x08002DA4: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
L_08002DA8:
    // 0x08002DA8: lbu         $t9, 0x9A($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9A);
    // 0x08002DAC: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x08002DB0: sb          $t0, 0x9B($t8)
    MEM_B(0X9B, ctx->r24) = ctx->r8;
L_08002DB4:
    // 0x08002DB4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x08002DB8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002DBC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002DC0: lw          $t2, 0x68($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X68);
    // 0x08002DC4: addiu       $a0, $zero, 0x262
    ctx->r4 = ADD32(0, 0X262);
    // 0x08002DC8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08002DCC: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x08002DD0: bne         $t3, $zero, L_08002E10
    if (ctx->r11 != 0) {
        // 0x08002DD4: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08002E10;
    }
    // 0x08002DD4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002DD8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002DDC: jalr        $t9
    // 0x08002DE0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DE0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08002DE4: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x08002DE8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002DEC: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x08002DF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002DF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002DFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2E20) << 16);
    // 0x08002E00: sh          $t4, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r12;
    // 0x08002E04: addiu       $a0, $a0, 0x2E20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2E20));
    // 0x08002E08: jalr        $t9
    // 0x08002E0C: sb          $t6, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E0C: sb          $t6, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r14;
    after_1:
L_08002E10:
    // 0x08002E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002E18: jr          $ra
    // 0x08002E1C: nop

    TRACE_RETURN()
    return;
    // 0x08002E1C: nop

;}
