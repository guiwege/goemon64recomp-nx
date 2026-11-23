#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08003F04_6ED054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003F10: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x08003F14: lui         $t6, 0x2E
    ctx->r14 = S32(0X2E << 16);
    // 0x08003F18: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x08003F1C: ori         $t6, $t6, 0xEE1
    ctx->r14 = ctx->r14 | 0XEE1;
    // 0x08003F20: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x08003F24: addiu       $t8, $zero, 0x138
    ctx->r24 = ADD32(0, 0X138);
    // 0x08003F28: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08003F2C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08003F30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F34: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003F38: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08003F3C: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08003F40: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x08003F44: sb          $zero, 0x75($a0)
    MEM_B(0X75, ctx->r4) = 0;
    // 0x08003F48: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x08003F4C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003F54: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x08003F58: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    // 0x08003F5C: jalr        $t9
    // 0x08003F60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003F60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003F64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F68: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003F6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003F70: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08003F74: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x08003F78: jalr        $t9
    // 0x08003F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003F80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003F84: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003F88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x08003F8C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x08003F90: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003F94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003F98: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08003F9C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08003FA0: sb          $t2, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r10;
    // 0x08003FA4: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x08003FA8: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x08003FAC: jalr        $t9
    // 0x08003FB0: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003FB0: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    after_2:
    // 0x08003FB4: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x08003FB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003FBC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08003FC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3FF0) << 16);
    // 0x08003FCC: addiu       $a0, $a0, 0x3FF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3FF0));
    // 0x08003FD0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003FD4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003FD8: jalr        $t9
    // 0x08003FDC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003FDC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x08003FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003FE8: jr          $ra
    // 0x08003FEC: nop

    TRACE_RETURN()
    return;
    // 0x08003FEC: nop

;}
RECOMP_FUNC void func_080017CC_6EA91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017CC: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x080017D0: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x080017D4: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x080017D8: lhu         $t8, 0x14($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X14);
    // 0x080017DC: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x080017E0: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x080017E4: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x080017E8: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x080017EC: subu        $v1, $t1, $v0
    ctx->r3 = SUB32(ctx->r9, ctx->r2);
    // 0x080017F0: andi        $t2, $v1, 0x3FF
    ctx->r10 = ctx->r3 & 0X3FF;
    // 0x080017F4: slti        $at, $t2, 0x50
    ctx->r1 = SIGNED(ctx->r10) < 0X50 ? 1 : 0;
    // 0x080017F8: bne         $at, $zero, L_08001814
    if (ctx->r1 != 0) {
        // 0x080017FC: slti        $at, $t2, 0x3B1
        ctx->r1 = SIGNED(ctx->r10) < 0X3B1 ? 1 : 0;
            goto L_08001814;
    }
    // 0x080017FC: slti        $at, $t2, 0x3B1
    ctx->r1 = SIGNED(ctx->r10) < 0X3B1 ? 1 : 0;
    // 0x08001800: beq         $at, $zero, L_08001814
    if (ctx->r1 == 0) {
        // 0x08001804: nop
    
            goto L_08001814;
    }
    // 0x08001804: nop

    // 0x08001808: lhu         $t3, 0xE4($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0XE4);
    // 0x0800180C: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x08001810: sh          $t4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r12;
L_08001814:
    // 0x08001814: jr          $ra
    // 0x08001818: nop

    TRACE_RETURN()
    return;
    // 0x08001818: nop

;}
RECOMP_FUNC void func_08000E90_6E9FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E98: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08000E9C: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08000EA0: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08000EA4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000EA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08000EAC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000EB0: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000EB4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000EB8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08000EBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000EC0: jalr        $t9
    // 0x08000EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000EC8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08000ECC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000ED0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000ED4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000ED8: lhu         $t8, 0x16($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X16);
    // 0x08000EDC: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08000EE0: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08000EE4: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08000EE8: sh          $t8, 0xDC($a2)
    MEM_H(0XDC, ctx->r6) = ctx->r24;
    // 0x08000EEC: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08000EF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EF4: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x08000EF8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08000EFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0XF28) << 16);
    // 0x08000F04: addiu       $a0, $a0, 0xF28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0XF28));
    // 0x08000F08: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x08000F0C: sh          $t2, 0xE0($a2)
    MEM_H(0XE0, ctx->r6) = ctx->r10;
    // 0x08000F10: jalr        $t9
    // 0x08000F14: sh          $t1, 0xDE($a2)
    MEM_H(0XDE, ctx->r6) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F14: sh          $t1, 0xDE($a2)
    MEM_H(0XDE, ctx->r6) = ctx->r9;
    after_1:
    // 0x08000F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F20: jr          $ra
    // 0x08000F24: nop

    TRACE_RETURN()
    return;
    // 0x08000F24: nop

;}
RECOMP_FUNC void func_0800308C_6EC1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800308C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003098: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800309C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080030A0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3168) << 16);
    // 0x080030A4: slti        $v1, $v0, 0x96
    ctx->r3 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    // 0x080030A8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080030AC: bne         $v1, $zero, L_08003158
    if (ctx->r3 != 0) {
        // 0x080030B0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003158;
    }
    // 0x080030B0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080030B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080030B8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080030BC: addiu       $a1, $a1, 0x3168
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3168));
    // 0x080030C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080030C4: jalr        $t9
    // 0x080030C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080030C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x080030CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x080030D0: beq         $v0, $zero, L_08003158
    if (ctx->r2 == 0) {
        // 0x080030D4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_08003158;
    }
    // 0x080030D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x080030D8: lbu         $t7, 0xEC($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0XEC);
    // 0x080030DC: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x080030E0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x080030E4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080030E8: andi        $t0, $t8, 0xFF
    ctx->r8 = ctx->r24 & 0XFF;
    // 0x080030EC: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x080030F0: bne         $at, $zero, L_08003100
    if (ctx->r1 != 0) {
        // 0x080030F4: sb          $t8, 0xEC($a3)
        MEM_B(0XEC, ctx->r7) = ctx->r24;
            goto L_08003100;
    }
    // 0x080030F4: sb          $t8, 0xEC($a3)
    MEM_B(0XEC, ctx->r7) = ctx->r24;
    // 0x080030F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080030FC: sb          $t1, 0xEC($a3)
    MEM_B(0XEC, ctx->r7) = ctx->r9;
L_08003100:
    // 0x08003100: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003104: sh          $t2, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r10;
    // 0x08003108: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800310C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x08003110: jalr        $t9
    // 0x08003114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x08003118: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x0800311C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08003120: lui         $at, 0xC32F
    ctx->r1 = S32(0XC32F << 16);
    // 0x08003124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003128: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x0800312C: lbu         $t3, 0xEC($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0XEC);
    // 0x08003130: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08003134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003138: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x0800313C: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x08003140: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003144: sb          $t3, 0xEC($a1)
    MEM_B(0XEC, ctx->r5) = ctx->r11;
    // 0x08003148: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x0800314C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08003150: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x08003154: sh          $zero, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = 0;
L_08003158:
    // 0x08003158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800315C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003160: jr          $ra
    // 0x08003164: nop

    TRACE_RETURN()
    return;
    // 0x08003164: nop

;}
RECOMP_FUNC void func_08002328_6EB478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800232C: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08002330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002334: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08002338: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800233C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08002340: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002344: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002348: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x0800234C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002350: jalr        $t9
    // 0x08002354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x08002358: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0800235C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08002360: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002364: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002368: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800236C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002370: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
    // 0x08002374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002378: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x0800237C: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08002380: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002384: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002388: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x0800238C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002390: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002394: swc1        $f8, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f8.u32l;
    // 0x08002398: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x0800239C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X23BC) << 16);
    // 0x080023A0: addiu       $a0, $a0, 0x23BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X23BC));
    // 0x080023A4: jalr        $t9
    // 0x080023A8: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023A8: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x080023AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080023B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080023B4: jr          $ra
    // 0x080023B8: nop

    TRACE_RETURN()
    return;
    // 0x080023B8: nop

;}
RECOMP_FUNC void func_080020CC_6EB21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080020D0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x080020D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080020D8: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x080020DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080020E0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080020E4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080020E8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080020EC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080020F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080020F4: jalr        $t9
    // 0x080020F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x080020FC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002100: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08002104: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002108: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800210C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002110: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08002114: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
    // 0x08002118: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800211C: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002120: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08002124: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002128: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800212C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08002130: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002134: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002138: swc1        $f8, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f8.u32l;
    // 0x0800213C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002140: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X2160) << 16);
    // 0x08002144: addiu       $a0, $a0, 0x2160
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X2160));
    // 0x08002148: jalr        $t9
    // 0x0800214C: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800214C: swc1        $f10, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x08002150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002158: jr          $ra
    // 0x0800215C: nop

    TRACE_RETURN()
    return;
    // 0x0800215C: nop

;}
RECOMP_FUNC void func_08000950_6E9AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000958: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800095C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000960: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000964: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X6D4) << 16);
    // 0x08000968: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800096C: jalr        $t9
    // 0x08000970: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000970: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    after_0:
    // 0x08000974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800097C: jr          $ra
    // 0x08000980: nop

    TRACE_RETURN()
    return;
    // 0x08000980: nop

;}
RECOMP_FUNC void func_08000F28_6EA078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000F34: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000F38: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x08000F3C: addiu       $v1, $v1, 0x3E10
    ctx->r3 = ADD32(ctx->r3, 0X3E10);
    // 0x08000F40: lhu         $a0, 0xE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XE0);
    // 0x08000F44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x08000F48: jalr        $v1
    // 0x08000F4C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000F4C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08000F50: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x08000F54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F58: lhu         $v0, 0xD2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XD2);
    // 0x08000F5C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x08000F60: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x08000F64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000F68: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x08000F6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000F70: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x08000F74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000F78: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x08000F7C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x08000F80: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x08000F84: bgez        $v0, L_08000F94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000F88: sra         $t8, $v0, 1
        ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08000F94;
    }
    // 0x08000F88: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08000F8C: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x08000F90: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_08000F94:
    // 0x08000F94: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x08000F98: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000F9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08000FA0: bgez        $v0, L_08000FB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000FA4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000FB8;
    }
    // 0x08000FA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000FA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000FB0: nop

    // 0x08000FB4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08000FB8:
    // 0x08000FB8: lhu         $t0, 0xDC($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XDC);
    // 0x08000FBC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000FC0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000FC4: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x08000FC8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x08000FCC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x08000FD0: bgez        $t2, L_08000FE4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08000FD4: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_08000FE4;
    }
    // 0x08000FD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000FD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000FDC: nop

    // 0x08000FE0: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_08000FE4:
    // 0x08000FE4: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08000FE8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000FEC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000FF0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08000FF4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08000FF8: nop

    // 0x08000FFC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001000: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x08001004: nop

    // 0x08001008: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x0800100C: beql        $t4, $zero, L_0800105C
    if (ctx->r12 == 0) {
        // 0x08001010: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_0800105C;
    }
    goto skip_0;
    // 0x08001010: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08001014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001018: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x0800101C: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x08001020: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08001024: nop

    // 0x08001028: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x0800102C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x08001030: nop

    // 0x08001034: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x08001038: bne         $t4, $zero, L_08001050
    if (ctx->r12 != 0) {
        // 0x0800103C: nop
    
            goto L_08001050;
    }
    // 0x0800103C: nop

    // 0x08001040: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x08001044: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001048: b           L_08001068
    // 0x0800104C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_08001068;
    // 0x0800104C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_08001050:
    // 0x08001050: b           L_08001068
    // 0x08001054: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_08001068;
    // 0x08001054: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x08001058: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_0800105C:
    // 0x0800105C: nop

    // 0x08001060: bltz        $t4, L_08001050
    if (SIGNED(ctx->r12) < 0) {
        // 0x08001064: nop
    
            goto L_08001050;
    }
    // 0x08001064: nop

L_08001068:
    // 0x08001068: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x0800106C: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x08001070: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08001074: jalr        $v1
    // 0x08001078: lhu         $a0, 0xE0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE0);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08001078: lhu         $a0, 0xE0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XE0);
    after_1:
    // 0x0800107C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x08001080: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x08001084: lhu         $v0, 0xD2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XD2);
    // 0x08001088: lh          $t0, 0xDE($a2)
    ctx->r8 = MEM_H(ctx->r6, 0XDE);
    // 0x0800108C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x08001090: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x08001094: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x08001098: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x0800109C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x080010A0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x080010A4: bgez        $v0, L_080010B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080010A8: sra         $t9, $v0, 1
        ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
            goto L_080010B4;
    }
    // 0x080010A8: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x080010AC: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x080010B0: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_080010B4:
    // 0x080010B4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x080010B8: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x080010BC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x080010C0: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080010C4: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080010C8: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080010CC: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x080010D0: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    // 0x080010D4: lhu         $t3, 0xE0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0XE0);
    // 0x080010D8: lhu         $t4, 0xD2($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0XD2);
    // 0x080010DC: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x080010E0: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x080010E4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080010E8: sh          $t7, 0xE0($a2)
    MEM_H(0XE0, ctx->r6) = ctx->r15;
    // 0x080010EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080010F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080010F4: jr          $ra
    // 0x080010F8: nop

    TRACE_RETURN()
    return;
    // 0x080010F8: nop

;}
RECOMP_FUNC void func_080005F8_6E9748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080005FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000600: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000604: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000608: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800060C: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x08000610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000614: jalr        $t9
    // 0x08000618: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000618: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x0800061C: beq         $v0, $zero, L_08000634
    if (ctx->r2 == 0) {
        // 0x08000620: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(31, 0X6D4) << 16);
            goto L_08000634;
    }
    // 0x08000620: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X6D4) << 16);
    // 0x08000624: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000628: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800062C: jalr        $t9
    // 0x08000630: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000630: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X6D4));
    after_1:
L_08000634:
    // 0x08000634: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000638: addiu       $t6, $zero, 0xB0
    ctx->r14 = ADD32(0, 0XB0);
    // 0x0800063C: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x08000640: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x08000644: slti        $at, $v0, 0xB0
    ctx->r1 = SIGNED(ctx->r2) < 0XB0 ? 1 : 0;
    // 0x08000648: beq         $at, $zero, L_0800067C
    if (ctx->r1 == 0) {
        // 0x0800064C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800067C;
    }
    // 0x0800064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000650: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000654: sb          $v0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r2;
    // 0x08000658: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x0800065C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000664: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x08000668: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800066C: jalr        $t9
    // 0x08000670: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000670: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x08000674: b           L_080006C4
    // 0x08000678: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080006C4;
    // 0x08000678: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800067C:
    // 0x0800067C: sb          $t6, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r14;
    // 0x08000680: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(31, 0X6D4) << 16);
    // 0x08000684: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x08000688: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800068C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08000690: addiu       $t8, $t8, 0x521C
    ctx->r24 = ADD32(ctx->r24, 0X521C);
    // 0x08000694: addiu       $t7, $t7, 0x6D4
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(31, 0X6D4));
    // 0x08000698: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x0800069C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x080006A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080006A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080006A8: jalr        $t9
    // 0x080006AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x080006B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080006B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x080006B8: jalr        $t9
    // 0x080006BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080006BC: nop

    after_4:
    // 0x080006C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080006C4:
    // 0x080006C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080006C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080006CC: jr          $ra
    // 0x080006D0: nop

    TRACE_RETURN()
    return;
    // 0x080006D0: nop

;}
RECOMP_FUNC void func_080023BC_6EB50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023BC: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x080023C0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080023C4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x080023C8: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x080023CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080023D0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080023D4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x080023D8: nop

    // 0x080023DC: bc1fl       L_080023F4
    if (!c1cs) {
        // 0x080023E0: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_080023F4;
    }
    goto skip_0;
    // 0x080023E0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x080023E4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x080023E8: b           L_080023F4
    // 0x080023EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_080023F4;
    // 0x080023EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x080023F0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_080023F4:
    // 0x080023F4: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x080023F8: nop

    // 0x080023FC: bc1fl       L_08002420
    if (!c1cs) {
        // 0x08002400: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_08002420;
    }
    goto skip_1;
    // 0x08002400: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x08002404: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002408: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x0800240C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002410: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002414: b           L_0800242C
    // 0x08002418: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_0800242C;
    // 0x08002418: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x0800241C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_08002420:
    // 0x08002420: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002424: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x08002428: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_0800242C:
    // 0x0800242C: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08002430: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x08002434: bnel        $a1, $t2, L_08002460
    if (ctx->r5 != ctx->r10) {
        // 0x08002438: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_08002460;
    }
    goto skip_2;
    // 0x08002438: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x0800243C: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x08002440: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08002444: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5548) << 16);
    // 0x08002448: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x0800244C: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x08002450: lwc1        $f6, 0x5548($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X5548));
    // 0x08002454: b           L_0800246C
    // 0x08002458: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_0800246C;
    // 0x08002458: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x0800245C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_08002460:
    // 0x08002460: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002464: andi        $t7, $t6, 0xFFFB
    ctx->r15 = ctx->r14 & 0XFFFB;
    // 0x08002468: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_0800246C:
    // 0x0800246C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08002470: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x08002474: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08002478: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x0800247C: beq         $at, $zero, L_08002528
    if (ctx->r1 == 0) {
        // 0x08002480: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08002528;
    }
    // 0x08002480: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08002484: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X554C) << 16);
    // 0x08002488: addu        $at, $at, $t9
    gpr jr_addend_08002490 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x0800248C: lw          $t9, 0x554C($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X554C));
    // 0x08002490: jr          $t9
    // 0x08002494: nop

    switch (jr_addend_08002490 >> 2) {
        case 0: goto L_08002498; break;
        case 1: goto L_08002498; break;
        case 2: goto L_08002528; break;
        case 3: goto L_08002498; break;
        case 4: goto L_08002528; break;
        case 5: goto L_08002528; break;
        case 6: goto L_08002528; break;
        case 7: goto L_080024E0; break;
        case 8: goto L_08002528; break;
        case 9: goto L_08002528; break;
        case 10: goto L_08002528; break;
        case 11: goto L_08002528; break;
        case 12: goto L_08002528; break;
        case 13: goto L_08002528; break;
        case 14: goto L_08002528; break;
        case 15: goto L_080024E0; break;
        case 16: goto L_08002528; break;
        case 17: goto L_08002528; break;
        case 18: goto L_08002528; break;
        case 19: goto L_08002528; break;
        case 20: goto L_08002528; break;
        case 21: goto L_08002528; break;
        case 22: goto L_08002528; break;
        case 23: goto L_08002528; break;
        case 24: goto L_08002528; break;
        case 25: goto L_08002528; break;
        case 26: goto L_08002528; break;
        case 27: goto L_08002528; break;
        case 28: goto L_08002528; break;
        case 29: goto L_08002528; break;
        case 30: goto L_08002528; break;
        case 31: goto L_080024E0; break;
        default: switch_error(__func__, 0x08002490, 0x0800554C);
    }
    // 0x08002494: nop

L_08002498:
    // 0x08002498: lwc1        $f8, 0xD0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x0800249C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x080024A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080024A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080024A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080024AC: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080024B0: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x080024B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080024B8: sub.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d - ctx->f18.d;
    // 0x080024BC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080024C0: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x080024C4: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x080024C8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x080024CC: nop

    // 0x080024D0: bc1f        L_0800255C
    if (!c1cs) {
        // 0x080024D4: nop
    
            goto L_0800255C;
    }
    // 0x080024D4: nop

    // 0x080024D8: jr          $ra
    // 0x080024DC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x080024DC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_080024E0:
    // 0x080024E0: lwc1        $f10, 0xD0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x080024E4: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x080024E8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080024EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080024F0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080024F4: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080024F8: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x080024FC: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x08002500: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x08002504: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x08002508: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x0800250C: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002510: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002514: nop

    // 0x08002518: bc1f        L_0800255C
    if (!c1cs) {
        // 0x0800251C: nop
    
            goto L_0800255C;
    }
    // 0x0800251C: nop

    // 0x08002520: jr          $ra
    // 0x08002524: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002524: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002528:
    // 0x08002528: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800252C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X55D0) << 16);
    // 0x08002530: ldc1        $f18, 0x55D0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X55D0));
    // 0x08002534: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x08002538: sub.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f4.d - ctx->f18.d;
    // 0x0800253C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x08002540: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002544: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08002548: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x0800254C: nop

    // 0x08002550: bc1f        L_0800255C
    if (!c1cs) {
        // 0x08002554: nop
    
            goto L_0800255C;
    }
    // 0x08002554: nop

    // 0x08002558: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_0800255C:
    // 0x0800255C: jr          $ra
    // 0x08002560: nop

    TRACE_RETURN()
    return;
    // 0x08002560: nop

;}
RECOMP_FUNC void func_0800000C_6E915C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800000C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000018: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800001C: lui         $t6, 0x8060
    ctx->r14 = S32(0X8060 << 16);
    // 0x08000020: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000024: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08000028: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800002C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000030: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000034: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000038: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x0800003C: jalr        $t9
    // 0x08000040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000044: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000048: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000050: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x08000054: addiu       $a2, $zero, 0x15E
    ctx->r6 = ADD32(0, 0X15E);
    // 0x08000058: jalr        $t9
    // 0x0800005C: addiu       $a3, $zero, -0x5A
    ctx->r7 = ADD32(0, -0X5A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800005C: addiu       $a3, $zero, -0x5A
    ctx->r7 = ADD32(0, -0X5A);
    after_1:
    // 0x08000060: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X53F8) << 16);
    // 0x08000064: lwc1        $f0, 0x53F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X53F8));
    // 0x08000068: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800006C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X53FC) << 16);
    // 0x08000070: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x08000074: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000078: lwc1        $f4, 0x53FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X53FC));
    // 0x0800007C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000080: addiu       $v0, $v0, 0x521C
    ctx->r2 = ADD32(ctx->r2, 0X521C);
    // 0x08000084: swc1        $f4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f4.u32l;
    // 0x08000088: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x0800008C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X124) << 16);
    // 0x08000090: addiu       $a0, $a0, 0x124
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X124));
    // 0x08000094: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08000098: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x0800009C: jalr        $v0
    // 0x080000A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080000A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x080000A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000A8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080000AC: jalr        $t9
    // 0x080000B0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000B0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_3:
    // 0x080000B4: beq         $v0, $zero, L_08000110
    if (ctx->r2 == 0) {
        // 0x080000B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000110;
    }
    // 0x080000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000C0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080000C4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X21C) << 16);
    // 0x080000C8: addiu       $a1, $a1, 0x21C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X21C));
    // 0x080000CC: jalr        $t9
    // 0x080000D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x080000D4: beq         $v0, $zero, L_08000110
    if (ctx->r2 == 0) {
        // 0x080000D8: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_08000110;
    }
    // 0x080000D8: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x080000DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000E0: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x080000E4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080000E8: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x080000EC: jalr        $t9
    // 0x080000F0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000F0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x080000F4: lw          $t2, 0xD0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD0);
    // 0x080000F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X210) << 16);
    // 0x080000FC: addiu       $a0, $a0, 0x210
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X210));
    // 0x08000100: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x08000104: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000108: jalr        $t9
    // 0x0800010C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800010C: nop

    after_6:
L_08000110:
    // 0x08000110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000114: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000118: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800011C: jr          $ra
    // 0x08000120: nop

    TRACE_RETURN()
    return;
    // 0x08000120: nop

;}
RECOMP_FUNC void func_08000E24_6E9F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000E30: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000E34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E38: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000E3C: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x08000E40: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x08000E44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000E48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000E4C: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08000E50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E54: jalr        $t9
    // 0x08000E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000E5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000E60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E64: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000E68: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000E6C: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x08000E70: beql        $at, $zero, L_08000E84
    if (ctx->r1 == 0) {
        // 0x08000E74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000E84;
    }
    goto skip_0;
    // 0x08000E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000E78: jalr        $t9
    // 0x08000E7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E7C: nop

    after_1:
    // 0x08000E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000E84:
    // 0x08000E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000E88: jr          $ra
    // 0x08000E8C: nop

    TRACE_RETURN()
    return;
    // 0x08000E8C: nop

;}
RECOMP_FUNC void func_080044F4_6ED644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080044F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080044F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080044FC: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08004500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004504: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004508: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x0800450C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08004510: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08004514: nop

    // 0x08004518: bc1fl       L_08004554
    if (!c1cs) {
        // 0x0800451C: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004554;
    }
    goto skip_0;
    // 0x0800451C: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x08004520: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004524: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004528: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800452C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004530: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004534: nop

    // 0x08004538: bc1fl       L_08004554
    if (!c1cs) {
        // 0x0800453C: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004554;
    }
    goto skip_1;
    // 0x0800453C: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x08004540: jalr        $t9
    // 0x08004544: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004544: nop

    after_0:
    // 0x08004548: b           L_080045E4
    // 0x0800454C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080045E4;
    // 0x0800454C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004550: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_08004554:
    // 0x08004554: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08004558: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800455C: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004560: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08004564: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004568: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x0800456C: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x08004570: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    // 0x08004574: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08004578: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x0800457C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004580: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x08004584: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08004588: jalr        $t9
    // 0x0800458C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800458C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x08004590: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004594: bne         $v0, $zero, L_080045AC
    if (ctx->r2 != 0) {
        // 0x08004598: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_080045AC;
    }
    // 0x08004598: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0800459C: lw          $t8, 0xD0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD0);
    // 0x080045A0: lbu         $t0, 0xED($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0XED);
    // 0x080045A4: beql        $t0, $zero, L_080045E4
    if (ctx->r8 == 0) {
        // 0x080045A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080045E4;
    }
    goto skip_2;
    // 0x080045A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_080045AC:
    // 0x080045AC: lw          $t2, 0xD0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XD0);
    // 0x080045B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080045B4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x080045B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080045BC: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x080045C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080045C4: sb          $t1, 0xED($t2)
    MEM_B(0XED, ctx->r10) = ctx->r9;
    // 0x080045C8: sh          $t3, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r11;
    // 0x080045CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080045D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X45F0) << 16);
    // 0x080045D4: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X45F0));
    // 0x080045D8: jalr        $t9
    // 0x080045DC: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080045DC: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    after_2:
    // 0x080045E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080045E4:
    // 0x080045E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080045E8: jr          $ra
    // 0x080045EC: nop

    TRACE_RETURN()
    return;
    // 0x080045EC: nop

;}
RECOMP_FUNC void func_080025F8_6EB748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080025F8: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x080025FC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08002600: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x08002604: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08002608: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800260C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08002610: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002614: nop

    // 0x08002618: bc1fl       L_08002630
    if (!c1cs) {
        // 0x0800261C: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08002630;
    }
    goto skip_0;
    // 0x0800261C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x08002620: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002624: b           L_08002630
    // 0x08002628: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08002630;
    // 0x08002628: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x0800262C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08002630:
    // 0x08002630: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x08002634: nop

    // 0x08002638: bc1fl       L_0800265C
    if (!c1cs) {
        // 0x0800263C: lw          $t9, 0x60($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X60);
            goto L_0800265C;
    }
    goto skip_1;
    // 0x0800263C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x08002640: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002644: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08002648: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800264C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002650: b           L_08002668
    // 0x08002654: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
        goto L_08002668;
    // 0x08002654: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002658: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
