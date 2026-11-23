#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000C3C_6CFD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000C4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000C50: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x08000C54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C5C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000C60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000C70: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000C74: jalr        $t9
    // 0x08000C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000C7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C80: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C8C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000C90: jalr        $t9
    // 0x08000C94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000C98: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x08000C9C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000CA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000CA4: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08000CA8: mflo        $t8
    ctx->r24 = lo;
    // 0x08000CAC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08000CB0: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08000CB4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000CB8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000CBC: addiu       $t6, $zero, 0x1E1
    ctx->r14 = ADD32(0, 0X1E1);
    // 0x08000CC0: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x08000CC4: sh          $t6, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r14;
    // 0x08000CC8: sb          $t0, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r8;
    // 0x08000CCC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08000CD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CD8: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000CDC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000CE0: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x08000CE4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000CE8: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000CEC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000CF0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000CF4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000CF8: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08000CFC: jalr        $t9
    // 0x08000D00: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D00: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_3:
    // 0x08000D04: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D08: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000D0C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x08000D10: jalr        $t9
    // 0x08000D14: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D14: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x08000D18: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x08000D1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000D20: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D24: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000D28: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08000D2C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x08000D30: jalr        $t9
    // 0x08000D34: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D34: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_5:
    // 0x08000D38: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x08000D3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000D40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D48: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08000D4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XD80) << 16);
    // 0x08000D50: addiu       $a0, $a0, 0xD80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XD80));
    // 0x08000D54: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    // 0x08000D58: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x08000D5C: addiu       $t2, $t1, -0x40
    ctx->r10 = ADD32(ctx->r9, -0X40);
    // 0x08000D60: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000D64: jalr        $t9
    // 0x08000D68: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D68: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    after_6:
    // 0x08000D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000D74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000D78: jr          $ra
    // 0x08000D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000154_6CF234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000158: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800015C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000160: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000164: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000168: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000170: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000174: jalr        $t9
    // 0x08000178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0800017C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000180: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000184: jalr        $t9
    // 0x08000188: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000188: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800018C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08000190: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08000194: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000198: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x0800019C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080001A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001A4: lwc1        $f0, 0xC($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XC);
    // 0x080001A8: lwc1        $f2, 0xC($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080001AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001B0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x080001B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X434) << 16);
    // 0x080001B8: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x080001BC: nop

    // 0x080001C0: bc1t        L_080001D8
    if (c1cs) {
        // 0x080001C4: nop
    
            goto L_080001D8;
    }
    // 0x080001C4: nop

    // 0x080001C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x080001CC: nop

    // 0x080001D0: bc1f        L_080001E8
    if (!c1cs) {
        // 0x080001D4: nop
    
            goto L_080001E8;
    }
    // 0x080001D4: nop

L_080001D8:
    // 0x080001D8: jalr        $t9
    // 0x080001DC: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X434));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001DC: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X434));
    after_2:
    // 0x080001E0: b           L_08000200
    // 0x080001E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000200;
    // 0x080001E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001E8:
    // 0x080001E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X20C) << 16);
    // 0x080001F4: jalr        $t9
    // 0x080001F8: addiu       $a0, $a0, 0x20C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X20C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001F8: addiu       $a0, $a0, 0x20C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X20C));
    after_3:
    // 0x080001FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000200:
    // 0x08000200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000204: jr          $ra
    // 0x08000208: nop

    TRACE_RETURN()
    return;
    // 0x08000208: nop

;}
RECOMP_FUNC void func_08003378_6D2458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800337C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003388: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x0800338C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003390: jalr        $t9
    // 0x08003394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003398: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800339C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080033A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080033A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080033A8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080033AC: jalr        $t9
    // 0x080033B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080033B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080033B4: lh          $t7, 0xD2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD2);
    // 0x080033B8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080033BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080033C0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x080033C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080033C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080033CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080033D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080033D4: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080033D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080033DC: lhu         $a1, 0x16($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X16);
    // 0x080033E0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080033E4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080033E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080033EC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x080033F0: jalr        $t9
    // 0x080033F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080033F4: nop

    after_2:
    // 0x080033F8: lhu         $t8, 0xD4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD4);
    // 0x080033FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003400: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003404: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X342C) << 16);
    // 0x08003408: sh          $zero, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = 0;
    // 0x0800340C: addiu       $a0, $a0, 0x342C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X342C));
    // 0x08003410: jalr        $t9
    // 0x08003414: sh          $t8, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003414: sh          $t8, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r24;
    after_3:
    // 0x08003418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800341C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003424: jr          $ra
    // 0x08003428: nop

    TRACE_RETURN()
    return;
    // 0x08003428: nop

;}
RECOMP_FUNC void func_08001314_6D03F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001314: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001318: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800131C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001320: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08001324: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001328: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800132C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001330: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08001334: jalr        $t9
    // 0x08001338: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001338: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x0800133C: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001340: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08001344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001348: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x0800134C: mfhi        $t7
    ctx->r15 = hi;
    // 0x08001350: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x08001354: bne         $t7, $at, L_080013C0
    if (ctx->r15 != ctx->r1) {
        // 0x08001358: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
            goto L_080013C0;
    }
    // 0x08001358: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x0800135C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001360: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001364: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800136C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001370: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001374: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x08001378: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800137C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08001380: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001384: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08001388: jalr        $t9
    // 0x0800138C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800138C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08001390: beq         $v0, $zero, L_080013C0
    if (ctx->r2 == 0) {
        // 0x08001394: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080013C0;
    }
    // 0x08001394: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001398: lw          $t8, 0xE8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XE8);
    // 0x0800139C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013A0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x080013A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080013A8: ori         $t0, $t8, 0x10
    ctx->r8 = ctx->r24 | 0X10;
    // 0x080013AC: sw          $t0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r8;
    // 0x080013B0: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080013B4: jalr        $t9
    // 0x080013B8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013B8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x080013BC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_080013C0:
    // 0x080013C0: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x080013C4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x080013C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080013CC: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x080013D0: mfhi        $t3
    ctx->r11 = hi;
    // 0x080013D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x080013D8: bne         $t3, $at, L_08001444
    if (ctx->r11 != ctx->r1) {
        // 0x080013DC: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
            goto L_08001444;
    }
    // 0x080013DC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x080013E0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080013E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080013E8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080013EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080013F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013F4: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080013F8: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x080013FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001400: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08001404: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001408: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x0800140C: jalr        $t9
    // 0x08001410: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001410: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x08001414: beq         $v0, $zero, L_08001444
    if (ctx->r2 == 0) {
        // 0x08001418: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08001444;
    }
    // 0x08001418: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800141C: lw          $t4, 0xE8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XE8);
    // 0x08001420: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001424: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08001428: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800142C: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x08001430: sw          $t5, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r13;
    // 0x08001434: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08001438: jalr        $t9
    // 0x0800143C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800143C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x08001440: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_08001444:
    // 0x08001444: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001448: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x0800144C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0XE44) << 16);
    // 0x08001450: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08001454: mfhi        $t8
    ctx->r24 = hi;
    // 0x08001458: addiu       $a1, $a1, 0xE44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0XE44));
    // 0x0800145C: bne         $t8, $zero, L_080014C4
    if (ctx->r24 != 0) {
        // 0x08001460: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080014C4;
    }
    // 0x08001460: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001464: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001468: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800146C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001470: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001474: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001478: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800147C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001480: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08001484: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001488: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x0800148C: jalr        $t9
    // 0x08001490: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001490: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x08001494: beq         $v0, $zero, L_080014C4
    if (ctx->r2 == 0) {
        // 0x08001498: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080014C4;
    }
    // 0x08001498: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800149C: lw          $t0, 0xE8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XE8);
    // 0x080014A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014A4: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x080014A8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080014AC: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080014B0: sw          $t1, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r9;
    // 0x080014B4: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080014B8: jalr        $t9
    // 0x080014BC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080014BC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_6:
    // 0x080014C0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_080014C4:
    // 0x080014C4: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080014C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080014CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080014D0: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x080014D4: bne         $v0, $zero, L_0800150C
    if (ctx->r2 != 0) {
        // 0x080014D8: sh          $t3, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r11;
            goto L_0800150C;
    }
    // 0x080014D8: sh          $t3, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r11;
    // 0x080014DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080014E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080014E4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080014E8: jalr        $t9
    // 0x080014EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080014EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x080014F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014F4: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x080014F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1520) << 16);
    // 0x08001500: sh          $t4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r12;
    // 0x08001504: jalr        $t9
    // 0x08001508: addiu       $a0, $a0, 0x1520
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1520));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001508: addiu       $a0, $a0, 0x1520
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1520));
    after_8:
L_0800150C:
    // 0x0800150C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001510: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08001514: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08001518: jr          $ra
    // 0x0800151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080029C8_6D1AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080029CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080029D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080029D4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080029D8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080029DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080029E0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080029E4: bne         $v0, $zero, L_08002A7C
    if (ctx->r2 != 0) {
        // 0x080029E8: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08002A7C;
    }
    // 0x080029E8: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080029EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080029F0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080029F4: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x080029F8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080029FC: jalr        $t9
    // 0x08002A00: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A00: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08002A04: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08002A08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002A0C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002A10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002A14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A18: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08002A1C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X2494) << 16);
    // 0x08002A20: addiu       $a1, $a1, 0x2494
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X2494));
    // 0x08002A24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08002A28: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08002A2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08002A30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002A34: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002A38: jalr        $t9
    // 0x08002A3C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A3C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08002A40: beq         $v0, $zero, L_08002A68
    if (ctx->r2 == 0) {
        // 0x08002A44: addiu       $t8, $zero, 0x20
        ctx->r24 = ADD32(0, 0X20);
            goto L_08002A68;
    }
    // 0x08002A44: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08002A48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A4C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08002A50: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002A54: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08002A58: jalr        $t9
    // 0x08002A5C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A5C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x08002A60: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002A64: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08002A68:
    // 0x08002A68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2A8C) << 16);
    // 0x08002A74: jalr        $t9
    // 0x08002A78: addiu       $a0, $a0, 0x2A8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2A8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A78: addiu       $a0, $a0, 0x2A8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2A8C));
    after_3:
L_08002A7C:
    // 0x08002A7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002A80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002A84: jr          $ra
    // 0x08002A88: nop

    TRACE_RETURN()
    return;
    // 0x08002A88: nop

;}
RECOMP_FUNC void func_08003F70_6D3050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003F74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F78: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08003F7C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08003F80: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08003F84: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003F88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003F8C: jalr        $t9
    // 0x08003F90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003F90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08003F94: bne         $v0, $zero, L_08004048
    if (ctx->r2 != 0) {
        // 0x08003F98: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08004048;
    }
    // 0x08003F98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F9C: addiu       $t9, $t9, -0x1284
    ctx->r25 = ADD32(ctx->r25, -0X1284);
    // 0x08003FA0: jalr        $t9
    // 0x08003FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003FA8: bnel        $v0, $zero, L_0800404C
    if (ctx->r2 != 0) {
        // 0x08003FAC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_0800404C;
    }
    goto skip_0;
    // 0x08003FAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x08003FB0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08003FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003FBC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003FC0: bne         $v0, $zero, L_08004048
    if (ctx->r2 != 0) {
        // 0x08003FC4: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08004048;
    }
    // 0x08003FC4: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08003FC8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003FCC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003FD0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003FD4: jalr        $t9
    // 0x08003FD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003FD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08003FDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003FE0: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003FE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003FEC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003FF0: jalr        $t9
    // 0x08003FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08003FF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003FFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004000: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x08004004: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004008: addiu       $t9, $t9, -0x6650
    ctx->r25 = ADD32(ctx->r25, -0X6650);
    // 0x0800400C: addiu       $t8, $t8, 0x3C5C
    ctx->r24 = ADD32(ctx->r24, 0X3C5C);
    // 0x08004010: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08004014: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08004018: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x0800401C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004020: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x08004024: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08004028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800402C: jalr        $t9
    // 0x08004030: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004030: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x08004034: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004038: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800403C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X405C) << 16);
    // 0x08004040: jalr        $t9
    // 0x08004044: addiu       $a0, $a0, 0x405C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X405C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004044: addiu       $a0, $a0, 0x405C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X405C));
    after_5:
L_08004048:
    // 0x08004048: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800404C:
    // 0x0800404C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08004050: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08004054: jr          $ra
    // 0x08004058: nop

    TRACE_RETURN()
    return;
    // 0x08004058: nop

;}
RECOMP_FUNC void func_0800405C_6D313C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800405C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004068: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800406C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004070: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004074: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004078: beq         $t7, $zero, L_080040C8
    if (ctx->r15 == 0) {
        // 0x0800407C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080040C8;
    }
    // 0x0800407C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004080: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08004084: jalr        $t9
    // 0x08004088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800408C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004090: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800409C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080040A0: jalr        $t9
    // 0x080040A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080040A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080040A8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080040AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080040B0: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x080040B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080040B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3F70) << 16);
    // 0x080040BC: addiu       $a0, $a0, 0x3F70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3F70));
    // 0x080040C0: jalr        $t9
    // 0x080040C4: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080040C4: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    after_2:
L_080040C8:
    // 0x080040C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080040CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080040D0: jr          $ra
    // 0x080040D4: nop

    TRACE_RETURN()
    return;
    // 0x080040D4: nop

;}
RECOMP_FUNC void func_08001294_6D0374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001294: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800129C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080012A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080012A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080012A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012AC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080012B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080012B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080012B8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080012BC: jalr        $t9
    // 0x080012C0: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012C0: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x080012C4: bne         $v0, $zero, L_08001300
    if (ctx->r2 != 0) {
        // 0x080012C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001300;
    }
    // 0x080012C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080012D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080012D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080012D8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080012DC: jalr        $t9
    // 0x080012E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080012E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080012E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012E8: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x080012EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1314) << 16);
    // 0x080012F4: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080012F8: jalr        $t9
    // 0x080012FC: addiu       $a0, $a0, 0x1314
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1314));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012FC: addiu       $a0, $a0, 0x1314
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1314));
    after_2:
