#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001410_70B450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001410: lb          $t6, 0xD2($a0)
    ctx->r14 = MEM_B(ctx->r4, 0XD2);
    // 0x08001414: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08001418: bne         $t6, $at, L_08001424
    if (ctx->r14 != ctx->r1) {
        // 0x0800141C: nop
    
            goto L_08001424;
    }
    // 0x0800141C: nop

    // 0x08001420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08001424:
    // 0x08001424: jr          $ra
    // 0x08001428: nop

    TRACE_RETURN()
    return;
    // 0x08001428: nop

;}
RECOMP_FUNC void func_08000A08_70AA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A14: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000A18: lui         $t8, 0x2E0
    ctx->r24 = S32(0X2E0 << 16);
    // 0x08000A1C: addiu       $t7, $zero, 0x1C0
    ctx->r15 = ADD32(0, 0X1C0);
    // 0x08000A20: beq         $v0, $zero, L_08000A3C
    if (ctx->r2 == 0) {
        // 0x08000A24: ori         $t8, $t8, 0x3A0
        ctx->r24 = ctx->r24 | 0X3A0;
            goto L_08000A3C;
    }
    // 0x08000A24: ori         $t8, $t8, 0x3A0
    ctx->r24 = ctx->r24 | 0X3A0;
    // 0x08000A28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A2C: beql        $v0, $at, L_08000A98
    if (ctx->r2 == ctx->r1) {
        // 0x08000A30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000A98;
    }
    goto skip_0;
    // 0x08000A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000A34: b           L_08000A98
    // 0x08000A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000A98;
    // 0x08000A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A3C:
    // 0x08000A3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A40: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000A44: sh          $t7, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r15;
    // 0x08000A48: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000A4C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A54: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08000A58: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000A64: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x08000A68: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000A70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000A74: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x08000A78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000A80: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000A84: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08000A88: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08000A8C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08000A90: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x08000A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A98:
    // 0x08000A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A9C: jr          $ra
    // 0x08000AA0: nop

    TRACE_RETURN()
    return;
    // 0x08000AA0: nop

;}
RECOMP_FUNC void func_080003F8_70A438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003F8: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x080003FC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000400: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x08000404: mflo        $v0
    ctx->r2 = lo;
    // 0x08000408: jr          $ra
    // 0x0800040C: nop

    TRACE_RETURN()
    return;
    // 0x0800040C: nop

;}
RECOMP_FUNC void func_08001434_70B474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001434: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001438: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800143C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x08001440: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001444: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x08001448: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800144C: jr          $ra
    // 0x08001450: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x08001450: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_0800078C_70A7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800078C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000794: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X6C4) << 16);
    // 0x08000798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800079C: addiu       $t9, $t9, 0x6C4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X6C4));
    // 0x080007A0: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x080007A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080007A8: jalr        $t9
    // 0x080007AC: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007AC: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x080007B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080007B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080007BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080007C0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080007C4: jalr        $t9
    // 0x080007C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080007CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007D0: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080007D4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080007D8: addiu       $a1, $a1, 0x7D40
    ctx->r5 = ADD32(ctx->r5, 0X7D40);
    // 0x080007DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080007E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080007E4: jalr        $t9
    // 0x080007E8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007E8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x080007EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080007F0: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x080007F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080007F8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x080007FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000800: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000808: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x0800080C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000810: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X764) << 16);
    // 0x08000814: addiu       $a0, $a0, 0x764
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(40, 0X764));
    // 0x08000818: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x0800081C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08000820: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08000824: jalr        $t9
    // 0x08000828: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000828: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_3:
    // 0x0800082C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000834: jr          $ra
    // 0x08000838: nop

    TRACE_RETURN()
    return;
    // 0x08000838: nop

;}
RECOMP_FUNC void func_080003E4_70A424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003E4: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x080003E8: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x080003EC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x080003F0: jr          $ra
    // 0x080003F4: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080003F4: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_0800036C_70A3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800036C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000370: beq         $a0, $zero, L_080003D4
    if (ctx->r4 == 0) {
        // 0x08000374: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_080003D4;
    }
    // 0x08000374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000378: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X144) << 16);
    // 0x0800037C: addiu       $t9, $t9, 0x144
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X144));
    // 0x08000380: jalr        $t9
    // 0x08000384: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000384: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000388: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0800038C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000390: addiu       $t9, $t9, 0x374
    ctx->r25 = ADD32(ctx->r25, 0X374);
    // 0x08000394: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x08000398: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x0800039C: jalr        $t9
    // 0x080003A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x080003A4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080003A8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080003AC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080003B0: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x080003B4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080003B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003BC: beql        $a1, $zero, L_080003D8
    if (ctx->r5 == 0) {
        // 0x080003C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080003D8;
    }
    goto skip_0;
    // 0x080003C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080003C4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080003C8: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x080003CC: jalr        $t9
    // 0x080003D0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003D0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_080003D4:
    // 0x080003D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003D8:
    // 0x080003D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080003DC: jr          $ra
    // 0x080003E0: nop

    TRACE_RETURN()
    return;
    // 0x080003E0: nop

;}
RECOMP_FUNC void func_08000144_70A184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000148: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000150: addiu       $v0, $v0, 0x2E0
    ctx->r2 = ADD32(ctx->r2, 0X2E0);
    // 0x08000154: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X27E0) << 16);
    // 0x08000158: lw          $a0, 0x27E0($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(40, 0X27E0));
    // 0x0800015C: jalr        $v0
    // 0x08000160: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000160: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08000164: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000168: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X27E4) << 16);
    // 0x0800016C: lw          $a0, 0x27E4($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(40, 0X27E4));
    // 0x08000170: jalr        $t9
    // 0x08000174: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000174: nop

    after_1:
    // 0x08000178: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800017C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X27E8) << 16);
    // 0x08000180: lw          $a0, 0x27E8($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(40, 0X27E8));
    // 0x08000184: jalr        $t9
    // 0x08000188: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000188: nop

    after_2:
    // 0x0800018C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000194: jr          $ra
    // 0x08000198: nop

    TRACE_RETURN()
    return;
    // 0x08000198: nop

;}
RECOMP_FUNC void func_0800019C_70A1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800019C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080001A0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x080001A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080001AC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x080001B0: addiu       $s3, $a0, 0x5C
    ctx->r19 = ADD32(ctx->r4, 0X5C);
    // 0x080001B4: addiu       $t9, $t9, 0x136C
    ctx->r25 = ADD32(ctx->r25, 0X136C);
    // 0x080001B8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x080001BC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x080001C0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080001C4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080001C8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x080001CC: jalr        $t9
    // 0x080001D0: or          $s5, $s3, $zero
    ctx->r21 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D0: or          $s5, $s3, $zero
    ctx->r21 = ctx->r19 | 0;
    after_0:
    // 0x080001D4: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x080001D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001DC: addiu       $t9, $t9, 0x358
    ctx->r25 = ADD32(ctx->r25, 0X358);
    // 0x080001E0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x080001E4: lw          $t7, 0xC($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XC);
    // 0x080001E8: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x080001EC: jalr        $t9
    // 0x080001F0: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001F0: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    after_1:
    // 0x080001F4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x080001F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x080001FC: addiu       $s1, $zero, 0xB9
    ctx->r17 = ADD32(0, 0XB9);
    // 0x08000200: blez        $t8, L_0800025C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x08000204: lui         $s2, 0x8001
        ctx->r18 = S32(0X8001 << 16);
            goto L_0800025C;
    }
    // 0x08000204: lui         $s2, 0x8001
    ctx->r18 = S32(0X8001 << 16);
    // 0x08000208: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(40, 0X27E8) << 16);
    // 0x0800020C: addiu       $s4, $s4, 0x27E8
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(40, 0X27E8));
    // 0x08000210: addiu       $s2, $s2, 0x6F0
    ctx->r18 = ADD32(ctx->r18, 0X6F0);
    // 0x08000214: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
L_08000218:
    // 0x08000218: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x0800021C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x08000220: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x08000224: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08000228: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0800022C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000230: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08000234: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08000238: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x0800023C: jalr        $s2
    // 0x08000240: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x08000240: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x08000244: lw          $t3, 0x24($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X24);
    // 0x08000248: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0800024C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x08000250: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x08000254: bnel        $at, $zero, L_08000218
    if (ctx->r1 != 0) {
        // 0x08000258: lw          $a0, 0x2C($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X2C);
            goto L_08000218;
    }
    goto skip_0;
    // 0x08000258: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    skip_0:
L_0800025C:
    // 0x0800025C: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    // 0x08000260: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(40, 0X27E0) << 16);
    // 0x08000264: lw          $t5, 0x27E0($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(40, 0X27E0));
    // 0x08000268: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800026C: addiu       $t9, $t9, 0x6F0
    ctx->r25 = ADD32(ctx->r25, 0X6F0);
    // 0x08000270: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x08000274: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000278: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0800027C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000280: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x08000284: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000288: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x0800028C: jalr        $t9
    // 0x08000290: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000290: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_3:
    // 0x08000294: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000298: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x0800029C: jalr        $t9
    // 0x080002A0: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002A0: lw          $a0, 0x2C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X2C);
    after_4:
    // 0x080002A4: lw          $s0, 0x1C($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1C);
    // 0x080002A8: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x080002AC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080002B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002B4: addiu       $t9, $t9, 0x9A4
    ctx->r25 = ADD32(ctx->r25, 0X9A4);
    // 0x080002B8: or          $t6, $s0, $at
    ctx->r14 = ctx->r16 | ctx->r1;
    // 0x080002BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002C4: jalr        $t9
    // 0x080002C8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002C8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    after_5:
    // 0x080002CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002D0: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x080002D4: jalr        $t9
    // 0x080002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x080002DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002E0: addiu       $t9, $t9, 0x980
    ctx->r25 = ADD32(ctx->r25, 0X980);
    // 0x080002E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080002E8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x080002EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080002F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080002F4: jalr        $t9
    // 0x080002F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080002F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_7:
    // 0x080002FC: lw          $a3, 0x28($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X28);
    // 0x08000300: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000304: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08000308: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x0800030C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x08000310: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000314: addiu       $t9, $t9, 0x110C
    ctx->r25 = ADD32(ctx->r25, 0X110C);
    // 0x08000318: mflo        $a3
    ctx->r7 = lo;
    // 0x0800031C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08000320: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000328: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    // 0x0800032C: jalr        $t9
    // 0x08000330: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000330: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    after_8:
    // 0x08000334: lw          $t1, 0x28($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X28);
    // 0x08000338: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x0800033C: bgez        $t2, L_08000348
    if (SIGNED(ctx->r10) >= 0) {
        // 0x08000340: sw          $t2, 0x28($s3)
        MEM_W(0X28, ctx->r19) = ctx->r10;
            goto L_08000348;
    }
    // 0x08000340: sw          $t2, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r10;
    // 0x08000344: sw          $zero, 0x28($s3)
    MEM_W(0X28, ctx->r19) = 0;