L_0800265C:
    // 0x0800265C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002660: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x08002664: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_08002668:
    // 0x08002668: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x0800266C: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x08002670: bnel        $a1, $t2, L_0800269C
    if (ctx->r5 != ctx->r10) {
        // 0x08002674: lw          $v0, 0xE8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE8);
            goto L_0800269C;
    }
    goto skip_2;
    // 0x08002674: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    skip_2:
    // 0x08002678: lw          $t4, 0xE8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XE8);
    // 0x0800267C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x08002680: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X55D8) << 16);
    // 0x08002684: sb          $t3, 0xEC($t4)
    MEM_B(0XEC, ctx->r12) = ctx->r11;
    // 0x08002688: lw          $t5, 0xE8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XE8);
    // 0x0800268C: lwc1        $f6, 0x55D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X55D8));
    // 0x08002690: b           L_080026A8
    // 0x08002694: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
        goto L_080026A8;
    // 0x08002694: swc1        $f6, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->f6.u32l;
    // 0x08002698: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
L_0800269C:
    // 0x0800269C: lbu         $t6, 0xEC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XEC);
    // 0x080026A0: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x080026A4: sb          $t7, 0xEC($v0)
    MEM_B(0XEC, ctx->r2) = ctx->r15;
L_080026A8:
    // 0x080026A8: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x080026AC: lbu         $t8, 0xEC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XEC);
    // 0x080026B0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x080026B4: sltiu       $at, $t9, 0x20
    ctx->r1 = ctx->r25 < 0X20 ? 1 : 0;
    // 0x080026B8: beq         $at, $zero, L_08002764
    if (ctx->r1 == 0) {
        // 0x080026BC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08002764;
    }
    // 0x080026BC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x080026C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X55DC) << 16);
    // 0x080026C4: addu        $at, $at, $t9
    gpr jr_addend_080026CC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x080026C8: lw          $t9, 0x55DC($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X55DC));
    // 0x080026CC: jr          $t9
    // 0x080026D0: nop

    switch (jr_addend_080026CC >> 2) {
        case 0: goto L_080026D4; break;
        case 1: goto L_080026D4; break;
        case 2: goto L_08002764; break;
        case 3: goto L_080026D4; break;
        case 4: goto L_08002764; break;
        case 5: goto L_08002764; break;
        case 6: goto L_08002764; break;
        case 7: goto L_0800271C; break;
        case 8: goto L_08002764; break;
        case 9: goto L_08002764; break;
        case 10: goto L_08002764; break;
        case 11: goto L_08002764; break;
        case 12: goto L_08002764; break;
        case 13: goto L_08002764; break;
        case 14: goto L_08002764; break;
        case 15: goto L_0800271C; break;
        case 16: goto L_08002764; break;
        case 17: goto L_08002764; break;
        case 18: goto L_08002764; break;
        case 19: goto L_08002764; break;
        case 20: goto L_08002764; break;
        case 21: goto L_08002764; break;
        case 22: goto L_08002764; break;
        case 23: goto L_08002764; break;
        case 24: goto L_08002764; break;
        case 25: goto L_08002764; break;
        case 26: goto L_08002764; break;
        case 27: goto L_08002764; break;
        case 28: goto L_08002764; break;
        case 29: goto L_08002764; break;
        case 30: goto L_08002764; break;
        case 31: goto L_0800271C; break;
        default: switch_error(__func__, 0x080026CC, 0x080055DC);
    }
    // 0x080026D0: nop

L_080026D4:
    // 0x080026D4: lwc1        $f8, 0xD0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x080026D8: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x080026DC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080026E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080026E4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080026E8: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080026EC: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x080026F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080026F4: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x080026F8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080026FC: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002700: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002704: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002708: nop

    // 0x0800270C: bc1f        L_08002798
    if (!c1cs) {
        // 0x08002710: nop
    
            goto L_08002798;
    }
    // 0x08002710: nop

    // 0x08002714: jr          $ra
    // 0x08002718: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002718: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_0800271C:
    // 0x0800271C: lwc1        $f10, 0xD0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XD0);
    // 0x08002720: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002724: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08002728: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800272C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08002730: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002734: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x08002738: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x0800273C: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x08002740: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x08002744: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002748: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x0800274C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x08002750: nop

    // 0x08002754: bc1f        L_08002798
    if (!c1cs) {
        // 0x08002758: nop
    
            goto L_08002798;
    }
    // 0x08002758: nop

    // 0x0800275C: jr          $ra
    // 0x08002760: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08002760: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002764:
    // 0x08002764: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002768: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X5660) << 16);
    // 0x0800276C: ldc1        $f18, 0x5660($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X5660));
    // 0x08002770: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x08002774: add.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f4.d + ctx->f18.d;
    // 0x08002778: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x0800277C: swc1        $f12, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f12.u32l;
    // 0x08002780: lwc1        $f0, 0xDC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08002784: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08002788: nop

    // 0x0800278C: bc1f        L_08002798
    if (!c1cs) {
        // 0x08002790: nop
    
            goto L_08002798;
    }
    // 0x08002790: nop

    // 0x08002794: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
L_08002798:
    // 0x08002798: jr          $ra
    // 0x0800279C: nop

    TRACE_RETURN()
    return;
    // 0x0800279C: nop

;}
RECOMP_FUNC void func_080040EC_6ED23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080040EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080040F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080040F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080040F8: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x080040FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004100: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004104: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004108: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x0800410C: nop

    // 0x08004110: bc1fl       L_0800414C
    if (!c1cs) {
        // 0x08004114: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_0800414C;
    }
    goto skip_0;
    // 0x08004114: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x08004118: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800411C: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004120: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004124: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004128: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x0800412C: nop

    // 0x08004130: bc1fl       L_0800414C
    if (!c1cs) {
        // 0x08004134: lw          $t6, 0xD0($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XD0);
            goto L_0800414C;
    }
    goto skip_1;
    // 0x08004134: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    skip_1:
    // 0x08004138: jalr        $t9
    // 0x0800413C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800413C: nop

    after_0:
    // 0x08004140: b           L_080041E4
    // 0x08004144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080041E4;
    // 0x08004144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004148: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
L_0800414C:
    // 0x0800414C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08004150: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08004154: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08004158: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x0800415C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57F8) << 16);
    // 0x08004160: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x08004164: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004168: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800416C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004170: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08004174: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08004178: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800417C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08004180: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004184: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004188: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x0800418C: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08004190: ldc1        $f16, 0x57F8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(31, 0X57F8));
    // 0x08004194: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004198: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x0800419C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x080041A0: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x080041A4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080041A8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x080041AC: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x080041B0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080041B4: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x080041B8: nop

    // 0x080041BC: bc1fl       L_080041E4
    if (!c1cs) {
        // 0x080041C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080041E4;
    }
    goto skip_2;
    // 0x080041C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x080041C4: jalr        $t9
    // 0x080041C8: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080041C8: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    after_1:
    // 0x080041CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080041D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080041D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X41F4) << 16);
    // 0x080041D8: jalr        $t9
    // 0x080041DC: addiu       $a0, $a0, 0x41F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X41F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080041DC: addiu       $a0, $a0, 0x41F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X41F4));
    after_2:
    // 0x080041E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080041E4:
    // 0x080041E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080041E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080041EC: jr          $ra
    // 0x080041F0: nop

    TRACE_RETURN()
    return;
    // 0x080041F0: nop

;}
RECOMP_FUNC void func_080014B4_6EA604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080014B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080014BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080014C0: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x080014C4: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x080014C8: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x080014CC: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x080014D0: addiu       $t8, $zero, 0x19E
    ctx->r24 = ADD32(0, 0X19E);
    // 0x080014D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080014D8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080014DC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080014E0: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080014E4: beq         $t9, $zero, L_080014F8
    if (ctx->r25 == 0) {
        // 0x080014E8: sh          $t8, 0x5E($a0)
        MEM_H(0X5E, ctx->r4) = ctx->r24;
            goto L_080014F8;
    }
    // 0x080014E8: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x080014EC: ori         $t0, $zero, 0xFFFC
    ctx->r8 = 0 | 0XFFFC;
    // 0x080014F0: b           L_08001500
    // 0x080014F4: sh          $t0, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r8;
        goto L_08001500;
    // 0x080014F4: sh          $t0, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r8;
L_080014F8:
    // 0x080014F8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x080014FC: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
L_08001500:
    // 0x08001500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001504: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800150C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001510: jalr        $t9
    // 0x08001514: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001514: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x08001518: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x0800151C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001520: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08001524: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X1728) << 16);
    // 0x08001528: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x0800152C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001530: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08001534: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001538: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x0800153C: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08001540: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X1728));
    // 0x08001544: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001548: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800154C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001550: jalr        $v0
    // 0x08001554: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001554: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x08001558: beq         $v0, $zero, L_080015A8
    if (ctx->r2 == 0) {
        // 0x0800155C: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_080015A8;
    }
    // 0x0800155C: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x08001560: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001564: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x08001568: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800156C: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001570: jalr        $t9
    // 0x08001574: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001574: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x08001578: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x0800157C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001580: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x08001584: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x08001588: sw          $s0, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->r16;
    // 0x0800158C: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x08001590: sw          $s0, 0xE8($t6)
    MEM_W(0XE8, ctx->r14) = ctx->r16;
    // 0x08001594: lw          $t8, 0xD4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD4);
    // 0x08001598: sb          $t7, 0xE1($t8)
    MEM_B(0XE1, ctx->r24) = ctx->r15;
    // 0x0800159C: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x080015A0: lhu         $t0, 0xE4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XE4);
    // 0x080015A4: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_080015A8:
    // 0x080015A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080015AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x080015B4: jalr        $t9
    // 0x080015B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x080015BC: beq         $v0, $zero, L_08001610
    if (ctx->r2 == 0) {
        // 0x080015C0: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_08001610;
    }
    // 0x080015C0: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x080015C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015C8: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x080015CC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080015D0: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080015D4: jalr        $t9
    // 0x080015D8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015D8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_4:
    // 0x080015DC: lw          $t4, 0xD8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD8);
    // 0x080015E0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080015E4: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x080015E8: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x080015EC: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x080015F0: sw          $t5, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r13;
    // 0x080015F4: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x080015F8: sw          $s0, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->r16;
    // 0x080015FC: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x08001600: sb          $t8, 0xE1($t0)
    MEM_B(0XE1, ctx->r8) = ctx->r24;
    // 0x08001604: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x08001608: lhu         $t1, 0xE4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XE4);
    // 0x0800160C: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
L_08001610:
    // 0x08001610: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08001614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001618: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800161C: jalr        $t9
    // 0x08001620: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001620: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x08001624: beq         $v0, $zero, L_08001678
    if (ctx->r2 == 0) {
        // 0x08001628: sw          $v0, 0xDC($s0)
        MEM_W(0XDC, ctx->r16) = ctx->r2;
            goto L_08001678;
    }
    // 0x08001628: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x0800162C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001630: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x08001634: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001638: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x0800163C: jalr        $t9
    // 0x08001640: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001640: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x08001644: lw          $t5, 0xDC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XDC);
    // 0x08001648: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0800164C: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
    // 0x08001650: lw          $t7, 0xDC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XDC);
    // 0x08001654: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x08001658: sw          $t6, 0xD0($t7)
    MEM_W(0XD0, ctx->r15) = ctx->r14;
    // 0x0800165C: lw          $t8, 0xDC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XDC);
    // 0x08001660: sw          $s0, 0xE8($t8)
    MEM_W(0XE8, ctx->r24) = ctx->r16;
    // 0x08001664: lw          $t1, 0xDC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XDC);
    // 0x08001668: sb          $t0, 0xE1($t1)
    MEM_B(0XE1, ctx->r9) = ctx->r8;
    // 0x0800166C: lw          $t3, 0xDC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XDC);
    // 0x08001670: lhu         $t2, 0xE4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE4);
    // 0x08001674: sh          $t2, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r10;
L_08001678:
    // 0x08001678: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800167C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001680: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X16A0) << 16);
    // 0x08001684: jalr        $t9
    // 0x08001688: addiu       $a0, $a0, 0x16A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X16A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001688: addiu       $a0, $a0, 0x16A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X16A0));
    after_7:
    // 0x0800168C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001698: jr          $ra
    // 0x0800169C: nop

    TRACE_RETURN()
    return;
    // 0x0800169C: nop

;}
RECOMP_FUNC void func_08003AEC_6ECC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003AF4: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08003AF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003AFC: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003B00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08003B04: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003B08: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08003B0C: nop

    // 0x08003B10: bc1fl       L_08003B4C
    if (!c1cs) {
        // 0x08003B14: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08003B4C;
    }
    goto skip_0;
    // 0x08003B14: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x08003B18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003B1C: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B24: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003B28: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08003B2C: nop

    // 0x08003B30: bc1fl       L_08003B4C
    if (!c1cs) {
        // 0x08003B34: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08003B4C;
    }
    goto skip_1;
    // 0x08003B34: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x08003B38: jalr        $t9
    // 0x08003B3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B3C: nop

    after_0:
    // 0x08003B40: b           L_08003BDC
    // 0x08003B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08003BDC;
    // 0x08003B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003B48: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_08003B4C:
    // 0x08003B4C: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08003B50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B54: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x08003B58: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003B5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08003B60: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08003B64: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x08003B68: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    // 0x08003B6C: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08003B70: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08003B74: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003B78: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x08003B7C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08003B80: jalr        $t9
    // 0x08003B84: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B84: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x08003B88: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08003B8C: bne         $v0, $zero, L_08003BA4
    if (ctx->r2 != 0) {
        // 0x08003B90: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_08003BA4;
    }
    // 0x08003B90: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08003B94: lw          $t8, 0xD0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD0);
    // 0x08003B98: lbu         $t0, 0xED($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0XED);
    // 0x08003B9C: beql        $t0, $zero, L_08003BDC
    if (ctx->r8 == 0) {
        // 0x08003BA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003BDC;
    }
    goto skip_2;
    // 0x08003BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_08003BA4:
    // 0x08003BA4: lw          $t2, 0xD0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XD0);
    // 0x08003BA8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08003BAC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08003BB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003BB4: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x08003BB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003BBC: sb          $t1, 0xED($t2)
    MEM_B(0XED, ctx->r10) = ctx->r9;
    // 0x08003BC0: sh          $t3, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r11;
    // 0x08003BC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003BC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3BE8) << 16);
    // 0x08003BCC: addiu       $a0, $a0, 0x3BE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3BE8));
    // 0x08003BD0: jalr        $t9
    // 0x08003BD4: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003BD4: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    after_2:
    // 0x08003BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003BDC:
    // 0x08003BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003BE0: jr          $ra
    // 0x08003BE4: nop

    TRACE_RETURN()
    return;
    // 0x08003BE4: nop