L_08001300:
    // 0x08001300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800130C: jr          $ra
    // 0x08001310: nop

    TRACE_RETURN()
    return;
    // 0x08001310: nop

;}
RECOMP_FUNC void func_080010D0_6D01B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080010D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080010DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080010E0: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x080010E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080010F0: lui         $t7, 0x2AF
    ctx->r15 = S32(0X2AF << 16);
    // 0x080010F4: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(23, 0XC00) << 16);
    // 0x080010F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010FC: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x08001100: ori         $t7, $t7, 0x7E3
    ctx->r15 = ctx->r15 | 0X7E3;
    // 0x08001104: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x08001108: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0800110C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08001110: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08001114: addiu       $t3, $t3, 0xC00
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(23, 0XC00));
    // 0x08001118: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800111C: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08001120: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08001124: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08001128: sb          $t0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r8;
    // 0x0800112C: sb          $t1, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r9;
    // 0x08001130: sb          $t2, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r10;
    // 0x08001134: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x08001138: jalr        $t9
    // 0x0800113C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800113C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08001140: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001144: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08001148: jalr        $t9
    // 0x0800114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08001150: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001154: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800115C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08001160: jalr        $t9
    // 0x08001164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08001168: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800116C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001170: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001174: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800117C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001180: jalr        $t9
    // 0x08001184: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001184: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08001188: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800118C: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08001190: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001194: addiu       $a1, $a1, 0x34A0
    ctx->r5 = ADD32(ctx->r5, 0X34A0);
    // 0x08001198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800119C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080011A0: jalr        $t9
    // 0x080011A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080011A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x080011A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011AC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080011B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011B4: jalr        $t9
    // 0x080011B8: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080011B8: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_6:
    // 0x080011BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011C0: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080011C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080011CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080011D0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x080011D4: jalr        $t9
    // 0x080011D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080011D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x080011DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1204) << 16);
    // 0x080011E8: jalr        $t9
    // 0x080011EC: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080011EC: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    after_8:
    // 0x080011F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080011F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080011F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080011FC: jr          $ra
    // 0x08001200: nop

    TRACE_RETURN()
    return;
    // 0x08001200: nop

;}
RECOMP_FUNC void func_08000494_6CF574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000498: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800049C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080004A0: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x080004A4: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x080004A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080004AC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080004B0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080004B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004B8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080004BC: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080004C0: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x080004C4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080004C8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080004CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080004D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x080004D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080004D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080004DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080004E0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080004E4: jalr        $t9
    // 0x080004E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004E8: nop

    after_0:
    // 0x080004EC: bne         $v0, $zero, L_08000520
    if (ctx->r2 != 0) {
        // 0x080004F0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000520;
    }
    // 0x080004F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080004F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004F8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000500: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000504: jalr        $t9
    // 0x08000508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800050C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000510: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000514: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X530) << 16);
    // 0x08000518: jalr        $t9
    // 0x0800051C: addiu       $a0, $a0, 0x530
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X530));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800051C: addiu       $a0, $a0, 0x530
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X530));
    after_2:
L_08000520:
    // 0x08000520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000528: jr          $ra
    // 0x0800052C: nop

    TRACE_RETURN()
    return;
    // 0x0800052C: nop

;}
RECOMP_FUNC void func_08001204_6D02E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001208: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800120C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001210: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001214: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08001218: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800121C: jalr        $t9
    // 0x08001220: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001220: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_0:
    // 0x08001224: beq         $v0, $zero, L_08001274
    if (ctx->r2 == 0) {
        // 0x08001228: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_08001274;
    }
    // 0x08001228: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800122C: lw          $t6, 0x68($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X68);
    // 0x08001230: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1294) << 16);
    // 0x08001234: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08001238: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x0800123C: beq         $t7, $zero, L_08001274
    if (ctx->r15 == 0) {
        // 0x08001240: addiu       $a0, $a0, 0x1294
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1294));
            goto L_08001274;
    }
    // 0x08001240: addiu       $a0, $a0, 0x1294
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1294));
    // 0x08001244: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08001248: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800124C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001250: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08001254: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001258: bgez        $t0, L_0800126C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800125C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_0800126C;
    }
    // 0x0800125C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001264: nop

    // 0x08001268: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_0800126C:
    // 0x0800126C: jalr        $t9
    // 0x08001270: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001270: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    after_1:
L_08001274:
    // 0x08001274: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001278: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800127C: jalr        $t9
    // 0x08001280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08001284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800128C: jr          $ra
    // 0x08001290: nop

    TRACE_RETURN()
    return;
    // 0x08001290: nop

;}
RECOMP_FUNC void func_08002418_6D14F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800241C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002428: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800242C: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x08002430: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002434: jalr        $t9
    // 0x08002438: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002438: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800243C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002440: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002444: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002448: jalr        $t9
    // 0x0800244C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800244C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08002450: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002454: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002458: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002460: jalr        $t9
    // 0x08002464: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002464: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08002468: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800246C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002478: jalr        $t9
    // 0x0800247C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800247C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002484: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800248C: jr          $ra
    // 0x08002490: nop

    TRACE_RETURN()
    return;
    // 0x08002490: nop

;}
RECOMP_FUNC void func_08002EF4_6D1FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002EFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F00: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002F04: lui         $a1, 0x3FAA
    ctx->r5 = S32(0X3FAA << 16);
    // 0x08002F08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08002F0C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08002F10: bne         $t7, $zero, L_08002F48
    if (ctx->r15 != 0) {
        // 0x08002F14: ori         $a1, $a1, 0xAAAB
        ctx->r5 = ctx->r5 | 0XAAAB;
            goto L_08002F48;
    }
    // 0x08002F14: ori         $a1, $a1, 0xAAAB
    ctx->r5 = ctx->r5 | 0XAAAB;
    // 0x08002F18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F1C: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08002F20: jalr        $t9
    // 0x08002F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08002F28: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002F2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F30: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08002F34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2F58) << 16);
    // 0x08002F3C: addiu       $a0, $a0, 0x2F58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2F58));
    // 0x08002F40: jalr        $t9
    // 0x08002F44: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F44: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    after_1:
L_08002F48:
    // 0x08002F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F50: jr          $ra
    // 0x08002F54: nop

    TRACE_RETURN()
    return;
    // 0x08002F54: nop

;}
RECOMP_FUNC void func_0800020C_6CF2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800020C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X4984) << 16);
    // 0x08000210: lwc1        $f0, 0x4984($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(23, 0X4984));
    // 0x08000214: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000218: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x0800021C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000220: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000224: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000228: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800022C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000230: addiu       $t9, $t9, -0x2A54
    ctx->r25 = ADD32(ctx->r25, -0X2A54);
    // 0x08000234: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x08000238: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800023C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000244: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08000248: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0800024C: jalr        $t9
    // 0x08000250: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000250: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000254: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000258: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000264: jalr        $t9
    // 0x08000268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x0800026C: lhu         $t6, 0xD4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000274: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x08000278: beq         $t6, $zero, L_080002A0
    if (ctx->r14 == 0) {
        // 0x0800027C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080002A0;
    }
    // 0x0800027C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000280: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000284: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08000288: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x0800028C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08000290: jalr        $t9
    // 0x08000294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000298: b           L_080002AC
    // 0x0800029C: nop

        goto L_080002AC;
    // 0x0800029C: nop

L_080002A0:
    // 0x080002A0: addiu       $t9, $t9, -0x16DC
    ctx->r25 = ADD32(ctx->r25, -0X16DC);
    // 0x080002A4: jalr        $t9
    // 0x080002A8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002A8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_3:
L_080002AC:
    // 0x080002AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002B0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080002B4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080002B8: jalr        $t9
    // 0x080002BC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002BC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_4:
    // 0x080002C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x080002C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002C8: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x080002D4: jalr        $t9
    // 0x080002D8: sh          $v0, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002D8: sh          $v0, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r2;
    after_5:
    // 0x080002DC: beq         $v0, $zero, L_080002FC
    if (ctx->r2 == 0) {
        // 0x080002E0: addiu       $t8, $zero, 0x1E
        ctx->r24 = ADD32(0, 0X1E);
            goto L_080002FC;
    }
    // 0x080002E0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080002E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X310) << 16);
    // 0x080002F0: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080002F4: jalr        $t9
    // 0x080002F8: addiu       $a0, $a0, 0x310
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X310));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080002F8: addiu       $a0, $a0, 0x310
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X310));
    after_6:
L_080002FC:
    // 0x080002FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000300: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000304: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000308: jr          $ra
    // 0x0800030C: nop

    TRACE_RETURN()
    return;
    // 0x0800030C: nop

;}
RECOMP_FUNC void func_08002C58_6D1D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002C5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002C68: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08002C6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002C70: jalr        $t9
    // 0x08002C74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002C78: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08002C7C: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08002C80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C84: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x08002C88: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08002C8C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08002C90: addiu       $t1, $zero, 0xE1
    ctx->r9 = ADD32(0, 0XE1);
    // 0x08002C94: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08002C98: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002C9C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08002CA0: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x08002CA4: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x08002CA8: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x08002CAC: sb          $t2, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r10;
    // 0x08002CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CB4: jalr        $t9
    // 0x08002CB8: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CB8: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    after_1:
    // 0x08002CBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002CC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002CCC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002CD0: jalr        $t9
    // 0x08002CD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002CD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08002CD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CDC: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002CE0: jalr        $t9
    // 0x08002CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002CE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CEC: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CF4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002CF8: jalr        $t9
    // 0x08002CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08002D00: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08002D04: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002D08: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08002D0C: addiu       $a1, $a1, 0x3D10
    ctx->r5 = ADD32(ctx->r5, 0X3D10);
    // 0x08002D10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002D14: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08002D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08002D20: jalr        $v0
    // 0x08002D24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08002D24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x08002D28: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08002D2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08002D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D34: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08002D38: jalr        $v0
    // 0x08002D3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08002D3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08002D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D44: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08002D48: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X47A0) << 16);
    // 0x08002D4C: addiu       $a1, $a1, 0x47A0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X47A0));
    // 0x08002D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D54: jalr        $t9
    // 0x08002D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08002D5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D60: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002D6C: jalr        $t9
    // 0x08002D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x08002D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002D80: jr          $ra
    // 0x08002D84: nop

    TRACE_RETURN()
    return;
    // 0x08002D84: nop

;}
RECOMP_FUNC void func_08001720_6D0800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001724: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800172C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001730: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08001734: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001738: jalr        $t9
    // 0x0800173C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800173C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001740: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08001744: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08001748: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800174C: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x08001750: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x08001754: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08001758: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x0800175C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001760: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001764: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08001768: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x0800176C: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x08001770: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x08001774: sb          $t2, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r10;
    // 0x08001778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800177C: jalr        $t9
    // 0x08001780: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001780: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    after_1:
    // 0x08001784: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001788: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800178C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001790: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800179C: jalr        $t9
    // 0x080017A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080017A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080017A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017A8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080017AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017B0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x080017B4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x080017B8: jalr        $t9
    // 0x080017BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080017BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080017C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017C4: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080017C8: jalr        $t9
    // 0x080017CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080017CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080017D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017D4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080017D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080017E0: jalr        $t9
    // 0x080017E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080017E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x080017E8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080017EC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080017F0: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x080017F4: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x080017F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080017FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08001800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001804: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001808: jalr        $v0
    // 0x0800180C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0800180C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08001810: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08001814: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08001818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800181C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001820: jalr        $v0
    // 0x08001824: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08001824: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08001828: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x0800182C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001830: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08001834: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x08001838: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X4760) << 16);
    // 0x0800183C: addiu       $a1, $a1, 0x4760
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X4760));
    // 0x08001840: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08001844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800184C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x08001850: jalr        $t9
    // 0x08001854: sh          $t5, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001854: sh          $t5, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r13;
    after_8:
    // 0x08001858: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800185C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001868: jalr        $t9
    // 0x0800186C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800186C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x08001870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800187C: jr          $ra
    // 0x08001880: nop

    TRACE_RETURN()
    return;
    // 0x08001880: nop

;}
RECOMP_FUNC void func_080016A8_6D0788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016B0: lh          $t6, 0xB4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XB4);
    // 0x080016B4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080016B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080016BC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x080016C0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080016C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080016C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080016CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016D0: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x080016D4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x080016D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080016DC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080016E0: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x080016E4: nop

    // 0x080016E8: bc1f        L_08001710
    if (!c1cs) {
        // 0x080016EC: nop
    
            goto L_08001710;
    }
    // 0x080016EC: nop

    // 0x080016F0: jalr        $t9
    // 0x080016F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080016F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080016FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08001700: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08001704: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08001708: b           L_08001710
    // 0x0800170C: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
        goto L_08001710;
    // 0x0800170C: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
L_08001710:
    // 0x08001710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001718: jr          $ra
    // 0x0800171C: nop

    TRACE_RETURN()
    return;
    // 0x0800171C: nop

