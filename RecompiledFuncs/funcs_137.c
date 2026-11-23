#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000000_71BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: lui         $t6, 0x1280
    ctx->r14 = S32(0X1280 << 16);
    // 0x0800000C: ori         $t6, $t6, 0xF21
    ctx->r14 = ctx->r14 | 0XF21;
    // 0x08000010: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000014: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000018: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800001C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000020: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000024: lhu         $a1, 0xD2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD2);
    // 0x08000028: jalr        $t9
    // 0x0800002C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800002C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000030: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000034: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000038: jalr        $t9
    // 0x0800003C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800003C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000040: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000044: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800004C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000050: jalr        $t9
    // 0x08000054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000060: jr          $ra
    // 0x08000064: nop

    TRACE_RETURN()
    return;
    // 0x08000064: nop

;}
RECOMP_FUNC void func_08001454_71CED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001458: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800145C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001460: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001468: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800146C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001470: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x08001474: jalr        $t9
    // 0x08001478: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001478: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x0800147C: beq         $v0, $zero, L_080014B0
    if (ctx->r2 == 0) {
        // 0x08001480: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_080014B0;
    }
    // 0x08001480: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08001484: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001488: addiu       $t6, $zero, 0x2BF
    ctx->r14 = ADD32(0, 0X2BF);
    // 0x0800148C: addiu       $t7, $zero, 0x14E
    ctx->r15 = ADD32(0, 0X14E);
    // 0x08001490: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001494: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X284) << 16);
    // 0x08001498: sh          $t6, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = ctx->r14;
    // 0x0800149C: sw          $t7, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->r15;
    // 0x080014A0: jalr        $t9
    // 0x080014A4: addiu       $a0, $a0, 0x284
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X284));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014A4: addiu       $a0, $a0, 0x284
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X284));
    after_1:
    // 0x080014A8: b           L_080014D0
    // 0x080014AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080014D0;
    // 0x080014AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080014B0:
    // 0x080014B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014B4: addiu       $t8, $zero, 0x2C5
    ctx->r24 = ADD32(0, 0X2C5);
    // 0x080014B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1398) << 16);
    // 0x080014C0: sh          $t8, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = ctx->r24;
    // 0x080014C4: jalr        $t9
    // 0x080014C8: addiu       $a0, $a0, 0x1398
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1398));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080014C8: addiu       $a0, $a0, 0x1398
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1398));
    after_2:
    // 0x080014CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080014D0:
    // 0x080014D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080014D4: jr          $ra
    // 0x080014D8: nop

    TRACE_RETURN()
    return;
    // 0x080014D8: nop

;}
RECOMP_FUNC void func_08001C38_71D6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001C3C: jr          $ra
    // 0x08001C40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001C40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000630_71DE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000630: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000634: jr          $ra
    // 0x08000638: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x08000638: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_080014DC_71ECAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014DC: jr          $ra
    // 0x080014E0: nop

    TRACE_RETURN()
    return;
    // 0x080014E0: nop

    // 0x080014E4: jr          $ra
    // 0x080014E8: nop

    TRACE_RETURN()
    return;
    // 0x080014E8: nop

;}
RECOMP_FUNC void func_08000DC4_71E594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000DC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08000DCC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000DD0: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x08000DD4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X3098) << 16);
    // 0x08000DD8: ldc1        $f16, 0x3098($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(51, 0X3098));
    // 0x08000DDC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000DE0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000DE4: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x08000DE8: nop

    // 0x08000DEC: bc1fl       L_08000E68
    if (!c1cs) {
        // 0x08000DF0: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_08000E68;
    }
    goto skip_0;
    // 0x08000DF0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x08000DF4: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000DF8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000DFC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x08000E00: nop

    // 0x08000E04: bc1fl       L_08000E1C
    if (!c1cs) {
        // 0x08000E08: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_08000E1C;
    }
    goto skip_1;
    // 0x08000E08: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x08000E0C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x08000E10: b           L_08000E1C
    // 0x08000E14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000E1C;
    // 0x08000E14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000E18: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_08000E1C:
    // 0x08000E1C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000E20: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x08000E24: nop

    // 0x08000E28: bc1fl       L_08000E44
    if (!c1cs) {
        // 0x08000E2C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_08000E44;
    }
    goto skip_2;
    // 0x08000E2C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x08000E30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000E34: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x08000E38: b           L_08000E64
    // 0x08000E3C: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
        goto L_08000E64;
    // 0x08000E3C: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x08000E40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_08000E44:
    // 0x08000E44: nop

    // 0x08000E48: bc1fl       L_08000E60
    if (!c1cs) {
        // 0x08000E4C: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_08000E60;
    }
    goto skip_3;
    // 0x08000E4C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x08000E50: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x08000E54: b           L_08000E64
    // 0x08000E58: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
        goto L_08000E64;
    // 0x08000E58: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x08000E5C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_08000E60:
    // 0x08000E60: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_08000E64:
    // 0x08000E64: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_08000E68:
    // 0x08000E68: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x08000E6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000E70: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x08000E74: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x08000E78: nop

    // 0x08000E7C: bc1fl       L_08000EF0
    if (!c1cs) {
        // 0x08000E80: lwc1        $f14, 0x24($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
            goto L_08000EF0;
    }
    goto skip_4;
    // 0x08000E80: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    skip_4:
    // 0x08000E84: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08000E88: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000E8C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x08000E90: nop

    // 0x08000E94: bc1fl       L_08000EAC
    if (!c1cs) {
        // 0x08000E98: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_08000EAC;
    }
    goto skip_5;
    // 0x08000E98: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x08000E9C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x08000EA0: b           L_08000EAC
    // 0x08000EA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000EAC;
    // 0x08000EA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000EA8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_08000EAC:
    // 0x08000EAC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x08000EB0: nop

    // 0x08000EB4: bc1fl       L_08000ECC
    if (!c1cs) {
        // 0x08000EB8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_08000ECC;
    }
    goto skip_6;
    // 0x08000EB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x08000EBC: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x08000EC0: b           L_08000EEC
    // 0x08000EC4: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
        goto L_08000EEC;
    // 0x08000EC4: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x08000EC8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_08000ECC:
    // 0x08000ECC: nop

    // 0x08000ED0: bc1fl       L_08000EE8
    if (!c1cs) {
        // 0x08000ED4: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_08000EE8;
    }
    goto skip_7;
    // 0x08000ED4: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x08000ED8: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x08000EDC: b           L_08000EEC
    // 0x08000EE0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
        goto L_08000EEC;
    // 0x08000EE0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x08000EE4: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_08000EE8:
    // 0x08000EE8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
L_08000EEC:
    // 0x08000EEC: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
L_08000EF0:
    // 0x08000EF0: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x08000EF4: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x08000EF8: nop

    // 0x08000EFC: bc1fl       L_08000F70
    if (!c1cs) {
        // 0x08000F00: lwc1        $f14, 0x30($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
            goto L_08000F70;
    }
    goto skip_8;
    // 0x08000F00: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    skip_8:
    // 0x08000F04: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08000F08: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000F0C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x08000F10: nop

    // 0x08000F14: bc1fl       L_08000F2C
    if (!c1cs) {
        // 0x08000F18: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_08000F2C;
    }
    goto skip_9;
    // 0x08000F18: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x08000F1C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x08000F20: b           L_08000F2C
    // 0x08000F24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000F2C;
    // 0x08000F24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000F28: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_08000F2C:
    // 0x08000F2C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x08000F30: nop

    // 0x08000F34: bc1fl       L_08000F4C
    if (!c1cs) {
        // 0x08000F38: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_08000F4C;
    }
    goto skip_10;
    // 0x08000F38: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x08000F3C: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x08000F40: b           L_08000F6C
    // 0x08000F44: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
        goto L_08000F6C;
    // 0x08000F44: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x08000F48: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_08000F4C:
    // 0x08000F4C: nop

    // 0x08000F50: bc1fl       L_08000F68
    if (!c1cs) {
        // 0x08000F54: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_08000F68;
    }
    goto skip_11;
    // 0x08000F54: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x08000F58: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x08000F5C: b           L_08000F6C
    // 0x08000F60: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
        goto L_08000F6C;
    // 0x08000F60: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x08000F64: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_08000F68:
    // 0x08000F68: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_08000F6C:
    // 0x08000F6C: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
L_08000F70:
    // 0x08000F70: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x08000F74: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x08000F78: nop

    // 0x08000F7C: bc1fl       L_08000FF0
    if (!c1cs) {
        // 0x08000F80: lw          $a0, 0x3C($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X3C);
            goto L_08000FF0;
    }
    goto skip_12;
    // 0x08000F80: lw          $a0, 0x3C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X3C);
    skip_12:
    // 0x08000F84: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x08000F88: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x08000F8C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x08000F90: nop

    // 0x08000F94: bc1fl       L_08000FAC
    if (!c1cs) {
        // 0x08000F98: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_08000FAC;
    }
    goto skip_13;
    // 0x08000F98: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x08000F9C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x08000FA0: b           L_08000FAC
    // 0x08000FA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000FAC;
    // 0x08000FA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000FA8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_08000FAC:
    // 0x08000FAC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x08000FB0: nop

    // 0x08000FB4: bc1fl       L_08000FCC
    if (!c1cs) {
        // 0x08000FB8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_08000FCC;
    }
    goto skip_14;
    // 0x08000FB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x08000FBC: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x08000FC0: b           L_08000FEC
    // 0x08000FC4: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
        goto L_08000FEC;
    // 0x08000FC4: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    // 0x08000FC8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_08000FCC:
    // 0x08000FCC: nop

    // 0x08000FD0: bc1fl       L_08000FE8
    if (!c1cs) {
        // 0x08000FD4: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_08000FE8;
    }
    goto skip_15;
    // 0x08000FD4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x08000FD8: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x08000FDC: b           L_08000FEC
    // 0x08000FE0: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
        goto L_08000FEC;
    // 0x08000FE0: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x08000FE4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_08000FE8:
    // 0x08000FE8: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
L_08000FEC:
    // 0x08000FEC: lw          $a0, 0x3C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X3C);
L_08000FF0:
    // 0x08000FF0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x08000FF4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000FF8: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x08000FFC: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x08001000: lbu         $t8, 0x37($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X37);
    // 0x08001004: lbu         $a3, 0x36($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X36);
    // 0x08001008: lbu         $a2, 0x35($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X35);
    // 0x0800100C: lbu         $a1, 0x34($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X34);
    // 0x08001010: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001014: lbu         $t9, 0x38($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X38);
    // 0x08001018: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x0800101C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001020: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08001024: lbu         $t0, 0x39($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X39);
    // 0x08001028: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x0800102C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001030: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x08001034: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08001038: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x0800103C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08001040: nop

    // 0x08001044: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x08001048: beql        $t2, $zero, L_08001098
    if (ctx->r10 == 0) {
        // 0x0800104C: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_08001098;
    }
    goto skip_16;
    // 0x0800104C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_16:
    // 0x08001050: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001054: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001058: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800105C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x08001060: nop

    // 0x08001064: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001068: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x0800106C: nop

    // 0x08001070: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x08001074: bne         $t2, $zero, L_0800108C
    if (ctx->r10 != 0) {
        // 0x08001078: nop
    
            goto L_0800108C;
    }
    // 0x08001078: nop

    // 0x0800107C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x08001080: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001084: b           L_080010A4
    // 0x08001088: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_080010A4;
    // 0x08001088: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_0800108C:
    // 0x0800108C: b           L_080010A4
    // 0x08001090: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_080010A4;
    // 0x08001090: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x08001094: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_08001098:
    // 0x08001098: nop

    // 0x0800109C: bltz        $t2, L_0800108C
    if (SIGNED(ctx->r10) < 0) {
        // 0x080010A0: nop
    
            goto L_0800108C;
    }
    // 0x080010A0: nop

L_080010A4:
    // 0x080010A4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x080010A8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080010AC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x080010B0: nop

    // 0x080010B4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x080010B8: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x080010BC: nop

    // 0x080010C0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x080010C4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080010C8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x080010CC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x080010D0: nop

    // 0x080010D4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x080010D8: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x080010DC: jal         0x0800095C
    // 0x080010E0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_0800095C_71E12C(rdram, ctx);
        goto after_0;
    // 0x080010E0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x080010E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x080010E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080010EC: jr          $ra
    // 0x080010F0: nop

    TRACE_RETURN()
    return;
    // 0x080010F0: nop

;}
RECOMP_FUNC void func_0800043C_71DC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800043C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000444: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000448: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x0800044C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X3088) << 16);
    // 0x08000450: ldc1        $f4, 0x3088($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(51, 0X3088));
    // 0x08000454: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000458: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x0800045C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08000460: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000464: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0800046C: bc1fl       L_080004E8
    if (!c1cs) {
        // 0x08000470: addiu       $v0, $a3, 0x5C
        ctx->r2 = ADD32(ctx->r7, 0X5C);
            goto L_080004E8;
    }
    goto skip_0;
    // 0x08000470: addiu       $v0, $a3, 0x5C
    ctx->r2 = ADD32(ctx->r7, 0X5C);
    skip_0:
    // 0x08000474: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000478: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0800047C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000480: nop

    // 0x08000484: bc1fl       L_0800049C
    if (!c1cs) {
        // 0x08000488: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_0800049C;
    }
    goto skip_1;
    // 0x08000488: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x0800048C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x08000490: b           L_0800049C
    // 0x08000494: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_0800049C;
    // 0x08000494: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x08000498: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_0800049C:
    // 0x0800049C: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080004A0: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x080004A4: nop

    // 0x080004A8: bc1fl       L_080004C4
    if (!c1cs) {
        // 0x080004AC: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_080004C4;
    }
    goto skip_2;
    // 0x080004AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x080004B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080004B4: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x080004B8: b           L_080004E4
    // 0x080004BC: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_080004E4;
    // 0x080004BC: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x080004C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_080004C4:
    // 0x080004C4: nop

    // 0x080004C8: bc1fl       L_080004E0
    if (!c1cs) {
        // 0x080004CC: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_080004E0;
    }
    goto skip_3;
    // 0x080004CC: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x080004D0: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x080004D4: b           L_080004E4
    // 0x080004D8: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_080004E4;
    // 0x080004D8: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x080004DC: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_080004E0:
    // 0x080004E0: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_080004E4:
    // 0x080004E4: addiu       $v0, $a3, 0x5C
    ctx->r2 = ADD32(ctx->r7, 0X5C);
L_080004E8:
    // 0x080004E8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x080004EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080004F0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x080004F4: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x080004F8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x080004FC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08000500: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000504: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x08000508: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(51, 0X2938) << 16);
    // 0x0800050C: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08000510: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x08000514: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x08000518: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x0800051C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08000520: addiu       $t0, $t0, 0x2938
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(51, 0X2938));
    // 0x08000524: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x08000528: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x0800052C: beq         $a2, $zero, L_08000578
    if (ctx->r6 == 0) {
        // 0x08000530: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_08000578;
    }
    // 0x08000530: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000538: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0800053C: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x08000540: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08000544: nop

    // 0x08000548: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x0800054C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08000550: nop

    // 0x08000554: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08000558: bne         $a2, $zero, L_08000570
    if (ctx->r6 != 0) {
        // 0x0800055C: nop
    
            goto L_08000570;
    }
    // 0x0800055C: nop

    // 0x08000560: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08000564: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000568: b           L_08000588
    // 0x0800056C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_08000588;
    // 0x0800056C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_08000570:
    // 0x08000570: b           L_08000588
    // 0x08000574: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_08000588;
    // 0x08000574: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_08000578:
    // 0x08000578: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0800057C: nop

    // 0x08000580: bltz        $a2, L_08000570
    if (SIGNED(ctx->r6) < 0) {
        // 0x08000584: nop
    
            goto L_08000570;
    }
    // 0x08000584: nop

L_08000588:
    // 0x08000588: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x0800058C: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x08000590: jal         0x08000000
    // 0x08000594: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_08000000_71D7D0(rdram, ctx);
        goto after_0;
    // 0x08000594: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x08000598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800059C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005A0: jr          $ra
    // 0x080005A4: nop

    TRACE_RETURN()
    return;
    // 0x080005A4: nop

;}
RECOMP_FUNC void func_080019DC_71F1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080019E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019E4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x080019E8: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080019EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0X1670) << 16);
    // 0x080019F0: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x080019F4: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x080019F8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x080019FC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x08001A00: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x08001A04: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x08001A08: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08001A0C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08001A10: addiu       $a1, $a1, 0x1670
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(51, 0X1670));
    // 0x08001A14: jalr        $t9
    // 0x08001A18: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A18: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x08001A1C: bne         $v0, $zero, L_08001A2C
    if (ctx->r2 != 0) {
        // 0x08001A20: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_08001A2C;
    }
    // 0x08001A20: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x08001A24: b           L_08001B98
    // 0x08001A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001B98;
    // 0x08001A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001A2C:
    // 0x08001A2C: jal         0x08001610
    // 0x08001A30: sh          $zero, 0x22($s7)
    MEM_H(0X22, ctx->r23) = 0;
    func_08001610_71EDE0(rdram, ctx);
        goto after_1;
    // 0x08001A30: sh          $zero, 0x22($s7)
    MEM_H(0X22, ctx->r23) = 0;
    after_1:
    // 0x08001A34: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001A38: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001A3C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001A40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A44: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001A48: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001A4C: addiu       $a1, $zero, 0x1900
    ctx->r5 = ADD32(0, 0X1900);
    // 0x08001A50: jalr        $t9
    // 0x08001A54: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A54: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x08001A58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A5C: addiu       $s5, $s7, 0x5C
    ctx->r21 = ADD32(ctx->r23, 0X5C);
    // 0x08001A60: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x08001A64: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x08001A68: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08001A6C: jalr        $t9
    // 0x08001A70: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A70: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x08001A74: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08001A78: addiu       $s0, $s0, 0x3DC
    ctx->r16 = ADD32(ctx->r16, 0X3DC);
    // 0x08001A7C: sw          $v0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r2;
    // 0x08001A80: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08001A84: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x08001A88: jalr        $s0
    // 0x08001A8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08001A8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08001A90: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x08001A94: bne         $v0, $s1, L_08001AA4
    if (ctx->r2 != ctx->r17) {
        // 0x08001A98: sw          $v0, 0x4($s5)
        MEM_W(0X4, ctx->r21) = ctx->r2;
            goto L_08001AA4;
    }
    // 0x08001A98: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x08001A9C: b           L_08001B98
    // 0x08001AA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001B98;
    // 0x08001AA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001AA4:
    // 0x08001AA4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08001AA8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x08001AAC: jalr        $s0
    // 0x08001AB0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08001AB0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_5:
    // 0x08001AB4: bne         $v0, $s1, L_08001AC4
    if (ctx->r2 != ctx->r17) {
        // 0x08001AB8: sw          $v0, 0x8($s5)
        MEM_W(0X8, ctx->r21) = ctx->r2;
            goto L_08001AC4;
    }
    // 0x08001AB8: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
    // 0x08001ABC: b           L_08001B98
    // 0x08001AC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001B98;
    // 0x08001AC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001AC4:
    // 0x08001AC4: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x08001AC8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x08001ACC: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x08001AD0: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x08001AD4: lui         $s4, 0x8001
    ctx->r20 = S32(0X8001 << 16);
    // 0x08001AD8: lui         $s1, 0x800
    ctx->r17 = S32(RELOC_HI16(51, 0X3F18) << 16);
    // 0x08001ADC: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x08001AE0: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x08001AE4: addiu       $s1, $s1, 0x3F18
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(51, 0X3F18));
    // 0x08001AE8: addiu       $s4, $s4, 0x6F0
    ctx->r20 = ADD32(ctx->r20, 0X6F0);
    // 0x08001AEC: addiu       $s3, $zero, 0x58
    ctx->r19 = ADD32(0, 0X58);
    // 0x08001AF0: addiu       $s6, $zero, 0xD0
    ctx->r22 = ADD32(0, 0XD0);
    // 0x08001AF4: addiu       $s2, $zero, 0x10C
    ctx->r18 = ADD32(0, 0X10C);
    // 0x08001AF8: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x08001AFC: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x08001B00: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x08001B04: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x08001B08: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x08001B0C: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
