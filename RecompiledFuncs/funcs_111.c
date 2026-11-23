#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000000_6C8210(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x0800001C: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    after_0:
    // 0x08000020: beq         $v0, $zero, L_08000030
    if (ctx->r2 == 0) {
        // 0x08000024: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_08000030;
    }
    // 0x08000024: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000028: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800002C: sb          $t6, -0x32D0($at)
    MEM_B(-0X32D0, ctx->r1) = ctx->r14;
L_08000030:
    // 0x08000030: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000034: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000038: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800003C: lw          $v0, 0x84($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X84);
    // 0x08000040: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08000044: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000048: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x0800004C: nop

    // 0x08000050: bc1fl       L_080000F8
    if (!c1cs) {
        // 0x08000054: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080000F8;
    }
    goto skip_0;
    // 0x08000054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000058: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800005C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000060: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08000064: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x08000068: nop

    // 0x0800006C: bc1fl       L_080000F8
    if (!c1cs) {
        // 0x08000070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080000F8;
    }
    goto skip_1;
    // 0x08000070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000074: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000078: lui         $at, 0xC30F
    ctx->r1 = S32(0XC30F << 16);
    // 0x0800007C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x08000080: nop

    // 0x08000084: bc1fl       L_080000F8
    if (!c1cs) {
        // 0x08000088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080000F8;
    }
    goto skip_2;
    // 0x08000088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x0800008C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000090: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000094: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000098: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800009C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x080000A0: nop

    // 0x080000A4: bc1fl       L_080000F8
    if (!c1cs) {
        // 0x080000A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080000F8;
    }
    goto skip_3;
    // 0x080000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x080000AC: jalr        $t9
    // 0x080000B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000B0: nop

    after_1:
    // 0x080000B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080000B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000BC: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x080000C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080000C4: sb          $zero, 0x94($v0)
    MEM_B(0X94, ctx->r2) = 0;
    // 0x080000C8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080000CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: addiu       $a2, $v0, 0x94
    ctx->r6 = ADD32(ctx->r2, 0X94);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000D4: addiu       $a2, $v0, 0x94
    ctx->r6 = ADD32(ctx->r2, 0X94);
    after_2:
    // 0x080000D8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x080000DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X104) << 16);
    // 0x080000E8: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X104));
    // 0x080000EC: jalr        $t9
    // 0x080000F0: sw          $v0, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000F0: sw          $v0, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->r2;
    after_3:
    // 0x080000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000F8:
    // 0x080000F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080000FC: jr          $ra
    // 0x08000100: nop

    TRACE_RETURN()
    return;
    // 0x08000100: nop

;}
RECOMP_FUNC void func_080030A8_6CB2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080030AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080030B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080030B4: lhu         $t6, 0x7E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X7E);
    // 0x080030B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080030BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080030C0: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x080030C4: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    // 0x080030C8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080030CC: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080030D0: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x080030D4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080030D8: bne         $v1, $zero, L_08003138
    if (ctx->r3 != 0) {
        // 0x080030DC: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08003138;
    }
    // 0x080030DC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080030E0: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x080030E4: jalr        $t9
    // 0x080030E8: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080030E8: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    after_0:
    // 0x080030EC: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x080030F0: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080030F4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080030F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080030FC: addiu       $t0, $zero, 0xCC
    ctx->r8 = ADD32(0, 0XCC);
    // 0x08003100: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003104: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x08003108: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x0800310C: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08003110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003118: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800311C: jalr        $t9
    // 0x08003120: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003120: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003124: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003128: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800312C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X314C) << 16);
    // 0x08003130: jalr        $t9
    // 0x08003134: addiu       $a0, $a0, 0x314C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X314C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003134: addiu       $a0, $a0, 0x314C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X314C));
    after_2:
L_08003138:
    // 0x08003138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800313C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003144: jr          $ra
    // 0x08003148: nop

    TRACE_RETURN()
    return;
    // 0x08003148: nop

;}
RECOMP_FUNC void func_08005564_6CD774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800556C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005574: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005578: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800557C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08005580: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x08005584: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08005588: bne         $v1, $zero, L_080055B0
    if (ctx->r3 != 0) {
        // 0x0800558C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080055B0;
    }
    // 0x0800558C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005590: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x08005594: jalr        $t9
    // 0x08005598: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005598: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_0:
    // 0x0800559C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080055A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080055A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X55C0) << 16);
    // 0x080055A8: jalr        $t9
    // 0x080055AC: addiu       $a0, $a0, 0x55C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X55C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080055AC: addiu       $a0, $a0, 0x55C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X55C0));
    after_1:
L_080055B0:
    // 0x080055B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080055B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080055B8: jr          $ra
    // 0x080055BC: nop

    TRACE_RETURN()
    return;
    // 0x080055BC: nop

;}
RECOMP_FUNC void func_0800218C_6CA39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800218C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002194: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800219C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080021A0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080021A4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x080021A8: jalr        $t9
    // 0x080021AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080021B0: bne         $v0, $zero, L_080022A8
    if (ctx->r2 != 0) {
        // 0x080021B4: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_080022A8;
    }
    // 0x080021B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080021B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x080021BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080021C0: lwc1        $f0, 0x28($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X28);
    // 0x080021C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080021C8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x080021CC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x080021D0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080021D4: addiu       $a0, $zero, 0x2A2
    ctx->r4 = ADD32(0, 0X2A2);
    // 0x080021D8: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x080021DC: bc1f        L_08002200
    if (!c1cs) {
        // 0x080021E0: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08002200;
    }
    // 0x080021E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080021E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080021E8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x080021EC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x080021F0: nop

    // 0x080021F4: bc1fl       L_08002204
    if (!c1cs) {
        // 0x080021F8: lui         $at, 0x439B
        ctx->r1 = S32(0X439B << 16);
            goto L_08002204;
    }
    goto skip_0;
    // 0x080021F8: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    skip_0:
    // 0x080021FC: sb          $t6, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r14;
L_08002200:
    // 0x08002200: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
L_08002204:
    // 0x08002204: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08002208: lwc1        $f8, 0xD8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x0800220C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E10) << 16);
    // 0x08002210: ldc1        $f16, 0x6E10($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E10));
    // 0x08002214: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002218: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x0800221C: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x08002220: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002224: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x08002228: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x0800222C: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08002230: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08002234: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08002238: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x0800223C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x08002240: nop

    // 0x08002244: bc1fl       L_080022AC
    if (!c1cs) {
        // 0x08002248: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080022AC;
    }
    goto skip_1;
    // 0x08002248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x0800224C: lbu         $t7, 0x7C($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X7C);
    // 0x08002250: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002254: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002258: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x0800225C: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x08002260: sb          $t8, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r24;
    // 0x08002264: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x08002268: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x0800226C: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08002270: jalr        $t9
    // 0x08002274: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002274: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x08002278: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800227C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08002280: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x08002284: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002288: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x0800228C: andi        $t0, $v0, 0x8
    ctx->r8 = ctx->r2 & 0X8;
    // 0x08002290: beq         $t0, $zero, L_080022A0
    if (ctx->r8 == 0) {
        // 0x08002294: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X22BC) << 16);
            goto L_080022A0;
    }
    // 0x08002294: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X22BC) << 16);
    // 0x08002298: ori         $t1, $v0, 0x80
    ctx->r9 = ctx->r2 | 0X80;
    // 0x0800229C: sw          $t1, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r9;
L_080022A0:
    // 0x080022A0: jalr        $t9
    // 0x080022A4: addiu       $a0, $a0, 0x22BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X22BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080022A4: addiu       $a0, $a0, 0x22BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X22BC));
    after_2:
L_080022A8:
    // 0x080022A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080022AC:
    // 0x080022AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080022B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080022B4: jr          $ra
    // 0x080022B8: nop

    TRACE_RETURN()
    return;
    // 0x080022B8: nop

;}
RECOMP_FUNC void func_08002620_6CA830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002620: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002624: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002628: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800262C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08002630: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08002634: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002638: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x0800263C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002640: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002644: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08002648: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x0800264C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002650: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002654: addiu       $t9, $t9, -0x1ECC
    ctx->r25 = ADD32(ctx->r25, -0X1ECC);
    // 0x08002658: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x0800265C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002660: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08002664: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002668: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800266C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08002670: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002674: jalr        $t9
    // 0x08002678: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002678: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x0800267C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002680: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08002684: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002688: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800268C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08002690: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002694: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x08002698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800269C: jalr        $t9
    // 0x080026A0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026A0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_1:
    // 0x080026A4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x080026A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x080026AC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x080026B0: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x080026B4: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x080026B8: sh          $t3, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r11;
    // 0x080026BC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x080026C0: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x080026C4: swc1        $f14, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f14.u32l;
    // 0x080026C8: swc1        $f14, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f14.u32l;
    // 0x080026CC: swc1        $f14, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f14.u32l;
    // 0x080026D0: lw          $t4, 0xDC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XDC);
    // 0x080026D4: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080026D8: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080026DC: lw          $v0, 0x84($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X84);
    // 0x080026E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080026E4: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080026E8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080026EC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080026F0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080026F4: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080026F8: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080026FC: nop

    // 0x08002700: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08002704: jalr        $t9
    // 0x08002708: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002708: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_2:
    // 0x0800270C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002710: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x08002714: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002718: jalr        $t9
    // 0x0800271C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800271C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x08002720: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08002724: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002728: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800272C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08002730: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002734: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002738: swc1        $f10, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f10.u32l;
    // 0x0800273C: jalr        $t9
    // 0x08002740: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002740: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x08002744: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08002748: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800274C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002750: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08002754: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800275C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002760: jalr        $t9
    // 0x08002764: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002764: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x08002768: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800276C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x08002770: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002774: sb          $t5, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r13;
    // 0x08002778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800277C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002780: jalr        $t9
    // 0x08002784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08002788: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800278C: lbu         $t6, 0xD3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD3);
    // 0x08002790: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002794: swc1        $f8, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f8.u32l;
    // 0x08002798: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0800279C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080027A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027A4: swc1        $f10, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f10.u32l;
    // 0x080027A8: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080027AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080027B0: beq         $t6, $zero, L_080027D4
    if (ctx->r14 == 0) {
        // 0x080027B4: swc1        $f16, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->f16.u32l;
            goto L_080027D4;
    }
    // 0x080027B4: swc1        $f16, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f16.u32l;
    // 0x080027B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080027BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080027C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2A40) << 16);
    // 0x080027C4: jalr        $t9
    // 0x080027C8: addiu       $a0, $a0, 0x2A40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2A40));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080027C8: addiu       $a0, $a0, 0x2A40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2A40));
    after_7:
    // 0x080027CC: b           L_0800283C
    // 0x080027D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_0800283C;
    // 0x080027D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080027D4:
    // 0x080027D4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080027D8: jalr        $t9
    // 0x080027DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080027DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x080027E0: beq         $v0, $zero, L_08002824
    if (ctx->r2 == 0) {
        // 0x080027E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002824;
    }
    // 0x080027E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080027E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027EC: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x080027F0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080027F4: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080027F8: jalr        $t9
    // 0x080027FC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080027FC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_9:
    // 0x08002800: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08002804: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x08002808: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800280C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08002810: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08002814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002818: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800281C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08002820: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
L_08002824:
    // 0x08002824: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002828: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800282C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X284C) << 16);
    // 0x08002830: jalr        $t9
    // 0x08002834: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X284C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08002834: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X284C));
    after_10:
    // 0x08002838: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800283C:
    // 0x0800283C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08002840: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08002844: jr          $ra
    // 0x08002848: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08002848: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0800636C_6CE57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800636C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08006370: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006374: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006378: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800637C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08006380: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08006384: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08006388: jalr        $t9
    // 0x0800638C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800638C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08006390: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006394: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08006398: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x0800639C: jalr        $t9
    // 0x080063A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080063A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x080063A4: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x080063A8: addiu       $s0, $s0, -0x33D0
    ctx->r16 = ADD32(ctx->r16, -0X33D0);
    // 0x080063AC: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    // 0x080063B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080063B4: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080063B8: addiu       $t6, $a0, 0x40
    ctx->r14 = ADD32(ctx->r4, 0X40);
    // 0x080063BC: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    // 0x080063C0: jalr        $v0
    // 0x080063C4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080063C4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x080063C8: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    // 0x080063CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080063D0: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x080063D4: addiu       $t8, $a0, 0x40
    ctx->r24 = ADD32(ctx->r4, 0X40);
    // 0x080063D8: andi        $a0, $t8, 0x3FF
    ctx->r4 = ctx->r24 & 0X3FF;
    // 0x080063DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080063E0: jalr        $v0
    // 0x080063E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x080063E4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x080063E8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080063EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080063F0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x080063F4: lwc1        $f8, 0x140($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X140);
    // 0x080063F8: lwc1        $f18, 0x148($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X148);
    // 0x080063FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x08006400: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006404: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08006408: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0800640C: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08006410: lui         $a2, 0x439B
    ctx->r6 = S32(0X439B << 16);
    // 0x08006414: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08006418: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x0800641C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08006420: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08006424: jalr        $t9
    // 0x08006428: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08006428: nop

    after_4:
    // 0x0800642C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08006430: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    // 0x08006434: jalr        $t9
    // 0x08006438: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006438: nop

    after_5:
    // 0x0800643C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08006440: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x08006444: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    // 0x08006448: jalr        $t9
    // 0x0800644C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800644C: nop

    after_6:
    // 0x08006450: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08006454: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08006458: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0800645C: lwc1        $f10, 0x140($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X140);
    // 0x08006460: lwc1        $f4, 0x148($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X148);
    // 0x08006464: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08006468: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800646C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08006470: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08006474: lui         $a2, 0x43B1
    ctx->r6 = S32(0X43B1 << 16);
    // 0x08006478: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x0800647C: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08006480: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08006484: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08006488: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x0800648C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08006490: jalr        $t9
    // 0x08006494: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08006494: nop

    after_7:
    // 0x08006498: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800649C: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080064A0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080064A4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080064A8: lw          $a1, 0x2C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X2C);
    // 0x080064AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080064B0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080064B4: and         $t2, $a1, $at
    ctx->r10 = ctx->r5 & ctx->r1;
    // 0x080064B8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x080064BC: jalr        $t9
    // 0x080064C0: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080064C0: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    after_8:
    // 0x080064C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080064C8: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x080064CC: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x080064D0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x080064D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x080064D8: jalr        $t9
    // 0x080064DC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080064DC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x080064E0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x080064E4: lwc1        $f10, 0x140($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X140);
    // 0x080064E8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080064EC: lwc1        $f18, 0x148($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X148);
    // 0x080064F0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080064F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080064F8: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080064FC: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08006500: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08006504: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x08006508: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0800650C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x08006510: jalr        $t9
    // 0x08006514: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08006514: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_10:
    // 0x08006518: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800651C: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x08006520: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x08006524: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x08006528: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x0800652C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x08006530: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08006534: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08006538: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x0800653C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006540: jalr        $t9
    // 0x08006544: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08006544: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_11:
    // 0x08006548: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800654C: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08006550: lw          $a0, 0xE0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE0);
    // 0x08006554: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x08006558: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0800655C: jalr        $t9
    // 0x08006560: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08006560: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    after_12:
    // 0x08006564: lbu         $v0, 0xD7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD7);
    // 0x08006568: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800656C: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08006570: slti        $at, $v0, 0x36
    ctx->r1 = SIGNED(ctx->r2) < 0X36 ? 1 : 0;
    // 0x08006574: beq         $at, $zero, L_080065AC
    if (ctx->r1 == 0) {
        // 0x08006578: addiu       $t5, $v0, 0x2
        ctx->r13 = ADD32(ctx->r2, 0X2);
            goto L_080065AC;
    }
    // 0x08006578: addiu       $t5, $v0, 0x2
    ctx->r13 = ADD32(ctx->r2, 0X2);
    // 0x0800657C: sb          $t5, 0xD7($s1)
    MEM_B(0XD7, ctx->r17) = ctx->r13;
    // 0x08006580: jalr        $t9
    // 0x08006584: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08006584: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    after_13:
    // 0x08006588: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800658C: lbu         $t6, 0xD7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XD7);
    // 0x08006590: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x08006594: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x08006598: sh          $t6, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r14;
    // 0x0800659C: lbu         $t8, 0xD7($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XD7);
    // 0x080065A0: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x080065A4: subu        $t1, $t0, $t8
    ctx->r9 = SUB32(ctx->r8, ctx->r24);
    // 0x080065A8: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