;}
RECOMP_FUNC void func_08003E78_6D2F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003E7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003E84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003E88: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08003E8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003E90: jalr        $t9
    // 0x08003E94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003E98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003E9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003EA8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003EAC: jalr        $t9
    // 0x08003EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003EB4: andi        $t6, $s0, 0x3FF
    ctx->r14 = ctx->r16 & 0X3FF;
    // 0x08003EB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08003EBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08003EC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08003EC4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x08003EC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08003ECC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x08003ED0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08003ED4: srl         $t8, $t7, 10
    ctx->r24 = S32(U32(ctx->r15) >> 10);
    // 0x08003ED8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003EDC: addiu       $t0, $t8, 0x2
    ctx->r8 = ADD32(ctx->r24, 0X2);
    // 0x08003EE0: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003EE4: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08003EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003EF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003EF4: jalr        $t9
    // 0x08003EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08003EFC: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x08003F00: lui         $t1, 0x2A
    ctx->r9 = S32(0X2A << 16);
    // 0x08003F04: ori         $t1, $t1, 0xCE3
    ctx->r9 = ctx->r9 | 0XCE3;
    // 0x08003F08: beq         $v0, $zero, L_08003F24
    if (ctx->r2 == 0) {
        // 0x08003F0C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X3F70) << 16);
            goto L_08003F24;
    }
    // 0x08003F0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3F70) << 16);
    // 0x08003F10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003F14: beq         $v0, $at, L_08003F40
    if (ctx->r2 == ctx->r1) {
        // 0x08003F18: lui         $t2, 0x2A
        ctx->r10 = S32(0X2A << 16);
            goto L_08003F40;
    }
    // 0x08003F18: lui         $t2, 0x2A
    ctx->r10 = S32(0X2A << 16);
    // 0x08003F1C: b           L_08003F60
    // 0x08003F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003F60;
    // 0x08003F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003F24:
    // 0x08003F24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F28: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F2C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08003F30: jalr        $t9
    // 0x08003F34: addiu       $a0, $a0, 0x3F70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3F70));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003F34: addiu       $a0, $a0, 0x3F70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3F70));
    after_3:
    // 0x08003F38: b           L_08003F60
    // 0x08003F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003F60;
    // 0x08003F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003F40:
    // 0x08003F40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F44: ori         $t2, $t2, 0xEE3
    ctx->r10 = ctx->r10 | 0XEE3;
    // 0x08003F48: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X40D8) << 16);
    // 0x08003F50: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08003F54: jalr        $t9
    // 0x08003F58: addiu       $a0, $a0, 0x40D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X40D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003F58: addiu       $a0, $a0, 0x40D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X40D8));
    after_4:
    // 0x08003F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003F60:
    // 0x08003F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003F68: jr          $ra
    // 0x08003F6C: nop

    TRACE_RETURN()
    return;
    // 0x08003F6C: nop

;}
RECOMP_FUNC void func_08002944_6D1A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002944: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002948: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800294C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002950: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002954: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002958: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800295C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002960: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002964: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08002968: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800296C: jalr        $t9
    // 0x08002970: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002970: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002974: bne         $v0, $zero, L_080029B4
    if (ctx->r2 != 0) {
        // 0x08002978: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080029B4;
    }
    // 0x08002978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800297C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002980: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002984: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002988: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800298C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002990: jalr        $t9
    // 0x08002994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002998: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800299C: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x080029A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X29C8) << 16);
    // 0x080029A8: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080029AC: jalr        $t9
    // 0x080029B0: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X29C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080029B0: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X29C8));
    after_2:
L_080029B4:
    // 0x080029B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080029B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080029BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080029C0: jr          $ra
    // 0x080029C4: nop

    TRACE_RETURN()
    return;
    // 0x080029C4: nop

;}
RECOMP_FUNC void func_080042E4_6D33C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080042E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080042E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080042EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080042F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080042F4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080042F8: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x080042FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004300: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004304: bne         $v0, $zero, L_08004328
    if (ctx->r2 != 0) {
        // 0x08004308: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004328;
    }
    // 0x08004308: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800430C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004310: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08004314: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004318: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x0800431C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X40D8) << 16);
    // 0x08004320: jalr        $t9
    // 0x08004324: addiu       $a0, $a0, 0x40D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X40D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004324: addiu       $a0, $a0, 0x40D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X40D8));
    after_0:
L_08004328:
    // 0x08004328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800432C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004330: jr          $ra
    // 0x08004334: nop

    TRACE_RETURN()
    return;
    // 0x08004334: nop

;}
RECOMP_FUNC void func_08000348_6D3DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800034C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000354: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000358: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x0800035C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000360: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x08000364: bne         $t6, $at, L_0800038C
    if (ctx->r14 != ctx->r1) {
        // 0x08000368: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_0800038C;
    }
    // 0x08000368: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800036C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000370: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000374: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000378: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800037C: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x08000380: jalr        $t9
    // 0x08000384: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000384: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000388: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_0800038C:
    // 0x0800038C: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000390: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(24, 0X8A0) << 16);
    // 0x08000394: ldc1        $f0, 0x8A0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(24, 0X8A0));
    // 0x08000398: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x0800039C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080003A0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080003A4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x080003A8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080003AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003B0: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x080003B4: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x080003B8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080003BC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080003C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080003C4: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x080003C8: bne         $v0, $zero, L_080003F0
    if (ctx->r2 != 0) {
        // 0x080003CC: swc1        $f6, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
            goto L_080003F0;
    }
    // 0x080003CC: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x080003D0: jalr        $t9
    // 0x080003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080003D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003DC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003E8: jalr        $t9
    // 0x080003EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_080003F0:
    // 0x080003F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080003F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080003F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080003FC: jr          $ra
    // 0x08000400: nop

    TRACE_RETURN()
    return;
    // 0x08000400: nop

;}
RECOMP_FUNC void func_080007E8_6D4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007F0: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x080007F4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080007F8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080007FC: beq         $v0, $zero, L_0800080C
    if (ctx->r2 == 0) {
        // 0x08000800: addiu       $t6, $v0, 0x20
        ctx->r14 = ADD32(ctx->r2, 0X20);
            goto L_0800080C;
    }
    // 0x08000800: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x08000804: b           L_08000810
    // 0x08000808: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
        goto L_08000810;
    // 0x08000808: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
L_0800080C:
    // 0x0800080C: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
L_08000810:
    // 0x08000810: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000814: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x08000818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800081C: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x08000820: bne         $t7, $zero, L_08000844
    if (ctx->r15 != 0) {
        // 0x08000824: and         $t8, $v0, $at
        ctx->r24 = ctx->r2 & ctx->r1;
            goto L_08000844;
    }
    // 0x08000824: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x08000828: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x0800082C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000830: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x08000834: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000838: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x0800083C: jalr        $t9
    // 0x08000840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08000844:
    // 0x08000844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800084C: jr          $ra
    // 0x08000850: nop

    TRACE_RETURN()
    return;
    // 0x08000850: nop

;}
RECOMP_FUNC void func_080004FC_6D3F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000500: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000508: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x0800050C: jalr        $t9
    // 0x08000510: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000510: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000514: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000518: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800051C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X538) << 16);
    // 0x08000520: jalr        $t9
    // 0x08000524: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X538));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000524: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X538));
    after_1:
    // 0x08000528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800052C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000530: jr          $ra
    // 0x08000534: nop

    TRACE_RETURN()
    return;
    // 0x08000534: nop

;}
RECOMP_FUNC void func_08000000_6D3A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000010: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000018: jalr        $t9
    // 0x0800001C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000020: lw          $t2, 0xD0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD0);
    // 0x08000024: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08000028: lui         $t1, 0x800
    ctx->r9 = S32(RELOC_HI16(24, 0X4FC) << 16);
    // 0x0800002C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000030: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x08000034: ori         $t6, $t6, 0x27E1
    ctx->r14 = ctx->r14 | 0X27E1;
    // 0x08000038: addiu       $t7, $zero, 0xE1
    ctx->r15 = ADD32(0, 0XE1);
    // 0x0800003C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08000040: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08000044: addiu       $t1, $t1, 0x4FC
    ctx->r9 = ADD32(ctx->r9, (int16_t)RELOC_LO16(24, 0X4FC));
    // 0x08000048: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800004C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000050: sb          $v0, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r2;
    // 0x08000054: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x08000058: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x0800005C: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08000060: sb          $v0, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r2;
    // 0x08000064: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x08000068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800006C: jalr        $t9
    // 0x08000070: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000070: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
    after_1:
    // 0x08000074: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000078: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000080: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08000084: addiu       $a2, $zero, 0x10E
    ctx->r6 = ADD32(0, 0X10E);
    // 0x08000088: jalr        $t9
    // 0x0800008C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800008C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000090: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000094: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800009C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080000A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080000A4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x080000A8: jalr        $t9
    // 0x080000AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x080000B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x080000C0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x080000C4: jalr        $t9
    // 0x080000C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080000CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000DC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080000E0: jalr        $t9
    // 0x080000E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x080000E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000EC: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x080000F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000FC: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000104: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x08000108: jalr        $t9
    // 0x0800010C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800010C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000110: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000114: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000118: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x0800011C: addiu       $a1, $a1, 0x4B10
    ctx->r5 = ADD32(ctx->r5, 0X4B10);
    // 0x08000120: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000124: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800012C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000130: jalr        $v0
    // 0x08000134: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08000134: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x08000138: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0800013C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000144: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000148: jalr        $v0
    // 0x0800014C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x0800014C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08000150: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000154: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000158: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(24, 0X860) << 16);
    // 0x0800015C: addiu       $a1, $a1, 0x860
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(24, 0X860));
    // 0x08000160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000164: jalr        $t9
    // 0x08000168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x0800016C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000170: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800017C: jalr        $t9
    // 0x08000180: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000180: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x08000184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000188: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800018C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000190: jr          $ra
    // 0x08000194: nop

    TRACE_RETURN()
    return;
    // 0x08000194: nop

;}
RECOMP_FUNC void func_08000404_6D3E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000408: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800040C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000410: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000414: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800041C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000420: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000424: jalr        $t9
    // 0x08000428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x0800042C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000430: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000434: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000438: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x0800043C: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08000440: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08000444: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000448: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x0800044C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000450: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08000454: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08000458: jalr        $t9
    // 0x0800045C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800045C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x08000460: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000464: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000468: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X484) << 16);
    // 0x0800046C: jalr        $t9
    // 0x08000470: addiu       $a0, $a0, 0x484
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X484));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000470: addiu       $a0, $a0, 0x484
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X484));
    after_2:
    // 0x08000474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800047C: jr          $ra
    // 0x08000480: nop

    TRACE_RETURN()
    return;
    // 0x08000480: nop

;}
RECOMP_FUNC void func_08000240_6D3CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000248: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800024C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000254: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08000258: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800025C: bne         $v0, $zero, L_080002B4
    if (ctx->r2 != 0) {
        // 0x08000260: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080002B4;
    }
    // 0x08000260: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000264: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000268: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800026C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000270: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000274: jalr        $t9
    // 0x08000278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800027C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000280: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08000284: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000288: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x0800028C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08000290: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08000294: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x08000298: jalr        $t9
    // 0x0800029C: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800029C: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    after_1:
    // 0x080002A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X2C4) << 16);
    // 0x080002AC: jalr        $t9
    // 0x080002B0: addiu       $a0, $a0, 0x2C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X2C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002B0: addiu       $a0, $a0, 0x2C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X2C4));
    after_2:
L_080002B4:
    // 0x080002B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002BC: jr          $ra
    // 0x080002C0: nop

    TRACE_RETURN()
    return;
    // 0x080002C0: nop

;}
RECOMP_FUNC void func_08000538_6D3FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800053C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000544: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000548: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800054C: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x08000550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000554: jalr        $t9
    // 0x08000558: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000558: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x0800055C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000560: addiu       $t9, $t9, -0x4B04
    ctx->r25 = ADD32(ctx->r25, -0X4B04);
    // 0x08000564: jalr        $t9
    // 0x08000568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800056C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000570: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000578: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800057C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000580: jalr        $t9
    // 0x08000584: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000584: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000588: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x0800058C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000590: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x08000594: addiu       $t7, $zero, 0x1E1
    ctx->r15 = ADD32(0, 0X1E1);
    // 0x08000598: sb          $t6, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r14;
    // 0x0800059C: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x080005A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080005A4: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x080005A8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080005AC: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080005B0: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080005B4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080005B8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080005BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005C0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080005C4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080005C8: jalr        $t9
    // 0x080005CC: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005CC: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_3:
    // 0x080005D0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080005D4: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080005D8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x080005DC: jalr        $t9
    // 0x080005E0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080005E0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x080005E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080005E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080005EC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080005F0: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080005F4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x080005F8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x080005FC: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08000600: jalr        $t9
    // 0x08000604: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000604: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_5:
    // 0x08000608: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800060C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000610: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000614: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000618: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0800061C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000620: addiu       $a1, $a1, 0x5B10
    ctx->r5 = ADD32(ctx->r5, 0X5B10);
    // 0x08000624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000628: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0800062C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08000630: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x08000634: jalr        $t9
    // 0x08000638: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000638: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    after_6:
    // 0x0800063C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000640: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000644: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X664) << 16);
    // 0x08000648: jalr        $t9
    // 0x0800064C: addiu       $a0, $a0, 0x664
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X664));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800064C: addiu       $a0, $a0, 0x664
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X664));
    after_7:
    // 0x08000650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000654: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000658: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x0800065C: jr          $ra
    // 0x08000660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000484_6D3F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000488: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800048C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000494: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08000498: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800049C: jalr        $t9
    // 0x080004A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080004A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004A8: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080004AC: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080004B0: jalr        $t9
    // 0x080004B4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004B4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x080004B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080004BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004C0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004C8: jalr        $t9
    // 0x080004CC: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004CC: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x080004D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004D4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080004E0: jalr        $t9
    // 0x080004E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080004E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080004EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080004F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080004F4: jr          $ra
    // 0x080004F8: nop

    TRACE_RETURN()
    return;
    // 0x080004F8: nop

;}
RECOMP_FUNC void func_080001EC_6D3C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001FC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000204: jalr        $t9
    // 0x08000208: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000208: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x0800020C: bne         $v0, $zero, L_08000230
    if (ctx->r2 != 0) {
        // 0x08000210: addiu       $t6, $zero, 0x28
        ctx->r14 = ADD32(0, 0X28);
            goto L_08000230;
    }
    // 0x08000210: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08000214: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000218: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800021C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000220: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X240) << 16);
    // 0x08000224: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X240));
    // 0x08000228: jalr        $t9
    // 0x0800022C: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800022C: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_08000230:
    // 0x08000230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000238: jr          $ra
    // 0x0800023C: nop

    TRACE_RETURN()
    return;
    // 0x0800023C: nop

;}
RECOMP_FUNC void func_080002C4_6D3D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080002D0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080002D4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x080002D8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080002DC: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x080002E0: bne         $t7, $at, L_08000308
    if (ctx->r15 != ctx->r1) {
        // 0x080002E4: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_08000308;
    }
    // 0x080002E4: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x080002E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002EC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080002F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080002F4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080002F8: jalr        $t9
    // 0x080002FC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002FC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000300: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08000304: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
