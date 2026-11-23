#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080000C4_6B3064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000CC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080000D0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080000D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080000D8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x080000DC: beq         $t7, $zero, L_0800010C
    if (ctx->r15 == 0) {
        // 0x080000E0: addiu       $a0, $zero, 0x26E
        ctx->r4 = ADD32(0, 0X26E);
            goto L_0800010C;
    }
    // 0x080000E0: addiu       $a0, $zero, 0x26E
    ctx->r4 = ADD32(0, 0X26E);
    // 0x080000E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000E8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080000EC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000F4: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_0:
    // 0x080000F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000100: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(19, 0X11C) << 16);
    // 0x08000104: jalr        $t9
    // 0x08000108: addiu       $a0, $a0, 0x11C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X11C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000108: addiu       $a0, $a0, 0x11C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X11C));
    after_1:
L_0800010C:
    // 0x0800010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000114: jr          $ra
    // 0x08000118: nop

    TRACE_RETURN()
    return;
    // 0x08000118: nop

;}
RECOMP_FUNC void func_08000000_6B2FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800000C: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x08000010: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08000014: lui         $t6, 0x8060
    ctx->r14 = S32(0X8060 << 16);
    // 0x08000018: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x0800001C: lbu         $t0, 0xEA($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000020: ori         $t6, $t6, 0x8A0
    ctx->r14 = ctx->r14 | 0X8A0;
    // 0x08000024: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x08000028: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800002C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08000030: beq         $t0, $zero, L_08000048
    if (ctx->r8 == 0) {
        // 0x08000034: sb          $zero, 0x6C($a0)
        MEM_B(0X6C, ctx->r4) = 0;
            goto L_08000048;
    }
    // 0x08000034: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000038: lui         $at, 0x6C0
    ctx->r1 = S32(0X6C0 << 16);
    // 0x0800003C: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x08000040: or          $t2, $t6, $at
    ctx->r10 = ctx->r14 | ctx->r1;
    // 0x08000044: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
L_08000048:
    // 0x08000048: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800004C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000054: jalr        $t9
    // 0x08000058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800005C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x08000060: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000064: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000068: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800006C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000070: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000074: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x08000078: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x0800007C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000080: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000084: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000088: jalr        $t9
    // 0x0800008C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800008C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000090: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000094: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000098: jalr        $t9
    // 0x0800009C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800009C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x080000A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(19, 0XC4) << 16);
    // 0x080000AC: jalr        $t9
    // 0x080000B0: addiu       $a0, $a0, 0xC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0XC4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000B0: addiu       $a0, $a0, 0xC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0XC4));
    after_3:
    // 0x080000B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080000B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080000BC: jr          $ra
    // 0x080000C0: nop

    TRACE_RETURN()
    return;
    // 0x080000C0: nop

;}
RECOMP_FUNC void func_08000268_6B3208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800026C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000274: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000278: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x0800027C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000280: jalr        $t9
    // 0x08000284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800028C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000290: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000294: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08000298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800029C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002A0: jr          $ra
    // 0x080002A4: nop

    TRACE_RETURN()
    return;
    // 0x080002A4: nop

;}
RECOMP_FUNC void func_08001C58_6B4EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C64: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001C68: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC378) << 16);
    // 0x08001C6C: ldc1        $f0, -0x3C88($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC378));
    // 0x08001C70: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001C74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001C78: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC380) << 16);
    // 0x08001C7C: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001C80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1D0C) << 16);
    // 0x08001C84: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x08001C88: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001C8C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001C90: addiu       $a0, $a0, 0x1D0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D0C));
    // 0x08001C94: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001C98: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001C9C: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001CA0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001CA4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001CA8: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x08001CAC: ldc1        $f16, -0x3C80($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC380));
    // 0x08001CB0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC388) << 16);
    // 0x08001CB4: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x08001CB8: nop

    // 0x08001CBC: bc1fl       L_08001CD4
    if (!c1cs) {
        // 0x08001CC0: lhu         $t6, 0x16($a1)
        ctx->r14 = MEM_HU(ctx->r5, 0X16);
            goto L_08001CD4;
    }
    goto skip_0;
    // 0x08001CC0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    skip_0:
    // 0x08001CC4: lwc1        $f0, -0x3C78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC388));
    // 0x08001CC8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08001CCC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08001CD0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
L_08001CD4:
    // 0x08001CD4: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x08001CD8: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x08001CDC: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08001CE0: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x08001CE4: bne         $t9, $at, L_08001CFC
    if (ctx->r25 != ctx->r1) {
        // 0x08001CE8: sh          $t8, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r24;
            goto L_08001CFC;
    }
    // 0x08001CE8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08001CEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CF4: jalr        $t9
    // 0x08001CF8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001CF8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    after_0:
L_08001CFC:
    // 0x08001CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D04: jr          $ra
    // 0x08001D08: nop

    TRACE_RETURN()
    return;
    // 0x08001D08: nop

;}
RECOMP_FUNC void func_08004ED0_6B8170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004ED0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08004ED4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08004ED8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08004EDC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08004EE0: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x08004EE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004EE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08004EEC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08004EF0: beq         $t7, $zero, L_080050BC
    if (ctx->r15 == 0) {
        // 0x08004EF4: addiu       $a2, $zero, 0x80
        ctx->r6 = ADD32(0, 0X80);
            goto L_080050BC;
    }
    // 0x08004EF4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x08004EF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004EFC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004F00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004F04: jalr        $t9
    // 0x08004F08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004F08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x08004F0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004F10: addiu       $t9, $t9, -0x3D5C
    ctx->r25 = ADD32(ctx->r25, -0X3D5C);
    // 0x08004F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004F18: jalr        $t9
    // 0x08004F1C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004F1C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x08004F20: lhu         $a0, 0x8A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8A);
    // 0x08004F24: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x08004F28: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x08004F2C: bne         $v1, $zero, L_08004F68
    if (ctx->r3 != 0) {
        // 0x08004F30: sh          $t8, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r24;
            goto L_08004F68;
    }
    // 0x08004F30: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08004F34: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x08004F38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004F3C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004F40: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08004F44: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004F48: jalr        $t9
    // 0x08004F4C: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004F4C: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_2:
    // 0x08004F50: bne         $v0, $zero, L_08004F68
    if (ctx->r2 != 0) {
        // 0x08004F54: nop
    
            goto L_08004F68;
    }
    // 0x08004F54: nop

    // 0x08004F58: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x08004F5C: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x08004F60: beq         $t2, $zero, L_0800501C
    if (ctx->r10 == 0) {
        // 0x08004F64: andi        $t3, $v0, 0x80
        ctx->r11 = ctx->r2 & 0X80;
            goto L_0800501C;
    }
    // 0x08004F64: andi        $t3, $v0, 0x80
    ctx->r11 = ctx->r2 & 0X80;
L_08004F68:
    // 0x08004F68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004F6C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004F70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004F74: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08004F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004F7C: jalr        $t9
    // 0x08004F80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004F80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08004F84: beq         $v0, $zero, L_08004FE4
    if (ctx->r2 == 0) {
        // 0x08004F88: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_08004FE4;
    }
    // 0x08004F88: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08004F8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004F90: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004F94: jalr        $t9
    // 0x08004F98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004F98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x08004F9C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004FA0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004FA4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08004FA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004FAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08004FB0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08004FB4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004FB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004FBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004FC0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08004FC4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004FC8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08004FCC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x08004FD0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08004FD4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004FD8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08004FDC: jalr        $t9
    // 0x08004FE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004FE0: nop

    after_5:
L_08004FE4:
    // 0x08004FE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004FE8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08004FEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004FF0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004FF4: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    // 0x08004FF8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x08004FFC: jalr        $t9
    // 0x08005000: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08005000: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x08005004: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005008: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800500C: jalr        $t9
    // 0x08005010: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08005010: nop

    after_7:
    // 0x08005014: b           L_080056E4
    // 0x08005018: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080056E4;
    // 0x08005018: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800501C:
    // 0x0800501C: beq         $t3, $zero, L_080050BC
    if (ctx->r11 == 0) {
        // 0x08005020: addiu       $a0, $zero, 0x24F
        ctx->r4 = ADD32(0, 0X24F);
            goto L_080050BC;
    }
    // 0x08005020: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x08005024: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005028: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800502C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005030: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08005034: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x08005038: jalr        $t9
    // 0x0800503C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800503C: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_8:
    // 0x08005040: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005044: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08005048: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800504C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08005050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005054: jalr        $t9
    // 0x08005058: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08005058: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x0800505C: beq         $v0, $zero, L_080050BC
    if (ctx->r2 == 0) {
        // 0x08005060: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_080050BC;
    }
    // 0x08005060: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08005064: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005068: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800506C: jalr        $t9
    // 0x08005070: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08005070: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x08005074: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08005078: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800507C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08005080: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08005084: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08005088: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x0800508C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08005090: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08005094: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005098: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x0800509C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080050A0: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x080050A4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x080050A8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x080050AC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080050B0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080050B4: jalr        $t9
    // 0x080050B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080050B8: nop

    after_11:
L_080050BC:
    // 0x080050BC: lw          $t4, 0xE8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE8);
    // 0x080050C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080050C4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080050C8: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x080050CC: beq         $t5, $zero, L_080051EC
    if (ctx->r13 == 0) {
        // 0x080050D0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_080051EC;
    }
    // 0x080050D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080050D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080050D8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080050DC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x080050E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080050E4: jalr        $t9
    // 0x080050E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080050E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x080050EC: lhu         $a0, 0x8A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8A);
    // 0x080050F0: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x080050F4: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x080050F8: bne         $v1, $zero, L_0800512C
    if (ctx->r3 != 0) {
        // 0x080050FC: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_0800512C;
    }
    // 0x080050FC: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08005100: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x08005104: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005108: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800510C: andi        $t2, $t8, 0x200
    ctx->r10 = ctx->r24 & 0X200;
    // 0x08005110: bne         $t2, $zero, L_0800512C
    if (ctx->r10 != 0) {
        // 0x08005114: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_0800512C;
    }
    // 0x08005114: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x08005118: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800511C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08005120: jalr        $t9
    // 0x08005124: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08005124: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_13:
    // 0x08005128: beq         $v0, $zero, L_080051EC
    if (ctx->r2 == 0) {
        // 0x0800512C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080051EC;
    }
L_0800512C:
    // 0x0800512C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005130: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08005134: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005138: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800513C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005140: jalr        $t9
    // 0x08005144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08005144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x08005148: beq         $v0, $zero, L_080051D4
    if (ctx->r2 == 0) {
        // 0x0800514C: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_080051D4;
    }
    // 0x0800514C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08005150: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x08005154: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005158: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800515C: addiu       $t3, $t3, -0x6D4C
    ctx->r11 = ADD32(ctx->r11, -0X6D4C);
    // 0x08005160: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005164: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08005168: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x0800516C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08005170: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x08005174: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    // 0x08005178: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x0800517C: jalr        $t9
    // 0x08005180: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08005180: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_15:
    // 0x08005184: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08005188: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0800518C: jalr        $t9
    // 0x08005190: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08005190: nop

    after_16:
    // 0x08005194: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08005198: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800519C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080051A0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080051A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080051A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080051AC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080051B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080051B4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x080051B8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080051BC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x080051C0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x080051C4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080051C8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080051CC: jalr        $s0
    // 0x080051D0: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_17;
    // 0x080051D0: nop

    after_17:
L_080051D4:
    // 0x080051D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080051D8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080051DC: jalr        $t9
    // 0x080051E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080051E0: nop

    after_18:
    // 0x080051E4: b           L_080056E4
    // 0x080051E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080056E4;
    // 0x080051E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080051EC:
    // 0x080051EC: lw          $t4, 0xE8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE8);
    // 0x080051F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080051F4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080051F8: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x080051FC: beq         $t5, $zero, L_0800530C
    if (ctx->r13 == 0) {
        // 0x08005200: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_0800530C;
    }
    // 0x08005200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005204: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x08005208: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800520C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08005210: addiu       $t6, $t6, -0x61F8
    ctx->r14 = ADD32(ctx->r14, -0X61F8);
    // 0x08005214: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x08005218: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x0800521C: jalr        $t9
    // 0x08005220: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08005220: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x08005224: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x08005228: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x0800522C: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08005230: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08005234: jalr        $t9
    // 0x08005238: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08005238: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    after_20:
    // 0x0800523C: bne         $v0, $zero, L_08005250
    if (ctx->r2 != 0) {
        // 0x08005240: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08005250;
    }
    // 0x08005240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005244: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x08005248: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x0800524C: beq         $t8, $zero, L_0800530C
    if (ctx->r24 == 0) {
        // 0x08005250: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_0800530C;
    }