L_08000348:
    // 0x08000348: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0800034C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000350: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000354: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x08000358: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x0800035C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x08000360: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x08000364: jr          $ra
    // 0x08000368: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000368: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08000000_70A040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08000010: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x08000014: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000018: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x0800001C: jalr        $t9
    // 0x08000020: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000020: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000024: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    // 0x08000028: beq         $v0, $zero, L_0800004C
    if (ctx->r2 == 0) {
        // 0x0800002C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800004C;
    }
    // 0x0800002C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000030: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000034: sh          $a0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r4;
    // 0x08000038: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800003C: jalr        $t9
    // 0x08000040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000044: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000048: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800004C:
    // 0x0800004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000058: jr          $ra
    // 0x0800005C: nop

    TRACE_RETURN()
    return;
    // 0x0800005C: nop

;}
RECOMP_FUNC void func_08000B98_70ABD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B98: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x08000B9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BA0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000BA4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000BA8: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x08000BAC: lb          $t6, 0xD2($a0)
    ctx->r14 = MEM_B(ctx->r4, 0XD2);
    // 0x08000BB0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000BB4: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000BB8: bnel        $t6, $zero, L_08000BCC
    if (ctx->r14 != 0) {
        // 0x08000BBC: lb          $v0, 0x2($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2);
            goto L_08000BCC;
    }
    goto skip_0;
    // 0x08000BBC: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
    skip_0:
    // 0x08000BC0: b           L_08000CE8
    // 0x08000BC4: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
        goto L_08000CE8;
    // 0x08000BC4: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
    // 0x08000BC8: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
L_08000BCC:
    // 0x08000BCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000BD0: bnel        $v0, $at, L_08000C30
    if (ctx->r2 != ctx->r1) {
        // 0x08000BD4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08000C30;
    }
    goto skip_1;
    // 0x08000BD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_1:
    // 0x08000BD8: lw          $t7, 0x68($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X68);
    // 0x08000BDC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08000BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000BE4: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x08000BE8: bne         $t8, $zero, L_08000C2C
    if (ctx->r24 != 0) {
        // 0x08000BEC: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_08000C2C;
    }
    // 0x08000BEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000BF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000BF4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08000BF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C00: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C04: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000C08: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000C0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000C10: swc1        $f4, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f4.u32l;
    // 0x08000C14: jalr        $t9
    // 0x08000C18: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C18: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    after_0:
    // 0x08000C1C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x08000C20: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000C24: b           L_08000CE8
    // 0x08000C28: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_08000CE8;
    // 0x08000C28: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000C2C:
    // 0x08000C2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_08000C30:
    // 0x08000C30: bne         $v0, $at, L_08000C60
    if (ctx->r2 != ctx->r1) {
        // 0x08000C34: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000C60;
    }
    // 0x08000C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C38: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C3C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C40: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000C44: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000C50: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x08000C54: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000C58: b           L_08000CE8
    // 0x08000C5C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_08000CE8;
    // 0x08000C5C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08000C60:
    // 0x08000C60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000C64: bne         $v0, $at, L_08000C94
    if (ctx->r2 != ctx->r1) {
        // 0x08000C68: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000C94;
    }
    // 0x08000C68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C70: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C74: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08000C78: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08000C7C: jalr        $t9
    // 0x08000C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000C84: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08000C88: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000C8C: b           L_08000CE8
    // 0x08000C90: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08000CE8;
    // 0x08000C90: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000C94:
    // 0x08000C94: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000C98: bne         $v0, $at, L_08000CE8
    if (ctx->r2 != ctx->r1) {
        // 0x08000C9C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000CE8;
    }
    // 0x08000C9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000CA0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x08000CA4: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x08000CA8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0XAA4) << 16);
    // 0x08000CAC: addiu       $a1, $a1, 0xAA4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0XAA4));
    // 0x08000CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000CB4: jalr        $t9
    // 0x08000CB8: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CB8: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_3:
    // 0x08000CBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000CC4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000CC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000CCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000CD0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08000CD4: jalr        $t9
    // 0x08000CD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000CDC: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x08000CE0: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000CE4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000CE8:
    // 0x08000CE8: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x08000CEC: sltiu       $at, $t4, 0xC
    ctx->r1 = ctx->r12 < 0XC ? 1 : 0;
    // 0x08000CF0: beq         $at, $zero, L_080013FC
    if (ctx->r1 == 0) {
        // 0x08000CF4: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_080013FC;
    }
    // 0x08000CF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x08000CF8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X274C) << 16);
    // 0x08000CFC: addu        $at, $at, $t4
    gpr jr_addend_08000D04 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x08000D00: lw          $t4, 0x274C($at)
    ctx->r12 = ADD32(ctx->r1, (int16_t)RELOC_LO16(40, 0X274C));
    // 0x08000D04: jr          $t4
    // 0x08000D08: nop

    switch (jr_addend_08000D04 >> 2) {
        case 0: goto L_08000D0C; break;
        case 1: goto L_08000DF4; break;
        case 2: goto L_08000E10; break;
        case 3: goto L_08000EDC; break;
        case 4: goto L_08000F54; break;
        case 5: goto L_08000FAC; break;
        case 6: goto L_08001078; break;
        case 7: goto L_08001254; break;
        case 8: goto L_080012BC; break;
        case 9: goto L_080012E8; break;
        case 10: goto L_08001324; break;
        case 11: goto L_0800132C; break;
        default: switch_error(__func__, 0x08000D04, 0x0800274C);
    }
    // 0x08000D08: nop

L_08000D0C:
    // 0x08000D0C: lui         $t7, 0x2E0
    ctx->r15 = S32(0X2E0 << 16);
    // 0x08000D10: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D14: addiu       $t6, $zero, 0x1C0
    ctx->r14 = ADD32(0, 0X1C0);
    // 0x08000D18: ori         $t7, $t7, 0x3A1
    ctx->r15 = ctx->r15 | 0X3A1;
    // 0x08000D1C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x08000D20: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000D24: sh          $t6, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r14;
    // 0x08000D28: sh          $t6, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = ctx->r14;
    // 0x08000D2C: sw          $t7, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r15;
    // 0x08000D30: sb          $t8, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r24;
    // 0x08000D34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D3C: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08000D40: jalr        $t9
    // 0x08000D44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x08000D48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D4C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D54: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000D58: jalr        $t9
    // 0x08000D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08000D60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D64: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000D68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D6C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08000D70: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000D74: jalr        $t9
    // 0x08000D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08000D7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D80: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000D84: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000D88: addiu       $a1, $a1, 0x7D40
    ctx->r5 = ADD32(ctx->r5, 0X7D40);
    // 0x08000D8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000D90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000D94: jalr        $t9
    // 0x08000D98: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D98: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x08000D9C: lw          $v0, 0xDC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XDC);
    // 0x08000DA0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X277C) << 16);
    // 0x08000DA4: lwc1        $f0, 0x277C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(40, 0X277C));
    // 0x08000DA8: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x08000DAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000DB0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x08000DB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08000DB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000DBC: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x08000DC0: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x08000DC4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000DC8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000DCC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000DD0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08000DD4: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x08000DD8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x08000DDC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x08000DE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08000DE4: sb          $t1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r9;
    // 0x08000DE8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000DEC: b           L_080013FC
    // 0x08000DF0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_080013FC;
    // 0x08000DF0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000DF4:
    // 0x08000DF4: lb          $t3, 0x2($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2);
    // 0x08000DF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000DFC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08000E00: bnel        $t3, $at, L_08001400
    if (ctx->r11 != ctx->r1) {
        // 0x08000E04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001400;
    }
    goto skip_2;
    // 0x08000E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08000E08: b           L_080013FC
    // 0x08000E0C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_080013FC;
    // 0x08000E0C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08000E10:
    // 0x08000E10: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
    // 0x08000E14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000E1C: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x08000E20: beq         $t5, $zero, L_08000E78
    if (ctx->r13 == 0) {
        // 0x08000E24: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08000E78;
    }
    // 0x08000E24: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000E28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E2C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E30: jalr        $t9
    // 0x08000E34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x08000E38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E3C: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000E40: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000E44: addiu       $a1, $a1, 0x4D40
    ctx->r5 = ADD32(ctx->r5, 0X4D40);
    // 0x08000E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000E50: jalr        $t9
    // 0x08000E54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000E54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x08000E58: lb          $t6, 0x3($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X3);
    // 0x08000E5C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08000E60: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08000E64: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000E68: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
    // 0x08000E6C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x08000E70: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x08000E74: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
L_08000E78:
    // 0x08000E78: andi        $t1, $v0, 0x20
    ctx->r9 = ctx->r2 & 0X20;
    // 0x08000E7C: bnel        $t1, $zero, L_08001400
    if (ctx->r9 != 0) {
        // 0x08000E80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001400;
    }
    goto skip_3;
    // 0x08000E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x08000E84: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08000E88: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08000E8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E90: bne         $v0, $at, L_08000EB0
    if (ctx->r2 != ctx->r1) {
        // 0x08000E94: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000EB0;
    }
    // 0x08000E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000E98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000EA0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000EA4: jalr        $t9
    // 0x08000EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x08000EAC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_08000EB0:
    // 0x08000EB0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000EB4: bne         $v0, $at, L_08000ED0
    if (ctx->r2 != ctx->r1) {
        // 0x08000EB8: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_08000ED0;
    }
    // 0x08000EB8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08000EBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000EC0: nop

    // 0x08000EC4: swc1        $f16, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f16.u32l;
    // 0x08000EC8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000ECC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_08000ED0:
    // 0x08000ED0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x08000ED4: b           L_080013FC
    // 0x08000ED8: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
        goto L_080013FC;
    // 0x08000ED8: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