L_08001B10:
    // 0x08001B10: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
L_08001B14:
    // 0x08001B14: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x08001B18: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x08001B1C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08001B20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08001B24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001B28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08001B2C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x08001B30: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x08001B34: jalr        $s4
    // 0x08001B38: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x08001B38: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_6:
    // 0x08001B3C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x08001B40: bnel        $s0, $s2, L_08001B14
    if (ctx->r16 != ctx->r18) {
        // 0x08001B44: lw          $a0, 0x8($s5)
        ctx->r4 = MEM_W(ctx->r21, 0X8);
            goto L_08001B14;
    }
    goto skip_0;
    // 0x08001B44: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    skip_0:
    // 0x08001B48: addiu       $s3, $s3, 0x18
    ctx->r19 = ADD32(ctx->r19, 0X18);
    // 0x08001B4C: bnel        $s3, $s6, L_08001B10
    if (ctx->r19 != ctx->r22) {
        // 0x08001B50: addiu       $s0, $zero, 0x34
        ctx->r16 = ADD32(0, 0X34);
            goto L_08001B10;
    }
    goto skip_1;
    // 0x08001B50: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
    skip_1:
    // 0x08001B54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B58: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x08001B5C: jalr        $t9
    // 0x08001B60: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001B60: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    after_7:
    // 0x08001B64: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x08001B68: lw          $v0, -0x38F8($t3)
    ctx->r2 = MEM_W(ctx->r11, -0X38F8);
    // 0x08001B6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08001B70: slti        $at, $v0, 0x2E
    ctx->r1 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x08001B74: bne         $at, $zero, L_08001B84
    if (ctx->r1 != 0) {
        // 0x08001B78: sw          $v0, 0x18($s5)
        MEM_W(0X18, ctx->r21) = ctx->r2;
            goto L_08001B84;
    }
    // 0x08001B78: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x08001B7C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x08001B80: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
L_08001B84:
    // 0x08001B84: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x08001B88: bne         $v0, $at, L_08001B94
    if (ctx->r2 != ctx->r1) {
        // 0x08001B8C: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_08001B94;
    }
    // 0x08001B8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001B90: sw          $t5, -0x33E8($at)
    MEM_W(-0X33E8, ctx->r1) = ctx->r13;
L_08001B94:
    // 0x08001B94: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_08001B98:
    // 0x08001B98: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x08001B9C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08001BA0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08001BA4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x08001BA8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x08001BAC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x08001BB0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x08001BB4: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x08001BB8: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x08001BBC: jr          $ra
    // 0x08001BC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08001BC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08001670_71EE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001670: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x08001674: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x08001678: addiu       $s2, $a0, 0x5C
    ctx->r18 = ADD32(ctx->r4, 0X5C);
    // 0x0800167C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08001680: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x08001684: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08001688: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x0800168C: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x08001690: lbu         $v0, 0x5C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5C);
    // 0x08001694: beq         $v0, $zero, L_080016B4
    if (ctx->r2 == 0) {
        // 0x08001698: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_080016B4;
    }
    // 0x08001698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800169C: beq         $v0, $at, L_080017EC
    if (ctx->r2 == ctx->r1) {
        // 0x080016A0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080017EC;
    }
    // 0x080016A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080016A4: beql        $v0, $at, L_08001824
    if (ctx->r2 == ctx->r1) {
        // 0x080016A8: lw          $a0, 0xC($s2)
        ctx->r4 = MEM_W(ctx->r18, 0XC);
            goto L_08001824;
    }
    goto skip_0;
    // 0x080016A8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    skip_0:
    // 0x080016AC: b           L_08001824
    // 0x080016B0: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
        goto L_08001824;
    // 0x080016B0: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
L_080016B4:
    // 0x080016B4: lh          $t6, 0x2($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X2);
    // 0x080016B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080016BC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x080016C0: mfhi        $t7
    ctx->r15 = hi;
    // 0x080016C4: bne         $t7, $zero, L_08001734
    if (ctx->r15 != 0) {
        // 0x080016C8: nop
    
            goto L_08001734;
    }
    // 0x080016C8: nop

    // 0x080016CC: lw          $t8, 0x14($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X14);
    // 0x080016D0: lb          $t9, 0x1($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X1);
    // 0x080016D4: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x080016D8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080016DC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x080016E0: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x080016E4: beq         $at, $zero, L_08001734
    if (ctx->r1 == 0) {
        // 0x080016E8: sw          $t0, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r8;
            goto L_08001734;
    }
    // 0x080016E8: sw          $t0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r8;
    // 0x080016EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080016F0: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x080016F4: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x080016F8: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    // 0x080016FC: jalr        $t9
    // 0x08001700: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001700: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x08001704: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001708: addiu       $t9, $t9, 0x3698
    ctx->r25 = ADD32(ctx->r25, 0X3698);
    // 0x0800170C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001710: jalr        $t9
    // 0x08001714: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001714: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    after_1:
    // 0x08001718: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800171C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001720: jalr        $t9
    // 0x08001724: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001724: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    after_2:
    // 0x08001728: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0800172C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x08001730: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
L_08001734:
    // 0x08001734: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001738: addiu       $t9, $t9, 0x358
    ctx->r25 = ADD32(ctx->r25, 0X358);
    // 0x0800173C: jalr        $t9
    // 0x08001740: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001740: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_3:
    // 0x08001744: lw          $t3, 0x14($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X14);
    // 0x08001748: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
    // 0x0800174C: addiu       $s1, $zero, 0x40
    ctx->r17 = ADD32(0, 0X40);
    // 0x08001750: blez        $t3, L_080017D4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x08001754: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_080017D4;
    }
    // 0x08001754: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x08001758: lui         $t4, 0x8001
    ctx->r12 = S32(0X8001 << 16);
    // 0x0800175C: addiu       $t4, $t4, 0x6F0
    ctx->r12 = ADD32(ctx->r12, 0X6F0);
    // 0x08001760: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x08001764: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_08001768:
    // 0x08001768: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x0800176C: mfhi        $t5
    ctx->r13 = hi;
    // 0x08001770: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x08001774: bne         $t5, $zero, L_08001784
    if (ctx->r13 != 0) {
        // 0x08001778: addiu       $t6, $zero, 0x18
        ctx->r14 = ADD32(0, 0X18);
            goto L_08001784;
    }
    // 0x08001778: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x0800177C: addiu       $s0, $zero, 0x34
    ctx->r16 = ADD32(0, 0X34);
    // 0x08001780: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
L_08001784:
    // 0x08001784: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x08001788: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x0800178C: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(51, 0X3F18) << 16);
    // 0x08001790: lw          $t7, 0x3F18($t7)
    ctx->r15 = MEM_W(ctx->r15, (int16_t)RELOC_LO16(51, 0X3F18));
    // 0x08001794: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x08001798: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0800179C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080017A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080017A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080017A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080017AC: jalr        $t9
    // 0x080017B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080017B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x080017B4: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x080017B8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x080017BC: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x080017C0: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x080017C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x080017C8: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x080017CC: bnel        $at, $zero, L_08001768
    if (ctx->r1 != 0) {
        // 0x080017D0: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_08001768;
    }
    goto skip_1;
    // 0x080017D0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    skip_1:
L_080017D4:
    // 0x080017D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080017D8: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x080017DC: jalr        $t9
    // 0x080017E0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080017E0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_5:
    // 0x080017E4: b           L_08001824
    // 0x080017E8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
        goto L_08001824;
    // 0x080017E8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
L_080017EC:
    // 0x080017EC: lh          $t1, 0x2($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X2);
    // 0x080017F0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x080017F4: bnel        $t1, $at, L_08001824
    if (ctx->r9 != ctx->r1) {
        // 0x080017F8: lw          $a0, 0xC($s2)
        ctx->r4 = MEM_W(ctx->r18, 0XC);
            goto L_08001824;
    }
    goto skip_2;
    // 0x080017F8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    skip_2:
    // 0x080017FC: lw          $t2, 0x14($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X14);
    // 0x08001800: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x08001804: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001808: bne         $t2, $at, L_08001820
    if (ctx->r10 != ctx->r1) {
        // 0x0800180C: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_08001820;
    }
    // 0x0800180C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001810: jalr        $t9
    // 0x08001814: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001814: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_6:
    // 0x08001818: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x0800181C: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
L_08001820:
    // 0x08001820: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
L_08001824:
    // 0x08001824: lw          $t5, 0x10($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X10);
    // 0x08001828: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800182C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08001830: or          $t4, $a0, $at
    ctx->r12 = ctx->r4 | ctx->r1;
    // 0x08001834: addiu       $v0, $v0, 0xB60
    ctx->r2 = ADD32(ctx->r2, 0XB60);
    // 0x08001838: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    // 0x0800183C: jalr        $v0
    // 0x08001840: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08001840: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_7:
    // 0x08001844: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08001848: addiu       $v1, $v1, 0x980
    ctx->r3 = ADD32(ctx->r3, 0X980);
    // 0x0800184C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001850: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x08001854: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x08001858: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x0800185C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001860: jalr        $v1
    // 0x08001864: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x08001864: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_8:
    // 0x08001868: lui         $s1, 0x8001
    ctx->r17 = S32(0X8001 << 16);
    // 0x0800186C: addiu       $s1, $s1, 0x9A4
    ctx->r17 = ADD32(ctx->r17, 0X9A4);
    // 0x08001870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001874: jalr        $s1
    // 0x08001878: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_9;
    // 0x08001878: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x0800187C: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08001880: addiu       $v1, $v1, 0xE9C
    ctx->r3 = ADD32(ctx->r3, 0XE9C);
    // 0x08001884: lui         $a3, 0x800
    ctx->r7 = S32(RELOC_HI16(51, 0X2CC4) << 16);
    // 0x08001888: lw          $a3, 0x2CC4($a3)
    ctx->r7 = MEM_W(ctx->r7, (int16_t)RELOC_LO16(51, 0X2CC4));
    // 0x0800188C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x08001890: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001894: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x08001898: jalr        $v1
    // 0x0800189C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_10;
    // 0x0800189C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_10:
    // 0x080018A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080018A4: jalr        $s1
    // 0x080018A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_11;
    // 0x080018A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x080018AC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x080018B0: lui         $a3, 0x800
    ctx->r7 = S32(RELOC_HI16(51, 0X2CC4) << 16);
    // 0x080018B4: lw          $a3, 0x2CC4($a3)
    ctx->r7 = MEM_W(ctx->r7, (int16_t)RELOC_LO16(51, 0X2CC4));
    // 0x080018B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080018BC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080018C0: jalr        $t9
    // 0x080018C4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080018C4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_12:
    // 0x080018C8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x080018CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080018D0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x080018D4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x080018D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080018DC: jalr        $t9
    // 0x080018E0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080018E0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_13:
    // 0x080018E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x080018E8: lui         $a3, 0x800
    ctx->r7 = S32(RELOC_HI16(51, 0X2CC8) << 16);
    // 0x080018EC: lw          $a3, 0x2CC8($a3)
    ctx->r7 = MEM_W(ctx->r7, (int16_t)RELOC_LO16(51, 0X2CC8));
    // 0x080018F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018F4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x080018F8: jalr        $t9
    // 0x080018FC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080018FC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_14:
    // 0x08001900: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x08001904: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800190C: slti        $at, $t6, 0x2D
    ctx->r1 = SIGNED(ctx->r14) < 0X2D ? 1 : 0;
    // 0x08001910: bne         $at, $zero, L_080019AC
    if (ctx->r1 != 0) {
        // 0x08001914: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080019AC;
    }
    // 0x08001914: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001918: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800191C: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x08001920: jalr        $t9
    // 0x08001924: sw          $t7, -0x33E8($at)
    MEM_W(-0X33E8, ctx->r1) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001924: sw          $t7, -0x33E8($at)
    MEM_W(-0X33E8, ctx->r1) = ctx->r15;
    after_15:
    // 0x08001928: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800192C: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x08001930: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x08001934: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x08001938: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x0800193C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x08001940: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x08001944: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800194C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x08001950: addiu       $a2, $zero, 0x6C
    ctx->r6 = ADD32(0, 0X6C);
    // 0x08001954: addiu       $a3, $zero, 0xF6
    ctx->r7 = ADD32(0, 0XF6);
    // 0x08001958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0800195C: jalr        $t9
    // 0x08001960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_16:
    // 0x08001964: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x08001968: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800196C: jalr        $t9
    // 0x08001970: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001970: nop

    after_17:
    // 0x08001974: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x08001978: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800197C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x08001980: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x08001984: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001988: jalr        $t9
    // 0x0800198C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800198C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x08001990: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x08001994: lui         $a3, 0x800
    ctx->r7 = S32(RELOC_HI16(51, 0X2CCC) << 16);
    // 0x08001998: lw          $a3, 0x2CCC($a3)
    ctx->r7 = MEM_W(ctx->r7, (int16_t)RELOC_LO16(51, 0X2CCC));
    // 0x0800199C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080019A0: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x080019A4: jalr        $t9
    // 0x080019A8: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080019A8: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    after_19:
L_080019AC:
    // 0x080019AC: lh          $t2, 0x2($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X2);
    // 0x080019B0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080019B4: sh          $t3, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r11;
    // 0x080019B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x080019BC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x080019C0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x080019C4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x080019C8: jr          $ra
    // 0x080019CC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x080019CC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_08001D2C_71F4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001D30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001D34: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08001D38: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001D3C: lbu         $t7, 0x5C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5C);
    // 0x08001D40: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x08001D44: beq         $at, $zero, L_08002694
    if (ctx->r1 == 0) {
        // 0x08001D48: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08002694;
    }
    // 0x08001D48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08001D4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X30A8) << 16);
    // 0x08001D50: addu        $at, $at, $t7
    gpr jr_addend_08001D58 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08001D54: lw          $t7, 0x30A8($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(51, 0X30A8));
    // 0x08001D58: jr          $t7
    // 0x08001D5C: nop

    switch (jr_addend_08001D58 >> 2) {
        case 0: goto L_08001D60; break;
        case 1: goto L_08002694; break;
        case 2: goto L_08001DF8; break;
        case 3: goto L_08001E50; break;
        case 4: goto L_08002018; break;
        case 5: goto L_080022A8; break;
        case 6: goto L_08002354; break;
        case 7: goto L_08002584; break;
        case 8: goto L_08002614; break;
        case 9: goto L_08002650; break;
        default: switch_error(__func__, 0x08001D58, 0x080030A8);
    }
    // 0x08001D5C: nop

L_08001D60:
    // 0x08001D60: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x08001D64: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08001D68: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x08001D6C: sh          $zero, 0x22($t8)
    MEM_H(0X22, ctx->r24) = 0;
    // 0x08001D70: addiu       $v1, $t8, 0x5C
    ctx->r3 = ADD32(ctx->r24, 0X5C);
    // 0x08001D74: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08001D78: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x08001D7C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x08001D80: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001D84: bgtz        $a0, L_08001DF0
    if (SIGNED(ctx->r4) > 0) {
        // 0x08001D88: nop
    
            goto L_08001DF0;
    }
    // 0x08001D88: nop

    // 0x08001D8C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D90: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x08001D94: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x08001D98: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x08001D9C: mflo        $t9
    ctx->r25 = lo;
    // 0x08001DA0: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x08001DA4: lh          $t4, 0x0($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X0);
    // 0x08001DA8: multu       $t4, $t3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001DAC: mflo        $t5
    ctx->r13 = lo;
    // 0x08001DB0: addu        $v0, $t2, $t5
    ctx->r2 = ADD32(ctx->r10, ctx->r13);
    // 0x08001DB4: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x08001DB8: bgez        $a1, L_08001DC8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x08001DBC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_08001DC8;
    }
    // 0x08001DBC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x08001DC0: b           L_08001DC8
    // 0x08001DC4: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
        goto L_08001DC8;
    // 0x08001DC4: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
L_08001DC8:
    // 0x08001DC8: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001DCC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08001DD0: mflo        $t6
    ctx->r14 = lo;
    // 0x08001DD4: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x08001DD8: jal         0x08001BC4
    // 0x08001DDC: nop

    func_08001BC4_71F394(rdram, ctx);
        goto after_0;
    // 0x08001DDC: nop

    after_0:
    // 0x08001DE0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001DE4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08001DE8: b           L_08002694
    // 0x08001DEC: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_08002694;
    // 0x08001DEC: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_08001DF0:
    // 0x08001DF0: b           L_08002694
    // 0x08001DF4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
        goto L_08002694;
    // 0x08001DF4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_08001DF8:
    // 0x08001DF8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08001DFC: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x08001E00: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x08001E04: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x08001E08: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001E0C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x08001E10: lhu         $t4, -0x4F86($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X4F86);
    // 0x08001E14: addiu       $v1, $v1, 0x71BC
    ctx->r3 = ADD32(ctx->r3, 0X71BC);
    // 0x08001E18: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x08001E1C: beql        $t5, $zero, L_08002698
    if (ctx->r13 == 0) {
        // 0x08001E20: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_0;
    // 0x08001E20: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x08001E24: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x08001E28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001E2C: bnel        $a3, $t6, L_08001E3C
    if (ctx->r7 != ctx->r14) {
        // 0x08001E30: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08001E3C;
    }
    goto skip_1;
    // 0x08001E30: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x08001E34: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x08001E38: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001E3C:
    // 0x08001E3C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x08001E40: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x08001E44: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08001E48: b           L_08002694
    // 0x08001E4C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_08002694;
    // 0x08001E4C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_08001E50:
    // 0x08001E50: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001E54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001E58: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001E5C: lh          $v0, 0x5E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X5E);
    // 0x08001E60: addiu       $t9, $t9, 0x6D4
    ctx->r25 = ADD32(ctx->r25, 0X6D4);
    // 0x08001E64: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x08001E68: bnel        $a3, $v0, L_08001E9C
    if (ctx->r7 != ctx->r2) {
        // 0x08001E6C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_08001E9C;
    }
    goto skip_2;
    // 0x08001E6C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_2:
    // 0x08001E70: jalr        $t9
    // 0x08001E74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E74: nop

    after_1:
    // 0x08001E78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08001E7C: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x08001E80: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x08001E84: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001E88: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001E8C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x08001E90: b           L_08002694
    // 0x08001E94: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
        goto L_08002694;
    // 0x08001E94: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
    // 0x08001E98: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_08001E9C:
    // 0x08001E9C: bne         $v0, $at, L_08001EFC
    if (ctx->r2 != ctx->r1) {
        // 0x08001EA0: addiu       $t5, $zero, 0x50
        ctx->r13 = ADD32(0, 0X50);
            goto L_08001EFC;
    }
    // 0x08001EA0: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x08001EA4: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x08001EA8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x08001EAC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x08001EB0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08001EB4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08001EB8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08001EBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08001EC0: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x08001EC4: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    // 0x08001EC8: jal         0x08001234
    // 0x08001ECC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_08001234_71EA04(rdram, ctx);
        goto after_2;
    // 0x08001ECC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x08001ED0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001ED4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001ED8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x08001EDC: jal         0x080010F4
    // 0x08001EE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_080010F4_71E8C4(rdram, ctx);
        goto after_3;
    // 0x08001EE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_3:
    // 0x08001EE4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001EE8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x08001EEC: jal         0x080011E0
    // 0x08001EF0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    func_080011E0_71E9B0(rdram, ctx);
        goto after_4;
    // 0x08001EF0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    after_4:
    // 0x08001EF4: b           L_08002698
    // 0x08001EF8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001EF8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001EFC:
    // 0x08001EFC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08001F00: bne         $v0, $at, L_08002000
    if (ctx->r2 != ctx->r1) {
        // 0x08001F04: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002000;
    }
    // 0x08001F04: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F08: addiu       $t9, $t9, 0x6FC
    ctx->r25 = ADD32(ctx->r25, 0X6FC);
    // 0x08001F0C: jalr        $t9
    // 0x08001F10: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001F10: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_5:
    // 0x08001F14: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001F18: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001F1C: jal         0x0800118C
    // 0x08001F20: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    func_0800118C_71E95C(rdram, ctx);
        goto after_6;
    // 0x08001F20: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    after_6:
    // 0x08001F24: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08001F28: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x08001F2C: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x08001F30: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x08001F34: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x08001F38: multu       $t8, $t3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001F3C: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x08001F40: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001F44: mflo        $t4
    ctx->r12 = lo;
    // 0x08001F48: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x08001F4C: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x08001F50: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x08001F54: beq         $at, $zero, L_08002694
    if (ctx->r1 == 0) {
        // 0x08001F58: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002694;
    }
    // 0x08001F58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08001F5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X30D0) << 16);
    // 0x08001F60: addu        $at, $at, $t6
    gpr jr_addend_08001F68 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001F64: lw          $t6, 0x30D0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(51, 0X30D0));
    // 0x08001F68: jr          $t6
    // 0x08001F6C: nop

    switch (jr_addend_08001F68 >> 2) {
        case 0: goto L_08001F70; break;
        case 1: goto L_08001F88; break;
        case 2: goto L_08001FA0; break;
        case 3: goto L_08001FB8; break;
        case 4: goto L_08001FD0; break;
        case 5: goto L_08001FE8; break;
        default: switch_error(__func__, 0x08001F68, 0x080030D0);
    }
    // 0x08001F6C: nop