L_08005250:
    // 0x08005250: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005254: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08005258: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800525C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08005260: jalr        $t9
    // 0x08005264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08005264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x08005268: beq         $v0, $zero, L_080052F4
    if (ctx->r2 == 0) {
        // 0x0800526C: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_080052F4;
    }
    // 0x0800526C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x08005270: lui         $t2, 0x8022
    ctx->r10 = S32(0X8022 << 16);
    // 0x08005274: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005278: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800527C: addiu       $t2, $t2, -0x6D4C
    ctx->r10 = ADD32(ctx->r10, -0X6D4C);
    // 0x08005280: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005284: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08005288: addiu       $s0, $s0, -0x61F8
    ctx->r16 = ADD32(ctx->r16, -0X61F8);
    // 0x0800528C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08005290: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x08005294: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    // 0x08005298: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x0800529C: jalr        $t9
    // 0x080052A0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080052A0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_22:
    // 0x080052A4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080052A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080052AC: jalr        $t9
    // 0x080052B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080052B0: nop

    after_23:
    // 0x080052B4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080052B8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080052BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080052C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080052C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080052C8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080052CC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080052D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080052D4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x080052D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080052DC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080052E0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080052E4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080052E8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080052EC: jalr        $s0
    // 0x080052F0: nop

    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_24;
    // 0x080052F0: nop

    after_24:
L_080052F4:
    // 0x080052F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080052F8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080052FC: jalr        $t9
    // 0x08005300: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08005300: nop

    after_25:
    // 0x08005304: b           L_080056E4
    // 0x08005308: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080056E4;
    // 0x08005308: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800530C:
    // 0x0800530C: lw          $t3, 0xE8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XE8);
    // 0x08005310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005314: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08005318: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x0800531C: beq         $t4, $zero, L_08005494
    if (ctx->r12 == 0) {
        // 0x08005320: addiu       $a2, $zero, 0x80
        ctx->r6 = ADD32(0, 0X80);
            goto L_08005494;
    }
    // 0x08005320: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x08005324: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x08005328: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800532C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08005330: addiu       $t5, $t5, -0x61F8
    ctx->r13 = ADD32(ctx->r13, -0X61F8);
    // 0x08005334: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x08005338: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x0800533C: jalr        $t9
    // 0x08005340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08005340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_26:
    // 0x08005344: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x08005348: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x0800534C: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08005350: lwc1        $f14, 0xC($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08005354: jalr        $t9
    // 0x08005358: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08005358: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    after_27:
    // 0x0800535C: beq         $v0, $zero, L_08005494
    if (ctx->r2 == 0) {
        // 0x08005360: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_08005494;
    }
    // 0x08005360: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08005364: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08005368: lbu         $v0, 0x13A($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X13A);
    // 0x0800536C: lui         $t1, 0x8001
    ctx->r9 = S32(0X8001 << 16);
    // 0x08005370: addiu       $t1, $t1, -0xBE0
    ctx->r9 = ADD32(ctx->r9, -0XBE0);
    // 0x08005374: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08005378: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x0800537C: beq         $v1, $zero, L_080053A4
    if (ctx->r3 == 0) {
        // 0x08005380: sb          $t7, 0x13A($t0)
        MEM_B(0X13A, ctx->r8) = ctx->r15;
            goto L_080053A4;
    }
    // 0x08005380: sb          $t7, 0x13A($t0)
    MEM_B(0X13A, ctx->r8) = ctx->r15;
    // 0x08005384: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005388: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800538C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08005390: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x08005394: jalr        $t1
    // 0x08005398: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_28;
    // 0x08005398: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_28:
    // 0x0800539C: b           L_080053C0
    // 0x080053A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_080053C0;
    // 0x080053A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_080053A4:
    // 0x080053A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080053A8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080053AC: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x080053B0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x080053B4: jalr        $t1
    // 0x080053B8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_29;
    // 0x080053B8: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_29:
    // 0x080053BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_080053C0:
    // 0x080053C0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X56FC) << 16);
    // 0x080053C4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080053C8: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x080053CC: addiu       $a1, $a1, 0x56FC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X56FC));
    // 0x080053D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080053D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080053D8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080053DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080053E0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080053E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080053E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080053EC: jalr        $v0
    // 0x080053F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_30;
    // 0x080053F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_30:
    // 0x080053F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080053F8: beq         $v0, $zero, L_08005430
    if (ctx->r2 == 0) {
        // 0x080053FC: addiu       $t8, $zero, 0x1D
        ctx->r24 = ADD32(0, 0X1D);
            goto L_08005430;
    }
    // 0x080053FC: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x08005400: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005404: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08005408: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800540C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08005410: jalr        $t9
    // 0x08005414: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08005414: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_31:
    // 0x08005418: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0800541C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08005420: lw          $t2, 0xE8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE8);
    // 0x08005424: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08005428: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x0800542C: sw          $t3, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r11;
L_08005430:
    // 0x08005430: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08005434: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08005438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800543C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08005440: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08005444: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08005448: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0800544C: jalr        $t9
    // 0x08005450: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08005450: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_32:
    // 0x08005454: beq         $v0, $zero, L_0800547C
    if (ctx->r2 == 0) {
        // 0x08005458: addiu       $t4, $zero, 0x1D
        ctx->r12 = ADD32(0, 0X1D);
            goto L_0800547C;
    }
    // 0x08005458: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x0800545C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005460: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08005464: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08005468: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0800546C: jalr        $t9
    // 0x08005470: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08005470: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_33:
    // 0x08005474: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08005478: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800547C:
    // 0x0800547C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005480: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005484: jalr        $t9
    // 0x08005488: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08005488: nop

    after_34:
    // 0x0800548C: b           L_080056E4
    // 0x08005490: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080056E4;
    // 0x08005490: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08005494:
    // 0x08005494: lw          $t5, 0xE8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE8);
    // 0x08005498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800549C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080054A0: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x080054A4: beq         $t6, $zero, L_080056E0
    if (ctx->r14 == 0) {
        // 0x080054A8: addiu       $a2, $zero, 0x80
        ctx->r6 = ADD32(0, 0X80);
            goto L_080056E0;
    }
    // 0x080054A8: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x080054AC: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x080054B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080054B4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080054B8: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x080054BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080054C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080054C4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x080054C8: jalr        $t9
    // 0x080054CC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080054CC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    after_35:
    // 0x080054D0: lw          $t8, 0xE8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE8);
    // 0x080054D4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080054D8: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080054DC: andi        $t2, $t8, 0x200
    ctx->r10 = ctx->r24 & 0X200;
    // 0x080054E0: bne         $t2, $zero, L_080055A4
    if (ctx->r10 != 0) {
        // 0x080054E4: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_080055A4;
    }
    // 0x080054E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080054E8: jalr        $v0
    // 0x080054EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_36;
    // 0x080054EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_36:
    // 0x080054F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x080054F4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x080054F8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080054FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005500: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08005504: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08005508: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x0800550C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08005510: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08005514: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08005518: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x0800551C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x08005520: jalr        $t9
    // 0x08005524: swc1        $f6, 0x18C($t0)
    MEM_W(0X18C, ctx->r8) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08005524: swc1        $f6, 0x18C($t0)
    MEM_W(0X18C, ctx->r8) = ctx->f6.u32l;
    after_37:
    // 0x08005528: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x0800552C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08005530: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08005534: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005538: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x0800553C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08005540: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08005544: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08005548: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x0800554C: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08005550: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08005554: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005558: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0800555C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08005560: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08005564: jalr        $t9
    // 0x08005568: swc1        $f10, 0x190($t0)
    MEM_W(0X190, ctx->r8) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08005568: swc1        $f10, 0x190($t0)
    MEM_W(0X190, ctx->r8) = ctx->f10.u32l;
    after_38:
    // 0x0800556C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x08005570: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08005574: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08005578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800557C: lwc1        $f4, 0x10($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08005580: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08005584: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08005588: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x0800558C: sub.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x08005590: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x08005594: swc1        $f10, 0x194($t0)
    MEM_W(0X194, ctx->r8) = ctx->f10.u32l;
    // 0x08005598: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x0800559C: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x080055A0: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
L_080055A4:
    // 0x080055A4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080055A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080055AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080055B0: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x080055B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080055B8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080055BC: lw          $a1, 0x18C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18C);
    // 0x080055C0: lw          $a2, 0x190($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X190);
    // 0x080055C4: lw          $a3, 0x194($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X194);
    // 0x080055C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080055CC: jalr        $t9
    // 0x080055D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x080055D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_39:
    // 0x080055D4: bne         $v0, $zero, L_080056E0
    if (ctx->r2 != 0) {
        // 0x080055D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080056E0;
    }
    // 0x080055D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080055DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080055E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X56FC) << 16);
    // 0x080055E4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080055E8: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x080055EC: addiu       $a1, $a1, 0x56FC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X56FC));
    // 0x080055F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080055F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080055F8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080055FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08005600: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08005604: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08005608: jalr        $v0
    // 0x0800560C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_40;
    // 0x0800560C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_40:
    // 0x08005610: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08005614: beq         $v0, $zero, L_0800564C
    if (ctx->r2 == 0) {
        // 0x08005618: addiu       $t8, $zero, 0x1D
        ctx->r24 = ADD32(0, 0X1D);
            goto L_0800564C;
    }
    // 0x08005618: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x0800561C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005620: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08005624: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08005628: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0800562C: jalr        $t9
    // 0x08005630: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08005630: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_41:
    // 0x08005634: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08005638: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800563C: lw          $t2, 0xE8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE8);
    // 0x08005640: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08005644: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x08005648: sw          $t3, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r11;
L_0800564C:
    // 0x0800564C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08005650: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08005654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005658: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x0800565C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08005660: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08005664: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08005668: jalr        $t9
    // 0x0800566C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x0800566C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_42:
    // 0x08005670: beq         $v0, $zero, L_080056A4
    if (ctx->r2 == 0) {
        // 0x08005674: addiu       $t4, $zero, 0x1D
        ctx->r12 = ADD32(0, 0X1D);
            goto L_080056A4;
    }
    // 0x08005674: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x08005678: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800567C: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08005680: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08005684: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08005688: jalr        $t9
    // 0x0800568C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800568C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_43:
    // 0x08005690: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08005694: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x08005698: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800569C: ori         $t6, $t5, 0x100
    ctx->r14 = ctx->r13 | 0X100;
    // 0x080056A0: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_080056A4:
    // 0x080056A4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x080056A8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080056AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080056B0: lbu         $v0, 0x8D($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X8D);
    // 0x080056B4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080056B8: beq         $v0, $at, L_080056C8
    if (ctx->r2 == ctx->r1) {
        // 0x080056BC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_080056C8;
    }
    // 0x080056BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x080056C0: bne         $v0, $at, L_080056D0
    if (ctx->r2 != ctx->r1) {
        // 0x080056C4: nop
    
            goto L_080056D0;
    }
    // 0x080056C4: nop

L_080056C8:
    // 0x080056C8: jalr        $t9
    // 0x080056CC: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x080056CC: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    after_44:
L_080056D0:
    // 0x080056D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080056D4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080056D8: jalr        $t9
    // 0x080056DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x080056DC: nop

    after_45:
L_080056E0:
    // 0x080056E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080056E4:
    // 0x080056E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080056E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x080056EC: jr          $ra
    // 0x080056F0: nop

    TRACE_RETURN()
    return;
    // 0x080056F0: nop

    // 0x080056F4: jr          $ra
    // 0x080056F8: nop

    TRACE_RETURN()
    return;
    // 0x080056F8: nop

;}
RECOMP_FUNC void func_0800587C_6B8B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800587C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08005880: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08005884: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08005888: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x0800588C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08005890: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08005894: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08005898: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800589C: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x080058A0: bne         $t6, $zero, L_080058B0
    if (ctx->r14 != 0) {
        // 0x080058A4: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_080058B0;
    }
    // 0x080058A4: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x080058A8: beql        $t7, $zero, L_080058C4
    if (ctx->r15 == 0) {
        // 0x080058AC: lbu         $t0, 0xD1($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0XD1);
            goto L_080058C4;
    }
    goto skip_0;
    // 0x080058AC: lbu         $t0, 0xD1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD1);
    skip_0:
L_080058B0:
    // 0x080058B0: lbu         $t8, 0xD1($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XD1);
    // 0x080058B4: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x080058B8: b           L_080058CC
    // 0x080058BC: sb          $t9, 0xD1($s1)
    MEM_B(0XD1, ctx->r17) = ctx->r25;
        goto L_080058CC;
    // 0x080058BC: sb          $t9, 0xD1($s1)
    MEM_B(0XD1, ctx->r17) = ctx->r25;
    // 0x080058C0: lbu         $t0, 0xD1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD1);
L_080058C4:
    // 0x080058C4: addiu       $t1, $t0, -0x3
    ctx->r9 = ADD32(ctx->r8, -0X3);
    // 0x080058C8: sb          $t1, 0xD1($s1)
    MEM_B(0XD1, ctx->r17) = ctx->r9;