L_080065AC:
    // 0x080065AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080065B0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080065B4: jalr        $t9
    // 0x080065B8: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080065B8: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    after_14:
    // 0x080065BC: beq         $v0, $zero, L_080065D4
    if (ctx->r2 == 0) {
        // 0x080065C0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X65E8) << 16);
            goto L_080065D4;
    }
    // 0x080065C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X65E8) << 16);
    // 0x080065C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080065C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080065CC: jalr        $t9
    // 0x080065D0: addiu       $a0, $a0, 0x65E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X65E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080065D0: addiu       $a0, $a0, 0x65E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X65E8));
    after_15:
L_080065D4:
    // 0x080065D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080065D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080065DC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080065E0: jr          $ra
    // 0x080065E4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080065E4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08002E08_6CB018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002E0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002E10: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08002E14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08002E18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002E1C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08002E20: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002E24: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002E28: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x08002E2C: bne         $t6, $zero, L_08002E3C
    if (ctx->r14 != 0) {
        // 0x08002E30: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_08002E3C;
    }
    // 0x08002E30: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x08002E34: beql        $t7, $zero, L_08002E50
    if (ctx->r15 == 0) {
        // 0x08002E38: lbu         $t0, 0xD9($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0XD9);
            goto L_08002E50;
    }
    goto skip_0;
    // 0x08002E38: lbu         $t0, 0xD9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD9);
    skip_0:
L_08002E3C:
    // 0x08002E3C: lbu         $t8, 0xD9($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XD9);
    // 0x08002E40: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x08002E44: b           L_08002E58
    // 0x08002E48: sb          $t9, 0xD9($s1)
    MEM_B(0XD9, ctx->r17) = ctx->r25;
        goto L_08002E58;
    // 0x08002E48: sb          $t9, 0xD9($s1)
    MEM_B(0XD9, ctx->r17) = ctx->r25;
    // 0x08002E4C: lbu         $t0, 0xD9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD9);
L_08002E50:
    // 0x08002E50: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x08002E54: sb          $t1, 0xD9($s1)
    MEM_B(0XD9, ctx->r17) = ctx->r9;
L_08002E58:
    // 0x08002E58: lbu         $s2, 0xD9($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0XD9);
    // 0x08002E5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08002E60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002E64: bgtz        $s2, L_08002E74
    if (SIGNED(ctx->r18) > 0) {
        // 0x08002E68: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08002E74;
    }
    // 0x08002E68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002E6C: sb          $t2, 0xD9($s1)
    MEM_B(0XD9, ctx->r17) = ctx->r10;
    // 0x08002E70: andi        $s2, $t2, 0xFF
    ctx->r18 = ctx->r10 & 0XFF;
L_08002E74:
    // 0x08002E74: lw          $v0, 0xE8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XE8);
    // 0x08002E78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08002E7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002E80: andi        $t3, $v0, 0x80
    ctx->r11 = ctx->r2 & 0X80;
    // 0x08002E84: beq         $t3, $zero, L_08002EF4
    if (ctx->r11 == 0) {
        // 0x08002E88: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_08002EF4;
    }
    // 0x08002E88: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x08002E8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E90: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002E94: jalr        $t9
    // 0x08002E98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x08002E9C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002EA0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E28) << 16);
    // 0x08002EA4: ldc1        $f0, 0x6E28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E28));
    // 0x08002EA8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002EAC: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002EB0: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08002EB4: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x08002EB8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002EBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002EC0: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002EC4: addiu       $t5, $t4, -0x20
    ctx->r13 = ADD32(ctx->r12, -0X20);
    // 0x08002EC8: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002ECC: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002ED0: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08002ED4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002ED8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002EDC: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x08002EE0: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002EE4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002EE8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002EEC: b           L_08003070
    // 0x08002EF0: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08003070;
    // 0x08002EF0: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08002EF4:
    // 0x08002EF4: beq         $t7, $zero, L_08002F74
    if (ctx->r15 == 0) {
        // 0x08002EF8: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_08002F74;
    }
    // 0x08002EF8: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x08002EFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F00: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002F04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002F08: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x08002F0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002F10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002F14: jalr        $t9
    // 0x08002F18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08002F1C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002F20: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E30) << 16);
    // 0x08002F24: ldc1        $f0, 0x6E30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E30));
    // 0x08002F28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002F2C: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002F30: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08002F34: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x08002F38: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002F3C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002F40: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002F44: addiu       $t0, $t8, 0x20
    ctx->r8 = ADD32(ctx->r24, 0X20);
    // 0x08002F48: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002F4C: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002F50: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08002F54: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002F58: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002F5C: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x08002F60: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002F64: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002F68: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002F6C: b           L_08003070
    // 0x08002F70: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08003070;
    // 0x08002F70: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08002F74:
    // 0x08002F74: beq         $t2, $zero, L_08003000
    if (ctx->r10 == 0) {
        // 0x08002F78: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08003000;
    }
    // 0x08002F78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002F7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F80: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002F84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002F88: bgez        $s2, L_08002F98
    if (SIGNED(ctx->r18) >= 0) {
        // 0x08002F8C: sra         $a1, $s2, 1
        ctx->r5 = S32(SIGNED(ctx->r18) >> 1);
            goto L_08002F98;
    }
    // 0x08002F8C: sra         $a1, $s2, 1
    ctx->r5 = S32(SIGNED(ctx->r18) >> 1);
    // 0x08002F90: addiu       $at, $s2, 0x1
    ctx->r1 = ADD32(ctx->r18, 0X1);
    // 0x08002F94: sra         $a1, $at, 1
    ctx->r5 = S32(SIGNED(ctx->r1) >> 1);
L_08002F98:
    // 0x08002F98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002F9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002FA0: jalr        $t9
    // 0x08002FA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002FA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08002FA8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002FAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E38) << 16);
    // 0x08002FB0: ldc1        $f0, 0x6E38($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E38));
    // 0x08002FB4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002FB8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002FBC: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08002FC0: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x08002FC4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002FC8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002FCC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002FD0: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x08002FD4: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002FD8: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002FDC: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08002FE0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002FE4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002FE8: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x08002FEC: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002FF0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002FF4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002FF8: b           L_08003070
    // 0x08002FFC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_08003070;
    // 0x08002FFC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08003000:
    // 0x08003000: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003004: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003008: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x0800300C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003010: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003014: jalr        $t9
    // 0x08003018: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003018: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x0800301C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08003020: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E40) << 16);
    // 0x08003024: ldc1        $f0, 0x6E40($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E40));
    // 0x08003028: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800302C: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08003030: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08003034: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x08003038: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800303C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08003040: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08003044: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x08003048: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x0800304C: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08003050: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08003054: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003058: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800305C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x08003060: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08003064: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08003068: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x0800306C: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08003070:
    // 0x08003070: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08003074: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003078: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800307C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08003080: bne         $v0, $zero, L_08003090
    if (ctx->r2 != 0) {
        // 0x08003084: sh          $t0, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r8;
            goto L_08003090;
    }
    // 0x08003084: sh          $t0, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r8;
    // 0x08003088: jalr        $t9
    // 0x0800308C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800308C: nop

    after_4:
L_08003090:
    // 0x08003090: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08003094: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003098: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x0800309C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x080030A0: jr          $ra
    // 0x080030A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x080030A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08004B18_6CCD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004B18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004B1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004B20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004B24: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004B28: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08004B2C: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x08004B30: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08004B34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004B38: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08004B3C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08004B40: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08004B44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B48: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004B4C: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x08004B50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004B58: jalr        $t9
    // 0x08004B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004B60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08004B64: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08004B68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08004B6C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004B70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004B74: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08004B78: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004B80: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08004B84: jalr        $t9
    // 0x08004B88: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B88: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_1:
    // 0x08004B8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B90: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08004B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004B9C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004BA0: jalr        $t9
    // 0x08004BA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004BA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x08004BA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BAC: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08004BB0: jalr        $t9
    // 0x08004BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08004BB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004BBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004BC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X4BE0) << 16);
    // 0x08004BC4: jalr        $t9
    // 0x08004BC8: addiu       $a0, $a0, 0x4BE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4BE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004BC8: addiu       $a0, $a0, 0x4BE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4BE0));
    after_4:
    // 0x08004BCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004BD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004BD8: jr          $ra
    // 0x08004BDC: nop

    TRACE_RETURN()
    return;
    // 0x08004BDC: nop

;}
RECOMP_FUNC void func_08002A40_6CAC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002A4C: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08002A50: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002A54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A58: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002A5C: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002A60: lw          $a2, 0xE4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XE4);
    // 0x08002A64: lw          $a1, 0xE0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XE0);
    // 0x08002A68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002A6C: jalr        $t9
    // 0x08002A70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x08002A74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002A78: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E18) << 16);
    // 0x08002A7C: ldc1        $f8, 0x6E18($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E18));
    // 0x08002A80: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x08002A84: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08002A88: lui         $at, 0x439C
    ctx->r1 = S32(0X439C << 16);
    // 0x08002A8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002A90: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002A94: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08002A98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002A9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002AA0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E20) << 16);
    // 0x08002AA4: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08002AA8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002AAC: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08002AB0: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x08002AB4: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08002AB8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08002ABC: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x08002AC0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08002AC4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08002AC8: nop

    // 0x08002ACC: bc1fl       L_08002AE0
    if (!c1cs) {
        // 0x08002AD0: lhu         $v0, 0x8A($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X8A);
            goto L_08002AE0;
    }
    goto skip_0;
    // 0x08002AD0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    skip_0:
    // 0x08002AD4: lwc1        $f8, 0x6E20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E20));
    // 0x08002AD8: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08002ADC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
L_08002AE0:
    // 0x08002AE0: slti        $v1, $v0, 0x1E
    ctx->r3 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x08002AE4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08002AE8: bne         $v1, $zero, L_08002B20
    if (ctx->r3 != 0) {
        // 0x08002AEC: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08002B20;
    }
    // 0x08002AEC: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08002AF0: jalr        $t9
    // 0x08002AF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08002AF8: beq         $v0, $zero, L_08002B10
    if (ctx->r2 == 0) {
        // 0x08002AFC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08002B10;
    }
    // 0x08002AFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08002B00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B04: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002B08: jalr        $t9
    // 0x08002B0C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002B0C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_2:
L_08002B10:
    // 0x08002B10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B14: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002B18: jalr        $t9
    // 0x08002B1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002B1C: nop

    after_3:
L_08002B20:
    // 0x08002B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B28: jr          $ra
    // 0x08002B2C: nop

    TRACE_RETURN()
    return;
    // 0x08002B2C: nop

;}
RECOMP_FUNC void func_08002C74_6CAE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002C78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002C7C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002C80: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002C84: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08002C88: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002C8C: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08002C90: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002C94: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002C98: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08002C9C: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x08002CA0: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x08002CA4: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08002CA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002CAC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002CB0: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x08002CB4: beq         $t8, $zero, L_08002CF8
    if (ctx->r24 == 0) {
        // 0x08002CB8: andi        $t1, $v1, 0x80
        ctx->r9 = ctx->r3 & 0X80;
            goto L_08002CF8;
    }
    // 0x08002CB8: andi        $t1, $v1, 0x80
    ctx->r9 = ctx->r3 & 0X80;
    // 0x08002CBC: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x08002CC0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x08002CC4: sb          $t9, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r25;
    // 0x08002CC8: sh          $v0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r2;
    // 0x08002CCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CD0: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002CD4: lbu         $a1, 0xD9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD9);
    // 0x08002CD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002CE0: jalr        $t9
    // 0x08002CE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002CE8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002CEC: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08002CF0: b           L_08002D7C
    // 0x08002CF4: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
        goto L_08002D7C;
    // 0x08002CF4: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
L_08002CF8:
    // 0x08002CF8: bne         $t1, $zero, L_08002D08
    if (ctx->r9 != 0) {
        // 0x08002CFC: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_08002D08;
    }
    // 0x08002CFC: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x08002D00: beq         $t2, $zero, L_08002D48
    if (ctx->r10 == 0) {
        // 0x08002D04: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_08002D48;
    }
    // 0x08002D04: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_08002D08:
    // 0x08002D08: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x08002D0C: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x08002D10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D14: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08002D18: sb          $t4, 0xD9($s0)
    MEM_B(0XD9, ctx->r16) = ctx->r12;
    // 0x08002D1C: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002D20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002D24: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    // 0x08002D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002D30: jalr        $t9
    // 0x08002D34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002D38: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002D3C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x08002D40: b           L_08002D7C
    // 0x08002D44: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
        goto L_08002D7C;
    // 0x08002D44: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