L_08001F70:
    // 0x08001F70: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001F74: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001F78: jal         0x08001100
    // 0x08001F7C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_08001100_71E8D0(rdram, ctx);
        goto after_7;
    // 0x08001F7C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_7:
    // 0x08001F80: b           L_08002698
    // 0x08001F84: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001F84: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001F88:
    // 0x08001F88: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001F8C: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x08001F90: jal         0x08001100
    // 0x08001F94: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_08001100_71E8D0(rdram, ctx);
        goto after_8;
    // 0x08001F94: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_8:
    // 0x08001F98: b           L_08002698
    // 0x08001F9C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001F9C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001FA0:
    // 0x08001FA0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001FA4: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x08001FA8: jal         0x08001100
    // 0x08001FAC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_08001100_71E8D0(rdram, ctx);
        goto after_9;
    // 0x08001FAC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
    // 0x08001FB0: b           L_08002698
    // 0x08001FB4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001FB4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001FB8:
    // 0x08001FB8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001FBC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001FC0: jal         0x08001100
    // 0x08001FC4: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    func_08001100_71E8D0(rdram, ctx);
        goto after_10;
    // 0x08001FC4: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    after_10:
    // 0x08001FC8: b           L_08002698
    // 0x08001FCC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001FCC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001FD0:
    // 0x08001FD0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001FD4: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x08001FD8: jal         0x08001100
    // 0x08001FDC: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    func_08001100_71E8D0(rdram, ctx);
        goto after_11;
    // 0x08001FDC: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    after_11:
    // 0x08001FE0: b           L_08002698
    // 0x08001FE4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001FE4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08001FE8:
    // 0x08001FE8: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x08001FEC: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x08001FF0: jal         0x08001100
    // 0x08001FF4: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    func_08001100_71E8D0(rdram, ctx);
        goto after_12;
    // 0x08001FF4: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    after_12:
    // 0x08001FF8: b           L_08002698
    // 0x08001FFC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08001FFC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08002000:
    // 0x08002000: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x08002004: bne         $v0, $at, L_08002694
    if (ctx->r2 != ctx->r1) {
        // 0x08002008: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_08002694;
    }
    // 0x08002008: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x0800200C: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08002010: b           L_08002694
    // 0x08002014: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_08002694;
    // 0x08002014: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_08002018:
    // 0x08002018: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x0800201C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002020: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08002024: lh          $v0, 0x5E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X5E);
    // 0x08002028: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x0800202C: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x08002030: bne         $a3, $v0, L_080020D4
    if (ctx->r7 != ctx->r2) {
        // 0x08002034: addiu       $v1, $v1, 0x5C
        ctx->r3 = ADD32(ctx->r3, 0X5C);
            goto L_080020D4;
    }
    // 0x08002034: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x08002038: lh          $t9, 0x0($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X0);
    // 0x0800203C: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x08002040: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x08002044: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08002048: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x0800204C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002050: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x08002054: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002058: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x0800205C: mflo        $t8
    ctx->r24 = lo;
    // 0x08002060: addu        $t4, $t2, $t8
    ctx->r12 = ADD32(ctx->r10, ctx->r24);
    // 0x08002064: lb          $a1, 0x1($t4)
    ctx->r5 = MEM_B(ctx->r12, 0X1);
    // 0x08002068: bnel        $a1, $at, L_080020A0
    if (ctx->r5 != ctx->r1) {
        // 0x0800206C: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_080020A0;
    }
    goto skip_3;
    // 0x0800206C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_3:
    // 0x08002070: jalr        $t9
    // 0x08002074: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002074: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_13:
    // 0x08002078: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x0800207C: lh          $t5, 0x7C70($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7C70);
    // 0x08002080: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0X27B1) << 16);
    // 0x08002084: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08002088: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x0800208C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x08002090: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08002094: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x08002098: lb          $a1, 0x27B1($a1)
    ctx->r5 = MEM_B(ctx->r5, (int16_t)RELOC_LO16(51, 0X27B1));
    // 0x0800209C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_080020A0:
    // 0x080020A0: jal         0x08000690
    // 0x080020A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_08000690_71DE60(rdram, ctx);
        goto after_14;
    // 0x080020A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_14:
    // 0x080020A8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080020AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080020B0: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x080020B4: jal         0x08000630
    // 0x080020B8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    func_08000630_71DE00(rdram, ctx);
        goto after_15;
    // 0x080020B8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    after_15:
    // 0x080020BC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080020C0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x080020C4: jal         0x0800063C
    // 0x080020C8: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    func_0800063C_71DE0C(rdram, ctx);
        goto after_16;
    // 0x080020C8: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    after_16:
    // 0x080020CC: b           L_08002698
    // 0x080020D0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x080020D0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_080020D4:
    // 0x080020D4: bne         $v0, $at, L_0800219C
    if (ctx->r2 != ctx->r1) {
        // 0x080020D8: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_0800219C;
    }
    // 0x080020D8: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x080020DC: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x080020E0: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
    // 0x080020E4: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x080020E8: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x080020EC: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080020F0: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x080020F4: mflo        $t8
    ctx->r24 = lo;
    // 0x080020F8: addu        $v0, $t2, $t8
    ctx->r2 = ADD32(ctx->r10, ctx->r24);
    // 0x080020FC: lb          $t4, 0x2($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X2);
    // 0x08002100: bnel        $a3, $t4, L_08002698
    if (ctx->r7 != ctx->r12) {
        // 0x08002104: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_4;
    // 0x08002104: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_4:
    // 0x08002108: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x0800210C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002110: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x08002114: blez        $t9, L_08002694
    if (SIGNED(ctx->r25) <= 0) {
        // 0x08002118: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_08002694;
    }
    // 0x08002118: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800211C: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x08002120: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08002124: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002128: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x0800212C: sh          $a3, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r7;
    // 0x08002130: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x08002134: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08002138: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x0800213C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08002140: sb          $t6, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r14;
    // 0x08002144: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08002148: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x0800214C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08002150: lhu         $t4, 0x22($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X22);
    // 0x08002154: addiu       $t1, $t1, -0x3A28
    ctx->r9 = ADD32(ctx->r9, -0X3A28);
    // 0x08002158: sh          $t4, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r12;
    // 0x0800215C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x08002160: sh          $zero, 0x22($t9)
    MEM_H(0X22, ctx->r25) = 0;
    // 0x08002164: lw          $t5, -0x3A00($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A00);
    // 0x08002168: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800216C: addiu       $t9, $t9, -0x29AC
    ctx->r25 = ADD32(ctx->r25, -0X29AC);
    // 0x08002170: sh          $zero, 0x22($t5)
    MEM_H(0X22, ctx->r13) = 0;
    // 0x08002174: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x08002178: sw          $a3, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r7;
    // 0x0800217C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08002180: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08002184: mflo        $t7
    ctx->r15 = lo;
    // 0x08002188: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x0800218C: jalr        $t9
    // 0x08002190: lbu         $a1, 0x7($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08002190: lbu         $a1, 0x7($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X7);
    after_17:
    // 0x08002194: b           L_08002698
    // 0x08002198: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x08002198: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_0800219C:
    // 0x0800219C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x080021A0: bne         $v0, $at, L_08002280
    if (ctx->r2 != ctx->r1) {
        // 0x080021A4: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_08002280;
    }
    // 0x080021A4: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x080021A8: lhu         $t4, 0x14($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X14);
    // 0x080021AC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080021B0: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x080021B4: beq         $t4, $zero, L_08002200
    if (ctx->r12 == 0) {
        // 0x080021B8: addiu       $a2, $a2, 0x7C70
        ctx->r6 = ADD32(ctx->r6, 0X7C70);
            goto L_08002200;
    }
    // 0x080021B8: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x080021BC: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x080021C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080021C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080021C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x080021CC: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    // 0x080021D0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x080021D4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080021D8: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x080021DC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080021E0: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x080021E4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x080021E8: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x080021EC: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080021F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080021F4: sh          $t7, 0x22($t8)
    MEM_H(0X22, ctx->r24) = ctx->r15;
    // 0x080021F8: lw          $t4, -0x3A00($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A00);
    // 0x080021FC: sh          $t9, 0x22($t4)
    MEM_H(0X22, ctx->r12) = ctx->r25;
L_08002200:
    // 0x08002200: lh          $t5, 0x0($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X0);
    // 0x08002204: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x08002208: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x0800220C: multu       $t5, $t3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08002210: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x08002214: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08002218: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x0800221C: mflo        $t6
    ctx->r14 = lo;
    // 0x08002220: addu        $v0, $t2, $t6
    ctx->r2 = ADD32(ctx->r10, ctx->r14);
    // 0x08002224: lb          $t7, 0x2($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X2);
    // 0x08002228: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x0800222C: sb          $t8, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r24;
    // 0x08002230: lb          $t9, 0x2($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2);
    // 0x08002234: bnel        $t9, $zero, L_08002264
    if (ctx->r25 != 0) {
        // 0x08002238: lb          $t8, 0x1($v0)
        ctx->r24 = MEM_B(ctx->r2, 0X1);
            goto L_08002264;
    }
    goto skip_5;
    // 0x08002238: lb          $t8, 0x1($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X1);
    skip_5:
    // 0x0800223C: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08002240: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x08002244: lh          $t5, 0x7C70($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7C70);
    // 0x08002248: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x0800224C: addiu       $t7, $t7, 0x27B0
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x08002250: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x08002254: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x08002258: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x0800225C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x08002260: lb          $t8, 0x1($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X1);
L_08002264:
    // 0x08002264: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08002268: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x0800226C: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
    // 0x08002270: jal         0x0800063C
    // 0x08002274: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    func_0800063C_71DE0C(rdram, ctx);
        goto after_18;
    // 0x08002274: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    after_18:
    // 0x08002278: b           L_08002698
    // 0x0800227C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x0800227C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08002280:
    // 0x08002280: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x08002284: bnel        $v0, $at, L_08002698
    if (ctx->r2 != ctx->r1) {
        // 0x08002288: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_6;
    // 0x08002288: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_6:
    // 0x0800228C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x08002290: jal         0x080005A8
    // 0x08002294: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_080005A8_71DD78(rdram, ctx);
        goto after_19;
    // 0x08002294: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_19:
    // 0x08002298: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0800229C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x080022A0: b           L_08002694
    // 0x080022A4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
        goto L_08002694;
    // 0x080022A4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
L_080022A8:
    // 0x080022A8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080022AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080022B0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x080022B4: lh          $v0, 0x5E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X5E);
    // 0x080022B8: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x080022BC: bne         $a3, $v0, L_080022FC
    if (ctx->r7 != ctx->r2) {
        // 0x080022C0: nop
    
            goto L_080022FC;
    }
    // 0x080022C0: nop

    // 0x080022C4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x080022C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x080022CC: beql        $a0, $zero, L_080022E4
    if (ctx->r4 == 0) {
        // 0x080022D0: lw          $a0, 0x4($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X4);
            goto L_080022E4;
    }
    goto skip_7;
    // 0x080022D0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    skip_7:
    // 0x080022D4: jal         0x0800063C
    // 0x080022D8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_0800063C_71DE0C(rdram, ctx);
        goto after_20;
    // 0x080022D8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_20:
    // 0x080022DC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080022E0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
L_080022E4:
    // 0x080022E4: beql        $a0, $zero, L_08002698
    if (ctx->r4 == 0) {
        // 0x080022E8: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_8;
    // 0x080022E8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_8:
    // 0x080022EC: jal         0x080011E0
    // 0x080022F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_080011E0_71E9B0(rdram, ctx);
        goto after_21;
    // 0x080022F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_21:
    // 0x080022F4: b           L_08002698
    // 0x080022F8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x080022F8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_080022FC:
    // 0x080022FC: bnel        $v0, $at, L_08002698
    if (ctx->r2 != ctx->r1) {
        // 0x08002300: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_9;
    // 0x08002300: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_9:
    // 0x08002304: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x08002308: beql        $a0, $zero, L_08002324
    if (ctx->r4 == 0) {
        // 0x0800230C: lw          $a0, 0x4($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X4);
            goto L_08002324;
    }
    goto skip_10;
    // 0x0800230C: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    skip_10:
    // 0x08002310: jal         0x080005A8
    // 0x08002314: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_080005A8_71DD78(rdram, ctx);
        goto after_22;
    // 0x08002314: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_22:
    // 0x08002318: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0800231C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x08002320: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
L_08002324:
    // 0x08002324: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002328: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800232C: beql        $a0, $zero, L_08002348
    if (ctx->r4 == 0) {
        // 0x08002330: addiu       $t4, $zero, 0x6
        ctx->r12 = ADD32(0, 0X6);
            goto L_08002348;
    }
    goto skip_11;
    // 0x08002330: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    skip_11:
    // 0x08002334: jalr        $t9
    // 0x08002338: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08002338: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_23:
    // 0x0800233C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08002340: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08002344: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
L_08002348:
    // 0x08002348: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x0800234C: b           L_08002694
    // 0x08002350: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
        goto L_08002694;
    // 0x08002350: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_08002354:
    // 0x08002354: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08002358: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    // 0x0800235C: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x08002360: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x08002364: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(51, 0X27B0) << 16);
    // 0x08002368: multu       $a0, $t3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0800236C: addiu       $t2, $t2, 0x27B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(51, 0X27B0));
    // 0x08002370: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x08002374: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x08002378: mflo        $t5
    ctx->r13 = lo;
    // 0x0800237C: addu        $v0, $t2, $t5
    ctx->r2 = ADD32(ctx->r10, ctx->r13);
    // 0x08002380: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x08002384: addiu       $t8, $t7, 0x5
    ctx->r24 = ADD32(ctx->r15, 0X5);
    // 0x08002388: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x0800238C: beq         $at, $zero, L_08002484
    if (ctx->r1 == 0) {
        // 0x08002390: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_08002484;
    }
    // 0x08002390: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x08002394: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X30E8) << 16);
    // 0x08002398: addu        $at, $at, $t8
    gpr jr_addend_080023A0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x0800239C: lw          $t8, 0x30E8($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(51, 0X30E8));
    // 0x080023A0: jr          $t8
    // 0x080023A4: nop

    switch (jr_addend_080023A0 >> 2) {
        case 0: goto L_08002454; break;
        case 1: goto L_08002408; break;
        case 2: goto L_080023D8; break;
        case 3: goto L_080023C0; break;
        case 4: goto L_080023A8; break;
        default: switch_error(__func__, 0x080023A0, 0x080030E8);
    }
    // 0x080023A4: nop

L_080023A8:
    // 0x080023A8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080023AC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x080023B0: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x080023B4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x080023B8: b           L_08002694
    // 0x080023BC: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_08002694;
    // 0x080023BC: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_080023C0:
    // 0x080023C0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080023C4: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x080023C8: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x080023CC: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x080023D0: b           L_08002694
    // 0x080023D4: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
        goto L_08002694;
    // 0x080023D4: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_080023D8:
    // 0x080023D8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080023DC: addiu       $t9, $t9, 0x6140
    ctx->r25 = ADD32(ctx->r25, 0X6140);
    // 0x080023E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x080023E4: lhu         $a1, 0x18($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X18);
    // 0x080023E8: jalr        $t9
    // 0x080023EC: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080023EC: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    after_24:
    // 0x080023F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023F4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080023F8: jalr        $t9
    // 0x080023FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080023FC: nop

    after_25:
    // 0x08002400: b           L_080026AC
    // 0x08002404: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080026AC;
    // 0x08002404: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002408:
    // 0x08002408: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x0800240C: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x08002410: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x08002414: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08002418: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800241C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08002420: addiu       $t9, $t9, 0x6220
    ctx->r25 = ADD32(ctx->r25, 0X6220);
    // 0x08002424: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08002428: sb          $t5, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r13;
    // 0x0800242C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08002430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002434: jalr        $t9
    // 0x08002438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08002438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x0800243C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002440: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002444: jalr        $t9
    // 0x08002448: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08002448: nop

    after_27:
    // 0x0800244C: b           L_080026AC
    // 0x08002450: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080026AC;
    // 0x08002450: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002454:
    // 0x08002454: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002458: addiu       $t9, $t9, 0x61B0
    ctx->r25 = ADD32(ctx->r25, 0X61B0);
    // 0x0800245C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08002460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002464: jalr        $t9
    // 0x08002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x0800246C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002470: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002474: jalr        $t9
    // 0x08002478: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08002478: nop

    after_29:
    // 0x0800247C: b           L_080026AC
    // 0x08002480: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080026AC;
    // 0x08002480: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002484:
    // 0x08002484: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002488: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x0800248C: lh          $t7, 0x6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6);
    // 0x08002490: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x08002494: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08002498: addiu       $t1, $t1, -0x3A28
    ctx->r9 = ADD32(ctx->r9, -0X3A28);
    // 0x0800249C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080024A0: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x080024A4: sw          $a3, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r7;
    // 0x080024A8: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x080024AC: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x080024B0: lhu         $t4, -0x4F6E($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X4F6E);
    // 0x080024B4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080024B8: addiu       $v1, $v1, 0x71BC
    ctx->r3 = ADD32(ctx->r3, 0X71BC);
    // 0x080024BC: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x080024C0: beq         $t5, $zero, L_080024D8
    if (ctx->r13 == 0) {
        // 0x080024C4: ori         $t6, $zero, 0xFFFF
        ctx->r14 = 0 | 0XFFFF;
            goto L_080024D8;
    }
    // 0x080024C4: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x080024C8: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x080024CC: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x080024D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080024D4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_080024D8:
    // 0x080024D8: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
    // 0x080024DC: bgezl       $v1, L_08002534
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080024E0: lhu         $t7, 0xE($v0)
        ctx->r15 = MEM_HU(ctx->r2, 0XE);
            goto L_08002534;
    }
    goto skip_12;
    // 0x080024E0: lhu         $t7, 0xE($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE);
    skip_12:
    // 0x080024E4: lhu         $t8, 0xE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XE);
    // 0x080024E8: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x080024EC: lh          $a2, 0xA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA);
    // 0x080024F0: lh          $a3, 0xC($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XC);
    // 0x080024F4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080024F8: lhu         $t4, 0x10($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10);
    // 0x080024FC: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x08002500: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002504: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x08002508: lhu         $t5, 0x18($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X18);
    // 0x0800250C: addiu       $t9, $t9, 0x5FFC
    ctx->r25 = ADD32(ctx->r25, 0X5FFC);
    // 0x08002510: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08002514: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x08002518: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x0800251C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x08002520: jalr        $t9
    // 0x08002524: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08002524: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_30:
    // 0x08002528: b           L_0800256C
    // 0x0800252C: nop

        goto L_0800256C;
    // 0x0800252C: nop

    // 0x08002530: lhu         $t7, 0xE($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE);
L_08002534:
    // 0x08002534: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x08002538: lh          $a2, 0xA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA);
    // 0x0800253C: lh          $a3, 0xC($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XC);
    // 0x08002540: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002544: lhu         $t8, 0x10($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10);
    // 0x08002548: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800254C: addiu       $t9, $t9, 0x60D4
    ctx->r25 = ADD32(ctx->r25, 0X60D4);
    // 0x08002550: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08002554: lhu         $t4, 0x18($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X18);
    // 0x08002558: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x0800255C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x08002560: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x08002564: jalr        $t9
    // 0x08002568: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08002568: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_31:
L_0800256C:
    // 0x0800256C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002570: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002574: jalr        $t9
    // 0x08002578: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08002578: nop

    after_32:
    // 0x0800257C: b           L_080026AC
    // 0x08002580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080026AC;
    // 0x08002580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002584:
    // 0x08002584: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x08002588: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x0800258C: addiu       $v1, $t6, 0x5C
    ctx->r3 = ADD32(ctx->r14, 0X5C);
    // 0x08002590: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x08002594: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x08002598: bnel        $v0, $at, L_080025E8
    if (ctx->r2 != ctx->r1) {
        // 0x0800259C: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_080025E8;
    }
    goto skip_13;
    // 0x0800259C: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    skip_13:
    // 0x080025A0: jal         0x08001540
    // 0x080025A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_08001540_71ED10(rdram, ctx);
        goto after_33;
    // 0x080025A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_33:
    // 0x080025A8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080025AC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x080025B0: jal         0x080019DC
    // 0x080025B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_080019DC_71F1AC(rdram, ctx);
        goto after_34;
    // 0x080025B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_34:
    // 0x080025B8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080025BC: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x080025C0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x080025C4: jal         0x080014D0
    // 0x080025C8: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    func_080014D0_71ECA0(rdram, ctx);
        goto after_35;
    // 0x080025C8: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    after_35:
    // 0x080025CC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080025D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x080025D4: jal         0x080014EC
    // 0x080025D8: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    func_080014EC_71ECBC(rdram, ctx);
        goto after_36;
    // 0x080025D8: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    after_36:
    // 0x080025DC: b           L_08002698
    // 0x080025E0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x080025E0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080025E4: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
L_080025E8:
    // 0x080025E8: bnel        $v0, $at, L_08002604
    if (ctx->r2 != ctx->r1) {
        // 0x080025EC: addiu       $at, $zero, 0x104
        ctx->r1 = ADD32(0, 0X104);
            goto L_08002604;
    }
    goto skip_14;
    // 0x080025EC: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    skip_14:
    // 0x080025F0: jal         0x080019D0
    // 0x080025F4: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    func_080019D0_71F1A0(rdram, ctx);
        goto after_37;
    // 0x080025F4: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    after_37:
    // 0x080025F8: b           L_08002698
    // 0x080025FC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x080025FC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08002600: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
L_08002604:
    // 0x08002604: bne         $v0, $at, L_08002694
    if (ctx->r2 != ctx->r1) {
        // 0x08002608: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_08002694;
    }
    // 0x08002608: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x0800260C: b           L_08002694
    // 0x08002610: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_08002694;
    // 0x08002610: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_08002614:
    // 0x08002614: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002618: addiu       $t0, $t0, -0x3A38
    ctx->r8 = ADD32(ctx->r8, -0X3A38);
    // 0x0800261C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x08002620: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x08002624: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08002628: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x0800262C: lhu         $t4, -0x4F86($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X4F86);
    // 0x08002630: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x08002634: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x08002638: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x0800263C: beql        $t5, $zero, L_08002698
    if (ctx->r13 == 0) {
        // 0x08002640: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_08002698;
    }
    goto skip_15;
    // 0x08002640: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    skip_15:
    // 0x08002644: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08002648: b           L_08002694
    // 0x0800264C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_08002694;
    // 0x0800264C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_08002650:
    // 0x08002650: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08002654: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002658: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x0800265C: lh          $v0, 0x5E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X5E);
    // 0x08002660: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08002664: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x08002668: bne         $a3, $v0, L_08002680
    if (ctx->r7 != ctx->r2) {
        // 0x0800266C: nop
    
            goto L_08002680;
    }
    // 0x0800266C: nop

    // 0x08002670: jal         0x080014EC
    // 0x08002674: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    func_080014EC_71ECBC(rdram, ctx);
        goto after_38;
    // 0x08002674: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    after_38:
    // 0x08002678: b           L_08002698
    // 0x0800267C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
        goto L_08002698;
    // 0x0800267C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08002680:
    // 0x08002680: bne         $v0, $at, L_08002694
    if (ctx->r2 != ctx->r1) {
        // 0x08002684: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08002694;
    }
    // 0x08002684: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002688: addiu       $t9, $t9, 0x7448
    ctx->r25 = ADD32(ctx->r25, 0X7448);
    // 0x0800268C: jalr        $t9
    // 0x08002690: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08002690: nop

    after_39:
L_08002694:
    // 0x08002694: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_08002698:
    // 0x08002698: lh          $t6, 0x5E($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X5E);
    // 0x0800269C: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x080026A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080026A4: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x080026A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080026AC:
    // 0x080026AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080026B0: jr          $ra
    // 0x080026B4: nop

    TRACE_RETURN()
    return;
    // 0x080026B4: nop

;}
RECOMP_FUNC void func_08001100_71E8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001100: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x08001104: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x08001108: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x0800110C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001110: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001114: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001118: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x0800111C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x08001120: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x08001124: bc1fl       L_08001148
    if (!c1cs) {
        // 0x08001128: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_08001148;
    }
    goto skip_0;
    // 0x08001128: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x0800112C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001130: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001134: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08001138: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x0800113C: b           L_08001150
    // 0x08001140: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08001150;
    // 0x08001140: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08001144: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_08001148:
    // 0x08001148: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0800114C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
L_08001150:
    // 0x08001150: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x08001154: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08001158: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800115C: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x08001160: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x08001164: nop

    // 0x08001168: bc1f        L_0800117C
    if (!c1cs) {
        // 0x0800116C: swc1        $f8, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
            goto L_0800117C;
    }
    // 0x0800116C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08001170: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x08001174: b           L_08001180
    // 0x08001178: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08001180;
    // 0x08001178: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_0800117C:
    // 0x0800117C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_08001180:
    // 0x08001180: div.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x08001184: jr          $ra
    // 0x08001188: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08001188: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_080005A8_71DD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080005B4: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x080005B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(51, 0X2948) << 16);
    // 0x080005BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080005C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x080005C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080005CC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x080005D0: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x080005D4: jalr        $t9
    // 0x080005D8: lhu         $a0, 0x2948($a0)
    ctx->r4 = MEM_HU(ctx->r4, (int16_t)RELOC_LO16(51, 0X2948));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005D8: lhu         $a0, 0x2948($a0)
    ctx->r4 = MEM_HU(ctx->r4, (int16_t)RELOC_LO16(51, 0X2948));
    after_0:
    // 0x080005DC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080005E0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080005E4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080005E8: lw          $a1, 0x70($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X70);
    // 0x080005EC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080005F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005F4: beq         $a1, $zero, L_0800060C
    if (ctx->r5 == 0) {
        // 0x080005F8: nop
    
            goto L_0800060C;
    }
    // 0x080005F8: nop

    // 0x080005FC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000600: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000604: jalr        $t9
    // 0x08000608: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000608: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
L_0800060C:
    // 0x0800060C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000610: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000614: jalr        $t9
    // 0x08000618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x0800061C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000628: jr          $ra
    // 0x0800062C: nop

    TRACE_RETURN()
    return;
    // 0x0800062C: nop

;}
RECOMP_FUNC void func_08000690_71DE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000690: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000694: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000698: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800069C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080006A0: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080006A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0X43C) << 16);
    // 0x080006A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080006AC: addiu       $a1, $a1, 0x43C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(51, 0X43C));
    // 0x080006B0: jalr        $t9
    // 0x080006B4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006B4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x080006B8: bne         $v0, $zero, L_080006C8
    if (ctx->r2 != 0) {
        // 0x080006BC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080006C8;
    }
    // 0x080006BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080006C0: b           L_0800075C
    // 0x080006C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_0800075C;
    // 0x080006C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080006C8:
    // 0x080006C8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x080006CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(51, 0X2948) << 16);
    // 0x080006D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x080006D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x080006DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x080006E0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x080006E4: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x080006E8: jalr        $t9
    // 0x080006EC: lhu         $a0, 0x2948($a0)
    ctx->r4 = MEM_HU(ctx->r4, (int16_t)RELOC_LO16(51, 0X2948));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006EC: lhu         $a0, 0x2948($a0)
    ctx->r4 = MEM_HU(ctx->r4, (int16_t)RELOC_LO16(51, 0X2948));
    after_1:
    // 0x080006F0: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x080006F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080006F8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080006FC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000700: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000704: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000708: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800070C: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x08000710: jalr        $t9
    // 0x08000714: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000714: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x08000718: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x0800071C: bne         $v0, $zero, L_08000734
    if (ctx->r2 != 0) {
        // 0x08000720: sw          $v0, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r2;
            goto L_08000734;
    }
    // 0x08000720: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x08000724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000728: jal         0x080005A8
    // 0x0800072C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_080005A8_71DD78(rdram, ctx);
        goto after_3;
    // 0x0800072C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x08000730: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_08000734:
    // 0x08000734: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x08000738: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800073C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000740: addiu       $t9, $t9, 0x1A38
    ctx->r25 = ADD32(ctx->r25, 0X1A38);
    // 0x08000744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000748: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x0800074C: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x08000750: jalr        $t9
    // 0x08000754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000754: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    after_4:
    // 0x08000758: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_0800075C:
    // 0x0800075C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000764: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000768: jr          $ra
    // 0x0800076C: nop

    TRACE_RETURN()
    return;
    // 0x0800076C: nop

