#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80210A20_5CBEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A28: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210A2C: jal         0x80013AC4
    // 0x80210A30: addiu       $a0, $a0, -0x1AF4
    ctx->r4 = ADD32(ctx->r4, -0X1AF4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210A30: addiu       $a0, $a0, -0x1AF4
    ctx->r4 = ADD32(ctx->r4, -0X1AF4);
    after_0:
    // 0x80210A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210A3C: jr          $ra
    // 0x80210A40: nop

    TRACE_RETURN()
    return;
    // 0x80210A40: nop

;}
RECOMP_FUNC void func_802147A4_5CFC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802147A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802147A8: lwc1        $f0, -0x6078($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6078);
    // 0x802147AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802147B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802147B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802147B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802147BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802147C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802147C4: lui         $t6, 0x6C0
    ctx->r14 = S32(0X6C0 << 16);
    // 0x802147C8: addiu       $t9, $zero, 0x10E
    ctx->r25 = ADD32(0, 0X10E);
    // 0x802147CC: ori         $t6, $t6, 0x7EA
    ctx->r14 = ctx->r14 | 0X7EA;
    // 0x802147D0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802147D4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802147D8: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x802147DC: sh          $v0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r2;
    // 0x802147E0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x802147E4: sh          $v0, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r2;
    // 0x802147E8: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
    // 0x802147EC: sb          $t8, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r24;
    // 0x802147F0: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x802147F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802147F8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x802147FC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x80214800: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80214804: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x80214808: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021480C: jalr        $t9
    // 0x80214810: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214810: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80214814: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214818: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x8021481C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80214824: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80214828: jalr        $t9
    // 0x8021482C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021482C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80214830: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214834: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x80214838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021483C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80214840: jalr        $t9
    // 0x80214844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80214848: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021484C: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x80214850: jalr        $t9
    // 0x80214854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80214854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80214858: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021485C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x80214860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214864: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x80214868: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x8021486C: jalr        $t9
    // 0x80214870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80214870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x80214874: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214878: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x8021487C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214880: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80214884: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80214888: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8021488C: jalr        $t9
    // 0x80214890: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80214890: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80214894: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214898: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x8021489C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802148A0: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    // 0x802148A4: jalr        $t9
    // 0x802148A8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802148A8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_6:
    // 0x802148AC: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x802148B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802148B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x802148B8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802148BC: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x802148C0: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    // 0x802148C4: jalr        $t9
    // 0x802148C8: addiu       $a0, $a0, 0x48E0
    ctx->r4 = ADD32(ctx->r4, 0X48E0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802148C8: addiu       $a0, $a0, 0x48E0
    ctx->r4 = ADD32(ctx->r4, 0X48E0);
    after_7:
    // 0x802148CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802148D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802148D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802148D8: jr          $ra
    // 0x802148DC: nop

    TRACE_RETURN()
    return;
    // 0x802148DC: nop

;}
RECOMP_FUNC void func_8020EE24_5CA2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EE2C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EE30: jal         0x80013AC4
    // 0x8020EE34: addiu       $a0, $a0, -0x32AC
    ctx->r4 = ADD32(ctx->r4, -0X32AC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EE34: addiu       $a0, $a0, -0x32AC
    ctx->r4 = ADD32(ctx->r4, -0X32AC);
    after_0:
    // 0x8020EE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EE40: jr          $ra
    // 0x8020EE44: nop

    TRACE_RETURN()
    return;
    // 0x8020EE44: nop

;}
RECOMP_FUNC void func_80210AD4_5CBFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210ADC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210AE0: jal         0x80013AC4
    // 0x80210AE4: addiu       $a0, $a0, -0x1A98
    ctx->r4 = ADD32(ctx->r4, -0X1A98);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210AE4: addiu       $a0, $a0, -0x1A98
    ctx->r4 = ADD32(ctx->r4, -0X1A98);
    after_0:
    // 0x80210AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210AF0: jr          $ra
    // 0x80210AF4: nop

    TRACE_RETURN()
    return;
    // 0x80210AF4: nop

;}
RECOMP_FUNC void func_8020FC7C_5CB14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FC80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FC84: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FC88: jal         0x80013AC4
    // 0x8020FC8C: addiu       $a0, $a0, -0x2874
    ctx->r4 = ADD32(ctx->r4, -0X2874);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FC8C: addiu       $a0, $a0, -0x2874
    ctx->r4 = ADD32(ctx->r4, -0X2874);
    after_0:
    // 0x8020FC90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FC98: jr          $ra
    // 0x8020FC9C: nop

    TRACE_RETURN()
    return;
    // 0x8020FC9C: nop

;}
RECOMP_FUNC void func_8020F940_5CAE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F948: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F94C: jal         0x80013AC4
    // 0x8020F950: addiu       $a0, $a0, -0x2B04
    ctx->r4 = ADD32(ctx->r4, -0X2B04);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F950: addiu       $a0, $a0, -0x2B04
    ctx->r4 = ADD32(ctx->r4, -0X2B04);
    after_0:
    // 0x8020F954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F95C: jr          $ra
    // 0x8020F960: nop

    TRACE_RETURN()
    return;
    // 0x8020F960: nop

;}
RECOMP_FUNC void func_80222B6C_5DE03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222B6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80222B70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80222B74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80222B78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80222B7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80222B80: lwc1        $f4, 0xCC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x80222B84: lw          $a3, 0xC8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC8);
    // 0x80222B88: lw          $a2, 0xC4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC4);
    // 0x80222B8C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80222B90: jal         0x8021B988
    // 0x80222B94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021B988_5D6E58(rdram, ctx);
        goto after_0;
    // 0x80222B94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80222B98: bnel        $v0, $zero, L_80222BAC
    if (ctx->r2 != 0) {
        // 0x80222B9C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80222BAC;
    }
    goto skip_0;
    // 0x80222B9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80222BA0: jal         0x8003521C
    // 0x80222BA4: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80222BA4: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    after_1:
    // 0x80222BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80222BAC:
    // 0x80222BAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80222BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80222BB4: jr          $ra
    // 0x80222BB8: nop

    TRACE_RETURN()
    return;
    // 0x80222BB8: nop

;}
RECOMP_FUNC void func_8020E3BC_5C988C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E3BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E3C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E3C4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E3C8: jal         0x80013AC4
    // 0x8020E3CC: addiu       $a0, $a0, -0x3A44
    ctx->r4 = ADD32(ctx->r4, -0X3A44);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E3CC: addiu       $a0, $a0, -0x3A44
    ctx->r4 = ADD32(ctx->r4, -0X3A44);
    after_0:
    // 0x8020E3D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E3D8: jr          $ra
    // 0x8020E3DC: nop

    TRACE_RETURN()
    return;
    // 0x8020E3DC: nop