L_08002D48:
    // 0x08002D48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D4C: sh          $v0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r2;
    // 0x08002D50: sb          $v0, 0xD9($s0)
    MEM_B(0XD9, ctx->r16) = ctx->r2;
    // 0x08002D54: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002D58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D60: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x08002D64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002D68: jalr        $t9
    // 0x08002D6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002D70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002D74: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08002D78: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
L_08002D7C:
    // 0x08002D7C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D80: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D88: jalr        $t9
    // 0x08002D8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002D8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x08002D90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002D98: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002D9C: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x08002DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002DA4: addiu       $a1, $zero, 0x384
    ctx->r5 = ADD32(0, 0X384);
    // 0x08002DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002DAC: jalr        $t9
    // 0x08002DB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002DB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08002DB4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E24) << 16);
    // 0x08002DB8: lwc1        $f0, 0x6E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E24));
    // 0x08002DBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DC0: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08002DC4: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002DC8: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002DCC: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08002DD0: lw          $t8, 0xE8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE8);
    // 0x08002DD4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002DD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2E08) << 16);
    // 0x08002DDC: andi        $t0, $t8, 0x100
    ctx->r8 = ctx->r24 & 0X100;
    // 0x08002DE0: beq         $t0, $zero, L_08002DEC
    if (ctx->r8 == 0) {
        // 0x08002DE4: nop
    
            goto L_08002DEC;
    }
    // 0x08002DE4: nop

    // 0x08002DE8: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
L_08002DEC:
    // 0x08002DEC: jalr        $t9
    // 0x08002DF0: addiu       $a0, $a0, 0x2E08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2E08));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002DF0: addiu       $a0, $a0, 0x2E08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2E08));
    after_5:
    // 0x08002DF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002DF8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002DFC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002E00: jr          $ra
    // 0x08002E04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002E04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000730_6C8940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000738: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x0800073C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000740: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08000744: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000748: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x0800074C: nop

    // 0x08000750: bc1fl       L_08000774
    if (!c1cs) {
        // 0x08000754: lbu         $t7, 0x7C($a1)
        ctx->r15 = MEM_BU(ctx->r5, 0X7C);
            goto L_08000774;
    }
    goto skip_0;
    // 0x08000754: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    skip_0:
    // 0x08000758: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800075C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000760: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000764: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000768: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800076C: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
    // 0x08000770: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
L_08000774:
    // 0x08000774: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000778: beql        $t8, $zero, L_080007C0
    if (ctx->r24 == 0) {
        // 0x0800077C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080007C0;
    }
    goto skip_1;
    // 0x0800077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000780: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08000784: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    // 0x08000788: slti        $v1, $v0, 0xF
    ctx->r3 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x0800078C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x08000790: bne         $v1, $zero, L_080007BC
    if (ctx->r3 != 0) {
        // 0x08000794: sh          $t9, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r25;
            goto L_080007BC;
    }
    // 0x08000794: sh          $t9, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r25;
    // 0x08000798: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800079C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080007A0: jalr        $t9
    // 0x080007A4: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007A4: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    after_0:
    // 0x080007A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X7CC) << 16);
    // 0x080007B4: jalr        $t9
    // 0x080007B8: addiu       $a0, $a0, 0x7CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X7CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007B8: addiu       $a0, $a0, 0x7CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X7CC));
    after_1:
L_080007BC:
    // 0x080007BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080007C0:
    // 0x080007C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007C4: jr          $ra
    // 0x080007C8: nop

    TRACE_RETURN()
    return;
    // 0x080007C8: nop

;}
RECOMP_FUNC void func_08001A24_6C9C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001A28: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001A30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001A34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001A38: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001A3C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001A40: jalr        $t9
    // 0x08001A44: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A44: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001A48: bne         $v0, $zero, L_08001B08
    if (ctx->r2 != 0) {
        // 0x08001A4C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001B08;
    }
    // 0x08001A4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001A50: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x08001A54: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001A58: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001A5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001A60: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08001A64: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08001A68: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x08001A6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001A70: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001A74: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08001A78: bc1fl       L_08001AB4
    if (!c1cs) {
        // 0x08001A7C: lw          $t8, 0x60($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X60);
            goto L_08001AB4;
    }
    goto skip_0;
    // 0x08001A7C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    skip_0:
    // 0x08001A80: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001A84: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001A88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001A8C: nop

    // 0x08001A90: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x08001A94: nop

    // 0x08001A98: bc1fl       L_08001B0C
    if (!c1cs) {
        // 0x08001A9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001B0C;
    }
    goto skip_1;
    // 0x08001A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001AA0: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x08001AA4: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x08001AA8: b           L_08001B08
    // 0x08001AAC: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
        goto L_08001B08;
    // 0x08001AAC: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x08001AB0: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
L_08001AB4:
    // 0x08001AB4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001AB8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001ABC: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001AC0: jalr        $t9
    // 0x08001AC4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AC4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    after_1:
    // 0x08001AC8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001ACC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001AD0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AD4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001AD8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001ADC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001AE0: addiu       $a0, $zero, 0x271
    ctx->r4 = ADD32(0, 0X271);
    // 0x08001AE4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08001AE8: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x08001AEC: jalr        $t9
    // 0x08001AF0: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001AF0: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x08001AF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1B1C) << 16);
    // 0x08001B00: jalr        $t9
    // 0x08001B04: addiu       $a0, $a0, 0x1B1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1B1C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B04: addiu       $a0, $a0, 0x1B1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1B1C));
    after_3:
L_08001B08:
    // 0x08001B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001B0C:
    // 0x08001B0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001B10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001B14: jr          $ra
    // 0x08001B18: nop

    TRACE_RETURN()
    return;
    // 0x08001B18: nop

;}
RECOMP_FUNC void func_08005824_6CDA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005828: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800582C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005834: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005838: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800583C: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x08005840: jalr        $t9
    // 0x08005844: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005844: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x08005848: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800584C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005850: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08005854: lui         $a2, 0x43A2
    ctx->r6 = S32(0X43A2 << 16);
    // 0x08005858: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x0800585C: lui         $a1, 0xC3A7
    ctx->r5 = S32(0XC3A7 << 16);
    // 0x08005860: lui         $a3, 0x431D
    ctx->r7 = S32(0X431D << 16);
    // 0x08005864: jalr        $t9
    // 0x08005868: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005868: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    after_1:
    // 0x0800586C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08005870: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08005874: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08005878: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x0800587C: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x08005880: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005884: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005888: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800588C: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x08005890: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x08005894: jalr        $t9
    // 0x08005898: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005898: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    after_2:
    // 0x0800589C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080058A0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080058A4: jalr        $t9
    // 0x080058A8: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080058A8: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    after_3:
    // 0x080058AC: beq         $v0, $zero, L_080058E4
    if (ctx->r2 == 0) {
        // 0x080058B0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080058E4;
    }
    // 0x080058B0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080058B4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080058B8: jalr        $t9
    // 0x080058BC: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080058BC: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    after_4:
    // 0x080058C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080058C4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080058C8: jalr        $t9
    // 0x080058CC: addiu       $a0, $zero, 0x29E
    ctx->r4 = ADD32(0, 0X29E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080058CC: addiu       $a0, $zero, 0x29E
    ctx->r4 = ADD32(0, 0X29E);
    after_5:
    // 0x080058D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080058D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080058D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X58F4) << 16);
    // 0x080058DC: jalr        $t9
    // 0x080058E0: addiu       $a0, $a0, 0x58F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X58F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080058E0: addiu       $a0, $a0, 0x58F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X58F4));
    after_6:
L_080058E4:
    // 0x080058E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080058E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080058EC: jr          $ra
    // 0x080058F0: nop

    TRACE_RETURN()
    return;
    // 0x080058F0: nop

;}
RECOMP_FUNC void func_08005F34_6CE144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005F34: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08005F38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005F3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08005F40: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08005F44: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08005F48: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08005F4C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08005F50: jalr        $t9
    // 0x08005F54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005F54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08005F58: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x08005F5C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08005F60: addiu       $s0, $s0, -0x33D0
    ctx->r16 = ADD32(ctx->r16, -0X33D0);
    // 0x08005F64: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08005F68: jalr        $t9
    // 0x08005F6C: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005F6C: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    after_1:
    // 0x08005F70: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08005F74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08005F78: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08005F7C: lwc1        $f8, 0x140($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X140);
    // 0x08005F80: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08005F84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005F88: lwc1        $f16, 0x144($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X144);
    // 0x08005F8C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08005F90: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08005F94: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08005F98: lhu         $a0, 0x14C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14C);
    // 0x08005F9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08005FA0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x08005FA4: jalr        $t9
    // 0x08005FA8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005FA8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x08005FAC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08005FB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005FB4: lwc1        $f10, 0x148($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X148);
    // 0x08005FB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005FBC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08005FC0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08005FC4: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08005FC8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08005FCC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x08005FD0: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08005FD4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x08005FD8: jalr        $t9
    // 0x08005FDC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005FDC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x08005FE0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x08005FE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005FE8: lwc1        $f16, 0x144($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X144);
    // 0x08005FEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005FF0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08005FF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08005FF8: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08005FFC: lw          $a1, 0x140($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X140);
    // 0x08006000: lw          $a3, 0x148($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X148);
    // 0x08006004: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08006008: jalr        $t9
    // 0x0800600C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800600C: nop

    after_4:
    // 0x08006010: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08006014: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08006018: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800601C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08006020: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x08006024: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006028: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800602C: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x08006030: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08006034: jalr        $t9
    // 0x08006038: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006038: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    after_5:
    // 0x0800603C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08006040: lwc1        $f8, 0x140($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X140);
    // 0x08006044: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08006048: lwc1        $f16, 0x148($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X148);
    // 0x0800604C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08006050: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08006054: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08006058: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800605C: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08006060: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x08006064: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08006068: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x0800606C: jalr        $t9
    // 0x08006070: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08006070: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_6:
    // 0x08006074: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006078: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x0800607C: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x08006080: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x08006084: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x08006088: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x0800608C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08006090: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08006094: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08006098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800609C: jalr        $t9
    // 0x080060A0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080060A0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x080060A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080060A8: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080060AC: lw          $a0, 0xE0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE0);
    // 0x080060B0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x080060B4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080060B8: jalr        $t9
    // 0x080060BC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080060BC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x080060C0: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080060C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X6100) << 16);
    // 0x080060C8: addiu       $a0, $a0, 0x6100
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X6100));
    // 0x080060CC: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x080060D0: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x080060D4: bne         $v1, $zero, L_080060EC
    if (ctx->r3 != 0) {
        // 0x080060D8: sh          $t1, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r9;
            goto L_080060EC;
    }
    // 0x080060D8: sh          $t1, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r9;
    // 0x080060DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080060E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080060E4: jalr        $t9
    // 0x080060E8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080060E8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    after_9:
L_080060EC:
    // 0x080060EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080060F0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080060F4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080060F8: jr          $ra
    // 0x080060FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080060FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08000278_6C8488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000278: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6D88) << 16);
    // 0x0800027C: lwc1        $f4, 0x6D88($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6D88));
    // 0x08000280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000284: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800028C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000290: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000294: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000298: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x0800029C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080002A0: swc1        $f6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f6.u32l;
    // 0x080002A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080002A8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x080002AC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080002B0: jalr        $t9
    // 0x080002B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002B4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x080002B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002BC: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080002C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080002C4: jalr        $t9
    // 0x080002C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x080002CC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x080002D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002D4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x080002D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2FC) << 16);
    // 0x080002E0: addiu       $a0, $a0, 0x2FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2FC));
    // 0x080002E4: jalr        $t9
    // 0x080002E8: sh          $t7, 0xE8($t8)
    MEM_H(0XE8, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002E8: sh          $t7, 0xE8($t8)
    MEM_H(0XE8, ctx->r24) = ctx->r15;
    after_2:
    // 0x080002EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002F4: jr          $ra
    // 0x080002F8: nop

    TRACE_RETURN()
    return;
    // 0x080002F8: nop

;}
RECOMP_FUNC void func_08000104_6C8314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000104: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800010C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000110: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000114: lbu         $t6, 0x94($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X94);
    // 0x08000118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800011C: beql        $t6, $zero, L_08000268
    if (ctx->r14 == 0) {
        // 0x08000120: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000268;
    }
    goto skip_0;
    // 0x08000120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x08000124: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x08000128: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x0800012C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000130: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08000134: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000138: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800013C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08000140: nop

    // 0x08000144: bc1tl       L_08000268
    if (c1cs) {
        // 0x08000148: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000268;
    }
    goto skip_1;
    // 0x08000148: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x0800014C: jalr        $t9
    // 0x08000150: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000150: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x08000154: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6D84) << 16);
    // 0x08000158: lwc1        $f0, 0x6D84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6D84));
    // 0x0800015C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000160: lui         $t8, 0x60
    ctx->r24 = S32(0X60 << 16);
    // 0x08000164: ori         $t8, $t8, 0x2E1
    ctx->r24 = ctx->r24 | 0X2E1;
    // 0x08000168: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0800016C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000170: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
    // 0x08000174: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x08000178: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800017C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08000180: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000184: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000188: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800018C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000194: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000198: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800019C: jalr        $t9
    // 0x080001A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080001A4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080001A8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080001AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001B0: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x080001B4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080001B8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X3810) << 16);
    // 0x080001BC: addiu       $a1, $a1, 0x3810
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X3810));
    // 0x080001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001C4: jalr        $t9
    // 0x080001C8: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001C8: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    after_2:
    // 0x080001CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001D8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x080001DC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080001E0: jalr        $t9
    // 0x080001E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x080001E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001EC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080001F0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X3E64) << 16);
    // 0x080001F4: addiu       $a1, $a1, 0x3E64
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X3E64));
    // 0x080001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001FC: jalr        $t9
    // 0x08000200: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000200: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_4:
    // 0x08000204: beq         $v0, $zero, L_08000234
    if (ctx->r2 == 0) {
        // 0x08000208: sw          $v0, 0xDC($s0)
        MEM_W(0XDC, ctx->r16) = ctx->r2;
            goto L_08000234;
    }
    // 0x08000208: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x0800020C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000210: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x08000214: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000218: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x0800021C: jalr        $t9
    // 0x08000220: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000220: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_5:
    // 0x08000224: lw          $t4, 0xDC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XDC);
    // 0x08000228: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x0800022C: lw          $t5, 0xDC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XDC);
    // 0x08000230: sw          $s0, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->r16;