;}
RECOMP_FUNC void func_080014D0_71ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080014D4: jr          $ra
    // 0x080014D8: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x080014D8: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_0800146C_71EC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800146C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001474: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x08001478: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800147C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001480: beq         $t6, $zero, L_080014AC
    if (ctx->r14 == 0) {
        // 0x08001484: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_080014AC;
    }
    // 0x08001484: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001488: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800148C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001490: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08001494: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001498: lw          $a1, 0x74($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X74);
    // 0x0800149C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080014A0: jalr        $t9
    // 0x080014A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080014A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_080014AC:
    // 0x080014AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014B0: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080014B4: jalr        $t9
    // 0x080014B8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014B8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x080014BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080014C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080014C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080014C8: jr          $ra
    // 0x080014CC: nop

    TRACE_RETURN()
    return;
    // 0x080014CC: nop

;}
RECOMP_FUNC void func_080019D0_71F1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080019D4: jr          $ra
    // 0x080019D8: sb          $t6, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080019D8: sb          $t6, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_0800063C_71DE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800063C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000640: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x08000644: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000648: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x0800064C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x08000650: nop

    // 0x08000654: bc1fl       L_08000678
    if (!c1cs) {
        // 0x08000658: lwc1        $f10, 0x8($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
            goto L_08000678;
    }
    goto skip_0;
    // 0x08000658: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x0800065C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000660: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000664: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000668: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800066C: b           L_08000680
    // 0x08000670: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000680;
    // 0x08000670: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000674: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
L_08000678:
    // 0x08000678: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0800067C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_08000680:
    // 0x08000680: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x08000684: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08000688: jr          $ra
    // 0x0800068C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x0800068C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080011E0_71E9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080011E4: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x080011E8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080011EC: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x080011F0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x080011F4: nop

    // 0x080011F8: bc1fl       L_0800121C
    if (!c1cs) {
        // 0x080011FC: lwc1        $f10, 0x20($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
            goto L_0800121C;
    }
    goto skip_0;
    // 0x080011FC: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x08001200: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001204: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08001208: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0800120C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08001210: b           L_08001224
    // 0x08001214: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08001224;
    // 0x08001214: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08001218: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
L_0800121C:
    // 0x0800121C: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08001220: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_08001224:
    // 0x08001224: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x08001228: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x0800122C: jr          $ra
    // 0x08001230: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08001230: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000000_71D7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x08000004: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x0800000C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x08000010: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x08000014: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x08000018: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x0800001C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x08000020: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08000024: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08000028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800002C: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x08000030: lh          $t6, 0x4($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X4);
    // 0x08000034: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000038: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800003C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000040: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000044: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x08000048: lh          $s1, 0x6($a1)
    ctx->r17 = MEM_H(ctx->r5, 0X6);
    // 0x0800004C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000050: lui         $s3, 0x8001
    ctx->r19 = S32(0X8001 << 16);
    // 0x08000054: addiu       $s3, $s3, 0x4840
    ctx->r19 = ADD32(ctx->r19, 0X4840);
    // 0x08000058: andi        $s5, $a2, 0xFF
    ctx->r21 = ctx->r6 & 0XFF;
    // 0x0800005C: bgez        $t8, L_0800006C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08000060: sra         $t9, $t8, 6
        ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
            goto L_0800006C;
    }
    // 0x08000060: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x08000064: addiu       $at, $t8, 0x3F
    ctx->r1 = ADD32(ctx->r24, 0X3F);
    // 0x08000068: sra         $t9, $at, 6
    ctx->r25 = S32(SIGNED(ctx->r1) >> 6);
L_0800006C:
    // 0x0800006C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x08000070: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x08000074: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x08000078: bgez        $s1, L_08000088
    if (SIGNED(ctx->r17) >= 0) {
        // 0x0800007C: sra         $s2, $s1, 6
        ctx->r18 = S32(SIGNED(ctx->r17) >> 6);
            goto L_08000088;
    }
    // 0x0800007C: sra         $s2, $s1, 6
    ctx->r18 = S32(SIGNED(ctx->r17) >> 6);
    // 0x08000080: addiu       $at, $s1, 0x3F
    ctx->r1 = ADD32(ctx->r17, 0X3F);
    // 0x08000084: sra         $s2, $at, 6
    ctx->r18 = S32(SIGNED(ctx->r1) >> 6);
L_08000088:
    // 0x08000088: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x0800008C: sw          $s2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r18;
    // 0x08000090: lhu         $a1, 0x10($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X10);
    // 0x08000094: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000098: jalr        $s3
    // 0x0800009C: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x0800009C: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    after_0:
    // 0x080000A0: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x080000A4: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x080000A8: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x080000AC: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080000B0: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x080000B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(51, 0X2BD0) << 16);
    // 0x080000B8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080000BC: addiu       $a0, $a0, 0x2BD0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(51, 0X2BD0));
    // 0x080000C0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x080000C4: mflo        $t8
    ctx->r24 = lo;
    // 0x080000C8: bgez        $t8, L_080000D8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x080000CC: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_080000D8;
    }
    // 0x080000CC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x080000D0: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x080000D4: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_080000D8:
    // 0x080000D8: addu        $t6, $v0, $t9
    ctx->r14 = ADD32(ctx->r2, ctx->r25);
    // 0x080000DC: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x080000E0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x080000E4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080000E8: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x080000EC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x080000F0: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x080000F4: jalr        $s3
    // 0x080000F8: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x080000F8: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    after_1:
    // 0x080000FC: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x08000100: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x08000104: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x08000108: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x0800010C: andi        $t7, $s5, 0xFF
    ctx->r15 = ctx->r21 & 0XFF;
    // 0x08000110: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x08000114: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x08000118: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x0800011C: blez        $s2, L_080003FC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x08000120: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_080003FC;
    }
    // 0x08000120: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000124: lui         $fp, 0x708
    ctx->r30 = S32(0X708 << 16);
    // 0x08000128: ori         $fp, $fp, 0x200
    ctx->r30 = ctx->r30 | 0X200;
    // 0x0800012C: lui         $s7, 0xF548
    ctx->r23 = S32(0XF548 << 16);
    // 0x08000130: lui         $s4, 0x700
    ctx->r20 = S32(0X700 << 16);
    // 0x08000134: lui         $s3, 0xE600
    ctx->r19 = S32(0XE600 << 16);
    // 0x08000138: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x0800013C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
L_08000140:
    // 0x08000140: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x08000144: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x08000148: blez        $t8, L_080003EC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x0800014C: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_080003EC;
    }
    // 0x0800014C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x08000150: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x08000154: sll         $s1, $v1, 6
    ctx->r17 = S32(ctx->r3 << 6);
    // 0x08000158: sll         $s6, $s1, 2
    ctx->r22 = S32(ctx->r17 << 2);
    // 0x0800015C: sra         $t9, $s5, 1
    ctx->r25 = S32(SIGNED(ctx->r21) >> 1);
    // 0x08000160: addiu       $s5, $t9, -0x1
    ctx->r21 = ADD32(ctx->r25, -0X1);
    // 0x08000164: andi        $t6, $s5, 0xFFF
    ctx->r14 = ctx->r21 & 0XFFF;
    // 0x08000168: andi        $t9, $s6, 0xFFF
    ctx->r25 = ctx->r22 & 0XFFF;
    // 0x0800016C: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    // 0x08000170: or          $s5, $t6, $at
    ctx->r21 = ctx->r14 | ctx->r1;
    // 0x08000174: addiu       $s2, $s1, 0x40
    ctx->r18 = ADD32(ctx->r17, 0X40);
    // 0x08000178: sw          $v1, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r3;
    // 0x0800017C: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
L_08000180:
    // 0x08000180: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08000184: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x08000188: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x0800018C: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x08000190: beq         $at, $zero, L_0800019C
    if (ctx->r1 == 0) {
        // 0x08000194: or          $t0, $s2, $zero
        ctx->r8 = ctx->r18 | 0;
            goto L_0800019C;
    }
    // 0x08000194: or          $t0, $s2, $zero
    ctx->r8 = ctx->r18 | 0;
    // 0x08000198: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_0800019C:
    // 0x0800019C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x080001A0: subu        $t2, $a2, $t3
    ctx->r10 = SUB32(ctx->r6, ctx->r11);
    // 0x080001A4: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x080001A8: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x080001AC: beq         $at, $zero, L_080001B8
    if (ctx->r1 == 0) {
        // 0x080001B0: addiu       $t1, $t1, 0x7
        ctx->r9 = ADD32(ctx->r9, 0X7);
            goto L_080001B8;
    }
    // 0x080001B0: addiu       $t1, $t1, 0x7
    ctx->r9 = ADD32(ctx->r9, 0X7);
    // 0x080001B4: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_080001B8:
    // 0x080001B8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x080001BC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080001C0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x080001C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x080001C8: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x080001CC: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x080001D0: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x080001D4: sra         $t7, $t1, 3
    ctx->r15 = S32(SIGNED(ctx->r9) >> 3);
    // 0x080001D8: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x080001DC: sll         $t1, $t8, 9
    ctx->r9 = S32(ctx->r24 << 9);
    // 0x080001E0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080001E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x080001E8: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x080001EC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x080001F0: or          $t6, $t1, $s7
    ctx->r14 = ctx->r9 | ctx->r23;
    // 0x080001F4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x080001F8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080001FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x08000200: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x08000204: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x08000208: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x0800020C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x08000210: sw          $fp, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r30;
    // 0x08000214: or          $t7, $t6, $s6
    ctx->r15 = ctx->r14 | ctx->r22;
    // 0x08000218: addiu       $t8, $a2, -0x1
    ctx->r24 = ADD32(ctx->r6, -0X1);
    // 0x0800021C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000220: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x08000224: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x08000228: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x0800022C: sw          $s3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r19;
    // 0x08000230: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x08000234: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x08000238: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x0800023C: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x08000240: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x08000244: or          $t8, $t7, $s4
    ctx->r24 = ctx->r15 | ctx->r20;
    // 0x08000248: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x0800024C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x08000250: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000254: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x08000258: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x0800025C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000260: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08000264: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x08000268: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x0800026C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08000270: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x08000274: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x08000278: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x0800027C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x08000280: addiu       $t9, $t2, -0x1
    ctx->r25 = ADD32(ctx->r10, -0X1);
    // 0x08000284: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x08000288: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x0800028C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000290: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x08000294: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x08000298: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x0800029C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x080002A0: subu        $t9, $t0, $s1
    ctx->r25 = SUB32(ctx->r8, ctx->r17);
    // 0x080002A4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x080002A8: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x080002AC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x080002B0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x080002B4: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x080002B8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080002BC: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x080002C0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x080002C4: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x080002C8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x080002CC: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x080002D0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080002D4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x080002D8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x080002DC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080002E0: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x080002E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x080002E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x080002EC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x080002F0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080002F4: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x080002F8: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x080002FC: or          $t1, $a3, $zero
    ctx->r9 = ctx->r7 | 0;
    // 0x08000300: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000304: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x08000308: sw          $s4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r20;
    // 0x0800030C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x08000310: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x08000314: sw          $s3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r19;
    // 0x08000318: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x0800031C: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x08000320: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000324: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x08000328: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x0800032C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x08000330: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x08000334: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x08000338: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x0800033C: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x08000340: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x08000344: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000348: addu        $t6, $t9, $a2
    ctx->r14 = ADD32(ctx->r25, ctx->r6);
    // 0x0800034C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x08000350: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x08000354: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x08000358: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x0800035C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x08000360: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x08000364: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x08000368: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x0800036C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x08000370: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08000374: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x08000378: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x0800037C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x08000380: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x08000384: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x08000388: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x0800038C: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x08000390: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x08000394: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x08000398: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x0800039C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x080003A0: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x080003A4: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x080003A8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x080003AC: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x080003B0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080003B4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x080003B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x080003BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x080003C0: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x080003C4: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x080003C8: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x080003CC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x080003D0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x080003D4: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x080003D8: addiu       $t3, $t3, 0x40
    ctx->r11 = ADD32(ctx->r11, 0X40);
    // 0x080003DC: addiu       $t4, $t4, 0x40
    ctx->r12 = ADD32(ctx->r12, 0X40);
    // 0x080003E0: bne         $t5, $t8, L_08000180
    if (ctx->r13 != ctx->r24) {
        // 0x080003E4: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_08000180;
    }
    // 0x080003E4: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x080003E8: lw          $v1, 0xC8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC8);