L_08000308:
    // 0x08000308: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x0800030C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08000310: bne         $v0, $zero, L_08000338
    if (ctx->r2 != 0) {
        // 0x08000314: sh          $t0, 0x8A($t1)
        MEM_H(0X8A, ctx->r9) = ctx->r8;
            goto L_08000338;
    }
    // 0x08000314: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    // 0x08000318: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x0800031C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000320: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08000324: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000328: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X348) << 16);
    // 0x0800032C: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X348));
    // 0x08000330: jalr        $t9
    // 0x08000334: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000334: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    after_1:
L_08000338:
    // 0x08000338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800033C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000340: jr          $ra
    // 0x08000344: nop

    TRACE_RETURN()
    return;
    // 0x08000344: nop

;}
RECOMP_FUNC void func_08000720_6D41B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000724: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000728: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800072C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000730: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000734: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000738: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800073C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000740: bne         $v0, $zero, L_080007D4
    if (ctx->r2 != 0) {
        // 0x08000744: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080007D4;
    }
    // 0x08000744: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000748: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800074C: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000750: addiu       $a1, $a1, 0x4B10
    ctx->r5 = ADD32(ctx->r5, 0X4B10);
    // 0x08000754: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000758: jalr        $t9
    // 0x0800075C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800075C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x08000760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000764: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000768: jalr        $t9
    // 0x0800076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000770: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000774: addiu       $t9, $t9, -0x4B04
    ctx->r25 = ADD32(ctx->r25, -0X4B04);
    // 0x08000778: jalr        $t9
    // 0x0800077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000780: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x08000784: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000788: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800078C: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08000790: mflo        $t8
    ctx->r24 = lo;
    // 0x08000794: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08000798: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x0800079C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080007A0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080007A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007A8: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x080007AC: addiu       $t1, $zero, 0xE1
    ctx->r9 = ADD32(0, 0XE1);
    // 0x080007B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007B4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080007B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X7E8) << 16);
    // 0x080007BC: sb          $t0, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r8;
    // 0x080007C0: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x080007C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080007C8: addiu       $a0, $a0, 0x7E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X7E8));
    // 0x080007CC: jalr        $t9
    // 0x080007D0: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007D0: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    after_3:
L_080007D4:
    // 0x080007D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080007D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080007DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080007E0: jr          $ra
    // 0x080007E4: nop

    TRACE_RETURN()
    return;
    // 0x080007E4: nop

;}
RECOMP_FUNC void func_08000198_6D3C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800019C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080001A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001AC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080001B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080001B4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080001B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080001BC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080001C0: jalr        $t9
    // 0x080001C4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001C4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x080001C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X1EC) << 16);
    // 0x080001D4: jalr        $t9
    // 0x080001D8: addiu       $a0, $a0, 0x1EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X1EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001D8: addiu       $a0, $a0, 0x1EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X1EC));
    after_1:
    // 0x080001DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001E4: jr          $ra
    // 0x080001E8: nop

    TRACE_RETURN()
    return;
    // 0x080001E8: nop

;}
RECOMP_FUNC void func_08000664_6D40F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000664: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800066C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000670: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x08000674: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x08000678: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800067C: beq         $v0, $at, L_08000694
    if (ctx->r2 == ctx->r1) {
        // 0x08000680: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_08000694;
    }
    // 0x08000680: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000684: addiu       $t6, $v0, -0x20
    ctx->r14 = ADD32(ctx->r2, -0X20);
    // 0x08000688: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x0800068C: b           L_080006A0
    // 0x08000690: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
        goto L_080006A0;
    // 0x08000690: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
L_08000694:
    // 0x08000694: lbu         $t8, 0x9A($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X9A);
    // 0x08000698: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x0800069C: sb          $t9, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = ctx->r25;
L_080006A0:
    // 0x080006A0: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x080006A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080006A8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080006AC: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x080006B0: bne         $t1, $zero, L_0800070C
    if (ctx->r9 != 0) {
        // 0x080006B4: addiu       $a0, $zero, 0x262
        ctx->r4 = ADD32(0, 0X262);
            goto L_0800070C;
    }
    // 0x080006B4: addiu       $a0, $zero, 0x262
    ctx->r4 = ADD32(0, 0X262);
    // 0x080006B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006BC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080006C0: jalr        $t9
    // 0x080006C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x080006C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080006CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080006D0: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x080006D4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080006D8: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080006E4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080006E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080006EC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x080006F0: jalr        $t9
    // 0x080006F4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006F4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x080006F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000700: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(24, 0X720) << 16);
    // 0x08000704: jalr        $t9
    // 0x08000708: addiu       $a0, $a0, 0x720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X720));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000708: addiu       $a0, $a0, 0x720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(24, 0X720));
    after_2:
L_0800070C:
    // 0x0800070C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000710: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000718: jr          $ra
    // 0x0800071C: nop

    TRACE_RETURN()
    return;
    // 0x0800071C: nop

;}
RECOMP_FUNC void func_080006EC_6D4A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080006F8: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x080006FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000700: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000704: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000708: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x0800070C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000710: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08000714: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08000718: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x0800071C: lhu         $t8, 0x16($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X16);
    // 0x08000720: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08000724: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000728: beq         $v0, $zero, L_08000750
    if (ctx->r2 == 0) {
        // 0x0800072C: sh          $t8, 0xD0($a0)
        MEM_H(0XD0, ctx->r4) = ctx->r24;
            goto L_08000750;
    }
    // 0x0800072C: sh          $t8, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r24;
    // 0x08000730: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08000734: beq         $v0, $v1, L_0800076C
    if (ctx->r2 == ctx->r3) {
        // 0x08000738: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800076C;
    }
    // 0x08000738: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800073C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000740: beq         $v0, $at, L_080007A8
    if (ctx->r2 == ctx->r1) {
        // 0x08000744: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080007A8;
    }
    // 0x08000744: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000748: b           L_080007D0
    // 0x0800074C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080007D0;
    // 0x0800074C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000750:
    // 0x08000750: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000754: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000758: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X534) << 16);
    // 0x0800075C: jalr        $t9
    // 0x08000760: addiu       $a0, $a0, 0x534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X534));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000760: addiu       $a0, $a0, 0x534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X534));
    after_0:
    // 0x08000764: b           L_080007D0
    // 0x08000768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080007D0;
    // 0x08000768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800076C:
    // 0x0800076C: lbu         $v0, 0xD5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD5);
    // 0x08000770: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000774: beq         $v0, $zero, L_08000794
    if (ctx->r2 == 0) {
        // 0x08000778: nop
    
            goto L_08000794;
    }
    // 0x08000778: nop

    // 0x0800077C: bne         $v1, $v0, L_08000790
    if (ctx->r3 != ctx->r2) {
        // 0x08000780: addiu       $t1, $zero, 0x64
        ctx->r9 = ADD32(0, 0X64);
            goto L_08000790;
    }
    // 0x08000780: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x08000784: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x08000788: b           L_08000794
    // 0x0800078C: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
        goto L_08000794;
    // 0x0800078C: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
L_08000790:
    // 0x08000790: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
L_08000794:
    // 0x08000794: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X594) << 16);
    // 0x08000798: jalr        $t9
    // 0x0800079C: addiu       $a0, $a0, 0x594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X594));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800079C: addiu       $a0, $a0, 0x594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X594));
    after_1:
    // 0x080007A0: b           L_080007D0
    // 0x080007A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080007D0;
    // 0x080007A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080007A8:
    // 0x080007A8: lbu         $t2, 0xD5($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XD5);
    // 0x080007AC: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x080007B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007B4: bne         $t2, $zero, L_080007C0
    if (ctx->r10 != 0) {
        // 0x080007B8: nop
    
            goto L_080007C0;
    }
    // 0x080007B8: nop

    // 0x080007BC: sh          $t3, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r11;
L_080007C0:
    // 0x080007C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X628) << 16);
    // 0x080007C4: jalr        $t9
    // 0x080007C8: addiu       $a0, $a0, 0x628
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X628));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007C8: addiu       $a0, $a0, 0x628
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X628));
    after_2:
    // 0x080007CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080007D0:
    // 0x080007D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007D4: jr          $ra
    // 0x080007D8: nop

    TRACE_RETURN()
    return;
    // 0x080007D8: nop

;}
RECOMP_FUNC void func_08000ADC_6D4E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000AEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000AF0: addiu       $t6, $zero, 0x2E1
    ctx->r14 = ADD32(0, 0X2E1);
    // 0x08000AF4: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AFC: jalr        $t9
    // 0x08000B00: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B00: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    after_0:
    // 0x08000B04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B08: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B10: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    // 0x08000B14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000B18: jalr        $t9
    // 0x08000B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000B20: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x08000B24: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08000B28: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x08000B2C: beq         $t7, $zero, L_08000B68
    if (ctx->r15 == 0) {
        // 0x08000B30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000B68;
    }
    // 0x08000B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B38: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08000B3C: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x08000B40: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000B44: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000B48: sh          $t8, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r24;
    // 0x08000B4C: sh          $t0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r8;
    // 0x08000B50: sh          $t1, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r9;
    // 0x08000B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B58: jalr        $t9
    // 0x08000B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x08000B60: b           L_08000B88
    // 0x08000B64: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_08000B88;
    // 0x08000B64: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_08000B68:
    // 0x08000B68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B6C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000B70: sh          $t2, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r10;
    // 0x08000B74: sh          $zero, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = 0;
    // 0x08000B78: sh          $t3, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r11;
    // 0x08000B7C: jalr        $t9
    // 0x08000B80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x08000B84: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_08000B88:
    // 0x08000B88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B90: lbu         $t4, 0x7C($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X7C);
    // 0x08000B94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X880) << 16);
    // 0x08000B98: addiu       $a0, $a0, 0x880
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X880));
    // 0x08000B9C: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x08000BA0: sb          $t5, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r13;
    // 0x08000BA4: jalr        $t9
    // 0x08000BA8: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BA8: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    after_4:
    // 0x08000BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000BB8: jr          $ra
    // 0x08000BBC: nop

    TRACE_RETURN()
    return;
    // 0x08000BBC: nop

;}
RECOMP_FUNC void func_08000000_6D4340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x0800000C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x08000010: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000018: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x0800001C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000020: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08000024: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000028: bne         $t7, $zero, L_080001F4
    if (ctx->r15 != 0) {
        // 0x0800002C: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_080001F4;
    }
    // 0x0800002C: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x08000030: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x08000034: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000038: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800003C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000040: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x08000044: nop

    // 0x08000048: bc1fl       L_08000104
    if (!c1cs) {
        // 0x0800004C: lwc1        $f18, 0xD8($s3)
        ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
            goto L_08000104;
    }
    goto skip_0;
    // 0x0800004C: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
    skip_0:
    // 0x08000050: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000054: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000058: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800005C: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x08000060: bne         $t8, $at, L_0800007C
    if (ctx->r24 != ctx->r1) {
        // 0x08000064: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_0800007C;
    }
    // 0x08000064: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x08000068: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x0800006C: jalr        $t9
    // 0x08000070: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000070: nop

    after_0:
    // 0x08000074: b           L_08000104
    // 0x08000078: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
        goto L_08000104;
    // 0x08000078: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_0800007C:
    // 0x0800007C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000080: bne         $t0, $at, L_08000100
    if (ctx->r8 != ctx->r1) {
        // 0x08000084: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_08000100;
    }
    // 0x08000084: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08000088: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800008C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000090: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000094: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000098: jalr        $t9
    // 0x0800009C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800009C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x080000A0: beq         $v0, $zero, L_08000100
    if (ctx->r2 == 0) {
        // 0x080000A4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000100;
    }
    // 0x080000A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080000A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000AC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000B4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x080000B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x080000BC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080000C0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080000C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080000C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080000CC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080000D0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080000D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080000D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000DC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080000E0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080000E4: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x080000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000EC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080000F0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080000F4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x080000F8: jalr        $t9
    // 0x080000FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000FC: nop

    after_3:
L_08000100:
    // 0x08000100: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_08000104:
    // 0x08000104: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000108: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800010C: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08000110: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x08000114: nop

    // 0x08000118: bc1fl       L_08000230
    if (!c1cs) {
        // 0x0800011C: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000230;
    }
    goto skip_1;
    // 0x0800011C: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_1:
    // 0x08000120: lbu         $v0, 0x139($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X139);
    // 0x08000124: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x08000128: addiu       $s2, $s2, -0x3410
    ctx->r18 = ADD32(ctx->r18, -0X3410);
    // 0x0800012C: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08000130: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x08000134: beq         $v1, $zero, L_08000168
    if (ctx->r3 == 0) {
        // 0x08000138: sb          $t1, 0x139($a0)
        MEM_B(0X139, ctx->r4) = ctx->r9;
            goto L_08000168;
    }
    // 0x08000138: sb          $t1, 0x139($a0)
    MEM_B(0X139, ctx->r4) = ctx->r9;
    // 0x0800013C: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x08000140: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08000144: addiu       $s2, $s2, -0x3410
    ctx->r18 = ADD32(ctx->r18, -0X3410);
    // 0x08000148: addiu       $s0, $s0, -0xB98
    ctx->r16 = ADD32(ctx->r16, -0XB98);
    // 0x0800014C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000150: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    // 0x08000154: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000158: jalr        $s0
    // 0x0800015C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800015C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_4:
    // 0x08000160: b           L_08000188
    // 0x08000164: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
        goto L_08000188;
    // 0x08000164: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
L_08000168:
    // 0x08000168: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x0800016C: addiu       $s0, $s0, -0xB98
    ctx->r16 = ADD32(ctx->r16, -0XB98);
    // 0x08000170: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    // 0x08000174: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000178: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x0800017C: jalr        $s0
    // 0x08000180: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000180: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_5:
    // 0x08000184: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