L_08000EDC:
    // 0x08000EDC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000EE0: addiu       $v0, $v0, -0x7284
    ctx->r2 = ADD32(ctx->r2, -0X7284);
    // 0x08000EE4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000EE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EF4: jalr        $v0
    // 0x08000EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x08000EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x08000EFC: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x08000F00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000F04: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08000F08: lbu         $t4, 0x7C($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X7C);
    // 0x08000F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F10: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08000F14: bne         $t4, $at, L_080013FC
    if (ctx->r12 != ctx->r1) {
        // 0x08000F18: addiu       $a2, $zero, 0xC8
        ctx->r6 = ADD32(0, 0XC8);
            goto L_080013FC;
    }
    // 0x08000F18: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000F1C: jalr        $v0
    // 0x08000F20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x08000F20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x08000F24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F28: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000F2C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000F30: addiu       $a1, $a1, 0x7D40
    ctx->r5 = ADD32(ctx->r5, 0X7D40);
    // 0x08000F34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000F3C: jalr        $t9
    // 0x08000F40: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000F40: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x08000F44: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x08000F48: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000F4C: b           L_080013FC
    // 0x08000F50: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080013FC;
    // 0x08000F50: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000F54:
    // 0x08000F54: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000F58: addiu       $v0, $v0, -0x7284
    ctx->r2 = ADD32(ctx->r2, -0X7284);
    // 0x08000F5C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000F60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F64: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    // 0x08000F68: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000F6C: jalr        $v0
    // 0x08000F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x08000F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x08000F74: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x08000F78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000F7C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08000F80: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000F84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F88: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08000F8C: bne         $t7, $at, L_080013FC
    if (ctx->r15 != ctx->r1) {
        // 0x08000F90: addiu       $a2, $zero, 0xC8
        ctx->r6 = ADD32(0, 0XC8);
            goto L_080013FC;
    }
    // 0x08000F90: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08000F94: jalr        $v0
    // 0x08000F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x08000F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x08000F9C: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x08000FA0: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08000FA4: b           L_080013FC
    // 0x08000FA8: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_080013FC;
    // 0x08000FA8: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000FAC:
    // 0x08000FAC: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
    // 0x08000FB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000FB8: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x08000FBC: beq         $t0, $zero, L_08001014
    if (ctx->r8 == 0) {
        // 0x08000FC0: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08001014;
    }
    // 0x08000FC0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000FC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000FCC: jalr        $t9
    // 0x08000FD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000FD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x08000FD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FD8: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000FDC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000FE0: addiu       $a1, $a1, 0x4D40
    ctx->r5 = ADD32(ctx->r5, 0X4D40);
    // 0x08000FE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000FEC: jalr        $t9
    // 0x08000FF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000FF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x08000FF4: lb          $t1, 0x3($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X3);
    // 0x08000FF8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08000FFC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x08001000: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x08001004: sb          $t2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r10;
    // 0x08001008: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x0800100C: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x08001010: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
L_08001014:
    // 0x08001014: andi        $t5, $v0, 0x20
    ctx->r13 = ctx->r2 & 0X20;
    // 0x08001018: bnel        $t5, $zero, L_08001400
    if (ctx->r13 != 0) {
        // 0x0800101C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001400;
    }
    goto skip_4;
    // 0x0800101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x08001020: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08001024: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08001028: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800102C: bne         $v0, $at, L_0800104C
    if (ctx->r2 != ctx->r1) {
        // 0x08001030: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_0800104C;
    }
    // 0x08001030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001034: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001038: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800103C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001040: jalr        $t9
    // 0x08001044: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001044: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x08001048: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_0800104C:
    // 0x0800104C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001050: bne         $v0, $at, L_0800106C
    if (ctx->r2 != ctx->r1) {
        // 0x08001054: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_0800106C;
    }
    // 0x08001054: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08001058: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800105C: nop

    // 0x08001060: swc1        $f18, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f18.u32l;
    // 0x08001064: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001068: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_0800106C:
    // 0x0800106C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08001070: b           L_080013FC
    // 0x08001074: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
        goto L_080013FC;
    // 0x08001074: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
L_08001078:
    // 0x08001078: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
    // 0x0800107C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001080: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001084: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x08001088: beq         $t7, $zero, L_080010E0
    if (ctx->r15 == 0) {
        // 0x0800108C: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_080010E0;
    }
    // 0x0800108C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001090: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001094: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001098: jalr        $t9
    // 0x0800109C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800109C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x080010A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010A4: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080010A8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080010AC: addiu       $a1, $a1, 0x4D40
    ctx->r5 = ADD32(ctx->r5, 0X4D40);
    // 0x080010B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080010B8: jalr        $t9
    // 0x080010BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080010BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_21:
    // 0x080010C0: lb          $t8, 0x3($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3);
    // 0x080010C4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x080010C8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x080010CC: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x080010D0: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x080010D4: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x080010D8: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x080010DC: lw          $v0, 0x68($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X68);
L_080010E0:
    // 0x080010E0: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x080010E4: bnel        $t3, $zero, L_08001400
    if (ctx->r11 != 0) {
        // 0x080010E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001400;
    }
    goto skip_5;
    // 0x080010E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x080010EC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x080010F0: blez        $v0, L_080011FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x080010F4: slti        $at, $v0, 0x14
        ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
            goto L_080011FC;
    }
    // 0x080010F4: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x080010F8: beq         $at, $zero, L_080011FC
    if (ctx->r1 == 0) {
        // 0x080010FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080011FC;
    }
    // 0x080010FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001100: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001104: addiu       $t9, $t9, -0x6360
    ctx->r25 = ADD32(ctx->r25, -0X6360);
    // 0x08001108: jalr        $t9
    // 0x0800110C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800110C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_22:
    // 0x08001110: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08001114: addiu       $at, $zero, 0x1C0
    ctx->r1 = ADD32(0, 0X1C0);
    // 0x08001118: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x0800111C: lhu         $t4, 0x5C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X5C);
    // 0x08001120: bne         $t4, $at, L_080011FC
    if (ctx->r12 != ctx->r1) {
        // 0x08001124: lui         $at, 0x428C
        ctx->r1 = S32(0X428C << 16);
            goto L_080011FC;
    }
    // 0x08001124: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08001128: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800112C: lwc1        $f2, 0x8($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08001130: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08001134: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001138: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x0800113C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001140: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08001144: nop

    // 0x08001148: bc1fl       L_0800119C
    if (!c1cs) {
        // 0x0800114C: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_0800119C;
    }
    goto skip_6;
    // 0x0800114C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    skip_6:
    // 0x08001150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001154: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08001158: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800115C: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x08001160: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001164: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800116C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x08001170: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001174: bc1fl       L_0800119C
    if (!c1cs) {
        // 0x08001178: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_0800119C;
    }
    goto skip_7;
    // 0x08001178: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    skip_7:
    // 0x0800117C: jalr        $t9
    // 0x08001180: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001180: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_23:
    // 0x08001184: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08001188: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x0800118C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x08001190: b           L_080011FC
    // 0x08001194: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
        goto L_080011FC;
    // 0x08001194: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x08001198: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_0800119C:
    // 0x0800119C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080011A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080011A4: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x080011A8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x080011AC: nop

    // 0x080011B0: bc1fl       L_08001200
    if (!c1cs) {
        // 0x080011B4: lh          $v0, 0x4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X4);
            goto L_08001200;
    }
    goto skip_8;
    // 0x080011B4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    skip_8:
    // 0x080011B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080011BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080011C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080011C4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x080011C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080011CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080011D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080011D4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x080011D8: nop

    // 0x080011DC: bc1fl       L_08001200
    if (!c1cs) {
        // 0x080011E0: lh          $v0, 0x4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X4);
            goto L_08001200;
    }
    goto skip_9;
    // 0x080011E0: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    skip_9:
    // 0x080011E4: jalr        $t9
    // 0x080011E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080011E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
    // 0x080011EC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x080011F0: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080011F4: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x080011F8: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
L_080011FC:
    // 0x080011FC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_08001200:
    // 0x08001200: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001208: bne         $v0, $at, L_08001228
    if (ctx->r2 != ctx->r1) {
        // 0x0800120C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08001228;
    }
    // 0x0800120C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001210: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001214: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001218: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800121C: jalr        $t9
    // 0x08001220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x08001224: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_08001228:
    // 0x08001228: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x0800122C: bne         $v0, $at, L_08001248
    if (ctx->r2 != ctx->r1) {
        // 0x08001230: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_08001248;
    }
    // 0x08001230: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08001234: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001238: nop

    // 0x0800123C: swc1        $f8, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f8.u32l;
    // 0x08001240: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001244: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_08001248:
    // 0x08001248: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x0800124C: b           L_080013FC
    // 0x08001250: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
        goto L_080013FC;
    // 0x08001250: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
L_08001254:
    // 0x08001254: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001258: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x0800125C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001260: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x08001264: addiu       $a1, $a1, 0x7D40
    ctx->r5 = ADD32(ctx->r5, 0X7D40);
    // 0x08001268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800126C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001270: jalr        $t9
    // 0x08001274: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001274: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_26:
    // 0x08001278: lw          $t2, 0x68($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X68);
    // 0x0800127C: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x08001280: bnel        $t3, $zero, L_080012B0
    if (ctx->r11 != 0) {
        // 0x08001284: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_080012B0;
    }
    goto skip_10;
    // 0x08001284: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_10:
    // 0x08001288: lh          $t4, 0x4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X4);
    // 0x0800128C: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x08001290: bnel        $at, $zero, L_080012B0
    if (ctx->r1 != 0) {
        // 0x08001294: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_080012B0;
    }
    goto skip_11;
    // 0x08001294: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_11:
    // 0x08001298: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800129C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x080012A0: swc1        $f2, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f2.u32l;
    // 0x080012A4: swc1        $f2, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f2.u32l;
    // 0x080012A8: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
    // 0x080012AC: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_080012B0:
    // 0x080012B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080012B4: b           L_080013FC
    // 0x080012B8: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
        goto L_080013FC;
    // 0x080012B8: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
L_080012BC:
    // 0x080012BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012C0: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080012C4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080012C8: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x080012CC: addiu       $a1, $a1, 0x7D40
    ctx->r5 = ADD32(ctx->r5, 0X7D40);
    // 0x080012D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080012D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080012D8: jalr        $t9
    // 0x080012DC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080012DC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_27:
    // 0x080012E0: b           L_08001400
    // 0x080012E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001400;
    // 0x080012E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080012E8:
    // 0x080012E8: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x080012EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080012F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080012F4: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080012F8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x080012FC: nop

    // 0x08001300: bc1fl       L_08001400
    if (!c1cs) {
        // 0x08001304: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001400;
    }
    goto skip_12;
    // 0x08001304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_12:
    // 0x08001308: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800130C: nop

    // 0x08001310: swc1        $f2, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f2.u32l;
    // 0x08001314: swc1        $f2, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f2.u32l;
    // 0x08001318: lw          $t0, 0xDC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XDC);
    // 0x0800131C: b           L_080013FC
    // 0x08001320: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
        goto L_080013FC;
    // 0x08001320: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