L_080003EC:
    // 0x080003EC: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x080003F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x080003F4: bnel        $v1, $t7, L_08000140
    if (ctx->r3 != ctx->r15) {
        // 0x080003F8: lw          $t8, 0x40($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X40);
            goto L_08000140;
    }
    goto skip_0;
    // 0x080003F8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    skip_0:
L_080003FC:
    // 0x080003FC: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x08000400: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x08000404: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x08000408: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0800040C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x08000410: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x08000414: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x08000418: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x0800041C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08000420: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x08000424: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000428: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0800042C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000430: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x08000434: jr          $ra
    // 0x08000438: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    TRACE_RETURN()
    return;
    // 0x08000438: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void func_080026B8_71FE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080026B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080026BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080026C4: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x080026C8: jalr        $t9
    // 0x080026CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080026CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080026D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026D4: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x080026D8: jalr        $t9
    // 0x080026DC: addiu       $a0, $zero, 0x4E5
    ctx->r4 = ADD32(0, 0X4E5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026DC: addiu       $a0, $zero, 0x4E5
    ctx->r4 = ADD32(0, 0X4E5);
    after_1:
    // 0x080026E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026E4: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x080026E8: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x080026EC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x080026F0: jalr        $t9
    // 0x080026F4: addiu       $a1, $zero, 0x4E5
    ctx->r5 = ADD32(0, 0X4E5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080026F4: addiu       $a1, $zero, 0x4E5
    ctx->r5 = ADD32(0, 0X4E5);
    after_2:
    // 0x080026F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X3100) << 16);
    // 0x08002700: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08002704: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0X1D2C) << 16);
    // 0x08002708: sw          $v0, 0x3100($at)
    MEM_W((int16_t)RELOC_LO16(51, 0X3100), ctx->r1) = ctx->r2;
    // 0x0800270C: addiu       $a1, $a1, 0x1D2C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(51, 0X1D2C));
    // 0x08002710: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002714: jalr        $t9
    // 0x08002718: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002718: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x0800271C: bne         $v0, $zero, L_0800272C
    if (ctx->r2 != 0) {
        // 0x08002720: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800272C;
    }
    // 0x08002720: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08002724: b           L_08002730
    // 0x08002728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08002730;
    // 0x08002728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800272C:
    // 0x0800272C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08002730:
    // 0x08002730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002738: jr          $ra
    // 0x0800273C: nop

    TRACE_RETURN()
    return;
    // 0x0800273C: nop

;}
RECOMP_FUNC void func_0800095C_71E12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800095C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x08000960: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08000964: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000968: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(51, 0X3100) << 16);
    // 0x0800096C: lw          $t5, 0x3100($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(51, 0X3100));
    // 0x08000970: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x08000974: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x08000978: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x0800097C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x08000980: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x08000984: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x08000988: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x0800098C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08000990: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000994: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x08000998: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x0800099C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x080009A0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x080009A4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x080009A8: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x080009AC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080009B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009B4: andi        $s2, $a1, 0xFF
    ctx->r18 = ctx->r5 & 0XFF;
    // 0x080009B8: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x080009BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(51, 0X2C48) << 16);
    // 0x080009C0: andi        $s4, $a2, 0xFF
    ctx->r20 = ctx->r6 & 0XFF;
    // 0x080009C4: andi        $s5, $a3, 0xFF
    ctx->r21 = ctx->r7 & 0XFF;
    // 0x080009C8: addiu       $a0, $a0, 0x2C48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(51, 0X2C48));
    // 0x080009CC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x080009D0: jalr        $t9
    // 0x080009D4: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009D4: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    after_0:
    // 0x080009D8: lwc1        $f12, 0xF0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x080009DC: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x080009E0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x080009E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x080009E8: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x080009EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x080009F0: andi        $t9, $s4, 0xFF
    ctx->r25 = ctx->r20 & 0XFF;
    // 0x080009F4: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x080009F8: or          $t8, $s2, $zero
    ctx->r24 = ctx->r18 | 0;
    // 0x080009FC: sll         $t6, $t8, 24
    ctx->r14 = S32(ctx->r24 << 24);
    // 0x08000A00: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x08000A04: andi        $t9, $s5, 0xFF
    ctx->r25 = ctx->r21 & 0XFF;
    // 0x08000A08: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x08000A0C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x08000A10: ori         $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 | 0XFF;
    // 0x08000A14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000A18: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x08000A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A20: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x08000A24: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x08000A28: lbu         $t7, 0xDB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XDB);
    // 0x08000A2C: lbu         $t6, 0xDF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XDF);
    // 0x08000A30: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x08000A34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000A38: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x08000A3C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x08000A40: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x08000A44: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x08000A48: lbu         $t9, 0xE3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE3);
    // 0x08000A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000A50: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x08000A54: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x08000A58: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x08000A5C: lbu         $t8, 0xE7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XE7);
    // 0x08000A60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000A64: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x08000A68: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x08000A6C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x08000A70: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x08000A74: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x08000A78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000A7C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x08000A80: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08000A84: addiu       $t6, $zero, 0x34
    ctx->r14 = ADD32(0, 0X34);
    // 0x08000A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A8C: lui         $fp, 0xE600
    ctx->r30 = S32(0XE600 << 16);
    // 0x08000A90: lui         $s6, 0xF590
    ctx->r22 = S32(0XF590 << 16);
    // 0x08000A94: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000A98: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000A9C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08000AA0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08000AA4: nop

    // 0x08000AA8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08000AAC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08000AB0: nop

    // 0x08000AB4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08000AB8: beql        $a1, $zero, L_08000B08
    if (ctx->r5 == 0) {
        // 0x08000ABC: mfc1        $a1, $f4
        ctx->r5 = (int32_t)ctx->f4.u32l;
            goto L_08000B08;
    }
    goto skip_0;
    // 0x08000ABC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x08000AC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000AC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000AC8: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x08000ACC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08000AD0: nop

    // 0x08000AD4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08000AD8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08000ADC: nop

    // 0x08000AE0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08000AE4: bne         $a1, $zero, L_08000AFC
    if (ctx->r5 != 0) {
        // 0x08000AE8: nop
    
            goto L_08000AFC;
    }
    // 0x08000AE8: nop

    // 0x08000AEC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000AF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000AF4: b           L_08000B14
    // 0x08000AF8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_08000B14;
    // 0x08000AF8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_08000AFC:
    // 0x08000AFC: b           L_08000B14
    // 0x08000B00: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_08000B14;
    // 0x08000B00: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x08000B04: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
L_08000B08:
    // 0x08000B08: nop

    // 0x08000B0C: bltz        $a1, L_08000AFC
    if (SIGNED(ctx->r5) < 0) {
        // 0x08000B10: nop
    
            goto L_08000AFC;
    }
    // 0x08000B10: nop

L_08000B14:
    // 0x08000B14: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08000B18: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x08000B1C: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x08000B20: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x08000B24: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000B28: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x08000B2C: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x08000B30: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X3090) << 16);
    // 0x08000B34: ldc1        $f0, 0x3090($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(51, 0X3090));
    // 0x08000B38: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000B3C: mul.s       $f20, $f8, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x08000B40: or          $s3, $t9, $t7
    ctx->r19 = ctx->r25 | ctx->r15;
    // 0x08000B44: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x08000B48: lui         $s5, 0xFD90
    ctx->r21 = S32(0XFD90 << 16);
    // 0x08000B4C: addiu       $s4, $zero, 0x100
    ctx->r20 = ADD32(0, 0X100);
    // 0x08000B50: mul.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x08000B54: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
L_08000B58:
    // 0x08000B58: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x08000B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000B60: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08000B64: nop

    // 0x08000B68: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000B6C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x08000B70: add.s       $f2, $f18, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x08000B74: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x08000B78: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x08000B7C: nop

    // 0x08000B80: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x08000B84: nop

    // 0x08000B88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000B8C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x08000B90: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x08000B94: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x08000B98: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000B9C: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x08000BA0: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x08000BA4: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x08000BA8: andi        $s2, $t8, 0xFFF
    ctx->r18 = ctx->r24 & 0XFFF;
    // 0x08000BAC: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x08000BB0: nop

    // 0x08000BB4: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x08000BB8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x08000BBC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_08000BC0:
    // 0x08000BC0: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x08000BC4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08000BC8: addiu       $t7, $t1, 0x7FF
    ctx->r15 = ADD32(ctx->r9, 0X7FF);
    // 0x08000BCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000BD0: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x08000BD4: addiu       $t0, $zero, 0x33F
    ctx->r8 = ADD32(0, 0X33F);
    // 0x08000BD8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x08000BDC: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x08000BE0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x08000BE4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x08000BE8: nop

    // 0x08000BEC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x08000BF0: nop

    // 0x08000BF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000BF8: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x08000BFC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x08000C00: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000C04: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x08000C08: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x08000C0C: bne         $a3, $s4, L_08000C18
    if (ctx->r7 != ctx->r20) {
        // 0x08000C10: or          $t3, $v0, $zero
        ctx->r11 = ctx->r2 | 0;
            goto L_08000C18;
    }
    // 0x08000C10: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x08000C14: addiu       $t3, $v0, -0x10
    ctx->r11 = ADD32(ctx->r2, -0X10);
L_08000C18:
    // 0x08000C18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000C1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000C20: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x08000C24: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x08000C28: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08000C2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C34: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000C38: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x08000C3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000C40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08000C44: sw          $s7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r23;
    // 0x08000C48: sw          $s6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r22;
    // 0x08000C4C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x08000C50: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x08000C54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000C58: div         $zero, $t7, $a1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r5)));
    // 0x08000C5C: mflo        $t9
    ctx->r25 = lo;
    // 0x08000C60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000C64: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x08000C68: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x08000C6C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x08000C70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000C74: bne         $a1, $zero, L_08000C80
    if (ctx->r5 != 0) {
        // 0x08000C78: nop
    
            goto L_08000C80;
    }
    // 0x08000C78: nop

    // 0x08000C7C: break       7
    do_break(134220924);
L_08000C80:
    // 0x08000C80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000C84: bne         $a1, $at, L_08000C98
    if (ctx->r5 != ctx->r1) {
        // 0x08000C88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08000C98;
    }
    // 0x08000C88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000C8C: bne         $t7, $at, L_08000C98
    if (ctx->r15 != ctx->r1) {
        // 0x08000C90: nop
    
            goto L_08000C98;
    }
    // 0x08000C90: nop

    // 0x08000C94: break       6
    do_break(134220948);
L_08000C98:
    // 0x08000C98: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x08000C9C: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x08000CA0: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x08000CA4: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x08000CA8: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x08000CAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000CB0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000CB4: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x08000CB8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x08000CBC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08000CC0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x08000CC4: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x08000CC8: lui         $t7, 0xF580
    ctx->r15 = S32(0XF580 << 16);
    // 0x08000CCC: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x08000CD0: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x08000CD4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08000CD8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x08000CDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CE4: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x08000CE8: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x08000CEC: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x08000CF0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x08000CF4: ori         $t6, $t6, 0xC0CC
    ctx->r14 = ctx->r14 | 0XC0CC;
    // 0x08000CF8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x08000CFC: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x08000D00: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x08000D04: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x08000D08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000D0C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x08000D10: or          $t7, $t6, $s1
    ctx->r15 = ctx->r14 | ctx->r17;
    // 0x08000D14: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08000D18: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x08000D1C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x08000D20: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x08000D24: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x08000D28: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000D2C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000D30: or          $t7, $t6, $s2
    ctx->r15 = ctx->r14 | ctx->r18;
    // 0x08000D34: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x08000D38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000D3C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x08000D40: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x08000D44: addiu       $at, $zero, 0x140
    ctx->r1 = ADD32(0, 0X140);
    // 0x08000D48: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x08000D4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x08000D50: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08000D54: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x08000D58: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x08000D5C: sw          $s3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r19;
    // 0x08000D60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08000D64: bne         $a3, $at, L_08000BC0
    if (ctx->r7 != ctx->r1) {
        // 0x08000D68: addiu       $t5, $t5, 0x680
        ctx->r13 = ADD32(ctx->r13, 0X680);
            goto L_08000BC0;
    }
    // 0x08000D68: addiu       $t5, $t5, 0x680
    ctx->r13 = ADD32(ctx->r13, 0X680);
    // 0x08000D6C: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x08000D70: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x08000D74: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x08000D78: bne         $v0, $at, L_08000B58
    if (ctx->r2 != ctx->r1) {
        // 0x08000D7C: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_08000B58;
    }
    // 0x08000D7C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08000D80: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x08000D84: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x08000D88: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08000D8C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x08000D90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000D94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000D98: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x08000D9C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x08000DA0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x08000DA4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x08000DA8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x08000DAC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x08000DB0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08000DB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08000DB8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000DBC: jr          $ra
    // 0x08000DC0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x08000DC0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_0800118C_71E95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800118C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001190: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x08001194: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001198: swc1        $f12, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f12.u32l;
    // 0x0800119C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x080011A0: nop

    // 0x080011A4: bc1fl       L_080011C8
    if (!c1cs) {
        // 0x080011A8: lwc1        $f10, 0x2C($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_080011C8;
    }
    goto skip_0;
    // 0x080011A8: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
    skip_0:
    // 0x080011AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080011B0: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x080011B4: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x080011B8: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080011BC: b           L_080011D0
    // 0x080011C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_080011D0;
    // 0x080011C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x080011C4: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
L_080011C8:
    // 0x080011C8: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x080011CC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_080011D0:
    // 0x080011D0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x080011D4: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x080011D8: jr          $ra
    // 0x080011DC: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080011DC: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080010F4_71E8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080010F8: jr          $ra
    // 0x080010FC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x080010FC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_08001540_71ED10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001540: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001544: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800154C: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08001550: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0X1330) << 16);
    // 0x08001554: addiu       $a1, $a1, 0x1330
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(51, 0X1330));
    // 0x08001558: jalr        $t9
    // 0x0800155C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800155C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x08001560: bne         $v0, $zero, L_08001570
    if (ctx->r2 != 0) {
        // 0x08001564: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08001570;
    }
    // 0x08001564: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08001568: b           L_08001600
    // 0x0800156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001600;
    // 0x0800156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001570:
    // 0x08001570: sh          $zero, 0x22($a2)
    MEM_H(0X22, ctx->r6) = 0;
    // 0x08001574: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001578: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800157C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001580: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001584: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001588: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800158C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08001590: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08001594: jalr        $t9
    // 0x08001598: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001598: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x0800159C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080015A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x080015A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015A8: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    // 0x080015AC: bne         $v0, $zero, L_080015CC
    if (ctx->r2 != 0) {
        // 0x080015B0: sw          $v0, 0x18($v1)
        MEM_W(0X18, ctx->r3) = ctx->r2;
            goto L_080015CC;
    }
    // 0x080015B0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x080015B4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(51, 0X146C) << 16);
    // 0x080015B8: addiu       $t9, $t9, 0x146C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(51, 0X146C));
    // 0x080015BC: jalr        $t9
    // 0x080015C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x080015C4: b           L_08001600
    // 0x080015C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001600;
    // 0x080015C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080015CC:
    // 0x080015CC: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x080015D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080015D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080015D8: jalr        $t9
    // 0x080015DC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015DC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x080015E0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x080015E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080015E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080015EC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x080015F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080015F4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080015F8: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x080015FC: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_08001600:
    // 0x08001600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001604: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001608: jr          $ra
    // 0x0800160C: nop

    TRACE_RETURN()
    return;
    // 0x0800160C: nop

;}
RECOMP_FUNC void func_08001330_71EB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001330: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001334: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001338: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x0800133C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X30A0) << 16);
    // 0x08001340: ldc1        $f4, 0x30A0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(51, 0X30A0));
    // 0x08001344: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001348: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800134C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08001350: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x08001354: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001358: bc1fl       L_080013D4
    if (!c1cs) {
        // 0x0800135C: addiu       $v1, $a2, 0x5C
        ctx->r3 = ADD32(ctx->r6, 0X5C);
            goto L_080013D4;
    }
    goto skip_0;
    // 0x0800135C: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x08001360: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001364: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001368: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x0800136C: nop

    // 0x08001370: bc1fl       L_08001388
    if (!c1cs) {
        // 0x08001374: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_08001388;
    }
    goto skip_1;
    // 0x08001374: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x08001378: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0800137C: b           L_08001388
    // 0x08001380: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_08001388;
    // 0x08001380: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x08001384: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_08001388:
    // 0x08001388: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0800138C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x08001390: nop

    // 0x08001394: bc1fl       L_080013B0
    if (!c1cs) {
        // 0x08001398: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_080013B0;
    }
    goto skip_2;
    // 0x08001398: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x0800139C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080013A0: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x080013A4: b           L_080013D0
    // 0x080013A8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_080013D0;
    // 0x080013A8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x080013AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_080013B0:
    // 0x080013B0: nop

    // 0x080013B4: bc1fl       L_080013CC
    if (!c1cs) {
        // 0x080013B8: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_080013CC;
    }
    goto skip_3;
    // 0x080013B8: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x080013BC: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x080013C0: b           L_080013D0
    // 0x080013C4: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_080013D0;
    // 0x080013C4: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x080013C8: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_080013CC:
    // 0x080013CC: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_080013D0:
    // 0x080013D0: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
L_080013D4:
    // 0x080013D4: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x080013D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013DC: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x080013E0: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x080013E4: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x080013E8: jalr        $t9
    // 0x080013EC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013EC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x080013F0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080013F4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080013F8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080013FC: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001400: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001404: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001408: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x0800140C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001410: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x08001414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001418: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x0800141C: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x08001420: bc1fl       L_08001460
    if (!c1cs) {
        // 0x08001424: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08001460;
    }
    goto skip_4;
    // 0x08001424: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x08001428: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x0800142C: lbu         $t8, 0x14($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X14);
    // 0x08001430: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x08001434: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001438: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x0800143C: lbu         $t0, 0x15($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X15);
    // 0x08001440: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x08001444: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x08001448: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x0800144C: lbu         $t1, 0x16($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X16);
    // 0x08001450: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x08001454: jalr        $t9
    // 0x08001458: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001458: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x0800145C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08001460:
    // 0x08001460: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001464: jr          $ra
    // 0x08001468: nop

    TRACE_RETURN()
    return;
    // 0x08001468: nop