L_08000188:
    // 0x08000188: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x0800018C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000190: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08000194: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000198: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x0800019C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BA0) << 16);
    // 0x080001A0: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x080001A4: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x080001A8: swc1        $f0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f0.u32l;
    // 0x080001AC: ldc1        $f4, 0x1BA0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BA0));
    // 0x080001B0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080001B4: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x080001B8: nop

    // 0x080001BC: bc1fl       L_08000230
    if (!c1cs) {
        // 0x080001C0: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000230;
    }
    goto skip_2;
    // 0x080001C0: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_2:
    // 0x080001C4: lh          $t2, 0xDC($s3)
    ctx->r10 = MEM_H(ctx->r19, 0XDC);
    // 0x080001C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080001CC: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    // 0x080001D0: bne         $t2, $zero, L_0800022C
    if (ctx->r10 != 0) {
        // 0x080001D4: swc1        $f8, 0x7C($s3)
        MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
            goto L_0800022C;
    }
    // 0x080001D4: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    // 0x080001D8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x080001DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080001E0: jalr        $s0
    // 0x080001E4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x080001E4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x080001E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080001EC: b           L_0800022C
    // 0x080001F0: sh          $t3, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r11;
        goto L_0800022C;
    // 0x080001F0: sh          $t3, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r11;
L_080001F4:
    // 0x080001F4: lh          $t4, 0xDC($s3)
    ctx->r12 = MEM_H(ctx->r19, 0XDC);
    // 0x080001F8: beql        $t4, $zero, L_08000230
    if (ctx->r12 == 0) {
        // 0x080001FC: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000230;
    }
    goto skip_3;
    // 0x080001FC: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_3:
    // 0x08000200: lwc1        $f10, 0x7C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x08000204: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000208: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800020C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000210: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x08000214: nop

    // 0x08000218: bc1fl       L_08000230
    if (!c1cs) {
        // 0x0800021C: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000230;
    }
    goto skip_4;
    // 0x0800021C: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_4:
    // 0x08000220: jalr        $t9
    // 0x08000224: ori         $a0, $zero, 0x828F
    ctx->r4 = 0 | 0X828F;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000224: ori         $a0, $zero, 0x828F
    ctx->r4 = 0 | 0X828F;
    after_7:
    // 0x08000228: sh          $zero, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = 0;
L_0800022C:
    // 0x0800022C: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
L_08000230:
    // 0x08000230: lwc1        $f18, 0x7C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x08000234: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08000238: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800023C: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08000240: sh          $t5, 0x8A($s3)
    MEM_H(0X8A, ctx->r19) = ctx->r13;
    // 0x08000244: beq         $v1, $zero, L_080002F4
    if (ctx->r3 == 0) {
        // 0x08000248: swc1        $f18, 0xD8($s3)
        MEM_W(0XD8, ctx->r19) = ctx->f18.u32l;
            goto L_080002F4;
    }
    // 0x08000248: swc1        $f18, 0xD8($s3)
    MEM_W(0XD8, ctx->r19) = ctx->f18.u32l;
    // 0x0800024C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000250: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000254: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000258: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x0800025C: addiu       $s2, $s2, -0x7F70
    ctx->r18 = ADD32(ctx->r18, -0X7F70);
    // 0x08000260: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000264: jalr        $t9
    // 0x08000268: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000268: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x0800026C: beq         $v0, $zero, L_080002CC
    if (ctx->r2 == 0) {
        // 0x08000270: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080002CC;
    }
    // 0x08000270: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000274: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000278: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800027C: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08000280: addiu       $s1, $s1, -0x61F8
    ctx->r17 = ADD32(ctx->r17, -0X61F8);
    // 0x08000284: jalr        $t9
    // 0x08000288: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000288: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
    // 0x0800028C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000290: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000294: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000298: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800029C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080002A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080002A4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080002A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080002B4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080002B8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080002BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080002C0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080002C4: jalr        $s1
    // 0x080002C8: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_10;
    // 0x080002C8: nop

    after_10:
L_080002CC:
    // 0x080002CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x080002D0: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_080002D4:
    // 0x080002D4: jalr        $s2
    // 0x080002D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_11;
    // 0x080002D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x080002DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x080002E0: bne         $s0, $s1, L_080002D4
    if (ctx->r16 != ctx->r17) {
        // 0x080002E4: nop
    
            goto L_080002D4;
    }
    // 0x080002E4: nop

    // 0x080002E8: lw          $t6, 0x68($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X68);
    // 0x080002EC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x080002F0: sw          $t7, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r15;
L_080002F4:
    // 0x080002F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080002F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080002FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000300: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x08000304: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x08000308: jr          $ra
    // 0x0800030C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800030C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0800107C_6D53BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800107C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001080: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001084: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x08001088: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0800108C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001090: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001094: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001098: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x0800109C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x080010A0: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x080010A4: bne         $t7, $zero, L_08001208
    if (ctx->r15 != 0) {
        // 0x080010A8: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_08001208;
    }
    // 0x080010A8: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x080010AC: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x080010B0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080010B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080010B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080010BC: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x080010C0: nop

    // 0x080010C4: bc1fl       L_08001180
    if (!c1cs) {
        // 0x080010C8: lwc1        $f18, 0xD8($s3)
        ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
            goto L_08001180;
    }
    goto skip_0;
    // 0x080010C8: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
    skip_0:
    // 0x080010CC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080010D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080010D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010D8: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x080010DC: bne         $t8, $at, L_080010F8
    if (ctx->r24 != ctx->r1) {
        // 0x080010E0: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_080010F8;
    }
    // 0x080010E0: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x080010E4: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x080010E8: jalr        $t9
    // 0x080010EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010EC: nop

    after_0:
    // 0x080010F0: b           L_08001180
    // 0x080010F4: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
        goto L_08001180;
    // 0x080010F4: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_080010F8:
    // 0x080010F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080010FC: bne         $t0, $at, L_0800117C
    if (ctx->r8 != ctx->r1) {
        // 0x08001100: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_0800117C;
    }
    // 0x08001100: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08001104: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001108: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800110C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001110: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001114: jalr        $t9
    // 0x08001118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x0800111C: beq         $v0, $zero, L_0800117C
    if (ctx->r2 == 0) {
        // 0x08001120: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800117C;
    }
    // 0x08001120: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001124: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001128: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800112C: jalr        $t9
    // 0x08001130: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001130: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x08001134: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08001138: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800113C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001140: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001144: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001148: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x0800114C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001154: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001158: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800115C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001160: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x08001164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001168: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x0800116C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001170: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08001174: jalr        $t9
    // 0x08001178: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001178: nop

    after_3:
L_0800117C:
    // 0x0800117C: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_08001180:
    // 0x08001180: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001184: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001188: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800118C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x08001190: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08001194: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001198: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x0800119C: bc1f        L_08001234
    if (!c1cs) {
        // 0x080011A0: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_08001234;
    }
    // 0x080011A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080011A4: jalr        $t9
    // 0x080011A8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080011A8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_4:
    // 0x080011AC: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
    // 0x080011B0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x080011B4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080011B8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x080011BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080011C0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080011C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BC0) << 16);
    // 0x080011C8: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x080011CC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x080011D0: swc1        $f0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f0.u32l;
    // 0x080011D4: ldc1        $f4, 0x1BC0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BC0));
    // 0x080011D8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080011DC: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x080011E0: nop

    // 0x080011E4: bc1fl       L_08001238
    if (!c1cs) {
        // 0x080011E8: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08001238;
    }
    goto skip_1;
    // 0x080011E8: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_1:
    // 0x080011EC: lh          $t1, 0xDC($s3)
    ctx->r9 = MEM_H(ctx->r19, 0XDC);
    // 0x080011F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080011F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x080011F8: bne         $t1, $zero, L_08001234
    if (ctx->r9 != 0) {
        // 0x080011FC: swc1        $f8, 0x7C($s3)
        MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
            goto L_08001234;
    }
    // 0x080011FC: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    // 0x08001200: b           L_08001234
    // 0x08001204: sh          $t2, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r10;
        goto L_08001234;
    // 0x08001204: sh          $t2, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r10;
L_08001208:
    // 0x08001208: lh          $t3, 0xDC($s3)
    ctx->r11 = MEM_H(ctx->r19, 0XDC);
    // 0x0800120C: beql        $t3, $zero, L_08001238
    if (ctx->r11 == 0) {
        // 0x08001210: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08001238;
    }
    goto skip_2;
    // 0x08001210: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_2:
    // 0x08001214: lwc1        $f10, 0x7C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x08001218: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800121C: nop

    // 0x08001220: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x08001224: nop

    // 0x08001228: bc1fl       L_08001238
    if (!c1cs) {
        // 0x0800122C: lhu         $v0, 0x8A($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X8A);
            goto L_08001238;
    }
    goto skip_3;
    // 0x0800122C: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
    skip_3:
    // 0x08001230: sh          $zero, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = 0;
L_08001234:
    // 0x08001234: lhu         $v0, 0x8A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8A);
L_08001238:
    // 0x08001238: lwc1        $f18, 0x7C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x0800123C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08001240: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001244: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x08001248: sh          $t4, 0x8A($s3)
    MEM_H(0X8A, ctx->r19) = ctx->r12;
    // 0x0800124C: beq         $v1, $zero, L_080012FC
    if (ctx->r3 == 0) {
        // 0x08001250: swc1        $f18, 0xD8($s3)
        MEM_W(0XD8, ctx->r19) = ctx->f18.u32l;
            goto L_080012FC;
    }
    // 0x08001250: swc1        $f18, 0xD8($s3)
    MEM_W(0XD8, ctx->r19) = ctx->f18.u32l;
    // 0x08001254: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001258: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800125C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001260: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08001264: addiu       $s2, $s2, -0x7F70
    ctx->r18 = ADD32(ctx->r18, -0X7F70);
    // 0x08001268: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800126C: jalr        $t9
    // 0x08001270: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001270: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x08001274: beq         $v0, $zero, L_080012D4
    if (ctx->r2 == 0) {
        // 0x08001278: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080012D4;
    }
    // 0x08001278: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800127C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001280: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001284: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08001288: addiu       $s1, $s1, -0x61F8
    ctx->r17 = ADD32(ctx->r17, -0X61F8);
    // 0x0800128C: jalr        $t9
    // 0x08001290: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001290: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x08001294: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001298: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800129C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080012A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080012A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080012A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080012AC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080012B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080012B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012B8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080012BC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080012C0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080012C4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080012C8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080012CC: jalr        $s1
    // 0x080012D0: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x080012D0: nop

    after_7:
L_080012D4:
    // 0x080012D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x080012D8: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_080012DC:
    // 0x080012DC: jalr        $s2
    // 0x080012E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_8;
    // 0x080012E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x080012E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x080012E8: bne         $s0, $s1, L_080012DC
    if (ctx->r16 != ctx->r17) {
        // 0x080012EC: nop
    
            goto L_080012DC;
    }
    // 0x080012EC: nop

    // 0x080012F0: lw          $t5, 0x68($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X68);
    // 0x080012F4: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x080012F8: sw          $t6, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r14;
L_080012FC:
    // 0x080012FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001300: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001304: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001308: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x0800130C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x08001310: jr          $ra
    // 0x08001314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000310_6D4650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000310: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000318: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x0800031C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000320: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000324: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    // 0x08000328: jalr        $t9
    // 0x0800032C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800032C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000330: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000334: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000338: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800033C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x08000340: jalr        $t9
    // 0x08000344: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000344: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    after_1:
    // 0x08000348: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0800034C: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x08000350: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x08000354: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08000358: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x0800035C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000360: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x08000364: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x08000368: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800036C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000370: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000374: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000378: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0800037C: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000380: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x08000384: mul.d       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x08000388: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x0800038C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x08000390: sub.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f8.d - ctx->f6.d;
    // 0x08000394: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000398: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800039C: jalr        $t9
    // 0x080003A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003A0: nop

    after_2:
    // 0x080003A4: bne         $v0, $zero, L_080003D4
    if (ctx->r2 != 0) {
        // 0x080003A8: lui         $t6, 0x2A0
        ctx->r14 = S32(0X2A0 << 16);
            goto L_080003D4;
    }
    // 0x080003A8: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x080003AC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080003B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003B4: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x080003B8: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x080003BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X0) << 16);
    // 0x080003C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X0));
    // 0x080003C8: sw          $t6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r14;
    // 0x080003CC: jalr        $t9
    // 0x080003D0: sh          $t7, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003D0: sh          $t7, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r15;
    after_3:
L_080003D4:
    // 0x080003D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080003DC: jr          $ra
    // 0x080003E0: nop

    TRACE_RETURN()
    return;
    // 0x080003E0: nop

;}
RECOMP_FUNC void func_08001388_6D56C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001388: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800138C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001390: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001394: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001398: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x0800139C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080013A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080013A4: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x080013A8: addiu       $t7, $zero, 0x1A4
    ctx->r15 = ADD32(0, 0X1A4);
    // 0x080013AC: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x080013B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080013B4: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080013B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080013BC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080013C0: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080013C4: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x080013C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080013CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080013D0: jalr        $t9
    // 0x080013D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080013D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013DC: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080013E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080013E4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x080013E8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x080013EC: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x080013F0: jalr        $t9
    // 0x080013F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x080013F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013FC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001404: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08001408: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x0800140C: jalr        $t9
    // 0x08001410: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001410: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    after_2:
    // 0x08001414: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BC8) << 16);
    // 0x08001418: lwc1        $f0, 0x1BC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BC8));
    // 0x0800141C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001420: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001424: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x08001428: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x0800142C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x08001430: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08001434: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001438: jalr        $t9
    // 0x0800143C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800143C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x08001440: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001448: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800144C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001450: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08001454: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    // 0x08001458: jalr        $t9
    // 0x0800145C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800145C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_4:
    // 0x08001460: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001464: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001468: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800146C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001470: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001474: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001478: sb          $t1, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r9;
    // 0x0800147C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001480: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001484: jalr        $t9
    // 0x08001488: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001488: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
    after_5:
    // 0x0800148C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001490: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001494: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X1318) << 16);
    // 0x08001498: jalr        $t9
    // 0x0800149C: addiu       $a0, $a0, 0x1318
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X1318));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800149C: addiu       $a0, $a0, 0x1318
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X1318));
    after_6:
    // 0x080014A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080014A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080014A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080014AC: jr          $ra
    // 0x080014B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080014B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000534_6D4874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800053C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000540: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000544: addiu       $a1, $zero, 0x191
    ctx->r5 = ADD32(0, 0X191);
    // 0x08000548: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x0800054C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000550: bne         $v0, $zero, L_08000584
    if (ctx->r2 != 0) {
        // 0x08000554: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000584;
    }
    // 0x08000554: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000558: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800055C: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08000560: jalr        $t9
    // 0x08000564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000568: beq         $v0, $zero, L_0800057C
    if (ctx->r2 == 0) {
        // 0x0800056C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_0800057C;
    }
    // 0x0800056C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000570: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08000574: lhu         $t7, 0xD0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD0);
    // 0x08000578: sh          $t7, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r15;