L_08001324:
    // 0x08001324: b           L_080013FC
    // 0x08001328: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
        goto L_080013FC;
    // 0x08001328: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_0800132C:
    // 0x0800132C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x08001330: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x08001334: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x08001338: beq         $t1, $zero, L_080013FC
    if (ctx->r9 == 0) {
        // 0x0800133C: addiu       $a0, $sp, 0x34
        ctx->r4 = ADD32(ctx->r29, 0X34);
            goto L_080013FC;
    }
    // 0x0800133C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x08001340: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001344: addiu       $t9, $t9, -0x46E8
    ctx->r25 = ADD32(ctx->r25, -0X46E8);
    // 0x08001348: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x0800134C: jalr        $t9
    // 0x08001350: addiu       $a2, $a2, 0x4CE8
    ctx->r6 = ADD32(ctx->r6, 0X4CE8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001350: addiu       $a2, $a2, 0x4CE8
    ctx->r6 = ADD32(ctx->r6, 0X4CE8);
    after_28:
    // 0x08001354: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x08001358: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800135C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001360: lw          $v1, 0x18($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X18);
    // 0x08001364: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800136C: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x08001370: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001374: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08001378: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x0800137C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001380: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x08001384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001388: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800138C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001390: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x08001394: nop

    // 0x08001398: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x0800139C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080013A0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x080013A4: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x080013A8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x080013AC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x080013B0: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x080013B4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080013B8: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x080013BC: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x080013C0: lbu         $t4, 0x7C($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X7C);
    // 0x080013C4: bne         $t4, $at, L_080013FC
    if (ctx->r12 != ctx->r1) {
        // 0x080013C8: nop
    
            goto L_080013FC;
    }
    // 0x080013C8: nop

    // 0x080013CC: jalr        $t9
    // 0x080013D0: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080013D0: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    after_29:
    // 0x080013D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013D8: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080013DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080013E0: jalr        $t9
    // 0x080013E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080013E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x080013E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013EC: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080013F0: jalr        $t9
    // 0x080013F4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080013F4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_31:
    // 0x080013F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_080013FC:
    // 0x080013FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001400:
    // 0x08001400: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001404: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001408: jr          $ra
    // 0x0800140C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x0800140C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_0800145C_70B49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800145C: jr          $ra
    // 0x08001460: lb          $v0, 0xD3($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD3);
    TRACE_RETURN()
    return;
    // 0x08001460: lb          $v0, 0xD3($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD3);
;}
RECOMP_FUNC void func_08000418_70A458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000418: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x0800041C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000420: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000424: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000428: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800042C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x08000430: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000434: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0X19C) << 16);
    // 0x08000438: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800043C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x08000440: addiu       $a1, $a1, 0x19C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0X19C));
    // 0x08000444: jalr        $t9
    // 0x08000448: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000448: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_0:
    // 0x0800044C: bne         $v0, $zero, L_0800045C
    if (ctx->r2 != 0) {
        // 0x08000450: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_0800045C;
    }
    // 0x08000450: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000454: b           L_080006B0
    // 0x08000458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006B0;
    // 0x08000458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800045C:
    // 0x0800045C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000460: addiu       $t9, $t9, 0x1610
    ctx->r25 = ADD32(ctx->r25, 0X1610);
    // 0x08000464: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000468: jalr        $t9
    // 0x0800046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000470: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000474: addiu       $t9, $t9, 0x15F8
    ctx->r25 = ADD32(ctx->r25, 0X15F8);
    // 0x08000478: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800047C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08000480: jalr        $t9
    // 0x08000484: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000484: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x08000488: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(40, 0X36C) << 16);
    // 0x0800048C: addiu       $v0, $v0, 0x36C
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(40, 0X36C));
    // 0x08000490: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x08000494: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000498: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800049C: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x080004A0: jalr        $t9
    // 0x080004A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x080004A8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X8C) << 16);
    // 0x080004AC: addiu       $t9, $t9, 0x8C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X8C));
    // 0x080004B0: jalr        $t9
    // 0x080004B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004B4: nop

    after_4:
    // 0x080004B8: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x080004BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004C0: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x080004C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080004C8: jalr        $t9
    // 0x080004CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080004CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_5:
    // 0x080004D0: bne         $v0, $zero, L_080004F0
    if (ctx->r2 != 0) {
        // 0x080004D4: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_080004F0;
    }
    // 0x080004D4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x080004D8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080004DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080004E0: jalr        $t9
    // 0x080004E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080004E4: nop

    after_6:
    // 0x080004E8: b           L_080006B0
    // 0x080004EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006B0;
    // 0x080004EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080004F0:
    // 0x080004F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080004F4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080004F8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080004FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000500: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000504: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000508: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x0800050C: jalr        $t9
    // 0x08000510: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000510: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x08000514: bne         $v0, $zero, L_08000534
    if (ctx->r2 != 0) {
        // 0x08000518: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_08000534;
    }
    // 0x08000518: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x0800051C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000520: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000524: jalr        $t9
    // 0x08000528: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000528: nop

    after_8:
    // 0x0800052C: b           L_080006B0
    // 0x08000530: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006B0;
    // 0x08000530: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000534:
    // 0x08000534: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x08000538: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x0800053C: addiu       $a3, $a3, 0x3DC
    ctx->r7 = ADD32(ctx->r7, 0X3DC);
    // 0x08000540: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08000544: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800054C: jalr        $a3
    // 0x08000550: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_9;
    // 0x08000550: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_9:
    // 0x08000554: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08000558: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0800055C: bne         $v0, $at, L_0800057C
    if (ctx->r2 != ctx->r1) {
        // 0x08000560: sw          $v0, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r2;
            goto L_0800057C;
    }
    // 0x08000560: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x08000564: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800056C: jalr        $t9
    // 0x08000570: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000570: nop

    after_10:
    // 0x08000574: b           L_080006B0
    // 0x08000578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006B0;
    // 0x08000578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800057C:
    // 0x0800057C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x08000580: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x08000584: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x08000588: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x0800058C: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x08000590: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x08000594: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x08000598: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x0800059C: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x080005A0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x080005A4: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x080005A8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x080005AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080005B0: jalr        $a3
    // 0x080005B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_11;
    // 0x080005B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x080005B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080005BC: bne         $v0, $at, L_080005DC
    if (ctx->r2 != ctx->r1) {
        // 0x080005C0: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_080005DC;
    }
    // 0x080005C0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080005C4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080005C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080005CC: jalr        $t9
    // 0x080005D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080005D0: nop

    after_12:
    // 0x080005D4: b           L_080006B0
    // 0x080005D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006B0;
    // 0x080005D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080005DC:
    // 0x080005DC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x080005E0: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(40, 0X27E4) << 16);
    // 0x080005E4: lw          $t2, 0x27E4($t2)
    ctx->r10 = MEM_W(ctx->r10, (int16_t)RELOC_LO16(40, 0X27E4));
    // 0x080005E8: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080005EC: addiu       $v0, $v0, 0x6F0
    ctx->r2 = ADD32(ctx->r2, 0X6F0);
    // 0x080005F0: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x080005F4: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x080005F8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x080005FC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000600: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08000604: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000608: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x0800060C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000610: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000614: jalr        $v0
    // 0x08000618: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x08000618: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_13:
    // 0x0800061C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000620: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x08000624: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(40, 0X27E4) << 16);
    // 0x08000628: lw          $t5, 0x27E4($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(40, 0X27E4));
    // 0x0800062C: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x08000630: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000634: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x08000638: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x0800063C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000640: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x08000644: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000648: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x0800064C: jalr        $t9
    // 0x08000650: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000650: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_14:
    // 0x08000654: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08000658: addiu       $v1, $v1, 0x5AC
    ctx->r3 = ADD32(ctx->r3, 0X5AC);
    // 0x0800065C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x08000660: jalr        $v1
    // 0x08000664: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x08000664: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_15:
    // 0x08000668: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x0800066C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000670: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(40, 0X27E0) << 16);
    // 0x08000674: lw          $t8, 0x27E0($t8)
    ctx->r24 = MEM_W(ctx->r24, (int16_t)RELOC_LO16(40, 0X27E0));
    // 0x08000678: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x0800067C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000680: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000684: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000688: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x0800068C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000690: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x08000694: jalr        $t9
    // 0x08000698: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000698: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_16:
    // 0x0800069C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080006A0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080006A4: jalr        $t9
    // 0x080006A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080006A8: nop

    after_17:
    // 0x080006AC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_080006B0:
    // 0x080006B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080006B4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080006B8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080006BC: jr          $ra
    // 0x080006C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080006C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000848_70A888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800084C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000850: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000854: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000858: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800085C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000860: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X2734) << 16);
    // 0x08000864: beq         $v0, $zero, L_08000888
    if (ctx->r2 == 0) {
        // 0x08000868: addiu       $t6, $zero, 0x1C3
        ctx->r14 = ADD32(0, 0X1C3);
            goto L_08000888;
    }
    // 0x08000868: addiu       $t6, $zero, 0x1C3
    ctx->r14 = ADD32(0, 0X1C3);
    // 0x0800086C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000870: beq         $v0, $at, L_08000920
    if (ctx->r2 == ctx->r1) {
        // 0x08000874: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08000920;
    }
    // 0x08000874: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000878: beql        $v0, $at, L_08000988
    if (ctx->r2 == ctx->r1) {
        // 0x0800087C: lw          $t8, 0x68($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X68);
            goto L_08000988;
    }
    goto skip_0;
    // 0x0800087C: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08000880: b           L_080009CC
    // 0x08000884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080009CC;
    // 0x08000884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000888:
    // 0x08000888: lwc1        $f0, 0x2734($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(40, 0X2734));
    // 0x0800088C: lui         $t7, 0x2C0
    ctx->r15 = S32(0X2C0 << 16);
    // 0x08000890: ori         $t7, $t7, 0x7E1
    ctx->r15 = ctx->r15 | 0X7E1;
    // 0x08000894: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000898: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x0800089C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080008A0: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x080008A4: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x080008A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008B4: swc1        $f0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f0.u32l;
    // 0x080008B8: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
    // 0x080008BC: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x080008C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080008C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080008CC: jalr        $t9
    // 0x080008D0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008D0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x080008D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008D8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008E0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x080008E4: jalr        $t9
    // 0x080008E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x080008EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008F0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000900: jalr        $t9
    // 0x08000904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000908: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x0800090C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000910: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000914: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x08000918: b           L_080009C8
    // 0x0800091C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
        goto L_080009C8;
    // 0x0800091C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_08000920:
    // 0x08000920: lw          $t2, 0x68($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X68);
    // 0x08000924: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x08000928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800092C: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x08000930: bne         $t3, $zero, L_080009C8
    if (ctx->r11 != 0) {
        // 0x08000934: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_080009C8;
    }
    // 0x08000934: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000938: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800093C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000940: sb          $t4, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r12;
    // 0x08000944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000948: jalr        $t9
    // 0x0800094C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800094C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000950: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000954: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800095C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000960: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000964: jalr        $t9
    // 0x08000968: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000968: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x0800096C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000970: addiu       $t5, $zero, 0x300
    ctx->r13 = ADD32(0, 0X300);
    // 0x08000974: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000978: sh          $t5, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r13;
    // 0x0800097C: b           L_080009C8
    // 0x08000980: sb          $t7, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r15;
        goto L_080009C8;
    // 0x08000980: sb          $t7, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r15;
    // 0x08000984: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