;}
RECOMP_FUNC void func_08002740_71FF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002748: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800274C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002750: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002754: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08002758: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x0800275C: beq         $v0, $zero, L_08002778
    if (ctx->r2 == 0) {
        // 0x08002760: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(51, 0X26B8) << 16);
            goto L_08002778;
    }
    // 0x08002760: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(51, 0X26B8) << 16);
    // 0x08002764: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002768: beql        $v0, $at, L_080027A0
    if (ctx->r2 == ctx->r1) {
        // 0x0800276C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080027A0;
    }
    goto skip_0;
    // 0x0800276C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002770: b           L_080027A0
    // 0x08002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080027A0;
    // 0x08002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002778:
    // 0x08002778: addiu       $t9, $t9, 0x26B8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(51, 0X26B8));
    // 0x0800277C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    // 0x08002780: jalr        $t9
    // 0x08002784: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002784: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002788: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800278C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002790: addiu       $v1, $a1, 0xD0
    ctx->r3 = ADD32(ctx->r5, 0XD0);
    // 0x08002794: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x08002798: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x0800279C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080027A0:
    // 0x080027A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080027A4: jr          $ra
    // 0x080027A8: nop

    TRACE_RETURN()
    return;
    // 0x080027A8: nop

;}
RECOMP_FUNC void func_08001610_71EDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001614: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800161C: addiu       $t9, $t9, 0x3AC4
    ctx->r25 = ADD32(ctx->r25, 0X3AC4);
    // 0x08001620: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(51, 0X2CC0) << 16);
    // 0x08001624: jalr        $t9
    // 0x08001628: addiu       $a0, $a0, 0x2CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(51, 0X2CC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001628: addiu       $a0, $a0, 0x2CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(51, 0X2CC0));
    after_0:
    // 0x0800162C: lui         $t6, 0xA01
    ctx->r14 = S32(0XA01 << 16);
    // 0x08001630: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001634: addiu       $t9, $t9, 0x230
    ctx->r25 = ADD32(ctx->r25, 0X230);
    // 0x08001638: addiu       $t6, $t6, -0x6000
    ctx->r14 = ADD32(ctx->r14, -0X6000);
    // 0x0800163C: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x08001640: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08001644: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001648: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x0800164C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08001650: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08001654: jalr        $t9
    // 0x08001658: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001658: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800165C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001660: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(51, 0X3F18) << 16);
    // 0x08001664: sw          $v0, 0x3F18($at)
    MEM_W((int16_t)RELOC_LO16(51, 0X3F18), ctx->r1) = ctx->r2;
    // 0x08001668: jr          $ra
    // 0x0800166C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800166C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080014EC_71ECBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080014F0: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x080014F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080014F8: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x080014FC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x08001500: nop

    // 0x08001504: bc1fl       L_08001528
    if (!c1cs) {
        // 0x08001508: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_08001528;
    }
    goto skip_0;
    // 0x08001508: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x0800150C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08001510: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001514: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001518: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800151C: b           L_08001530
    // 0x08001520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08001530;
    // 0x08001520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08001524: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_08001528:
    // 0x08001528: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800152C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_08001530:
    // 0x08001530: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08001534: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08001538: jr          $ra
    // 0x0800153C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x0800153C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001BC4_71F394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001BC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001BCC: sw          $t6, -0x3964($at)
    MEM_W(-0X3964, ctx->r1) = ctx->r14;
    // 0x08001BD0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001BD4: sw          $zero, -0x3954($at)
    MEM_W(-0X3954, ctx->r1) = 0;
    // 0x08001BD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001BDC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001BE0: sw          $t7, -0x3944($at)
    MEM_W(-0X3944, ctx->r1) = ctx->r15;
    // 0x08001BE4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001BE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001BEC: sw          $t8, -0x3934($at)
    MEM_W(-0X3934, ctx->r1) = ctx->r24;
    // 0x08001BF0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001BF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001BF8: sw          $t9, -0x3924($at)
    MEM_W(-0X3924, ctx->r1) = ctx->r25;
    // 0x08001BFC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001C04: sw          $t0, -0x3914($at)
    MEM_W(-0X3914, ctx->r1) = ctx->r8;
    // 0x08001C08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001C10: sw          $t1, -0x3960($at)
    MEM_W(-0X3960, ctx->r1) = ctx->r9;
    // 0x08001C14: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C18: sw          $zero, -0x3950($at)
    MEM_W(-0X3950, ctx->r1) = 0;
    // 0x08001C1C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001C24: sw          $t2, -0x3940($at)
    MEM_W(-0X3940, ctx->r1) = ctx->r10;
    // 0x08001C28: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001C30: sw          $t3, -0x3930($at)
    MEM_W(-0X3930, ctx->r1) = ctx->r11;
    // 0x08001C34: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C38: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08001C3C: sw          $t4, -0x3920($at)
    MEM_W(-0X3920, ctx->r1) = ctx->r12;
    // 0x08001C40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C44: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08001C48: sw          $t5, -0x3910($at)
    MEM_W(-0X3910, ctx->r1) = ctx->r13;
    // 0x08001C4C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C50: sw          $t6, -0x395C($at)
    MEM_W(-0X395C, ctx->r1) = ctx->r14;
    // 0x08001C54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C58: sw          $zero, -0x394C($at)
    MEM_W(-0X394C, ctx->r1) = 0;
    // 0x08001C5C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C60: sw          $t7, -0x393C($at)
    MEM_W(-0X393C, ctx->r1) = ctx->r15;
    // 0x08001C64: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C68: sw          $t8, -0x392C($at)
    MEM_W(-0X392C, ctx->r1) = ctx->r24;
    // 0x08001C6C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C70: sw          $t9, -0x391C($at)
    MEM_W(-0X391C, ctx->r1) = ctx->r25;
    // 0x08001C74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C78: sw          $t0, -0x390C($at)
    MEM_W(-0X390C, ctx->r1) = ctx->r8;
    // 0x08001C7C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C80: sw          $t1, -0x3958($at)
    MEM_W(-0X3958, ctx->r1) = ctx->r9;
    // 0x08001C84: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C88: sw          $zero, -0x3948($at)
    MEM_W(-0X3948, ctx->r1) = 0;
    // 0x08001C8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C90: sw          $t2, -0x3938($at)
    MEM_W(-0X3938, ctx->r1) = ctx->r10;
    // 0x08001C94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001C98: sw          $t3, -0x3928($at)
    MEM_W(-0X3928, ctx->r1) = ctx->r11;
    // 0x08001C9C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001CA0: sw          $t4, -0x3918($at)
    MEM_W(-0X3918, ctx->r1) = ctx->r12;
    // 0x08001CA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001CA8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001CB0: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x08001CB4: sw          $t5, -0x3908($at)
    MEM_W(-0X3908, ctx->r1) = ctx->r13;
    // 0x08001CB8: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08001CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001CC0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08001CC4: addiu       $t6, $zero, 0x3E8
    ctx->r14 = ADD32(0, 0X3E8);
    // 0x08001CC8: addiu       $v1, $v1, 0x4088
    ctx->r3 = ADD32(ctx->r3, 0X4088);
    // 0x08001CCC: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x08001CD0: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x08001CD4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x08001CD8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08001CDC: jalr        $v1
    // 0x08001CE0: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08001CE0: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_0:
    // 0x08001CE4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x08001CE8: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    // 0x08001CEC: jalr        $t9
    // 0x08001CF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CF0: nop

    after_1:
    // 0x08001CF4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x08001CF8: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    // 0x08001CFC: jalr        $t9
    // 0x08001D00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D00: nop

    after_2:
    // 0x08001D04: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D0C: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x08001D10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08001D14: sw          $v1, 0x250($v0)
    MEM_W(0X250, ctx->r2) = ctx->r3;
    // 0x08001D18: sw          $v1, 0x254($v0)
    MEM_W(0X254, ctx->r2) = ctx->r3;
    // 0x08001D1C: sw          $v1, 0x258($v0)
    MEM_W(0X258, ctx->r2) = ctx->r3;
    // 0x08001D20: sw          $v1, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r3;
    // 0x08001D24: jr          $ra
    // 0x08001D28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001D28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08001234_71EA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001238: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800123C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001244: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08001248: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x0800124C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(51, 0XDC4) << 16);
    // 0x08001250: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001254: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x08001258: addiu       $a1, $a1, 0xDC4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(51, 0XDC4));
    // 0x0800125C: jalr        $t9
    // 0x08001260: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001260: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x08001264: bne         $v0, $zero, L_08001274
    if (ctx->r2 != 0) {
        // 0x08001268: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08001274;
    }
    // 0x08001268: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800126C: b           L_0800131C
    // 0x08001270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_0800131C;
    // 0x08001270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001274:
    // 0x08001274: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x08001278: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800127C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001280: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001284: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001288: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x0800128C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001290: addiu       $a1, $zero, 0xE10
    ctx->r5 = ADD32(0, 0XE10);
    // 0x08001294: jalr        $t9
    // 0x08001298: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001298: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x0800129C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x080012A0: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x080012A4: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x080012A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080012AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080012B0: sb          $t6, 0x34($v1)
    MEM_B(0X34, ctx->r3) = ctx->r14;
    // 0x080012B4: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x080012B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080012BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080012C0: sb          $t7, 0x35($v1)
    MEM_B(0X35, ctx->r3) = ctx->r15;
    // 0x080012C4: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x080012C8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x080012CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080012D0: sb          $t8, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r24;
    // 0x080012D4: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x080012D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080012DC: sb          $t0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r8;
    // 0x080012E0: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x080012E4: sb          $t1, 0x38($v1)
    MEM_B(0X38, ctx->r3) = ctx->r9;
    // 0x080012E8: lbu         $t2, 0x3B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3B);
    // 0x080012EC: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    // 0x080012F0: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x080012F4: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x080012F8: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x080012FC: jal         0x08000770
    // 0x08001300: sb          $t2, 0x39($v1)
    MEM_B(0X39, ctx->r3) = ctx->r10;
    func_08000770_71DF40(rdram, ctx);
        goto after_2;
    // 0x08001300: sb          $t2, 0x39($v1)
    MEM_B(0X39, ctx->r3) = ctx->r10;
    after_2:
    // 0x08001304: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001308: addiu       $t9, $t9, 0x1A38
    ctx->r25 = ADD32(ctx->r25, 0X1A38);
    // 0x0800130C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001310: jalr        $t9
    // 0x08001314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001314: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x08001318: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_0800131C:
    // 0x0800131C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001324: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001328: jr          $ra
    // 0x0800132C: nop

    TRACE_RETURN()
    return;
    // 0x0800132C: nop

;}
RECOMP_FUNC void func_08000770_71DF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000774: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000778: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x0800077C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x08000780: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x08000784: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x08000788: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x0800078C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x08000790: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x08000794: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x08000798: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x0800079C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x080007A0: lh          $t7, -0x5250($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5250);
    // 0x080007A4: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x080007A8: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x080007AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080007B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x080007B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080007B8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x080007BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080007C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x080007C4: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x080007C8: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(51, 0X3100) << 16);
    // 0x080007CC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x080007D0: lw          $v0, 0x3100($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(51, 0X3100));
    // 0x080007D4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x080007D8: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x080007DC: addiu       $s4, $zero, 0x34
    ctx->r20 = ADD32(0, 0X34);
    // 0x080007E0: addiu       $s5, $zero, 0x140
    ctx->r21 = ADD32(0, 0X140);
    // 0x080007E4: addiu       $s6, $zero, 0xD0
    ctx->r22 = ADD32(0, 0XD0);
    // 0x080007E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x080007EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_080007F0:
    // 0x080007F0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_080007F4:
    // 0x080007F4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x080007F8: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x080007FC: sll         $t6, $t2, 7
    ctx->r14 = S32(ctx->r10 << 7);
    // 0x08000800: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x08000804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_08000808:
    // 0x08000808: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x0800080C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
L_08000810:
    // 0x08000810: lhu         $a2, 0x2810($t3)
    ctx->r6 = MEM_HU(ctx->r11, 0X2810);
    // 0x08000814: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x08000818: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x0800081C: sra         $t7, $a2, 11
    ctx->r15 = S32(SIGNED(ctx->r6) >> 11);
    // 0x08000820: sra         $t9, $a2, 6
    ctx->r25 = S32(SIGNED(ctx->r6) >> 6);
    // 0x08000824: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x08000828: andi        $t4, $t7, 0x1F
    ctx->r12 = ctx->r15 & 0X1F;
    // 0x0800082C: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x08000830: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x08000834: andi        $t7, $a2, 0x1F
    ctx->r15 = ctx->r6 & 0X1F;
    // 0x08000838: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x0800083C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000840: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x08000844: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x08000848: div         $zero, $t6, $s2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r18)));
    // 0x0800084C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x08000850: bne         $s2, $zero, L_0800085C
    if (ctx->r18 != 0) {
        // 0x08000854: nop
    
            goto L_0800085C;
    }
    // 0x08000854: nop

    // 0x08000858: break       7
    do_break(134219864);
L_0800085C:
    // 0x0800085C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000860: bne         $s2, $at, L_08000874
    if (ctx->r18 != ctx->r1) {
        // 0x08000864: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08000874;
    }
    // 0x08000864: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000868: bne         $t6, $at, L_08000874
    if (ctx->r14 != ctx->r1) {
        // 0x0800086C: nop
    
            goto L_08000874;
    }
    // 0x0800086C: nop

    // 0x08000870: break       6
    do_break(134219888);
L_08000874:
    // 0x08000874: lhu         $a2, 0x280E($t3)
    ctx->r6 = MEM_HU(ctx->r11, 0X280E);
    // 0x08000878: mflo        $s1
    ctx->r17 = lo;
    // 0x0800087C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x08000880: sra         $t6, $a2, 11
    ctx->r14 = S32(SIGNED(ctx->r6) >> 11);
    // 0x08000884: sra         $t8, $a2, 6
    ctx->r24 = S32(SIGNED(ctx->r6) >> 6);
    // 0x08000888: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x0800088C: bgez        $s1, L_0800089C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x08000890: sra         $t7, $s1, 1
        ctx->r15 = S32(SIGNED(ctx->r17) >> 1);
            goto L_0800089C;
    }
    // 0x08000890: sra         $t7, $s1, 1
    ctx->r15 = S32(SIGNED(ctx->r17) >> 1);
    // 0x08000894: addiu       $at, $s1, 0x1
    ctx->r1 = ADD32(ctx->r17, 0X1);
    // 0x08000898: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_0800089C:
    // 0x0800089C: andi        $t4, $t6, 0x1F
    ctx->r12 = ctx->r14 & 0X1F;
    // 0x080008A0: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x080008A4: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x080008A8: sll         $s1, $t7, 4
    ctx->r17 = S32(ctx->r15 << 4);
    // 0x080008AC: andi        $t6, $a2, 0x1F
    ctx->r14 = ctx->r6 & 0X1F;
    // 0x080008B0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x080008B4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x080008B8: addu        $t8, $t4, $t9
    ctx->r24 = ADD32(ctx->r12, ctx->r25);
    // 0x080008BC: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x080008C0: div         $zero, $t9, $s2
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r18)));
    // 0x080008C4: mflo        $t6
    ctx->r14 = lo;
    // 0x080008C8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x080008CC: bne         $s2, $zero, L_080008D8
    if (ctx->r18 != 0) {
        // 0x080008D0: nop
    
            goto L_080008D8;
    }
    // 0x080008D0: nop

    // 0x080008D4: break       7
    do_break(134219988);
L_080008D8:
    // 0x080008D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080008DC: bne         $s2, $at, L_080008F0
    if (ctx->r18 != ctx->r1) {
        // 0x080008E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080008F0;
    }
    // 0x080008E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080008E4: bne         $t9, $at, L_080008F0
    if (ctx->r25 != ctx->r1) {
        // 0x080008E8: nop
    
            goto L_080008F0;
    }
    // 0x080008E8: nop

    // 0x080008EC: break       6
    do_break(134220012);
L_080008F0:
    // 0x080008F0: bgez        $t6, L_08000900
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080008F4: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_08000900;
    }
    // 0x080008F4: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x080008F8: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x080008FC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08000900:
    // 0x08000900: or          $s1, $s1, $t7
    ctx->r17 = ctx->r17 | ctx->r15;
    // 0x08000904: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x08000908: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x0800090C: bne         $t1, $s3, L_08000810
    if (ctx->r9 != ctx->r19) {
        // 0x08000910: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_08000810;
    }
    // 0x08000910: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x08000914: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x08000918: bne         $a1, $s4, L_08000808
    if (ctx->r5 != ctx->r20) {
        // 0x0800091C: addiu       $t2, $t2, 0x280
        ctx->r10 = ADD32(ctx->r10, 0X280);
            goto L_08000808;
    }
    // 0x0800091C: addiu       $t2, $t2, 0x280
    ctx->r10 = ADD32(ctx->r10, 0X280);
    // 0x08000920: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x08000924: bne         $a3, $s5, L_080007F4
    if (ctx->r7 != ctx->r21) {
        // 0x08000928: addiu       $t0, $t0, 0x80
        ctx->r8 = ADD32(ctx->r8, 0X80);
            goto L_080007F4;
    }
    // 0x08000928: addiu       $t0, $t0, 0x80
    ctx->r8 = ADD32(ctx->r8, 0X80);
    // 0x0800092C: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x08000930: bnel        $v1, $s6, L_080007F0
    if (ctx->r3 != ctx->r22) {
        // 0x08000934: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_080007F0;
    }
    goto skip_0;
    // 0x08000934: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    skip_0:
    // 0x08000938: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x0800093C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x08000940: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x08000944: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x08000948: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x0800094C: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x08000950: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x08000954: jr          $ra
    // 0x08000958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000880_721150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000880: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000884: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000888: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x0800088C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000890: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08000894: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08000898: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x0800089C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x080008A0: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x080008A4: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
    // 0x080008A8: lhu         $t7, 0x16($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X16);
    // 0x080008AC: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x080008B0: lhu         $t8, 0x1A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1A);
    // 0x080008B4: jr          $ra
    // 0x080008B8: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x080008B8: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_0800098C_72125C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800098C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000990: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800099C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080009A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080009A4: jalr        $t9
    // 0x080009A8: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009A8: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_0:
    // 0x080009AC: bne         $v0, $zero, L_080009D0
    if (ctx->r2 != 0) {
        // 0x080009B0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080009D0;
    }
    // 0x080009B0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009B4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080009B8: jalr        $t9
    // 0x080009BC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009BC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_1:
    // 0x080009C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009C4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080009C8: jalr        $t9
    // 0x080009CC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009CC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    after_2:
L_080009D0:
    // 0x080009D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009D4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080009D8: jalr        $t9
    // 0x080009DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080009DC: nop

    after_3:
    // 0x080009E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080009E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080009E8: jr          $ra
    // 0x080009EC: nop

    TRACE_RETURN()
    return;
    // 0x080009EC: nop