L_080058CC:
    // 0x080058CC: lbu         $s2, 0xD1($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0XD1);
    // 0x080058D0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x080058D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080058D8: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x080058DC: beq         $at, $zero, L_080058EC
    if (ctx->r1 == 0) {
        // 0x080058E0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_080058EC;
    }
    // 0x080058E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080058E4: sb          $t2, 0xD1($s1)
    MEM_B(0XD1, ctx->r17) = ctx->r10;
    // 0x080058E8: andi        $s2, $t2, 0xFF
    ctx->r18 = ctx->r10 & 0XFF;
L_080058EC:
    // 0x080058EC: lw          $v0, 0xE8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XE8);
    // 0x080058F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x080058F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080058F8: andi        $t3, $v0, 0x80
    ctx->r11 = ctx->r2 & 0X80;
    // 0x080058FC: beq         $t3, $zero, L_0800596C
    if (ctx->r11 == 0) {
        // 0x08005900: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_0800596C;
    }
    // 0x08005900: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x08005904: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005908: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x0800590C: jalr        $t9
    // 0x08005910: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005910: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x08005914: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08005918: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3D0) << 16);
    // 0x0800591C: ldc1        $f0, -0x3C30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3D0));
    // 0x08005920: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08005924: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08005928: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x0800592C: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x08005930: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08005934: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08005938: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0800593C: addiu       $t5, $t4, -0x20
    ctx->r13 = ADD32(ctx->r12, -0X20);
    // 0x08005940: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08005944: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08005948: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x0800594C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08005950: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08005954: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x08005958: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x0800595C: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08005960: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08005964: b           L_08005AE8
    // 0x08005968: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08005AE8;
    // 0x08005968: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_0800596C:
    // 0x0800596C: beq         $t7, $zero, L_080059EC
    if (ctx->r15 == 0) {
        // 0x08005970: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_080059EC;
    }
    // 0x08005970: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x08005974: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005978: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x0800597C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08005980: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08005984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005988: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800598C: jalr        $t9
    // 0x08005990: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005990: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08005994: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08005998: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3D8) << 16);
    // 0x0800599C: ldc1        $f0, -0x3C28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3D8));
    // 0x080059A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080059A4: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x080059A8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x080059AC: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x080059B0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080059B4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080059B8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x080059BC: addiu       $t0, $t8, 0x20
    ctx->r8 = ADD32(ctx->r24, 0X20);
    // 0x080059C0: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x080059C4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x080059C8: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x080059CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080059D0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080059D4: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x080059D8: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x080059DC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x080059E0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080059E4: b           L_08005AE8
    // 0x080059E8: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08005AE8;
    // 0x080059E8: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_080059EC:
    // 0x080059EC: beq         $t2, $zero, L_08005A78
    if (ctx->r10 == 0) {
        // 0x080059F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08005A78;
    }
    // 0x080059F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080059F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080059F8: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x080059FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08005A00: bgez        $s2, L_08005A10
    if (SIGNED(ctx->r18) >= 0) {
        // 0x08005A04: sra         $a1, $s2, 1
        ctx->r5 = S32(SIGNED(ctx->r18) >> 1);
            goto L_08005A10;
    }
    // 0x08005A04: sra         $a1, $s2, 1
    ctx->r5 = S32(SIGNED(ctx->r18) >> 1);
    // 0x08005A08: addiu       $at, $s2, 0x1
    ctx->r1 = ADD32(ctx->r18, 0X1);
    // 0x08005A0C: sra         $a1, $at, 1
    ctx->r5 = S32(SIGNED(ctx->r1) >> 1);
L_08005A10:
    // 0x08005A10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005A14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08005A18: jalr        $t9
    // 0x08005A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08005A20: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08005A24: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3E0) << 16);
    // 0x08005A28: ldc1        $f0, -0x3C20($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3E0));
    // 0x08005A2C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08005A30: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08005A34: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08005A38: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x08005A3C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08005A40: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08005A44: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08005A48: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x08005A4C: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08005A50: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08005A54: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08005A58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08005A5C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08005A60: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x08005A64: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08005A68: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08005A6C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08005A70: b           L_08005AE8
    // 0x08005A74: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08005AE8;
    // 0x08005A74: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08005A78:
    // 0x08005A78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005A7C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08005A80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08005A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005A88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08005A8C: jalr        $t9
    // 0x08005A90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005A90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08005A94: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08005A98: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3E8) << 16);
    // 0x08005A9C: ldc1        $f0, -0x3C18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3E8));
    // 0x08005AA0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08005AA4: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08005AA8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08005AAC: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x08005AB0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08005AB4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08005AB8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08005ABC: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x08005AC0: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08005AC4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08005AC8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08005ACC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08005AD0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08005AD4: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x08005AD8: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08005ADC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08005AE0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08005AE4: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08005AE8:
    // 0x08005AE8: lbu         $t0, 0xD1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD1);
    // 0x08005AEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08005AF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005AF4: bne         $t0, $at, L_08005B04
    if (ctx->r8 != ctx->r1) {
        // 0x08005AF8: addiu       $t9, $t9, 0x4ED4
        ctx->r25 = ADD32(ctx->r25, 0X4ED4);
            goto L_08005B04;
    }
    // 0x08005AF8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005AFC: jalr        $t9
    // 0x08005B00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005B00: nop

    after_4:
L_08005B04:
    // 0x08005B04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08005B08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08005B0C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08005B10: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08005B14: jr          $ra
    // 0x08005B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08005B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_0800476C_6B7A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800476C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004774: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004778: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x0800477C: lbu         $a1, 0xEC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XEC);
    // 0x08004780: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004784: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08004788: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800478C: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x08004790: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08004794: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08004798: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x0800479C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080047A0: jalr        $t9
    // 0x080047A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080047A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x080047A8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080047AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x080047B0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080047B4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080047B8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x080047BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080047C0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x080047C4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080047C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080047CC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080047D0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080047D4: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x080047D8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080047DC: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x080047E0: lw          $t7, 0xE8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE8);
    // 0x080047E4: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x080047E8: beql        $t8, $zero, L_080047FC
    if (ctx->r24 == 0) {
        // 0x080047EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080047FC;
    }
    goto skip_0;
    // 0x080047EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080047F0: jalr        $t9
    // 0x080047F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080047F4: nop

    after_1:
    // 0x080047F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080047FC:
    // 0x080047FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004800: jr          $ra
    // 0x08004804: nop

    TRACE_RETURN()
    return;
    // 0x08004804: nop

;}
RECOMP_FUNC void func_08001DB0_6B5050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001DB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001DBC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001DC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001DC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001DC8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001DCC: bne         $v0, $zero, L_08001DE0
    if (ctx->r2 != 0) {
        // 0x08001DD0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001DE0;
    }
    // 0x08001DD0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001DD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1DF0) << 16);
    // 0x08001DD8: jalr        $t9
    // 0x08001DDC: addiu       $a0, $a0, 0x1DF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1DF0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001DDC: addiu       $a0, $a0, 0x1DF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1DF0));
    after_0:
L_08001DE0:
    // 0x08001DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001DE8: jr          $ra
    // 0x08001DEC: nop

    TRACE_RETURN()
    return;
    // 0x08001DEC: nop

;}
RECOMP_FUNC void func_08002460_6B5700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002468: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800246C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002470: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002474: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002478: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800247C: bne         $v0, $zero, L_08002490
    if (ctx->r2 != 0) {
        // 0x08002480: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002490;
    }
    // 0x08002480: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002484: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2D6C) << 16);
    // 0x08002488: jalr        $t9
    // 0x0800248C: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800248C: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    after_0:
L_08002490:
    // 0x08002490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002498: jr          $ra
    // 0x0800249C: nop

    TRACE_RETURN()
    return;
    // 0x0800249C: nop

;}
RECOMP_FUNC void func_080083A0_6BB640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080083A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080083A4: jr          $ra
    // 0x080083A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080083A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002D6C_6B600C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002D78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002D7C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08002D80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002D84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2DA8) << 16);
    // 0x08002D90: jalr        $t9
    // 0x08002D94: addiu       $a0, $a0, 0x2DA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2DA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D94: addiu       $a0, $a0, 0x2DA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2DA8));
    after_0:
    // 0x08002D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002DA0: jr          $ra
    // 0x08002DA4: nop

    TRACE_RETURN()
    return;
    // 0x08002DA4: nop

;}
RECOMP_FUNC void func_080017F4_6B4A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080017F8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080017FC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08001800: lui         $s1, 0x8002
    ctx->r17 = S32(0X8002 << 16);
    // 0x08001804: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001808: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800180C: addiu       $s1, $s1, 0x4088
    ctx->r17 = ADD32(ctx->r17, 0X4088);
    // 0x08001810: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001814: jalr        $s1
    // 0x08001818: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x08001818: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    after_0:
    // 0x0800181C: jalr        $s1
    // 0x08001820: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_1;
    // 0x08001820: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    after_1:
    // 0x08001824: jalr        $s1
    // 0x08001828: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x08001828: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    after_2:
    // 0x0800182C: jalr        $s1
    // 0x08001830: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x08001830: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    after_3:
    // 0x08001834: jalr        $s1
    // 0x08001838: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x08001838: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    after_4:
    // 0x0800183C: jalr        $s1
    // 0x08001840: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x08001840: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    after_5:
    // 0x08001844: jalr        $s1
    // 0x08001848: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x08001848: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    after_6:
    // 0x0800184C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001850: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001854: jalr        $t9
    // 0x08001858: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001858: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    after_7:
    // 0x0800185C: bne         $v0, $zero, L_08001A3C
    if (ctx->r2 != 0) {
        // 0x08001860: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_08001A3C;
    }
    // 0x08001860: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001864: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08001868: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x0800186C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x08001870: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001874: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001878: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x0800187C: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x08001880: sb          $t9, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r25;
    // 0x08001884: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(20, 0X2E00) << 16);
    // 0x08001888: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x0800188C: addiu       $t1, $zero, 0xB4
    ctx->r9 = ADD32(0, 0XB4);
    // 0x08001890: ori         $t4, $t4, 0x6C1
    ctx->r12 = ctx->r12 | 0X6C1;
    // 0x08001894: addiu       $t5, $zero, 0xFA
    ctx->r13 = ADD32(0, 0XFA);
    // 0x08001898: addiu       $t6, $t6, 0x2E00
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(20, 0X2E00));
    // 0x0800189C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018A0: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x080018A4: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080018A8: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x080018AC: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    // 0x080018B0: sb          $t8, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r24;
    // 0x080018B4: sb          $t1, 0x8C($s0)
    MEM_B(0X8C, ctx->r16) = ctx->r9;
    // 0x080018B8: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x080018BC: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x080018C0: sb          $v0, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r2;
    // 0x080018C4: sb          $v0, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r2;
    // 0x080018C8: sb          $t5, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = ctx->r13;
    // 0x080018CC: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
    // 0x080018D0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080018D4: sw          $t0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r8;
    // 0x080018D8: sw          $t0, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r8;
    // 0x080018DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080018E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080018E8: jalr        $t9
    // 0x080018EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080018EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x080018F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018F4: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x080018F8: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080018FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001908: jalr        $t9
    // 0x0800190C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800190C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x08001910: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x08001914: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001918: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800191C: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08001920: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001924: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001928: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800192C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001938: jalr        $t9
    // 0x0800193C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800193C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    after_10:
    // 0x08001940: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001944: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800194C: jalr        $t9
    // 0x08001950: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001950: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_11:
    // 0x08001954: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001958: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x0800195C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001960: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001964: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08001968: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X45F8) << 16);
    // 0x0800196C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001970: addiu       $a1, $a1, 0x45F8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X45F8));
    // 0x08001974: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800197C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001980: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001984: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08001988: jalr        $v0
    // 0x0800198C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x0800198C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x08001990: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001994: beq         $v0, $zero, L_080019C0
    if (ctx->r2 == 0) {
        // 0x08001998: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_080019C0;
    }
    // 0x08001998: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x0800199C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019A0: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x080019A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080019A8: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080019AC: jalr        $t9
    // 0x080019B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080019B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_13:
    // 0x080019B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080019B8: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x080019BC: sw          $s0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r16;
L_080019C0:
    // 0x080019C0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080019C4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X3DB0) << 16);
    // 0x080019C8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080019CC: addiu       $a1, $a1, 0x3DB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X3DB0));
    // 0x080019D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080019D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080019D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080019DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x080019E0: jalr        $t9
    // 0x080019E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080019E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_14:
    // 0x080019E8: beq         $v0, $zero, L_08001A10
    if (ctx->r2 == 0) {
        // 0x080019EC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001A10;
    }
    // 0x080019EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x080019F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019F4: addiu       $t2, $zero, 0x1D
    ctx->r10 = ADD32(0, 0X1D);
    // 0x080019F8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080019FC: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001A00: jalr        $t9
    // 0x08001A04: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001A04: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_15:
    // 0x08001A08: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08001A0C: sw          $s0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r16;