L_08000988:
    // 0x08000988: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800098C: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x08000990: andi        $t0, $t8, 0x2200
    ctx->r8 = ctx->r24 & 0X2200;
    // 0x08000994: beq         $t0, $zero, L_080009A8
    if (ctx->r8 == 0) {
        // 0x08000998: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080009A8;
    }
    // 0x08000998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800099C: jalr        $t9
    // 0x080009A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080009A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x080009A4: sb          $zero, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = 0;
L_080009A8:
    // 0x080009A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x080009AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080009B0: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x080009B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080009B8: nop

    // 0x080009BC: bc1fl       L_080009CC
    if (!c1cs) {
        // 0x080009C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080009CC;
    }
    goto skip_1;
    // 0x080009C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x080009C4: sb          $zero, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = 0;
L_080009C8:
    // 0x080009C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080009CC:
    // 0x080009CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080009D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080009D4: jr          $ra
    // 0x080009D8: nop

    TRACE_RETURN()
    return;
    // 0x080009D8: nop

;}
RECOMP_FUNC void func_08000410_70A450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000410: jr          $ra
    // 0x08000414: sw          $a1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000414: sw          $a1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_08000060_70A0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000064: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800006C: addiu       $t9, $t9, 0x3AC4
    ctx->r25 = ADD32(ctx->r25, 0X3AC4);
    // 0x08000070: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X2600) << 16);
    // 0x08000074: jalr        $t9
    // 0x08000078: addiu       $a0, $a0, 0x2600
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(40, 0X2600));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000078: addiu       $a0, $a0, 0x2600
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(40, 0X2600));
    after_0:
    // 0x0800007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000084: jr          $ra
    // 0x08000088: nop

    TRACE_RETURN()
    return;
    // 0x08000088: nop

;}
RECOMP_FUNC void func_0800142C_70B46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800142C: jr          $ra
    // 0x08001430: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x08001430: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_0800083C_70A87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800083C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000840: jr          $ra
    // 0x08000844: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000844: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080006C4_70A704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006D0: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x080006D4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x080006D8: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
    // 0x080006DC: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x080006E0: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x080006E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006E8: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x080006EC: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080006F0: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x080006F4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080006F8: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x080006FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000700: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    // 0x08000704: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08000708: jalr        $t9
    // 0x0800070C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800070C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000710: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000714: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08000718: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800071C: sb          $t1, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r9;
    // 0x08000720: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x08000724: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000728: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x0800072C: bgez        $t3, L_08000740
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08000730: nop
    
            goto L_08000740;
    }
    // 0x08000730: nop

    // 0x08000734: jalr        $t9
    // 0x08000738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x0800073C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_08000740:
    // 0x08000740: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000744: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000748: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0800074C: jalr        $t9
    // 0x08000750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800075C: jr          $ra
    // 0x08000760: nop

    TRACE_RETURN()
    return;
    // 0x08000760: nop

;}
RECOMP_FUNC void func_080009E4_70AA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x080009E8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080009EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080009F0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x080009F4: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080009F8: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080009FC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000A00: jr          $ra
    // 0x08000A04: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000A04: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08002588_70C5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800258C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002590: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002594: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08002598: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800259C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080025A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080025A8: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080025AC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080025B0: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x080025B4: jalr        $t9
    // 0x080025B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080025BC: beq         $v0, $zero, L_080025F0
    if (ctx->r2 == 0) {
        // 0x080025C0: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_080025F0;
    }
    // 0x080025C0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080025C4: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x080025C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x080025CC: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x080025D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_080025D4:
    // 0x080025D4: bnel        $v0, $v1, L_080025D4
    if (ctx->r2 != ctx->r3) {
        // 0x080025D8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_080025D4;
    }
    goto skip_0;
    // 0x080025D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x080025DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(40, 0X1464) << 16);
    // 0x080025E8: jalr        $t9
    // 0x080025EC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(40, 0X1464));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025EC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(40, 0X1464));
    after_1:
L_080025F0:
    // 0x080025F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080025F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080025F8: jr          $ra
    // 0x080025FC: nop

    TRACE_RETURN()
    return;
    // 0x080025FC: nop

;}
RECOMP_FUNC void func_0800008C_70A0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800008C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000090: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x08000094: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800009C: addiu       $v0, $v0, 0x230
    ctx->r2 = ADD32(ctx->r2, 0X230);
    // 0x080000A0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x080000A4: addiu       $t7, $zero, 0x4D4
    ctx->r15 = ADD32(0, 0X4D4);
    // 0x080000A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080000AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080000B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080000B4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000C0: jalr        $v0
    // 0x080000C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080000C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080000C8: addiu       $t9, $zero, 0x4D4
    ctx->r25 = ADD32(0, 0X4D4);
    // 0x080000CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x080000D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080000D4: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x080000D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X27E0) << 16);
    // 0x080000DC: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x080000E0: sw          $v0, 0x27E0($at)
    MEM_W((int16_t)RELOC_LO16(40, 0X27E0), ctx->r1) = ctx->r2;
    // 0x080000E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080000E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000EC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080000FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000100: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x08000104: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X27E4) << 16);
    // 0x08000108: addiu       $t0, $t0, 0x2000
    ctx->r8 = ADD32(ctx->r8, 0X2000);
    // 0x0800010C: addiu       $t1, $zero, 0x4D4
    ctx->r9 = ADD32(0, 0X4D4);
    // 0x08000110: sw          $v0, 0x27E4($at)
    MEM_W((int16_t)RELOC_LO16(40, 0X27E4), ctx->r1) = ctx->r2;
    // 0x08000114: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08000118: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0800011C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000120: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000128: jalr        $t9
    // 0x0800012C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800012C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000134: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X27E8) << 16);
    // 0x08000138: sw          $v0, 0x27E8($at)
    MEM_W((int16_t)RELOC_LO16(40, 0X27E8), ctx->r1) = ctx->r2;
    // 0x0800013C: jr          $ra
    // 0x08000140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080008E8_70D108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080008F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008F8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080008FC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000900: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000904: bne         $v0, $zero, L_0800092C
    if (ctx->r2 != 0) {
        // 0x08000908: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800092C;
    }
    // 0x08000908: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800090C: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000910: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000914: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000918: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800091C: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x08000920: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X93C) << 16);
    // 0x08000924: jalr        $t9
    // 0x08000928: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X93C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000928: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X93C));
    after_0:
L_0800092C:
    // 0x0800092C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000934: jr          $ra
    // 0x08000938: nop

    TRACE_RETURN()
    return;
    // 0x08000938: nop

;}
RECOMP_FUNC void func_0800070C_70CF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800070C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000714: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000718: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800071C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08000720: beql        $t7, $zero, L_080007B4
    if (ctx->r15 == 0) {
        // 0x08000724: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080007B4;
    }
    goto skip_0;
    // 0x08000724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000728: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x0800072C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x08000730: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000734: lbu         $t8, 0x4C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4C);
    // 0x08000738: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800073C: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x08000740: bne         $t8, $at, L_0800076C
    if (ctx->r24 != ctx->r1) {
        // 0x08000744: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_0800076C;
    }
    // 0x08000744: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08000748: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800074C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000750: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000754: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000758: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x0800075C: jalr        $t9
    // 0x08000760: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000760: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000764: b           L_0800079C
    // 0x08000768: nop

        goto L_0800079C;
    // 0x08000768: nop

L_0800076C:
    // 0x0800076C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000770: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x08000774: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x08000778: jalr        $v0
    // 0x0800077C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0800077C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000780: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000784: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000788: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0800078C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000790: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x08000794: jalr        $v0
    // 0x08000798: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08000798: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
L_0800079C:
    // 0x0800079C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X7C0) << 16);
    // 0x080007A8: jalr        $t9
    // 0x080007AC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X7C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007AC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X7C0));
    after_3:
    // 0x080007B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080007B4:
    // 0x080007B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080007B8: jr          $ra
    // 0x080007BC: nop

    TRACE_RETURN()
    return;
    // 0x080007BC: nop

;}
RECOMP_FUNC void func_08000204_70CA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800020C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000210: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000214: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08000218: beql        $t7, $zero, L_0800028C
    if (ctx->r15 == 0) {
        // 0x0800021C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800028C;
    }
    goto skip_0;
    // 0x0800021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000220: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x08000224: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x08000228: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800022C: lbu         $t8, 0x4C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4C);
    // 0x08000230: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000234: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x08000238: bne         $t8, $at, L_08000258
    if (ctx->r24 != ctx->r1) {
        // 0x0800023C: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000258;
    }
    // 0x0800023C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000240: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000244: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000248: jalr        $t9
    // 0x0800024C: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800024C: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    after_0:
    // 0x08000250: b           L_08000274
    // 0x08000254: nop

        goto L_08000274;
    // 0x08000254: nop

L_08000258:
    // 0x08000258: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800025C: jalr        $t9
    // 0x08000260: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000260: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08000264: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000268: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800026C: jalr        $t9
    // 0x08000270: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000270: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    after_2:
L_08000274:
    // 0x08000274: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000278: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800027C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X298) << 16);
    // 0x08000280: jalr        $t9
    // 0x08000284: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X298));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000284: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X298));
    after_3:
    // 0x08000288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800028C:
    // 0x0800028C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000290: jr          $ra
    // 0x08000294: nop

    TRACE_RETURN()
    return;
    // 0x08000294: nop

;}
RECOMP_FUNC void func_080000EC_70C90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080000F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080000F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080000F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080000FC: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000100: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000104: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000108: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800010C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000114: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000118: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x0800011C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000120: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000124: jalr        $t9
    // 0x08000128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800012C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000130: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000138: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x0800013C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x08000140: jalr        $t9
    // 0x08000144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000148: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800014C: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000154: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800015C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000160: jalr        $t9
    // 0x08000164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000168: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800016C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000170: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X194) << 16);
    // 0x08000174: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08000178: jalr        $t9
    // 0x0800017C: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X194));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800017C: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X194));
    after_3:
    // 0x08000180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000184: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800018C: jr          $ra
    // 0x08000190: nop

    TRACE_RETURN()
    return;
    // 0x08000190: nop

;}
RECOMP_FUNC void func_08000978_70D198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800097C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000980: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000984: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000988: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x0800098C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000990: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000994: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000998: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800099C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080009A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009A4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080009A8: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x080009AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080009B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080009B4: jalr        $t9
    // 0x080009B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080009BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XF0C) << 16);
    // 0x080009C0: lwc1        $f0, 0xF0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XF0C));
    // 0x080009C4: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x080009C8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080009CC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080009D0: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x080009D4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080009D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009DC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x080009E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XA14) << 16);
    // 0x080009E8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080009EC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080009F0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080009F4: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080009F8: jalr        $t9
    // 0x080009FC: addiu       $a0, $a0, 0xA14
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA14));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009FC: addiu       $a0, $a0, 0xA14
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA14));
    after_1:
    // 0x08000A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A0C: jr          $ra
    // 0x08000A10: nop

    TRACE_RETURN()
    return;
    // 0x08000A10: nop

;}
RECOMP_FUNC void func_08000854_70D074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000858: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800085C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000864: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000868: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800086C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000870: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000874: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000878: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    // 0x0800087C: jalr        $t9
    // 0x08000880: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000880: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000884: beq         $v0, $zero, L_080008A8
    if (ctx->r2 == 0) {
        // 0x08000888: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_080008A8;
    }
    // 0x08000888: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800088C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000890: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000894: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X8E8) << 16);
    // 0x08000898: jalr        $t9
    // 0x0800089C: addiu       $a0, $a0, 0x8E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X8E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800089C: addiu       $a0, $a0, 0x8E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X8E8));
    after_1:
    // 0x080008A0: b           L_080008DC
    // 0x080008A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080008DC;
    // 0x080008A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008A8:
    // 0x080008A8: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(41, 0X8E8) << 16);
    // 0x080008AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008B0: addiu       $t7, $t7, 0x8E8
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(41, 0X8E8));
    // 0x080008B4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080008B8: sw          $t7, 0xBC($a1)
    MEM_W(0XBC, ctx->r5) = ctx->r15;
    // 0x080008BC: jalr        $t9
    // 0x080008C0: lhu         $a0, 0xD0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008C0: lhu         $a0, 0xD0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XD0);
    after_2:
    // 0x080008C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XA8C) << 16);
    // 0x080008D0: jalr        $t9
    // 0x080008D4: addiu       $a0, $a0, 0xA8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080008D4: addiu       $a0, $a0, 0xA8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA8C));
    after_3:
    // 0x080008D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080008DC:
    // 0x080008DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080008E0: jr          $ra
    // 0x080008E4: nop

    TRACE_RETURN()
    return;
    // 0x080008E4: nop

;}
RECOMP_FUNC void func_08000644_70CE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000644: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000648: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800064C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000654: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000658: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800065C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000664: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000668: jalr        $t9
    // 0x0800066C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800066C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000670: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000674: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000678: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x0800067C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000680: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000684: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x08000688: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x0800068C: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x08000690: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000694: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x08000698: lhu         $t0, -0x4F86($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X4F86);
    // 0x0800069C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080006A0: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x080006A4: beq         $t1, $zero, L_080006B4
    if (ctx->r9 == 0) {
        // 0x080006A8: nop
    
            goto L_080006B4;
    }
    // 0x080006A8: nop

    // 0x080006AC: jalr        $t9
    // 0x080006B0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006B0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_1:
L_080006B4:
    // 0x080006B4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080006B8: addiu       $t9, $t9, 0x3FB8
    ctx->r25 = ADD32(ctx->r25, 0X3FB8);
    // 0x080006BC: jalr        $t9
    // 0x080006C0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006C0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_2:
    // 0x080006C4: beq         $v0, $zero, L_080006E8
    if (ctx->r2 == 0) {
        // 0x080006C8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(41, 0X70C) << 16);
            goto L_080006E8;
    }
    // 0x080006C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X70C) << 16);
    // 0x080006CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X7C0) << 16);
    // 0x080006D8: jalr        $t9
    // 0x080006DC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X7C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006DC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X7C0));
    after_3:
    // 0x080006E0: b           L_080006FC
    // 0x080006E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080006FC;
    // 0x080006E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080006E8:
    // 0x080006E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006F0: jalr        $t9
    // 0x080006F4: addiu       $a0, $a0, 0x70C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X70C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080006F4: addiu       $a0, $a0, 0x70C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X70C));
    after_4:
    // 0x080006F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080006FC:
    // 0x080006FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000704: jr          $ra
    // 0x08000708: nop

    TRACE_RETURN()
    return;
    // 0x08000708: nop

;}
RECOMP_FUNC void func_0800041C_70CC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800041C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000424: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000428: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x0800042C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000430: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x08000434: beql        $t8, $zero, L_080004DC
    if (ctx->r24 == 0) {
        // 0x08000438: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080004DC;
    }
    goto skip_0;
    // 0x08000438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800043C: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x08000440: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x08000444: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000448: lbu         $t9, 0x4C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4C);
    // 0x0800044C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000450: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x08000454: bne         $t9, $at, L_08000480
    if (ctx->r25 != ctx->r1) {
        // 0x08000458: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_08000480;
    }
    // 0x08000458: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x0800045C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000460: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000464: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000468: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800046C: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x08000470: jalr        $t9
    // 0x08000474: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000474: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000478: b           L_080004B4
    // 0x0800047C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
        goto L_080004B4;
    // 0x0800047C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_08000480:
    // 0x08000480: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000484: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x08000488: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x0800048C: jalr        $v0
    // 0x08000490: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000490: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000494: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000498: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800049C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080004A0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080004A4: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x080004A8: jalr        $v0
    // 0x080004AC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080004AC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x080004B0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_080004B4:
    // 0x080004B4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004B8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080004BC: jalr        $t9
    // 0x080004C0: lhu         $a0, 0xD0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004C0: lhu         $a0, 0xD0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XD0);
    after_3:
    // 0x080004C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X4E8) << 16);
    // 0x080004D0: jalr        $t9
    // 0x080004D4: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X4E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004D4: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X4E8));
    after_4:
    // 0x080004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080004DC:
    // 0x080004DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080004E0: jr          $ra
    // 0x080004E4: nop

    TRACE_RETURN()
    return;
    // 0x080004E4: nop

;}
RECOMP_FUNC void func_08000590_70CDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000590: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000594: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000598: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800059C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080005A0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080005A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005A8: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080005AC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080005B0: bne         $v0, $zero, L_08000630
    if (ctx->r2 != 0) {
        // 0x080005B4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000630;
    }
    // 0x080005B4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080005B8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080005BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080005C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080005C8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080005CC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080005D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080005D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080005D8: jalr        $t9
    // 0x080005DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080005E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XF04) << 16);
    // 0x080005E4: lwc1        $f0, 0xF04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XF04));
    // 0x080005E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080005EC: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x080005F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005F4: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x080005F8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080005FC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000600: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000604: jalr        $t9
    // 0x08000608: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000608: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_1:
    // 0x0800060C: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x08000610: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000614: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000618: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800061C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X3B8) << 16);
    // 0x08000620: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000624: sw          $t1, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r9;
    // 0x08000628: jalr        $t9
    // 0x0800062C: addiu       $a0, $a0, 0x3B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X3B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800062C: addiu       $a0, $a0, 0x3B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X3B8));
    after_2:
L_08000630:
    // 0x08000630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000634: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800063C: jr          $ra
    // 0x08000640: nop

    TRACE_RETURN()
    return;
    // 0x08000640: nop

;}
RECOMP_FUNC void func_0800032C_70CB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800032C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000334: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000338: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800033C: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x08000340: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000344: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000348: bne         $v0, $zero, L_08000360
    if (ctx->r2 != 0) {
        // 0x0800034C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08000360;
    }
    // 0x0800034C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000350: jalr        $t9
    // 0x08000354: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000354: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000358: b           L_0800037C
    // 0x0800035C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_0800037C;
    // 0x0800035C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_08000360:
    // 0x08000360: bne         $v0, $at, L_08000378
    if (ctx->r2 != ctx->r1) {
        // 0x08000364: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_08000378;
    }
    // 0x08000364: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000368: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800036C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000370: jalr        $t9
    // 0x08000374: lhu         $a0, 0xD0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000374: lhu         $a0, 0xD0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0XD0);
    after_1:
L_08000378:
    // 0x08000378: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_0800037C:
    // 0x0800037C: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(41, 0X3AC) << 16);
    // 0x08000380: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000384: addiu       $t8, $t8, 0x3AC
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(41, 0X3AC));
    // 0x08000388: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800038C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XA8C) << 16);
    // 0x08000390: addiu       $a0, $a0, 0xA8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA8C));
    // 0x08000394: jalr        $t9
    // 0x08000398: sw          $t8, 0xBC($t0)
    MEM_W(0XBC, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000398: sw          $t8, 0xBC($t0)
    MEM_W(0XBC, ctx->r8) = ctx->r24;
    after_2:
    // 0x0800039C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003A4: jr          $ra
    // 0x080003A8: nop

    TRACE_RETURN()
    return;
    // 0x080003A8: nop

;}
RECOMP_FUNC void func_08000A8C_70D2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000A90: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x08000A94: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x08000A98: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x08000A9C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x08000AA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x08000AA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000AA8: lui         $s4, 0x8001
    ctx->r20 = S32(0X8001 << 16);
    // 0x08000AAC: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x08000AB0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x08000AB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08000AB8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x08000ABC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000AC0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000AC4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000AC8: addiu       $s7, $s7, 0x7360
    ctx->r23 = ADD32(ctx->r23, 0X7360);
    // 0x08000ACC: addiu       $s4, $s4, 0x41C4
    ctx->r20 = ADD32(ctx->r20, 0X41C4);
    // 0x08000AD0: addiu       $s3, $zero, 0x32
    ctx->r19 = ADD32(0, 0X32);
    // 0x08000AD4: addiu       $s5, $zero, 0x6
    ctx->r21 = ADD32(0, 0X6);
    // 0x08000AD8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_08000ADC:
    // 0x08000ADC: addiu       $a1, $zero, 0x227
    ctx->r5 = ADD32(0, 0X227);
    // 0x08000AE0: jalr        $s7
    // 0x08000AE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_0;
    // 0x08000AE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08000AE8: beq         $v0, $zero, L_08000B20
    if (ctx->r2 == 0) {
        // 0x08000AEC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000B20;
    }
    // 0x08000AEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000AF0: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x08000AF4: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000AF8: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000AFC: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000B00: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000B04: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000B08: sh          $s3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r19;
    // 0x08000B0C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x08000B10: jalr        $s4
    // 0x08000B14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x08000B14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x08000B18: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000B1C: sh          $s2, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r18;
L_08000B20:
    // 0x08000B20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000B24: bnel        $s1, $s5, L_08000ADC
    if (ctx->r17 != ctx->r21) {
        // 0x08000B28: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_08000ADC;
    }
    goto skip_0;
    // 0x08000B28: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x08000B2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B34: jalr        $t9
    // 0x08000B38: lw          $a0, 0xBC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XBC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B38: lw          $a0, 0xBC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XBC);
    after_2:
    // 0x08000B3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x08000B40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000B44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000B48: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B4C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x08000B50: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x08000B54: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x08000B58: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B5C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x08000B60: jr          $ra
    // 0x08000B64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08000B64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_080003AC_70CBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080003B0: jr          $ra
    // 0x080003B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080003B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080004E8_70CD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080004EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080004F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080004F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080004F8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080004FC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000508: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x0800050C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000510: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000518: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800051C: jalr        $t9
    // 0x08000520: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000520: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000524: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XF00) << 16);
    // 0x08000528: lwc1        $f0, 0xF00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XF00));
    // 0x0800052C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000530: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08000534: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000538: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800053C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000540: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
    // 0x08000544: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000548: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800054C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000550: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000554: lhu         $t2, 0xD2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XD2);
    // 0x08000558: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(41, 0X590) << 16);
    // 0x0800055C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000560: addiu       $t3, $t3, 0x590
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(41, 0X590));
    // 0x08000564: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000568: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XA8C) << 16);
    // 0x0800056C: sw          $t3, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r11;
    // 0x08000570: addiu       $a0, $a0, 0xA8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XA8C));
    // 0x08000574: jalr        $t9
    // 0x08000578: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000578: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    after_1:
    // 0x0800057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000588: jr          $ra
    // 0x0800058C: nop

    TRACE_RETURN()
    return;
    // 0x0800058C: nop

;}
RECOMP_FUNC void func_08000CF8_70D518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CF8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000CFC: jr          $ra
    // 0x08000D00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000D00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080007C0_70CFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080007C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080007C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080007CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080007D0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080007D4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080007D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007E0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x080007E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007E8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080007EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080007F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080007F4: jalr        $t9
    // 0x080007F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080007FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XF08) << 16);
    // 0x08000800: lwc1        $f0, 0xF08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XF08));
    // 0x08000804: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000808: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x0800080C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000810: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000814: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000818: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
    // 0x0800081C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000820: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000824: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000828: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X854) << 16);
    // 0x0800082C: addiu       $a0, $a0, 0x854
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X854));
    // 0x08000830: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000834: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000838: jalr        $t9
    // 0x0800083C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800083C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000844: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800084C: jr          $ra
    // 0x08000850: nop

    TRACE_RETURN()
    return;
    // 0x08000850: nop

;}
RECOMP_FUNC void func_08000000_70C820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: lui         $t6, 0x8060
    ctx->r14 = S32(0X8060 << 16);
    // 0x08000008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000010: ori         $t6, $t6, 0xA0
    ctx->r14 = ctx->r14 | 0XA0;
    // 0x08000014: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000018: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800001C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000024: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08000028: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x0800002C: jalr        $t9
    // 0x08000030: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000034: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XEF8) << 16);
    // 0x08000038: lwc1        $f0, 0xEF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XEF8));
    // 0x0800003C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000044: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000048: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x0800004C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000050: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000054: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000058: jalr        $t9
    // 0x0800005C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800005C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    after_1:
    // 0x08000060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000064: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000068: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800006C: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x08000070: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000074: beq         $v0, $zero, L_08000084
    if (ctx->r2 == 0) {
        // 0x08000078: nop
    
            goto L_08000084;
    }
    // 0x08000078: nop

    // 0x0800007C: bnel        $v0, $at, L_0800009C
    if (ctx->r2 != ctx->r1) {
        // 0x08000080: lw          $v0, 0xD4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XD4);
            goto L_0800009C;
    }
    goto skip_0;
    // 0x08000080: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    skip_0:
L_08000084:
    // 0x08000084: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XEC) << 16);
    // 0x08000088: jalr        $t9
    // 0x0800008C: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800008C: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XEC));
    after_2:
    // 0x08000090: b           L_080000E0
    // 0x08000094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080000E0;
    // 0x08000094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000098: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
L_0800009C:
    // 0x0800009C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080000A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X3B8) << 16);
    // 0x080000A4: bne         $v0, $at, L_080000C0
    if (ctx->r2 != ctx->r1) {
        // 0x080000A8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080000C0;
    }
    // 0x080000A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: addiu       $a0, $a0, 0x3B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X3B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000B4: addiu       $a0, $a0, 0x3B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X3B8));
    after_3:
    // 0x080000B8: b           L_080000E0
    // 0x080000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080000E0;
    // 0x080000BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000C0:
    // 0x080000C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080000C4: bne         $v0, $at, L_080000DC
    if (ctx->r2 != ctx->r1) {
        // 0x080000C8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(41, 0X644) << 16);
            goto L_080000DC;
    }
    // 0x080000C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X644) << 16);
    // 0x080000CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000D4: jalr        $t9
    // 0x080000D8: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X644));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000D8: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X644));
    after_4:
L_080000DC:
    // 0x080000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000E0:
    // 0x080000E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080000E4: jr          $ra
    // 0x080000E8: nop

    TRACE_RETURN()
    return;
    // 0x080000E8: nop

;}
RECOMP_FUNC void func_08000B68_70D388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000B6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000B74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000B78: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000B7C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000B80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B84: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08000B88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000B8C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x08000B90: jalr        $t9
    // 0x08000B94: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B94: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_0:
    // 0x08000B98: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B9C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000BA0: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000BA4: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x08000BA8: lui         $t0, 0x80
    ctx->r8 = S32(0X80 << 16);
    // 0x08000BAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000BB0: ori         $t0, $t0, 0x22A
    ctx->r8 = ctx->r8 | 0X22A;
    // 0x08000BB4: addiu       $t1, $zero, 0xF6
    ctx->r9 = ADD32(0, 0XF6);
    // 0x08000BB8: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08000BBC: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000BC0: sb          $t1, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r9;
    // 0x08000BC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XF10) << 16);
    // 0x08000BC8: lwc1        $f4, 0xF10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XF10));
    // 0x08000BCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BD0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08000BD4: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000BD8: sb          $t2, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r10;
    // 0x08000BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BE8: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x08000BEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BF0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000BF4: jalr        $t9
    // 0x08000BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000BFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C00: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000C04: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x08000C08: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08000C0C: jalr        $t9
    // 0x08000C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08000C14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C18: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C24: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08000C28: jalr        $t9
    // 0x08000C2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000C2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08000C30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C34: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08000C38: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x08000C3C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C44: jalr        $t9
    // 0x08000C48: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000C48: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    after_5:
    // 0x08000C4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0XC74) << 16);
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: addiu       $a0, $a0, 0xC74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XC74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000C5C: addiu       $a0, $a0, 0xC74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0XC74));
    after_6:
    // 0x08000C60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000C64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000C6C: jr          $ra
    // 0x08000C70: nop

    TRACE_RETURN()
    return;
    // 0x08000C70: nop

;}
RECOMP_FUNC void func_080003B8_70CBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003C8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080003CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080003D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080003D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080003D8: jalr        $t9
    // 0x080003DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080003E0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080003E4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080003E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003EC: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x080003F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X41C) << 16);
    // 0x080003F8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080003FC: addiu       $a0, $a0, 0x41C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X41C));
    // 0x08000400: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x08000404: jalr        $t9
    // 0x08000408: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000408: sb          $zero, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = 0;
    after_1:
    // 0x0800040C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000414: jr          $ra
    // 0x08000418: nop

    TRACE_RETURN()
    return;
    // 0x08000418: nop

;}
RECOMP_FUNC void func_08000A80_70D2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000A84: jr          $ra
    // 0x08000A88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000A88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000298_70CAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800029C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080002A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080002A8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080002AC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080002B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080002B4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080002B8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x080002BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080002C0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080002C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080002C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080002CC: jalr        $t9
    // 0x080002D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080002D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(41, 0XEFC) << 16);
    // 0x080002D8: lwc1        $f0, 0xEFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(41, 0XEFC));
    // 0x080002DC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080002E0: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x080002E4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080002E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080002EC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x080002F0: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
    // 0x080002F4: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x080002F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000300: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X32C) << 16);
    // 0x08000304: addiu       $a0, $a0, 0x32C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X32C));
    // 0x08000308: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800030C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000310: jalr        $t9
    // 0x08000314: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000314: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800031C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000324: jr          $ra
    // 0x08000328: nop

    TRACE_RETURN()
    return;
    // 0x08000328: nop