;}
RECOMP_FUNC void func_08000000_6E9150(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_080049BC_6EDB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080049C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080049C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080049C8: lbu         $v1, 0xDC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDC);
    // 0x080049CC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080049D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080049D4: bne         $v1, $zero, L_080049FC
    if (ctx->r3 != 0) {
        // 0x080049D8: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_080049FC;
    }
    // 0x080049D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080049DC: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x080049E0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080049E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080049E8: lbu         $t7, 0x4C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4C);
    // 0x080049EC: bnel        $t7, $at, L_08004A00
    if (ctx->r15 != ctx->r1) {
        // 0x080049F0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08004A00;
    }
    goto skip_0;
    // 0x080049F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x080049F4: sb          $t8, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r24;
    // 0x080049F8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
L_080049FC:
    // 0x080049FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_08004A00:
    // 0x08004A00: beq         $v1, $at, L_08004A24
    if (ctx->r3 == ctx->r1) {
        // 0x08004A04: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_08004A24;
    }
    // 0x08004A04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08004A08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004A0C: beq         $v0, $at, L_08004A6C
    if (ctx->r2 == ctx->r1) {
        // 0x08004A10: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08004A6C;
    }
    // 0x08004A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08004A14: beq         $v0, $at, L_08004AE8
    if (ctx->r2 == ctx->r1) {
        // 0x08004A18: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_08004AE8;
    }
    // 0x08004A18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004A1C: b           L_08004B28
    // 0x08004A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004B28;
    // 0x08004A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004A24:
    // 0x08004A24: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004A28: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08004A2C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x08004A30: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x08004A34: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08004A38: beq         $at, $zero, L_08004A48
    if (ctx->r1 == 0) {
        // 0x08004A3C: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_08004A48;
    }
    // 0x08004A3C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x08004A40: b           L_08004A50
    // 0x08004A44: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
        goto L_08004A50;
    // 0x08004A44: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
L_08004A48:
    // 0x08004A48: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x08004A4C: sb          $t0, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r8;
L_08004A50:
    // 0x08004A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A54: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08004A58: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004A5C: jalr        $t9
    // 0x08004A60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004A60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x08004A64: b           L_08004B28
    // 0x08004A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004B28;
    // 0x08004A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004A6C:
    // 0x08004A6C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004A70: andi        $a1, $zero, 0xFF
    ctx->r5 = 0 & 0XFF;
    // 0x08004A74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004A78: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08004A7C: blez        $v0, L_08004AB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08004A80: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_08004AB0;
    }
    // 0x08004A80: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08004A84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A88: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
    // 0x08004A8C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08004A90: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08004A94: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08004A98: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x08004A9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004AA0: jalr        $t9
    // 0x08004AA4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004AA4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08004AA8: b           L_08004B28
    // 0x08004AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004B28;
    // 0x08004AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004AB0:
    // 0x08004AB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AB4: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
    // 0x08004AB8: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08004ABC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08004AC0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08004AC4: jalr        $t9
    // 0x08004AC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004AC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x08004ACC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004AD0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x08004AD4: lbu         $t5, 0xDC($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004AD8: sb          $t4, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r12;
    // 0x08004ADC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08004AE0: b           L_08004B24
    // 0x08004AE4: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
        goto L_08004B24;
    // 0x08004AE4: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
L_08004AE8:
    // 0x08004AE8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004AEC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08004AF0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08004AF4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x08004AF8: blez        $v0, L_08004B08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08004AFC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08004B08;
    }
    // 0x08004AFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B00: b           L_08004B14
    // 0x08004B04: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
        goto L_08004B14;
    // 0x08004B04: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
L_08004B08:
    // 0x08004B08: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x08004B0C: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
    // 0x08004B10: sb          $t7, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r15;
L_08004B14:
    // 0x08004B14: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004B18: addiu       $t9, $t9, -0x1F68
    ctx->r25 = ADD32(ctx->r25, -0X1F68);
    // 0x08004B1C: jalr        $t9
    // 0x08004B20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004B20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
L_08004B24:
    // 0x08004B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004B28:
    // 0x08004B28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004B2C: jr          $ra
    // 0x08004B30: nop

    TRACE_RETURN()
    return;
    // 0x08004B30: nop

;}
RECOMP_FUNC void func_080005A8_6EEF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005B0: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080005B4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080005B8: beql        $t7, $zero, L_080005E8
    if (ctx->r15 == 0) {
        // 0x080005BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080005E8;
    }
    goto skip_0;
    // 0x080005BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080005C0: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x080005C4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080005C8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080005CC: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x080005D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X5F4) << 16);
    // 0x080005DC: jalr        $t9
    // 0x080005E0: addiu       $a0, $a0, 0x5F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005E0: addiu       $a0, $a0, 0x5F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5F4));
    after_0:
    // 0x080005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080005E8:
    // 0x080005E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005EC: jr          $ra
    // 0x080005F0: nop

    TRACE_RETURN()
    return;
    // 0x080005F0: nop

;}
RECOMP_FUNC void func_08001374_6EFCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800137C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001380: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001384: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x08001388: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800138C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001390: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x08001394: beq         $t7, $zero, L_080013BC
    if (ctx->r15 == 0) {
        // 0x08001398: addiu       $t9, $t9, 0xE90
        ctx->r25 = ADD32(ctx->r25, 0XE90);
            goto L_080013BC;
    }
    // 0x08001398: addiu       $t9, $t9, 0xE90
    ctx->r25 = ADD32(ctx->r25, 0XE90);
    // 0x0800139C: jalr        $t9
    // 0x080013A0: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013A0: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_0:
    // 0x080013A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013A8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080013AC: jalr        $t9
    // 0x080013B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013B0: nop

    after_1:
    // 0x080013B4: b           L_08001444
    // 0x080013B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001444;
    // 0x080013B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013BC:
    // 0x080013BC: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x080013C0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x080013C4: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x080013C8: lhu         $v0, 0xD4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XD4);
    // 0x080013CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080013D0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x080013D4: bne         $t8, $zero, L_080013E4
    if (ctx->r24 != 0) {
        // 0x080013D8: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_080013E4;
    }
    // 0x080013D8: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x080013DC: beq         $t0, $zero, L_080013F4
    if (ctx->r8 == 0) {
        // 0x080013E0: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_080013F4;
    }
    // 0x080013E0: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
L_080013E4:
    // 0x080013E4: jalr        $t9
    // 0x080013E8: addiu       $a1, $zero, -0x6
    ctx->r5 = ADD32(0, -0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013E8: addiu       $a1, $zero, -0x6
    ctx->r5 = ADD32(0, -0X6);
    after_2:
    // 0x080013EC: b           L_08001430
    // 0x080013F0: nop

        goto L_08001430;
    // 0x080013F0: nop

L_080013F4:
    // 0x080013F4: bne         $t1, $zero, L_08001404
    if (ctx->r9 != 0) {
        // 0x080013F8: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_08001404;
    }
    // 0x080013F8: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x080013FC: beq         $t2, $zero, L_08001420
    if (ctx->r10 == 0) {
        // 0x08001400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001420;
    }
    // 0x08001400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_08001404:
    // 0x08001404: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x08001408: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x0800140C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001410: jalr        $t9
    // 0x08001414: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001414: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x08001418: b           L_08001430
    // 0x0800141C: nop

        goto L_08001430;
    // 0x0800141C: nop

L_08001420:
    // 0x08001420: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x08001424: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x08001428: jalr        $t9
    // 0x0800142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_08001430:
    // 0x08001430: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X153C) << 16);
    // 0x08001434: addiu       $t9, $t9, 0x153C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X153C));
    // 0x08001438: jalr        $t9
    // 0x0800143C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800143C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x08001440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001444:
    // 0x08001444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800144C: jr          $ra
    // 0x08001450: nop

    TRACE_RETURN()
    return;
    // 0x08001450: nop

;}
RECOMP_FUNC void func_08000DBC_6EF71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000DC0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000DC4: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000DC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000DCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000DD0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000DD4: lw          $a1, 0x2C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X2C);
    // 0x08000DD8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000DDC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000DE0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000DE4: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x08000DE8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08000DEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000DF0: lwc1        $f4, 0x10($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X10);
    // 0x08000DF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000DFC: addiu       $t9, $t9, -0x918
    ctx->r25 = ADD32(ctx->r25, -0X918);
    // 0x08000E00: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x08000E04: lw          $a3, 0xC($t8)
    ctx->r7 = MEM_W(ctx->r24, 0XC);
    // 0x08000E08: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08000E0C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08000E10: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08000E14: jalr        $t9
    // 0x08000E18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000E1C: addiu       $t0, $zero, 0xFA
    ctx->r8 = ADD32(0, 0XFA);
    // 0x08000E20: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
    // 0x08000E24: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(32, 0X1894) << 16);
    // 0x08000E28: lwc1        $f8, 0x1894($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X1894));
    // 0x08000E2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E30: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000E34: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
    // 0x08000E38: swc1        $f8, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f8.u32l;
    // 0x08000E3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E48: jalr        $t9
    // 0x08000E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000E50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08000E54: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000E58: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08000E5C: lui         $t4, 0x40
    ctx->r12 = S32(0X40 << 16);
    // 0x08000E60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E64: addiu       $t3, $zero, 0x7E
    ctx->r11 = ADD32(0, 0X7E);
    // 0x08000E68: ori         $t4, $t4, 0x6E0
    ctx->r12 = ctx->r12 | 0X6E0;
    // 0x08000E6C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000E70: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x08000E74: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x08000E78: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08000E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E80: jalr        $t9
    // 0x08000E84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x08000E88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08000E90: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000E94: sb          $t5, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r13;
    // 0x08000E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000EA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EA4: jalr        $t9
    // 0x08000EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000EAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0XED4) << 16);
    // 0x08000EB8: jalr        $t9
    // 0x08000EBC: addiu       $a0, $a0, 0xED4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0XED4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000EBC: addiu       $a0, $a0, 0xED4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0XED4));
    after_4:
    // 0x08000EC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000EC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000ECC: jr          $ra
    // 0x08000ED0: nop

    TRACE_RETURN()
    return;
    // 0x08000ED0: nop

;}
RECOMP_FUNC void func_08000F94_6EF8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F94: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000F98: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000FA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000FA8: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000FAC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000FB0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000FB4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000FB8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x08000FBC: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x08000FC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000FC4: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000FC8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x08000FCC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000FD0: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08000FD4: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x08000FD8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FDC: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x08000FE0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000FE4: lui         $a2, 0x3DAA
    ctx->r6 = S32(0X3DAA << 16);
    // 0x08000FE8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000FEC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000FF0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000FF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000FF8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001000: jalr        $t9
    // 0x08001004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001008: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x0800100C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08001010: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x08001014: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x08001018: lbu         $t5, 0x8D($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X8D);
    // 0x0800101C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001020: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08001024: bne         $t5, $zero, L_08001060
    if (ctx->r13 != 0) {
        // 0x08001028: sw          $t4, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r12;
            goto L_08001060;
    }
    // 0x08001028: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
    // 0x0800102C: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x08001030: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x08001034: lui         $t8, 0x2AF
    ctx->r24 = S32(0X2AF << 16);
    // 0x08001038: sh          $v0, 0xD4($t6)
    MEM_H(0XD4, ctx->r14) = ctx->r2;
    // 0x0800103C: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x08001040: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001044: ori         $t8, $t8, 0x7E1
    ctx->r24 = ctx->r24 | 0X7E1;
    // 0x08001048: addiu       $t9, $t9, -0x7AB8
    ctx->r25 = ADD32(ctx->r25, -0X7AB8);
    // 0x0800104C: sh          $v0, 0xD4($t7)
    MEM_H(0XD4, ctx->r15) = ctx->r2;
    // 0x08001050: jalr        $t9
    // 0x08001054: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001054: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_1:
    // 0x08001058: b           L_080010EC
    // 0x0800105C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080010EC;
    // 0x0800105C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001060:
    // 0x08001060: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x08001064: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001068: sh          $zero, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = 0;
    // 0x0800106C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08001070: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x08001074: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x08001078: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x0800107C: jalr        $t9
    // 0x08001080: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001080: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x08001084: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001088: lui         $at, 0xFFFB
    ctx->r1 = S32(0XFFFB << 16);
    // 0x0800108C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08001090: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x08001094: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08001098: jal         0x0800157C
    // 0x0800109C: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
    func_0800157C_6EFEDC(rdram, ctx);
        goto after_3;
    // 0x0800109C: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
    after_3:
    // 0x080010A0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080010A4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x080010A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080010AC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080010B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010B4: addiu       $t9, $t9, -0x918
    ctx->r25 = ADD32(ctx->r25, -0X918);
    // 0x080010B8: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x080010BC: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x080010C0: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x080010C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x080010C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x080010CC: jalr        $t9
    // 0x080010D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080010D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x080010D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080010DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X10F8) << 16);
    // 0x080010E0: jalr        $t9
    // 0x080010E4: addiu       $a0, $a0, 0x10F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X10F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080010E4: addiu       $a0, $a0, 0x10F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X10F8));
    after_5:
    // 0x080010E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080010EC:
    // 0x080010EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080010F0: jr          $ra
    // 0x080010F4: nop

    TRACE_RETURN()
    return;
    // 0x080010F4: nop