L_08000234:
    // 0x08000234: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000238: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000240: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x08000244: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x08000248: jalr        $t9
    // 0x0800024C: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800024C: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    after_6:
    // 0x08000250: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000254: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000258: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X278) << 16);
    // 0x0800025C: jalr        $t9
    // 0x08000260: addiu       $a0, $a0, 0x278
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X278));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000260: addiu       $a0, $a0, 0x278
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X278));
    after_7:
    // 0x08000264: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000268:
    // 0x08000268: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800026C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000270: jr          $ra
    // 0x08000274: nop

    TRACE_RETURN()
    return;
    // 0x08000274: nop

;}
RECOMP_FUNC void func_08001730_6C9940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001734: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800173C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001740: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001748: jalr        $t9
    // 0x0800174C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800174C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001750: bne         $v0, $zero, L_080017A8
    if (ctx->r2 != 0) {
        // 0x08001754: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_080017A8;
    }
    // 0x08001754: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08001758: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x0800175C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001760: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001764: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08001768: beq         $t8, $zero, L_080017A8
    if (ctx->r24 == 0) {
        // 0x0800176C: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_080017A8;
    }
    // 0x0800176C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001770: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001774: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001778: jalr        $t9
    // 0x0800177C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800177C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x08001780: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001784: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800178C: jalr        $t9
    // 0x08001790: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001790: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x08001794: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001798: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800179C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X17B8) << 16);
    // 0x080017A0: jalr        $t9
    // 0x080017A4: addiu       $a0, $a0, 0x17B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X17B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080017A4: addiu       $a0, $a0, 0x17B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X17B8));
    after_3:
L_080017A8:
    // 0x080017A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017B0: jr          $ra
    // 0x080017B4: nop

    TRACE_RETURN()
    return;
    // 0x080017B4: nop

;}
RECOMP_FUNC void func_08003F78_6CC188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003F7C: jr          $ra
    // 0x08003F80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003F80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001540_6C9750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001548: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800154C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001550: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001554: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001558: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800155C: jalr        $t9
    // 0x08001560: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001560: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001564: bne         $v0, $zero, L_08001604
    if (ctx->r2 != 0) {
        // 0x08001568: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08001604;
    }
    // 0x08001568: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800156C: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x08001570: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DE8) << 16);
    // 0x08001574: ldc1        $f8, 0x6DE8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DE8));
    // 0x08001578: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800157C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08001580: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08001584: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001588: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800158C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001590: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08001594: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x08001598: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800159C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080015A0: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x080015A4: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080015A8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x080015AC: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x080015B0: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x080015B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080015B8: nop

    // 0x080015BC: bc1fl       L_08001608
    if (!c1cs) {
        // 0x080015C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001608;
    }
    goto skip_0;
    // 0x080015C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080015C4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080015C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080015D0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080015D4: jalr        $t9
    // 0x080015D8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015D8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    after_1:
    // 0x080015DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015E0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015E8: jalr        $t9
    // 0x080015EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
    // 0x080015F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1618) << 16);
    // 0x080015FC: jalr        $t9
    // 0x08001600: addiu       $a0, $a0, 0x1618
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1618));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001600: addiu       $a0, $a0, 0x1618
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1618));
    after_3:
L_08001604:
    // 0x08001604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001608:
    // 0x08001608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800160C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001610: jr          $ra
    // 0x08001614: nop

    TRACE_RETURN()
    return;
    // 0x08001614: nop

;}
RECOMP_FUNC void func_080004BC_6C86CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004C4: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x080004C8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6D98) << 16);
    // 0x080004CC: ldc1        $f8, 0x6D98($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6D98));
    // 0x080004D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080004D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080004D8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x080004DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E0: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x080004E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004E8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x080004EC: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x080004F0: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080004F4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x080004F8: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x080004FC: lwc1        $f6, 0xD8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x08000500: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08000504: nop

    // 0x08000508: bc1fl       L_08000530
    if (!c1cs) {
        // 0x0800050C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000530;
    }
    goto skip_0;
    // 0x0800050C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000510: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x08000514: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000518: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X53C) << 16);
    // 0x0800051C: addiu       $a0, $a0, 0x53C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X53C));
    // 0x08000520: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x08000524: jalr        $t9
    // 0x08000528: sb          $t8, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000528: sb          $t8, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r24;
    after_0:
    // 0x0800052C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000530:
    // 0x08000530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000534: jr          $ra
    // 0x08000538: nop

    TRACE_RETURN()
    return;
    // 0x08000538: nop

;}
RECOMP_FUNC void func_080008BC_6C8ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080008C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080008C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080008C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080008CC: lhu         $v0, 0xE8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE8);
    // 0x080008D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080008D4: andi        $a1, $zero, 0xFFFF
    ctx->r5 = 0 & 0XFFFF;
    // 0x080008D8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x080008DC: blez        $v0, L_08000910
    if (SIGNED(ctx->r2) <= 0) {
        // 0x080008E0: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_08000910;
    }
    // 0x080008E0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080008E4: sh          $v0, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r2;
    // 0x080008E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008EC: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080008F0: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x080008F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x080008F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080008FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000900: jalr        $t9
    // 0x08000904: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000904: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08000908: b           L_08000960
    // 0x0800090C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000960;
    // 0x0800090C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000910:
    // 0x08000910: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000914: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x08000918: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x0800091C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08000920: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000928: jalr        $t9
    // 0x0800092C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800092C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08000930: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000934: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000938: sb          $zero, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = 0;
    // 0x0800093C: lw          $t8, 0x184($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X184);
    // 0x08000940: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000944: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000948: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
    // 0x0800094C: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x08000950: sw          $t0, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r8;
    // 0x08000954: jalr        $t9
    // 0x08000958: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000958: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    after_2:
    // 0x0800095C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000960:
    // 0x08000960: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000968: jr          $ra
    // 0x0800096C: nop

    TRACE_RETURN()
    return;
    // 0x0800096C: nop

;}
RECOMP_FUNC void func_080018B4_6C9AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080018BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080018C4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080018C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080018CC: jalr        $t9
    // 0x080018D0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018D0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080018D4: bne         $v0, $zero, L_0800194C
    if (ctx->r2 != 0) {
        // 0x080018D8: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_0800194C;
    }
    // 0x080018D8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080018DC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080018E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080018E4: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x080018E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018EC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080018F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080018F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080018F8: bc1tl       L_08001950
    if (c1cs) {
        // 0x080018FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001950;
    }
    goto skip_0;
    // 0x080018FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001900: sh          $zero, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = 0;
    // 0x08001904: jalr        $t9
    // 0x08001908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800190C: bne         $v0, $zero, L_0800194C
    if (ctx->r2 != 0) {
        // 0x08001910: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_0800194C;
    }
    // 0x08001910: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001914: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001918: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x0800191C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001920: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001924: sh          $t6, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r14;
    // 0x08001928: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800192C: addiu       $a0, $zero, 0x271
    ctx->r4 = ADD32(0, 0X271);
    // 0x08001930: jalr        $t9
    // 0x08001934: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001934: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_2:
    // 0x08001938: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800193C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001940: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X195C) << 16);
    // 0x08001944: jalr        $t9
    // 0x08001948: addiu       $a0, $a0, 0x195C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X195C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001948: addiu       $a0, $a0, 0x195C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X195C));
    after_3:
L_0800194C:
    // 0x0800194C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001950:
    // 0x08001950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001954: jr          $ra
    // 0x08001958: nop

    TRACE_RETURN()
    return;
    // 0x08001958: nop

;}
RECOMP_FUNC void func_080037C0_6CB9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080037C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080037C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080037CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080037D0: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x080037D4: jalr        $t9
    // 0x080037D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x080037DC: bne         $v0, $zero, L_080037F4
    if (ctx->r2 != 0) {
        // 0x080037E0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X3804) << 16);
            goto L_080037F4;
    }
    // 0x080037E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X3804) << 16);
    // 0x080037E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080037EC: jalr        $t9
    // 0x080037F0: addiu       $a0, $a0, 0x3804
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3804));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080037F0: addiu       $a0, $a0, 0x3804
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3804));
    after_1:
L_080037F4:
    // 0x080037F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080037F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080037FC: jr          $ra
    // 0x08003800: nop

    TRACE_RETURN()
    return;
    // 0x08003800: nop

;}
RECOMP_FUNC void func_08001CC8_6C9ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001CD0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001CD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001CDC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001CE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001CE4: jalr        $t9
    // 0x08001CE8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001CE8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001CEC: bne         $v0, $zero, L_08001E38
    if (ctx->r2 != 0) {
        // 0x08001CF0: addiu       $a0, $zero, 0x64
        ctx->r4 = ADD32(0, 0X64);
            goto L_08001E38;
    }
    // 0x08001CF0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08001CF4: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x08001CF8: lui         $at, 0xC32E
    ctx->r1 = S32(0XC32E << 16);
    // 0x08001CFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001D00: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08001D08: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001D0C: nop

    // 0x08001D10: bc1f        L_08001D20
    if (!c1cs) {
        // 0x08001D14: nop
    
            goto L_08001D20;
    }
    // 0x08001D14: nop

    // 0x08001D18: b           L_08001D20
    // 0x08001D1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_08001D20;
    // 0x08001D1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_08001D20:
    // 0x08001D20: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D24: addiu       $t7, $zero, -0xAE
    ctx->r15 = ADD32(0, -0XAE);
    // 0x08001D28: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x08001D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08001D34: mflo        $t6
    ctx->r14 = lo;
    // 0x08001D38: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x08001D3C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x08001D40: nop

    // 0x08001D44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001D48: swc1        $f10, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f10.u32l;
    // 0x08001D4C: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001D50: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08001D54: nop

    // 0x08001D58: bc1f        L_08001D68
    if (!c1cs) {
        // 0x08001D5C: nop
    
            goto L_08001D68;
    }
    // 0x08001D5C: nop

    // 0x08001D60: b           L_08001D68
    // 0x08001D64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_08001D68;
    // 0x08001D64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_08001D68:
    // 0x08001D68: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D6C: addiu       $t1, $zero, -0x3
    ctx->r9 = ADD32(0, -0X3);
    // 0x08001D70: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001D74: lwc1        $f8, 0xE0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x08001D78: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001D7C: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08001D80: mflo        $t0
    ctx->r8 = lo;
    // 0x08001D84: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x08001D88: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x08001D8C: nop

    // 0x08001D90: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001D94: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x08001D98: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001D9C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001DA0: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08001DA4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001DA8: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001DAC: nop

    // 0x08001DB0: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08001DB4: jalr        $t9
    // 0x08001DB8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001DB8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_1:
    // 0x08001DBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DC0: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08001DC4: swc1        $f0, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f0.u32l;
    // 0x08001DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DCC: jalr        $t9
    // 0x08001DD0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001DD0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_2:
    // 0x08001DD4: beq         $v0, $zero, L_08001E28
    if (ctx->r2 == 0) {
        // 0x08001DD8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X2380) << 16);
            goto L_08001E28;
    }
    // 0x08001DD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2380) << 16);
    // 0x08001DDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x08001DE0: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x08001DE4: lwc1        $f10, 0xE4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08001DE8: lwc1        $f2, 0x8($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08001DEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001DF0: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x08001DF4: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x08001DF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1E4C) << 16);
    // 0x08001DFC: addiu       $a0, $a0, 0x1E4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1E4C));
    // 0x08001E00: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x08001E04: swc1        $f8, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f8.u32l;
    // 0x08001E08: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x08001E0C: lwc1        $f0, 0x10($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08001E10: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x08001E14: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08001E18: jalr        $t9
    // 0x08001E1C: swc1        $f18, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E1C: swc1        $f18, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x08001E20: b           L_08001E3C
    // 0x08001E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001E3C;
    // 0x08001E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001E28:
    // 0x08001E28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E2C: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x08001E30: jalr        $t9
    // 0x08001E34: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001E34: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    after_4:
L_08001E38:
    // 0x08001E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001E3C:
    // 0x08001E3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001E44: jr          $ra
    // 0x08001E48: nop

    TRACE_RETURN()
    return;
    // 0x08001E48: nop

;}
RECOMP_FUNC void func_08000970_6C8B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000974: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800097C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000980: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000984: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000988: jalr        $t9
    // 0x0800098C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800098C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000990: bne         $v0, $zero, L_080009FC
    if (ctx->r2 != 0) {
        // 0x08000994: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080009FC;
    }
    // 0x08000994: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000998: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800099C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009A4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080009A8: jalr        $t9
    // 0x080009AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080009B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009B4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080009B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080009BC: jalr        $t9
    // 0x080009C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080009C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080009C8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080009CC: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080009D0: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    // 0x080009D4: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x080009D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009E0: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x080009E4: beq         $t7, $zero, L_080009F4
    if (ctx->r15 == 0) {
        // 0x080009E8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0XA0C) << 16);
            goto L_080009F4;
    }
    // 0x080009E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XA0C) << 16);
    // 0x080009EC: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x080009F0: sw          $t8, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r24;
L_080009F4:
    // 0x080009F4: jalr        $t9
    // 0x080009F8: addiu       $a0, $a0, 0xA0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XA0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080009F8: addiu       $a0, $a0, 0xA0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XA0C));
    after_3:
L_080009FC:
    // 0x080009FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A04: jr          $ra
    // 0x08000A08: nop

    TRACE_RETURN()
    return;
    // 0x08000A08: nop