;}
RECOMP_FUNC void func_080008BC_72118C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080008C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080008C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080008CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x080008D0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080008D4: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x080008D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080008DC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x080008E0: addiu       $a1, $a1, 0x54B4
    ctx->r5 = ADD32(ctx->r5, 0X54B4);
    // 0x080008E4: jalr        $t9
    // 0x080008E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080008EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008F0: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x080008F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080008F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080008FC: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000900: jalr        $t9
    // 0x08000904: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000904: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_1:
    // 0x08000908: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x0800090C: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08000910: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000914: lbu         $t7, 0xD8($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XD8);
    // 0x08000918: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x0800091C: addiu       $t3, $zero, 0x2FB
    ctx->r11 = ADD32(0, 0X2FB);
    // 0x08000920: sb          $t7, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r15;
    // 0x08000924: lbu         $t8, 0xD8($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XD8);
    // 0x08000928: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800092C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000930: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000934: sb          $t1, 0xD8($t0)
    MEM_B(0XD8, ctx->r8) = ctx->r9;
    // 0x08000938: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x0800093C: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x08000940: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000944: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x08000948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800094C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000950: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08000954: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08000958: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x0800095C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000960: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08000964: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08000968: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x0800096C: lhu         $t4, 0x32($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X32);
    // 0x08000970: jalr        $t9
    // 0x08000974: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000974: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
    after_2:
    // 0x08000978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800097C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000980: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000984: jr          $ra
    // 0x08000988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080003E8_720CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080003EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080003F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080003F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080003F8: beq         $a2, $zero, L_08000420
    if (ctx->r6 == 0) {
        // 0x080003FC: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_08000420;
    }
    // 0x080003FC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08000400: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000404: beq         $a2, $at, L_08000590
    if (ctx->r6 == ctx->r1) {
        // 0x08000408: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000590;
    }
    // 0x08000408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800040C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000410: beq         $a2, $at, L_080006FC
    if (ctx->r6 == ctx->r1) {
        // 0x08000414: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080006FC;
    }
    // 0x08000414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000418: b           L_08000870
    // 0x0800041C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x0800041C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000420:
    // 0x08000420: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000424: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800042C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000430: jalr        $t9
    // 0x08000434: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000434: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000438: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x0800043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000444: beq         $a3, $zero, L_08000478
    if (ctx->r7 == 0) {
        // 0x08000448: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_08000478;
    }
    // 0x08000448: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800044C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000450: beq         $a3, $at, L_080004B8
    if (ctx->r7 == ctx->r1) {
        // 0x08000454: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080004B8;
    }
    // 0x08000454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800045C: beq         $a3, $at, L_08000500
    if (ctx->r7 == ctx->r1) {
        // 0x08000460: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000500;
    }
    // 0x08000460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000464: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000468: beq         $a3, $at, L_08000548
    if (ctx->r7 == ctx->r1) {
        // 0x0800046C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000548;
    }
    // 0x0800046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000470: b           L_08000870
    // 0x08000474: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x08000474: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000478:
    // 0x08000478: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800047C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000480: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000484: jalr        $t9
    // 0x08000488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800048C: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x08000490: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08000494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000498: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x0800049C: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x080004A0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x080004A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080004A8: jal         0x08000880
    // 0x080004AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_2;
    // 0x080004AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
    // 0x080004B0: b           L_08000870
    // 0x080004B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080004B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080004B8:
    // 0x080004B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004BC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004C0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080004C4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080004CC: jalr        $t9
    // 0x080004D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080004D4: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x080004D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004E0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x080004E4: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x080004E8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x080004EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080004F0: jal         0x08000880
    // 0x080004F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_4;
    // 0x080004F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_4:
    // 0x080004F8: b           L_08000870
    // 0x080004FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080004FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000500:
    // 0x08000500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000508: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800050C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000510: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000514: jalr        $t9
    // 0x08000518: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000518: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x0800051C: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x08000520: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000528: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x0800052C: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x08000530: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x08000534: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000538: jal         0x08000880
    // 0x0800053C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_6;
    // 0x0800053C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_6:
    // 0x08000540: b           L_08000870
    // 0x08000544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x08000544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000548:
    // 0x08000548: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800054C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000550: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000554: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0800055C: jalr        $t9
    // 0x08000560: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000560: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x08000564: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    // 0x08000568: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0800056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000570: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08000574: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x08000578: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x0800057C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000580: jal         0x08000880
    // 0x08000584: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_8;
    // 0x08000584: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_8:
    // 0x08000588: b           L_08000870
    // 0x0800058C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x0800058C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000590:
    // 0x08000590: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000594: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000598: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    // 0x0800059C: jalr        $t9
    // 0x080005A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080005A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_9:
    // 0x080005A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x080005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080005B0: beq         $a3, $zero, L_080005E4
    if (ctx->r7 == 0) {
        // 0x080005B4: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_080005E4;
    }
    // 0x080005B4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080005B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080005BC: beq         $a3, $at, L_08000624
    if (ctx->r7 == ctx->r1) {
        // 0x080005C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000624;
    }
    // 0x080005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080005C8: beq         $a3, $at, L_0800066C
    if (ctx->r7 == ctx->r1) {
        // 0x080005CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800066C;
    }
    // 0x080005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080005D4: beq         $a3, $at, L_080006B4
    if (ctx->r7 == ctx->r1) {
        // 0x080005D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080006B4;
    }
    // 0x080005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005DC: b           L_08000870
    // 0x080005E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080005E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080005E4:
    // 0x080005E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080005EC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080005F0: jalr        $t9
    // 0x080005F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080005F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x080005F8: addiu       $t1, $zero, 0x2FF
    ctx->r9 = ADD32(0, 0X2FF);
    // 0x080005FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08000600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000604: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000608: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x0800060C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08000610: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000614: jal         0x08000880
    // 0x08000618: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_11;
    // 0x08000618: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_11:
    // 0x0800061C: b           L_08000870
    // 0x08000620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x08000620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000624:
    // 0x08000624: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000628: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800062C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000630: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000634: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000638: jalr        $t9
    // 0x0800063C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800063C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_12:
    // 0x08000640: addiu       $t2, $zero, 0x2FF
    ctx->r10 = ADD32(0, 0X2FF);
    // 0x08000644: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x08000648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800064C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000650: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x08000654: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08000658: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800065C: jal         0x08000880
    // 0x08000660: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_13;
    // 0x08000660: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_13:
    // 0x08000664: b           L_08000870
    // 0x08000668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x08000668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800066C:
    // 0x0800066C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000670: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000674: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000678: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800067C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08000680: jalr        $t9
    // 0x08000684: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000684: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x08000688: addiu       $t3, $zero, 0x2FF
    ctx->r11 = ADD32(0, 0X2FF);
    // 0x0800068C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x08000690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000694: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000698: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x0800069C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x080006A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080006A4: jal         0x08000880
    // 0x080006A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_15;
    // 0x080006A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_15:
    // 0x080006AC: b           L_08000870
    // 0x080006B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080006B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080006B4:
    // 0x080006B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080006B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080006BC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080006C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080006C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x080006C8: jalr        $t9
    // 0x080006CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080006CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x080006D0: addiu       $t4, $zero, 0x2FF
    ctx->r12 = ADD32(0, 0X2FF);
    // 0x080006D4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x080006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080006E0: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x080006E4: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x080006E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080006EC: jal         0x08000880
    // 0x080006F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_17;
    // 0x080006F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_17:
    // 0x080006F4: b           L_08000870
    // 0x080006F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080006F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080006FC:
    // 0x080006FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000700: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000704: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08000708: jalr        $t9
    // 0x0800070C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800070C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_18:
    // 0x08000710: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08000714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000718: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800071C: beq         $a3, $zero, L_08000750
    if (ctx->r7 == 0) {
        // 0x08000720: lui         $a2, 0x3D80
        ctx->r6 = S32(0X3D80 << 16);
            goto L_08000750;
    }
    // 0x08000720: lui         $a2, 0x3D80
    ctx->r6 = S32(0X3D80 << 16);
    // 0x08000724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000728: beq         $a3, $at, L_08000790
    if (ctx->r7 == ctx->r1) {
        // 0x0800072C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000790;
    }
    // 0x0800072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000730: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000734: beq         $a3, $at, L_080007DC
    if (ctx->r7 == ctx->r1) {
        // 0x08000738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080007DC;
    }
    // 0x08000738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800073C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000740: beq         $a3, $at, L_0800082C
    if (ctx->r7 == ctx->r1) {
        // 0x08000744: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800082C;
    }
    // 0x08000744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000748: b           L_08000870
    // 0x0800074C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x0800074C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000750:
    // 0x08000750: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000754: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000758: jalr        $t9
    // 0x0800075C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800075C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x08000760: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000764: addiu       $t5, $zero, 0x300
    ctx->r13 = ADD32(0, 0X300);
    // 0x08000768: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x0800076C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000770: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000778: lui         $a2, 0xC130
    ctx->r6 = S32(0XC130 << 16);
    // 0x0800077C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000780: jal         0x08000880
    // 0x08000784: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_20;
    // 0x08000784: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_20:
    // 0x08000788: b           L_08000870
    // 0x0800078C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x0800078C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000790:
    // 0x08000790: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000794: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000798: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x0800079C: lui         $a2, 0x3D80
    ctx->r6 = S32(0X3D80 << 16);
    // 0x080007A0: jalr        $t9
    // 0x080007A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080007A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x080007A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080007AC: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x080007B0: addiu       $t7, $zero, 0x130
    ctx->r15 = ADD32(0, 0X130);
    // 0x080007B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080007B8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080007BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080007C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007C8: lui         $a2, 0xC130
    ctx->r6 = S32(0XC130 << 16);
    // 0x080007CC: jal         0x08000880
    // 0x080007D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_22;
    // 0x080007D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_22:
    // 0x080007D4: b           L_08000870
    // 0x080007D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x080007D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080007DC:
    // 0x080007DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007E4: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080007E8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080007EC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080007F0: jalr        $t9
    // 0x080007F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080007F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
    // 0x080007F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x080007FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000800: addiu       $t8, $zero, 0x39F
    ctx->r24 = ADD32(0, 0X39F);
    // 0x08000804: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000808: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0800080C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000814: lui         $a2, 0xC130
    ctx->r6 = S32(0XC130 << 16);
    // 0x08000818: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800081C: jal         0x08000880
    // 0x08000820: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_24;
    // 0x08000820: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_24:
    // 0x08000824: b           L_08000870
    // 0x08000828: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000870;
    // 0x08000828: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800082C:
    // 0x0800082C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000830: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000834: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x08000838: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800083C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x08000840: jalr        $t9
    // 0x08000844: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000844: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x08000848: addiu       $t0, $zero, 0x3F
    ctx->r8 = ADD32(0, 0X3F);
    // 0x0800084C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08000850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000854: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000858: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x0800085C: lui         $a3, 0xC0C0
    ctx->r7 = S32(0XC0C0 << 16);
    // 0x08000860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000864: jal         0x08000880
    // 0x08000868: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_08000880_721150(rdram, ctx);
        goto after_26;
    // 0x08000868: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_26:
    // 0x0800086C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000870:
    // 0x08000870: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000874: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000878: jr          $ra
    // 0x0800087C: nop

    TRACE_RETURN()
    return;
    // 0x0800087C: nop

;}
RECOMP_FUNC void func_08000D18_7215E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D18: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000D1C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000D20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000D24: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000D28: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08000D2C: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08000D30: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000D34: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x08000D38: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x08000D3C: jr          $ra
    // 0x08000D40: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x08000D40: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_08000A88_721358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A94: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000A98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AA0: bne         $t6, $at, L_08000AB0
    if (ctx->r14 != ctx->r1) {
        // 0x08000AA4: addiu       $t9, $t9, 0x12F0
        ctx->r25 = ADD32(ctx->r25, 0X12F0);
            goto L_08000AB0;
    }
    // 0x08000AA4: addiu       $t9, $t9, 0x12F0
    ctx->r25 = ADD32(ctx->r25, 0X12F0);
    // 0x08000AA8: jalr        $t9
    // 0x08000AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AAC: nop

    after_0:
L_08000AB0:
    // 0x08000AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AB8: jr          $ra
    // 0x08000ABC: nop

    TRACE_RETURN()
    return;
    // 0x08000ABC: nop

;}
RECOMP_FUNC void func_08000AC0_721390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000AC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000AC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000ACC: beq         $a1, $zero, L_08000AF4
    if (ctx->r5 == 0) {
        // 0x08000AD0: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_08000AF4;
    }
    // 0x08000AD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000AD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000AD8: beq         $a1, $at, L_08000B68
    if (ctx->r5 == ctx->r1) {
        // 0x08000ADC: addiu       $a2, $zero, 0x7
        ctx->r6 = ADD32(0, 0X7);
            goto L_08000B68;
    }
    // 0x08000ADC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x08000AE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000AE4: beq         $a1, $at, L_08000BFC
    if (ctx->r5 == ctx->r1) {
        // 0x08000AE8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08000BFC;
    }
    // 0x08000AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000AEC: b           L_08000CBC
    // 0x08000AF0: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
        goto L_08000CBC;
    // 0x08000AF0: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
L_08000AF4:
    // 0x08000AF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AF8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000AFC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(52, 0XA88) << 16);
    // 0x08000B00: addiu       $a1, $a1, 0xA88
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0XA88));
    // 0x08000B04: jalr        $t9
    // 0x08000B08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000B0C: bne         $v0, $zero, L_08000B1C
    if (ctx->r2 != 0) {
        // 0x08000B10: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000B1C;
    }
    // 0x08000B10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000B14: b           L_08000D04
    // 0x08000B18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000D04;
    // 0x08000B18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000B1C:
    // 0x08000B1C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B20: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000B24: addiu       $t8, $zero, 0x132
    ctx->r24 = ADD32(0, 0X132);
    // 0x08000B28: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B2C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000B30: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08000B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000B40: jalr        $t9
    // 0x08000B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B4C: lui         $a1, 0x4240
    ctx->r5 = S32(0X4240 << 16);
    // 0x08000B50: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x08000B54: lui         $a3, 0xC278
    ctx->r7 = S32(0XC278 << 16);
    // 0x08000B58: jal         0x08000D18
    // 0x08000B5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_08000D18_7215E8(rdram, ctx);
        goto after_2;
    // 0x08000B5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000B60: b           L_08000CBC
    // 0x08000B64: nop

        goto L_08000CBC;
    // 0x08000B64: nop

L_08000B68:
    // 0x08000B68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B6C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000B70: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(52, 0XA88) << 16);
    // 0x08000B74: jalr        $t9
    // 0x08000B78: addiu       $a1, $a1, 0xA88
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0XA88));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B78: addiu       $a1, $a1, 0xA88
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0XA88));
    after_3:
    // 0x08000B7C: bne         $v0, $zero, L_08000B8C
    if (ctx->r2 != 0) {
        // 0x08000B80: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000B8C;
    }
    // 0x08000B80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000B84: b           L_08000D04
    // 0x08000B88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000D04;
    // 0x08000B88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000B8C:
    // 0x08000B8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B90: addiu       $t0, $zero, 0x1C5
    ctx->r8 = ADD32(0, 0X1C5);
    // 0x08000B94: addiu       $t1, $zero, 0x8B
    ctx->r9 = ADD32(0, 0X8B);
    // 0x08000B98: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08000B9C: sw          $t0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r8;
    // 0x08000BA0: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08000BA4: jalr        $t9
    // 0x08000BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000BAC: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x08000BB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000BB4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BB8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08000BBC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000BC0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08000BC4: sb          $t2, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r10;
    // 0x08000BC8: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08000BCC: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08000BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BD4: jalr        $t9
    // 0x08000BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08000BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BE0: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x08000BE4: lui         $a2, 0xC20C
    ctx->r6 = S32(0XC20C << 16);
    // 0x08000BE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000BEC: jal         0x08000D18
    // 0x08000BF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_08000D18_7215E8(rdram, ctx);
        goto after_6;
    // 0x08000BF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x08000BF4: b           L_08000CBC
    // 0x08000BF8: nop

        goto L_08000CBC;
    // 0x08000BF8: nop

L_08000BFC:
    // 0x08000BFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C00: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000C04: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(52, 0XA88) << 16);
    // 0x08000C08: jalr        $t9
    // 0x08000C0C: addiu       $a1, $a1, 0xA88
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0XA88));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000C0C: addiu       $a1, $a1, 0xA88
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0XA88));
    after_7:
    // 0x08000C10: bne         $v0, $zero, L_08000C20
    if (ctx->r2 != 0) {
        // 0x08000C14: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000C20;
    }
    // 0x08000C14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000C18: b           L_08000D04
    // 0x08000C1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000D04;
    // 0x08000C1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000C20:
    // 0x08000C20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C24: addiu       $t5, $zero, 0xFB
    ctx->r13 = ADD32(0, 0XFB);
    // 0x08000C28: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C2C: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x08000C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000C3C: jalr        $t9
    // 0x08000C40: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000C40: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_8:
    // 0x08000C44: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000C48: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000C4C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000C50: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000C54: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08000C58: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x08000C5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000C60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000C6C: jalr        $v0
    // 0x08000C70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08000C70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08000C74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08000C78: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C80: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000C84: jalr        $v0
    // 0x08000C88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x08000C88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x08000C8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C90: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C98: jalr        $t9
    // 0x08000C9C: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000C9C: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    after_11:
    // 0x08000CA0: addiu       $t7, $zero, 0x87
    ctx->r15 = ADD32(0, 0X87);
    // 0x08000CA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CAC: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    // 0x08000CB0: lui         $a2, 0xC1B0
    ctx->r6 = S32(0XC1B0 << 16);
    // 0x08000CB4: jal         0x08000D18
    // 0x08000CB8: lui         $a3, 0xC210
    ctx->r7 = S32(0XC210 << 16);
    func_08000D18_7215E8(rdram, ctx);
        goto after_12;
    // 0x08000CB8: lui         $a3, 0xC210
    ctx->r7 = S32(0XC210 << 16);
    after_12:
L_08000CBC:
    // 0x08000CBC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000CC0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000CC4: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000CC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CCC: addiu       $t2, $zero, 0x3D
    ctx->r10 = ADD32(0, 0X3D);
    // 0x08000CD0: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08000CD4: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000CD8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000CDC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x08000CE0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000CE4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x08000CE8: jalr        $t9
    // 0x08000CEC: sh          $t2, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000CEC: sh          $t2, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r10;
    after_13:
    // 0x08000CF0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000CF4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x08000CF8: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x08000CFC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000D00: sw          $t3, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r11;
L_08000D04:
    // 0x08000D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000D08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000D10: jr          $ra
    // 0x08000D14: nop

    TRACE_RETURN()
    return;
    // 0x08000D14: nop

;}
RECOMP_FUNC void func_080009F0_7212C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080009F4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080009F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080009FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000A00: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x08000A04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000A08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08000A0C: jalr        $v0
    // 0x08000A10: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000A10: addiu       $a0, $zero, 0x1C5
    ctx->r4 = ADD32(0, 0X1C5);
    after_0:
    // 0x08000A14: beq         $v0, $zero, L_08000A24
    if (ctx->r2 == 0) {
        // 0x08000A18: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000A24;
    }
    // 0x08000A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000A1C: jal         0x08000AC0
    // 0x08000A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_08000AC0_721390(rdram, ctx);
        goto after_1;
    // 0x08000A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_08000A24:
    // 0x08000A24: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A28: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    // 0x08000A2C: jalr        $t9
    // 0x08000A30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A30: nop

    after_2:
    // 0x08000A34: beq         $v0, $zero, L_08000A44
    if (ctx->r2 == 0) {
        // 0x08000A38: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000A44;
    }
    // 0x08000A38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000A3C: jal         0x08000AC0
    // 0x08000A40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_08000AC0_721390(rdram, ctx);
        goto after_3;
    // 0x08000A40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_08000A44:
    // 0x08000A44: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A48: addiu       $a0, $zero, 0x1C7
    ctx->r4 = ADD32(0, 0X1C7);
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A50: nop

    after_4:
    // 0x08000A54: beq         $v0, $zero, L_08000A64
    if (ctx->r2 == 0) {
        // 0x08000A58: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000A64;
    }
    // 0x08000A58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000A5C: jal         0x08000AC0
    // 0x08000A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_08000AC0_721390(rdram, ctx);
        goto after_5;
    // 0x08000A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_08000A64:
    // 0x08000A64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A6C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08000A70: jalr        $t9
    // 0x08000A74: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000A74: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_6:
    // 0x08000A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A80: jr          $ra
    // 0x08000A84: nop

    TRACE_RETURN()
    return;
    // 0x08000A84: nop

;}
RECOMP_FUNC void func_08000000_7208D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800000C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000010: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x08000014: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000018: addiu       $v1, $zero, 0x2710
    ctx->r3 = ADD32(0, 0X2710);
    // 0x0800001C: beq         $v0, $zero, L_08000040
    if (ctx->r2 == 0) {
        // 0x08000020: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08000040;
    }
    // 0x08000020: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000024: beq         $v0, $at, L_0800028C
    if (ctx->r2 == ctx->r1) {
        // 0x08000028: addiu       $s0, $a2, 0xD0
        ctx->r16 = ADD32(ctx->r6, 0XD0);
            goto L_0800028C;
    }
    // 0x08000028: addiu       $s0, $a2, 0xD0
    ctx->r16 = ADD32(ctx->r6, 0XD0);
    // 0x0800002C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000030: beq         $v0, $at, L_080002CC
    if (ctx->r2 == ctx->r1) {
        // 0x08000034: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_080002CC;
    }
    // 0x08000034: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x08000038: b           L_0800030C
    // 0x0800003C: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
        goto L_0800030C;
    // 0x0800003C: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