;}
RECOMP_FUNC void func_802258FC_5E0DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80225908: jal         0x802253A8
    // 0x8022590C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802253A8_5E0878(rdram, ctx);
        goto after_0;
    // 0x8022590C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80225910: beq         $v0, $zero, L_80225944
    if (ctx->r2 == 0) {
        // 0x80225914: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80225944;
    }
    // 0x80225914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80225918: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x8022591C: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x80225920: jal         0x8021C654
    // 0x80225924: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    func_8021C654_5D7B24(rdram, ctx);
        goto after_1;
    // 0x80225924: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    after_1:
    // 0x80225928: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022592C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80225930: jal         0x80219E70
    // 0x80225934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80219E70_5D5340(rdram, ctx);
        goto after_2;
    // 0x80225934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80225938: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022593C: jal         0x8003521C
    // 0x80225940: addiu       $a0, $a0, 0x58BC
    ctx->r4 = ADD32(ctx->r4, 0X58BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80225940: addiu       $a0, $a0, 0x58BC
    ctx->r4 = ADD32(ctx->r4, 0X58BC);
    after_3:
L_80225944:
    // 0x80225944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022594C: jr          $ra
    // 0x80225950: nop

    TRACE_RETURN()
    return;
    // 0x80225950: nop

;}
RECOMP_FUNC void func_8020FCC4_5CB194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FCC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FCC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FCCC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FCD0: jal         0x80013AC4
    // 0x8020FCD4: addiu       $a0, $a0, -0x2810
    ctx->r4 = ADD32(ctx->r4, -0X2810);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FCD4: addiu       $a0, $a0, -0x2810
    ctx->r4 = ADD32(ctx->r4, -0X2810);
    after_0:
    // 0x8020FCD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FCDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FCE0: jr          $ra
    // 0x8020FCE4: nop

    TRACE_RETURN()
    return;
    // 0x8020FCE4: nop

;}
RECOMP_FUNC void func_8020F01C_5CA4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F024: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F028: jal         0x80013AC4
    // 0x8020F02C: addiu       $a0, $a0, -0x3214
    ctx->r4 = ADD32(ctx->r4, -0X3214);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F02C: addiu       $a0, $a0, -0x3214
    ctx->r4 = ADD32(ctx->r4, -0X3214);
    after_0:
    // 0x8020F030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F038: jr          $ra
    // 0x8020F03C: nop

    TRACE_RETURN()
    return;
    // 0x8020F03C: nop