L_08001A10:
    // 0x08001A10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A14: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001A18: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X388) << 16);
    // 0x08001A1C: addiu       $a1, $a1, 0x388
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X388));
    // 0x08001A20: jalr        $t9
    // 0x08001A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x08001A28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1A50) << 16);
    // 0x08001A34: jalr        $t9
    // 0x08001A38: addiu       $a0, $a0, 0x1A50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1A50));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001A38: addiu       $a0, $a0, 0x1A50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1A50));
    after_17:
L_08001A3C:
    // 0x08001A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001A40: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08001A44: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08001A48: jr          $ra
    // 0x08001A4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08001A4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0800751C_6BA7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800751C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08007520: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08007524: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007528: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800752C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007530: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08007534: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08007538: jalr        $t9
    // 0x0800753C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800753C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x08007540: beq         $v0, $zero, L_08007560
    if (ctx->r2 == 0) {
        // 0x08007544: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
            goto L_08007560;
    }
    // 0x08007544: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x08007548: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800754C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007550: jalr        $t9
    // 0x08007554: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007554: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
    // 0x08007558: b           L_080075D8
    // 0x0800755C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080075D8;
    // 0x0800755C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08007560:
    // 0x08007560: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08007564: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x08007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800756C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08007570: bne         $v0, $zero, L_080075D4
    if (ctx->r2 != 0) {
        // 0x08007574: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_080075D4;
    }
    // 0x08007574: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08007578: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800757C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08007580: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X7850) << 16);
    // 0x08007584: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08007588: addiu       $a1, $a1, 0x7850
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X7850));
    // 0x0800758C: jalr        $t9
    // 0x08007590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08007594: beq         $v0, $zero, L_080075C0
    if (ctx->r2 == 0) {
        // 0x08007598: addiu       $t8, $zero, 0x1D
        ctx->r24 = ADD32(0, 0X1D);
            goto L_080075C0;
    }
    // 0x08007598: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x0800759C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080075A0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080075A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080075A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080075AC: jalr        $t9
    // 0x080075B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080075B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_3:
    // 0x080075B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080075B8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080075BC: sw          $s0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r16;
L_080075C0:
    // 0x080075C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080075C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080075C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X75E8) << 16);
    // 0x080075CC: jalr        $t9
    // 0x080075D0: addiu       $a0, $a0, 0x75E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X75E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080075D0: addiu       $a0, $a0, 0x75E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X75E8));
    after_4:
L_080075D4:
    // 0x080075D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080075D8:
    // 0x080075D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080075DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080075E0: jr          $ra
    // 0x080075E4: nop

    TRACE_RETURN()
    return;
    // 0x080075E4: nop

;}
RECOMP_FUNC void func_08003DB0_6B7050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003DB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003DB8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08003DBC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08003DC0: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x08003DC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003DC8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08003DCC: addiu       $t6, $zero, 0xCB
    ctx->r14 = ADD32(0, 0XCB);
    // 0x08003DD0: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08003DD4: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08003DD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003DDC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003DE0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003DE4: jalr        $t9
    // 0x08003DE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003DE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08003DEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DF0: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003DF8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x08003DFC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08003E00: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x08003E04: jalr        $t9
    // 0x08003E08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08003E0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003E10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003E14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08003E18: lui         $at, 0xC33A
    ctx->r1 = S32(0XC33A << 16);
    // 0x08003E1C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08003E20: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08003E24: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08003E28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003E2C: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08003E30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E34: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x08003E38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3E6C) << 16);
    // 0x08003E40: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x08003E44: swc1        $f2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f2.u32l;
    // 0x08003E48: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x08003E4C: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08003E50: jalr        $t9
    // 0x08003E54: addiu       $a0, $a0, 0x3E6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3E6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003E54: addiu       $a0, $a0, 0x3E6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3E6C));
    after_2:
    // 0x08003E58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003E5C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003E60: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003E64: jr          $ra
    // 0x08003E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08003E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08009C04_6BCEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08009C04: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08009C08: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x08009C0C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08009C10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x08009C14: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC430) << 16);
    // 0x08009C18: lwc1        $f4, -0x3BD0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC430));
    // 0x08009C1C: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08009C20: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X5F4) << 16);
    // 0x08009C24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08009C28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x08009C2C: addiu       $a1, $a1, 0x5F4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X5F4));
    // 0x08009C30: addiu       $s2, $s2, -0x2218
    ctx->r18 = ADD32(ctx->r18, -0X2218);
    // 0x08009C34: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009C38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08009C3C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08009C40: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x08009C44: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009C4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009C50: jalr        $s2
    // 0x08009C54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x08009C54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08009C58: beq         $v0, $zero, L_08009C88
    if (ctx->r2 == 0) {
        // 0x08009C5C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009C88;
    }
    // 0x08009C5C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009C60: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009C64: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x08009C68: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009C6C: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08009C70: jalr        $t9
    // 0x08009C74: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08009C74: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_1:
    // 0x08009C78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08009C7C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009C80: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009C84: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
L_08009C88:
    // 0x08009C88: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC434) << 16);
    // 0x08009C8C: lwc1        $f6, -0x3BCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC434));
    // 0x08009C90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009C94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009C98: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009C9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009CA0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009CA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009CA8: jalr        $s2
    // 0x08009CAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x08009CAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x08009CB0: beq         $v0, $zero, L_08009CE0
    if (ctx->r2 == 0) {
        // 0x08009CB4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009CE0;
    }
    // 0x08009CB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009CB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009CBC: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x08009CC0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009CC4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08009CC8: jalr        $t9
    // 0x08009CCC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08009CCC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_3:
    // 0x08009CD0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08009CD4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009CD8: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009CDC: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
L_08009CE0:
    // 0x08009CE0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC438) << 16);
    // 0x08009CE4: lwc1        $f8, -0x3BC8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC438));
    // 0x08009CE8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009CEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009CF0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009CF8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009CFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009D00: jalr        $s2
    // 0x08009D04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_4;
    // 0x08009D04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x08009D08: beq         $v0, $zero, L_08009D38
    if (ctx->r2 == 0) {
        // 0x08009D0C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009D38;
    }
    // 0x08009D0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009D10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009D14: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x08009D18: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009D1C: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08009D20: jalr        $t9
    // 0x08009D24: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08009D24: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_5:
    // 0x08009D28: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x08009D2C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009D30: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009D34: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_08009D38:
    // 0x08009D38: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC43C) << 16);
    // 0x08009D3C: lwc1        $f10, -0x3BC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC43C));
    // 0x08009D40: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009D48: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009D4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009D50: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009D54: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009D58: jalr        $s2
    // 0x08009D5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_6;
    // 0x08009D5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x08009D60: beq         $v0, $zero, L_08009D90
    if (ctx->r2 == 0) {
        // 0x08009D64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009D90;
    }
    // 0x08009D64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009D68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009D6C: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x08009D70: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009D74: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08009D78: jalr        $t9
    // 0x08009D7C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08009D7C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_7:
    // 0x08009D80: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x08009D84: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009D88: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009D8C: sw          $t4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r12;
L_08009D90:
    // 0x08009D90: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC440) << 16);
    // 0x08009D94: lwc1        $f16, -0x3BC0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC440));
    // 0x08009D98: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009D9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009DA0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009DA8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009DAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009DB0: jalr        $s2
    // 0x08009DB4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_8;
    // 0x08009DB4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x08009DB8: beq         $v0, $zero, L_08009DE8
    if (ctx->r2 == 0) {
        // 0x08009DBC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009DE8;
    }
    // 0x08009DBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009DC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009DC4: addiu       $t5, $zero, 0x1D
    ctx->r13 = ADD32(0, 0X1D);
    // 0x08009DC8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009DCC: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08009DD0: jalr        $t9
    // 0x08009DD4: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08009DD4: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_9:
    // 0x08009DD8: addiu       $t6, $zero, 0x4001
    ctx->r14 = ADD32(0, 0X4001);
    // 0x08009DDC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009DE0: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009DE4: sw          $t6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r14;
L_08009DE8:
    // 0x08009DE8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC444) << 16);
    // 0x08009DEC: lwc1        $f18, -0x3BBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC444));
    // 0x08009DF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009DF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009DF8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009E00: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009E04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009E08: jalr        $s2
    // 0x08009E0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_10;
    // 0x08009E0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x08009E10: beq         $v0, $zero, L_08009E40
    if (ctx->r2 == 0) {
        // 0x08009E14: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009E40;
    }
    // 0x08009E14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009E18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009E1C: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x08009E20: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009E24: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08009E28: jalr        $t9
    // 0x08009E2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08009E2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_11:
    // 0x08009E30: addiu       $t8, $zero, 0x4002
    ctx->r24 = ADD32(0, 0X4002);
    // 0x08009E34: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009E38: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009E3C: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
L_08009E40:
    // 0x08009E40: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC448) << 16);
    // 0x08009E44: lwc1        $f4, -0x3BB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC448));
    // 0x08009E48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009E4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009E50: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009E54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009E58: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009E5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009E60: jalr        $s2
    // 0x08009E64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_12;
    // 0x08009E64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x08009E68: beq         $v0, $zero, L_08009E98
    if (ctx->r2 == 0) {
        // 0x08009E6C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009E98;
    }
    // 0x08009E6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009E70: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009E74: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x08009E78: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009E7C: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08009E80: jalr        $t9
    // 0x08009E84: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08009E84: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_13:
    // 0x08009E88: addiu       $t1, $zero, 0x4004
    ctx->r9 = ADD32(0, 0X4004);
    // 0x08009E8C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009E90: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009E94: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
L_08009E98:
    // 0x08009E98: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC44C) << 16);
    // 0x08009E9C: lwc1        $f6, -0x3BB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC44C));
    // 0x08009EA0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009EA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009EA8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009EB0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009EB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08009EB8: jalr        $s2
    // 0x08009EBC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_14;
    // 0x08009EBC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x08009EC0: beq         $v0, $zero, L_08009EF0
    if (ctx->r2 == 0) {
        // 0x08009EC4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009EF0;
    }
    // 0x08009EC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009EC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009ECC: addiu       $t2, $zero, 0x1D
    ctx->r10 = ADD32(0, 0X1D);
    // 0x08009ED0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009ED4: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08009ED8: jalr        $t9
    // 0x08009EDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08009EDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_15:
    // 0x08009EE0: addiu       $t3, $zero, 0x4008
    ctx->r11 = ADD32(0, 0X4008);
    // 0x08009EE4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009EE8: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009EEC: sw          $t3, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r11;
L_08009EF0:
    // 0x08009EF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009EF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009EF8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009F00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08009F04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009F08: jalr        $s2
    // 0x08009F0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_16;
    // 0x08009F0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_16:
    // 0x08009F10: beq         $v0, $zero, L_08009F40
    if (ctx->r2 == 0) {
        // 0x08009F14: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009F40;
    }
    // 0x08009F14: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009F18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009F1C: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x08009F20: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009F24: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08009F28: jalr        $t9
    // 0x08009F2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08009F2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_17:
    // 0x08009F30: addiu       $t5, $zero, 0x101
    ctx->r13 = ADD32(0, 0X101);
    // 0x08009F34: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009F38: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009F3C: sw          $t5, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r13;
L_08009F40:
    // 0x08009F40: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009F48: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009F50: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08009F54: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009F58: jalr        $s2
    // 0x08009F5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_18;
    // 0x08009F5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_18:
    // 0x08009F60: beq         $v0, $zero, L_08009F90
    if (ctx->r2 == 0) {
        // 0x08009F64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009F90;
    }
    // 0x08009F64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009F68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009F6C: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x08009F70: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009F74: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08009F78: jalr        $t9
    // 0x08009F7C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08009F7C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_19:
    // 0x08009F80: addiu       $t7, $zero, 0x102
    ctx->r15 = ADD32(0, 0X102);
    // 0x08009F84: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009F88: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009F8C: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
L_08009F90:
    // 0x08009F90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009F94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009F98: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009FA0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08009FA4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009FA8: jalr        $s2
    // 0x08009FAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_20;
    // 0x08009FAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_20:
    // 0x08009FB0: beq         $v0, $zero, L_08009FE0
    if (ctx->r2 == 0) {
        // 0x08009FB4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08009FE0;
    }
    // 0x08009FB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08009FB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009FBC: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x08009FC0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08009FC4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08009FC8: jalr        $t9
    // 0x08009FCC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08009FCC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_21:
    // 0x08009FD0: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    // 0x08009FD4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08009FD8: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x08009FDC: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