;}
RECOMP_FUNC void func_08004FC8_6CD1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004FC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004FCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004FD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004FD4: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x08004FD8: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x08004FDC: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x08004FE0: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x08004FE4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08004FE8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08004FEC: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08004FF0: lhu         $t0, 0xD6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD6);
    // 0x08004FF4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004FF8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004FFC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x08005000: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08005004: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x08005008: lhu         $t4, 0xD8($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD8);
    // 0x0800500C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08005010: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08005014: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x08005018: lw          $t8, 0xDC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XDC);
    // 0x0800501C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08005020: lhu         $a3, 0xDA($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0XDA);
    // 0x08005024: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08005028: addiu       $t9, $a3, 0x80
    ctx->r25 = ADD32(ctx->r7, 0X80);
    // 0x0800502C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08005030: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005034: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08005038: jalr        $t9
    // 0x0800503C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800503C: nop

    after_0:
    // 0x08005040: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005044: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08005048: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800504C: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08005050: jalr        $t9
    // 0x08005054: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005054: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    after_1:
    // 0x08005058: beq         $v0, $zero, L_080050E4
    if (ctx->r2 == 0) {
        // 0x0800505C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_080050E4;
    }
    // 0x0800505C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08005060: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005064: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08005068: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800506C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08005070: jalr        $t9
    // 0x08005074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08005078: beq         $v0, $zero, L_080050D4
    if (ctx->r2 == 0) {
        // 0x0800507C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080050D4;
    }
    // 0x0800507C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08005080: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005084: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08005088: jalr        $t9
    // 0x0800508C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800508C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x08005090: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08005094: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08005098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800509C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080050A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080050A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6EA8) << 16);
    // 0x080050A8: ldc1        $f18, 0x6EA8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6EA8));
    // 0x080050AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080050B0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080050B4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080050B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080050BC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080050C0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080050C4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080050C8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080050CC: jalr        $t9
    // 0x080050D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080050D0: nop

    after_4:
L_080050D4:
    // 0x080050D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080050D8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080050DC: jalr        $t9
    // 0x080050E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080050E0: nop

    after_5:
L_080050E4:
    // 0x080050E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080050E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080050EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080050F0: jr          $ra
    // 0x080050F4: nop

    TRACE_RETURN()
    return;
    // 0x080050F4: nop

;}
RECOMP_FUNC void func_080056A0_6CD8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080056A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080056A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080056A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080056AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080056B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080056B4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080056B8: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x080056BC: lui         $a1, 0xC360
    ctx->r5 = S32(0XC360 << 16);
    // 0x080056C0: lui         $a2, 0x43A0
    ctx->r6 = S32(0X43A0 << 16);
    // 0x080056C4: jalr        $t9
    // 0x080056C8: lui         $a3, 0x42C2
    ctx->r7 = S32(0X42C2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080056C8: lui         $a3, 0x42C2
    ctx->r7 = S32(0X42C2 << 16);
    after_0:
    // 0x080056CC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080056D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080056D4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080056D8: lui         $a2, 0x43A7
    ctx->r6 = S32(0X43A7 << 16);
    // 0x080056DC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080056E0: lui         $a1, 0xC3A7
    ctx->r5 = S32(0XC3A7 << 16);
    // 0x080056E4: lui         $a3, 0x431D
    ctx->r7 = S32(0X431D << 16);
    // 0x080056E8: jalr        $t9
    // 0x080056EC: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080056EC: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    after_1:
    // 0x080056F0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080056F4: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x080056F8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080056FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08005700: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x08005704: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005708: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800570C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005710: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x08005714: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x08005718: jalr        $t9
    // 0x0800571C: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800571C: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    after_2:
    // 0x08005720: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005724: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005728: jalr        $t9
    // 0x0800572C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800572C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_3:
    // 0x08005730: beq         $v0, $zero, L_08005758
    if (ctx->r2 == 0) {
        // 0x08005734: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08005758;
    }
    // 0x08005734: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005738: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x0800573C: jalr        $t9
    // 0x08005740: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005740: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_4:
    // 0x08005744: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005748: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800574C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5768) << 16);
    // 0x08005750: jalr        $t9
    // 0x08005754: addiu       $a0, $a0, 0x5768
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5768));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005754: addiu       $a0, $a0, 0x5768
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5768));
    after_5:
L_08005758:
    // 0x08005758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800575C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005760: jr          $ra
    // 0x08005764: nop

    TRACE_RETURN()
    return;
    // 0x08005764: nop

;}
RECOMP_FUNC void func_08004DAC_6CCFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004DAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004DB0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08004DB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004DB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08004DBC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08004DC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08004DC4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08004DC8: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x08004DCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004DD0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004DD4: lhu         $a3, 0xDA($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0XDA);
    // 0x08004DD8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08004DDC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004DE0: addiu       $t7, $a3, 0x80
    ctx->r15 = ADD32(ctx->r7, 0X80);
    // 0x08004DE4: jalr        $t9
    // 0x08004DE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004DE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x08004DEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08004DF0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x08004DF4: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08004DF8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004DFC: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08004E00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004E04: addiu       $t2, $zero, 0x7E
    ctx->r10 = ADD32(0, 0X7E);
    // 0x08004E08: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004E0C: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    // 0x08004E10: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x08004E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004E18: jalr        $t9
    // 0x08004E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08004E20: lui         $t3, 0x80
    ctx->r11 = S32(0X80 << 16);
    // 0x08004E24: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08004E28: ori         $t3, $t3, 0x220
    ctx->r11 = ctx->r11 | 0X220;
    // 0x08004E2C: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x08004E30: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x08004E34: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x08004E38: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    // 0x08004E3C: jalr        $s1
    // 0x08004E40: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x08004E40: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_2:
    // 0x08004E44: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004E48: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004E4C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08004E50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004E54: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08004E58: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08004E5C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08004E60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08004E64: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x08004E68: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08004E6C: sb          $t5, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r13;
    // 0x08004E70: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x08004E74: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08004E78: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x08004E7C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08004E80: jalr        $s1
    // 0x08004E84: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x08004E84: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x08004E88: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x08004E8C: sh          $t6, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r14;
    // 0x08004E90: jalr        $s1
    // 0x08004E94: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x08004E94: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_4:
    // 0x08004E98: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x08004E9C: sh          $t7, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r15;
    // 0x08004EA0: jalr        $s1
    // 0x08004EA4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x08004EA4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x08004EA8: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x08004EAC: sh          $t8, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r24;
    // 0x08004EB0: jalr        $s1
    // 0x08004EB4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x08004EB4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x08004EB8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08004EBC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08004EC0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004EC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004EC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004ECC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x08004ED0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004ED4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004ED8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08004EDC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004EE0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08004EE4: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x08004EE8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08004EEC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08004EF0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08004EF4: jalr        $s1
    // 0x08004EF8: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x08004EF8: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    after_7:
    // 0x08004EFC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08004F00: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08004F04: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08004F08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08004F0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08004F10: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x08004F14: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08004F18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08004F1C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x08004F20: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08004F24: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08004F28: div.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f20.d);
    // 0x08004F2C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08004F30: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x08004F34: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08004F38: jalr        $s1
    // 0x08004F3C: swc1        $f4, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08004F3C: swc1        $f4, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f4.u32l;
    after_8:
    // 0x08004F40: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08004F44: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08004F48: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004F4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004F50: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004F54: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x08004F58: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004F5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004F60: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x08004F64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004F68: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x08004F6C: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x08004F70: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08004F74: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08004F78: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08004F7C: jalr        $s1
    // 0x08004F80: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_9;
    // 0x08004F80: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    after_9:
    // 0x08004F84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004F88: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004F90: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x08004F94: jalr        $t9
    // 0x08004F98: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08004F98: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_10:
    // 0x08004F9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004FA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004FA4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X4FC8) << 16);
    // 0x08004FA8: jalr        $t9
    // 0x08004FAC: addiu       $a0, $a0, 0x4FC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4FC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08004FAC: addiu       $a0, $a0, 0x4FC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4FC8));
    after_11:
    // 0x08004FB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08004FB4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08004FB8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08004FBC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08004FC0: jr          $ra
    // 0x08004FC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08004FC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080022BC_6CA4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080022BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080022C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080022C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080022C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080022CC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080022D0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x080022D4: jalr        $t9
    // 0x080022D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080022DC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080022E0: bne         $v0, $zero, L_08002370
    if (ctx->r2 != 0) {
        // 0x080022E4: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08002370;
    }
    // 0x080022E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080022E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080022EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080022F0: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x080022F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080022F8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080022FC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x08002300: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x08002304: bc1fl       L_08002324
    if (!c1cs) {
        // 0x08002308: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_08002324;
    }
    goto skip_0;
    // 0x08002308: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    skip_0:
    // 0x0800230C: jalr        $t9
    // 0x08002310: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002310: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x08002314: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08002318: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800231C: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08002320: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_08002324:
    // 0x08002324: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002328: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800232C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002330: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x08002334: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2380) << 16);
    // 0x08002338: bc1fl       L_0800235C
    if (!c1cs) {
        // 0x0800233C: lbu         $t7, 0x7C($a1)
        ctx->r15 = MEM_BU(ctx->r5, 0X7C);
            goto L_0800235C;
    }
    goto skip_1;
    // 0x0800233C: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    skip_1:
    // 0x08002340: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002344: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002348: swc1        $f0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f0.u32l;
    // 0x0800234C: swc1        $f0, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f0.u32l;
    // 0x08002350: swc1        $f0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->f0.u32l;
    // 0x08002354: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
    // 0x08002358: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
L_0800235C:
    // 0x0800235C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08002360: beql        $t8, $zero, L_08002374
    if (ctx->r24 == 0) {
        // 0x08002364: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002374;
    }
    goto skip_2;
    // 0x08002364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x08002368: jalr        $t9
    // 0x0800236C: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800236C: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    after_2:
L_08002370:
    // 0x08002370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002374:
    // 0x08002374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002378: jr          $ra
    // 0x0800237C: nop

    TRACE_RETURN()
    return;
    // 0x0800237C: nop

;}
RECOMP_FUNC void func_08000E98_6C90A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000EA0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000EA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000EAC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000EB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000EB4: jalr        $t9
    // 0x08000EB8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EB8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000EBC: bne         $v0, $zero, L_08000F5C
    if (ctx->r2 != 0) {
        // 0x08000EC0: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08000F5C;
    }
    // 0x08000EC0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000EC4: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x08000EC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DC0) << 16);
    // 0x08000ECC: ldc1        $f8, 0x6DC0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DC0));
    // 0x08000ED0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000ED4: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000ED8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08000EDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000EE0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EE8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08000EEC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08000EF0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000EF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08000EF8: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x08000EFC: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08000F00: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08000F04: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x08000F08: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x08000F0C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08000F10: nop

    // 0x08000F14: bc1fl       L_08000F60
    if (!c1cs) {
        // 0x08000F18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000F60;
    }
    goto skip_0;
    // 0x08000F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000F1C: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000F20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F24: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F28: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000F2C: jalr        $t9
    // 0x08000F30: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F30: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    after_1:
    // 0x08000F34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F38: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F40: jalr        $t9
    // 0x08000F44: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F44: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_2:
    // 0x08000F48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XF70) << 16);
    // 0x08000F54: jalr        $t9
    // 0x08000F58: addiu       $a0, $a0, 0xF70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XF70));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F58: addiu       $a0, $a0, 0xF70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XF70));
    after_3:
L_08000F5C:
    // 0x08000F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000F60:
    // 0x08000F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F68: jr          $ra
    // 0x08000F6C: nop

    TRACE_RETURN()
    return;
    // 0x08000F6C: nop

;}
RECOMP_FUNC void func_080017B8_6C99C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080017C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080017C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080017C8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080017CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080017D0: jalr        $t9
    // 0x080017D4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017D4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080017D8: bne         $v0, $zero, L_08001800
    if (ctx->r2 != 0) {
        // 0x080017DC: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_08001800;
    }
    // 0x080017DC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080017E0: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x080017E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017EC: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x080017F0: beq         $t8, $zero, L_08001800
    if (ctx->r24 == 0) {
        // 0x080017F4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
            goto L_08001800;
    }
    // 0x080017F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
    // 0x080017F8: jalr        $t9
    // 0x080017FC: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017FC: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    after_1:
L_08001800:
    // 0x08001800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001808: jr          $ra
    // 0x0800180C: nop

    TRACE_RETURN()
    return;
    // 0x0800180C: nop

;}
RECOMP_FUNC void func_08000A0C_6C8C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000A10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000A14: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000A20: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000A24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000A28: jalr        $t9
    // 0x08000A2C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A2C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000A30: bne         $v0, $zero, L_08000A9C
    if (ctx->r2 != 0) {
        // 0x08000A34: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_08000A9C;
    }
    // 0x08000A34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000A38: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A44: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x08000A48: beq         $t8, $zero, L_08000A5C
    if (ctx->r24 == 0) {
        // 0x08000A4C: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08000A5C;
    }
    // 0x08000A4C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000A50: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000A54: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000A58: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
L_08000A5C:
    // 0x08000A5C: lhu         $t2, 0x8A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000A60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000A64: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08000A68: bne         $t2, $at, L_08000A9C
    if (ctx->r10 != ctx->r1) {
        // 0x08000A6C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000A9C;
    }
    // 0x08000A6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A70: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x08000A74: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000A78: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A7C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08000A80: jalr        $t9
    // 0x08000A84: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A84: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    after_1:
    // 0x08000A88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XAB0) << 16);
    // 0x08000A94: jalr        $t9
    // 0x08000A98: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XAB0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A98: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XAB0));
    after_2:
L_08000A9C:
    // 0x08000A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000AA8: jr          $ra
    // 0x08000AAC: nop

    TRACE_RETURN()
    return;
    // 0x08000AAC: nop

;}
RECOMP_FUNC void func_0800195C_6C9B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800195C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001960: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800196C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001970: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08001974: jalr        $t9
    // 0x08001978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800197C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001980: bne         $v0, $zero, L_08001A14
    if (ctx->r2 != 0) {
        // 0x08001984: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08001A14;
    }
    // 0x08001984: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001988: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800198C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001990: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08001994: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001998: nop

    // 0x0800199C: bc1fl       L_080019B8
    if (!c1cs) {
        // 0x080019A0: lhu         $t8, 0x7E($a1)
        ctx->r24 = MEM_HU(ctx->r5, 0X7E);
            goto L_080019B8;
    }
    goto skip_0;
    // 0x080019A0: lhu         $t8, 0x7E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X7E);
    skip_0:
    // 0x080019A4: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080019A8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x080019AC: b           L_08001A14
    // 0x080019B0: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
        goto L_08001A14;
    // 0x080019B0: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x080019B4: lhu         $t8, 0x7E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X7E);