;}
RECOMP_FUNC void func_80222DDC_5DE2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222DDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222DE0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80222DE4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80222DE8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80222DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222DF0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80222DF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80222DF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80222DFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80222E00: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80222E04: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    // 0x80222E08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80222E0C: sw          $a0, -0x4C00($at)
    MEM_W(-0X4C00, ctx->r1) = ctx->r4;
    // 0x80222E10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80222E14: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80222E18:
    // 0x80222E18: jal         0x8022306C
    // 0x80222E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022306C_5DE53C(rdram, ctx);
        goto after_0;
    // 0x80222E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80222E20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80222E24: bne         $s0, $s1, L_80222E18
    if (ctx->r16 != ctx->r17) {
        // 0x80222E28: nop
    
            goto L_80222E18;
    }
    // 0x80222E28: nop

    // 0x80222E2C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80222E30: jal         0x8003521C
    // 0x80222E34: addiu       $a0, $a0, 0x2E4C
    ctx->r4 = ADD32(ctx->r4, 0X2E4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80222E34: addiu       $a0, $a0, 0x2E4C
    ctx->r4 = ADD32(ctx->r4, 0X2E4C);
    after_1:
    // 0x80222E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222E3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80222E40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80222E44: jr          $ra
    // 0x80222E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80222E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8020FB80_5CB050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FB88: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FB8C: jal         0x80013AC4
    // 0x8020FB90: addiu       $a0, $a0, -0x295C
    ctx->r4 = ADD32(ctx->r4, -0X295C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FB90: addiu       $a0, $a0, -0x295C
    ctx->r4 = ADD32(ctx->r4, -0X295C);
    after_0:
    // 0x8020FB94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FB98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FB9C: jr          $ra
    // 0x8020FBA0: nop

    TRACE_RETURN()
    return;
    // 0x8020FBA0: nop

;}
RECOMP_FUNC void func_80221EBC_5DD38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221EBC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80221EC0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80221EC4: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x80221EC8: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80221ECC: jr          $ra
    // 0x80221ED0: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80221ED0: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80219CA0_5D5170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219CA0: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80219CA4: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x80219CA8: lw          $v1, 0xCC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XCC);
    // 0x80219CAC: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x80219CB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80219CB4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80219CB8: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x80219CBC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80219CC0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80219CC4: bne         $at, $zero, L_80219CE0
    if (ctx->r1 != 0) {
        // 0x80219CC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80219CE0;
    }
    // 0x80219CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CCC: lw          $t8, 0xC4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC4);
    // 0x80219CD0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80219CD4: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x80219CD8: beql        $at, $zero, L_80219CEC
    if (ctx->r1 == 0) {
        // 0x80219CDC: sltiu       $at, $a1, 0xE
        ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
            goto L_80219CEC;
    }
    goto skip_0;
    // 0x80219CDC: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
    skip_0:
L_80219CE0:
    // 0x80219CE0: jr          $ra
    // 0x80219CE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80219CE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CE8: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
L_80219CEC:
    // 0x80219CEC: beq         $at, $zero, L_80219D90
    if (ctx->r1 == 0) {
        // 0x80219CF0: sb          $a1, 0xD0($a3)
        MEM_B(0XD0, ctx->r7) = ctx->r5;
            goto L_80219D90;
    }
    // 0x80219CF0: sb          $a1, 0xD0($a3)
    MEM_B(0XD0, ctx->r7) = ctx->r5;
    // 0x80219CF4: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80219CF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80219CFC: addu        $at, $at, $t9
    gpr jr_addend_80219D04 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80219D00: lw          $t9, -0x5A7C($at)
    ctx->r25 = ADD32(ctx->r1, -0X5A7C);
    // 0x80219D04: jr          $t9
    // 0x80219D08: nop

    switch (jr_addend_80219D04 >> 2) {
        case 0: goto L_80219D80; break;
        case 1: goto L_80219D58; break;
        case 2: goto L_80219D68; break;
        case 3: goto L_80219D60; break;
        case 4: goto L_80219D78; break;
        case 5: goto L_80219D70; break;
        case 6: goto L_80219D30; break;
        case 7: goto L_80219D48; break;
        case 8: goto L_80219D24; break;
        case 9: goto L_80219D0C; break;
        case 10: goto L_80219D18; break;
        case 11: goto L_80219D50; break;
        case 12: goto L_80219D3C; break;
        case 13: goto L_80219D88; break;
        default: switch_error(__func__, 0x80219D04, 0x8023A584);
    }
    // 0x80219D08: nop

L_80219D0C:
    // 0x80219D0C: lw          $v1, 0xC0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC0);
    // 0x80219D10: b           L_80219D98
    // 0x80219D14: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
        goto L_80219D98;
    // 0x80219D14: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
L_80219D18:
    // 0x80219D18: lw          $v1, 0xB4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XB4);
    // 0x80219D1C: b           L_80219D98
    // 0x80219D20: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
        goto L_80219D98;
    // 0x80219D20: lw          $a1, 0xA0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA0);
L_80219D24:
    // 0x80219D24: lw          $v1, 0xB0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XB0);
    // 0x80219D28: b           L_80219D98
    // 0x80219D2C: lw          $a1, 0x8C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8C);
        goto L_80219D98;
    // 0x80219D2C: lw          $a1, 0x8C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8C);
L_80219D30:
    // 0x80219D30: lw          $v1, 0xB8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XB8);
    // 0x80219D34: b           L_80219D98
    // 0x80219D38: lw          $a1, 0xA4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA4);
        goto L_80219D98;
    // 0x80219D38: lw          $a1, 0xA4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA4);
L_80219D3C:
    // 0x80219D3C: lw          $v1, 0xBC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XBC);
    // 0x80219D40: b           L_80219D98
    // 0x80219D44: lw          $a1, 0xA4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA4);
        goto L_80219D98;
    // 0x80219D44: lw          $a1, 0xA4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA4);
L_80219D48:
    // 0x80219D48: jr          $ra
    // 0x80219D4C: lw          $v0, 0xA8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80219D4C: lw          $v0, 0xA8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XA8);
L_80219D50:
    // 0x80219D50: jr          $ra
    // 0x80219D54: lw          $v0, 0x94($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X94);
    TRACE_RETURN()
    return;
    // 0x80219D54: lw          $v0, 0x94($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X94);
L_80219D58:
    // 0x80219D58: jr          $ra
    // 0x80219D5C: lw          $v0, 0xA0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80219D5C: lw          $v0, 0xA0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XA0);
L_80219D60:
    // 0x80219D60: jr          $ra
    // 0x80219D64: lw          $v0, 0x90($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X90);
    TRACE_RETURN()
    return;
    // 0x80219D64: lw          $v0, 0x90($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X90);
L_80219D68:
    // 0x80219D68: jr          $ra
    // 0x80219D6C: lw          $v0, 0x9C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X9C);
    TRACE_RETURN()
    return;
    // 0x80219D6C: lw          $v0, 0x9C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X9C);
L_80219D70:
    // 0x80219D70: jr          $ra
    // 0x80219D74: lw          $v0, 0xAC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XAC);
    TRACE_RETURN()
    return;
    // 0x80219D74: lw          $v0, 0xAC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XAC);
L_80219D78:
    // 0x80219D78: jr          $ra
    // 0x80219D7C: lw          $v0, 0x98($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X98);
    TRACE_RETURN()
    return;
    // 0x80219D7C: lw          $v0, 0x98($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X98);
L_80219D80:
    // 0x80219D80: jr          $ra
    // 0x80219D84: lw          $v0, 0x8C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8C);
    TRACE_RETURN()
    return;
    // 0x80219D84: lw          $v0, 0x8C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8C);
L_80219D88:
    // 0x80219D88: jr          $ra
    // 0x80219D8C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    TRACE_RETURN()
    return;
    // 0x80219D8C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_80219D90:
    // 0x80219D90: jr          $ra
    // 0x80219D94: lw          $v0, 0x8C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8C);
    TRACE_RETURN()
    return;
    // 0x80219D94: lw          $v0, 0x8C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8C);
L_80219D98:
    // 0x80219D98: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x80219D9C: lhu         $a2, 0x20($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X20);
    // 0x80219DA0: beql        $a3, $zero, L_80219DEC
    if (ctx->r7 == 0) {
        // 0x80219DA4: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80219DEC;
    }
    goto skip_1;
    // 0x80219DA4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
    // 0x80219DA8: lhu         $t1, 0x20($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X20);
    // 0x80219DAC: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80219DB0: slt         $at, $a2, $t1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80219DB4: beql        $at, $zero, L_80219DEC
    if (ctx->r1 == 0) {
        // 0x80219DB8: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80219DEC;
    }
    goto skip_2;
    // 0x80219DB8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_2:
    // 0x80219DBC: lbu         $t2, 0x77($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X77);
L_80219DC0:
    // 0x80219DC0: bnel        $a0, $t2, L_80219DD0
    if (ctx->r4 != ctx->r10) {
        // 0x80219DC4: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_80219DD0;
    }
    goto skip_3;
    // 0x80219DC4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_3:
    // 0x80219DC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80219DCC: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_80219DD0:
    // 0x80219DD0: beql        $a3, $zero, L_80219DEC
    if (ctx->r7 == 0) {
        // 0x80219DD4: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80219DEC;
    }
    goto skip_4;
    // 0x80219DD4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_4:
    // 0x80219DD8: lhu         $t3, 0x20($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X20);
    // 0x80219DDC: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80219DE0: bnel        $at, $zero, L_80219DC0
    if (ctx->r1 != 0) {
        // 0x80219DE4: lbu         $t2, 0x77($a3)
        ctx->r10 = MEM_BU(ctx->r7, 0X77);
            goto L_80219DC0;
    }
    goto skip_5;
    // 0x80219DE4: lbu         $t2, 0x77($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X77);
    skip_5:
    // 0x80219DE8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80219DEC:
    // 0x80219DEC: beql        $at, $zero, L_80219E00
    if (ctx->r1 == 0) {
        // 0x80219DF0: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80219E00;
    }
    goto skip_6;
    // 0x80219DF0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    skip_6:
    // 0x80219DF4: jr          $ra
    // 0x80219DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80219DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219DFC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80219E00:
    // 0x80219E00: jr          $ra
    // 0x80219E04: nop

    TRACE_RETURN()
    return;
    // 0x80219E04: nop

;}
RECOMP_FUNC void func_802206AC_5DBB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802206AC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802206B0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802206B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802206B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802206BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802206C0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x802206C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802206C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802206CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802206D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802206D4: swc1        $f6, 0x198($v0)
    MEM_W(0X198, ctx->r2) = ctx->f6.u32l;
    // 0x802206D8: jal         0x80221B7C
    // 0x802206DC: swc1        $f10, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->f10.u32l;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x802206DC: swc1        $f10, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->f10.u32l;
    after_0:
    // 0x802206E0: bne         $v0, $zero, L_802206F0
    if (ctx->r2 != 0) {
        // 0x802206E4: nop
    
            goto L_802206F0;
    }
    // 0x802206E4: nop

    // 0x802206E8: b           L_80220748
    // 0x802206EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80220748;
    // 0x802206EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802206F0:
    // 0x802206F0: jal         0x80220FF0
    // 0x802206F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_1;
    // 0x802206F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802206F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802206FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80220700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80220704: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x80220708: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x8022070C: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x80220710: lwc1        $f16, -0x3238($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3238);
    // 0x80220714: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80220718: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022071C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80220720: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80220724: jal         0x80221C0C
    // 0x80220728: nop

    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_2;
    // 0x80220728: nop

    after_2:
    // 0x8022072C: lui         $t7, 0x8022
    ctx->r15 = S32(0X8022 << 16);
    // 0x80220730: addiu       $t7, $t7, 0x82C
    ctx->r15 = ADD32(ctx->r15, 0X82C);
    // 0x80220734: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80220738: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8022073C: jal         0x8003521C
    // 0x80220740: sw          $t7, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80220740: sw          $t7, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r15;
    after_3:
    // 0x80220744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80220748:
    // 0x80220748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022074C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80220750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80220754: jr          $ra
    // 0x80220758: nop

    TRACE_RETURN()
    return;
    // 0x80220758: nop