;}
RECOMP_FUNC void func_080010F8_6EFA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001100: b           L_0800111C
    // 0x08001104: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
        goto L_0800111C;
    // 0x08001104: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800110C: beql        $zero, $at, L_0800113C
    if (0 == ctx->r1) {
        // 0x08001110: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_0800113C;
    }
    goto skip_0;
    // 0x08001110: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    skip_0:
    // 0x08001114: b           L_08001154
    // 0x08001118: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
        goto L_08001154;
    // 0x08001118: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_0800111C:
    // 0x0800111C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001120: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001124: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001128: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800112C: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08001130: b           L_08001150
    // 0x08001134: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
        goto L_08001150;
    // 0x08001134: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001138: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_0800113C:
    // 0x0800113C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001140: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001144: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08001148: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x0800114C: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
L_08001150:
    // 0x08001150: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_08001154:
    // 0x08001154: bne         $v1, $zero, L_08001190
    if (ctx->r3 != 0) {
        // 0x08001158: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001190;
    }
    // 0x08001158: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800115C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001160: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08001164: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08001168: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800116C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001170: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001174: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x08001178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800117C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001180: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08001184: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08001188: jalr        $t9
    // 0x0800118C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800118C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
L_08001190:
    // 0x08001190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001198: jr          $ra
    // 0x0800119C: nop

    TRACE_RETURN()
    return;
    // 0x0800119C: nop

;}
RECOMP_FUNC void func_080011A0_6EFB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080011A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080011A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080011AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011B0: sh          $zero, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = 0;
    // 0x080011B4: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x080011B8: jalr        $t9
    // 0x080011BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080011C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080011C4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080011C8: bne         $v0, $zero, L_080011E8
    if (ctx->r2 != 0) {
        // 0x080011CC: sw          $v0, 0xD8($a2)
        MEM_W(0XD8, ctx->r6) = ctx->r2;
            goto L_080011E8;
    }
    // 0x080011CC: sw          $v0, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r2;
    // 0x080011D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011D4: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080011D8: jalr        $t9
    // 0x080011DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011DC: nop

    after_1:
    // 0x080011E0: b           L_08001210
    // 0x080011E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001210;
    // 0x080011E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080011E8:
    // 0x080011E8: lw          $t6, 0xD8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD8);
    // 0x080011EC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080011F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X121C) << 16);
    // 0x080011FC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001200: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X121C));
    // 0x08001204: jalr        $t9
    // 0x08001208: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001208: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    after_2:
    // 0x0800120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001210:
    // 0x08001210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001214: jr          $ra
    // 0x08001218: nop

    TRACE_RETURN()
    return;
    // 0x08001218: nop

;}
RECOMP_FUNC void func_08000A20_6EF380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A28: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08000A2C: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x08000A30: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x08000A34: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x08000A38: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08000A3C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08000A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A44: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000A48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A50: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x08000A54: beq         $v0, $zero, L_08000A70
    if (ctx->r2 == 0) {
        // 0x08000A58: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000A70;
    }
    // 0x08000A58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000A5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A60: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A68: jalr        $t9
    // 0x08000A6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000A70:
    // 0x08000A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A78: jr          $ra
    // 0x08000A7C: nop

    TRACE_RETURN()
    return;
    // 0x08000A7C: nop

;}
RECOMP_FUNC void func_080005F4_6EEF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080005F8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080005FC: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000600: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000604: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08000608: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800060C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000610: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000614: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000618: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800061C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x08000620: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000624: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000628: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800062C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000630: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000634: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(32, 0XA80) << 16);
    // 0x08000638: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x0800063C: addiu       $a1, $a1, 0xA80
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(32, 0XA80));
    // 0x08000640: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000644: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000648: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800064C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000650: jalr        $t9
    // 0x08000654: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000654: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08000658: beq         $v0, $zero, L_08000688
    if (ctx->r2 == 0) {
        // 0x0800065C: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_08000688;
    }
    // 0x0800065C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08000660: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x08000664: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000668: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x0800066C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000670: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000674: jalr        $t9
    // 0x08000678: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000678: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_1:
    // 0x0800067C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000680: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08000684: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000688:
    // 0x08000688: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x0800068C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000690: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x08000694: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000698: addiu       $t9, $t9, -0x918
    ctx->r25 = ADD32(ctx->r25, -0X918);
    // 0x0800069C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x080006A0: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x080006A4: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x080006A8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x080006AC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x080006B0: jalr        $t9
    // 0x080006B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x080006B8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x080006BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006C0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x080006C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X6E8) << 16);
    // 0x080006CC: addiu       $a0, $a0, 0x6E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X6E8));
    // 0x080006D0: jalr        $t9
    // 0x080006D4: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006D4: sh          $t2, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = ctx->r10;
    after_3:
    // 0x080006D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080006DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080006E0: jr          $ra
    // 0x080006E4: nop

    TRACE_RETURN()
    return;
    // 0x080006E4: nop

;}
RECOMP_FUNC void func_0800153C_6EFE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800153C: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001540: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001544: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x08001548: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800154C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08001550: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001554: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08001558: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x0800155C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08001560: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08001564: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
    // 0x08001568: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x0800156C: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x08001570: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x08001574: jr          $ra
    // 0x08001578: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x08001578: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_080012FC_6EFC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001300: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001308: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x0800130C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001310: jalr        $t9
    // 0x08001314: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001314: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001318: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800131C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001320: bne         $v0, $zero, L_08001340
    if (ctx->r2 != 0) {
        // 0x08001324: sw          $v0, 0xD8($v1)
        MEM_W(0XD8, ctx->r3) = ctx->r2;
            goto L_08001340;
    }
    // 0x08001324: sw          $v0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r2;
    // 0x08001328: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800132C: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001330: jalr        $t9
    // 0x08001334: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001334: nop

    after_1:
    // 0x08001338: b           L_08001368
    // 0x0800133C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001368;
    // 0x0800133C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001340:
    // 0x08001340: lw          $t6, 0xD8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XD8);
    // 0x08001344: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08001348: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800134C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001350: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X1374) << 16);
    // 0x08001354: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001358: addiu       $a0, $a0, 0x1374
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X1374));
    // 0x0800135C: jalr        $t9
    // 0x08001360: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001360: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    after_2:
    // 0x08001364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001368:
    // 0x08001368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800136C: jr          $ra
    // 0x08001370: nop

    TRACE_RETURN()
    return;
    // 0x08001370: nop

;}
RECOMP_FUNC void func_08000A80_6EF3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000A88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000A8C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000A90: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000A94: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A98: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000A9C: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000AA0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AA8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000AAC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AB4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x08000AB8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(32, 0X1890) << 16);
    // 0x08000ABC: lwc1        $f0, 0x1890($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X1890));
    // 0x08000AC0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x08000AC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AC8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000AD0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000AD4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000AD8: jalr        $t9
    // 0x08000ADC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000ADC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000AE0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x08000AE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000AE8: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08000AEC: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08000AF0: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
    // 0x08000AF4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000AF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AFC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B04: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000B08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000B10: jalr        $t9
    // 0x08000B14: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B14: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x08000B18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B1C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000B20: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000B24: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000B30: jalr        $t9
    // 0x08000B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000B38: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B3C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000B40: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000B44: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B4C: jalr        $t9
    // 0x08000B50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000B50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08000B54: beq         $v0, $zero, L_08000BB4
    if (ctx->r2 == 0) {
        // 0x08000B58: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08000BB4;
    }
    // 0x08000B58: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000B5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B60: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000B64: jalr        $t9
    // 0x08000B68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000B68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_5:
    // 0x08000B6C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08000B70: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000B74: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000B78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000B7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000B80: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08000B84: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000B88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000B8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B90: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000B94: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000B98: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08000B9C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x08000BA0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08000BA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000BA8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08000BAC: jalr        $t9
    // 0x08000BB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000BB0: nop

    after_6:
L_08000BB4:
    // 0x08000BB4: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x08000BB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BBC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000BC0: addiu       $t1, $t1, -0x6D4C
    ctx->r9 = ADD32(ctx->r9, -0X6D4C);
    // 0x08000BC4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x08000BC8: jalr        $t9
    // 0x08000BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x08000BD0: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x08000BD4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000BD8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000BDC: jalr        $t9
    // 0x08000BE0: lhu         $a0, 0x16($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000BE0: lhu         $a0, 0x16($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X16);
    after_8:
    // 0x08000BE4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000BE8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x08000BEC: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x08000BF0: jalr        $t9
    // 0x08000BF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000BF4: nop

    after_9:
    // 0x08000BF8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000BFC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08000C00: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x08000C04: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000C08: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000C0C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000C10: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000C14: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x08000C18: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000C1C: swc1        $f10, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f10.u32l;
    // 0x08000C20: jalr        $t9
    // 0x08000C24: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000C24: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    after_10:
    // 0x08000C28: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000C2C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x08000C30: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x08000C34: jalr        $t9
    // 0x08000C38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000C38: nop

    after_11:
    // 0x08000C3C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000C40: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08000C44: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x08000C48: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000C4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C50: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08000C54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0XC84) << 16);
    // 0x08000C5C: addiu       $a0, $a0, 0xC84
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0XC84));
    // 0x08000C60: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x08000C64: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000C68: jalr        $t9
    // 0x08000C6C: swc1        $f10, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000C6C: swc1        $f10, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f10.u32l;
    after_12:
    // 0x08000C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000C78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000C7C: jr          $ra
    // 0x08000C80: nop

    TRACE_RETURN()
    return;
    // 0x08000C80: nop

;}
RECOMP_FUNC void func_08000390_6EECF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800039C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x080003A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003A4: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x080003A8: addiu       $t9, $t9, -0xE08
    ctx->r25 = ADD32(ctx->r25, -0XE08);
    // 0x080003AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080003B0: jalr        $t9
    // 0x080003B4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003B4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_0:
    // 0x080003B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080003BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X410) << 16);
    // 0x080003C0: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x080003C4: lhu         $t7, 0x8A($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8A);
    // 0x080003C8: addiu       $a0, $a0, 0x410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X410));
    // 0x080003CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003D0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x080003D4: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x080003D8: bne         $t0, $zero, L_08000400
    if (ctx->r8 != 0) {
        // 0x080003DC: sh          $t8, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r24;
            goto L_08000400;
    }
    // 0x080003DC: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x080003E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080003E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003E8: sh          $zero, 0xD4($a2)
    MEM_H(0XD4, ctx->r6) = 0;
    // 0x080003EC: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    // 0x080003F0: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x080003F4: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x080003F8: jalr        $t9
    // 0x080003FC: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003FC: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    after_1:
L_08000400:
    // 0x08000400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000408: jr          $ra
    // 0x0800040C: nop

    TRACE_RETURN()
    return;
    // 0x0800040C: nop

;}
RECOMP_FUNC void func_08000268_6EEBC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000268: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800026C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000274: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000278: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x0800027C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000280: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000284: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08000288: beq         $t6, $zero, L_0800029C
    if (ctx->r14 == 0) {
        // 0x0800028C: addiu       $t9, $t9, -0x6D84
        ctx->r25 = ADD32(ctx->r25, -0X6D84);
            goto L_0800029C;
    }
    // 0x0800028C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000290: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000294: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x08000298: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
L_0800029C:
    // 0x0800029C: jalr        $t9
    // 0x080002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x080002A4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x080002A8: addiu       $v1, $v1, -0x6828
    ctx->r3 = ADD32(ctx->r3, -0X6828);
    // 0x080002AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002B4: jalr        $v1
    // 0x080002B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080002B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x080002BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080002C0: bne         $v0, $at, L_080002D4
    if (ctx->r2 != ctx->r1) {
        // 0x080002C4: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_080002D4;
    }
    // 0x080002C4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080002C8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x080002CC: b           L_08000310
    // 0x080002D0: sh          $t8, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r24;
        goto L_08000310;
    // 0x080002D0: sh          $t8, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r24;
L_080002D4:
    // 0x080002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002D8: jalr        $v1
    // 0x080002DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x080002DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x080002E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080002E4: bne         $v0, $at, L_080002F8
    if (ctx->r2 != ctx->r1) {
        // 0x080002E8: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_080002F8;
    }
    // 0x080002E8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x080002EC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x080002F0: b           L_08000310
    // 0x080002F4: sh          $t0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r8;
        goto L_08000310;
    // 0x080002F4: sh          $t0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r8;
L_080002F8:
    // 0x080002F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000300: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X324) << 16);
    // 0x08000304: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08000308: jalr        $t9
    // 0x0800030C: addiu       $a0, $a0, 0x324
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X324));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800030C: addiu       $a0, $a0, 0x324
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X324));
    after_3:
L_08000310:
    // 0x08000310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000314: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000318: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800031C: jr          $ra
    // 0x08000320: nop

    TRACE_RETURN()
    return;
    // 0x08000320: nop

;}
RECOMP_FUNC void func_08000324_6EEC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800032C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000330: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000334: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000338: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x0800033C: addiu       $t9, $t9, -0xE08
    ctx->r25 = ADD32(ctx->r25, -0XE08);
    // 0x08000340: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000344: jalr        $t9
    // 0x08000348: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000348: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800034C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000350: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X390) << 16);
    // 0x08000354: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x08000358: lhu         $t7, 0x8A($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8A);
    // 0x0800035C: addiu       $a0, $a0, 0x390
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X390));
    // 0x08000360: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000364: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000368: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x0800036C: bne         $t0, $zero, L_08000380
    if (ctx->r8 != 0) {
        // 0x08000370: sh          $t8, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r24;
            goto L_08000380;
    }
    // 0x08000370: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x08000374: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000378: jalr        $t9
    // 0x0800037C: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800037C: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    after_1:
L_08000380:
    // 0x08000380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000388: jr          $ra
    // 0x0800038C: nop

    TRACE_RETURN()
    return;
    // 0x0800038C: nop

;}
RECOMP_FUNC void func_08000C84_6EF5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000C88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000C94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000C98: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08000C9C: lw          $a3, 0xE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE0);
    // 0x08000CA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000CA8: lwc1        $f6, 0xDC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08000CAC: addiu       $t9, $t9, -0x254
    ctx->r25 = ADD32(ctx->r25, -0X254);
    // 0x08000CB0: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x08000CB4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08000CB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08000CC4: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CD0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000CD4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000CD8: bne         $v1, $zero, L_08000D04
    if (ctx->r3 != 0) {
        // 0x08000CDC: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08000D04;
    }
    // 0x08000CDC: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08000CE0: addiu       $t9, $t9, -0x535C
    ctx->r25 = ADD32(ctx->r25, -0X535C);
    // 0x08000CE4: jalr        $t9
    // 0x08000CE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x08000CEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000CF0: beq         $v0, $at, L_08000D04
    if (ctx->r2 == ctx->r1) {
        // 0x08000CF4: nop
    
            goto L_08000D04;
    }
    // 0x08000CF4: nop

    // 0x08000CF8: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x08000CFC: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08000D00: beq         $t8, $zero, L_08000DA8
    if (ctx->r24 == 0) {
        // 0x08000D04: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(32, 0XDBC) << 16);
            goto L_08000DA8;
    }
L_08000D04:
    // 0x08000D04: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(32, 0XDBC) << 16);
    // 0x08000D08: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08000D0C: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08000D10: addiu       $a1, $a1, 0xDBC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(32, 0XDBC));
    // 0x08000D14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000D18: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D20: jalr        $v0
    // 0x08000D24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08000D24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x08000D28: beq         $v0, $zero, L_08000D50
    if (ctx->r2 == 0) {
        // 0x08000D2C: addiu       $t0, $zero, 0x29
        ctx->r8 = ADD32(0, 0X29);
            goto L_08000D50;
    }
    // 0x08000D2C: addiu       $t0, $zero, 0x29
    ctx->r8 = ADD32(0, 0X29);
    // 0x08000D30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D34: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000D38: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000D3C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000D40: jalr        $t9
    // 0x08000D44: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D44: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_3:
    // 0x08000D48: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000D4C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000D50:
    // 0x08000D50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D58: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000D5C: jalr        $t9
    // 0x08000D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x08000D64: beq         $v0, $zero, L_08000D90
    if (ctx->r2 == 0) {
        // 0x08000D68: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000D90;
    }
    // 0x08000D68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000D6C: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x08000D70: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D74: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000D78: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000D7C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000D80: jalr        $t9
    // 0x08000D84: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D84: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_5:
    // 0x08000D88: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000D8C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000D90:
    // 0x08000D90: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x08000D94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D98: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x08000D9C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000DA0: jalr        $t9
    // 0x08000DA4: sh          $t2, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000DA4: sh          $t2, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r10;
    after_6:
L_08000DA8:
    // 0x08000DA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000DAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000DB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000DB4: jr          $ra
    // 0x08000DB8: nop

    TRACE_RETURN()
    return;
    // 0x08000DB8: nop

;}
RECOMP_FUNC void func_080007D4_6EF134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080007E0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080007E4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x080007E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007EC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080007F0: bne         $v0, $zero, L_080008DC
    if (ctx->r2 != 0) {
        // 0x080007F4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080008DC;
    }
    // 0x080007F4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080007F8: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080007FC: jalr        $t9
    // 0x08000800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000804: beq         $v0, $zero, L_08000864
    if (ctx->r2 == 0) {
        // 0x08000808: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000864;
    }
    // 0x08000808: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800080C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08000810: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000814: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x08000818: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800081C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08000820: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000824: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000828: lui         $a2, 0x3D63
    ctx->r6 = S32(0X3D63 << 16);
    // 0x0800082C: ori         $a2, $a2, 0x8E39
    ctx->r6 = ctx->r6 | 0X8E39;
    // 0x08000830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000838: jalr        $t9
    // 0x0800083C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800083C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000844: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000848: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800084C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08000854: jalr        $t9
    // 0x08000858: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000858: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    after_2:
    // 0x0800085C: b           L_080008E0
    // 0x08000860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080008E0;
    // 0x08000860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000864:
    // 0x08000864: lbu         $t0, 0xE8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XE8);
    // 0x08000868: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x0800086C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x08000870: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000874: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x08000878: bgtz        $t2, L_0800089C
    if (SIGNED(ctx->r10) > 0) {
        // 0x0800087C: sb          $t1, 0xE8($a0)
        MEM_B(0XE8, ctx->r4) = ctx->r9;
            goto L_0800089C;
    }
    // 0x0800087C: sb          $t1, 0xE8($a0)
    MEM_B(0XE8, ctx->r4) = ctx->r9;
    // 0x08000880: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000884: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000888: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X5F4) << 16);
    // 0x0800088C: jalr        $t9
    // 0x08000890: addiu       $a0, $a0, 0x5F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000890: addiu       $a0, $a0, 0x5F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5F4));
    after_3:
    // 0x08000894: b           L_080008E0
    // 0x08000898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080008E0;
    // 0x08000898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800089C:
    // 0x0800089C: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x080008A0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008A4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080008A8: lui         $a2, 0x3D63
    ctx->r6 = S32(0X3D63 << 16);
    // 0x080008AC: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x080008B0: sb          $zero, 0xE8($a0)
    MEM_B(0XE8, ctx->r4) = 0;
    // 0x080008B4: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
    // 0x080008B8: ori         $a2, $a2, 0x8E39
    ctx->r6 = ctx->r6 | 0X8E39;
    // 0x080008BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008C0: jalr        $t9
    // 0x080008C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080008C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080008C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X8EC) << 16);
    // 0x080008D4: jalr        $t9
    // 0x080008D8: addiu       $a0, $a0, 0x8EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X8EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080008D8: addiu       $a0, $a0, 0x8EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X8EC));
    after_5:
L_080008DC:
    // 0x080008DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008E0:
    // 0x080008E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080008E4: jr          $ra
    // 0x080008E8: nop

    TRACE_RETURN()
    return;
    // 0x080008E8: nop

;}
RECOMP_FUNC void func_08000944_6EF2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800094C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000950: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000958: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800095C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000960: bne         $v0, $zero, L_08000974
    if (ctx->r2 != 0) {
        // 0x08000964: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000974;
    }
    // 0x08000964: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000968: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800096C: jalr        $t9
    // 0x08000970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08000974:
    // 0x08000974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800097C: jr          $ra
    // 0x08000980: nop

    TRACE_RETURN()
    return;
    // 0x08000980: nop

;}
RECOMP_FUNC void func_08000984_6EF2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000984: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800098C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000990: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000994: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000998: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800099C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009A0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x080009A4: beq         $t6, $zero, L_080009B8
    if (ctx->r14 == 0) {
        // 0x080009A8: lui         $a2, 0x3E2A
        ctx->r6 = S32(0X3E2A << 16);
            goto L_080009B8;
    }
    // 0x080009A8: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x080009AC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080009B0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x080009B4: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
L_080009B8:
    // 0x080009B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009BC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009C4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080009C8: jalr        $t9
    // 0x080009CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080009D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080009D4: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x080009D8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080009DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009E0: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x080009E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0XA20) << 16);
    // 0x080009EC: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x080009F0: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080009F4: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080009F8: addiu       $a0, $a0, 0xA20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0XA20));
    // 0x080009FC: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08000A00: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08000A04: jalr        $t9
    // 0x08000A08: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A08: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x08000A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A18: jr          $ra
    // 0x08000A1C: nop

    TRACE_RETURN()
    return;
    // 0x08000A1C: nop

;}
RECOMP_FUNC void func_0800121C_6EFB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800121C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001220: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001228: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800122C: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x08001230: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001234: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001238: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x0800123C: beq         $t7, $zero, L_08001264
    if (ctx->r15 == 0) {
        // 0x08001240: addiu       $t9, $t9, 0xE90
        ctx->r25 = ADD32(ctx->r25, 0XE90);
            goto L_08001264;
    }
    // 0x08001240: addiu       $t9, $t9, 0xE90
    ctx->r25 = ADD32(ctx->r25, 0XE90);
    // 0x08001244: jalr        $t9
    // 0x08001248: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001248: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_0:
    // 0x0800124C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001250: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001254: jalr        $t9
    // 0x08001258: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001258: nop

    after_1:
    // 0x0800125C: b           L_080012EC
    // 0x08001260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080012EC;
    // 0x08001260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001264:
    // 0x08001264: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x08001268: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x0800126C: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x08001270: lhu         $v0, 0xD4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XD4);
    // 0x08001274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001278: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x0800127C: bne         $t8, $zero, L_0800128C
    if (ctx->r24 != 0) {
        // 0x08001280: andi        $t0, $v0, 0x8
        ctx->r8 = ctx->r2 & 0X8;
            goto L_0800128C;
    }
    // 0x08001280: andi        $t0, $v0, 0x8
    ctx->r8 = ctx->r2 & 0X8;
    // 0x08001284: beq         $t0, $zero, L_0800129C
    if (ctx->r8 == 0) {
        // 0x08001288: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_0800129C;
    }
    // 0x08001288: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
L_0800128C:
    // 0x0800128C: jalr        $t9
    // 0x08001290: addiu       $a1, $zero, -0x6
    ctx->r5 = ADD32(0, -0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001290: addiu       $a1, $zero, -0x6
    ctx->r5 = ADD32(0, -0X6);
    after_2:
    // 0x08001294: b           L_080012D8
    // 0x08001298: nop

        goto L_080012D8;
    // 0x08001298: nop

L_0800129C:
    // 0x0800129C: bne         $t1, $zero, L_080012AC
    if (ctx->r9 != 0) {
        // 0x080012A0: andi        $t2, $v0, 0x4
        ctx->r10 = ctx->r2 & 0X4;
            goto L_080012AC;
    }
    // 0x080012A0: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x080012A4: beq         $t2, $zero, L_080012C8
    if (ctx->r10 == 0) {
        // 0x080012A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080012C8;
    }
    // 0x080012A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_080012AC:
    // 0x080012AC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x080012B0: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x080012B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012B8: jalr        $t9
    // 0x080012BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080012BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x080012C0: b           L_080012D8
    // 0x080012C4: nop

        goto L_080012D8;
    // 0x080012C4: nop

L_080012C8:
    // 0x080012C8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X1454) << 16);
    // 0x080012CC: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X1454));
    // 0x080012D0: jalr        $t9
    // 0x080012D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080012D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_080012D8:
    // 0x080012D8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0X153C) << 16);
    // 0x080012DC: addiu       $t9, $t9, 0x153C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0X153C));
    // 0x080012E0: jalr        $t9
    // 0x080012E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080012E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080012E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080012EC:
    // 0x080012EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080012F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080012F4: jr          $ra
    // 0x080012F8: nop

    TRACE_RETURN()
    return;
    // 0x080012F8: nop

;}
RECOMP_FUNC void func_0800157C_6EFEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800157C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08001580: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08001584: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001588: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x0800158C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x08001590: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x08001594: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x08001598: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x0800159C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080015A0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x080015A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x080015A8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x080015AC: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x080015B0: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x080015B4: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x080015B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080015BC: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x080015C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x080015C4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x080015C8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x080015CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080015D0: addiu       $s7, $s7, -0x61F8
    ctx->r23 = ADD32(ctx->r23, -0X61F8);
    // 0x080015D4: addiu       $s5, $s5, 0x71A8
    ctx->r21 = ADD32(ctx->r21, 0X71A8);
    // 0x080015D8: addiu       $s4, $s4, 0x2088
    ctx->r20 = ADD32(ctx->r20, 0X2088);
    // 0x080015DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x080015E0: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x080015E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_080015E8:
    // 0x080015E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x080015EC: jalr        $s5
    // 0x080015F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x080015F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080015F4: beq         $v0, $zero, L_0800164C
    if (ctx->r2 == 0) {
        // 0x080015F8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800164C;
    }
    // 0x080015F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080015FC: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x08001600: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08001604: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x08001608: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x0800160C: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08001610: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08001614: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08001618: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x0800161C: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x08001620: ori         $t7, $t6, 0x800
    ctx->r15 = ctx->r14 | 0X800;
    // 0x08001624: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x08001628: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x0800162C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x08001630: jalr        $s7
    // 0x08001634: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_1;
    // 0x08001634: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x08001638: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x0800163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001640: addiu       $a2, $zero, 0x3F0
    ctx->r6 = ADD32(0, 0X3F0);
    // 0x08001644: jalr        $s3
    // 0x08001648: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x08001648: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    after_2:
L_0800164C:
    // 0x0800164C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08001650: bnel        $s1, $fp, L_080015E8
    if (ctx->r17 != ctx->r30) {
        // 0x08001654: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_080015E8;
    }
    goto skip_0;
    // 0x08001654: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x08001658: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x0800165C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08001660: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001664: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08001668: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x0800166C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x08001670: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08001674: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08001678: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0800167C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x08001680: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x08001684: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x08001688: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0800168C: jr          $ra
    // 0x08001690: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08001690: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_080008EC_6EF24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008F4: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080008F8: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080008FC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000900: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000904: beql        $t7, $zero, L_08000938
    if (ctx->r15 == 0) {
        // 0x08000908: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000938;
    }
    goto skip_0;
    // 0x08000908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800090C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08000910: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x08000914: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x08000918: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x0800091C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08000920: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000924: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000928: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X944) << 16);
    // 0x0800092C: jalr        $t9
    // 0x08000930: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X944));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000930: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X944));
    after_0:
    // 0x08000934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000938:
    // 0x08000938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800093C: jr          $ra
    // 0x08000940: nop

    TRACE_RETURN()
    return;
    // 0x08000940: nop