L_080019B8:
    // 0x080019B8: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080019BC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080019C0: bgez        $t8, L_080019D0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x080019C4: sra         $t0, $t8, 1
        ctx->r8 = S32(SIGNED(ctx->r24) >> 1);
            goto L_080019D0;
    }
    // 0x080019C4: sra         $t0, $t8, 1
    ctx->r8 = S32(SIGNED(ctx->r24) >> 1);
    // 0x080019C8: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x080019CC: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_080019D0:
    // 0x080019D0: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x080019D4: bne         $t1, $zero, L_08001A14
    if (ctx->r9 != 0) {
        // 0x080019D8: sh          $t0, 0x7E($a1)
        MEM_H(0X7E, ctx->r5) = ctx->r8;
            goto L_08001A14;
    }
    // 0x080019D8: sh          $t0, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r8;
    // 0x080019DC: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x080019E0: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080019E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080019E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080019EC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080019F0: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x080019F4: sw          $t3, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r11;
    // 0x080019F8: jalr        $t9
    // 0x080019FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08001A00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1A24) << 16);
    // 0x08001A0C: jalr        $t9
    // 0x08001A10: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1A24));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A10: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1A24));
    after_2:
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
RECOMP_FUNC void func_080048E4_6CCAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080048E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080048E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080048EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080048F0: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x080048F4: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x080048F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080048FC: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08004900: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08004904: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08004908: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800490C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08004910: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08004914: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08004918: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800491C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08004920: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08004924: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08004928: nop

    // 0x0800492C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08004930: jalr        $t9
    // 0x08004934: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004934: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x08004938: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0800493C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E88) << 16);
    // 0x08004940: lwc1        $f8, 0xD4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08004944: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x08004948: lw          $t0, 0x84($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X84);
    // 0x0800494C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08004950: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08004954: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08004958: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    // 0x0800495C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x08004960: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08004964: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x08004968: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x0800496C: lwc1        $f6, 0xD4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08004970: lw          $t1, 0xDC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XDC);
    // 0x08004974: lw          $t3, 0x84($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X84);
    // 0x08004978: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x0800497C: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x08004980: lwc1        $f4, 0x10($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08004984: lwc1        $f2, 0x10($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08004988: sub.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x0800498C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08004990: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08004994: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08004998: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800499C: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x080049A0: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x080049A4: ldc1        $f8, 0x6E88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E88));
    // 0x080049A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080049AC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080049B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080049B4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080049B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080049BC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080049C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080049C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080049C8: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x080049CC: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080049D0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080049D4: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x080049D8: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x080049DC: lbu         $t4, 0xD0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XD0);
    // 0x080049E0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x080049E4: bgez        $t4, L_080049FC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x080049E8: cvt.d.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
            goto L_080049FC;
    }
    // 0x080049E8: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x080049EC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080049F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080049F4: nop

    // 0x080049F8: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
L_080049FC:
    // 0x080049FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E90) << 16);
    // 0x08004A00: ldc1        $f8, 0x6E90($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E90));
    // 0x08004A04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08004A08: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08004A0C: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x08004A10: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x08004A14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08004A18: nop

    // 0x08004A1C: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x08004A20: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08004A24: nop

    // 0x08004A28: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08004A2C: beql        $t6, $zero, L_08004A80
    if (ctx->r14 == 0) {
        // 0x08004A30: mfc1        $t6, $f16
        ctx->r14 = (int32_t)ctx->f16.u32l;
            goto L_08004A80;
    }
    goto skip_0;
    // 0x08004A30: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x08004A34: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08004A38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08004A3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08004A40: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x08004A44: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08004A48: nop

    // 0x08004A4C: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x08004A50: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08004A54: nop

    // 0x08004A58: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08004A5C: bne         $t6, $zero, L_08004A74
    if (ctx->r14 != 0) {
        // 0x08004A60: nop
    
            goto L_08004A74;
    }
    // 0x08004A60: nop

    // 0x08004A64: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x08004A68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08004A6C: b           L_08004A8C
    // 0x08004A70: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08004A8C;
    // 0x08004A70: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08004A74:
    // 0x08004A74: b           L_08004A8C
    // 0x08004A78: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08004A8C;
    // 0x08004A78: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08004A7C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
L_08004A80:
    // 0x08004A80: nop

    // 0x08004A84: bltz        $t6, L_08004A74
    if (SIGNED(ctx->r14) < 0) {
        // 0x08004A88: nop
    
            goto L_08004A74;
    }
    // 0x08004A88: nop

L_08004A8C:
    // 0x08004A8C: lbu         $t9, 0xDA($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XDA);
    // 0x08004A90: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    // 0x08004A94: lbu         $a2, 0xD8($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XD8);
    // 0x08004A98: lbu         $a3, 0xD9($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XD9);
    // 0x08004A9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08004AA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AA4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x08004AA8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004AAC: jalr        $t9
    // 0x08004AB0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004AB0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_1:
    // 0x08004AB4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08004AB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004ABC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08004AC0: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004AC4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004AC8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x08004ACC: bgez        $t7, L_08004AE4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08004AD0: cvt.d.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.d = CVT_D_W(ctx->f18.u32l);
            goto L_08004AE4;
    }
    // 0x08004AD0: cvt.d.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.d = CVT_D_W(ctx->f18.u32l);
    // 0x08004AD4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08004AD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004ADC: nop

    // 0x08004AE0: add.d       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f6.d + ctx->f4.d;
L_08004AE4:
    // 0x08004AE4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E98) << 16);
    // 0x08004AE8: ldc1        $f8, 0x6E98($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E98));
    // 0x08004AEC: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x08004AF0: nop

    // 0x08004AF4: bc1fl       L_08004B08
    if (!c1cs) {
        // 0x08004AF8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08004B08;
    }
    goto skip_1;
    // 0x08004AF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08004AFC: jalr        $t9
    // 0x08004B00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004B00: nop

    after_2:
    // 0x08004B04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08004B08:
    // 0x08004B08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004B10: jr          $ra
    // 0x08004B14: nop

    TRACE_RETURN()
    return;
    // 0x08004B14: nop

;}
RECOMP_FUNC void func_08000BD8_6C8DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000BE0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000BE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BEC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000BF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000BF4: jalr        $t9
    // 0x08000BF8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BF8: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000BFC: bne         $v0, $zero, L_08000CB8
    if (ctx->r2 != 0) {
        // 0x08000C00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000CB8;
    }
    // 0x08000C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C08: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000C0C: jalr        $t9
    // 0x08000C10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x08000C14: bne         $v0, $zero, L_08000CB8
    if (ctx->r2 != 0) {
        // 0x08000C18: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08000CB8;
    }
    // 0x08000C18: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000C1C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08000C20: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08000C24: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000C28: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000C2C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000C30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000C34: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000C38: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08000C3C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000C40: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000C44: nop

    // 0x08000C48: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000C4C: jalr        $t9
    // 0x08000C50: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C50: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_2:
    // 0x08000C54: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C5C: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000C60: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000C64: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x08000C68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C6C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C70: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000C74: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
    // 0x08000C78: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08000C84: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000C88: jalr        $t9
    // 0x08000C8C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C8C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_3:
    // 0x08000C90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C94: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C9C: jalr        $t9
    // 0x08000CA0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CA0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_4:
    // 0x08000CA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XCCC) << 16);
    // 0x08000CB0: jalr        $t9
    // 0x08000CB4: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XCCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000CB4: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XCCC));
    after_5:
L_08000CB8:
    // 0x08000CB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CC4: jr          $ra
    // 0x08000CC8: nop

    TRACE_RETURN()
    return;
    // 0x08000CC8: nop

;}
RECOMP_FUNC void func_08001E4C_6CA05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001E50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001E54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001E58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001E5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001E60: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001E64: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001E68: jalr        $t9
    // 0x08001E6C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E6C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001E70: bne         $v0, $zero, L_08001EF4
    if (ctx->r2 != 0) {
        // 0x08001E74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001EF4;
    }
    // 0x08001E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E78: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x08001E7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E80: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08001E84: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x08001E88: lw          $a3, 0xE4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE4);
    // 0x08001E8C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x08001E90: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x08001E94: jalr        $t9
    // 0x08001E98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x08001E9C: bne         $v0, $zero, L_08001EF4
    if (ctx->r2 != 0) {
        // 0x08001EA0: lui         $at, 0x100
        ctx->r1 = S32(0X100 << 16);
            goto L_08001EF4;
    }
    // 0x08001EA0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08001EA4: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x08001EA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001EAC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001EB0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001EB4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08001EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001EBC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08001EC0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001EC4: jalr        $t9
    // 0x08001EC8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001EC8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x08001ECC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001ED0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001ED8: jalr        $t9
    // 0x08001EDC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001EDC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_3:
    // 0x08001EE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001EE4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001EE8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1F08) << 16);
    // 0x08001EEC: jalr        $t9
    // 0x08001EF0: addiu       $a0, $a0, 0x1F08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1F08));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001EF0: addiu       $a0, $a0, 0x1F08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1F08));
    after_4:
L_08001EF4:
    // 0x08001EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001EF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001EFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001F00: jr          $ra
    // 0x08001F04: nop

    TRACE_RETURN()
    return;
    // 0x08001F04: nop

;}
RECOMP_FUNC void func_080050F8_6CD308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080050F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080050FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08005100: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800510C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005110: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08005114: jalr        $t9
    // 0x08005118: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005118: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x0800511C: beq         $v0, $zero, L_080053A4
    if (ctx->r2 == 0) {
        // 0x08005120: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080053A4;
    }
    // 0x08005120: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005124: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08005128: jalr        $t9
    // 0x0800512C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800512C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_1:
    // 0x08005130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005134: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08005138: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800513C: jalr        $t9
    // 0x08005140: sw          $t6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005140: sw          $t6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r14;
    after_2:
    // 0x08005144: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005148: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x0800514C: jalr        $t9
    // 0x08005150: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005150: nop

    after_3:
    // 0x08005154: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005158: addiu       $t9, $t9, 0x1C04
    ctx->r25 = ADD32(ctx->r25, 0X1C04);
    // 0x0800515C: jalr        $t9
    // 0x08005160: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005160: nop

    after_4:
    // 0x08005164: lui         $at, 0xC32E
    ctx->r1 = S32(0XC32E << 16);
    // 0x08005168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800516C: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x08005170: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x08005174: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005178: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x0800517C: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x08005180: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08005184: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x08005188: swc1        $f6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f6.u32l;
    // 0x0800518C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08005190: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005194: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08005198: sh          $zero, 0x94($t0)
    MEM_H(0X94, ctx->r8) = 0;
    // 0x0800519C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x080051A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080051A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080051A8: lw          $t2, 0x5C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X5C);
    // 0x080051AC: jalr        $t9
    // 0x080051B0: sh          $zero, 0x36($t2)
    MEM_H(0X36, ctx->r10) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080051B0: sh          $zero, 0x36($t2)
    MEM_H(0X36, ctx->r10) = 0;
    after_5:
    // 0x080051B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080051B8: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080051BC: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x080051C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080051C4: jalr        $t9
    // 0x080051C8: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080051C8: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_6:
    // 0x080051CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080051D0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080051D4: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080051D8: lui         $a1, 0xC31A
    ctx->r5 = S32(0XC31A << 16);
    // 0x080051DC: lui         $a2, 0x43D2
    ctx->r6 = S32(0X43D2 << 16);
    // 0x080051E0: jalr        $t9
    // 0x080051E4: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080051E4: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    after_7:
    // 0x080051E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080051EC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080051F0: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080051F4: lui         $a1, 0xC32E
    ctx->r5 = S32(0XC32E << 16);
    // 0x080051F8: lui         $a2, 0x439B
    ctx->r6 = S32(0X439B << 16);
    // 0x080051FC: jalr        $t9
    // 0x08005200: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08005200: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_8:
    // 0x08005204: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08005208: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x0800520C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08005210: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005214: lw          $a1, 0x2C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X2C);
    // 0x08005218: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800521C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005220: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x08005224: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x08005228: jalr        $t9
    // 0x0800522C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800522C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_9:
    // 0x08005230: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005234: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08005238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800523C: jalr        $t9
    // 0x08005240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08005240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x08005244: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005248: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x0800524C: sw          $v0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r2;
    // 0x08005250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08005254: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08005258: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800525C: jalr        $t9
    // 0x08005260: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08005260: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_11:
    // 0x08005264: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005268: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x0800526C: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x08005270: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08005274: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x08005278: jalr        $t9
    // 0x0800527C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800527C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_12:
    // 0x08005280: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x08005284: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005288: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800528C: lwc1        $f10, 0x140($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X140);
    // 0x08005290: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08005294: lwc1        $f4, 0x148($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X148);
    // 0x08005298: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800529C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080052A0: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080052A4: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x080052A8: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x080052AC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x080052B0: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x080052B4: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x080052B8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x080052BC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x080052C0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x080052C4: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x080052C8: jalr        $t9
    // 0x080052CC: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080052CC: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_13:
    // 0x080052D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080052D4: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x080052D8: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x080052DC: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x080052E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x080052E4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x080052E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080052EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080052F0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x080052F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080052F8: jalr        $t9
    // 0x080052FC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080052FC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_14:
    // 0x08005300: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005304: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08005308: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x0800530C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08005310: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08005314: jalr        $t9
    // 0x08005318: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08005318: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x0800531C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005320: addiu       $t0, $zero, 0x36
    ctx->r8 = ADD32(0, 0X36);
    // 0x08005324: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08005328: sb          $t0, 0xD7($s0)
    MEM_B(0XD7, ctx->r16) = ctx->r8;
    // 0x0800532C: jalr        $t9
    // 0x08005330: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08005330: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_16:
    // 0x08005334: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08005338: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800533C: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x08005340: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x08005344: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x08005348: lbu         $t1, 0xD7($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD7);
    // 0x0800534C: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    // 0x08005350: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x08005354: sh          $t1, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r9;
    // 0x08005358: lbu         $t3, 0xD7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD7);
    // 0x0800535C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005360: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08005364: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x08005368: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
    // 0x0800536C: jalr        $t9
    // 0x08005370: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08005370: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_17:
    // 0x08005374: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08005378: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x0800537C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005380: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08005384: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005388: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x0800538C: sb          $t6, -0x75E($at)
    MEM_B(-0X75E, ctx->r1) = ctx->r14;
    // 0x08005390: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005394: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X53B8) << 16);
    // 0x08005398: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800539C: jalr        $t9
    // 0x080053A0: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X53B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080053A0: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X53B8));
    after_18:
L_080053A4:
    // 0x080053A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080053A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080053AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080053B0: jr          $ra
    // 0x080053B4: nop

    TRACE_RETURN()
    return;
    // 0x080053B4: nop

;}
RECOMP_FUNC void func_08001C1C_6C9E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C20: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C2C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001C30: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08001C34: jalr        $t9
    // 0x08001C38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001C3C: bne         $v0, $zero, L_08001CB8
    if (ctx->r2 != 0) {
        // 0x08001C40: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08001CB8;
    }
    // 0x08001C40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C44: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001C48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C50: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001C54: bne         $t7, $zero, L_08001CB0
    if (ctx->r15 != 0) {
        // 0x08001C58: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
            goto L_08001CB0;
    }
    // 0x08001C58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X970) << 16);
    // 0x08001C5C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08001C60: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001C64: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001C68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001C6C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08001C70: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001C74: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x08001C78: nop

    // 0x08001C7C: bc1fl       L_08001CBC
    if (!c1cs) {
        // 0x08001C80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001CBC;
    }
    goto skip_0;
    // 0x08001C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001C84: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001C88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001C8C: nop

    // 0x08001C90: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x08001C94: nop

    // 0x08001C98: bc1fl       L_08001CBC
    if (!c1cs) {
        // 0x08001C9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001CBC;
    }
    goto skip_1;
    // 0x08001C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08001CA0: lhu         $t8, 0x16($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X16);
    // 0x08001CA4: addiu       $t0, $t8, 0x4
    ctx->r8 = ADD32(ctx->r24, 0X4);
    // 0x08001CA8: b           L_08001CB8
    // 0x08001CAC: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
        goto L_08001CB8;
    // 0x08001CAC: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
L_08001CB0:
    // 0x08001CB0: jalr        $t9
    // 0x08001CB4: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CB4: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X970));
    after_1:
L_08001CB8:
    // 0x08001CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001CBC:
    // 0x08001CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001CC0: jr          $ra
    // 0x08001CC4: nop

    TRACE_RETURN()
    return;
    // 0x08001CC4: nop

;}
RECOMP_FUNC void func_08000AB0_6C8CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AB4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000ABC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000AC0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000AC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AC8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08000ACC: jalr        $t9
    // 0x08000AD0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AD0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000AD4: bne         $v0, $zero, L_08000BC8
    if (ctx->r2 != 0) {
        // 0x08000AD8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08000BC8;
    }
    // 0x08000AD8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000ADC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AE0: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000AE4: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000AE8: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000AEC: beql        $t8, $zero, L_08000BCC
    if (ctx->r24 == 0) {
        // 0x08000AF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000BCC;
    }
    goto skip_0;
    // 0x08000AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000AF4: lbu         $v1, 0xD0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XD0);
    // 0x08000AF8: lw          $t0, 0x60($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X60);
    // 0x08000AFC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000B00: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x08000B04: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x08000B08: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000B0C: sw          $t1, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r9;
    // 0x08000B10: bne         $v0, $zero, L_08000B20
    if (ctx->r2 != 0) {
        // 0x08000B14: sb          $t2, 0xD0($a2)
        MEM_B(0XD0, ctx->r6) = ctx->r10;
            goto L_08000B20;
    }
    // 0x08000B14: sb          $t2, 0xD0($a2)
    MEM_B(0XD0, ctx->r6) = ctx->r10;
    // 0x08000B18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000B1C: sb          $t3, 0xD0($a2)
    MEM_B(0XD0, ctx->r6) = ctx->r11;
L_08000B20:
    // 0x08000B20: lbu         $v0, 0xD0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XD0);
    // 0x08000B24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000B28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XBD8) << 16);
    // 0x08000B2C: beq         $v0, $at, L_08000B54
    if (ctx->r2 == ctx->r1) {
        // 0x08000B30: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000B54;
    }
    // 0x08000B30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000B38: beq         $v0, $at, L_08000BB4
    if (ctx->r2 == ctx->r1) {
        // 0x08000B3C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X1CC8) << 16);
            goto L_08000BB4;
    }
    // 0x08000B3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1CC8) << 16);
    // 0x08000B40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000B44: beq         $v0, $at, L_08000B68
    if (ctx->r2 == ctx->r1) {
        // 0x08000B48: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_08000B68;
    }
    // 0x08000B48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000B4C: b           L_08000BCC
    // 0x08000B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000BCC;
    // 0x08000B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000B54:
    // 0x08000B54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B58: jalr        $t9
    // 0x08000B5C: addiu       $a0, $a0, 0xBD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XBD8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B5C: addiu       $a0, $a0, 0xBD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XBD8));
    after_1:
    // 0x08000B60: b           L_08000BCC
    // 0x08000B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000BCC;
    // 0x08000B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000B68:
    // 0x08000B68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B6C: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000B70: jalr        $t9
    // 0x08000B74: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B74: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_2:
    // 0x08000B78: beq         $v0, $zero, L_08000B9C
    if (ctx->r2 == 0) {
        // 0x08000B7C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X1260) << 16);
            goto L_08000B9C;
    }
    // 0x08000B7C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1260) << 16);
    // 0x08000B80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1810) << 16);
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: addiu       $a0, $a0, 0x1810
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1810));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B90: addiu       $a0, $a0, 0x1810
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1810));
    after_3:
    // 0x08000B94: b           L_08000BCC
    // 0x08000B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000BCC;
    // 0x08000B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000B9C:
    // 0x08000B9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BA4: jalr        $t9
    // 0x08000BA8: addiu       $a0, $a0, 0x1260
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1260));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BA8: addiu       $a0, $a0, 0x1260
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1260));
    after_4:
    // 0x08000BAC: b           L_08000BCC
    // 0x08000BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000BCC;
    // 0x08000BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000BB4:
    // 0x08000BB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BBC: sb          $zero, 0xD2($a2)
    MEM_B(0XD2, ctx->r6) = 0;
    // 0x08000BC0: jalr        $t9
    // 0x08000BC4: addiu       $a0, $a0, 0x1CC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1CC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000BC4: addiu       $a0, $a0, 0x1CC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1CC8));
    after_5:
L_08000BC8:
    // 0x08000BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000BCC:
    // 0x08000BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000BD0: jr          $ra
    // 0x08000BD4: nop

    TRACE_RETURN()
    return;
    // 0x08000BD4: nop

;}
RECOMP_FUNC void func_0800063C_6C884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800063C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000644: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000648: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x0800064C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000650: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08000654: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000658: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x0800065C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x08000660: addiu       $a0, $zero, 0x2A2
    ctx->r4 = ADD32(0, 0X2A2);
    // 0x08000664: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x08000668: bc1fl       L_08000690
    if (!c1cs) {
        // 0x0800066C: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_08000690;
    }
    goto skip_0;
    // 0x0800066C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x08000670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000674: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08000678: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x0800067C: nop

    // 0x08000680: bc1fl       L_08000690
    if (!c1cs) {
        // 0x08000684: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_08000690;
    }
    goto skip_1;
    // 0x08000684: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x08000688: sb          $t6, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r14;
    // 0x0800068C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_08000690:
    // 0x08000690: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    // 0x08000694: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000698: lwc1        $f8, 0xD8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x0800069C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DA0) << 16);
    // 0x080006A0: ldc1        $f16, 0x6DA0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DA0));
    // 0x080006A4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080006A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080006AC: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x080006B0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080006B4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080006B8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x080006BC: swc1        $f0, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f0.u32l;
    // 0x080006C0: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080006C4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x080006C8: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x080006CC: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080006D0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x080006D4: nop

    // 0x080006D8: bc1fl       L_08000724
    if (!c1cs) {
        // 0x080006DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000724;
    }
    goto skip_2;
    // 0x080006DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x080006E0: lbu         $t8, 0x7C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X7C);
    // 0x080006E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080006E8: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x080006EC: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x080006F0: sb          $t9, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r25;
    // 0x080006F4: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x080006F8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080006FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000700: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000704: jalr        $t9
    // 0x08000708: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000708: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    after_0:
    // 0x0800070C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000710: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x08000714: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X730) << 16);
    // 0x08000718: jalr        $t9
    // 0x0800071C: addiu       $a0, $a0, 0x730
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X730));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800071C: addiu       $a0, $a0, 0x730
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X730));
    after_1:
    // 0x08000720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000724:
    // 0x08000724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000728: jr          $ra
    // 0x0800072C: nop

    TRACE_RETURN()
    return;
    // 0x0800072C: nop

;}
RECOMP_FUNC void func_08001810_6C9A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001814: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800181C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001820: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001824: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001828: jalr        $t9
    // 0x0800182C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800182C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001830: bne         $v0, $zero, L_080018A4
    if (ctx->r2 != 0) {
        // 0x08001834: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080018A4;
    }
    // 0x08001834: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001838: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x0800183C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08001840: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001844: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001848: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x0800184C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001850: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x08001854: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001858: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800185C: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x08001860: beq         $t8, $zero, L_08001870
    if (ctx->r24 == 0) {
        // 0x08001864: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08001870;
    }
    // 0x08001864: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001868: ori         $t0, $v0, 0x40
    ctx->r8 = ctx->r2 | 0X40;
    // 0x0800186C: sw          $t0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r8;
L_08001870:
    // 0x08001870: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001874: jalr        $t9
    // 0x08001878: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001878: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x0800187C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001880: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001884: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001888: jalr        $t9
    // 0x0800188C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800188C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x08001890: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X18B4) << 16);
    // 0x0800189C: jalr        $t9
    // 0x080018A0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X18B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080018A0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X18B4));
    after_3:
L_080018A4:
    // 0x080018A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018AC: jr          $ra
    // 0x080018B0: nop

    TRACE_RETURN()
    return;
    // 0x080018B0: nop

;}
RECOMP_FUNC void func_08000828_6C8A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000828: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800082C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000830: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000834: lhu         $v0, 0xE8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE8);
    // 0x08000838: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x0800083C: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x08000840: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x08000844: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08000848: beq         $at, $zero, L_0800087C
    if (ctx->r1 == 0) {
        // 0x0800084C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_0800087C;
    }
    // 0x0800084C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000854: sh          $v0, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r2;
    // 0x08000858: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x0800085C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08000860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08000864: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x08000868: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800086C: jalr        $t9
    // 0x08000870: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000870: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08000874: b           L_080008B0
    // 0x08000878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080008B0;
    // 0x08000878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800087C:
    // 0x0800087C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000880: sh          $t7, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r15;
    // 0x08000884: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08000888: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x0800088C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000890: jalr        $t9
    // 0x08000894: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000894: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08000898: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800089C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X8BC) << 16);
    // 0x080008A4: jalr        $t9
    // 0x080008A8: addiu       $a0, $a0, 0x8BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X8BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008A8: addiu       $a0, $a0, 0x8BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X8BC));
    after_2:
    // 0x080008AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080008B0:
    // 0x080008B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080008B4: jr          $ra
    // 0x080008B8: nop

    TRACE_RETURN()
    return;
    // 0x080008B8: nop

;}
RECOMP_FUNC void func_08005994_6CDBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800599C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080059A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080059A4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080059A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080059AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080059B0: slti        $v1, $v0, 0x50
    ctx->r3 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x080059B4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080059B8: bne         $v1, $zero, L_08005A8C
    if (ctx->r3 != 0) {
        // 0x080059BC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005A8C;
    }
    // 0x080059BC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080059C0: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080059C4: jalr        $t9
    // 0x080059C8: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080059C8: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    after_0:
    // 0x080059CC: lbu         $t7, 0xD7($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD7);
    // 0x080059D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080059D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080059D8: addiu       $t8, $t7, -0x2
    ctx->r24 = ADD32(ctx->r15, -0X2);
    // 0x080059DC: sb          $t8, 0xD7($s0)
    MEM_B(0XD7, ctx->r16) = ctx->r24;
    // 0x080059E0: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x080059E4: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x080059E8: lbu         $t0, 0xD7($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD7);
    // 0x080059EC: addiu       $t1, $zero, 0x140
    ctx->r9 = ADD32(0, 0X140);
    // 0x080059F0: sh          $t1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r9;
    // 0x080059F4: sh          $t0, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r8;
    // 0x080059F8: lbu         $t2, 0xD7($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD7);
    // 0x080059FC: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x08005A00: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08005A04: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x08005A08: sh          $t4, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r12;
    // 0x08005A0C: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08005A10: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08005A14: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005A18: lw          $a1, 0x2C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X2C);
    // 0x08005A1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005A20: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005A24: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x08005A28: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x08005A2C: jalr        $t9
    // 0x08005A30: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005A30: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_1:
    // 0x08005A34: lbu         $t7, 0xD7($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD7);
    // 0x08005A38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08005A3C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08005A40: bne         $t7, $zero, L_08005A8C
    if (ctx->r15 != 0) {
        // 0x08005A44: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08005A8C;
    }
    // 0x08005A44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005A48: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08005A4C: jalr        $t9
    // 0x08005A50: sb          $t8, -0x32D0($at)
    MEM_B(-0X32D0, ctx->r1) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005A50: sb          $t8, -0x32D0($at)
    MEM_B(-0X32D0, ctx->r1) = ctx->r24;
    after_2:
    // 0x08005A54: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08005A58: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08005A5C: sb          $t0, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r8;
    // 0x08005A60: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x08005A64: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x08005A68: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005A6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005A70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08005A74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005A78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5AA0) << 16);
    // 0x08005A7C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x08005A80: sb          $t1, -0x75E($at)
    MEM_B(-0X75E, ctx->r1) = ctx->r9;
    // 0x08005A84: jalr        $t9
    // 0x08005A88: addiu       $a0, $a0, 0x5AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5AA0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005A88: addiu       $a0, $a0, 0x5AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5AA0));
    after_3:
L_08005A8C:
    // 0x08005A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005A98: jr          $ra
    // 0x08005A9C: nop

    TRACE_RETURN()
    return;
    // 0x08005A9C: nop