L_08009FE0:
    // 0x08009FE0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08009FE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08009FE8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08009FEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08009FF0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08009FF4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08009FF8: jalr        $s2
    // 0x08009FFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_22;
    // 0x08009FFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_22:
    // 0x0800A000: beq         $v0, $zero, L_0800A030
    if (ctx->r2 == 0) {
        // 0x0800A004: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800A030;
    }
    // 0x0800A004: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800A008: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800A00C: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x0800A010: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800A014: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x0800A018: jalr        $t9
    // 0x0800A01C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800A01C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_23:
    // 0x0800A020: addiu       $t2, $zero, 0x108
    ctx->r10 = ADD32(0, 0X108);
    // 0x0800A024: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800A028: sw          $s1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r17;
    // 0x0800A02C: sw          $t2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r10;
L_0800A030:
    // 0x0800A030: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0800A034: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x0800A038: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x0800A03C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0800A040: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0800A044: jr          $ra
    // 0x0800A048: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x0800A048: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_0800B36C_6BE60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800B36C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800B370: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800B374: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x0800B378: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800B37C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x0800B380: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800B384: jr          $ra
    // 0x0800B388: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x0800B388: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_0800B38C_6BE62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800B38C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800B390: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800B394: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x0800B398: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x0800B39C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x0800B3A0: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x0800B3A4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x0800B3A8: jr          $ra
    // 0x0800B3AC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x0800B3AC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080028A4_6B5B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080028A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080028AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080028B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080028B4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080028B8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080028BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080028C0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080028C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080028C8: jalr        $t9
    // 0x080028CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080028D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028D4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080028D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080028DC: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x080028E0: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x080028E4: jalr        $t9
    // 0x080028E8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080028E8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_1:
    // 0x080028EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080028F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080028F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080028F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2918) << 16);
    // 0x080028FC: sb          $zero, -0x324C($at)
    MEM_B(-0X324C, ctx->r1) = 0;
    // 0x08002900: jalr        $t9
    // 0x08002904: addiu       $a0, $a0, 0x2918
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2918));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002904: addiu       $a0, $a0, 0x2918
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2918));
    after_2:
    // 0x08002908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800290C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002910: jr          $ra
    // 0x08002914: nop

    TRACE_RETURN()
    return;
    // 0x08002914: nop

;}
RECOMP_FUNC void func_08006CC8_6B9F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006CCC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC400) << 16);
    // 0x08006CD0: lwc1        $f0, -0x3C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC400));
    // 0x08006CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006CD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006CDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006CE0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006CE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X6D0C) << 16);
    // 0x08006CE8: addiu       $a0, $a0, 0x6D0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6D0C));
    // 0x08006CEC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08006CF0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08006CF4: jalr        $t9
    // 0x08006CF8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006CF8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x08006CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006D04: jr          $ra
    // 0x08006D08: nop

    TRACE_RETURN()
    return;
    // 0x08006D08: nop

;}
RECOMP_FUNC void func_080078B8_6BAB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080078B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080078BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080078C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080078C4: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080078C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080078CC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080078D0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080078D4: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080078D8: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    // 0x080078DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x080078E0: jalr        $t9
    // 0x080078E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080078E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x080078E8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x080078EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080078F0: lui         $at, 0x42BC
    ctx->r1 = S32(0X42BC << 16);
    // 0x080078F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080078F8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080078FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08007900: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08007904: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08007908: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800790C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08007910: swc1        $f10, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f10.u32l;
    // 0x08007914: jalr        $t9
    // 0x08007918: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007918: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    after_1:
    // 0x0800791C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x08007920: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08007924: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08007928: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x0800792C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08007930: swc1        $f18, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f18.u32l;
    // 0x08007934: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08007938: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x0800793C: bne         $v0, $zero, L_08007974
    if (ctx->r2 != 0) {
        // 0x08007940: sh          $t8, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r24;
            goto L_08007974;
    }
    // 0x08007940: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x08007944: lw          $a0, 0xD4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XD4);
    // 0x08007948: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800794C: addiu       $t9, $t9, -0x458
    ctx->r25 = ADD32(ctx->r25, -0X458);
    // 0x08007950: beq         $a0, $zero, L_08007960
    if (ctx->r4 == 0) {
        // 0x08007954: nop
    
            goto L_08007960;
    }
    // 0x08007954: nop

    // 0x08007958: jalr        $t9
    // 0x0800795C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800795C: nop

    after_2:
L_08007960:
    // 0x08007960: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007964: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007968: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7984) << 16);
    // 0x0800796C: jalr        $t9
    // 0x08007970: addiu       $a0, $a0, 0x7984
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7984));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007970: addiu       $a0, $a0, 0x7984
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7984));
    after_3:
L_08007974:
    // 0x08007974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800797C: jr          $ra
    // 0x08007980: nop

    TRACE_RETURN()
    return;
    // 0x08007980: nop

;}
RECOMP_FUNC void func_08005D8C_6B902C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005D8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08005D90: jr          $ra
    // 0x08005D94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08005D94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080083AC_6BB64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080083AC: jr          $ra
    // 0x080083B0: nop

    TRACE_RETURN()
    return;
    // 0x080083B0: nop

    // 0x080083B4: jr          $ra
    // 0x080083B8: nop

    TRACE_RETURN()
    return;
    // 0x080083B8: nop

;}
RECOMP_FUNC void func_08008A04_6BBCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08008A0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008A14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008A18: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8A38) << 16);
    // 0x08008A1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08008A20: jalr        $t9
    // 0x08008A24: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008A24: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    after_0:
    // 0x08008A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08008A30: jr          $ra
    // 0x08008A34: nop

    TRACE_RETURN()
    return;
    // 0x08008A34: nop

;}
RECOMP_FUNC void func_0800666C_6B990C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800666C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006670: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800667C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006680: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006684: jalr        $t9
    // 0x08006688: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006688: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_0:
    // 0x0800668C: beq         $v0, $zero, L_080066A0
    if (ctx->r2 == 0) {
        // 0x08006690: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080066A0;
    }
    // 0x08006690: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08006694: lw          $t6, 0x68($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X68);
    // 0x08006698: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x0800669C: sw          $t7, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r15;
L_080066A0:
    // 0x080066A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080066A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080066A8: jr          $ra
    // 0x080066AC: nop

    TRACE_RETURN()
    return;
    // 0x080066AC: nop

;}
RECOMP_FUNC void func_080024F0_6B5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080024F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080024FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002500: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002504: jalr        $t9
    // 0x08002508: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002508: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x0800250C: bne         $v0, $zero, L_08002524
    if (ctx->r2 != 0) {
        // 0x08002510: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X2534) << 16);
            goto L_08002524;
    }
    // 0x08002510: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2534) << 16);
    // 0x08002514: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002518: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800251C: jalr        $t9
    // 0x08002520: addiu       $a0, $a0, 0x2534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2534));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002520: addiu       $a0, $a0, 0x2534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2534));
    after_1:
L_08002524:
    // 0x08002524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800252C: jr          $ra
    // 0x08002530: nop

    TRACE_RETURN()
    return;
    // 0x08002530: nop

;}
RECOMP_FUNC void func_08001DF0_6B5090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001DF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001DFC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001E00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001E04: jalr        $t9
    // 0x08001E08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001E0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E10: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001E14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001E18: jalr        $t9
    // 0x08001E1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08001E20: bne         $v0, $zero, L_08001E9C
    if (ctx->r2 != 0) {
        // 0x08001E24: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001E9C;
    }
    // 0x08001E24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001E28: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001E2C: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08001E30: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001E34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001E38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E3C: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08001E40: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08001E44: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x08001E48: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x08001E4C: jalr        $t9
    // 0x08001E50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001E50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x08001E54: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08001E58: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08001E5C: addiu       $a1, $a1, -0x33D0
    ctx->r5 = ADD32(ctx->r5, -0X33D0);
    // 0x08001E60: lwc1        $f6, 0x7C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X7C);
    // 0x08001E64: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001E68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E6C: swc1        $f6, 0x188($a1)
    MEM_W(0X188, ctx->r5) = ctx->f6.u32l;
    // 0x08001E70: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08001E74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1EAC) << 16);
    // 0x08001E7C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001E80: addiu       $a0, $a0, 0x1EAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1EAC));
    // 0x08001E84: swc1        $f8, 0x18C($a1)
    MEM_W(0X18C, ctx->r5) = ctx->f8.u32l;
    // 0x08001E88: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001E8C: swc1        $f10, 0x190($a1)
    MEM_W(0X190, ctx->r5) = ctx->f10.u32l;
    // 0x08001E90: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001E94: jalr        $t9
    // 0x08001E98: swc1        $f16, 0x194($a1)
    MEM_W(0X194, ctx->r5) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E98: swc1        $f16, 0x194($a1)
    MEM_W(0X194, ctx->r5) = ctx->f16.u32l;
    after_3:
L_08001E9C:
    // 0x08001E9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001EA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001EA4: jr          $ra
    // 0x08001EA8: nop

    TRACE_RETURN()
    return;
    // 0x08001EA8: nop

;}
RECOMP_FUNC void func_08005EDC_6B917C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005EDC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08005EE0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08005EE4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08005EE8: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08005EEC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08005EF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08005EF4: addiu       $s0, $s0, 0x40DC
    ctx->r16 = ADD32(ctx->r16, 0X40DC);
    // 0x08005EF8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08005EFC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08005F00: jalr        $s0
    // 0x08005F04: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08005F04: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_0:
    // 0x08005F08: beq         $v0, $zero, L_08005F28
    if (ctx->r2 == 0) {
        // 0x08005F0C: nop
    
            goto L_08005F28;
    }
    // 0x08005F0C: nop

    // 0x08005F10: jalr        $s0
    // 0x08005F14: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08005F14: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_1:
    // 0x08005F18: lw          $t6, 0x68($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X68);
    // 0x08005F1C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08005F20: b           L_080064D8
    // 0x08005F24: sw          $t7, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r15;
        goto L_080064D8;
    // 0x08005F24: sw          $t7, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r15;