;}
RECOMP_FUNC void func_8020F88C_5CAD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F894: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F898: jal         0x80013AC4
    // 0x8020F89C: addiu       $a0, $a0, -0x2BC8
    ctx->r4 = ADD32(ctx->r4, -0X2BC8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F89C: addiu       $a0, $a0, -0x2BC8
    ctx->r4 = ADD32(ctx->r4, -0X2BC8);
    after_0:
    // 0x8020F8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F8A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F8A8: jr          $ra
    // 0x8020F8AC: nop

    TRACE_RETURN()
    return;
    // 0x8020F8AC: nop

;}
RECOMP_FUNC void func_8020E740_5C9C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E748: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E74C: jal         0x80013AC4
    // 0x8020E750: addiu       $a0, $a0, -0x37D4
    ctx->r4 = ADD32(ctx->r4, -0X37D4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E750: addiu       $a0, $a0, -0x37D4
    ctx->r4 = ADD32(ctx->r4, -0X37D4);
    after_0:
    // 0x8020E754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E75C: jr          $ra
    // 0x8020E760: nop

    TRACE_RETURN()
    return;
    // 0x8020E760: nop

;}
RECOMP_FUNC void func_80214C0C_5D00DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214C14: jal         0x802212F0
    // 0x80214C18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802212F0_5DC7C0(rdram, ctx);
        goto after_0;
    // 0x80214C18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80214C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214C24: jr          $ra
    // 0x80214C28: nop

    TRACE_RETURN()
    return;
    // 0x80214C28: nop

;}
RECOMP_FUNC void func_8021F228_5DA6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F228: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8021F22C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x8021F230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F234: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F23C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F240: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F244: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8021F248: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x8021F24C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021F250: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8021F254: jal         0x8021F26C
    // 0x8021F258: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021F26C_5DA73C(rdram, ctx);
        goto after_0;
    // 0x8021F258: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8021F25C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F264: jr          $ra
    // 0x8021F268: nop

    TRACE_RETURN()
    return;
    // 0x8021F268: nop

;}
RECOMP_FUNC void func_8021114C_5CC61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021114C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211154: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211158: jal         0x80013AC4
    // 0x8021115C: addiu       $a0, $a0, -0x1690
    ctx->r4 = ADD32(ctx->r4, -0X1690);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021115C: addiu       $a0, $a0, -0x1690
    ctx->r4 = ADD32(ctx->r4, -0X1690);
    after_0:
    // 0x80211160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211168: jr          $ra
    // 0x8021116C: nop

    TRACE_RETURN()
    return;
    // 0x8021116C: nop

;}
RECOMP_FUNC void func_8020F868_5CAD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F86C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F870: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F874: jal         0x80013AC4
    // 0x8020F878: addiu       $a0, $a0, -0x2BF4
    ctx->r4 = ADD32(ctx->r4, -0X2BF4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F878: addiu       $a0, $a0, -0x2BF4
    ctx->r4 = ADD32(ctx->r4, -0X2BF4);
    after_0:
    // 0x8020F87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F884: jr          $ra
    // 0x8020F888: nop

    TRACE_RETURN()
    return;
    // 0x8020F888: nop

;}
RECOMP_FUNC void func_80222140_5DD610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222140: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80222144: lbu         $t6, 0x7743($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7743);
    // 0x80222148: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8022214C: jr          $ra
    // 0x80222150: sw          $t6, -0x3A10($at)
    MEM_W(-0X3A10, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80222150: sw          $t6, -0x3A10($at)
    MEM_W(-0X3A10, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80211C04_5CD0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211C04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211C08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211C0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211C10: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211C14: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80211C18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211C1C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80211C20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211C24: bgez        $t6, L_80211C3C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80211C28: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80211C3C;
    }
    // 0x80211C28: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80211C2C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80211C30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80211C34: nop

    // 0x80211C38: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80211C3C:
    // 0x80211C3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211C40: ldc1        $f10, -0x6118($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6118);
    // 0x80211C44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211C48: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80211C4C: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x80211C50: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80211C54: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211C58: nop

    // 0x80211C5C: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80211C60: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211C64: nop

    // 0x80211C68: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211C6C: beql        $t8, $zero, L_80211CC0
    if (ctx->r24 == 0) {
        // 0x80211C70: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_80211CC0;
    }
    goto skip_0;
    // 0x80211C70: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x80211C74: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80211C78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80211C7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211C80: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80211C84: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211C88: nop

    // 0x80211C8C: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80211C90: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211C94: nop

    // 0x80211C98: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211C9C: bne         $t8, $zero, L_80211CB4
    if (ctx->r24 != 0) {
        // 0x80211CA0: nop
    
            goto L_80211CB4;
    }
    // 0x80211CA0: nop

    // 0x80211CA4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80211CA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211CAC: b           L_80211CCC
    // 0x80211CB0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80211CCC;
    // 0x80211CB0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80211CB4:
    // 0x80211CB4: b           L_80211CCC
    // 0x80211CB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80211CCC;
    // 0x80211CB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80211CBC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_80211CC0:
    // 0x80211CC0: nop

    // 0x80211CC4: bltz        $t8, L_80211CB4
    if (SIGNED(ctx->r24) < 0) {
        // 0x80211CC8: nop
    
            goto L_80211CB4;
    }
    // 0x80211CC8: nop

L_80211CCC:
    // 0x80211CCC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80211CD0: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x80211CD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211CD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211CDC: jal         0x8021A26C
    // 0x80211CE0: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211CE0: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x80211CE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80211CE8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80211CEC: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211CF0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80211CF4: bgez        $t9, L_80211D0C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211CF8: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_80211D0C;
    }
    // 0x80211CF8: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x80211CFC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80211D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80211D04: nop

    // 0x80211D08: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_80211D0C:
    // 0x80211D0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211D10: ldc1        $f10, -0x6110($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6110);
    // 0x80211D14: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80211D18: nop

    // 0x80211D1C: bc1fl       L_80211D30
    if (!c1cs) {
        // 0x80211D20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211D30;
    }
    goto skip_1;
    // 0x80211D20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80211D24: jal         0x80034ED4
    // 0x80211D28: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80211D28: nop

    after_1:
    // 0x80211D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211D30:
    // 0x80211D30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211D34: jr          $ra
    // 0x80211D38: nop

    TRACE_RETURN()
    return;
    // 0x80211D38: nop