L_08000040:
    // 0x08000040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000044: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_08000048:
    // 0x08000048: bnel        $v0, $v1, L_08000048
    if (ctx->r2 != ctx->r3) {
        // 0x0800004C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_08000048;
    }
    goto skip_0;
    // 0x0800004C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x08000050: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000054: addiu       $v0, $v0, -0x39D8
    ctx->r2 = ADD32(ctx->r2, -0X39D8);
    // 0x08000058: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x0800005C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000060: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000064: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000068: addiu       $s0, $a2, 0xD0
    ctx->r16 = ADD32(ctx->r6, 0XD0);
    // 0x0800006C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08000070: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000074: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x08000078: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0800007C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000084: sb          $t9, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r25;
    // 0x08000088: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800008C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000090: jalr        $t9
    // 0x08000094: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000094: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000098: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800009C: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080000A0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080000A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080000A8: jalr        $t9
    // 0x080000AC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000AC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x080000B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x080000B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080000B8: lui         $a1, 0xC2BC
    ctx->r5 = S32(0XC2BC << 16);
    // 0x080000BC: beq         $v0, $zero, L_080000D8
    if (ctx->r2 == 0) {
        // 0x080000C0: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_080000D8;
    }
    // 0x080000C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080000C4: beq         $v0, $at, L_08000160
    if (ctx->r2 == ctx->r1) {
        // 0x080000C8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000160;
    }
    // 0x080000C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080000CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080000D0: beq         $v0, $at, L_080001B4
    if (ctx->r2 == ctx->r1) {
        // 0x080000D4: addiu       $a0, $zero, 0x171
        ctx->r4 = ADD32(0, 0X171);
            goto L_080001B4;
    }
    // 0x080000D4: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
L_080000D8:
    // 0x080000D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080000E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080000E4: jalr        $t9
    // 0x080000E8: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000E8: lui         $a3, 0x4288
    ctx->r7 = S32(0X4288 << 16);
    after_2:
    // 0x080000EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080000F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000F4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080000F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080000FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000100: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000104: jalr        $t9
    // 0x08000108: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000108: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    after_3:
    // 0x0800010C: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000110: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000114: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000118: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800011C: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x08000120: jal         0x080008BC
    // 0x08000124: lui         $a3, 0x4230
    ctx->r7 = S32(0X4230 << 16);
    func_080008BC_72118C(rdram, ctx);
        goto after_4;
    // 0x08000124: lui         $a3, 0x4230
    ctx->r7 = S32(0X4230 << 16);
    after_4:
    // 0x08000128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800012C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000130: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x08000134: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000138: lui         $a3, 0xC228
    ctx->r7 = S32(0XC228 << 16);
    // 0x0800013C: jal         0x080008BC
    // 0x08000140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_080008BC_72118C(rdram, ctx);
        goto after_5;
    // 0x08000140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08000144: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000148: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800014C: jalr        $t9
    // 0x08000150: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000150: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    after_6:
    // 0x08000154: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x08000158: b           L_08000218
    // 0x0800015C: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
        goto L_08000218;
    // 0x0800015C: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
L_08000160:
    // 0x08000160: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000164: jalr        $t9
    // 0x08000168: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000168: addiu       $a0, $zero, 0x171
    ctx->r4 = ADD32(0, 0X171);
    after_7:
    // 0x0800016C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000170: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000174: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000178: lui         $a1, 0xC0C0
    ctx->r5 = S32(0XC0C0 << 16);
    // 0x0800017C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08000180: jalr        $t9
    // 0x08000184: lui         $a3, 0x4290
    ctx->r7 = S32(0X4290 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000184: lui         $a3, 0x4290
    ctx->r7 = S32(0X4290 << 16);
    after_8:
    // 0x08000188: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800018C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000190: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000194: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000198: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800019C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001A4: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    after_9:
    // 0x080001A8: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x080001AC: b           L_08000218
    // 0x080001B0: sw          $t3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r11;
        goto L_08000218;
    // 0x080001B0: sw          $t3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r11;
L_080001B4:
    // 0x080001B4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x080001B8: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x080001BC: jalr        $v0
    // 0x080001C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x080001C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_10:
    // 0x080001C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080001CC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080001D0: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x080001D4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x080001D8: jalr        $t9
    // 0x080001DC: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080001DC: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    after_11:
    // 0x080001E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080001E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001E8: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080001EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080001F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080001F4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080001F8: jalr        $t9
    // 0x080001FC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080001FC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_12:
    // 0x08000200: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000204: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08000208: jalr        $t9
    // 0x0800020C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800020C: nop

    after_13:
    // 0x08000210: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x08000214: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
L_08000218:
    // 0x08000218: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800021C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000220: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000224: jalr        $t9
    // 0x08000228: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000228: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_14:
    // 0x0800022C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000230: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000234: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000238: jalr        $t9
    // 0x0800023C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800023C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_15:
    // 0x08000240: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000244: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000248: jalr        $t9
    // 0x0800024C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800024C: nop

    after_16:
    // 0x08000250: jal         0x08000348
    // 0x08000254: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_08000348_720C18(rdram, ctx);
        goto after_17;
    // 0x08000254: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_17:
    // 0x08000258: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x0800025C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08000260: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x08000264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000268: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x0800026C: jal         0x080003E8
    // 0x08000270: lbu         $a1, 0x60($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X60);
    func_080003E8_720CB8(rdram, ctx);
        goto after_18;
    // 0x08000270: lbu         $a1, 0x60($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X60);
    after_18:
    // 0x08000274: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x08000278: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x0800027C: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
    // 0x08000280: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000284: b           L_0800030C
    // 0x08000288: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
        goto L_0800030C;
    // 0x08000288: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
L_0800028C:
    // 0x0800028C: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x08000290: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08000294: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000298: bne         $v1, $at, L_080002AC
    if (ctx->r3 != ctx->r1) {
        // 0x0800029C: addiu       $t9, $t9, -0x32B8
        ctx->r25 = ADD32(ctx->r25, -0X32B8);
            goto L_080002AC;
    }
    // 0x0800029C: addiu       $t9, $t9, -0x32B8
    ctx->r25 = ADD32(ctx->r25, -0X32B8);
    // 0x080002A0: jalr        $t9
    // 0x080002A4: lb          $a0, 0x13($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X13);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080002A4: lb          $a0, 0x13($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X13);
    after_19:
    // 0x080002A8: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
L_080002AC:
    // 0x080002AC: slt         $v0, $zero, $v1
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x080002B0: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x080002B4: bne         $v0, $zero, L_0800030C
    if (ctx->r2 != 0) {
        // 0x080002B8: sh          $t0, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r8;
            goto L_0800030C;
    }
    // 0x080002B8: sh          $t0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r8;
    // 0x080002BC: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x080002C0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080002C4: b           L_0800030C
    // 0x080002C8: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
        goto L_0800030C;
    // 0x080002C8: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
L_080002CC:
    // 0x080002CC: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x080002D0: sw          $t3, -0x4E5C($at)
    MEM_W(-0X4E5C, ctx->r1) = ctx->r11;
    // 0x080002D4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080002DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080002E0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080002E4: sb          $t4, 0x7AF8($at)
    MEM_B(0X7AF8, ctx->r1) = ctx->r12;
    // 0x080002E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x080002EC: jalr        $t9
    // 0x080002F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080002F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_20:
    // 0x080002F4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080002F8: addiu       $t9, $t9, -0x591C
    ctx->r25 = ADD32(ctx->r25, -0X591C);
    // 0x080002FC: jalr        $t9
    // 0x08000300: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000300: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x08000304: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x08000308: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
L_0800030C:
    // 0x0800030C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000310: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000314: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000318: beql        $a0, $zero, L_0800032C
    if (ctx->r4 == 0) {
        // 0x0800031C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_0800032C;
    }
    goto skip_1;
    // 0x0800031C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08000320: jalr        $t9
    // 0x08000324: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000324: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_22:
    // 0x08000328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800032C:
    // 0x0800032C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000330: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000334: jr          $ra
    // 0x08000338: nop

    TRACE_RETURN()
    return;
    // 0x08000338: nop

;}
RECOMP_FUNC void func_0800033C_720C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800033C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000340: jr          $ra
    // 0x08000344: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000344: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000348_720C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800034C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000354: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000358: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(52, 0X33C) << 16);
    // 0x0800035C: addiu       $a1, $a1, 0x33C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(52, 0X33C));
    // 0x08000360: jalr        $t9
    // 0x08000364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000368: bne         $v0, $zero, L_08000378
    if (ctx->r2 != 0) {
        // 0x0800036C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_08000378;
    }
    // 0x0800036C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x08000370: b           L_080003D8
    // 0x08000374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080003D8;
    // 0x08000374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000378:
    // 0x08000378: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x0800037C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000380: sh          $t6, 0x28($a3)
    MEM_H(0X28, ctx->r7) = ctx->r14;
    // 0x08000384: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000388: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x0800038C: jalr        $t9
    // 0x08000390: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000390: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_1:
    // 0x08000394: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08000398: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800039C: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x080003A0: addiu       $t8, $zero, 0x2F4
    ctx->r24 = ADD32(0, 0X2F4);
    // 0x080003A4: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080003A8: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x080003AC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080003B0: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x080003B4: lbu         $t0, 0xD8($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XD8);
    // 0x080003B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080003C0: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x080003C4: lbu         $t1, 0xD8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XD8);
    // 0x080003C8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080003CC: jal         0x080003E8
    // 0x080003D0: sb          $t2, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r10;
    func_080003E8_720CB8(rdram, ctx);
        goto after_2;
    // 0x080003D0: sb          $t2, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r10;
    after_2:
    // 0x080003D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_080003D8:
    // 0x080003D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080003E0: jr          $ra
    // 0x080003E4: nop

    TRACE_RETURN()
    return;
    // 0x080003E4: nop

;}
RECOMP_FUNC void func_080029AC_723FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080029B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080029B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080029B8: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x080029BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029C0: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x080029C4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080029C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080029CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080029D0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080029D4: jalr        $t9
    // 0x080029D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080029D8: nop

    after_0:
    // 0x080029DC: bne         $v0, $zero, L_08002A0C
    if (ctx->r2 != 0) {
        // 0x080029E0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08002A0C;
    }
    // 0x080029E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080029E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029EC: lw          $a0, 0xBC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XBC);
    // 0x080029F0: jalr        $t9
    // 0x080029F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080029F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x080029F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080029FC: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x08002A00: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x08002A04: jalr        $t9
    // 0x08002A08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A08: nop

    after_2:
L_08002A0C:
    // 0x08002A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A14: jr          $ra
    // 0x08002A18: nop

    TRACE_RETURN()
    return;
    // 0x08002A18: nop

;}
RECOMP_FUNC void func_0800016C_72178C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800016C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000170: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000178: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x0800017C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000180: jalr        $t9
    // 0x08000184: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000184: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000188: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800018C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000190: jalr        $t9
    // 0x08000194: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000194: nop

    after_1:
    // 0x08000198: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800019C: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x080001A0: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080001A4: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080001A8: lhu         $t7, 0x98($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X98);
    // 0x080001AC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x080001B0: beql        $t7, $zero, L_08000234
    if (ctx->r15 == 0) {
        // 0x080001B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000234;
    }
    goto skip_0;
    // 0x080001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080001B8: jalr        $v0
    // 0x080001BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080001BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x080001C0: bne         $v0, $zero, L_0800021C
    if (ctx->r2 != 0) {
        // 0x080001C4: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_0800021C;
    }
    // 0x080001C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080001C8: jalr        $t9
    // 0x080001CC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001CC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x080001D0: bne         $v0, $zero, L_0800021C
    if (ctx->r2 != 0) {
        // 0x080001D4: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_0800021C;
    }
    // 0x080001D4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080001D8: jalr        $t9
    // 0x080001DC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080001DC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_4:
    // 0x080001E0: bne         $v0, $zero, L_0800021C
    if (ctx->r2 != 0) {
        // 0x080001E4: nop
    
            goto L_0800021C;
    }
    // 0x080001E4: nop

    // 0x080001E8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080001EC: lui         $at, 0xC264
    ctx->r1 = S32(0XC264 << 16);
    // 0x080001F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080001F4: lw          $t8, 0x84($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X84);
    // 0x080001F8: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x080001FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000200: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x08000204: lw          $t0, 0x84($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X84);
    // 0x08000208: lui         $at, 0xC23C
    ctx->r1 = S32(0XC23C << 16);
    // 0x0800020C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000210: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x08000214: lw          $t1, 0x84($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X84);
    // 0x08000218: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
L_0800021C:
    // 0x0800021C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000220: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000224: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X240) << 16);
    // 0x08000228: jalr        $t9
    // 0x0800022C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800022C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X240));
    after_5:
    // 0x08000230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000234:
    // 0x08000234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000238: jr          $ra
    // 0x0800023C: nop

    TRACE_RETURN()
    return;
    // 0x0800023C: nop

;}
RECOMP_FUNC void func_08001C20_723240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001C24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001C28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001C2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001C30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C34: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x08001C38: addiu       $t7, $zero, 0x315
    ctx->r15 = ADD32(0, 0X315);
    // 0x08001C3C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001C40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001C44: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001C48: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001C4C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001C50: jalr        $t9
    // 0x08001C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08001C58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C5C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001C60: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001C64: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08001C68: jalr        $t9
    // 0x08001C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08001C70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C74: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001C78: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001C7C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001C80: jalr        $t9
    // 0x08001C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08001C88: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001C8C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001C90: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001C94: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C98: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x08001C9C: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08001CA0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001CA4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001CA8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001CAC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001CB0: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x08001CB4: sh          $t2, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r10;
    // 0x08001CB8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001CC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001CC4: jalr        $t9
    // 0x08001CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08001CCC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x08001CD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CD4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08001CD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X1D00) << 16);
    // 0x08001CE0: addiu       $a0, $a0, 0x1D00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1D00));
    // 0x08001CE4: jalr        $t9
    // 0x08001CE8: sb          $t3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001CE8: sb          $t3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r11;
    after_4:
    // 0x08001CEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001CF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001CF8: jr          $ra
    // 0x08001CFC: nop

    TRACE_RETURN()
    return;
    // 0x08001CFC: nop

;}
RECOMP_FUNC void func_08002618_723C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800261C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002624: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08002628: addiu       $t0, $zero, 0x46
    ctx->r8 = ADD32(0, 0X46);
    // 0x0800262C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X266C) << 16);
    // 0x08002630: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08002634: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002638: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x0800263C: slti        $at, $t9, 0x46
    ctx->r1 = SIGNED(ctx->r25) < 0X46 ? 1 : 0;
    // 0x08002640: bne         $at, $zero, L_0800265C
    if (ctx->r1 != 0) {
        // 0x08002644: sh          $t8, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r24;
            goto L_0800265C;
    }
    // 0x08002644: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08002648: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800264C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002650: sh          $t0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r8;
    // 0x08002654: jalr        $t9
    // 0x08002658: addiu       $a0, $a0, 0x266C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X266C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002658: addiu       $a0, $a0, 0x266C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X266C));
    after_0:
L_0800265C:
    // 0x0800265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002664: jr          $ra
    // 0x08002668: nop

    TRACE_RETURN()
    return;
    // 0x08002668: nop

;}
RECOMP_FUNC void func_08002A1C_72403C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08002A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A24: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08002A28: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08002A2C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08002A30: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x08002A34: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x08002A38: addiu       $t9, $t9, 0x79F0
    ctx->r25 = ADD32(ctx->r25, 0X79F0);
    // 0x08002A3C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x08002A40: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x08002A44: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x08002A48: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x08002A4C: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x08002A50: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x08002A54: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x08002A58: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x08002A5C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x08002A60: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x08002A64: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x08002A68: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x08002A6C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x08002A70: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x08002A74: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x08002A78: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x08002A7C: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x08002A80: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x08002A84: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002A88: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x08002A8C: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x08002A90: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x08002A94: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x08002A98: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x08002A9C: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x08002AA0: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x08002AA4: jalr        $t9
    // 0x08002AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AB0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08002AB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08002AB8: jr          $ra
    // 0x08002ABC: nop

    TRACE_RETURN()
    return;
    // 0x08002ABC: nop

;}
RECOMP_FUNC void func_08002514_723B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800251C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002520: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002524: lui         $t6, 0x160
    ctx->r14 = S32(0X160 << 16);
    // 0x08002528: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800252C: ori         $t6, $t6, 0x2A1
    ctx->r14 = ctx->r14 | 0X2A1;
    // 0x08002530: addiu       $t7, $zero, 0x3D6
    ctx->r15 = ADD32(0, 0X3D6);
    // 0x08002534: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x08002538: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800253C: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x08002540: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002544: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002548: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x0800254C: sb          $t8, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r24;
    // 0x08002550: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x08002554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002558: jalr        $t9
    // 0x0800255C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800255C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002564: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800256C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08002570: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08002574: jalr        $t9
    // 0x08002578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800257C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002580: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002584: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X25A8) << 16);
    // 0x08002588: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x0800258C: jalr        $t9
    // 0x08002590: addiu       $a0, $a0, 0x25A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X25A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002590: addiu       $a0, $a0, 0x25A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X25A8));
    after_2:
    // 0x08002594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800259C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080025A0: jr          $ra
    // 0x080025A4: nop

    TRACE_RETURN()
    return;
    // 0x080025A4: nop

;}
RECOMP_FUNC void func_08001FB4_7235D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001FB8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001FBC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001FC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001FC4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001FC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FCC: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x08001FD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001FD4: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001FD8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001FDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001FE0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001FE4: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001FE8: jalr        $t9
    // 0x08001FEC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001FEC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    after_0:
    // 0x08001FF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FF4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001FF8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001FFC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002000: jalr        $t9
    // 0x08002004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002008: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800200C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002010: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002014: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002018: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800201C: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08002020: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002028: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800202C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08002030: jalr        $t9
    // 0x08002034: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002034: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_2:
    // 0x08002038: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800203C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002040: lui         $a2, 0x3A83
    ctx->r6 = S32(0X3A83 << 16);
    // 0x08002044: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x08002048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800204C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002050: jalr        $t9
    // 0x08002054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08002058: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EB8) << 16);
    // 0x0800205C: lwc1        $f0, 0x2EB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EB8));
    // 0x08002060: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x08002064: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(53, 0X2A1C) << 16);
    // 0x08002068: sb          $t2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r10;
    // 0x0800206C: addiu       $t9, $t9, 0x2A1C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(53, 0X2A1C));
    // 0x08002070: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08002074: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002078: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0800207C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002080: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08002084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002088: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x0800208C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002090: jalr        $t9
    // 0x08002094: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002094: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x08002098: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800209C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020A0: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x080020A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X20CC) << 16);
    // 0x080020AC: sw          $t4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r12;
    // 0x080020B0: jalr        $t9
    // 0x080020B4: addiu       $a0, $a0, 0x20CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X20CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080020B4: addiu       $a0, $a0, 0x20CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X20CC));
    after_5:
    // 0x080020B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080020BC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080020C0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080020C4: jr          $ra
    // 0x080020C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080020C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080025A8_723BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080025A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080025AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080025B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080025B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080025B8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080025BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080025C0: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x080025C4: beql        $t7, $zero, L_0800260C
    if (ctx->r15 == 0) {
        // 0x080025C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800260C;
    }
    goto skip_0;
    // 0x080025C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080025CC: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x080025D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080025D4: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080025D8: beq         $v0, $zero, L_08002608
    if (ctx->r2 == 0) {
        // 0x080025DC: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_08002608;
    }
    // 0x080025DC: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x080025E0: jalr        $t9
    // 0x080025E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080025E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080025EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025F0: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x080025F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X2618) << 16);
    // 0x080025FC: addiu       $a0, $a0, 0x2618
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2618));
    // 0x08002600: jalr        $t9
    // 0x08002604: sb          $t8, 0x8D($a1)
    MEM_B(0X8D, ctx->r5) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002604: sb          $t8, 0x8D($a1)
    MEM_B(0X8D, ctx->r5) = ctx->r24;
    after_1:
L_08002608:
    // 0x08002608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800260C:
    // 0x0800260C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002610: jr          $ra
    // 0x08002614: nop

    TRACE_RETURN()
    return;
    // 0x08002614: nop

;}