L_08005F28:
    // 0x08005F28: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08005F2C: addiu       $s0, $s0, 0x4088
    ctx->r16 = ADD32(ctx->r16, 0X4088);
    // 0x08005F30: jalr        $s0
    // 0x08005F34: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08005F34: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_2:
    // 0x08005F38: jalr        $s0
    // 0x08005F3C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08005F3C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_3:
    // 0x08005F40: jalr        $s0
    // 0x08005F44: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08005F44: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    after_4:
    // 0x08005F48: jalr        $s0
    // 0x08005F4C: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08005F4C: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    after_5:
    // 0x08005F50: jalr        $s0
    // 0x08005F54: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08005F54: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_6:
    // 0x08005F58: jalr        $s0
    // 0x08005F5C: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08005F5C: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    after_7:
    // 0x08005F60: jalr        $s0
    // 0x08005F64: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x08005F64: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    after_8:
    // 0x08005F68: lw          $t8, 0xE8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XE8);
    // 0x08005F6C: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x08005F70: lw          $t2, 0x64($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64);
    // 0x08005F74: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x08005F78: sw          $t9, 0xE8($s1)
    MEM_W(0XE8, ctx->r17) = ctx->r25;
    // 0x08005F7C: lui         $t1, 0x20
    ctx->r9 = S32(0X20 << 16);
    // 0x08005F80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005F84: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08005F88: ori         $t1, $t1, 0x6E1
    ctx->r9 = ctx->r9 | 0X6E1;
    // 0x08005F8C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08005F90: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x08005F94: sb          $t0, 0x8D($s1)
    MEM_B(0X8D, ctx->r17) = ctx->r8;
    // 0x08005F98: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
    // 0x08005F9C: sw          $t3, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r11;
    // 0x08005FA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08005FA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08005FA8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x08005FAC: jalr        $t9
    // 0x08005FB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08005FB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x08005FB4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3F0) << 16);
    // 0x08005FB8: lwc1        $f20, -0x3C10($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3F0));
    // 0x08005FBC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08005FC0: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08005FC4: sh          $t4, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r12;
    // 0x08005FC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005FCC: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08005FD0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0XC) << 16);
    // 0x08005FD4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0XC));
    // 0x08005FD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08005FDC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x08005FE0: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x08005FE4: jalr        $t9
    // 0x08005FE8: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08005FE8: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    after_10:
    // 0x08005FEC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08005FF0: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08005FF4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X666C) << 16);
    // 0x08005FF8: addiu       $a1, $a1, 0x666C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X666C));
    // 0x08005FFC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08006000: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006004: jalr        $v0
    // 0x08006008: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x08006008: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x0800600C: beq         $v0, $zero, L_0800604C
    if (ctx->r2 == 0) {
        // 0x08006010: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800604C;
    }
    // 0x08006010: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006014: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08006018: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x0800601C: sw          $t5, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r13;
    // 0x08006020: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006024: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x08006028: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800602C: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08006030: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08006034: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08006038: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800603C: jalr        $t9
    // 0x08006040: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08006040: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_12:
    // 0x08006044: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006048: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_0800604C:
    // 0x0800604C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08006050: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X66B0) << 16);
    // 0x08006054: addiu       $a1, $a1, 0x66B0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X66B0));
    // 0x08006058: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800605C: jalr        $t9
    // 0x08006060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08006060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x08006064: beq         $v0, $zero, L_08006104
    if (ctx->r2 == 0) {
        // 0x08006068: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006104;
    }
    // 0x08006068: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800606C: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x08006070: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006074: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006078: addiu       $t7, $t7, 0x41C4
    ctx->r15 = ADD32(ctx->r15, 0X41C4);
    // 0x0800607C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08006080: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006084: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x08006088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800608C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006090: jalr        $t9
    // 0x08006094: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08006094: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x08006098: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0800609C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080060A0: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080060A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080060A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080060AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080060B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080060B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080060B8: jalr        $t9
    // 0x080060BC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080060BC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_15:
    // 0x080060C0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080060C4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080060C8: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x080060CC: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x080060D0: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x080060D4: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x080060D8: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x080060DC: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x080060E0: addiu       $t1, $zero, 0x1D
    ctx->r9 = ADD32(0, 0X1D);
    // 0x080060E4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080060E8: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x080060EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080060F0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x080060F4: jalr        $t9
    // 0x080060F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080060F8: nop

    after_16:
    // 0x080060FC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006100: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006104:
    // 0x08006104: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08006108: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X68B8) << 16);
    // 0x0800610C: addiu       $a1, $a1, 0x68B8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X68B8));
    // 0x08006110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006114: jalr        $t9
    // 0x08006118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08006118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x0800611C: beq         $v0, $zero, L_080061C4
    if (ctx->r2 == 0) {
        // 0x08006120: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080061C4;
    }
    // 0x08006120: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006124: lui         $t2, 0x8001
    ctx->r10 = S32(0X8001 << 16);
    // 0x08006128: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x0800612C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006130: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006134: addiu       $t3, $t3, -0x20A0
    ctx->r11 = ADD32(ctx->r11, -0X20A0);
    // 0x08006138: addiu       $t2, $t2, 0x41C4
    ctx->r10 = ADD32(ctx->r10, 0X41C4);
    // 0x0800613C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08006140: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006144: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x08006148: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x0800614C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08006150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08006154: jalr        $t9
    // 0x08006158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08006158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x0800615C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08006160: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08006164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08006168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800616C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006174: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006178: jalr        $t9
    // 0x0800617C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800617C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_19:
    // 0x08006180: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08006184: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08006188: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x0800618C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08006190: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08006194: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08006198: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x0800619C: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    // 0x080061A0: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x080061A4: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x080061A8: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x080061AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080061B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x080061B4: jalr        $t9
    // 0x080061B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080061B8: nop

    after_20:
    // 0x080061BC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080061C0: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_080061C4:
    // 0x080061C4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080061C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X6AC0) << 16);
    // 0x080061CC: addiu       $a1, $a1, 0x6AC0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X6AC0));
    // 0x080061D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080061D4: jalr        $t9
    // 0x080061D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080061D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x080061DC: beq         $v0, $zero, L_08006284
    if (ctx->r2 == 0) {
        // 0x080061E0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006284;
    }
    // 0x080061E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080061E4: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x080061E8: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x080061EC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080061F0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080061F4: addiu       $t8, $t8, -0x20A0
    ctx->r24 = ADD32(ctx->r24, -0X20A0);
    // 0x080061F8: addiu       $t7, $t7, 0x41C4
    ctx->r15 = ADD32(ctx->r15, 0X41C4);
    // 0x080061FC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08006200: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006204: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x08006208: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x0800620C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08006210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08006214: jalr        $t9
    // 0x08006218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08006218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x0800621C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08006220: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08006224: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08006228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800622C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006238: jalr        $t9
    // 0x0800623C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800623C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_23:
    // 0x08006240: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08006244: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08006248: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x0800624C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08006250: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08006254: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08006258: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x0800625C: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x08006260: addiu       $t2, $zero, 0x1D
    ctx->r10 = ADD32(0, 0X1D);
    // 0x08006264: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08006268: sh          $t2, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r10;
    // 0x0800626C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08006270: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x08006274: jalr        $t9
    // 0x08006278: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08006278: nop

    after_24:
    // 0x0800627C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006280: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006284:
    // 0x08006284: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08006288: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X6CC8) << 16);
    // 0x0800628C: addiu       $a1, $a1, 0x6CC8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X6CC8));
    // 0x08006290: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006294: jalr        $t9
    // 0x08006298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08006298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x0800629C: beq         $v0, $zero, L_08006344
    if (ctx->r2 == 0) {
        // 0x080062A0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006344;
    }
    // 0x080062A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080062A4: lui         $t3, 0x8001
    ctx->r11 = S32(0X8001 << 16);
    // 0x080062A8: lui         $t4, 0x8022
    ctx->r12 = S32(0X8022 << 16);
    // 0x080062AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080062B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080062B4: addiu       $t4, $t4, -0x20A0
    ctx->r12 = ADD32(ctx->r12, -0X20A0);
    // 0x080062B8: addiu       $t3, $t3, 0x41C4
    ctx->r11 = ADD32(ctx->r11, 0X41C4);
    // 0x080062BC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080062C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080062C4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x080062C8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x080062CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080062D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080062D4: jalr        $t9
    // 0x080062D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080062D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x080062DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080062E0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x080062E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080062E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080062EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080062F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080062F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080062F8: jalr        $t9
    // 0x080062FC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080062FC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_27:
    // 0x08006300: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08006304: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08006308: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x0800630C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08006310: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08006314: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08006318: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x0800631C: sb          $t5, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r13;
    // 0x08006320: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x08006324: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08006328: sh          $t7, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r15;
    // 0x0800632C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08006330: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x08006334: jalr        $t9
    // 0x08006338: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08006338: nop

    after_28:
    // 0x0800633C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006340: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006344:
    // 0x08006344: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08006348: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X6ED0) << 16);
    // 0x0800634C: addiu       $a1, $a1, 0x6ED0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X6ED0));
    // 0x08006350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006354: jalr        $t9
    // 0x08006358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08006358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x0800635C: beq         $v0, $zero, L_08006404
    if (ctx->r2 == 0) {
        // 0x08006360: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006404;
    }
    // 0x08006360: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006364: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x08006368: lui         $t0, 0x8022
    ctx->r8 = S32(0X8022 << 16);
    // 0x0800636C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006370: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006374: addiu       $t0, $t0, -0x20A0
    ctx->r8 = ADD32(ctx->r8, -0X20A0);
    // 0x08006378: addiu       $t8, $t8, 0x41C4
    ctx->r24 = ADD32(ctx->r24, 0X41C4);
    // 0x0800637C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08006380: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006384: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x08006388: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0800638C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08006390: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08006394: jalr        $t9
    // 0x08006398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08006398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x0800639C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080063A0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x080063A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080063A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080063AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080063B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080063B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080063B8: jalr        $t9
    // 0x080063BC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080063BC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_31:
    // 0x080063C0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080063C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x080063C8: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x080063CC: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x080063D0: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x080063D4: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x080063D8: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x080063DC: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x080063E0: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x080063E4: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x080063E8: sh          $t3, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r11;
    // 0x080063EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080063F0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x080063F4: jalr        $t9
    // 0x080063F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080063F8: nop

    after_32:
    // 0x080063FC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006400: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006404:
    // 0x08006404: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08006408: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X70D8) << 16);
    // 0x0800640C: addiu       $a1, $a1, 0x70D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X70D8));
    // 0x08006410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006414: jalr        $t9
    // 0x08006418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08006418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_33:
    // 0x0800641C: beq         $v0, $zero, L_080064C4
    if (ctx->r2 == 0) {
        // 0x08006420: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080064C4;
    }
    // 0x08006420: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006424: lui         $t4, 0x8001
    ctx->r12 = S32(0X8001 << 16);
    // 0x08006428: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x0800642C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006430: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006434: addiu       $t5, $t5, -0x20A0
    ctx->r13 = ADD32(ctx->r13, -0X20A0);
    // 0x08006438: addiu       $t4, $t4, 0x41C4
    ctx->r12 = ADD32(ctx->r12, 0X41C4);
    // 0x0800643C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08006440: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006444: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x08006448: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x0800644C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08006450: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08006454: jalr        $t9
    // 0x08006458: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08006458: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x0800645C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08006460: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08006464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08006468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800646C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006474: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006478: jalr        $t9
    // 0x0800647C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x0800647C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_35:
    // 0x08006480: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08006484: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08006488: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x0800648C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x08006490: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x08006494: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08006498: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x0800649C: sb          $t6, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r14;
    // 0x080064A0: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x080064A4: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080064A8: sh          $t8, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r24;
    // 0x080064AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080064B0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x080064B4: jalr        $t9
    // 0x080064B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080064B8: nop

    after_36:
    // 0x080064BC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080064C0: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_080064C4:
    // 0x080064C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080064C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080064CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X64F0) << 16);
    // 0x080064D0: jalr        $t9
    // 0x080064D4: addiu       $a0, $a0, 0x64F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X64F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x080064D4: addiu       $a0, $a0, 0x64F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X64F0));
    after_37:
L_080064D8:
    // 0x080064D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080064DC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x080064E0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080064E4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080064E8: jr          $ra
    // 0x080064EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080064EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080082F8_6BB598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080082F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080082FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08008300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008304: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08008308: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x0800830C: jalr        $t9
    // 0x08008310: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008310: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x08008314: bne         $v0, $zero, L_0800832C
    if (ctx->r2 != 0) {
        // 0x08008318: lui         $a0, 0x801
        ctx->r4 = S32(RELOC_HI16(20, 0X833C) << 16);
            goto L_0800832C;
    }
    // 0x08008318: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X833C) << 16);
    // 0x0800831C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008320: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008324: jalr        $t9
    // 0x08008328: addiu       $a0, $a0, -0x7CC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X833C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008328: addiu       $a0, $a0, -0x7CC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X833C));
    after_1:
L_0800832C:
    // 0x0800832C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08008334: jr          $ra
    // 0x08008338: nop

    TRACE_RETURN()
    return;
    // 0x08008338: nop

;}
RECOMP_FUNC void func_080074CC_6BA76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080074CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080074D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080074D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080074D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080074DC: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x080074E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080074E4: jalr        $t9
    // 0x080074E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080074E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x080074EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080074F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080074F4: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x080074F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080074FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X751C) << 16);
    // 0x08007500: addiu       $a0, $a0, 0x751C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X751C));
    // 0x08007504: jalr        $t9
    // 0x08007508: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007508: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x0800750C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007514: jr          $ra
    // 0x08007518: nop

    TRACE_RETURN()
    return;
    // 0x08007518: nop

;}
RECOMP_FUNC void func_08005ED4_6B9174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005ED4: jr          $ra
    // 0x08005ED8: nop

    TRACE_RETURN()
    return;
    // 0x08005ED8: nop

;}
RECOMP_FUNC void func_080073D0_6BA670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080073D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x080073D4: jr          $ra
    // 0x080073D8: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x080073D8: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
;}
RECOMP_FUNC void func_08007BB0_6BAE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007BB8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08007BBC: addiu       $at, $zero, -0x3001
    ctx->r1 = ADD32(0, -0X3001);
    // 0x08007BC0: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08007BC4: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x08007BC8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08007BCC: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08007BD0: lw          $t9, 0xE8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XE8);
    // 0x08007BD4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x08007BD8: sw          $t0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r8;
    // 0x08007BDC: ori         $t2, $t0, 0x2000
    ctx->r10 = ctx->r8 | 0X2000;
    // 0x08007BE0: sw          $t2, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r10;
    // 0x08007BE4: lhu         $t3, 0x16($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X16);
    // 0x08007BE8: addiu       $at, $zero, 0x360
    ctx->r1 = ADD32(0, 0X360);
    // 0x08007BEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007BF0: bne         $t3, $at, L_08007C08
    if (ctx->r11 != ctx->r1) {
        // 0x08007BF4: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08007C08;
    }
    // 0x08007BF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007BF8: sh          $t4, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r12;
    // 0x08007BFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7C18) << 16);
    // 0x08007C00: jalr        $t9
    // 0x08007C04: addiu       $a0, $a0, 0x7C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7C18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007C04: addiu       $a0, $a0, 0x7C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7C18));
    after_0:
L_08007C08:
    // 0x08007C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007C10: jr          $ra
    // 0x08007C14: nop

    TRACE_RETURN()
    return;
    // 0x08007C14: nop