;}
RECOMP_FUNC void func_8021F5B0_5DAA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F5B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021F5B4: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x8021F5B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021F5BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8021F5C0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8021F5C4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021F5C8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8021F5CC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8021F5D0: addiu       $t7, $t7, -0x7860
    ctx->r15 = ADD32(ctx->r15, -0X7860);
    // 0x8021F5D4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8021F5D8: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x8021F5DC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x8021F5E0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8021F5E4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8021F5E8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8021F5EC: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x8021F5F0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8021F5F4: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8021F5F8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021F5FC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021F600: lw          $s0, 0x18($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X18);
    // 0x8021F604: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x8021F608: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021F60C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8021F610: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021F614: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x8021F618: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021F61C: jal         0x8021F6DC
    // 0x8021F620: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    func_8021F6DC_5DABAC(rdram, ctx);
        goto after_0;
    // 0x8021F620: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8021F624: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021F628: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021F62C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F630: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x8021F634: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F638: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F63C: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x8021F640: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x8021F644: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F648: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x8021F64C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8021F650: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x8021F654: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8021F658: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8021F65C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8021F660: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8021F664: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8021F668: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8021F66C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8021F670: jal         0x80033898
    // 0x8021F674: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x8021F674: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x8021F678: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x8021F67C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8021F680: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021F684: jal         0x8021F6DC
    // 0x8021F688: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_8021F6DC_5DABAC(rdram, ctx);
        goto after_2;
    // 0x8021F688: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x8021F68C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8021F690: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8021F694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021F698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021F69C: jal         0x8001DB04
    // 0x8021F6A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x8021F6A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8021F6A4: lhu         $t4, 0x38($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X38);
    // 0x8021F6A8: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x8021F6AC: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
    // 0x8021F6B0: lhu         $t9, 0x3A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3A);
    // 0x8021F6B4: andi        $t8, $t9, 0x3FF
    ctx->r24 = ctx->r25 & 0X3FF;
    // 0x8021F6B8: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x8021F6BC: lhu         $t6, 0x3C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3C);
    // 0x8021F6C0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8021F6C4: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x8021F6C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021F6CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021F6D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021F6D4: jr          $ra
    // 0x8021F6D8: nop

    TRACE_RETURN()
    return;
    // 0x8021F6D8: nop

;}
RECOMP_FUNC void func_8021B424_5D68F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B42C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021B430: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021B434: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021B438: sh          $a1, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r5;
    // 0x8021B43C: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    // 0x8021B440: jal         0x80003E10
    // 0x8021B444: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x8021B444: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x8021B448: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021B44C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8021B450: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x8021B454: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021B458: jal         0x80003EA0
    // 0x8021B45C: swc1        $f6, 0x78($t8)
    MEM_W(0X78, ctx->r24) = ctx->f6.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x8021B45C: swc1        $f6, 0x78($t8)
    MEM_W(0X78, ctx->r24) = ctx->f6.u32l;
    after_1:
    // 0x8021B460: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021B464: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8021B468: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021B46C: swc1        $f10, 0x80($t9)
    MEM_W(0X80, ctx->r25) = ctx->f10.u32l;
    // 0x8021B470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021B478: jr          $ra
    // 0x8021B47C: nop

    TRACE_RETURN()
    return;
    // 0x8021B47C: nop

;}
RECOMP_FUNC void func_8021AAE0_5D5FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021AAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021AAE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021AAE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021AAEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021AAF0: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8021AAF4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021AAF8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x8021AAFC: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x8021AB00: jal         0x8000F420
    // 0x8021AB04: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_0;
    // 0x8021AB04: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x8021AB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021AB0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021AB10: jr          $ra
    // 0x8021AB14: nop

    TRACE_RETURN()
    return;
    // 0x8021AB14: nop

;}
RECOMP_FUNC void func_80220F70_5DC440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220F70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80220F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80220F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80220F7C: jal         0x80221B7C
    // 0x80220F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x80220F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80220F84: bne         $v0, $zero, L_80220F94
    if (ctx->r2 != 0) {
        // 0x80220F88: nop
    
            goto L_80220F94;
    }
    // 0x80220F88: nop

    // 0x80220F8C: b           L_80220FDC
    // 0x80220F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80220FDC;
    // 0x80220F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80220F94:
    // 0x80220F94: jal         0x80220FF0
    // 0x80220F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_1;
    // 0x80220F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80220F9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80220FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80220FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220FA8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80220FAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80220FB0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x80220FB4: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x80220FB8: jal         0x80221C0C
    // 0x80220FBC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_2;
    // 0x80220FBC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x80220FC0: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x80220FC4: addiu       $t6, $t6, 0x1028
    ctx->r14 = ADD32(ctx->r14, 0X1028);
    // 0x80220FC8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80220FCC: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80220FD0: jal         0x8003521C
    // 0x80220FD4: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80220FD4: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    after_3:
    // 0x80220FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80220FDC:
    // 0x80220FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80220FE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80220FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80220FE8: jr          $ra
    // 0x80220FEC: nop

    TRACE_RETURN()
    return;
    // 0x80220FEC: nop