L_0800057C:
    // 0x0800057C: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x08000580: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
L_08000584:
    // 0x08000584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800058C: jr          $ra
    // 0x08000590: nop

    TRACE_RETURN()
    return;
    // 0x08000590: nop

;}
RECOMP_FUNC void func_080007DC_6D4B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080007E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080007E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080007E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080007EC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080007F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080007F8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080007FC: bne         $v0, $zero, L_0800086C
    if (ctx->r2 != 0) {
        // 0x08000800: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800086C;
    }
    // 0x08000800: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000804: lhu         $t7, 0xD4($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD4);
    // 0x08000808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800080C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000810: beql        $t8, $zero, L_08000830
    if (ctx->r24 == 0) {
        // 0x08000814: lw          $t1, 0x60($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X60);
            goto L_08000830;
    }
    goto skip_0;
    // 0x08000814: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    skip_0:
    // 0x08000818: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x0800081C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000820: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x08000824: b           L_08000840
    // 0x08000828: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
        goto L_08000840;
    // 0x08000828: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x0800082C: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
L_08000830:
    // 0x08000830: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000834: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000838: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x0800083C: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_08000840:
    // 0x08000840: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000844: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800084C: jalr        $t9
    // 0x08000850: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000850: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_0:
    // 0x08000854: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000858: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800085C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X880) << 16);
    // 0x08000860: sh          $zero, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = 0;
    // 0x08000864: jalr        $t9
    // 0x08000868: addiu       $a0, $a0, 0x880
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X880));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000868: addiu       $a0, $a0, 0x880
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X880));
    after_1:
L_0800086C:
    // 0x0800086C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000870: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000878: jr          $ra
    // 0x0800087C: nop

    TRACE_RETURN()
    return;
    // 0x0800087C: nop

;}
RECOMP_FUNC void func_08000F50_6D5290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000F54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000F58: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000F5C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000F60: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08000F64: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F68: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000F6C: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08000F70: addiu       $t7, $zero, 0x1A4
    ctx->r15 = ADD32(0, 0X1A4);
    // 0x08000F74: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x08000F78: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F7C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08000F80: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000F84: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000F88: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000F8C: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08000F90: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F98: jalr        $t9
    // 0x08000F9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000FA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FAC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08000FB0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08000FB4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08000FC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FC4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000FC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FCC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08000FD0: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x08000FD4: jalr        $t9
    // 0x08000FD8: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FD8: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    after_2:
    // 0x08000FDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000FE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000FE4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000FE8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000FEC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x08000FF0: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x08000FF4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x08000FF8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000FFC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001000: jalr        $t9
    // 0x08001004: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001004: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x08001008: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800100C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001010: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001014: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001018: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0800101C: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    // 0x08001020: jalr        $t9
    // 0x08001024: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001024: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_4:
    // 0x08001028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800102C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001030: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001034: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001038: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x0800103C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001040: sb          $t1, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r9;
    // 0x08001044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800104C: jalr        $t9
    // 0x08001050: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001050: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
    after_5:
    // 0x08001054: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001058: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800105C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0XEE0) << 16);
    // 0x08001060: jalr        $t9
    // 0x08001064: addiu       $a0, $a0, 0xEE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0XEE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001064: addiu       $a0, $a0, 0xEE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0XEE0));
    after_6:
    // 0x08001068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800106C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001070: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001074: jr          $ra
    // 0x08001078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08001318_6D5658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800131C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001320: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001324: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800132C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001330: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001334: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001338: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x0800133C: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001340: jalr        $t9
    // 0x08001344: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001344: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x08001348: bne         $v0, $zero, L_08001378
    if (ctx->r2 != 0) {
        // 0x0800134C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08001378;
    }
    // 0x0800134C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08001350: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x08001354: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001358: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x0800135C: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x08001360: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001364: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X107C) << 16);
    // 0x08001368: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x0800136C: sh          $t7, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r15;
    // 0x08001370: jalr        $t9
    // 0x08001374: addiu       $a0, $a0, 0x107C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X107C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001374: addiu       $a0, $a0, 0x107C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X107C));
    after_1:
L_08001378:
    // 0x08001378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800137C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001380: jr          $ra
    // 0x08001384: nop

    TRACE_RETURN()
    return;
    // 0x08001384: nop

;}
RECOMP_FUNC void func_080014B4_6D57F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080014B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080014BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080014C0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080014C4: lbu         $t6, 0xD4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD4);
    // 0x080014C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080014CC: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x080014D0: beq         $at, $zero, L_08001A78
    if (ctx->r1 == 0) {
        // 0x080014D4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08001A78;
    }
    // 0x080014D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080014D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BCC) << 16);
    // 0x080014DC: addu        $at, $at, $t6
    gpr jr_addend_080014E4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080014E0: lw          $t6, 0x1BCC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BCC));
    // 0x080014E4: jr          $t6
    // 0x080014E8: nop

    switch (jr_addend_080014E4 >> 2) {
        case 0: goto L_080014EC; break;
        case 1: goto L_08001A78; break;
        case 2: goto L_08001524; break;
        case 3: goto L_08001590; break;
        case 4: goto L_08001710; break;
        default: switch_error(__func__, 0x080014E4, 0x08001BCC);
    }
    // 0x080014E8: nop

L_080014EC:
    // 0x080014EC: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x080014F0: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x080014F4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x080014F8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080014FC: sw          $t8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r24;
    // 0x08001500: lw          $t9, -0x3924($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3924);
    // 0x08001504: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001508: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x0800150C: beq         $t9, $zero, L_0800151C
    if (ctx->r25 == 0) {
        // 0x08001510: nop
    
            goto L_0800151C;
    }
    // 0x08001510: nop

    // 0x08001514: b           L_08001A78
    // 0x08001518: sb          $t0, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r8;
        goto L_08001A78;
    // 0x08001518: sb          $t0, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r8;
L_0800151C:
    // 0x0800151C: b           L_08001A78
    // 0x08001520: sb          $t1, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r9;
        goto L_08001A78;
    // 0x08001520: sb          $t1, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r9;
L_08001524:
    // 0x08001524: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08001528: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x0800152C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x08001530: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001534: lwc1        $f2, 0x10($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08001538: lwc1        $f0, 0x10($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X10);
    // 0x0800153C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08001540: nop

    // 0x08001544: bc1fl       L_08001A7C
    if (!c1cs) {
        // 0x08001548: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_08001A7C;
    }
    goto skip_0;
    // 0x08001548: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_0:
    // 0x0800154C: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x08001550: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001554: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08001558: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x0800155C: nop

    // 0x08001560: bc1fl       L_08001A7C
    if (!c1cs) {
        // 0x08001564: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_08001A7C;
    }
    goto skip_1;
    // 0x08001564: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_1:
    // 0x08001568: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800156C: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    // 0x08001570: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x08001574: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x08001578: nop

    // 0x0800157C: bc1fl       L_08001A7C
    if (!c1cs) {
        // 0x08001580: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_08001A7C;
    }
    goto skip_2;
    // 0x08001580: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_2:
    // 0x08001584: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08001588: b           L_08001A78
    // 0x0800158C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
        goto L_08001A78;
    // 0x0800158C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_08001590:
    // 0x08001590: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x08001594: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x08001598: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x0800159C: sh          $t9, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r25;
    // 0x080015A0: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x080015A4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080015A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015AC: addiu       $t5, $zero, 0x191
    ctx->r13 = ADD32(0, 0X191);
    // 0x080015B0: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x080015B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080015B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080015BC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080015C0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080015C4: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x080015C8: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x080015CC: sw          $t8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r24;
    // 0x080015D0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x080015D4: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x080015D8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080015E4: jalr        $t9
    // 0x080015E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080015EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015F0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015F8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x080015FC: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    // 0x08001600: jalr        $t9
    // 0x08001604: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001604: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    after_1:
    // 0x08001608: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800160C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001614: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08001618: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x0800161C: jalr        $t9
    // 0x08001620: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001620: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_2:
    // 0x08001624: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001628: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001630: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08001634: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08001638: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x0800163C: jalr        $t9
    // 0x08001640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08001644: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x08001648: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800164C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001650: jalr        $t9
    // 0x08001654: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001654: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    after_4:
    // 0x08001658: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BE0) << 16);
    // 0x0800165C: ldc1        $f10, 0x1BE0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BE0));
    // 0x08001660: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08001664: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001668: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x0800166C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001670: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001674: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001678: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x0800167C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001680: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x08001684: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x08001688: jalr        $t9
    // 0x0800168C: lhu         $a0, 0x16($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800168C: lhu         $a0, 0x16($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X16);
    after_5:
    // 0x08001690: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BE8) << 16);
    // 0x08001694: lwc1        $f2, 0x1BE8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BE8));
    // 0x08001698: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BF0) << 16);
    // 0x0800169C: ldc1        $f8, 0x1BF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BF0));
    // 0x080016A0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080016A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016A8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x080016AC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080016B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080016B4: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080016B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080016BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080016C0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080016C4: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x080016C8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x080016CC: swc1        $f2, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f2.u32l;
    // 0x080016D0: swc1        $f2, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f2.u32l;
    // 0x080016D4: swc1        $f2, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f2.u32l;
    // 0x080016D8: sh          $zero, 0x18($t3)
    MEM_H(0X18, ctx->r11) = 0;
    // 0x080016DC: jalr        $t9
    // 0x080016E0: sh          $zero, 0x14($t3)
    MEM_H(0X14, ctx->r11) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080016E0: sh          $zero, 0x14($t3)
    MEM_H(0X14, ctx->r11) = 0;
    after_6:
    // 0x080016E4: beq         $v0, $zero, L_080016FC
    if (ctx->r2 == 0) {
        // 0x080016E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_080016FC;
    }
    // 0x080016E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080016EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016F0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080016F4: jalr        $t9
    // 0x080016F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080016F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
L_080016FC:
    // 0x080016FC: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    // 0x08001700: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08001704: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08001708: b           L_08001A78
    // 0x0800170C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
        goto L_08001A78;
    // 0x0800170C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_08001710:
    // 0x08001710: lw          $t5, 0x68($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X68);
    // 0x08001714: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    // 0x08001718: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x0800171C: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x08001720: bnel        $t6, $zero, L_0800199C
    if (ctx->r14 != 0) {
        // 0x08001724: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_0800199C;
    }
    goto skip_3;
    // 0x08001724: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_3:
    // 0x08001728: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x0800172C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001730: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001734: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001738: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x0800173C: nop

    // 0x08001740: bc1fl       L_08001810
    if (!c1cs) {
        // 0x08001744: lwc1        $f0, 0x4($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
            goto L_08001810;
    }
    goto skip_4;
    // 0x08001744: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    skip_4:
    // 0x08001748: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x0800174C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001754: andi        $t7, $v0, 0x7
    ctx->r15 = ctx->r2 & 0X7;
    // 0x08001758: bne         $t7, $at, L_08001778
    if (ctx->r15 != ctx->r1) {
        // 0x0800175C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_08001778;
    }
    // 0x0800175C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x08001760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001764: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x08001768: jalr        $t9
    // 0x0800176C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800176C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_8:
    // 0x08001770: b           L_0800180C
    // 0x08001774: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
        goto L_0800180C;
    // 0x08001774: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_08001778:
    // 0x08001778: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800177C: bne         $t8, $at, L_0800180C
    if (ctx->r24 != ctx->r1) {
        // 0x08001780: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800180C;
    }
    // 0x08001780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001784: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001788: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800178C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001790: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001794: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001798: jalr        $t9
    // 0x0800179C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800179C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_9:
    // 0x080017A0: beq         $v0, $zero, L_0800180C
    if (ctx->r2 == 0) {
        // 0x080017A4: lw          $v1, 0x30($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X30);
            goto L_0800180C;
    }
    // 0x080017A4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080017A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017AC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080017B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080017B4: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x080017B8: jalr        $t9
    // 0x080017BC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080017BC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_10:
    // 0x080017C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x080017C4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080017C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080017CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080017D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080017D4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080017D8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080017DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080017E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017E4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080017E8: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080017EC: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x080017F0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x080017F4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x080017F8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080017FC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08001800: jalr        $t9
    // 0x08001804: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001804: nop

    after_11:
    // 0x08001808: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_0800180C:
    // 0x0800180C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