;}
RECOMP_FUNC void func_08003E6C_6B710C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08003E70: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08003E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003E78: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x08003E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003E80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003E84: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x08003E88: lhu         $v0, -0x4F56($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F56);
    // 0x08003E8C: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x08003E90: beq         $t7, $zero, L_08003EC4
    if (ctx->r15 == 0) {
        // 0x08003E94: andi        $t8, $v0, 0x2000
        ctx->r24 = ctx->r2 & 0X2000;
            goto L_08003EC4;
    }
    // 0x08003E94: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x08003E98: beql        $t8, $zero, L_08003EC8
    if (ctx->r24 == 0) {
        // 0x08003E9C: andi        $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 & 0X4000;
            goto L_08003EC8;
    }
    goto skip_0;
    // 0x08003E9C: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    skip_0:
    // 0x08003EA0: lhu         $t9, 0x16($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X16);
    // 0x08003EA4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08003EA8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x08003EAC: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x08003EB0: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08003EB4: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x08003EB8: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08003EBC: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x08003EC0: lhu         $v0, -0x4F56($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F56);
L_08003EC4:
    // 0x08003EC4: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
L_08003EC8:
    // 0x08003EC8: beq         $t3, $zero, L_08003EEC
    if (ctx->r11 == 0) {
        // 0x08003ECC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08003EEC;
    }
    // 0x08003ECC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003ED0: andi        $t4, $v0, 0x2000
    ctx->r12 = ctx->r2 & 0X2000;
    // 0x08003ED4: beq         $t4, $zero, L_08003EEC
    if (ctx->r12 == 0) {
        // 0x08003ED8: nop
    
            goto L_08003EEC;
    }
    // 0x08003ED8: nop

    // 0x08003EDC: lhu         $t5, 0x16($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X16);
    // 0x08003EE0: addiu       $t6, $t5, -0x40
    ctx->r14 = ADD32(ctx->r13, -0X40);
    // 0x08003EE4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08003EE8: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
L_08003EEC:
    // 0x08003EEC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003EF0: jalr        $t9
    // 0x08003EF4: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003EF4: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    after_0:
    // 0x08003EF8: beq         $v0, $zero, L_08003F10
    if (ctx->r2 == 0) {
        // 0x08003EFC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X3F20) << 16);
            goto L_08003F10;
    }
    // 0x08003EFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3F20) << 16);
    // 0x08003F00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F08: jalr        $t9
    // 0x08003F0C: addiu       $a0, $a0, 0x3F20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3F20));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003F0C: addiu       $a0, $a0, 0x3F20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3F20));
    after_1:
L_08003F10:
    // 0x08003F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003F18: jr          $ra
    // 0x08003F1C: nop

    TRACE_RETURN()
    return;
    // 0x08003F1C: nop

;}
RECOMP_FUNC void func_0800876C_6BBA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800876C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08008778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800877C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08008780: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x08008784: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08008788: bne         $v0, $at, L_080087B0
    if (ctx->r2 != ctx->r1) {
        // 0x0800878C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080087B0;
    }
    // 0x0800878C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08008790: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08008794: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08008798: addiu       $a0, $zero, 0x29D
    ctx->r4 = ADD32(0, 0X29D);
    // 0x0800879C: jalr        $t9
    // 0x080087A0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080087A0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080087A4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080087A8: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x080087AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_080087B0:
    // 0x080087B0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x080087B4: bne         $v1, $at, L_080087D4
    if (ctx->r3 != ctx->r1) {
        // 0x080087B8: addiu       $a0, $zero, 0x133
        ctx->r4 = ADD32(0, 0X133);
            goto L_080087D4;
    }
    // 0x080087B8: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    // 0x080087BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080087C0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080087C4: jalr        $t9
    // 0x080087C8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080087C8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x080087CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080087D0: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
L_080087D4:
    // 0x080087D4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080087D8: bne         $v0, $zero, L_080087F4
    if (ctx->r2 != 0) {
        // 0x080087DC: sh          $t6, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r14;
            goto L_080087F4;
    }
    // 0x080087DC: sh          $t6, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r14;
    // 0x080087E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080087E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080087E8: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8804) << 16);
    // 0x080087EC: jalr        $t9
    // 0x080087F0: addiu       $a0, $a0, -0x77FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8804));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080087F0: addiu       $a0, $a0, -0x77FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8804));
    after_2:
L_080087F4:
    // 0x080087F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080087F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080087FC: jr          $ra
    // 0x08008800: nop

    TRACE_RETURN()
    return;
    // 0x08008800: nop

;}
RECOMP_FUNC void func_080072E0_6BA580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080072E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080072E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080072E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080072EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080072F0: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080072F4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080072F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080072FC: jalr        $t9
    // 0x08007300: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007300: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08007304: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007308: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800730C: jalr        $t9
    // 0x08007310: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007310: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_1:
    // 0x08007314: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007318: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800731C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7338) << 16);
    // 0x08007320: jalr        $t9
    // 0x08007324: addiu       $a0, $a0, 0x7338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7338));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007324: addiu       $a0, $a0, 0x7338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7338));
    after_2:
    // 0x08007328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800732C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007330: jr          $ra
    // 0x08007334: nop

    TRACE_RETURN()
    return;
    // 0x08007334: nop

;}
RECOMP_FUNC void func_0800658C_6B982C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800658C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006590: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800659C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080065A0: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    // 0x080065A4: jalr        $t9
    // 0x080065A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080065A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080065AC: beq         $v0, $zero, L_080065E0
    if (ctx->r2 == 0) {
        // 0x080065B0: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_080065E0;
    }
    // 0x080065B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080065B4: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080065B8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x080065BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X65F0) << 16);
    // 0x080065C0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080065C4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x080065C8: bne         $t8, $at, L_080065E0
    if (ctx->r24 != ctx->r1) {
        // 0x080065CC: sh          $t7, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r15;
            goto L_080065E0;
    }
    // 0x080065CC: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x080065D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080065D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080065D8: jalr        $t9
    // 0x080065DC: addiu       $a0, $a0, 0x65F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X65F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080065DC: addiu       $a0, $a0, 0x65F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X65F0));
    after_1:
L_080065E0:
    // 0x080065E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080065E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080065E8: jr          $ra
    // 0x080065EC: nop

    TRACE_RETURN()
    return;
    // 0x080065EC: nop

;}
RECOMP_FUNC void func_080064F0_6B9790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080064F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080064F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080064F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080064FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006500: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006508: jalr        $t9
    // 0x0800650C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800650C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_0:
    // 0x08006510: beq         $v0, $zero, L_08006538
    if (ctx->r2 == 0) {
        // 0x08006514: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08006538;
    }
    // 0x08006514: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006518: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x0800651C: jalr        $t9
    // 0x08006520: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006520: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
    // 0x08006524: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006528: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800652C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X6548) << 16);
    // 0x08006530: jalr        $t9
    // 0x08006534: addiu       $a0, $a0, 0x6548
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6548));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006534: addiu       $a0, $a0, 0x6548
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6548));
    after_2:
L_08006538:
    // 0x08006538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800653C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006540: jr          $ra
    // 0x08006544: nop

    TRACE_RETURN()
    return;
    // 0x08006544: nop

;}
RECOMP_FUNC void func_08001A50_6B4CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001A60: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001A64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001A68: jalr        $t9
    // 0x08001A6C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A6C: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    after_0:
    // 0x08001A70: beq         $v0, $zero, L_08001A98
    if (ctx->r2 == 0) {
        // 0x08001A74: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001A98;
    }
    // 0x08001A74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A78: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001A7C: jalr        $t9
    // 0x08001A80: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A80: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    after_1:
    // 0x08001A84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1AA8) << 16);
    // 0x08001A90: jalr        $t9
    // 0x08001A94: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1AA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A94: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1AA8));
    after_2:
L_08001A98:
    // 0x08001A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AA0: jr          $ra
    // 0x08001AA4: nop

    TRACE_RETURN()
    return;
    // 0x08001AA4: nop

;}
RECOMP_FUNC void func_080088C4_6BBB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080088C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080088C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080088CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080088D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080088D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080088D8: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080088DC: addiu       $v0, $v0, 0x2938
    ctx->r2 = ADD32(ctx->r2, 0X2938);
    // 0x080088E0: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x080088E4: jalr        $v0
    // 0x080088E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080088E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x080088EC: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x080088F0: lbu         $t6, 0xDD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XDD);
    // 0x080088F4: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x080088F8: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x080088FC: sh          $t6, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r14;
    // 0x08008900: lbu         $t8, 0xDD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDD);
    // 0x08008904: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x08008908: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x0800890C: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x08008910: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x08008914: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008918: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800891C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08008920: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08008924: lui         $a1, 0xC32A
    ctx->r5 = S32(0XC32A << 16);
    // 0x08008928: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x0800892C: jalr        $t9
    // 0x08008930: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008930: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    after_1:
    // 0x08008934: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008938: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800893C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08008940: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08008944: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008948: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x0800894C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008950: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08008954: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008958: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800895C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08008960: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08008964: jalr        $t9
    // 0x08008968: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008968: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_2:
    // 0x0800896C: lbu         $t2, 0xDD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XDD);
    // 0x08008970: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x08008974: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x08008978: bne         $t4, $zero, L_080089F0
    if (ctx->r12 != 0) {
        // 0x0800897C: sb          $t3, 0xDD($s0)
        MEM_B(0XDD, ctx->r16) = ctx->r11;
            goto L_080089F0;
    }
    // 0x0800897C: sb          $t3, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r11;
    // 0x08008980: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08008984: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x08008988: jalr        $t9
    // 0x0800898C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800898C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_3:
    // 0x08008990: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08008994: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x08008998: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x0800899C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080089A0: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x080089A4: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x080089A8: sh          $t6, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r14;
    // 0x080089AC: jalr        $t9
    // 0x080089B0: sh          $t7, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080089B0: sh          $t7, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r15;
    after_4:
    // 0x080089B4: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080089B8: addiu       $v0, $v0, 0x4038
    ctx->r2 = ADD32(ctx->r2, 0X4038);
    // 0x080089BC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080089C0: jalr        $v0
    // 0x080089C4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x080089C4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_5:
    // 0x080089C8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080089CC: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    // 0x080089D0: jalr        $v0
    // 0x080089D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x080089D4: nop

    after_6:
    // 0x080089D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080089DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080089E0: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8A04) << 16);
    // 0x080089E4: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x080089E8: jalr        $t9
    // 0x080089EC: addiu       $a0, $a0, -0x75FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A04));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080089EC: addiu       $a0, $a0, -0x75FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A04));
    after_7:
L_080089F0:
    // 0x080089F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080089F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080089F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080089FC: jr          $ra
    // 0x08008A00: nop

    TRACE_RETURN()
    return;
    // 0x08008A00: nop

;}
RECOMP_FUNC void func_08008624_6BB8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800862C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08008630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08008634: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08008638: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800863C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08008640: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08008644: bne         $v0, $zero, L_0800867C
    if (ctx->r2 != 0) {
        // 0x08008648: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800867C;
    }
    // 0x08008648: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800864C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08008650: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    // 0x08008654: jalr        $t9
    // 0x08008658: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008658: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800865C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08008660: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008664: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08008668: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800866C: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X868C) << 16);
    // 0x08008670: addiu       $a0, $a0, -0x7974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X868C));
    // 0x08008674: jalr        $t9
    // 0x08008678: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008678: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    after_1:
L_0800867C:
    // 0x0800867C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08008684: jr          $ra
    // 0x08008688: nop

    TRACE_RETURN()
    return;
    // 0x08008688: nop

;}
RECOMP_FUNC void func_080039B4_6B6C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080039B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080039BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080039C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080039C4: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x080039C8: jalr        $t9
    // 0x080039CC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080039CC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x080039D0: bne         $v0, $zero, L_080039F0
    if (ctx->r2 != 0) {
        // 0x080039D4: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_080039F0;
    }
    // 0x080039D4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080039D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080039E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3A00) << 16);
    // 0x080039E4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x080039E8: jalr        $t9
    // 0x080039EC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3A00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080039EC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3A00));
    after_1:
L_080039F0:
    // 0x080039F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080039F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080039F8: jr          $ra
    // 0x080039FC: nop

    TRACE_RETURN()
    return;
    // 0x080039FC: nop

;}
RECOMP_FUNC void func_0800934C_6BC5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800934C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08009350: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08009354: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08009358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800935C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08009360: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08009364: addiu       $v1, $v1, 0x2938
    ctx->r3 = ADD32(ctx->r3, 0X2938);
    // 0x08009368: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x0800936C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x08009370: jalr        $v1
    // 0x08009374: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08009374: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08009378: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x0800937C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08009380: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08009384: lbu         $t6, 0xDD($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XDD);
    // 0x08009388: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x0800938C: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x08009390: sh          $t6, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r14;
    // 0x08009394: lbu         $t8, 0xDD($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XDD);
    // 0x08009398: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x0800939C: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x080093A0: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x080093A4: lbu         $t1, 0xDD($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0XDD);
    // 0x080093A8: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x080093AC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x080093B0: bne         $t3, $zero, L_080093EC
    if (ctx->r11 != 0) {
        // 0x080093B4: sb          $t2, 0xDD($a1)
        MEM_B(0XDD, ctx->r5) = ctx->r10;
            goto L_080093EC;
    }
    // 0x080093B4: sb          $t2, 0xDD($a1)
    MEM_B(0XDD, ctx->r5) = ctx->r10;
    // 0x080093B8: jalr        $v1
    // 0x080093BC: lw          $a0, 0xD0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XD0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080093BC: lw          $a0, 0xD0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XD0);
    after_1:
    // 0x080093C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080093C4: addiu       $t4, $zero, 0x140
    ctx->r12 = ADD32(0, 0X140);
    // 0x080093C8: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x080093CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080093D0: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X93FC) << 16);
    // 0x080093D4: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x080093D8: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x080093DC: sh          $t4, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r12;
    // 0x080093E0: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
    // 0x080093E4: jalr        $t9
    // 0x080093E8: addiu       $a0, $a0, -0x6C04
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X93FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080093E8: addiu       $a0, $a0, -0x6C04
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X93FC));
    after_2:
L_080093EC:
    // 0x080093EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080093F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080093F4: jr          $ra
    // 0x080093F8: nop

    TRACE_RETURN()
    return;
    // 0x080093F8: nop

;}
RECOMP_FUNC void func_08005B50_6B8DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005B50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08005B54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08005B58: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08005B5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08005B60: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x08005B64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005B68: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08005B6C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(20, 0X49A4) << 16);
    // 0x08005B70: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08005B74: addiu       $a1, $a1, 0x49A4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(20, 0X49A4));
    // 0x08005B78: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08005B7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08005B80: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08005B84: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x08005B88: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08005B8C: jalr        $t9
    // 0x08005B90: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005B90: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x08005B94: beq         $v0, $zero, L_08005BCC
    if (ctx->r2 == 0) {
        // 0x08005B98: addiu       $t7, $zero, 0x1D
        ctx->r15 = ADD32(0, 0X1D);
            goto L_08005BCC;
    }
    // 0x08005B98: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x08005B9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005BA0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08005BA4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08005BA8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08005BAC: jalr        $t9
    // 0x08005BB0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005BB0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_1:
    // 0x08005BB4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08005BB8: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x08005BBC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08005BC0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x08005BC4: sw          $t0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r8;
    // 0x08005BC8: sw          $t8, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r24;
L_08005BCC:
    // 0x08005BCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005BD0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08005BD4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005BD8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08005BDC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08005BE0: jalr        $t9
    // 0x08005BE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005BE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08005BE8: beq         $v0, $zero, L_08005C48
    if (ctx->r2 == 0) {
        // 0x08005BEC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08005C48;
    }
    // 0x08005BEC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08005BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005BF4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08005BF8: jalr        $t9
    // 0x08005BFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005BFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x08005C00: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08005C04: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08005C08: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08005C0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08005C10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08005C14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08005C18: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08005C1C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08005C20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005C24: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08005C28: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08005C2C: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08005C30: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x08005C34: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08005C38: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08005C3C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08005C40: jalr        $t9
    // 0x08005C44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005C44: nop

    after_4:
L_08005C48:
    // 0x08005C48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005C4C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005C50: jalr        $t9
    // 0x08005C54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005C54: nop

    after_5:
    // 0x08005C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08005C5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08005C60: jr          $ra
    // 0x08005C64: nop

    TRACE_RETURN()
    return;
    // 0x08005C64: nop

;}
RECOMP_FUNC void func_08007984_6BAC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007988: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800798C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007990: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08007994: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08007998: jalr        $t9
    // 0x0800799C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800799C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080079A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080079A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080079A8: jr          $ra
    // 0x080079AC: nop

    TRACE_RETURN()
    return;
    // 0x080079AC: nop

;}
RECOMP_FUNC void func_08008804_6BBAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008804: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08008808: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800880C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08008810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008814: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08008818: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800881C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08008820: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08008824: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08008828: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800882C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08008830: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x08008834: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008838: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x0800883C: lui         $a1, 0x42D2
    ctx->r5 = S32(0X42D2 << 16);
    // 0x08008840: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x08008844: jalr        $t9
    // 0x08008848: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008848: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_0:
    // 0x0800884C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x08008850: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008854: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08008858: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x0800885C: jalr        $t9
    // 0x08008860: lw          $a0, 0xD0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008860: lw          $a0, 0xD0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XD0);
    after_1:
    // 0x08008864: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008868: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800886C: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8888) << 16);
    // 0x08008870: jalr        $t9
    // 0x08008874: addiu       $a0, $a0, -0x7778
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8888));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008874: addiu       $a0, $a0, -0x7778
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8888));
    after_2:
    // 0x08008878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800887C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08008880: jr          $ra
    // 0x08008884: nop

    TRACE_RETURN()
    return;
    // 0x08008884: nop

;}
RECOMP_FUNC void func_0800110C_6B43AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800110C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001110: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001114: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001118: lbu         $t6, 0xED($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XED);
    // 0x0800111C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001124: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001128: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x0800112C: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x08001130: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x08001134: beq         $at, $zero, L_0800114C
    if (ctx->r1 == 0) {
        // 0x08001138: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_0800114C;
    }
    // 0x08001138: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x0800113C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x08001140: sb          $t0, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r8;
    // 0x08001144: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x08001148: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_0800114C:
    // 0x0800114C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001150: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001154: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08001158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800115C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001160: jalr        $t9
    // 0x08001164: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001164: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001168: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0800116C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001170: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001174: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08001178: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x0800117C: beq         $t2, $zero, L_080011D4
    if (ctx->r10 == 0) {
        // 0x08001180: nop
    
            goto L_080011D4;
    }
    // 0x08001180: nop

    // 0x08001184: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001188: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC308) << 16);
    // 0x0800118C: ldc1        $f0, -0x3CF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC308));
    // 0x08001190: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001194: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001198: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x0800119C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC310) << 16);
    // 0x080011A0: ldc1        $f2, -0x3CF0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC310));
    // 0x080011A4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080011A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080011AC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x080011B0: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x080011B4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x080011B8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080011BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080011C0: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x080011C4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x080011C8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080011CC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x080011D0: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
L_080011D4:
    // 0x080011D4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC318) << 16);
    // 0x080011D8: andi        $t3, $v1, 0x20
    ctx->r11 = ctx->r3 & 0X20;
    // 0x080011DC: beq         $t3, $zero, L_08001234
    if (ctx->r11 == 0) {
        // 0x080011E0: ldc1        $f2, -0x3CE8($at)
        CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC318));
            goto L_08001234;
    }
    // 0x080011E0: ldc1        $f2, -0x3CE8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC318));
    // 0x080011E4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080011E8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC320) << 16);
    // 0x080011EC: ldc1        $f0, -0x3CE0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC320));
    // 0x080011F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080011F4: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x080011F8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x080011FC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC328) << 16);
    // 0x08001200: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001204: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001208: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x0800120C: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08001210: ldc1        $f4, -0x3CD8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC328));
    // 0x08001214: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001218: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x0800121C: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08001220: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001224: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001228: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x0800122C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x08001230: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
L_08001234:
    // 0x08001234: andi        $t4, $v1, 0x40
    ctx->r12 = ctx->r3 & 0X40;
    // 0x08001238: beql        $t4, $zero, L_08001288
    if (ctx->r12 == 0) {
        // 0x0800123C: lwc1        $f12, 0x8($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
            goto L_08001288;
    }
    goto skip_0;
    // 0x0800123C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x08001240: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001244: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001248: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC330) << 16);
    // 0x0800124C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001250: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001254: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x08001258: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800125C: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x08001260: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08001264: ldc1        $f6, -0x3CD0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC330));
    // 0x08001268: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800126C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08001270: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08001274: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001278: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800127C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x08001280: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x08001284: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
L_08001288:
    // 0x08001288: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800128C: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x08001290: jalr        $t9
    // 0x08001294: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001294: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x08001298: bne         $v0, $zero, L_080012BC
    if (ctx->r2 != 0) {
        // 0x0800129C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080012BC;
    }
    // 0x0800129C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080012A0: lw          $t5, 0x68($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X68);
    // 0x080012A4: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x080012A8: bne         $t6, $zero, L_080012BC
    if (ctx->r14 != 0) {
        // 0x080012AC: nop
    
            goto L_080012BC;
    }
    // 0x080012AC: nop

    // 0x080012B0: lbu         $t7, 0xED($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XED);
    // 0x080012B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080012B8: bne         $t7, $at, L_080012CC
    if (ctx->r15 != ctx->r1) {
        // 0x080012BC: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080012CC;
    }
L_080012BC:
    // 0x080012BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012C0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080012C4: jalr        $t9
    // 0x080012C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012C8: nop

    after_2:
L_080012CC:
    // 0x080012CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080012D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080012D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080012D8: jr          $ra
    // 0x080012DC: nop

    TRACE_RETURN()
    return;
    // 0x080012DC: nop

;}
RECOMP_FUNC void func_08008194_6BB434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800819C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080081A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080081A4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080081A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080081AC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080081B0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080081B4: bne         $v0, $zero, L_080081FC
    if (ctx->r2 != 0) {
        // 0x080081B8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080081FC;
    }
    // 0x080081B8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080081BC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080081C0: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x080081C4: jalr        $t9
    // 0x080081C8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080081C8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080081CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080081D0: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080081D4: jalr        $t9
    // 0x080081D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080081D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x080081DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080081E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080081E4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x080081E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080081EC: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X820C) << 16);
    // 0x080081F0: addiu       $a0, $a0, -0x7DF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X820C));
    // 0x080081F4: jalr        $t9
    // 0x080081F8: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080081F8: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    after_2:
L_080081FC:
    // 0x080081FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08008204: jr          $ra
    // 0x08008208: nop

    TRACE_RETURN()
    return;
    // 0x08008208: nop

;}
RECOMP_FUNC void func_0800390C_6B6BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800390C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003914: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003918: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800391C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003920: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003924: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003928: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800392C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003930: beq         $v1, $zero, L_08003944
    if (ctx->r3 == 0) {
        // 0x08003934: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003944;
    }
    // 0x08003934: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003938: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800393C: jalr        $t9
    // 0x08003940: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003940: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_0:
L_08003944:
    // 0x08003944: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003948: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x0800394C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003950: jalr        $t9
    // 0x08003954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x08003958: bne         $v0, $zero, L_080039A0
    if (ctx->r2 != 0) {
        // 0x0800395C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080039A0;
    }
    // 0x0800395C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003960: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003964: jalr        $t9
    // 0x08003968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x0800396C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003970: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003974: jalr        $t9
    // 0x08003978: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003978: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
    after_3:
    // 0x0800397C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x08003980: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08003984: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003988: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800398C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X39B4) << 16);
    // 0x08003990: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08003994: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08003998: jalr        $t9
    // 0x0800399C: addiu       $a0, $a0, 0x39B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X39B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800399C: addiu       $a0, $a0, 0x39B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X39B4));
    after_4:
L_080039A0:
    // 0x080039A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080039A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080039A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080039AC: jr          $ra
    // 0x080039B0: nop

    TRACE_RETURN()
    return;
    // 0x080039B0: nop

;}
RECOMP_FUNC void func_08009298_6BC538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08009298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800929C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080092A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080092A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080092A8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080092AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080092B0: jalr        $t9
    // 0x080092B4: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080092B4: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_0:
    // 0x080092B8: beq         $v0, $zero, L_080092FC
    if (ctx->r2 == 0) {
        // 0x080092BC: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080092FC;
    }
    // 0x080092BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080092C0: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x080092C4: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x080092C8: sb          $t6, 0xDD($v1)
    MEM_B(0XDD, ctx->r3) = ctx->r14;
    // 0x080092CC: sh          $t7, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r15;
    // 0x080092D0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080092D4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x080092D8: lui         $t0, 0xD
    ctx->r8 = S32(0XD << 16);
    // 0x080092DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080092E0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x080092E4: lw          $t0, -0x718($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X718);
    // 0x080092E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080092EC: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X930C) << 16);
    // 0x080092F0: addiu       $a0, $a0, -0x6CF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X930C));
    // 0x080092F4: jalr        $t9
    // 0x080092F8: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080092F8: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    after_1:
L_080092FC:
    // 0x080092FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08009300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08009304: jr          $ra
    // 0x08009308: nop

    TRACE_RETURN()
    return;
    // 0x08009308: nop

;}
RECOMP_FUNC void func_08006548_6B97E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800654C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006558: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x0800655C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006560: jalr        $t9
    // 0x08006564: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006564: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x08006568: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800656C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006570: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X658C) << 16);
    // 0x08006574: jalr        $t9
    // 0x08006578: addiu       $a0, $a0, 0x658C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X658C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006578: addiu       $a0, $a0, 0x658C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X658C));
    after_1:
    // 0x0800657C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006584: jr          $ra
    // 0x08006588: nop

    TRACE_RETURN()
    return;
    // 0x08006588: nop

;}