;}
RECOMP_FUNC void func_80224324_5DF7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224324: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80224328: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8022432C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80224330: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80224334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80224338: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022433C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224340: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80224344: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    // 0x80224348: jal         0x8022400C
    // 0x8022434C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8022400C_5DF4DC(rdram, ctx);
        goto after_0;
    // 0x8022434C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80224350: beq         $v0, $zero, L_802243A4
    if (ctx->r2 == 0) {
        // 0x80224354: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_802243A4;
    }
    // 0x80224354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80224358: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8022435C: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80224360: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80224364: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80224368: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8022436C: sb          $zero, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = 0;
    // 0x80224370: lhu         $t9, 0x9C($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X9C);
    // 0x80224374: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80224378: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8022437C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80224380: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x80224384: lw          $t1, 0x5C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X5C);
    // 0x80224388: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x8022438C: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80224390: beq         $v1, $zero, L_8022439C
    if (ctx->r3 == 0) {
        // 0x80224394: nop
    
            goto L_8022439C;
    }
    // 0x80224394: nop

    // 0x80224398: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
L_8022439C:
    // 0x8022439C: jal         0x80035020
    // 0x802243A0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x802243A0: nop

    after_1:
L_802243A4:
    // 0x802243A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802243A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802243AC: jr          $ra
    // 0x802243B0: nop

    TRACE_RETURN()
    return;
    // 0x802243B0: nop

;}
RECOMP_FUNC void func_802259D8_5E0EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802259DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802259E4: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x802259E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802259EC: jal         0x802253A8
    // 0x802259F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_802253A8_5E0878(rdram, ctx);
        goto after_0;
    // 0x802259F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x802259F4: beq         $v0, $zero, L_80225A3C
    if (ctx->r2 == 0) {
        // 0x802259F8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80225A3C;
    }
    // 0x802259F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802259FC: lui         $t7, 0x1280
    ctx->r15 = S32(0X1280 << 16);
    // 0x80225A00: ori         $t7, $t7, 0x761
    ctx->r15 = ctx->r15 | 0X761;
    // 0x80225A04: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80225A08: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x80225A0C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x80225A10: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80225A14: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80225A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80225A1C: lwc1        $f4, 0xC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80225A20: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80225A24: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80225A28: jal         0x80219E70
    // 0x80225A2C: sh          $t1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r9;
    func_80219E70_5D5340(rdram, ctx);
        goto after_1;
    // 0x80225A2C: sh          $t1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r9;
    after_1:
    // 0x80225A30: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225A34: jal         0x8003521C
    // 0x80225A38: addiu       $a0, $a0, 0x5954
    ctx->r4 = ADD32(ctx->r4, 0X5954);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80225A38: addiu       $a0, $a0, 0x5954
    ctx->r4 = ADD32(ctx->r4, 0X5954);
    after_2:
L_80225A3C:
    // 0x80225A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225A44: jr          $ra
    // 0x80225A48: nop

    TRACE_RETURN()
    return;
    // 0x80225A48: nop

;}
RECOMP_FUNC void func_8020DED0_5C93A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DED8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DEDC: jal         0x80013AC4
    // 0x8020DEE0: addiu       $a0, $a0, -0x3D44
    ctx->r4 = ADD32(ctx->r4, -0X3D44);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DEE0: addiu       $a0, $a0, -0x3D44
    ctx->r4 = ADD32(ctx->r4, -0X3D44);
    after_0:
    // 0x8020DEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DEEC: jr          $ra
    // 0x8020DEF0: nop

    TRACE_RETURN()
    return;
    // 0x8020DEF0: nop

;}
RECOMP_FUNC void func_8020F1F0_5CA6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F1F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F1F8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F1FC: jal         0x80013AC4
    // 0x8020F200: addiu       $a0, $a0, -0x309C
    ctx->r4 = ADD32(ctx->r4, -0X309C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F200: addiu       $a0, $a0, -0x309C
    ctx->r4 = ADD32(ctx->r4, -0X309C);
    after_0:
    // 0x8020F204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F20C: jr          $ra
    // 0x8020F210: nop

    TRACE_RETURN()
    return;
    // 0x8020F210: nop

;}
RECOMP_FUNC void func_8020FF94_5CB464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FF98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FF9C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FFA0: jal         0x80013AC4
    // 0x8020FFA4: addiu       $a0, $a0, -0x24C4
    ctx->r4 = ADD32(ctx->r4, -0X24C4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FFA4: addiu       $a0, $a0, -0x24C4
    ctx->r4 = ADD32(ctx->r4, -0X24C4);
    after_0:
    // 0x8020FFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FFAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FFB0: jr          $ra
    // 0x8020FFB4: nop

    TRACE_RETURN()
    return;
    // 0x8020FFB4: nop

;}
RECOMP_FUNC void func_80214AEC_5CFFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214AF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214AF8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80214AFC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80214B00: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x80214B04: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80214B08: beql        $t7, $zero, L_80214B40
    if (ctx->r15 == 0) {
        // 0x80214B0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80214B40;
    }
    goto skip_0;
    // 0x80214B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80214B10: jalr        $t9
    // 0x80214B14: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214B14: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    after_0:
    // 0x80214B18: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x80214B1C: addiu       $t9, $t9, -0x32B8
    ctx->r25 = ADD32(ctx->r25, -0X32B8);
    // 0x80214B20: jalr        $t9
    // 0x80214B24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80214B24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80214B28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214B2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x80214B30: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214B34: jalr        $t9
    // 0x80214B38: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214B38: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    after_2:
    // 0x80214B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80214B40:
    // 0x80214B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214B44: jr          $ra
    // 0x80214B48: nop

    TRACE_RETURN()
    return;
    // 0x80214B48: nop

;}
RECOMP_FUNC void func_80210510_5CB9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210518: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021051C: jal         0x80013AC4
    // 0x80210520: addiu       $a0, $a0, -0x1F18
    ctx->r4 = ADD32(ctx->r4, -0X1F18);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210520: addiu       $a0, $a0, -0x1F18
    ctx->r4 = ADD32(ctx->r4, -0X1F18);
    after_0:
    // 0x80210524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021052C: jr          $ra
    // 0x80210530: nop

    TRACE_RETURN()
    return;
    // 0x80210530: nop

;}
RECOMP_FUNC void func_8021DCB0_5D9180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DCB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DCB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DCB8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021DCBC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021DCC0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021DCC4: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021DCC8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8021DCCC: addiu       $t9, $t9, 0x79F0
    ctx->r25 = ADD32(ctx->r25, 0X79F0);
    // 0x8021DCD0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021DCD4: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021DCD8: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021DCDC: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021DCE0: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021DCE4: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021DCE8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021DCEC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DCF0: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021DCF4: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021DCF8: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021DCFC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021DD00: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021DD04: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021DD08: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DD0C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021DD10: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021DD14: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021DD18: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021DD1C: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021DD20: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021DD24: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021DD28: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021DD2C: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021DD30: jal         0x80040620
    // 0x8021DD34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021DD34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021DD38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DD3C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021DD40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021DD44: jr          $ra
    // 0x8021DD48: nop

    TRACE_RETURN()
    return;
    // 0x8021DD48: nop