L_08001810:
    // 0x08001810: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001814: lui         $at, 0xBFF8
    ctx->r1 = S32(0XBFF8 << 16);
    // 0x08001818: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x0800181C: nop

    // 0x08001820: bc1fl       L_0800199C
    if (!c1cs) {
        // 0x08001824: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_0800199C;
    }
    goto skip_5;
    // 0x08001824: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_5:
    // 0x08001828: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800182C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001830: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08001834: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08001838: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x0800183C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08001840: addiu       $a1, $a1, -0x33D0
    ctx->r5 = ADD32(ctx->r5, -0X33D0);
    // 0x08001844: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001848: bne         $t0, $zero, L_08001998
    if (ctx->r8 != 0) {
        // 0x0800184C: swc1        $f8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
            goto L_08001998;
    }
    // 0x0800184C: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x08001850: lbu         $v0, 0x139($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X139);
    // 0x08001854: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08001858: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x0800185C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x08001860: beq         $a0, $zero, L_0800189C
    if (ctx->r4 == 0) {
        // 0x08001864: sb          $t1, 0x139($a1)
        MEM_B(0X139, ctx->r5) = ctx->r9;
            goto L_0800189C;
    }
    // 0x08001864: sb          $t1, 0x139($a1)
    MEM_B(0X139, ctx->r5) = ctx->r9;
    // 0x08001868: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800186C: addiu       $v0, $v0, -0xB98
    ctx->r2 = ADD32(ctx->r2, -0XB98);
    // 0x08001870: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001874: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001878: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800187C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    // 0x08001880: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x08001884: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08001888: jalr        $v0
    // 0x0800188C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x0800188C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_12:
    // 0x08001890: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001894: b           L_080018C8
    // 0x08001898: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
        goto L_080018C8;
    // 0x08001898: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_0800189C:
    // 0x0800189C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080018A0: addiu       $v0, $v0, -0xB98
    ctx->r2 = ADD32(ctx->r2, -0XB98);
    // 0x080018A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080018A8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080018AC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080018B0: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    // 0x080018B4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x080018B8: jalr        $v0
    // 0x080018BC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x080018BC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_13:
    // 0x080018C0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080018C4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_080018C8:
    // 0x080018C8: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x080018CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BF8) << 16);
    // 0x080018D0: bne         $a0, $zero, L_0800193C
    if (ctx->r4 != 0) {
        // 0x080018D4: nop
    
            goto L_0800193C;
    }
    // 0x080018D4: nop

    // 0x080018D8: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x080018DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080018E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080018E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080018E8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x080018EC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x080018F0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x080018F4: bc1fl       L_08001908
    if (!c1cs) {
        // 0x080018F8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_08001908;
    }
    goto skip_6;
    // 0x080018F8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_6:
    // 0x080018FC: b           L_08001908
    // 0x08001900: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_08001908;
    // 0x08001900: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x08001904: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08001908:
    // 0x08001908: ldc1        $f18, 0x1BF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BF8));
    // 0x0800190C: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x08001910: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x08001914: nop

    // 0x08001918: bc1f        L_0800193C
    if (!c1cs) {
        // 0x0800191C: nop
    
            goto L_0800193C;
    }
    // 0x0800191C: nop

    // 0x08001920: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    // 0x08001924: jalr        $v0
    // 0x08001928: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x08001928: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_14:
    // 0x0800192C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08001930: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001934: b           L_08001998
    // 0x08001938: sb          $t2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r10;
        goto L_08001998;
    // 0x08001938: sb          $t2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r10;
L_0800193C:
    // 0x0800193C: beq         $a0, $zero, L_08001998
    if (ctx->r4 == 0) {
        // 0x08001940: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(25, 0X1C00) << 16);
            goto L_08001998;
    }
    // 0x08001940: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1C00) << 16);
    // 0x08001944: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x08001948: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800194C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001950: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001954: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08001958: ori         $a0, $zero, 0x828F
    ctx->r4 = 0 | 0X828F;
    // 0x0800195C: bc1fl       L_08001970
    if (!c1cs) {
        // 0x08001960: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_08001970;
    }
    goto skip_7;
    // 0x08001960: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_7:
    // 0x08001964: b           L_08001970
    // 0x08001968: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_08001970;
    // 0x08001968: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x0800196C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08001970:
    // 0x08001970: ldc1        $f6, 0x1C00($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1C00));
    // 0x08001974: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x08001978: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x0800197C: nop

    // 0x08001980: bc1fl       L_0800199C
    if (!c1cs) {
        // 0x08001984: addiu       $v1, $s0, 0xD4
        ctx->r3 = ADD32(ctx->r16, 0XD4);
            goto L_0800199C;
    }
    goto skip_8;
    // 0x08001984: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
    skip_8:
    // 0x08001988: jalr        $t9
    // 0x0800198C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800198C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_15:
    // 0x08001990: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08001994: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
L_08001998:
    // 0x08001998: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
L_0800199C:
    // 0x0800199C: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x080019A0: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x080019A4: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x080019A8: bne         $t3, $at, L_08001A78
    if (ctx->r11 != ctx->r1) {
        // 0x080019AC: swc1        $f10, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
            goto L_08001A78;
    }
    // 0x080019AC: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x080019B0: lui         $t4, 0x8022
    ctx->r12 = S32(0X8022 << 16);
    // 0x080019B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080019B8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080019BC: addiu       $t4, $t4, -0x7F70
    ctx->r12 = ADD32(ctx->r12, -0X7F70);
    // 0x080019C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080019C4: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080019C8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x080019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080019D0: jalr        $t9
    // 0x080019D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080019D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x080019D8: beq         $v0, $zero, L_08001A40
    if (ctx->r2 == 0) {
        // 0x080019DC: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08001A40;
    }
    // 0x080019DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080019E0: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x080019E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019E8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080019EC: addiu       $t5, $t5, -0x61F8
    ctx->r13 = ADD32(ctx->r13, -0X61F8);
    // 0x080019F0: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x080019F4: jalr        $t9
    // 0x080019F8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080019F8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_17:
    // 0x080019FC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08001A00: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001A04: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001A08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001A0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001A10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001A14: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001A18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001A1C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001A20: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001A24: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x08001A28: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x08001A2C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08001A30: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001A34: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08001A38: jalr        $t9
    // 0x08001A3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001A3C: nop

    after_18:
L_08001A40:
    // 0x08001A40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x08001A44: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_08001A48:
    // 0x08001A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A4C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x08001A50: jalr        $t9
    // 0x08001A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001A54: nop

    after_19:
    // 0x08001A58: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001A5C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08001A60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x08001A64: bnel        $v1, $at, L_08001A48
    if (ctx->r3 != ctx->r1) {
        // 0x08001A68: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_08001A48;
    }
    goto skip_9;
    // 0x08001A68: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    skip_9:
    // 0x08001A6C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08001A70: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08001A74: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08001A78:
    // 0x08001A78: addiu       $v1, $s0, 0xD4
    ctx->r3 = ADD32(ctx->r16, 0XD4);
L_08001A7C:
    // 0x08001A7C: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x08001A80: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001A84: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x08001A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001A8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001A90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08001A94: jr          $ra
    // 0x08001A98: nop

    TRACE_RETURN()
    return;
    // 0x08001A98: nop

;}
RECOMP_FUNC void func_08000628_6D4968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000628: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800062C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000630: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000634: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000638: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x0800063C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000640: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x08000644: mfhi        $t6
    ctx->r14 = hi;
    // 0x08000648: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    // 0x0800064C: bne         $t6, $zero, L_08000668
    if (ctx->r14 != 0) {
        // 0x08000650: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000668;
    }
    // 0x08000650: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000654: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000658: jalr        $t9
    // 0x0800065C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800065C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000660: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08000664: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
L_08000668:
    // 0x08000668: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x0800066C: bne         $v0, $zero, L_080006DC
    if (ctx->r2 != 0) {
        // 0x08000670: sh          $t7, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r15;
            goto L_080006DC;
    }
    // 0x08000670: sh          $t7, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r15;
    // 0x08000674: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000678: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800067C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(25, 0X1388) << 16);
    // 0x08000680: addiu       $a1, $a1, 0x1388
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(25, 0X1388));
    // 0x08000684: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08000688: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x0800068C: jalr        $t9
    // 0x08000690: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000690: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x08000694: beq         $v0, $zero, L_080006D4
    if (ctx->r2 == 0) {
        // 0x08000698: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_080006D4;
    }
    // 0x08000698: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x0800069C: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x080006A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006A4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080006A8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080006AC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x080006B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080006B4: jalr        $t9
    // 0x080006B8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006B8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_2:
    // 0x080006BC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080006C0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x080006C4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080006C8: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x080006CC: lhu         $t0, 0xD0($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0XD0);
    // 0x080006D0: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
L_080006D4:
    // 0x080006D4: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x080006D8: sh          $t1, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r9;
L_080006DC:
    // 0x080006DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080006E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080006E4: jr          $ra
    // 0x080006E8: nop

    TRACE_RETURN()
    return;
    // 0x080006E8: nop

;}
RECOMP_FUNC void func_080003E4_6D4724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080003E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080003F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080003F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080003F8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080003FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000400: jalr        $t9
    // 0x08000404: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000404: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000408: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x0800040C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000410: ori         $t6, $t6, 0xEE1
    ctx->r14 = ctx->r14 | 0XEE1;
    // 0x08000414: addiu       $t7, $zero, 0x191
    ctx->r15 = ADD32(0, 0X191);
    // 0x08000418: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x0800041C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000420: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08000424: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000428: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x0800042C: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08000430: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800043C: jalr        $t9
    // 0x08000440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000444: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BA8) << 16);
    // 0x08000448: lwc1        $f0, 0x1BA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BA8));
    // 0x0800044C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000450: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000454: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x08000458: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x0800045C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08000460: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000464: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000468: jalr        $t9
    // 0x0800046C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800046C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08000470: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000474: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000478: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800047C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000480: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08000484: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08000488: jalr        $t9
    // 0x0800048C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800048C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x08000490: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000494: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000498: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800049C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080004A0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x080004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004A8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x080004AC: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x080004B0: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    // 0x080004B4: jalr        $t9
    // 0x080004B8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004B8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x080004BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004C0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080004C4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x080004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004CC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x080004D0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x080004D4: jalr        $t9
    // 0x080004D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080004D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x080004DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080004E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004E4: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x080004E8: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080004EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004F4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080004F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x080004FC: jalr        $t9
    // 0x08000500: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000500: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_6:
    // 0x08000504: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000508: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x0800050C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000510: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X310) << 16);
    // 0x08000514: sh          $t2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r10;
    // 0x08000518: jalr        $t9
    // 0x0800051C: addiu       $a0, $a0, 0x310
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X310));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800051C: addiu       $a0, $a0, 0x310
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X310));
    after_7:
    // 0x08000520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000524: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000528: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800052C: jr          $ra
    // 0x08000530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000BC0_6D4F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000BC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000BC8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x08000BCC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x08000BD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000BD4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000BD8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000BDC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000BE0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08000BE4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000BE8: bne         $t7, $zero, L_08000DB4
    if (ctx->r15 != 0) {
        // 0x08000BEC: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_08000DB4;
    }
    // 0x08000BEC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x08000BF0: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x08000BF4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000BF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000BFC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000C00: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x08000C04: nop

    // 0x08000C08: bc1fl       L_08000CC4
    if (!c1cs) {
        // 0x08000C0C: lwc1        $f18, 0xD8($s3)
        ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
            goto L_08000CC4;
    }
    goto skip_0;
    // 0x08000C0C: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
    skip_0:
    // 0x08000C10: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000C14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000C18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C1C: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x08000C20: bne         $t8, $at, L_08000C3C
    if (ctx->r24 != ctx->r1) {
        // 0x08000C24: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_08000C3C;
    }
    // 0x08000C24: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x08000C28: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x08000C2C: jalr        $t9
    // 0x08000C30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C30: nop

    after_0:
    // 0x08000C34: b           L_08000CC4
    // 0x08000C38: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
        goto L_08000CC4;
    // 0x08000C38: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_08000C3C:
    // 0x08000C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000C40: bne         $t0, $at, L_08000CC0
    if (ctx->r8 != ctx->r1) {
        // 0x08000C44: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_08000CC0;
    }
    // 0x08000C44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08000C48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C4C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000C50: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000C54: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08000C60: beq         $v0, $zero, L_08000CC0
    if (ctx->r2 == 0) {
        // 0x08000C64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000CC0;
    }
    // 0x08000C64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000C68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C6C: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000C70: jalr        $t9
    // 0x08000C74: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C74: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x08000C78: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08000C7C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000C80: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000C84: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000C88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000C8C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000C90: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000C94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000C98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C9C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000CA0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000CA4: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x08000CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CAC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08000CB0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000CB4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08000CB8: jalr        $t9
    // 0x08000CBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CBC: nop

    after_3:
L_08000CC0:
    // 0x08000CC0: lwc1        $f18, 0xD8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XD8);
L_08000CC4:
    // 0x08000CC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000CC8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000CCC: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08000CD0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x08000CD4: nop

    // 0x08000CD8: bc1fl       L_08000DF0
    if (!c1cs) {
        // 0x08000CDC: lhu         $t5, 0x8A($s3)
        ctx->r13 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000DF0;
    }
    goto skip_1;
    // 0x08000CDC: lhu         $t5, 0x8A($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X8A);
    skip_1:
    // 0x08000CE0: lbu         $v0, 0x139($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X139);
    // 0x08000CE4: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x08000CE8: addiu       $s2, $s2, -0x3410
    ctx->r18 = ADD32(ctx->r18, -0X3410);
    // 0x08000CEC: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08000CF0: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x08000CF4: beq         $v1, $zero, L_08000D28
    if (ctx->r3 == 0) {
        // 0x08000CF8: sb          $t1, 0x139($a0)
        MEM_B(0X139, ctx->r4) = ctx->r9;
            goto L_08000D28;
    }
    // 0x08000CF8: sb          $t1, 0x139($a0)
    MEM_B(0X139, ctx->r4) = ctx->r9;
    // 0x08000CFC: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x08000D00: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08000D04: addiu       $s2, $s2, -0x3410
    ctx->r18 = ADD32(ctx->r18, -0X3410);
    // 0x08000D08: addiu       $s0, $s0, -0xB98
    ctx->r16 = ADD32(ctx->r16, -0XB98);
    // 0x08000D0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000D10: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    // 0x08000D14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000D18: jalr        $s0
    // 0x08000D1C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08000D1C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_4:
    // 0x08000D20: b           L_08000D48
    // 0x08000D24: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
        goto L_08000D48;
    // 0x08000D24: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
L_08000D28:
    // 0x08000D28: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08000D2C: addiu       $s0, $s0, -0xB98
    ctx->r16 = ADD32(ctx->r16, -0XB98);
    // 0x08000D30: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    // 0x08000D34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000D38: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000D3C: jalr        $s0
    // 0x08000D40: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000D40: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_5:
    // 0x08000D44: lwc1        $f6, 0xD8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XD8);