;}
RECOMP_FUNC void func_08001454_6EFDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001454: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08001458: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x0800145C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08001460: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08001464: lbu         $t6, 0xDD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDD);
    // 0x08001468: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800146C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08001470: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08001474: sb          $t9, 0xDD($a0)
    MEM_B(0XDD, ctx->r4) = ctx->r25;
    // 0x08001478: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x0800147C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08001480: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001484: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08001488: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0800148C: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x08001490: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08001494: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x08001498: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x0800149C: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x080014A0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x080014A4: addiu       $t5, $t5, 0x39E0
    ctx->r13 = ADD32(ctx->r13, 0X39E0);
    // 0x080014A8: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x080014AC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080014B0: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x080014B4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080014B8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080014BC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080014C0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x080014C4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x080014C8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080014CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080014D0: lbu         $t0, 0xDC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDC);
    // 0x080014D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014D8: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080014DC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x080014E0: lbu         $t1, 0xDD($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XDD);
    // 0x080014E4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x080014E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x080014EC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080014F0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x080014F4: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x080014F8: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x080014FC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08001500: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08001504: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x08001508: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0800150C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08001510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08001514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800151C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001520: jalr        $t9
    // 0x08001524: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001524: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08001528: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0800152C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08001530: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08001534: jr          $ra
    // 0x08001538: nop

    TRACE_RETURN()
    return;
    // 0x08001538: nop

;}
RECOMP_FUNC void func_08000464_6EEDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000468: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800046C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000470: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000474: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000478: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x0800047C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000480: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000484: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000488: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800048C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x08000490: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000498: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x0800049C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x080004A0: beq         $t9, $zero, L_080004B4
    if (ctx->r25 == 0) {
        // 0x080004A4: addiu       $t3, $sp, 0x2C
        ctx->r11 = ADD32(ctx->r29, 0X2C);
            goto L_080004B4;
    }
    // 0x080004A4: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x080004A8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080004AC: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x080004B0: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
L_080004B4:
    // 0x080004B4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x080004B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004BC: addiu       $t9, $t9, -0x33C8
    ctx->r25 = ADD32(ctx->r25, -0X33C8);
    // 0x080004C0: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    // 0x080004C4: lw          $a2, 0xC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XC);
    // 0x080004C8: lw          $a3, 0x10($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X10);
    // 0x080004CC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x080004D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x080004D4: jalr        $t9
    // 0x080004D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x080004DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080004E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004E4: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080004E8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x080004EC: nop

    // 0x080004F0: bc1tl       L_08000598
    if (c1cs) {
        // 0x080004F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000598;
    }
    goto skip_0;
    // 0x080004F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x080004F8: jalr        $t9
    // 0x080004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000500: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000504: addiu       $v1, $v1, -0x6828
    ctx->r3 = ADD32(ctx->r3, -0X6828);
    // 0x08000508: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x0800050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000510: jalr        $v1
    // 0x08000514: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08000514: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x08000518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800051C: bne         $v0, $at, L_08000530
    if (ctx->r2 != ctx->r1) {
        // 0x08000520: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_08000530;
    }
    // 0x08000520: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000524: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x08000528: b           L_08000594
    // 0x0800052C: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
        goto L_08000594;
    // 0x0800052C: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
L_08000530:
    // 0x08000530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000534: jalr        $v1
    // 0x08000538: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000538: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x0800053C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000540: bne         $v0, $at, L_08000554
    if (ctx->r2 != ctx->r1) {
        // 0x08000544: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000554;
    }
    // 0x08000544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000548: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x0800054C: b           L_08000594
    // 0x08000550: sh          $t5, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r13;
        goto L_08000594;
    // 0x08000550: sh          $t5, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r13;
L_08000554:
    // 0x08000554: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000558: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800055C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000560: lui         $a2, 0x3D63
    ctx->r6 = S32(0X3D63 << 16);
    // 0x08000564: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08000568: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    // 0x0800056C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000570: ori         $a2, $a2, 0x8E39
    ctx->r6 = ctx->r6 | 0X8E39;
    // 0x08000574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000578: jalr        $t9
    // 0x0800057C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800057C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000580: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000584: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000588: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X5A8) << 16);
    // 0x0800058C: jalr        $t9
    // 0x08000590: addiu       $a0, $a0, 0x5A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000590: addiu       $a0, $a0, 0x5A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X5A8));
    after_5:
L_08000594:
    // 0x08000594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000598:
    // 0x08000598: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800059C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080005A0: jr          $ra
    // 0x080005A4: nop

    TRACE_RETURN()
    return;
    // 0x080005A4: nop

;}
RECOMP_FUNC void func_08000ED4_6EF834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000EDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000EE0: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x08000EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000EEC: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x08000EF0: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08000EF4: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000EF8: addiu       $t0, $t9, -0xA
    ctx->r8 = ADD32(ctx->r25, -0XA);
    // 0x08000EFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F00: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x08000F04: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000F08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000F0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000F10: jalr        $t9
    // 0x08000F14: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F14: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    after_0:
    // 0x08000F18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000F1C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(32, 0X1898) << 16);
    // 0x08000F20: ldc1        $f6, 0x1898($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(32, 0X1898));
    // 0x08000F24: lwc1        $f4, 0xD4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08000F28: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(32, 0X18A0) << 16);
    // 0x08000F2C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08000F30: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x08000F34: nop

    // 0x08000F38: bc1fl       L_08000F6C
    if (!c1cs) {
        // 0x08000F3C: lbu         $t1, 0xD0($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0XD0);
            goto L_08000F6C;
    }
    goto skip_0;
    // 0x08000F3C: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
    skip_0:
    // 0x08000F40: ldc1        $f8, 0x18A0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(32, 0X18A0));
    // 0x08000F44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F48: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000F4C: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x08000F50: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000F54: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    // 0x08000F58: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000F64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000F68: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
L_08000F6C:
    // 0x08000F6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F70: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000F74: bnel        $t1, $zero, L_08000F88
    if (ctx->r9 != 0) {
        // 0x08000F78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000F88;
    }
    goto skip_1;
    // 0x08000F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000F7C: jalr        $t9
    // 0x08000F80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F80: nop

    after_2:
    // 0x08000F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000F88:
    // 0x08000F88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F8C: jr          $ra
    // 0x08000F90: nop

    TRACE_RETURN()
    return;
    // 0x08000F90: nop

;}
RECOMP_FUNC void func_08000000_6EE960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000004: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800000C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08000010: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08000014: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000018: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(32, 0XF94) << 16);
    // 0x0800001C: addiu       $t9, $t9, 0xF94
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(32, 0XF94));
    // 0x08000020: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08000024: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x08000028: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x0800002C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000030: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x08000034: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08000038: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x0800003C: addiu       $t8, $zero, 0x3FF
    ctx->r24 = ADD32(0, 0X3FF);
    // 0x08000040: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000048: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800004C: sb          $v1, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r3;
    // 0x08000050: sb          $t7, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r15;
    // 0x08000054: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08000058: sb          $v1, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r3;
    // 0x0800005C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000060: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000068: jalr        $t9
    // 0x0800006C: sw          $v0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800006C: sw          $v0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r2;
    after_0:
    // 0x08000070: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000074: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800007C: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    // 0x08000080: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000084: jalr        $t9
    // 0x08000088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800008C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000090: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000098: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0800009C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x080000A0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x080000A4: jalr        $t9
    // 0x080000A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x080000AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(32, 0X188C) << 16);
    // 0x080000B0: lwc1        $f20, 0x188C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(32, 0X188C));
    // 0x080000B4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x080000B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000BC: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000C4: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x080000C8: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x080000CC: jalr        $t9
    // 0x080000D0: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000D0: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    after_3:
    // 0x080000D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000D8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080000DC: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x080000E0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000EC: jalr        $t9
    // 0x080000F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080000F4: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x080000F8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080000FC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08000100: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000104: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000108: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x0800010C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(32, 0X11A0) << 16);
    // 0x08000110: addiu       $a1, $a1, 0x11A0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(32, 0X11A0));
    // 0x08000114: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800011C: jalr        $v0
    // 0x08000120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000124: beq         $v0, $zero, L_08000184
    if (ctx->r2 == 0) {
        // 0x08000128: addiu       $t2, $zero, 0x29
        ctx->r10 = ADD32(0, 0X29);
            goto L_08000184;
    }
    // 0x08000128: addiu       $t2, $zero, 0x29
    ctx->r10 = ADD32(0, 0X29);
    // 0x0800012C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000130: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08000134: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000138: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x0800013C: jalr        $t9
    // 0x08000140: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000140: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_6:
    // 0x08000144: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x08000148: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800014C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000150: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x08000154: sw          $a0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r4;
    // 0x08000158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800015C: jalr        $t9
    // 0x08000160: sw          $s0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r16;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000160: sw          $s0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r16;
    after_7:
    // 0x08000164: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x08000168: lui         $t3, 0x2A0
    ctx->r11 = S32(0X2A0 << 16);
    // 0x0800016C: ori         $t3, $t3, 0x7E1
    ctx->r11 = ctx->r11 | 0X7E1;
    // 0x08000170: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x08000174: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x08000178: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x0800017C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x08000180: sw          $t3, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r11;
L_08000184:
    // 0x08000184: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08000188: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(32, 0X12FC) << 16);
    // 0x0800018C: addiu       $a1, $a1, 0x12FC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(32, 0X12FC));
    // 0x08000190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000194: jalr        $t9
    // 0x08000198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x0800019C: beq         $v0, $zero, L_08000208
    if (ctx->r2 == 0) {
        // 0x080001A0: addiu       $t4, $zero, 0x29
        ctx->r12 = ADD32(0, 0X29);
            goto L_08000208;
    }
    // 0x080001A0: addiu       $t4, $zero, 0x29
    ctx->r12 = ADD32(0, 0X29);
    // 0x080001A4: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x080001A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001AC: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x080001B0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001B4: addiu       $t5, $t5, 0x6DF8
    ctx->r13 = ADD32(ctx->r13, 0X6DF8);
    // 0x080001B8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x080001BC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x080001C0: jalr        $t9
    // 0x080001C4: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001C4: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_9:
    // 0x080001C8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x080001CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080001D0: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x080001D4: sw          $a0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r4;
    // 0x080001D8: sw          $s0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r16;
    // 0x080001DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080001E0: jalr        $t9
    // 0x080001E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080001E4: nop

    after_10:
    // 0x080001E8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x080001EC: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x080001F0: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x080001F4: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x080001F8: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x080001FC: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x08000200: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x08000204: sw          $t6, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r14;
L_08000208:
    // 0x08000208: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x0800020C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(32, 0X16A0) << 16);
    // 0x08000210: addiu       $a1, $a1, 0x16A0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(32, 0X16A0));
    // 0x08000214: beq         $t7, $zero, L_0800022C
    if (ctx->r15 == 0) {
        // 0x08000218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800022C;
    }
    // 0x08000218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800021C: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x08000220: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x08000224: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08000228: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
L_0800022C:
    // 0x0800022C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000230: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000234: jalr        $t9
    // 0x08000238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x0800023C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000240: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800024C: jalr        $t9
    // 0x08000250: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000250: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x08000254: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000258: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0800025C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000260: jr          $ra
    // 0x08000264: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000264: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08000410_6EED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000418: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800041C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000420: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000424: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000428: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800042C: bne         $v0, $zero, L_08000454
    if (ctx->r2 != 0) {
        // 0x08000430: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000454;
    }
    // 0x08000430: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000434: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08000438: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800043C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000440: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000444: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800044C: jalr        $t9
    // 0x08000450: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000450: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08000454:
    // 0x08000454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800045C: jr          $ra
    // 0x08000460: nop

    TRACE_RETURN()
    return;
    // 0x08000460: nop

;}
RECOMP_FUNC void func_08000754_6EF0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800075C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000760: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000764: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000768: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x0800076C: addiu       $t9, $t9, -0xE08
    ctx->r25 = ADD32(ctx->r25, -0XE08);
    // 0x08000770: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000774: jalr        $t9
    // 0x08000778: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000778: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_0:
    // 0x0800077C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000780: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X7D4) << 16);
    // 0x08000784: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x08000788: lhu         $t7, 0x8A($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8A);
    // 0x0800078C: addiu       $a0, $a0, 0x7D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X7D4));
    // 0x08000790: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000794: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000798: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x0800079C: bne         $t0, $zero, L_080007C4
    if (ctx->r8 != 0) {
        // 0x080007A0: sh          $t8, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r24;
            goto L_080007C4;
    }
    // 0x080007A0: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x080007A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080007A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007AC: sh          $zero, 0xD4($a2)
    MEM_H(0XD4, ctx->r6) = 0;
    // 0x080007B0: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    // 0x080007B4: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x080007B8: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x080007BC: jalr        $t9
    // 0x080007C0: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007C0: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    after_1:
L_080007C4:
    // 0x080007C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007CC: jr          $ra
    // 0x080007D0: nop

    TRACE_RETURN()
    return;
    // 0x080007D0: nop

;}
RECOMP_FUNC void func_080006E8_6EF048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x080006F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006FC: sh          $t6, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r14;
    // 0x08000700: addiu       $t9, $t9, -0xE08
    ctx->r25 = ADD32(ctx->r25, -0XE08);
    // 0x08000704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000708: jalr        $t9
    // 0x0800070C: lui         $a1, 0xBFC0
    ctx->r5 = S32(0XBFC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800070C: lui         $a1, 0xBFC0
    ctx->r5 = S32(0XBFC0 << 16);
    after_0:
    // 0x08000710: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000714: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(32, 0X754) << 16);
    // 0x08000718: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x0800071C: lhu         $t7, 0x8A($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8A);
    // 0x08000720: addiu       $a0, $a0, 0x754
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(32, 0X754));
    // 0x08000724: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000728: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x0800072C: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x08000730: bne         $t0, $zero, L_08000744
    if (ctx->r8 != 0) {
        // 0x08000734: sh          $t8, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r24;
            goto L_08000744;
    }
    // 0x08000734: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x08000738: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800073C: jalr        $t9
    // 0x08000740: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000740: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    after_1:
L_08000744:
    // 0x08000744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800074C: jr          $ra
    // 0x08000750: nop

    TRACE_RETURN()
    return;
    // 0x08000750: nop

;}
RECOMP_FUNC void func_080005DC_6F07EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080005E0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x080005E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080005EC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x080005F0: addiu       $s4, $a0, 0x5C
    ctx->r20 = ADD32(ctx->r4, 0X5C);
    // 0x080005F4: addiu       $t9, $t9, 0x136C
    ctx->r25 = ADD32(ctx->r25, 0X136C);
    // 0x080005F8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x080005FC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x08000600: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000604: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000608: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x0800060C: jalr        $t9
    // 0x08000610: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000610: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    after_0:
    // 0x08000614: lw          $t6, 0x8($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X8);
    // 0x08000618: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800061C: addiu       $t9, $t9, 0x358
    ctx->r25 = ADD32(ctx->r25, 0X358);
    // 0x08000620: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x08000624: lw          $t7, 0xC($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XC);
    // 0x08000628: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x0800062C: jalr        $t9
    // 0x08000630: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000630: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_1:
    // 0x08000634: lw          $t8, 0x2C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X2C);
    // 0x08000638: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x0800063C: blez        $t8, L_080006A0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x08000640: lui         $s2, 0x8001
        ctx->r18 = S32(0X8001 << 16);
            goto L_080006A0;
    }
    // 0x08000640: lui         $s2, 0x8001
    ctx->r18 = S32(0X8001 << 16);
    // 0x08000644: lui         $s3, 0x800
    ctx->r19 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x08000648: addiu       $s3, $s3, 0x32D8
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(33, 0X32D8));
    // 0x0800064C: addiu       $s2, $s2, 0x6F0
    ctx->r18 = ADD32(ctx->r18, 0X6F0);
    // 0x08000650: addiu       $s1, $zero, 0xC3
    ctx->r17 = ADD32(0, 0XC3);
    // 0x08000654: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
L_08000658:
    // 0x08000658: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x0800065C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x08000660: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x08000664: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x08000668: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x0800066C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08000670: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000674: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08000678: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x0800067C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x08000680: jalr        $s2
    // 0x08000684: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x08000684: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x08000688: lw          $t4, 0x2C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X2C);
    // 0x0800068C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x08000690: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x08000694: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x08000698: bnel        $at, $zero, L_08000658
    if (ctx->r1 != 0) {
        // 0x0800069C: lw          $a0, 0x30($s4)
        ctx->r4 = MEM_W(ctx->r20, 0X30);
            goto L_08000658;
    }
    goto skip_0;
    // 0x0800069C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    skip_0:
L_080006A0:
    // 0x080006A0: lui         $s3, 0x800
    ctx->r19 = S32(RELOC_HI16(33, 0X32D8) << 16);
    // 0x080006A4: addiu       $s3, $s3, 0x32D8
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(33, 0X32D8));
    // 0x080006A8: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x080006AC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x080006B0: lui         $s2, 0x8001
    ctx->r18 = S32(0X8001 << 16);
    // 0x080006B4: addiu       $s2, $s2, 0x6F0
    ctx->r18 = ADD32(ctx->r18, 0X6F0);
    // 0x080006B8: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x080006BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x080006C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080006C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080006C8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x080006CC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x080006D0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x080006D4: jalr        $s2
    // 0x080006D8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_3;
    // 0x080006D8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
    // 0x080006DC: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x080006E0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X32D4) << 16);
    // 0x080006E4: lw          $t9, 0x32D4($t9)
    ctx->r25 = MEM_W(ctx->r25, (int16_t)RELOC_LO16(33, 0X32D4));
    // 0x080006E8: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x080006EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080006F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080006F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080006F8: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x080006FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000700: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x08000704: jalr        $s2
    // 0x08000708: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_4;
    // 0x08000708: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_4:
    // 0x0800070C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x08000710: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(33, 0X32F0) << 16);
    // 0x08000714: lw          $t0, 0x32F0($t0)
    ctx->r8 = MEM_W(ctx->r8, (int16_t)RELOC_LO16(33, 0X32F0));
    // 0x08000718: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x0800071C: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x08000720: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x08000724: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x08000728: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x0800072C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000730: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x08000734: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x08000738: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x0800073C: jalr        $s2
    // 0x08000740: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_5;
    // 0x08000740: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x08000744: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X3C0) << 16);
    // 0x08000748: addiu       $t9, $t9, 0x3C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X3C0));
    // 0x0800074C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x08000750: lw          $a3, 0x28($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X28);
    // 0x08000754: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000758: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0800075C: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x08000760: jalr        $t9
    // 0x08000764: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000764: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_6:
    // 0x08000768: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800076C: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x08000770: jalr        $t9
    // 0x08000774: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000774: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    after_7:
    // 0x08000778: lw          $s0, 0x1C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X1C);
    // 0x0800077C: lw          $t5, 0x20($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X20);
    // 0x08000780: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000784: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000788: addiu       $t9, $t9, 0x9A4
    ctx->r25 = ADD32(ctx->r25, 0X9A4);
    // 0x0800078C: or          $t4, $s0, $at
    ctx->r12 = ctx->r16 | ctx->r1;
    // 0x08000790: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000798: jalr        $t9
    // 0x0800079C: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800079C: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    after_8:
    // 0x080007A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007A4: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x080007A8: jalr        $t9
    // 0x080007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x080007B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x980
    ctx->r25 = ADD32(ctx->r25, 0X980);
    // 0x080007B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080007BC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x080007C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080007C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080007C8: jalr        $t9
    // 0x080007CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080007CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_10:
    // 0x080007D0: lw          $a3, 0x24($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X24);
    // 0x080007D4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080007D8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080007DC: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x080007E0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x080007E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007E8: addiu       $t9, $t9, 0x110C
    ctx->r25 = ADD32(ctx->r25, 0X110C);
    // 0x080007EC: mflo        $a3
    ctx->r7 = lo;
    // 0x080007F0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080007F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007FC: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    // 0x08000800: jalr        $t9
    // 0x08000804: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000804: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    after_11:
    // 0x08000808: lw          $t8, 0x24($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X24);
    // 0x0800080C: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x08000810: bgez        $t0, L_0800081C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000814: sw          $t0, 0x24($s4)
        MEM_W(0X24, ctx->r20) = ctx->r8;
            goto L_0800081C;
    }
    // 0x08000814: sw          $t0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r8;
    // 0x08000818: sw          $zero, 0x24($s4)
    MEM_W(0X24, ctx->r20) = 0;
L_0800081C:
    // 0x0800081C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x08000820: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000824: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000828: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x0800082C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x08000830: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x08000834: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x08000838: jr          $ra
    // 0x0800083C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x0800083C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0800164C_6F185C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800164C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001650: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08001654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001658: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800165C: swc1        $f2, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f2.u32l;
    // 0x08001660: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08001664: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001668: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800166C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001670: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08001674: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08001678: bc1fl       L_08001698
    if (!c1cs) {
        // 0x0800167C: lwc1        $f6, 0x8($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
            goto L_08001698;
    }
    goto skip_0;
    // 0x0800167C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x08001680: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08001684: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001688: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x0800168C: b           L_0800169C
    // 0x08001690: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_0800169C;
    // 0x08001690: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x08001694: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
L_08001698:
    // 0x08001698: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_0800169C:
    // 0x0800169C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x080016A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016A4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080016A8: addiu       $t9, $t9, 0x33D4
    ctx->r25 = ADD32(ctx->r25, 0X33D4);
    // 0x080016AC: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x080016B0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x080016B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080016B8: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x080016BC: jalr        $t9
    // 0x080016C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x080016C4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080016C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016CC: addiu       $t9, $t9, 0x35D4
    ctx->r25 = ADD32(ctx->r25, 0X35D4);
    // 0x080016D0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x080016D4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x080016D8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x080016DC: jalr        $t9
    // 0x080016E0: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016E0: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    after_1:
    // 0x080016E4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080016E8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(33, 0X135C) << 16);
    // 0x080016EC: addiu       $t9, $t9, 0x135C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(33, 0X135C));
    // 0x080016F0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x080016F4: beq         $a0, $zero, L_08001704
    if (ctx->r4 == 0) {
        // 0x080016F8: nop
    
            goto L_08001704;
    }
    // 0x080016F8: nop

    // 0x080016FC: jalr        $t9
    // 0x08001700: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001700: nop

    after_2:
L_08001704:
    // 0x08001704: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08001708: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x0800170C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x08001710: jalr        $v0
    // 0x08001714: addiu       $a0, $zero, 0x295
    ctx->r4 = ADD32(0, 0X295);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08001714: addiu       $a0, $zero, 0x295
    ctx->r4 = ADD32(0, 0X295);
    after_3:
    // 0x08001718: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0800171C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x08001720: jalr        $v0
    // 0x08001724: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08001724: nop

    after_4:
    // 0x08001728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800172C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001730: jr          $ra
    // 0x08001734: nop

    TRACE_RETURN()
    return;
    // 0x08001734: nop

;}
RECOMP_FUNC void func_0800139C_6F15AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800139C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080013A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080013A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080013A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080013AC: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x080013B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080013B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080013B8: beq         $v0, $zero, L_080013D4
    if (ctx->r2 == 0) {
        // 0x080013BC: addiu       $t6, $zero, 0x20
        ctx->r14 = ADD32(0, 0X20);
            goto L_080013D4;
    }
    // 0x080013BC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x080013C0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x080013C4: beq         $v0, $v1, L_080014B8
    if (ctx->r2 == ctx->r3) {
        // 0x080013C8: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_080014B8;
    }
    // 0x080013C8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080013CC: b           L_08001560
    // 0x080013D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001560;
    // 0x080013D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013D4:
    // 0x080013D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080013D8: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x080013DC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080013E0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x080013E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080013E8: jalr        $t9
    // 0x080013EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080013F0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080013F4: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x080013F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080013FC: lw          $t7, 0x30($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X30);
    // 0x08001400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001404: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001408: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800140C: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08001410: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08001414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800141C: sw          $t8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r24;
    // 0x08001420: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x08001424: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x08001428: jalr        $t9
    // 0x0800142C: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800142C: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    after_1:
    // 0x08001430: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001434: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001438: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x0800143C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08001440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001444: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08001448: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0800144C: jalr        $t9
    // 0x08001450: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001450: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_2:
    // 0x08001454: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001458: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x0800145C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001468: jalr        $t9
    // 0x0800146C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800146C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001470: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001474: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08001478: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800147C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x08001480: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x08001484: jalr        $t9
    // 0x08001488: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001488: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_4:
    // 0x0800148C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001490: addiu       $t9, $t9, 0x7360
    ctx->r25 = ADD32(ctx->r25, 0X7360);
    // 0x08001494: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001498: addiu       $a1, $zero, 0x1B1
    ctx->r5 = ADD32(0, 0X1B1);
    // 0x0800149C: jalr        $t9
    // 0x080014A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080014A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x080014A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080014A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x080014AC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x080014B0: b           L_0800155C
    // 0x080014B4: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
        goto L_0800155C;
    // 0x080014B4: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
L_080014B8:
    // 0x080014B8: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x080014BC: bnel        $v1, $t1, L_080014D4
    if (ctx->r3 != ctx->r9) {
        // 0x080014C0: lwc1        $f12, 0xC($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
            goto L_080014D4;
    }
    goto skip_0;
    // 0x080014C0: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x080014C4: lhu         $t2, 0x18($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X18);
    // 0x080014C8: xori        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 ^ 0X2;
    // 0x080014CC: sh          $t3, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r11;
    // 0x080014D0: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
L_080014D4:
    // 0x080014D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(33, 0X3270) << 16);
    // 0x080014D8: ldc1        $f6, 0x3270($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(33, 0X3270));
    // 0x080014DC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x080014E0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x080014E4: nop

    // 0x080014E8: bc1fl       L_08001560
    if (!c1cs) {
        // 0x080014EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001560;
    }
    goto skip_1;
    // 0x080014EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x080014F0: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080014F4: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x080014F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x080014FC: nop

    // 0x08001500: bc1fl       L_08001518
    if (!c1cs) {
        // 0x08001504: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_08001518;
    }
    goto skip_2;
    // 0x08001504: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_2:
    // 0x08001508: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x0800150C: b           L_08001518
    // 0x08001510: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_08001518;
    // 0x08001510: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x08001514: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_08001518:
    // 0x08001518: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x0800151C: nop

    // 0x08001520: bc1fl       L_0800153C
    if (!c1cs) {
        // 0x08001524: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_0800153C;
    }
    goto skip_3;
    // 0x08001524: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_3:
    // 0x08001528: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800152C: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x08001530: b           L_0800155C
    // 0x08001534: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
        goto L_0800155C;
    // 0x08001534: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x08001538: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_0800153C:
    // 0x0800153C: nop

    // 0x08001540: bc1fl       L_08001558
    if (!c1cs) {
        // 0x08001544: add.s       $f16, $f0, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_08001558;
    }
    goto skip_4;
    // 0x08001544: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
    skip_4:
    // 0x08001548: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x0800154C: b           L_0800155C
    // 0x08001550: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
        goto L_0800155C;
    // 0x08001550: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08001554: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
L_08001558:
    // 0x08001558: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
L_0800155C:
    // 0x0800155C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001560:
    // 0x08001560: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001564: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001568: jr          $ra
    // 0x0800156C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800156C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