;}
RECOMP_FUNC void func_8020E7AC_5C9C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E7AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E7B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E7B8: jal         0x80013AC4
    // 0x8020E7BC: addiu       $a0, $a0, -0x3798
    ctx->r4 = ADD32(ctx->r4, -0X3798);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E7BC: addiu       $a0, $a0, -0x3798
    ctx->r4 = ADD32(ctx->r4, -0X3798);
    after_0:
    // 0x8020E7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E7C8: jr          $ra
    // 0x8020E7CC: nop

    TRACE_RETURN()
    return;
    // 0x8020E7CC: nop

;}
RECOMP_FUNC void func_8020E9EC_5C9EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E9EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E9F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E9F8: jal         0x80013AC4
    // 0x8020E9FC: addiu       $a0, $a0, -0x3674
    ctx->r4 = ADD32(ctx->r4, -0X3674);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E9FC: addiu       $a0, $a0, -0x3674
    ctx->r4 = ADD32(ctx->r4, -0X3674);
    after_0:
    // 0x8020EA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EA08: jr          $ra
    // 0x8020EA0C: nop

    TRACE_RETURN()
    return;
    // 0x8020EA0C: nop

;}
RECOMP_FUNC void func_80221B7C_5DD04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221B7C: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    // 0x80221B80: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x80221B84: beql        $t6, $zero, L_80221BB8
    if (ctx->r14 == 0) {
        // 0x80221B88: lw          $a1, 0x18($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X18);
            goto L_80221BB8;
    }
    goto skip_0;
    // 0x80221B88: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x80221B8C: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x80221B90: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80221B94: sw          $v0, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r2;
    // 0x80221B98: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x80221B9C: beq         $v0, $t7, L_80221BAC
    if (ctx->r2 == ctx->r15) {
        // 0x80221BA0: nop
    
            goto L_80221BAC;
    }
    // 0x80221BA0: nop

    // 0x80221BA4: jr          $ra
    // 0x80221BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80221BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80221BAC:
    // 0x80221BAC: jr          $ra
    // 0x80221BB0: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    TRACE_RETURN()
    return;
    // 0x80221BB0: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x80221BB4: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
L_80221BB8:
    // 0x80221BB8: ori         $t0, $v1, 0x100
    ctx->r8 = ctx->r3 | 0X100;
    // 0x80221BBC: lbu         $v0, 0x7C($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7C);
    // 0x80221BC0: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x80221BC4: beq         $t8, $zero, L_80221C00
    if (ctx->r24 == 0) {
        // 0x80221BC8: andi        $t9, $v0, 0x10
        ctx->r25 = ctx->r2 & 0X10;
            goto L_80221C00;
    }
    // 0x80221BC8: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x80221BCC: bne         $t9, $zero, L_80221BE0
    if (ctx->r25 != 0) {
        // 0x80221BD0: lui         $a2, 0x8020
        ctx->r6 = S32(0X8020 << 16);
            goto L_80221BE0;
    }
    // 0x80221BD0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80221BD4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80221BD8: b           L_80221BE4
    // 0x80221BDC: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
        goto L_80221BE4;
    // 0x80221BDC: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
L_80221BE0:
    // 0x80221BE0: lw          $a2, -0x39F8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39F8);
L_80221BE4:
    // 0x80221BE4: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x80221BE8: sw          $a2, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r6;
    // 0x80221BEC: lbu         $t1, 0x7C($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X7C);
    // 0x80221BF0: andi        $t2, $t1, 0xFFE7
    ctx->r10 = ctx->r9 & 0XFFE7;
    // 0x80221BF4: sb          $t2, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r10;
    // 0x80221BF8: jr          $ra
    // 0x80221BFC: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    TRACE_RETURN()
    return;
    // 0x80221BFC: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
L_80221C00:
    // 0x80221C00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80221C04: jr          $ra
    // 0x80221C08: nop

    TRACE_RETURN()
    return;
    // 0x80221C08: nop

;}
RECOMP_FUNC void func_8021AB90_5D6060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021AB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021AB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021AB98: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x8021AB9C: bnel        $v1, $zero, L_8021ABB0
    if (ctx->r3 != 0) {
        // 0x8021ABA0: lw          $t6, 0x60($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X60);
            goto L_8021ABB0;
    }
    goto skip_0;
    // 0x8021ABA0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    skip_0:
    // 0x8021ABA4: b           L_8021ABF8
    // 0x8021ABA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021ABF8;
    // 0x8021ABA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021ABAC: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
L_8021ABB0:
    // 0x8021ABB0: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x8021ABB4: bgezl       $t7, L_8021ABF8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021ABB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8021ABF8;
    }
    goto skip_1;
    // 0x8021ABB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x8021ABBC: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
    // 0x8021ABC0: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x8021ABC4: beq         $v0, $at, L_8021ABE4
    if (ctx->r2 == ctx->r1) {
        // 0x8021ABC8: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_8021ABE4;
    }
    // 0x8021ABC8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x8021ABCC: beq         $v0, $at, L_8021ABE4
    if (ctx->r2 == ctx->r1) {
        // 0x8021ABD0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_8021ABE4;
    }
    // 0x8021ABD0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8021ABD4: beq         $v0, $at, L_8021ABE4
    if (ctx->r2 == ctx->r1) {
        // 0x8021ABD8: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_8021ABE4;
    }
    // 0x8021ABD8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x8021ABDC: bnel        $v0, $at, L_8021ABF8
    if (ctx->r2 != ctx->r1) {
        // 0x8021ABE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8021ABF8;
    }
    goto skip_2;
    // 0x8021ABE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
L_8021ABE4:
    // 0x8021ABE4: jal         0x80038BC8
    // 0x8021ABE8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x8021ABE8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_0:
    // 0x8021ABEC: b           L_8021ABF8
    // 0x8021ABF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021ABF8;
    // 0x8021ABF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021ABF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021ABF8:
    // 0x8021ABF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021ABFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021AC00: jr          $ra
    // 0x8021AC04: nop

    TRACE_RETURN()
    return;
    // 0x8021AC04: nop

;}
RECOMP_FUNC void func_8021084C_5CBD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021084C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210854: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210858: jal         0x80013AC4
    // 0x8021085C: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021085C: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    after_0:
    // 0x80210860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210868: jr          $ra
    // 0x8021086C: nop

    TRACE_RETURN()
    return;
    // 0x8021086C: nop