;}
RECOMP_FUNC void func_08000194_70C9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800019C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001A4: lbu         $t6, 0xD4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD4);
    // 0x080001A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080001AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001B0: bne         $t6, $at, L_080001E0
    if (ctx->r14 != ctx->r1) {
        // 0x080001B4: addiu       $t9, $t9, 0x40DC
        ctx->r25 = ADD32(ctx->r25, 0X40DC);
            goto L_080001E0;
    }
    // 0x080001B4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080001B8: jalr        $t9
    // 0x080001BC: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001BC: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x080001C0: beq         $v0, $zero, L_080001E0
    if (ctx->r2 == 0) {
        // 0x080001C4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(41, 0X298) << 16);
            goto L_080001E0;
    }
    // 0x080001C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X298) << 16);
    // 0x080001C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001D0: jalr        $t9
    // 0x080001D4: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X298));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001D4: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X298));
    after_1:
    // 0x080001D8: b           L_080001F8
    // 0x080001DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080001F8;
    // 0x080001DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001E0:
    // 0x080001E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X204) << 16);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: addiu       $a0, $a0, 0x204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X204));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001F0: addiu       $a0, $a0, 0x204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X204));
    after_2:
    // 0x080001F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001F8:
    // 0x080001F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001FC: jr          $ra
    // 0x08000200: nop

    TRACE_RETURN()
    return;
    // 0x08000200: nop

;}
RECOMP_FUNC void func_08000A14_70D234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A24: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000A28: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000A2C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000A30: bne         $v0, $zero, L_08000A68
    if (ctx->r2 != 0) {
        // 0x08000A34: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000A68;
    }
    // 0x08000A34: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000A38: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000A3C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A40: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000A44: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000A48: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A50: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000A54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X70C) << 16);
    // 0x08000A60: jalr        $t9
    // 0x08000A64: addiu       $a0, $a0, 0x70C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X70C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A64: addiu       $a0, $a0, 0x70C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X70C));
    after_1:
L_08000A68:
    // 0x08000A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A70: jr          $ra
    // 0x08000A74: nop

    TRACE_RETURN()
    return;
    // 0x08000A74: nop

    // 0x08000A78: jr          $ra
    // 0x08000A7C: nop

    TRACE_RETURN()
    return;
    // 0x08000A7C: nop

;}
RECOMP_FUNC void func_08000C74_70D494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000C7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C84: addiu       $t9, $t9, -0x61C0
    ctx->r25 = ADD32(ctx->r25, -0X61C0);
    // 0x08000C88: lui         $a1, 0xBA9D
    ctx->r5 = S32(0XBA9D << 16);
    // 0x08000C8C: ori         $a1, $a1, 0x4952
    ctx->r5 = ctx->r5 | 0X4952;
    // 0x08000C90: jalr        $t9
    // 0x08000C94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000C98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000C9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CA0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000CA4: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000CA8: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x08000CAC: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    // 0x08000CB0: addiu       $t7, $t6, -0xC
    ctx->r15 = ADD32(ctx->r14, -0XC);
    // 0x08000CB4: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x08000CB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CC0: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_1:
    // 0x08000CC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000CC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CCC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000CD0: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000CD4: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x08000CD8: beql        $at, $zero, L_08000CEC
    if (ctx->r1 == 0) {
        // 0x08000CDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000CEC;
    }
    goto skip_0;
    // 0x08000CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000CE0: jalr        $t9
    // 0x08000CE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000CE4: nop

    after_2:
    // 0x08000CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000CEC:
    // 0x08000CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CF0: jr          $ra
    // 0x08000CF4: nop

    TRACE_RETURN()
    return;
    // 0x08000CF4: nop

;}
RECOMP_FUNC void func_0800093C_70D15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800093C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000948: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x0800094C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000950: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000954: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08000958: beq         $t7, $zero, L_08000968
    if (ctx->r15 == 0) {
        // 0x0800095C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(41, 0X978) << 16);
            goto L_08000968;
    }
    // 0x0800095C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(41, 0X978) << 16);
    // 0x08000960: jalr        $t9
    // 0x08000964: addiu       $a0, $a0, 0x978
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X978));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000964: addiu       $a0, $a0, 0x978
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(41, 0X978));
    after_0:
L_08000968:
    // 0x08000968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800096C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000970: jr          $ra
    // 0x08000974: nop

    TRACE_RETURN()
    return;
    // 0x08000974: nop

;}
RECOMP_FUNC void func_08000174_70D8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000178: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800017C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000180: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000188: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800018C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000190: jalr        $t9
    // 0x08000194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08000198: beq         $v0, $zero, L_08000270
    if (ctx->r2 == 0) {
        // 0x0800019C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000270;
    }
    // 0x0800019C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001A4: addiu       $t9, $t9, 0x125C
    ctx->r25 = ADD32(ctx->r25, 0X125C);
    // 0x080001A8: jalr        $t9
    // 0x080001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080001B0: lw          $v1, 0x68($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X68);
    // 0x080001B4: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x080001B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080001BC: andi        $t6, $v1, 0x4000
    ctx->r14 = ctx->r3 & 0X4000;
    // 0x080001C0: beq         $t6, $zero, L_080001F4
    if (ctx->r14 == 0) {
        // 0x080001C4: and         $t7, $v1, $at
        ctx->r15 = ctx->r3 & ctx->r1;
            goto L_080001F4;
    }
    // 0x080001C4: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x080001C8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001CC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080001D0: jalr        $t9
    // 0x080001D4: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001D4: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    after_2:
    // 0x080001D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080001E8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
L_080001F4:
    // 0x080001F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001F8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080001FC: jalr        $t9
    // 0x08000200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x08000204: beq         $v0, $zero, L_080002B0
    if (ctx->r2 == 0) {
        // 0x08000208: lui         $at, 0xEFFF
        ctx->r1 = S32(0XEFFF << 16);
            goto L_080002B0;
    }
    // 0x08000208: lui         $at, 0xEFFF
    ctx->r1 = S32(0XEFFF << 16);
    // 0x0800020C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x08000210: lhu         $t1, 0xD8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD8);
    // 0x08000214: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000218: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x0800021C: beq         $t1, $zero, L_08000240
    if (ctx->r9 == 0) {
        // 0x08000220: sw          $t0, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r8;
            goto L_08000240;
    }
    // 0x08000220: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000224: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000228: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x0800022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000230: jalr        $t9
    // 0x08000234: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000234: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    after_5:
    // 0x08000238: b           L_08000254
    // 0x0800023C: nop

        goto L_08000254;
    // 0x0800023C: nop

L_08000240:
    // 0x08000240: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000244: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800024C: jalr        $t9
    // 0x08000250: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000250: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_6:
L_08000254:
    // 0x08000254: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000258: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800025C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X88) << 16);
    // 0x08000260: jalr        $t9
    // 0x08000264: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X88));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000264: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X88));
    after_7:
    // 0x08000268: b           L_080002C8
    // 0x0800026C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080002C8;
    // 0x0800026C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000270:
    // 0x08000270: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000274: jalr        $t9
    // 0x08000278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x0800027C: lw          $v1, 0x68($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X68);
    // 0x08000280: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08000284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000288: andi        $t2, $v1, 0x4000
    ctx->r10 = ctx->r3 & 0X4000;
    // 0x0800028C: beq         $t2, $zero, L_080002B0
    if (ctx->r10 == 0) {
        // 0x08000290: and         $t3, $v1, $at
        ctx->r11 = ctx->r3 & ctx->r1;
            goto L_080002B0;
    }
    // 0x08000290: and         $t3, $v1, $at
    ctx->r11 = ctx->r3 & ctx->r1;
    // 0x08000294: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000298: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800029C: sw          $t3, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r11;
    // 0x080002A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080002A4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080002A8: jalr        $t9
    // 0x080002AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080002AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
L_080002B0:
    // 0x080002B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002B4: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002BC: jalr        $t9
    // 0x080002C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080002C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x080002C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080002C8:
    // 0x080002C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080002CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080002D0: jr          $ra
    // 0x080002D4: nop

    TRACE_RETURN()
    return;
    // 0x080002D4: nop

;}
RECOMP_FUNC void func_08000428_70DB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000428: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800042C: jr          $ra
    // 0x08000430: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000430: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000088_70D7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800008C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000094: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000098: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800009C: jalr        $t9
    // 0x080000A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080000A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000A8: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080000AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080000B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080000B4: jalr        $t9
    // 0x080000B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x080000BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080000C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080000C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080000C8: bne         $t6, $at, L_080000D8
    if (ctx->r14 != ctx->r1) {
        // 0x080000CC: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080000D8;
    }
    // 0x080000CC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000D4: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    after_2:
L_080000D8:
    // 0x080000D8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080000DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080000E0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000E4: bne         $t7, $at, L_080000F4
    if (ctx->r15 != ctx->r1) {
        // 0x080000E8: addiu       $t9, $t9, 0x3DF0
        ctx->r25 = ADD32(ctx->r25, 0X3DF0);
            goto L_080000F4;
    }
    // 0x080000E8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080000EC: jalr        $t9
    // 0x080000F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_080000F4:
    // 0x080000F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080000F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080000FC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000100: bnel        $t8, $at, L_08000168
    if (ctx->r24 != ctx->r1) {
        // 0x08000104: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000168;
    }
    goto skip_0;
    // 0x08000104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000108: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x0800010C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000110: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000114: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08000118: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    // 0x0800011C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x08000120: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000124: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08000128: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
    // 0x0800012C: jalr        $t9
    // 0x08000130: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000130: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x08000134: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000138: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800013C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000144: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000148: jalr        $t9
    // 0x0800014C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800014C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x08000150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000154: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000158: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X0) << 16);
    // 0x0800015C: jalr        $t9
    // 0x08000160: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000160: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X0));
    after_6:
    // 0x08000164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000168:
    // 0x08000168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800016C: jr          $ra
    // 0x08000170: nop

    TRACE_RETURN()
    return;
    // 0x08000170: nop

;}
RECOMP_FUNC void func_08000000_70D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800000C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000010: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x08000014: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000018: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x0800001C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000020: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000024: jalr        $t9
    // 0x08000028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800002C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000030: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08000034: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000038: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x0800003C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000040: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000044: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x08000048: beq         $t8, $zero, L_08000068
    if (ctx->r24 == 0) {
        // 0x0800004C: and         $t0, $v0, $at
        ctx->r8 = ctx->r2 & ctx->r1;
            goto L_08000068;
    }
    // 0x0800004C: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x08000050: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000054: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x08000058: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800005C: jalr        $t9
    // 0x08000060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_08000068:
    // 0x08000068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800006C: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000070: jalr        $t9
    // 0x08000074: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000074: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08000078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800007C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000080: jr          $ra
    // 0x08000084: nop

    TRACE_RETURN()
    return;
    // 0x08000084: nop

;}