;}
RECOMP_FUNC void func_080003E0_6C85F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080003E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080003E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080003EC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080003F0: lhu         $t6, 0xE8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE8);
    // 0x080003F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080003F8: andi        $a1, $zero, 0xFFFF
    ctx->r5 = 0 & 0XFFFF;
    // 0x080003FC: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x08000400: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000404: slti        $at, $t8, 0xFF
    ctx->r1 = SIGNED(ctx->r24) < 0XFF ? 1 : 0;
    // 0x08000408: sh          $t7, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r15;
    // 0x0800040C: beq         $at, $zero, L_08000438
    if (ctx->r1 == 0) {
        // 0x08000410: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_08000438;
    }
    // 0x08000410: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08000414: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000418: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x0800041C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x08000420: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000424: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000428: jalr        $t9
    // 0x0800042C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800042C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x08000430: b           L_080004AC
    // 0x08000434: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080004AC;
    // 0x08000434: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000438:
    // 0x08000438: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800043C: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x08000440: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08000444: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800044C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000450: jalr        $t9
    // 0x08000454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000458: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x0800045C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000460: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000464: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000468: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800046C: swc1        $f4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f4.u32l;
    // 0x08000470: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08000474: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000478: addiu       $a0, $zero, 0x2A1
    ctx->r4 = ADD32(0, 0X2A1);
    // 0x0800047C: jalr        $t9
    // 0x08000480: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000480: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_2:
    // 0x08000484: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000488: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800048C: jalr        $t9
    // 0x08000490: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000490: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_3:
    // 0x08000494: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000498: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800049C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X4BC) << 16);
    // 0x080004A0: jalr        $t9
    // 0x080004A4: addiu       $a0, $a0, 0x4BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004A4: addiu       $a0, $a0, 0x4BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X4BC));
    after_4:
    // 0x080004A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080004AC:
    // 0x080004AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080004B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080004B4: jr          $ra
    // 0x080004B8: nop

    TRACE_RETURN()
    return;
    // 0x080004B8: nop

;}
RECOMP_FUNC void func_08002380_6CA590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002384: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800238C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002390: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002398: jalr        $t9
    // 0x0800239C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800239C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080023A0: bne         $v0, $zero, L_08002400
    if (ctx->r2 != 0) {
        // 0x080023A4: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_08002400;
    }
    // 0x080023A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080023A8: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x080023AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080023B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080023B4: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x080023B8: beq         $t8, $zero, L_08002400
    if (ctx->r24 == 0) {
        // 0x080023BC: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08002400;
    }
    // 0x080023BC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080023C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080023C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080023C8: jalr        $t9
    // 0x080023CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x080023D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023D4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080023D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080023DC: jalr        $t9
    // 0x080023E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080023E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x080023E4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080023E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2410) << 16);
    // 0x080023F4: addiu       $a0, $a0, 0x2410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2410));
    // 0x080023F8: jalr        $t9
    // 0x080023FC: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080023FC: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    after_3:
L_08002400:
    // 0x08002400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002408: jr          $ra
    // 0x0800240C: nop

    TRACE_RETURN()
    return;
    // 0x0800240C: nop

;}
RECOMP_FUNC void func_080002FC_6C850C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000300: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000308: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800030C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000310: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000314: jalr        $t9
    // 0x08000318: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000318: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_0:
    // 0x0800031C: beql        $v0, $zero, L_080003D4
    if (ctx->r2 == 0) {
        // 0x08000320: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080003D4;
    }
    goto skip_0;
    // 0x08000320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000324: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000328: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6D90) << 16);
    // 0x0800032C: ldc1        $f2, 0x6D90($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6D90));
    // 0x08000330: lwc1        $f4, 0xD8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XD8);
    // 0x08000334: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000338: lhu         $a0, -0x33D0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X33D0);
    // 0x0800033C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08000340: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000344: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x08000348: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x0800034C: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    // 0x08000350: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08000354: bc1f        L_080003A0
    if (!c1cs) {
        // 0x08000358: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080003A0;
    }
    // 0x08000358: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800035C: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x08000360: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000364: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000368: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x0800036C: jalr        $t9
    // 0x08000370: swc1        $f8, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000370: swc1        $f8, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f8.u32l;
    after_1:
    // 0x08000374: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x08000378: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x0800037C: lwc1        $f10, 0xD8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XD8);
    // 0x08000380: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08000384: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08000388: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x0800038C: nop

    // 0x08000390: addiu       $t3, $t2, 0x400
    ctx->r11 = ADD32(ctx->r10, 0X400);
    // 0x08000394: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x08000398: b           L_080003D0
    // 0x0800039C: sh          $t4, 0x18($t5)
    MEM_H(0X18, ctx->r13) = ctx->r12;
        goto L_080003D0;
    // 0x0800039C: sh          $t4, 0x18($t5)
    MEM_H(0X18, ctx->r13) = ctx->r12;
L_080003A0:
    // 0x080003A0: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x080003A4: jalr        $t9
    // 0x080003A8: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003A8: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    after_2:
    // 0x080003AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080003B0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080003B4: jalr        $t9
    // 0x080003B8: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003B8: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_3:
    // 0x080003BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X3E0) << 16);
    // 0x080003C8: jalr        $t9
    // 0x080003CC: addiu       $a0, $a0, 0x3E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080003CC: addiu       $a0, $a0, 0x3E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3E0));
    after_4:
L_080003D0:
    // 0x080003D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003D4:
    // 0x080003D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003D8: jr          $ra
    // 0x080003DC: nop

    TRACE_RETURN()
    return;
    // 0x080003DC: nop

;}
RECOMP_FUNC void func_080053B8_6CD5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080053B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080053BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080053C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080053C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080053C8: lui         $at, 0xC32E
    ctx->r1 = S32(0XC32E << 16);
    // 0x080053CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080053D0: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x080053D4: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x080053D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080053DC: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x080053E0: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x080053E4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x080053E8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x080053EC: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x080053F0: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x080053F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080053F8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080053FC: sh          $zero, 0x94($t8)
    MEM_H(0X94, ctx->r24) = 0;
    // 0x08005400: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x08005404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005408: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800540C: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x08005410: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08005414: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08005418: nop

    // 0x0800541C: bc1tl       L_080054DC
    if (c1cs) {
        // 0x08005420: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080054DC;
    }
    goto skip_0;
    // 0x08005420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08005424: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08005428: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800542C: addiu       $v0, $v0, 0x2900
    ctx->r2 = ADD32(ctx->r2, 0X2900);
    // 0x08005430: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x08005434: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x08005438: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800543C: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x08005440: jalr        $v0
    // 0x08005444: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08005444: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_0:
    // 0x08005448: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800544C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08005450: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005454: jalr        $t9
    // 0x08005458: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005458: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_1:
    // 0x0800545C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005460: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08005464: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x08005468: lui         $a1, 0xC31A
    ctx->r5 = S32(0XC31A << 16);
    // 0x0800546C: lui         $a2, 0x43A1
    ctx->r6 = S32(0X43A1 << 16);
    // 0x08005470: jalr        $t9
    // 0x08005474: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005474: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    after_2:
    // 0x08005478: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800547C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08005480: lui         $a2, 0x43A3
    ctx->r6 = S32(0X43A3 << 16);
    // 0x08005484: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08005488: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x0800548C: lui         $a1, 0xC347
    ctx->r5 = S32(0XC347 << 16);
    // 0x08005490: jalr        $t9
    // 0x08005494: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005494: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    after_3:
    // 0x08005498: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x0800549C: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x080054A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080054A4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080054A8: lw          $a1, 0x2C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X2C);
    // 0x080054AC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080054B0: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x080054B4: and         $t3, $a1, $at
    ctx->r11 = ctx->r5 & ctx->r1;
    // 0x080054B8: jalr        $t9
    // 0x080054BC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080054BC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x080054C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080054C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080054C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X54EC) << 16);
    // 0x080054CC: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x080054D0: jalr        $t9
    // 0x080054D4: addiu       $a0, $a0, 0x54EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X54EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080054D4: addiu       $a0, $a0, 0x54EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X54EC));
    after_5:
    // 0x080054D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080054DC:
    // 0x080054DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080054E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080054E4: jr          $ra
    // 0x080054E8: nop

    TRACE_RETURN()
    return;
    // 0x080054E8: nop

;}
RECOMP_FUNC void func_08004814_6CCA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004818: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800481C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004820: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004824: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08004828: addiu       $t7, $zero, 0x2A
    ctx->r15 = ADD32(0, 0X2A);
    // 0x0800482C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08004830: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004834: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08004838: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800483C: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08004840: lbu         $t9, 0xDA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XDA);
    // 0x08004844: lbu         $a3, 0xD9($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XD9);
    // 0x08004848: lbu         $a2, 0xD8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XD8);
    // 0x0800484C: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x08004850: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08004854: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004858: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800485C: jalr        $t9
    // 0x08004860: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004860: nop

    after_0:
    // 0x08004864: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08004868: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x0800486C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08004870: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004874: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004878: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x0800487C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004884: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08004888: jalr        $t9
    // 0x0800488C: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800488C: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_1:
    // 0x08004890: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004894: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08004898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800489C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080048A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080048A4: jalr        $t9
    // 0x080048A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080048A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080048AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080048B0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080048B4: jalr        $t9
    // 0x080048B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080048B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080048BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080048C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080048C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X48E4) << 16);
    // 0x080048C8: jalr        $t9
    // 0x080048CC: addiu       $a0, $a0, 0x48E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X48E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080048CC: addiu       $a0, $a0, 0x48E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X48E4));
    after_4:
    // 0x080048D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080048D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080048D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080048DC: jr          $ra
    // 0x080048E0: nop

    TRACE_RETURN()
    return;
    // 0x080048E0: nop

;}
RECOMP_FUNC void func_08002410_6CA620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002410: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08002414: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08002418: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800241C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002420: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002424: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002428: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x0800242C: jalr        $t9
    // 0x08002430: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002430: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08002434: bne         $v0, $zero, L_080025B4
    if (ctx->r2 != 0) {
        // 0x08002438: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_080025B4;
    }
    // 0x08002438: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x0800243C: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08002440: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002444: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002448: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x0800244C: beq         $t8, $zero, L_080025B4
    if (ctx->r24 == 0) {
        // 0x08002450: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080025B4;
    }
    // 0x08002450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002454: jalr        $t9
    // 0x08002458: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002458: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x0800245C: bnel        $v0, $zero, L_080025B8
    if (ctx->r2 != 0) {
        // 0x08002460: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_080025B8;
    }
    goto skip_0;
    // 0x08002460: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x08002464: lbu         $t0, 0xD2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD2);
    // 0x08002468: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800246C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002470: bne         $t0, $zero, L_0800248C
    if (ctx->r8 != 0) {
        // 0x08002474: addiu       $a0, $zero, 0x22D
        ctx->r4 = ADD32(0, 0X22D);
            goto L_0800248C;
    }
    // 0x08002474: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    // 0x08002478: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x0800247C: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x08002480: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x08002484: bne         $v1, $zero, L_080025B4
    if (ctx->r3 != 0) {
        // 0x08002488: sh          $t1, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r9;
            goto L_080025B4;
    }
    // 0x08002488: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
L_0800248C:
    // 0x0800248C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002490: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002494: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x08002498: jalr        $t9
    // 0x0800249C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800249C: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_2:
    // 0x080024A0: lui         $at, 0x4206
    ctx->r1 = S32(0X4206 << 16);
    // 0x080024A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080024A8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080024AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080024B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024B4: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080024B8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X2620) << 16);
    // 0x080024BC: addiu       $a1, $a1, 0x2620
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X2620));
    // 0x080024C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024C4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080024C8: lui         $a3, 0xC198
    ctx->r7 = S32(0XC198 << 16);
    // 0x080024CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080024D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080024D4: jalr        $t9
    // 0x080024D8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080024D8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x080024DC: beq         $v0, $zero, L_08002528
    if (ctx->r2 == 0) {
        // 0x080024E0: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_08002528;
    }
    // 0x080024E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080024E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080024E8: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x080024EC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080024F0: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080024F4: jalr        $t9
    // 0x080024F8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080024F8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_4:
    // 0x080024FC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08002500: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002504: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08002508: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x0800250C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08002510: jalr        $t9
    // 0x08002514: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002514: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
    after_5:
    // 0x08002518: bne         $v0, $zero, L_08002528
    if (ctx->r2 != 0) {
        // 0x0800251C: lw          $t5, 0x34($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X34);
            goto L_08002528;
    }
    // 0x0800251C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x08002520: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08002524: sb          $t4, 0xD3($t5)
    MEM_B(0XD3, ctx->r13) = ctx->r12;
L_08002528:
    // 0x08002528: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800252C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002534: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002538: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800253C: jalr        $t9
    // 0x08002540: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002540: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x08002544: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002548: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x0800254C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002550: jalr        $t9
    // 0x08002554: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002554: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x08002558: lbu         $t6, 0xD2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD2);
    // 0x0800255C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X25C8) << 16);
    // 0x08002560: addiu       $a0, $a0, 0x25C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X25C8));
    // 0x08002564: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08002568: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x0800256C: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x08002570: beq         $at, $zero, L_080025A4
    if (ctx->r1 == 0) {
        // 0x08002574: sb          $t7, 0xD2($s0)
        MEM_B(0XD2, ctx->r16) = ctx->r15;
            goto L_080025A4;
    }
    // 0x08002574: sb          $t7, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = ctx->r15;
    // 0x08002578: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x0800257C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002580: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002584: lbu         $t1, 0xD3($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XD3);
    // 0x08002588: bne         $t1, $zero, L_080025A4
    if (ctx->r9 != 0) {
        // 0x0800258C: nop
    
            goto L_080025A4;
    }
    // 0x0800258C: nop

    // 0x08002590: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2380) << 16);
    // 0x08002594: jalr        $t9
    // 0x08002598: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002598: addiu       $a0, $a0, 0x2380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2380));
    after_8:
    // 0x0800259C: b           L_080025B8
    // 0x080025A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080025B8;
    // 0x080025A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080025A4:
    // 0x080025A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025AC: jalr        $t9
    // 0x080025B0: sb          $zero, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080025B0: sb          $zero, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = 0;
    after_9:
L_080025B4:
    // 0x080025B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080025B8:
    // 0x080025B8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080025BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080025C0: jr          $ra
    // 0x080025C4: nop

    TRACE_RETURN()
    return;
    // 0x080025C4: nop

;}
RECOMP_FUNC void func_080066E0_6CE8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080066E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080066E4: jr          $ra
    // 0x080066E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080066E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