;}
RECOMP_FUNC void func_80222048_5DD518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222048: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8022204C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80222050: lbu         $v1, 0x7743($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7743);
    // 0x80222054: lw          $v0, -0x3A0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A0C);
    // 0x80222058: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022205C: beq         $at, $zero, L_8022206C
    if (ctx->r1 == 0) {
        // 0x80222060: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8022206C;
    }
    // 0x80222060: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222064: jr          $ra
    // 0x80222068: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80222068: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
L_8022206C:
    // 0x8022206C: bne         $v0, $v1, L_80222084
    if (ctx->r2 != ctx->r3) {
        // 0x80222070: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_80222084;
    }
    // 0x80222070: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80222074: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80222078: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022207C: jr          $ra
    // 0x80222080: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80222080: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
L_80222084:
    // 0x80222084: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222088: sw          $t7, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r15;
    // 0x8022208C: jr          $ra
    // 0x80222090: nop

    TRACE_RETURN()
    return;
    // 0x80222090: nop

;}
RECOMP_FUNC void func_8021BCE4_5D71B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BCE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021BCE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021BCEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021BCF0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021BCF4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021BCF8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021BCFC: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021BD00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021BD04: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021BD08: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021BD0C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8021BD10: nop

    // 0x8021BD14: bc1fl       L_8021BD38
    if (!c1cs) {
        // 0x8021BD18: lwc1        $f8, 0x10($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021BD38;
    }
    goto skip_0;
    // 0x8021BD18: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x8021BD1C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021BD20: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BD24: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021BD28: nop

    // 0x8021BD2C: bc1tl       L_8021BDDC
    if (c1cs) {
        // 0x8021BD30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021BDDC;
    }
    goto skip_1;
    // 0x8021BD30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8021BD34: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
L_8021BD38:
    // 0x8021BD38: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BD3C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021BD40: jal         0x8021ADD0
    // 0x8021BD44: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021BD44: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8021BD48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021BD4C: addiu       $t6, $a0, 0x100
    ctx->r14 = ADD32(ctx->r4, 0X100);
    // 0x8021BD50: sh          $v0, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r2;
    // 0x8021BD54: jal         0x80003E10
    // 0x8021BD58: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8021BD58: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    after_1:
    // 0x8021BD5C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8021BD60: lwc1        $f16, 0xD0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x8021BD64: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021BD68: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8021BD6C: jal         0x80003E10
    // 0x8021BD70: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8021BD70: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    after_2:
    // 0x8021BD74: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021BD78: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021BD7C: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    // 0x8021BD80: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021BD84: addiu       $t1, $a0, 0x100
    ctx->r9 = ADD32(ctx->r4, 0X100);
    // 0x8021BD88: andi        $a0, $t1, 0x3FF
    ctx->r4 = ctx->r9 & 0X3FF;
    // 0x8021BD8C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021BD90: jal         0x80003EA0
    // 0x8021BD94: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8021BD94: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x8021BD98: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8021BD9C: lwc1        $f16, 0xD0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x8021BDA0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021BDA4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8021BDA8: jal         0x80003E10
    // 0x8021BDAC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_4;
    // 0x8021BDAC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_4:
    // 0x8021BDB0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021BDB4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021BDB8: lwc1        $f16, 0xD0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x8021BDBC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021BDC0: nop

    // 0x8021BDC4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021BDC8: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x8021BDCC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021BDD0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021BDD4: swc1        $f4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f4.u32l;
    // 0x8021BDD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021BDDC:
    // 0x8021BDDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021BDE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021BDE4: jr          $ra
    // 0x8021BDE8: nop

    TRACE_RETURN()
    return;
    // 0x8021BDE8: nop

;}
RECOMP_FUNC void func_80210630_5CBB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210638: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021063C: jal         0x80013AC4
    // 0x80210640: addiu       $a0, $a0, -0x1E08
    ctx->r4 = ADD32(ctx->r4, -0X1E08);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210640: addiu       $a0, $a0, -0x1E08
    ctx->r4 = ADD32(ctx->r4, -0X1E08);
    after_0:
    // 0x80210644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021064C: jr          $ra
    // 0x80210650: nop

    TRACE_RETURN()
    return;
    // 0x80210650: nop

;}
RECOMP_FUNC void func_802222BC_5DD78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802222BC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802222C0: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802222C4: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802222C8: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x802222CC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802222D0: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802222D4: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802222D8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802222DC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802222E0: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802222E4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802222E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802222EC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802222F0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802222F4: jr          $ra
    // 0x802222F8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    TRACE_RETURN()
    return;
    // 0x802222F8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
;}
RECOMP_FUNC void func_8021126C_5CC73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021126C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211274: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211278: jal         0x80013AC4
    // 0x8021127C: addiu       $a0, $a0, -0x162C
    ctx->r4 = ADD32(ctx->r4, -0X162C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021127C: addiu       $a0, $a0, -0x162C
    ctx->r4 = ADD32(ctx->r4, -0X162C);
    after_0:
    // 0x80211280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211288: jr          $ra
    // 0x8021128C: nop

    TRACE_RETURN()
    return;
    // 0x8021128C: nop

;}
RECOMP_FUNC void func_80214FC0_5D0490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214FC4: jr          $ra
    // 0x80214FC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210DEC_5CC2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210DF4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210DF8: jal         0x80013AC4
    // 0x80210DFC: addiu       $a0, $a0, -0x18C0
    ctx->r4 = ADD32(ctx->r4, -0X18C0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210DFC: addiu       $a0, $a0, -0x18C0
    ctx->r4 = ADD32(ctx->r4, -0X18C0);
    after_0:
    // 0x80210E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210E08: jr          $ra
    // 0x80210E0C: nop

    TRACE_RETURN()
    return;
    // 0x80210E0C: nop

;}
RECOMP_FUNC void func_80210828_5CBCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021082C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210830: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210834: jal         0x80013AC4
    // 0x80210838: addiu       $a0, $a0, -0x1C64
    ctx->r4 = ADD32(ctx->r4, -0X1C64);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210838: addiu       $a0, $a0, -0x1C64
    ctx->r4 = ADD32(ctx->r4, -0X1C64);
    after_0:
    // 0x8021083C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210844: jr          $ra
    // 0x80210848: nop

    TRACE_RETURN()
    return;
    // 0x80210848: nop

;}
RECOMP_FUNC void func_80210264_5CB734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021026C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210270: jal         0x80013AC4
    // 0x80210274: addiu       $a0, $a0, -0x21B0
    ctx->r4 = ADD32(ctx->r4, -0X21B0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210274: addiu       $a0, $a0, -0x21B0
    ctx->r4 = ADD32(ctx->r4, -0X21B0);
    after_0:
    // 0x80210278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021027C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210280: jr          $ra
    // 0x80210284: nop

    TRACE_RETURN()
    return;
    // 0x80210284: nop

;}