L_08000D48:
    // 0x08000D48: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08000D4C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000D50: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08000D54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000D58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000D5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BB0) << 16);
    // 0x08000D60: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x08000D64: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x08000D68: swc1        $f0, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f0.u32l;
    // 0x08000D6C: ldc1        $f4, 0x1BB0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BB0));
    // 0x08000D70: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000D74: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x08000D78: nop

    // 0x08000D7C: bc1fl       L_08000DF0
    if (!c1cs) {
        // 0x08000D80: lhu         $t5, 0x8A($s3)
        ctx->r13 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000DF0;
    }
    goto skip_2;
    // 0x08000D80: lhu         $t5, 0x8A($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X8A);
    skip_2:
    // 0x08000D84: lh          $t2, 0xDC($s3)
    ctx->r10 = MEM_H(ctx->r19, 0XDC);
    // 0x08000D88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000D8C: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    // 0x08000D90: bne         $t2, $zero, L_08000DEC
    if (ctx->r10 != 0) {
        // 0x08000D94: swc1        $f8, 0x7C($s3)
        MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
            goto L_08000DEC;
    }
    // 0x08000D94: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    // 0x08000D98: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08000D9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000DA0: jalr        $s0
    // 0x08000DA4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08000DA4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x08000DA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000DAC: b           L_08000DEC
    // 0x08000DB0: sh          $t3, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r11;
        goto L_08000DEC;
    // 0x08000DB0: sh          $t3, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = ctx->r11;
L_08000DB4:
    // 0x08000DB4: lh          $t4, 0xDC($s3)
    ctx->r12 = MEM_H(ctx->r19, 0XDC);
    // 0x08000DB8: beql        $t4, $zero, L_08000DF0
    if (ctx->r12 == 0) {
        // 0x08000DBC: lhu         $t5, 0x8A($s3)
        ctx->r13 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000DF0;
    }
    goto skip_3;
    // 0x08000DBC: lhu         $t5, 0x8A($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X8A);
    skip_3:
    // 0x08000DC0: lwc1        $f10, 0x7C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x08000DC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000DC8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DCC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000DD0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x08000DD4: nop

    // 0x08000DD8: bc1fl       L_08000DF0
    if (!c1cs) {
        // 0x08000DDC: lhu         $t5, 0x8A($s3)
        ctx->r13 = MEM_HU(ctx->r19, 0X8A);
            goto L_08000DF0;
    }
    goto skip_4;
    // 0x08000DDC: lhu         $t5, 0x8A($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X8A);
    skip_4:
    // 0x08000DE0: jalr        $t9
    // 0x08000DE4: ori         $a0, $zero, 0x828F
    ctx->r4 = 0 | 0X828F;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000DE4: ori         $a0, $zero, 0x828F
    ctx->r4 = 0 | 0X828F;
    after_7:
    // 0x08000DE8: sh          $zero, 0xDC($s3)
    MEM_H(0XDC, ctx->r19) = 0;
L_08000DEC:
    // 0x08000DEC: lhu         $t5, 0x8A($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X8A);
L_08000DF0:
    // 0x08000DF0: lwc1        $f18, 0x7C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X7C);
    // 0x08000DF4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(25, 0X1BB8) << 16);
    // 0x08000DF8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08000DFC: sh          $t6, 0x8A($s3)
    MEM_H(0X8A, ctx->r19) = ctx->r14;
    // 0x08000E00: swc1        $f18, 0xD8($s3)
    MEM_W(0XD8, ctx->r19) = ctx->f18.u32l;
    // 0x08000E04: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000E08: ldc1        $f4, 0x1BB8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(25, 0X1BB8));
    // 0x08000E0C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000E10: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000E14: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000E18: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08000E1C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08000E20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08000E24: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08000E28: bc1f        L_08000EC4
    if (!c1cs) {
        // 0x08000E2C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000EC4;
    }
    // 0x08000E2C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E30: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000E34: jalr        $t9
    // 0x08000E38: addiu       $s2, $s2, -0x7F70
    ctx->r18 = ADD32(ctx->r18, -0X7F70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000E38: addiu       $s2, $s2, -0x7F70
    ctx->r18 = ADD32(ctx->r18, -0X7F70);
    after_8:
    // 0x08000E3C: beq         $v0, $zero, L_08000E9C
    if (ctx->r2 == 0) {
        // 0x08000E40: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000E9C;
    }
    // 0x08000E40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000E44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E48: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000E4C: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08000E50: addiu       $s1, $s1, -0x61F8
    ctx->r17 = ADD32(ctx->r17, -0X61F8);
    // 0x08000E54: jalr        $t9
    // 0x08000E58: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E58: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
    // 0x08000E5C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08000E60: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000E64: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000E68: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000E6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000E70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000E74: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000E78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E80: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000E84: div.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x08000E88: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x08000E8C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000E90: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08000E94: jalr        $s1
    // 0x08000E98: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_10;
    // 0x08000E98: nop

    after_10:
L_08000E9C:
    // 0x08000E9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08000EA0: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_08000EA4:
    // 0x08000EA4: jalr        $s2
    // 0x08000EA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_11;
    // 0x08000EA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x08000EAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08000EB0: bne         $s0, $s1, L_08000EA4
    if (ctx->r16 != ctx->r17) {
        // 0x08000EB4: nop
    
            goto L_08000EA4;
    }
    // 0x08000EB4: nop

    // 0x08000EB8: lw          $t7, 0x68($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X68);
    // 0x08000EBC: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08000EC0: sw          $t8, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r24;
L_08000EC4:
    // 0x08000EC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000EC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000ECC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000ED0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x08000ED4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x08000ED8: jr          $ra
    // 0x08000EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000880_6D4BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000884: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000888: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800088C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000890: lhu         $t6, 0xD8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD8);
    // 0x08000894: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x08000898: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800089C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080008A0: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x080008A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080008A8: beq         $v0, $at, L_080008C8
    if (ctx->r2 == ctx->r1) {
        // 0x080008AC: sh          $t7, 0xD8($a0)
        MEM_H(0XD8, ctx->r4) = ctx->r15;
            goto L_080008C8;
    }
    // 0x080008AC: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
    // 0x080008B0: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x080008B4: beq         $v0, $at, L_080008C8
    if (ctx->r2 == ctx->r1) {
        // 0x080008B8: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_080008C8;
    }
    // 0x080008B8: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x080008BC: beq         $v0, $at, L_080008C8
    if (ctx->r2 == ctx->r1) {
        // 0x080008C0: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_080008C8;
    }
    // 0x080008C0: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    // 0x080008C4: bne         $v0, $at, L_080008E8
    if (ctx->r2 != ctx->r1) {
        // 0x080008C8: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080008E8;
    }
L_080008C8:
    // 0x080008C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008CC: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x080008D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080008D4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080008D8: addiu       $a0, $zero, 0x262
    ctx->r4 = ADD32(0, 0X262);
    // 0x080008DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x080008E0: jalr        $t9
    // 0x080008E4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008E4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
L_080008E8:
    // 0x080008E8: lbu         $t8, 0x7C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X7C);
    // 0x080008EC: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x080008F0: beql        $t0, $zero, L_08000ACC
    if (ctx->r8 == 0) {
        // 0x080008F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000ACC;
    }
    goto skip_0;
    // 0x080008F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080008F8: lhu         $v0, 0xD4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD4);
    // 0x080008FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000900: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000904: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08000908: sltiu       $t1, $v1, 0x1
    ctx->r9 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x0800090C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x08000910: beq         $t1, $zero, L_08000940
    if (ctx->r9 == 0) {
        // 0x08000914: sh          $t2, 0xD4($s1)
        MEM_H(0XD4, ctx->r17) = ctx->r10;
            goto L_08000940;
    }
    // 0x08000914: sh          $t2, 0xD4($s1)
    MEM_H(0XD4, ctx->r17) = ctx->r10;
    // 0x08000918: jalr        $t9
    // 0x0800091C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800091C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x08000920: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000924: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000928: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0X7DC) << 16);
    // 0x0800092C: sh          $v0, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r2;
    // 0x08000930: jalr        $t9
    // 0x08000934: addiu       $a0, $a0, 0x7DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X7DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000934: addiu       $a0, $a0, 0x7DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0X7DC));
    after_2:
    // 0x08000938: b           L_08000ACC
    // 0x0800093C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000ACC;
    // 0x0800093C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000940:
    // 0x08000940: lhu         $t3, 0xD4($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0XD4);
    // 0x08000944: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000948: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800094C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x08000950: beq         $t4, $zero, L_08000A08
    if (ctx->r12 == 0) {
        // 0x08000954: nop
    
            goto L_08000A08;
    }
    // 0x08000954: nop

    // 0x08000958: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800095C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000960: jalr        $t9
    // 0x08000964: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000964: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_3:
    // 0x08000968: lhu         $t5, 0xD6($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0XD6);
    // 0x0800096C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000970: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000974: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x08000978: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800097C: bgez        $t5, L_08000990
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08000980: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_08000990;
    }
    // 0x08000980: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000984: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000988: nop

    // 0x0800098C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_08000990:
    // 0x08000990: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08000994: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000998: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800099C: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x080009A0: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x080009A4: lhu         $t6, 0xD0($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0XD0);
    // 0x080009A8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x080009AC: bgez        $t6, L_080009C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080009B0: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_080009C0;
    }
    // 0x080009B0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080009B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080009B8: nop

    // 0x080009BC: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_080009C0:
    // 0x080009C0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080009C4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080009C8: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x080009CC: jalr        $t9
    // 0x080009D0: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080009D0: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    after_4:
    // 0x080009D4: lhu         $t7, 0xD6($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XD6);
    // 0x080009D8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080009DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080009E0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x080009E4: bgez        $t7, L_080009F8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x080009E8: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_080009F8;
    }
    // 0x080009E8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080009EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080009F0: nop

    // 0x080009F4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_080009F8:
    // 0x080009F8: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x080009FC: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08000A00: b           L_08000AAC
    // 0x08000A04: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
        goto L_08000AAC;
    // 0x08000A04: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
L_08000A08:
    // 0x08000A08: jalr        $t9
    // 0x08000A0C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000A0C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_5:
    // 0x08000A10: lhu         $t8, 0xD6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XD6);
    // 0x08000A14: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000A18: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000A1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08000A20: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000A24: bgez        $t8, L_08000A38
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08000A28: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_08000A38;
    }
    // 0x08000A28: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000A2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000A30: nop

    // 0x08000A34: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_08000A38:
    // 0x08000A38: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x08000A3C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000A40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000A44: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x08000A48: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08000A4C: lhu         $t0, 0xD0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0XD0);
    // 0x08000A50: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x08000A54: bgez        $t0, L_08000A68
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000A58: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000A68;
    }
    // 0x08000A58: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000A5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000A60: nop

    // 0x08000A64: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_08000A68:
    // 0x08000A68: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x08000A6C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000A70: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x08000A74: jalr        $t9
    // 0x08000A78: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000A78: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    after_6:
    // 0x08000A7C: lhu         $t1, 0xD6($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0XD6);
    // 0x08000A80: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000A84: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000A88: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x08000A8C: bgez        $t1, L_08000AA0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000A90: cvt.s.w     $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000AA0;
    }
    // 0x08000A90: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000A94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A98: nop

    // 0x08000A9C: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_08000AA0:
    // 0x08000AA0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08000AA4: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08000AA8: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
L_08000AAC:
    // 0x08000AAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AB0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000AB8: lhu         $a1, 0xD2($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XD2);
    // 0x08000ABC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000AC0: jalr        $t9
    // 0x08000AC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000AC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08000AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000ACC:
    // 0x08000ACC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000AD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000AD4: jr          $ra
    // 0x08000AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000EE0_6D5220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000EE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000EEC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000EF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000EF4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000EF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EFC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000F00: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08000F04: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000F08: jalr        $t9
    // 0x08000F0C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F0C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x08000F10: bne         $v0, $zero, L_08000F40
    if (ctx->r2 != 0) {
        // 0x08000F14: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000F40;
    }
    // 0x08000F14: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000F18: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x08000F1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F20: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08000F24: addiu       $t7, $zero, 0x46
    ctx->r15 = ADD32(0, 0X46);
    // 0x08000F28: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(25, 0XBC0) << 16);
    // 0x08000F30: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08000F34: sh          $t7, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r15;
    // 0x08000F38: jalr        $t9
    // 0x08000F3C: addiu       $a0, $a0, 0xBC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0XBC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F3C: addiu       $a0, $a0, 0xBC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(25, 0XBC0));
    after_1:
L_08000F40:
    // 0x08000F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F48: jr          $ra
    // 0x08000F4C: nop

    TRACE_RETURN()
    return;
    // 0x08000F4C: nop

;}
RECOMP_FUNC void func_08000594_6D48D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000594: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800059C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080005A0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080005A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080005A8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(25, 0XF50) << 16);
    // 0x080005AC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080005B0: bne         $v0, $zero, L_08000618
    if (ctx->r2 != 0) {
        // 0x080005B4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000618;
    }
    // 0x080005B4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080005B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005BC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080005C0: addiu       $a1, $a1, 0xF50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(25, 0XF50));
    // 0x080005C4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x080005C8: jalr        $t9
    // 0x080005CC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005CC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x080005D0: beq         $v0, $zero, L_08000610
    if (ctx->r2 == 0) {
        // 0x080005D4: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_08000610;
    }
    // 0x080005D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x080005D8: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x080005DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005E0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080005E4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080005E8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x080005EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080005F0: jalr        $t9
    // 0x080005F4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005F4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_1:
    // 0x080005F8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080005FC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08000600: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000604: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x08000608: lhu         $t8, 0xD0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0XD0);
    // 0x0800060C: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
L_08000610:
    // 0x08000610: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x08000614: sh          $t0, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r8;
L_08000618:
    // 0x08000618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800061C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000620: jr          $ra
    // 0x08000624: nop

    TRACE_RETURN()
    return;
    // 0x08000624: nop

;}
