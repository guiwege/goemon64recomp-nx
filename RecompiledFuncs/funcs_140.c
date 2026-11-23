#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000060_72B8B0(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r4 = S32(RELOC_HI16(60, 0X26A0) << 16);
    // 0x08000074: jalr        $t9
    // 0x08000078: addiu       $a0, $a0, 0x26A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(60, 0X26A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000078: addiu       $a0, $a0, 0x26A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(60, 0X26A0));
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
RECOMP_FUNC void func_08001058_72C8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001058: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800105C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001060: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001064: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08001068: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x0800106C: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08001070: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08001074: jr          $ra
    // 0x08001078: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08001078: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_0800058C_72BDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800058C: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x08000590: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x08000594: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x08000598: jr          $ra
    // 0x0800059C: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x0800059C: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_080014B0_72CD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080014B4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080014B8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x080014BC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080014C0: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x080014C4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080014C8: jr          $ra
    // 0x080014CC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x080014CC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_0800148C_72CCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800148C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08001490: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001494: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001498: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x0800149C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080014A0: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080014A4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080014A8: jr          $ra
    // 0x080014AC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080014AC: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000000_72B850(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x08000018: jalr        $t9
    // 0x0800001C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x08000020: beq         $v0, $zero, L_0800004C
    if (ctx->r2 == 0) {
        // 0x08000024: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800004C;
    }
    // 0x08000024: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000028: addiu       $t7, $zero, 0x45
    ctx->r15 = ADD32(0, 0X45);
    // 0x0800002C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000030: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000034: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000038: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800003C: jalr        $t9
    // 0x08000040: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000040: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
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
RECOMP_FUNC void func_0800008C_72B8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800008C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000090: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000094: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08000098: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x0800009C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080000A0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x080000A4: addiu       $s0, $s0, 0x230
    ctx->r16 = ADD32(ctx->r16, 0X230);
    // 0x080000A8: addiu       $t7, $zero, 0x4D4
    ctx->r15 = ADD32(0, 0X4D4);
    // 0x080000AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080000B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080000B4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000C0: jalr        $s0
    // 0x080000C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x080000C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080000C8: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x080000CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A14) << 16);
    // 0x080000D0: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x080000D4: addiu       $t9, $zero, 0x4D4
    ctx->r25 = ADD32(0, 0X4D4);
    // 0x080000D8: sw          $v0, 0x2A14($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A14), ctx->r1) = ctx->r2;
    // 0x080000DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x080000E0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080000E4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080000E8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080000EC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080000F0: jalr        $s0
    // 0x080000F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x080000F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080000F8: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x080000FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A18) << 16);
    // 0x08000100: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x08000104: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x08000108: sw          $v0, 0x2A18($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A18), ctx->r1) = ctx->r2;
    // 0x0800010C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08000110: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000114: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000118: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800011C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000120: jalr        $s0
    // 0x08000124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08000124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000128: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x0800012C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A1C) << 16);
    // 0x08000130: addiu       $t2, $t2, 0x1000
    ctx->r10 = ADD32(ctx->r10, 0X1000);
    // 0x08000134: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x08000138: sw          $v0, 0x2A1C($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A1C), ctx->r1) = ctx->r2;
    // 0x0800013C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x08000140: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08000144: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000148: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800014C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000150: jalr        $s0
    // 0x08000154: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08000154: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000158: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x0800015C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A20) << 16);
    // 0x08000160: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x08000164: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x08000168: sw          $v0, 0x2A20($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A20), ctx->r1) = ctx->r2;
    // 0x0800016C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x08000170: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000174: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000178: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800017C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000180: jalr        $s0
    // 0x08000184: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08000184: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000188: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x0800018C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A24) << 16);
    // 0x08000190: addiu       $t6, $t6, 0x3000
    ctx->r14 = ADD32(ctx->r14, 0X3000);
    // 0x08000194: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x08000198: sw          $v0, 0x2A24($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A24), ctx->r1) = ctx->r2;
    // 0x0800019C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080001A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080001A4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080001A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080001AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080001B0: jalr        $s0
    // 0x080001B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x080001B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x080001B8: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x080001BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A28) << 16);
    // 0x080001C0: addiu       $t8, $t8, 0x4000
    ctx->r24 = ADD32(ctx->r24, 0X4000);
    // 0x080001C4: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x080001C8: sw          $v0, 0x2A28($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A28), ctx->r1) = ctx->r2;
    // 0x080001CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x080001D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080001D4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x080001D8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080001DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x080001E0: jalr        $s0
    // 0x080001E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x080001E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x080001E8: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x080001EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A2C) << 16);
    // 0x080001F0: addiu       $t0, $t0, 0x5000
    ctx->r8 = ADD32(ctx->r8, 0X5000);
    // 0x080001F4: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x080001F8: sw          $v0, 0x2A2C($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A2C), ctx->r1) = ctx->r2;
    // 0x080001FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08000200: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000204: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000208: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800020C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000210: jalr        $s0
    // 0x08000214: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08000214: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08000218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800021C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A30) << 16);
    // 0x08000220: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000224: sw          $v0, 0x2A30($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A30), ctx->r1) = ctx->r2;
    // 0x08000228: jr          $ra
    // 0x0800022C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800022C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000514_72BD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000518: beq         $a0, $zero, L_0800057C
    if (ctx->r4 == 0) {
        // 0x0800051C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_0800057C;
    }
    // 0x0800051C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000520: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X230) << 16);
    // 0x08000524: addiu       $t9, $t9, 0x230
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X230));
    // 0x08000528: jalr        $t9
    // 0x0800052C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800052C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000530: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08000534: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000538: addiu       $t9, $t9, 0x374
    ctx->r25 = ADD32(ctx->r25, 0X374);
    // 0x0800053C: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x08000540: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x08000544: jalr        $t9
    // 0x08000548: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000548: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x0800054C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000550: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000554: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000558: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x0800055C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000560: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000564: beql        $a1, $zero, L_08000580
    if (ctx->r5 == 0) {
        // 0x08000568: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000580;
    }
    goto skip_0;
    // 0x08000568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800056C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000570: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000574: jalr        $t9
    // 0x08000578: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000578: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_0800057C:
    // 0x0800057C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000580:
    // 0x08000580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000584: jr          $ra
    // 0x08000588: nop

    TRACE_RETURN()
    return;
    // 0x08000588: nop

;}
RECOMP_FUNC void func_08000BE8_72C438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000BEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000BF0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000BF4: beq         $a1, $zero, L_08000E08
    if (ctx->r5 == 0) {
        // 0x08000BF8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_08000E08;
    }
    // 0x08000BF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000BFC: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08000C00: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x08000C04: addiu       $t6, $zero, 0x10D
    ctx->r14 = ADD32(0, 0X10D);
    // 0x08000C08: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000C0C: beq         $v0, $zero, L_08000C28
    if (ctx->r2 == 0) {
        // 0x08000C10: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000C28;
    }
    // 0x08000C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000C18: beql        $v0, $at, L_08000CF8
    if (ctx->r2 == ctx->r1) {
        // 0x08000C1C: lwc1        $f16, 0x1C($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_08000CF8;
    }
    goto skip_0;
    // 0x08000C1C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x08000C20: b           L_08000DE4
    // 0x08000C24: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
        goto L_08000DE4;
    // 0x08000C24: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
L_08000C28:
    // 0x08000C28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C2C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000C30: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000C34: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000C38: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000C3C: jalr        $t9
    // 0x08000C40: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C40: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08000C44: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2970) << 16);
    // 0x08000C48: lwc1        $f0, 0x2970($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X2970));
    // 0x08000C4C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x08000C50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000C54: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000C58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000C5C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000C60: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000C64: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08000C68: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2974) << 16);
    // 0x08000C6C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x08000C70: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x08000C74: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08000C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C7C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000C80: lhu         $t0, 0x14($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X14);
    // 0x08000C84: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08000C88: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x08000C8C: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x08000C90: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08000C94: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000C98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000C9C: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08000CA0: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x08000CA4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08000CA8: lhu         $t4, 0x18($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X18);
    // 0x08000CAC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000CB0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000CB4: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x08000CB8: lwc1        $f10, 0x2974($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X2974));
    // 0x08000CBC: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x08000CC0: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x08000CC4: jalr        $t9
    // 0x08000CC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x08000CCC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000CD0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000CD4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000CD8: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08000CDC: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x08000CE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000CE4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x08000CE8: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x08000CEC: b           L_08000DE0
    // 0x08000CF0: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
        goto L_08000DE0;
    // 0x08000CF0: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x08000CF4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
L_08000CF8:
    // 0x08000CF8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08000CFC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2978) << 16);
    // 0x08000D00: ldc1        $f2, 0x2978($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X2978));
    // 0x08000D04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000D08: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000D0C: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08000D10: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x08000D14: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x08000D18: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x08000D1C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08000D20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D24: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000D28: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000D2C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000D30: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x08000D34: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x08000D38: lh          $t0, 0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2);
    // 0x08000D3C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000D40: nop

    // 0x08000D44: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000D48: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x08000D4C: nop

    // 0x08000D50: bc1fl       L_08000D88
    if (!c1cs) {
        // 0x08000D54: c.lt.d      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
            goto L_08000D88;
    }
    goto skip_1;
    // 0x08000D54: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
    skip_1:
    // 0x08000D58: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08000D5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2980) << 16);
    // 0x08000D60: ldc1        $f10, 0x2980($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X2980));
    // 0x08000D64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000D68: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08000D6C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000D70: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x08000D74: lh          $t1, 0x2($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2);
    // 0x08000D78: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08000D7C: nop

    // 0x08000D80: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000D84: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
L_08000D88:
    // 0x08000D88: nop

    // 0x08000D8C: bc1fl       L_08000DB4
    if (!c1cs) {
        // 0x08000D90: lwc1        $f6, 0x20($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
            goto L_08000DB4;
    }
    goto skip_2;
    // 0x08000D90: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    skip_2:
    // 0x08000D94: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08000D98: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2988) << 16);
    // 0x08000D9C: ldc1        $f10, 0x2988($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X2988));
    // 0x08000DA0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000DA4: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x08000DA8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000DAC: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x08000DB0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
L_08000DB4:
    // 0x08000DB4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x08000DB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000DBC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000DC0: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x08000DC4: nop

    // 0x08000DC8: bc1fl       L_08000DE4
    if (!c1cs) {
        // 0x08000DCC: lwc1        $f10, 0xC($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
            goto L_08000DE4;
    }
    goto skip_3;
    // 0x08000DCC: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x08000DD0: jalr        $t9
    // 0x08000DD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000DD4: nop

    after_2:
    // 0x08000DD8: b           L_08000E0C
    // 0x08000DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000E0C;
    // 0x08000DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000DE0:
    // 0x08000DE0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
L_08000DE4:
    // 0x08000DE4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2990) << 16);
    // 0x08000DE8: ldc1        $f18, 0x2990($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X2990));
    // 0x08000DEC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000DF0: sub.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d - ctx->f18.d;
    // 0x08000DF4: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x08000DF8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x08000DFC: lh          $t2, 0x2($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2);
    // 0x08000E00: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000E04: sh          $t3, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r11;
L_08000E08:
    // 0x08000E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000E0C:
    // 0x08000E0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000E10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000E14: jr          $ra
    // 0x08000E18: nop

    TRACE_RETURN()
    return;
    // 0x08000E18: nop

;}
RECOMP_FUNC void func_080002B4_72BB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080002B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080002BC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x080002C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x080002C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x080002C8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x080002CC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x080002D0: addiu       $v0, $zero, 0x334
    ctx->r2 = ADD32(0, 0X334);
    // 0x080002D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080002D8: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x080002DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080002E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x080002E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080002E8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x080002EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080002F0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x080002F4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x080002F8: div         $zero, $t8, $v0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r2)));
    // 0x080002FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000300: mflo        $s2
    ctx->r18 = lo;
    // 0x08000304: addiu       $t9, $t9, 0x15E0
    ctx->r25 = ADD32(ctx->r25, 0X15E0);
    // 0x08000308: bne         $v0, $zero, L_08000314
    if (ctx->r2 != 0) {
        // 0x0800030C: nop
    
            goto L_08000314;
    }
    // 0x0800030C: nop

    // 0x08000310: break       7
    do_break(134218512);
L_08000314:
    // 0x08000314: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000318: bne         $v0, $at, L_0800032C
    if (ctx->r2 != ctx->r1) {
        // 0x0800031C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0800032C;
    }
    // 0x0800031C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000320: bne         $t8, $at, L_0800032C
    if (ctx->r24 != ctx->r1) {
        // 0x08000324: nop
    
            goto L_0800032C;
    }
    // 0x08000324: nop

    // 0x08000328: break       6
    do_break(134218536);
L_0800032C:
    // 0x0800032C: lw          $a0, 0x80($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X80);
    // 0x08000330: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    // 0x08000334: addiu       $a2, $s2, 0x38
    ctx->r6 = ADD32(ctx->r18, 0X38);
    // 0x08000338: jalr        $t9
    // 0x0800033C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800033C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_0:
    // 0x08000340: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000344: addiu       $t9, $t9, 0x136C
    ctx->r25 = ADD32(ctx->r25, 0X136C);
    // 0x08000348: jalr        $t9
    // 0x0800034C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800034C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x08000350: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x08000354: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000358: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x0800035C: lw          $t0, 0x6C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X6C);
    // 0x08000360: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000364: addiu       $t9, $t9, 0x4840
    ctx->r25 = ADD32(ctx->r25, 0X4840);
    // 0x08000368: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x0800036C: lw          $t1, 0x70($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X70);
    // 0x08000370: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2610) << 16);
    // 0x08000374: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(60, 0X2610));
    // 0x08000378: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x0800037C: lw          $s0, 0x78($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X78);
    // 0x08000380: lw          $t3, 0x80($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X80);
    // 0x08000384: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x08000388: or          $t2, $s0, $at
    ctx->r10 = ctx->r16 | ctx->r1;
    // 0x0800038C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08000390: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    // 0x08000394: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x08000398: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    // 0x0800039C: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    // 0x080003A0: jalr        $t9
    // 0x080003A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_2:
    // 0x080003A8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x080003AC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x080003B0: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x080003B4: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x080003B8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x080003BC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x080003C0: lw          $t7, 0x20($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X20);
    // 0x080003C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x080003C8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080003CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003D0: or          $t6, $s0, $at
    ctx->r14 = ctx->r16 | ctx->r1;
    // 0x080003D4: addiu       $t9, $t9, 0x9A4
    ctx->r25 = ADD32(ctx->r25, 0X9A4);
    // 0x080003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080003E0: jalr        $t9
    // 0x080003E4: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003E4: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    after_3:
    // 0x080003E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003EC: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x080003F0: jalr        $t9
    // 0x080003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080003F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003FC: addiu       $t9, $t9, 0x980
    ctx->r25 = ADD32(ctx->r25, 0X980);
    // 0x08000400: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000404: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x08000408: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800040C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000410: jalr        $t9
    // 0x08000414: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000414: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_5:
    // 0x08000418: lw          $a3, 0x28($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X28);
    // 0x0800041C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000420: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x08000424: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x08000428: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x0800042C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000430: addiu       $t9, $t9, 0x110C
    ctx->r25 = ADD32(ctx->r25, 0X110C);
    // 0x08000434: mflo        $a3
    ctx->r7 = lo;
    // 0x08000438: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0800043C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000444: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x08000448: jalr        $t9
    // 0x0800044C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800044C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    after_6:
    // 0x08000450: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000454: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x08000458: jalr        $t9
    // 0x0800045C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800045C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x08000460: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x08000464: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x08000468: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x0800046C: addiu       $v1, $v1, 0x8E4
    ctx->r3 = ADD32(ctx->r3, 0X8E4);
    // 0x08000470: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x08000474: addiu       $s0, $s0, 0x1A
    ctx->r16 = ADD32(ctx->r16, 0X1A);
    // 0x08000478: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x0800047C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x08000480: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x08000484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000488: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x0800048C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x08000490: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08000494: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000498: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0800049C: jalr        $v1
    // 0x080004A0: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x080004A0: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    after_8:
    // 0x080004A4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x080004A8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x080004AC: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x080004B0: subu        $t4, $t3, $s2
    ctx->r12 = SUB32(ctx->r11, ctx->r18);
    // 0x080004B4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x080004B8: addiu       $t6, $zero, 0xA0
    ctx->r14 = ADD32(0, 0XA0);
    // 0x080004BC: addu        $a2, $t2, $s2
    ctx->r6 = ADD32(ctx->r10, ctx->r18);
    // 0x080004C0: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    // 0x080004C4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080004C8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x080004CC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080004D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080004D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080004D8: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x080004DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080004E0: jalr        $v1
    // 0x080004E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_9;
    // 0x080004E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x080004E8: lw          $t7, 0x28($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X28);
    // 0x080004EC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x080004F0: bgez        $t8, L_080004FC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x080004F4: sw          $t8, 0x28($s1)
        MEM_W(0X28, ctx->r17) = ctx->r24;
            goto L_080004FC;
    }
    // 0x080004F4: sw          $t8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r24;
    // 0x080004F8: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_080004FC:
    // 0x080004FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x08000500: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08000504: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x08000508: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0800050C: jr          $ra
    // 0x08000510: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000510: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08000AB4_72C304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AB4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000AB8: jr          $ra
    // 0x08000ABC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x08000ABC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_08000E1C_72C66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000E20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000E24: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000E28: beq         $a1, $zero, L_0800103C
    if (ctx->r5 == 0) {
        // 0x08000E2C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_0800103C;
    }
    // 0x08000E2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000E30: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08000E34: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x08000E38: lui         $t8, 0xC0
    ctx->r24 = S32(0XC0 << 16);
    // 0x08000E3C: addiu       $t7, $zero, 0x33A
    ctx->r15 = ADD32(0, 0X33A);
    // 0x08000E40: beq         $v0, $zero, L_08000E64
    if (ctx->r2 == 0) {
        // 0x08000E44: ori         $t8, $t8, 0x6E1
        ctx->r24 = ctx->r24 | 0X6E1;
            goto L_08000E64;
    }
    // 0x08000E44: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x08000E48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000E4C: beq         $v0, $a1, L_08000F04
    if (ctx->r2 == ctx->r5) {
        // 0x08000E50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08000F04;
    }
    // 0x08000E50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000E54: beql        $v0, $at, L_08000FB8
    if (ctx->r2 == ctx->r1) {
        // 0x08000E58: lh          $v0, 0x4($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X4);
            goto L_08000FB8;
    }
    goto skip_0;
    // 0x08000E58: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    skip_0:
    // 0x08000E5C: b           L_08001034
    // 0x08000E60: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
        goto L_08001034;
    // 0x08000E60: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
L_08000E64:
    // 0x08000E64: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x08000E68: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x08000E6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000E70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E74: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000E78: sh          $t7, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r15;
    // 0x08000E7C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000E80: sb          $t0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r8;
    // 0x08000E84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E88: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08000E8C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E94: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000E98: jalr        $t9
    // 0x08000E9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000EA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EA4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000EA8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000EAC: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    // 0x08000EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EB4: jalr        $t9
    // 0x08000EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000EBC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000EC0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2998) << 16);
    // 0x08000EC4: lwc1        $f0, 0x2998($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X2998));
    // 0x08000EC8: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x08000ECC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000ED0: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x08000ED4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08000ED8: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x08000EDC: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x08000EE0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000EE4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000EE8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000EEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000EF0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000EF4: sb          $a1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r5;
    // 0x08000EF8: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x08000EFC: b           L_08001034
    // 0x08000F00: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
        goto L_08001034;
    // 0x08000F00: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
L_08000F04:
    // 0x08000F04: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x08000F08: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x08000F0C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0X2A10) << 16);
    // 0x08000F10: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x08000F14: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000F18: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x08000F1C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x08000F20: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08000F24: addiu       $a0, $zero, 0x13B
    ctx->r4 = ADD32(0, 0X13B);
    // 0x08000F28: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08000F2C: andi        $t9, $t0, 0x2200
    ctx->r25 = ctx->r8 & 0X2200;
    // 0x08000F30: beql        $t9, $zero, L_08000F7C
    if (ctx->r25 == 0) {
        // 0x08000F34: lui         $at, 0xC3EA
        ctx->r1 = S32(0XC3EA << 16);
            goto L_08000F7C;
    }
    goto skip_1;
    // 0x08000F34: lui         $at, 0xC3EA
    ctx->r1 = S32(0XC3EA << 16);
    skip_1:
    // 0x08000F38: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000F40: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x08000F44: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x08000F48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F4C: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08000F50: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000F54: lw          $a1, 0x2A10($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(60, 0X2A10));
    // 0x08000F58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x08000F64: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000F68: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08000F6C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x08000F70: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x08000F74: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x08000F78: lui         $at, 0xC3EA
    ctx->r1 = S32(0XC3EA << 16);
L_08000F7C:
    // 0x08000F7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000F80: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000F84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F88: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000F8C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08000F90: nop

    // 0x08000F94: bc1f        L_08000FAC
    if (!c1cs) {
        // 0x08000F98: nop
    
            goto L_08000FAC;
    }
    // 0x08000F98: nop

    // 0x08000F9C: jalr        $t9
    // 0x08000FA0: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000FA0: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    after_3:
    // 0x08000FA4: b           L_08001040
    // 0x08000FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001040;
    // 0x08000FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000FAC:
    // 0x08000FAC: b           L_08001034
    // 0x08000FB0: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
        goto L_08001034;
    // 0x08000FB0: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x08000FB4: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
L_08000FB8:
    // 0x08000FB8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000FBC: bne         $a1, $v0, L_08000FE4
    if (ctx->r5 != ctx->r2) {
        // 0x08000FC0: nop
    
            goto L_08000FE4;
    }
    // 0x08000FC0: nop

    // 0x08000FC4: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08000FC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000FCC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08000FD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000FD4: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
    // 0x08000FD8: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x08000FDC: b           L_08001034
    // 0x08000FE0: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
        goto L_08001034;
    // 0x08000FE0: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
L_08000FE4:
    // 0x08000FE4: bne         $v0, $at, L_08001034
    if (ctx->r2 != ctx->r1) {
        // 0x08000FE8: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_08001034;
    }
    // 0x08000FE8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000FEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FF0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000FF4: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000FF8: jalr        $t9
    // 0x08000FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08001000: beq         $v0, $zero, L_08001020
    if (ctx->r2 == 0) {
        // 0x08001004: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001020;
    }
    // 0x08001004: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001008: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X299C) << 16);
    // 0x0800100C: lwc1        $f0, 0x299C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X299C));
    // 0x08001010: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08001014: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08001018: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x0800101C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08001020:
    // 0x08001020: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001024: jalr        $t9
    // 0x08001028: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001028: nop

    after_5:
    // 0x0800102C: b           L_08001040
    // 0x08001030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001040;
    // 0x08001030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001034:
    // 0x08001034: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x08001038: sh          $t2, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r10;
L_0800103C:
    // 0x0800103C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001040:
    // 0x08001040: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001044: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001048: jr          $ra
    // 0x0800104C: nop

    TRACE_RETURN()
    return;
    // 0x0800104C: nop

    // 0x08001050: jr          $ra
    // 0x08001054: nop

    TRACE_RETURN()
    return;
    // 0x08001054: nop

;}
RECOMP_FUNC void func_0800107C_72C8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800107C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001080: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08001084: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08001088: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x0800108C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001090: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001094: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08001098: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x0800109C: lhu         $a2, 0x307A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X307A);
    // 0x080010A0: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x080010A4: lh          $a3, 0x307E($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X307E);
    // 0x080010A8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080010AC: bne         $a2, $t6, L_080010C8
    if (ctx->r6 != ctx->r14) {
        // 0x080010B0: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_080010C8;
    }
    // 0x080010B0: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080010B4: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080010B8: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x080010BC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080010C0: b           L_080010D0
    // 0x080010C4: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
        goto L_080010D0;
    // 0x080010C4: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
L_080010C8:
    // 0x080010C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080010CC: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
L_080010D0:
    // 0x080010D0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x080010D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x080010D8: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x080010DC: bne         $v1, $at, L_08001104
    if (ctx->r3 != ctx->r1) {
        // 0x080010E0: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_08001104;
    }
    // 0x080010E0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080010E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080010E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080010EC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x080010F0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x080010F4: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x080010F8: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x080010FC: b           L_08001118
    // 0x08001100: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_08001118;
    // 0x08001100: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_08001104:
    // 0x08001104: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x08001108: bne         $v1, $at, L_08001118
    if (ctx->r3 != ctx->r1) {
        // 0x0800110C: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_08001118;
    }
    // 0x0800110C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08001110: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x08001114: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
L_08001118:
    // 0x08001118: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x0800111C: beq         $at, $zero, L_08001320
    if (ctx->r1 == 0) {
        // 0x08001120: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_08001320;
    }
    // 0x08001120: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x08001124: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29A0) << 16);
    // 0x08001128: addu        $at, $at, $t4
    gpr jr_addend_08001130 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x0800112C: lw          $t4, 0x29A0($at)
    ctx->r12 = ADD32(ctx->r1, (int16_t)RELOC_LO16(60, 0X29A0));
    // 0x08001130: jr          $t4
    // 0x08001134: nop

    switch (jr_addend_08001130 >> 2) {
        case 0: goto L_08001138; break;
        case 1: goto L_080011E4; break;
        case 2: goto L_080012CC; break;
        case 3: goto L_080012F0; break;
        case 4: goto L_08001320; break;
        default: switch_error(__func__, 0x08001130, 0x080029A0);
    }
    // 0x08001134: nop

L_08001138:
    // 0x08001138: addiu       $t6, $zero, 0x33A
    ctx->r14 = ADD32(0, 0X33A);
    // 0x0800113C: lui         $t7, 0x60
    ctx->r15 = S32(0X60 << 16);
    // 0x08001140: ori         $t7, $t7, 0xA0
    ctx->r15 = ctx->r15 | 0XA0;
    // 0x08001144: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001148: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800114C: sh          $t6, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r14;
    // 0x08001150: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001154: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001158: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800115C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08001160: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x08001164: jalr        $t9
    // 0x08001168: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001168: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    after_0:
    // 0x0800116C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08001170: addiu       $a3, $a3, -0x39F4
    ctx->r7 = ADD32(ctx->r7, -0X39F4);
    // 0x08001174: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29B4) << 16);
    // 0x08001178: lwc1        $f6, 0x29B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X29B4));
    // 0x0800117C: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x08001180: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001184: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x08001188: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
    // 0x0800118C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x08001190: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001194: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001198: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x0800119C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080011A0: addiu       $a1, $zero, 0xCB
    ctx->r5 = ADD32(0, 0XCB);
    // 0x080011A4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080011A8: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x080011AC: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x080011B0: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x080011B4: sh          $t2, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r10;
    // 0x080011B8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x080011BC: lbu         $t4, 0x30($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X30);
    // 0x080011C0: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x080011C4: sb          $t5, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r13;
    // 0x080011C8: jalr        $t9
    // 0x080011CC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011CC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x080011D0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080011D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080011D8: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x080011DC: b           L_08001320
    // 0x080011E0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_08001320;
    // 0x080011E0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_080011E4:
    // 0x080011E4: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x080011E8: andi        $t1, $a2, 0x8000
    ctx->r9 = ctx->r6 & 0X8000;
    // 0x080011EC: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x080011F0: beq         $t8, $zero, L_08001204
    if (ctx->r24 == 0) {
        // 0x080011F4: lui         $at, 0xC240
        ctx->r1 = S32(0XC240 << 16);
            goto L_08001204;
    }
    // 0x080011F4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x080011F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080011FC: nop

    // 0x08001200: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
L_08001204:
    // 0x08001204: beql        $t1, $zero, L_08001258
    if (ctx->r9 == 0) {
        // 0x08001208: mtc1        $a3, $f4
        ctx->f4.u32l = ctx->r7;
            goto L_08001258;
    }
    goto skip_0;
    // 0x08001208: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    skip_0:
    // 0x0800120C: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x08001210: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001214: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0XBE8) << 16);
    // 0x08001218: bne         $t2, $at, L_08001254
    if (ctx->r10 != ctx->r1) {
        // 0x0800121C: addiu       $a1, $a1, 0xBE8
        ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0XBE8));
            goto L_08001254;
    }
    // 0x0800121C: addiu       $a1, $a1, 0xBE8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0XBE8));
    // 0x08001220: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X0) << 16);
    // 0x08001224: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X0));
    // 0x08001228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0800122C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08001230: jalr        $t9
    // 0x08001234: sh          $a3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001234: sh          $a3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r7;
    after_2:
    // 0x08001238: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800123C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001240: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001244: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001248: lh          $a3, 0x32($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X32);
    // 0x0800124C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001250: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_08001254:
    // 0x08001254: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
L_08001258:
    // 0x08001258: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x0800125C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001260: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08001264: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08001268: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800126C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001270: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001274: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x08001278: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800127C: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x08001280: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001284: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x08001288: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800128C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08001290: nop

    // 0x08001294: bc1fl       L_080012A8
    if (!c1cs) {
        // 0x08001298: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_080012A8;
    }
    goto skip_1;
    // 0x08001298: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_1:
    // 0x0800129C: b           L_080012C4
    // 0x080012A0: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
        goto L_080012C4;
    // 0x080012A0: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x080012A4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_080012A8:
    // 0x080012A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080012AC: nop

    // 0x080012B0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x080012B4: nop

    // 0x080012B8: bc1f        L_080012C4
    if (!c1cs) {
        // 0x080012BC: nop
    
            goto L_080012C4;
    }
    // 0x080012BC: nop

    // 0x080012C0: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
L_080012C4:
    // 0x080012C4: b           L_08001320
    // 0x080012C8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
        goto L_08001320;
    // 0x080012C8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
L_080012CC:
    // 0x080012CC: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x080012D0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080012D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080012D8: bne         $t3, $at, L_08001320
    if (ctx->r11 != ctx->r1) {
        // 0x080012DC: nop
    
            goto L_08001320;
    }
    // 0x080012DC: nop

    // 0x080012E0: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x080012E4: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x080012E8: b           L_08001320
    // 0x080012EC: andi        $v1, $t4, 0xFF
    ctx->r3 = ctx->r12 & 0XFF;
        goto L_08001320;
    // 0x080012EC: andi        $v1, $t4, 0xFF
    ctx->r3 = ctx->r12 & 0XFF;
L_080012F0:
    // 0x080012F0: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x080012F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080012F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012FC: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x08001300: mfhi        $t6
    ctx->r14 = hi;
    // 0x08001304: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08001308: bne         $t6, $zero, L_08001320
    if (ctx->r14 != 0) {
        // 0x0800130C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001320;
    }
    // 0x0800130C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001310: jalr        $t9
    // 0x08001314: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001314: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x08001318: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800131C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
L_08001320:
    // 0x08001320: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08001324: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001328: beq         $v1, $at, L_080013B8
    if (ctx->r3 == ctx->r1) {
        // 0x0800132C: addiu       $a3, $a3, -0x39F4
        ctx->r7 = ADD32(ctx->r7, -0X39F4);
            goto L_080013B8;
    }
    // 0x0800132C: addiu       $a3, $a3, -0x39F4
    ctx->r7 = ADD32(ctx->r7, -0X39F4);
    // 0x08001330: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001334: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001338: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800133C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x08001340: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08001344: div.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x08001348: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800134C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29B8) << 16);
    // 0x08001350: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08001354: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x08001358: ldc1        $f4, 0x29B8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X29B8));
    // 0x0800135C: sub.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d - ctx->f4.d;
    // 0x08001360: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001364: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08001368: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800136C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x08001370: nop

    // 0x08001374: bc1fl       L_0800138C
    if (!c1cs) {
        // 0x08001378: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_0800138C;
    }
    goto skip_2;
    // 0x08001378: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x0800137C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08001380: b           L_080013A0
    // 0x08001384: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
        goto L_080013A0;
    // 0x08001384: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001388: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_0800138C:
    // 0x0800138C: nop

    // 0x08001390: bc1fl       L_080013A4
    if (!c1cs) {
        // 0x08001394: lwc1        $f18, 0xC($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
            goto L_080013A4;
    }
    goto skip_3;
    // 0x08001394: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    skip_3:
    // 0x08001398: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x0800139C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
L_080013A0:
    // 0x080013A0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
L_080013A4:
    // 0x080013A4: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080013A8: add.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x080013AC: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x080013B0: b           L_08001428
    // 0x080013B4: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
        goto L_08001428;
    // 0x080013B4: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
L_080013B8:
    // 0x080013B8: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x080013BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080013C0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080013C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29C0) << 16);
    // 0x080013C8: ldc1        $f18, 0x29C0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X29C0));
    // 0x080013CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080013D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080013D4: sub.d       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f8.d - ctx->f18.d;
    // 0x080013D8: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x080013DC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x080013E0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080013E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x080013E8: nop

    // 0x080013EC: bc1fl       L_08001400
    if (!c1cs) {
        // 0x080013F0: lwc1        $f4, 0xC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
            goto L_08001400;
    }
    goto skip_4;
    // 0x080013F0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x080013F4: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x080013F8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080013FC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
L_08001400:
    // 0x08001400: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001404: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001408: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x0800140C: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x08001410: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08001414: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x08001418: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x0800141C: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x08001420: addiu       $t8, $t7, -0x20
    ctx->r24 = ADD32(ctx->r15, -0X20);
    // 0x08001424: sh          $t8, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r24;
L_08001428:
    // 0x08001428: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800142C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x08001430: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001438: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x0800143C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001440: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x08001444: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08001448: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800144C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001450: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x08001454: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001458: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x0800145C: add.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x08001460: swc1        $f10, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f10.u32l;
    // 0x08001464: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x08001468: sh          $zero, 0x16($t4)
    MEM_H(0X16, ctx->r12) = 0;
    // 0x0800146C: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x08001470: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08001474: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x08001478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800147C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001480: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x08001484: jr          $ra
    // 0x08001488: nop

    TRACE_RETURN()
    return;
    // 0x08001488: nop

;}
RECOMP_FUNC void func_08000B1C_72C36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B28: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000B2C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0X90C) << 16);
    // 0x08000B30: addiu       $a1, $a1, 0x90C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0X90C));
    // 0x08000B34: jalr        $t9
    // 0x08000B38: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B38: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    after_0:
    // 0x08000B3C: bne         $v0, $zero, L_08000B4C
    if (ctx->r2 != 0) {
        // 0x08000B40: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08000B4C;
    }
    // 0x08000B40: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08000B44: b           L_08000BD8
    // 0x08000B48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000BD8;
    // 0x08000B48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000B4C:
    // 0x08000B4C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000B50: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000B54: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000B58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B5C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000B60: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000B64: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000B68: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08000B6C: jalr        $t9
    // 0x08000B70: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B70: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08000B74: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B78: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x08000B7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B80: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    // 0x08000B84: bne         $v0, $zero, L_08000BA4
    if (ctx->r2 != 0) {
        // 0x08000B88: sw          $v0, 0x18($v1)
        MEM_W(0X18, ctx->r3) = ctx->r2;
            goto L_08000BA4;
    }
    // 0x08000B88: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x08000B8C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0XA48) << 16);
    // 0x08000B90: addiu       $t9, $t9, 0xA48
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0XA48));
    // 0x08000B94: jalr        $t9
    // 0x08000B98: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B98: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x08000B9C: b           L_08000BD8
    // 0x08000BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000BD8;
    // 0x08000BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000BA4:
    // 0x08000BA4: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x08000BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000BAC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08000BB0: jalr        $t9
    // 0x08000BB4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BB4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x08000BB8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08000BBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000BC0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BC4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08000BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BCC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000BD0: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x08000BD4: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_08000BD8:
    // 0x08000BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000BE0: jr          $ra
    // 0x08000BE4: nop

    TRACE_RETURN()
    return;
    // 0x08000BE4: nop

;}
RECOMP_FUNC void func_080005A0_72BDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005A0: jr          $ra
    // 0x080005A4: sw          $a1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080005A4: sw          $a1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0800090C_72C15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800090C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000910: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000914: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x08000918: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2968) << 16);
    // 0x0800091C: ldc1        $f4, 0x2968($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(60, 0X2968));
    // 0x08000920: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000924: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000928: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x0800092C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x08000930: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000934: bc1fl       L_080009B0
    if (!c1cs) {
        // 0x08000938: addiu       $v1, $a2, 0x5C
        ctx->r3 = ADD32(ctx->r6, 0X5C);
            goto L_080009B0;
    }
    goto skip_0;
    // 0x08000938: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x0800093C: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08000940: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000944: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000948: nop

    // 0x0800094C: bc1fl       L_08000964
    if (!c1cs) {
        // 0x08000950: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_08000964;
    }
    goto skip_1;
    // 0x08000950: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x08000954: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x08000958: b           L_08000964
    // 0x0800095C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_08000964;
    // 0x0800095C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x08000960: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_08000964:
    // 0x08000964: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08000968: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x0800096C: nop

    // 0x08000970: bc1fl       L_0800098C
    if (!c1cs) {
        // 0x08000974: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_0800098C;
    }
    goto skip_2;
    // 0x08000974: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x08000978: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800097C: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x08000980: b           L_080009AC
    // 0x08000984: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_080009AC;
    // 0x08000984: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x08000988: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_0800098C:
    // 0x0800098C: nop

    // 0x08000990: bc1fl       L_080009A8
    if (!c1cs) {
        // 0x08000994: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_080009A8;
    }
    goto skip_3;
    // 0x08000994: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x08000998: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x0800099C: b           L_080009AC
    // 0x080009A0: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_080009AC;
    // 0x080009A0: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x080009A4: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_080009A8:
    // 0x080009A8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_080009AC:
    // 0x080009AC: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
L_080009B0:
    // 0x080009B0: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x080009B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009B8: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x080009BC: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x080009C0: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x080009C4: jalr        $t9
    // 0x080009C8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009C8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x080009CC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080009D0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080009D4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080009D8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080009DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080009E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080009E4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080009E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009EC: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x080009F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009F4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x080009F8: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x080009FC: bc1fl       L_08000A3C
    if (!c1cs) {
        // 0x08000A00: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08000A3C;
    }
    goto skip_4;
    // 0x08000A00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x08000A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000A08: lbu         $t8, 0x14($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X14);
    // 0x08000A0C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x08000A10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A14: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000A18: lbu         $t0, 0x15($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X15);
    // 0x08000A1C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x08000A20: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x08000A24: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x08000A28: lbu         $t1, 0x16($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X16);
    // 0x08000A2C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x08000A30: jalr        $t9
    // 0x08000A34: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A34: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x08000A38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000A3C:
    // 0x08000A3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000A40: jr          $ra
    // 0x08000A44: nop

    TRACE_RETURN()
    return;
    // 0x08000A44: nop

;}
RECOMP_FUNC void func_080005C0_72BE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005C0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080005C4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x080005C8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080005CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x080005D4: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x080005D8: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080005DC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0X2B4) << 16);
    // 0x080005E0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x080005E4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x080005E8: addiu       $a1, $a1, 0x2B4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0X2B4));
    // 0x080005EC: jalr        $t9
    // 0x080005F0: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005F0: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    after_0:
    // 0x080005F4: bne         $v0, $zero, L_08000604
    if (ctx->r2 != 0) {
        // 0x080005F8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08000604;
    }
    // 0x080005F8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x080005FC: b           L_080008F8
    // 0x08000600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080008F8;
    // 0x08000600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000604:
    // 0x08000604: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000608: addiu       $t9, $t9, 0x1610
    ctx->r25 = ADD32(ctx->r25, 0X1610);
    // 0x0800060C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000610: jalr        $t9
    // 0x08000614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000618: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800061C: addiu       $t9, $t9, 0x15F8
    ctx->r25 = ADD32(ctx->r25, 0X15F8);
    // 0x08000620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000624: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08000628: jalr        $t9
    // 0x0800062C: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800062C: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    after_2:
    // 0x08000630: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(60, 0X514) << 16);
    // 0x08000634: addiu       $v0, $v0, 0x514
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(60, 0X514));
    // 0x08000638: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x0800063C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000640: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000644: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x08000648: jalr        $t9
    // 0x0800064C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800064C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x08000650: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X8C) << 16);
    // 0x08000654: addiu       $t9, $t9, 0x8C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X8C));
    // 0x08000658: jalr        $t9
    // 0x0800065C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800065C: nop

    after_4:
    // 0x08000660: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x08000664: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000668: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x0800066C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000670: jalr        $t9
    // 0x08000674: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000674: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_5:
    // 0x08000678: bne         $v0, $zero, L_08000698
    if (ctx->r2 != 0) {
        // 0x0800067C: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_08000698;
    }
    // 0x0800067C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x08000680: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x08000684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000688: jalr        $t9
    // 0x0800068C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800068C: nop

    after_6:
    // 0x08000690: b           L_080008F8
    // 0x08000694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080008F8;
    // 0x08000694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000698:
    // 0x08000698: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800069C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080006A0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080006A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006A8: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080006AC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080006B0: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080006B4: jalr        $t9
    // 0x080006B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080006B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x080006BC: bne         $v0, $zero, L_080006DC
    if (ctx->r2 != 0) {
        // 0x080006C0: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_080006DC;
    }
    // 0x080006C0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x080006C4: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x080006C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080006CC: jalr        $t9
    // 0x080006D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080006D0: nop

    after_8:
    // 0x080006D4: b           L_080008F8
    // 0x080006D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080008F8;
    // 0x080006D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080006DC:
    // 0x080006DC: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x080006E0: addiu       $a3, $a3, 0x3DC
    ctx->r7 = ADD32(ctx->r7, 0X3DC);
    // 0x080006E4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x080006E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080006EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080006F0: jalr        $a3
    // 0x080006F4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_9;
    // 0x080006F4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    after_9:
    // 0x080006F8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x080006FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000700: bne         $v0, $at, L_08000720
    if (ctx->r2 != ctx->r1) {
        // 0x08000704: sw          $v0, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r2;
            goto L_08000720;
    }
    // 0x08000704: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x08000708: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x0800070C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000710: jalr        $t9
    // 0x08000714: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000714: nop

    after_10:
    // 0x08000718: b           L_080008F8
    // 0x0800071C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080008F8;
    // 0x0800071C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000720:
    // 0x08000720: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x08000724: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x08000728: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x0800072C: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x08000730: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x08000734: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x08000738: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x0800073C: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x08000740: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x08000744: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x08000748: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x0800074C: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x08000750: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x08000754: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000758: jalr        $a3
    // 0x0800075C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_11;
    // 0x0800075C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x08000760: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000764: bne         $v0, $at, L_08000784
    if (ctx->r2 != ctx->r1) {
        // 0x08000768: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_08000784;
    }
    // 0x08000768: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x0800076C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x08000770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000774: jalr        $t9
    // 0x08000778: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000778: nop

    after_12:
    // 0x0800077C: b           L_080008F8
    // 0x08000780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080008F8;
    // 0x08000780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000784:
    // 0x08000784: lw          $t2, 0x1C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X1C);
    // 0x08000788: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800078C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000790: sh          $t1, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r9;
    // 0x08000794: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800079C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080007A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007A4: addiu       $t9, $t9, -0x2410
    ctx->r25 = ADD32(ctx->r25, -0X2410);
    // 0x080007A8: addiu       $a1, $a1, 0x2E0
    ctx->r5 = ADD32(ctx->r5, 0X2E0);
    // 0x080007AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080007B0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x080007B4: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x080007B8: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x080007BC: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x080007C0: addiu       $t6, $zero, 0x4D1
    ctx->r14 = ADD32(0, 0X4D1);
    // 0x080007C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080007C8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x080007CC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x080007D0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x080007D4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x080007D8: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x080007DC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x080007E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x080007E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080007E8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x080007EC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x080007F0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x080007F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080007F8: jalr        $t9
    // 0x080007FC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080007FC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x08000800: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x08000804: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x08000808: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800080C: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x08000810: addiu       $t9, $t9, 0x15E0
    ctx->r25 = ADD32(ctx->r25, 0X15E0);
    // 0x08000814: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08000818: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x0800081C: jalr        $t9
    // 0x08000820: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000820: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_14:
    // 0x08000824: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x08000828: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(60, 0X2A18) << 16);
    // 0x0800082C: lw          $t0, 0x2A18($t0)
    ctx->r8 = MEM_W(ctx->r8, (int16_t)RELOC_LO16(60, 0X2A18));
    // 0x08000830: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000834: addiu       $v0, $v0, 0x6F0
    ctx->r2 = ADD32(ctx->r2, 0X6F0);
    // 0x08000838: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x0800083C: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x08000840: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x08000844: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000848: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x0800084C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000854: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000858: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x0800085C: jalr        $v0
    // 0x08000860: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x08000860: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_15:
    // 0x08000864: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x08000868: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x0800086C: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(60, 0X2A18) << 16);
    // 0x08000870: lw          $t3, 0x2A18($t3)
    ctx->r11 = MEM_W(ctx->r11, (int16_t)RELOC_LO16(60, 0X2A18));
    // 0x08000874: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x08000878: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x0800087C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x08000880: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08000884: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000888: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800088C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000890: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000894: jalr        $t9
    // 0x08000898: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000898: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_16:
    // 0x0800089C: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x080008A0: addiu       $v1, $v1, 0x5AC
    ctx->r3 = ADD32(ctx->r3, 0X5AC);
    // 0x080008A4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x080008A8: jalr        $v1
    // 0x080008AC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_17;
    // 0x080008AC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_17:
    // 0x080008B0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x080008B4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080008B8: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(60, 0X2A14) << 16);
    // 0x080008BC: lw          $t6, 0x2A14($t6)
    ctx->r14 = MEM_W(ctx->r14, (int16_t)RELOC_LO16(60, 0X2A14));
    // 0x080008C0: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x080008C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x080008C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080008CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080008D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x080008D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x080008D8: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x080008DC: jalr        $t9
    // 0x080008E0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080008E0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_18:
    // 0x080008E4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x080008E8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080008EC: jalr        $t9
    // 0x080008F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080008F0: nop

    after_19:
    // 0x080008F4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_080008F8:
    // 0x080008F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x080008FC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x08000900: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x08000904: jr          $ra
    // 0x08000908: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000908: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08000AC0_72C310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC0: jr          $ra
    // 0x08000AC4: nop

    TRACE_RETURN()
    return;
    // 0x08000AC4: nop

;}
RECOMP_FUNC void func_08000AC8_72C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000ACC: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x08000AD0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000AD4: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x08000AD8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x08000ADC: nop

    // 0x08000AE0: bc1fl       L_08000B04
    if (!c1cs) {
        // 0x08000AE4: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_08000B04;
    }
    goto skip_0;
    // 0x08000AE4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x08000AE8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000AEC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000AF0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000AF4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000AF8: b           L_08000B0C
    // 0x08000AFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_08000B0C;
    // 0x08000AFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x08000B00: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_08000B04:
    // 0x08000B04: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000B08: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_08000B0C:
    // 0x08000B0C: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000B10: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08000B14: jr          $ra
    // 0x08000B18: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000B18: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080014E8_72CD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014E8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x080014EC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080014F0: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080014F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080014F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080014FC: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x08001500: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x08001504: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08001508: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x0800150C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08001510: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001514: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x08001518: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800151C: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08001520: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x08001524: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001528: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x0800152C: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x08001530: lhu         $t3, 0x307A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X307A);
    // 0x08001534: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001538: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x0800153C: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x08001540: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x08001544: bnel        $t3, $t5, L_08001560
    if (ctx->r11 != ctx->r13) {
        // 0x08001548: sh          $t8, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r24;
            goto L_08001560;
    }
    goto skip_0;
    // 0x08001548: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
    skip_0:
    // 0x0800154C: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x08001550: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001554: b           L_08001560
    // 0x08001558: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
        goto L_08001560;
    // 0x08001558: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x0800155C: sh          $t8, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r24;
L_08001560:
    // 0x08001560: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x08001564: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x08001568: lhu         $t2, 0x3092($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X3092);
    // 0x0800156C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001570: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001574: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x08001578: beq         $t3, $zero, L_08001588
    if (ctx->r11 == 0) {
        // 0x0800157C: nop
    
            goto L_08001588;
    }
    // 0x0800157C: nop

    // 0x08001580: jalr        $t9
    // 0x08001584: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001584: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
L_08001588:
    // 0x08001588: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800158C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001590: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001594: addiu       $t9, $t9, 0x40A8
    ctx->r25 = ADD32(ctx->r25, 0X40A8);
    // 0x08001598: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800159C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080015A0: swc1        $f12, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f12.u32l;
    // 0x080015A4: jalr        $t9
    // 0x080015A8: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015A8: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x080015AC: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x080015B0: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x080015B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080015B8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080015BC: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080015C0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x080015C4: jalr        $t9
    // 0x080015C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x080015CC: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x080015D0: sltiu       $at, $t4, 0xD
    ctx->r1 = ctx->r12 < 0XD ? 1 : 0;
    // 0x080015D4: beq         $at, $zero, L_080023EC
    if (ctx->r1 == 0) {
        // 0x080015D8: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_080023EC;
    }
    // 0x080015D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x080015DC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29C8) << 16);
    // 0x080015E0: addu        $at, $at, $t4
    gpr jr_addend_080015E8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x080015E4: lw          $t4, 0x29C8($at)
    ctx->r12 = ADD32(ctx->r1, (int16_t)RELOC_LO16(60, 0X29C8));
    // 0x080015E8: jr          $t4
    // 0x080015EC: nop

    switch (jr_addend_080015E8 >> 2) {
        case 0: goto L_080015F0; break;
        case 1: goto L_080016CC; break;
        case 2: goto L_080016EC; break;
        case 3: goto L_08001760; break;
        case 4: goto L_080017F8; break;
        case 5: goto L_08001A28; break;
        case 6: goto L_08001A4C; break;
        case 7: goto L_08001BB8; break;
        case 8: goto L_0800257C; break;
        case 9: goto L_08001F3C; break;
        case 10: goto L_08002074; break;
        case 11: goto L_080020FC; break;
        case 12: goto L_080023A0; break;
        default: switch_error(__func__, 0x080015E8, 0x080029C8);
    }
    // 0x080015EC: nop

L_080015F0:
    // 0x080015F0: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x080015F4: lui         $t6, 0x9280
    ctx->r14 = S32(0X9280 << 16);
    // 0x080015F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015FC: addiu       $t5, $zero, 0x327
    ctx->r13 = ADD32(0, 0X327);
    // 0x08001600: ori         $t6, $t6, 0x560
    ctx->r14 = ctx->r14 | 0X560;
    // 0x08001604: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08001608: addiu       $t8, $zero, 0x176
    ctx->r24 = ADD32(0, 0X176);
    // 0x0800160C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08001610: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x08001614: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001618: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x0800161C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001620: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001624: sh          $t5, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r13;
    // 0x08001628: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800162C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001630: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001634: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x08001638: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x0800163C: jalr        $t9
    // 0x08001640: sw          $t2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001640: sw          $t2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r10;
    after_3:
    // 0x08001644: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001648: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800164C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001650: jalr        $t9
    // 0x08001654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08001658: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800165C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001660: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x08001664: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001668: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800166C: lui         $at, 0xC3A0
    ctx->r1 = S32(0XC3A0 << 16);
    // 0x08001670: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001674: lui         $at, 0xC3E6
    ctx->r1 = S32(0XC3E6 << 16);
    // 0x08001678: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800167C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x08001680: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001684: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08001688: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x0800168C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001690: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08001694: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x08001698: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x0800169C: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
    // 0x080016A0: addiu       $t9, $t9, -0x6360
    ctx->r25 = ADD32(ctx->r25, -0X6360);
    // 0x080016A4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x080016A8: jalr        $t9
    // 0x080016AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080016AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x080016B0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080016B4: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080016B8: jalr        $t9
    // 0x080016BC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080016BC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_6:
    // 0x080016C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080016C4: b           L_080023EC
    // 0x080016C8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_080023EC;
    // 0x080016C8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_080016CC:
    // 0x080016CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016D0: addiu       $t9, $t9, 0x1B7C
    ctx->r25 = ADD32(ctx->r25, 0X1B7C);
    // 0x080016D4: jalr        $t9
    // 0x080016D8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080016D8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    after_7:
    // 0x080016DC: beq         $v0, $zero, L_080023EC
    if (ctx->r2 == 0) {
        // 0x080016E0: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_080023EC;
    }
    // 0x080016E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x080016E4: b           L_080023EC
    // 0x080016E8: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080023EC;
    // 0x080016E8: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_080016EC:
    // 0x080016EC: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x080016F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080016F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016F8: lw          $a0, 0xEC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XEC);
    // 0x080016FC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08001700: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001704: lbu         $t7, 0xCD($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XCD);
    // 0x08001708: bnel        $t7, $at, L_080023F0
    if (ctx->r15 != ctx->r1) {
        // 0x0800170C: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_080023F0;
    }
    goto skip_1;
    // 0x0800170C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x08001710: sb          $t8, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = ctx->r24;
    // 0x08001714: jalr        $t9
    // 0x08001718: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001718: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    after_8:
    // 0x0800171C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08001720: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x08001724: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x08001728: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x0800172C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001730: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001734: bne         $a0, $t1, L_08001744
    if (ctx->r4 != ctx->r9) {
        // 0x08001738: lw          $t2, 0x90($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X90);
            goto L_08001744;
    }
    // 0x08001738: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x0800173C: b           L_08001748
    // 0x08001740: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_08001748;
    // 0x08001740: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_08001744:
    // 0x08001744: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_08001748:
    // 0x08001748: lhu         $a0, 0xA4($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0XA4);
    // 0x0800174C: jalr        $t9
    // 0x08001750: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001750: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_9:
    // 0x08001754: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08001758: b           L_080023EC
    // 0x0800175C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080023EC;
    // 0x0800175C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001760:
    // 0x08001760: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001764: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001768: jalr        $t9
    // 0x0800176C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800176C: nop

    after_10:
    // 0x08001770: bne         $v0, $zero, L_080023EC
    if (ctx->r2 != 0) {
        // 0x08001774: lw          $v1, 0x90($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X90);
            goto L_080023EC;
    }
    // 0x08001774: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x08001778: lw          $t4, 0x68($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X68);
    // 0x0800177C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08001780: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08001784: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08001788: sw          $t5, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r13;
    // 0x0800178C: ori         $t7, $t5, 0x4400
    ctx->r15 = ctx->r13 | 0X4400;
    // 0x08001790: sw          $t7, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r15;
    // 0x08001794: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001798: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x0800179C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x080017A0: jalr        $v0
    // 0x080017A4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x080017A4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_11:
    // 0x080017A8: beq         $v0, $zero, L_080017EC
    if (ctx->r2 == 0) {
        // 0x080017AC: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_080017EC;
    }
    // 0x080017AC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x080017B0: jalr        $t9
    // 0x080017B4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080017B4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_12:
    // 0x080017B8: bne         $v0, $zero, L_080017EC
    if (ctx->r2 != 0) {
        // 0x080017BC: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_080017EC;
    }
    // 0x080017BC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080017C0: lw          $t8, -0x3A24($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A24);
    // 0x080017C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080017C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x080017CC: bnel        $t8, $at, L_080017F0
    if (ctx->r24 != ctx->r1) {
        // 0x080017D0: addiu       $t2, $zero, 0xC
        ctx->r10 = ADD32(0, 0XC);
            goto L_080017F0;
    }
    goto skip_2;
    // 0x080017D0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    skip_2:
    // 0x080017D4: jalr        $t9
    // 0x080017D8: addiu       $a0, $zero, 0x7A
    ctx->r4 = ADD32(0, 0X7A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080017D8: addiu       $a0, $zero, 0x7A
    ctx->r4 = ADD32(0, 0X7A);
    after_13:
    // 0x080017DC: beq         $v0, $zero, L_080017EC
    if (ctx->r2 == 0) {
        // 0x080017E0: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_080017EC;
    }
    // 0x080017E0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x080017E4: b           L_080023EC
    // 0x080017E8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_080023EC;
    // 0x080017E8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_080017EC:
    // 0x080017EC: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
L_080017F0:
    // 0x080017F0: b           L_080023EC
    // 0x080017F4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_080023EC;
    // 0x080017F4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080017F8:
    // 0x080017F8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x080017FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001800: bnel        $v0, $at, L_08001838
    if (ctx->r2 != ctx->r1) {
        // 0x08001804: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_08001838;
    }
    goto skip_3;
    // 0x08001804: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_3:
    // 0x08001808: jal         0x08000B1C
    // 0x0800180C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_08000B1C_72C36C(rdram, ctx);
        goto after_14;
    // 0x0800180C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x08001810: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08001814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001818: jal         0x08000AB4
    // 0x0800181C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_08000AB4_72C304(rdram, ctx);
        goto after_15;
    // 0x0800181C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
    // 0x08001820: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001824: jal         0x08000AC8
    // 0x08001828: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_08000AC8_72C318(rdram, ctx);
        goto after_16;
    // 0x08001828: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_16:
    // 0x0800182C: b           L_080023F0
    // 0x08001830: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
        goto L_080023F0;
    // 0x08001830: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001834: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_08001838:
    // 0x08001838: bne         $v0, $at, L_08001A04
    if (ctx->r2 != ctx->r1) {
        // 0x0800183C: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(60, 0X60) << 16);
            goto L_08001A04;
    }
    // 0x0800183C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X60) << 16);
    // 0x08001840: addiu       $t9, $t9, 0x60
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X60));
    // 0x08001844: jalr        $t9
    // 0x08001848: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001848: nop

    after_17:
    // 0x0800184C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x08001850: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x08001854: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001858: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x0800185C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001860: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001864: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x08001868: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x0800186C: sb          $t3, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r11;
    // 0x08001870: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001874: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x08001878: jalr        $t9
    // 0x0800187C: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800187C: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_18:
    // 0x08001880: lui         $at, 0xC3E3
    ctx->r1 = S32(0XC3E3 << 16);
    // 0x08001884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001888: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800188C: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x08001890: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001894: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001898: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x0800189C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x080018A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080018A4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x080018A8: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x080018AC: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x080018B0: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x080018B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x080018B8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x080018BC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x080018C0: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x080018C4: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x080018C8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x080018CC: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x080018D0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080018D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x080018D8: swc1        $f16, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f16.u32l;
    // 0x080018DC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x080018E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080018E4: sh          $zero, 0x16($t8)
    MEM_H(0X16, ctx->r24) = 0;
    // 0x080018E8: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x080018EC: sh          $zero, 0x94($t1)
    MEM_H(0X94, ctx->r9) = 0;
    // 0x080018F0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x080018F4: lw          $t3, 0x5C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X5C);
    // 0x080018F8: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x080018FC: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x08001900: lw          $t9, 0x5C($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X5C);
    // 0x08001904: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x08001908: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800190C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001910: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001914: sb          $t5, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r13;
    // 0x08001918: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800191C: bne         $a0, $zero, L_08001934
    if (ctx->r4 != 0) {
        // 0x08001920: nop
    
            goto L_08001934;
    }
    // 0x08001920: nop

    // 0x08001924: jalr        $t9
    // 0x08001928: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001928: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_19:
    // 0x0800192C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08001930: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_08001934:
    // 0x08001934: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001938: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x0800193C: jalr        $t9
    // 0x08001940: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001940: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_20:
    // 0x08001944: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001948: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800194C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001950: jalr        $t9
    // 0x08001954: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001954: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_21:
    // 0x08001958: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x0800195C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001960: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001964: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001968: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800196C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x08001970: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001974: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001978: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x0800197C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08001980: jalr        $t9
    // 0x08001984: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001984: nop

    after_22:
    // 0x08001988: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x0800198C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001990: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x08001994: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001998: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x0800199C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x080019A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080019A8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080019AC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080019B0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080019B4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x080019B8: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x080019BC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x080019C0: jalr        $t9
    // 0x080019C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080019C4: nop

    after_23:
    // 0x080019C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019CC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080019D0: jalr        $t9
    // 0x080019D4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080019D4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_24:
    // 0x080019D8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080019DC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A10) << 16);
    // 0x080019E0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080019E4: sw          $v0, 0x2A10($at)
    MEM_W((int16_t)RELOC_LO16(60, 0X2A10), ctx->r1) = ctx->r2;
    // 0x080019E8: jalr        $t9
    // 0x080019EC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080019EC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_25:
    // 0x080019F0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080019F4: jal         0x08000AC8
    // 0x080019F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_08000AC8_72C318(rdram, ctx);
        goto after_26;
    // 0x080019F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
    // 0x080019FC: b           L_080023F0
    // 0x08001A00: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
        goto L_080023F0;
    // 0x08001A00: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_08001A04:
    // 0x08001A04: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08001A08: bne         $v0, $at, L_080023EC
    if (ctx->r2 != ctx->r1) {
        // 0x08001A0C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080023EC;
    }
    // 0x08001A0C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A10: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001A14: jalr        $t9
    // 0x08001A18: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001A18: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    after_27:
    // 0x08001A1C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x08001A20: b           L_080023EC
    // 0x08001A24: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_080023EC;
    // 0x08001A24: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08001A28:
    // 0x08001A28: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A2C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001A30: jalr        $t9
    // 0x08001A34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001A34: nop

    after_28:
    // 0x08001A38: bne         $v0, $zero, L_080023EC
    if (ctx->r2 != 0) {
        // 0x08001A3C: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_080023EC;
    }
    // 0x08001A3C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x08001A40: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001A44: b           L_080023EC
    // 0x08001A48: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_080023EC;
    // 0x08001A48: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08001A4C:
    // 0x08001A4C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08001A50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001A54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001A58: bne         $v0, $at, L_08001B9C
    if (ctx->r2 != ctx->r1) {
        // 0x08001A5C: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08001B9C;
    }
    // 0x08001A5C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001A60: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001A64: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001A68: jalr        $t9
    // 0x08001A6C: sb          $t1, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001A6C: sb          $t1, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r9;
    after_29:
    // 0x08001A70: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001A74: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001A78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001A7C: bne         $a0, $zero, L_08001A9C
    if (ctx->r4 != 0) {
        // 0x08001A80: addiu       $a3, $zero, 0x9
        ctx->r7 = ADD32(0, 0X9);
            goto L_08001A9C;
    }
    // 0x08001A80: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x08001A84: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X5C0) << 16);
    // 0x08001A88: addiu       $t9, $t9, 0x5C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X5C0));
    // 0x08001A8C: jalr        $t9
    // 0x08001A90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001A90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_30:
    // 0x08001A94: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08001A98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_08001A9C:
    // 0x08001A9C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X58C) << 16);
    // 0x08001AA0: addiu       $t9, $t9, 0x58C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X58C));
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001AA8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_31:
    // 0x08001AAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AB0: addiu       $t9, $t9, 0x14B8
    ctx->r25 = ADD32(ctx->r25, 0X14B8);
    // 0x08001AB4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001ABC: jalr        $t9
    // 0x08001AC0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001AC0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_32:
    // 0x08001AC4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X0) << 16);
    // 0x08001AC8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X0));
    // 0x08001ACC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0X107C) << 16);
    // 0x08001AD0: addiu       $a1, $a1, 0x107C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0X107C));
    // 0x08001AD4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001AD8: jalr        $t9
    // 0x08001ADC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001ADC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_33:
    // 0x08001AE0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X148C) << 16);
    // 0x08001AE4: addiu       $t9, $t9, 0x148C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X148C));
    // 0x08001AE8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08001AEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001AF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001AF4: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x08001AF8: jalr        $t9
    // 0x08001AFC: lui         $a3, 0x4384
    ctx->r7 = S32(0X4384 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001AFC: lui         $a3, 0x4384
    ctx->r7 = S32(0X4384 << 16);
    after_34:
    // 0x08001B00: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X14B0) << 16);
    // 0x08001B04: addiu       $t9, $t9, 0x14B0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X14B0));
    // 0x08001B08: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001B0C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x08001B10: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x08001B14: jalr        $t9
    // 0x08001B18: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001B18: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_35:
    // 0x08001B1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B20: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001B24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001B28: jalr        $t9
    // 0x08001B2C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08001B2C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_36:
    // 0x08001B30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B34: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08001B38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001B3C: jalr        $t9
    // 0x08001B40: lui         $a1, 0x4570
    ctx->r5 = S32(0X4570 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08001B40: lui         $a1, 0x4570
    ctx->r5 = S32(0X4570 << 16);
    after_37:
    // 0x08001B44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001B48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001B4C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001B50: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B54: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001B58: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x08001B5C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001B60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001B64: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x08001B68: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001B6C: jalr        $t9
    // 0x08001B70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001B70: nop

    after_38:
    // 0x08001B74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B78: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001B7C: lui         $a3, 0xC39D
    ctx->r7 = S32(0XC39D << 16);
    // 0x08001B80: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001B84: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001B88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001B8C: jalr        $t9
    // 0x08001B90: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001B90: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    after_39:
    // 0x08001B94: b           L_080023F0
    // 0x08001B98: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
        goto L_080023F0;
    // 0x08001B98: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_08001B9C:
    // 0x08001B9C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001BA0: bne         $v0, $at, L_080023EC
    if (ctx->r2 != ctx->r1) {
        // 0x08001BA4: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_080023EC;
    }
    // 0x08001BA4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08001BA8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x08001BAC: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x08001BB0: b           L_080023EC
    // 0x08001BB4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080023EC;
    // 0x08001BB4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001BB8:
    // 0x08001BB8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x08001BBC: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x08001BC0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x08001BC4: andi        $t4, $v0, 0x8
    ctx->r12 = ctx->r2 & 0X8;
    // 0x08001BC8: beq         $t4, $zero, L_08001BFC
    if (ctx->r12 == 0) {
        // 0x08001BCC: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_08001BFC;
    }
    // 0x08001BCC: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x08001BD0: lhu         $t5, 0x6($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X6);
    // 0x08001BD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001BD8: bne         $t5, $at, L_08001BFC
    if (ctx->r13 != ctx->r1) {
        // 0x08001BDC: nop
    
            goto L_08001BFC;
    }
    // 0x08001BDC: nop

    // 0x08001BE0: lb          $t6, 0x1($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X1);
    // 0x08001BE4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001BE8: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x08001BEC: lb          $t8, 0x1($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X1);
    // 0x08001BF0: bgez        $t8, L_08001BFC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08001BF4: nop
    
            goto L_08001BFC;
    }
    // 0x08001BF4: nop

    // 0x08001BF8: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_08001BFC:
    // 0x08001BFC: beq         $t1, $zero, L_08001C38
    if (ctx->r9 == 0) {
        // 0x08001C00: addiu       $a3, $sp, 0x68
        ctx->r7 = ADD32(ctx->r29, 0X68);
            goto L_08001C38;
    }
    // 0x08001C00: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x08001C04: lhu         $t9, 0x6($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X6);
    // 0x08001C08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001C0C: bne         $t9, $at, L_08001C38
    if (ctx->r25 != ctx->r1) {
        // 0x08001C10: nop
    
            goto L_08001C38;
    }
    // 0x08001C10: nop

    // 0x08001C14: lb          $t2, 0x1($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X1);
    // 0x08001C18: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08001C1C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001C20: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
    // 0x08001C24: lb          $t4, 0x1($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X1);
    // 0x08001C28: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x08001C2C: bne         $at, $zero, L_08001C38
    if (ctx->r1 != 0) {
        // 0x08001C30: nop
    
            goto L_08001C38;
    }
    // 0x08001C30: nop

    // 0x08001C34: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
L_08001C38:
    // 0x08001C38: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X14B0) << 16);
    // 0x08001C3C: addiu       $t9, $t9, 0x14B0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X14B0));
    // 0x08001C40: jalr        $t9
    // 0x08001C44: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001C44: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_40:
    // 0x08001C48: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001C4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001C50: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C54: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001C58: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x08001C5C: jalr        $t9
    // 0x08001C60: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001C60: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_41:
    // 0x08001C64: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x08001C68: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001C6C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001C70: beql        $a2, $zero, L_08001C9C
    if (ctx->r6 == 0) {
        // 0x08001C74: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_08001C9C;
    }
    goto skip_4;
    // 0x08001C74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_4:
    // 0x08001C78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001C7C: beq         $a2, $at, L_08001D08
    if (ctx->r6 == ctx->r1) {
        // 0x08001C80: lwc1        $f18, 0x6C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_08001D08;
    }
    // 0x08001C80: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001C84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001C88: beq         $a2, $at, L_08001D7C
    if (ctx->r6 == ctx->r1) {
        // 0x08001C8C: lwc1        $f6, 0x6C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_08001D7C;
    }
    // 0x08001C8C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001C90: b           L_08001DCC
    // 0x08001C94: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
        goto L_08001DCC;
    // 0x08001C94: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x08001C98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_08001C9C:
    // 0x08001C9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CA0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001CA4: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x08001CA8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001CAC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001CB0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x08001CB4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08001CB8: jalr        $t9
    // 0x08001CBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08001CBC: nop

    after_42:
    // 0x08001CC0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001CC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001CC8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001CCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001CD0: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001CD4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08001CD8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CDC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08001CE0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001CE4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001CE8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001CEC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001CF0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001CF4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08001CF8: jalr        $t9
    // 0x08001CFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08001CFC: nop

    after_43:
    // 0x08001D00: b           L_08001DCC
    // 0x08001D04: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
        goto L_08001DCC;
    // 0x08001D04: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_08001D08:
    // 0x08001D08: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001D0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001D10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D14: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001D18: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x08001D1C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001D20: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001D24: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x08001D28: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08001D2C: jalr        $t9
    // 0x08001D30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08001D30: nop

    after_44:
    // 0x08001D34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001D38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001D3C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08001D40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001D44: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001D48: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08001D4C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D50: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08001D54: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001D58: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001D5C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08001D60: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08001D64: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001D68: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08001D6C: jalr        $t9
    // 0x08001D70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001D70: nop

    after_45:
    // 0x08001D74: b           L_08001DCC
    // 0x08001D78: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
        goto L_08001DCC;
    // 0x08001D78: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_08001D7C:
    // 0x08001D7C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001D80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001D84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D88: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001D8C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x08001D90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001D94: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001D98: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x08001D9C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001DA0: jalr        $t9
    // 0x08001DA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001DA4: nop

    after_46:
    // 0x08001DA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DAC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001DB0: lui         $a3, 0xC39D
    ctx->r7 = S32(0XC39D << 16);
    // 0x08001DB4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001DB8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001DBC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001DC0: jalr        $t9
    // 0x08001DC4: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08001DC4: lui         $a2, 0x433E
    ctx->r6 = S32(0X433E << 16);
    after_47:
    // 0x08001DC8: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_08001DCC:
    // 0x08001DCC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08001DD0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001DD4: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x08001DD8: mfhi        $t7
    ctx->r15 = hi;
    // 0x08001DDC: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08001DE0: bne         $t7, $zero, L_080023EC
    if (ctx->r15 != 0) {
        // 0x08001DE4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_080023EC;
    }
    // 0x08001DE4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x08001DE8: jalr        $v0
    // 0x08001DEC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_48;
    // 0x08001DEC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_48:
    // 0x08001DF0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x08001DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001DF8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_08001DFC:
    // 0x08001DFC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x08001E00: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08001E04: jalr        $t9
    // 0x08001E08: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001E08: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_49:
    // 0x08001E0C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x08001E10: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x08001E14: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x08001E18: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x08001E1C: bgez        $v1, L_08001E2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001E20: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_08001E2C;
    }
    // 0x08001E20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x08001E24: b           L_08001E30
    // 0x08001E28: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
        goto L_08001E30;
    // 0x08001E28: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
L_08001E2C:
    // 0x08001E2C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_08001E30:
    // 0x08001E30: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x08001E34: beq         $at, $zero, L_08001E44
    if (ctx->r1 == 0) {
        // 0x08001E38: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_08001E44;
    }
    // 0x08001E38: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001E3C: bnel        $a1, $at, L_08001DFC
    if (ctx->r5 != ctx->r1) {
        // 0x08001E40: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_08001DFC;
    }
    goto skip_5;
    // 0x08001E40: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    skip_5:
L_08001E44:
    // 0x08001E44: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x08001E48: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x08001E4C: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x08001E50: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001E54: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x08001E58: mflo        $t1
    ctx->r9 = lo;
    // 0x08001E5C: addiu       $t2, $t1, -0x50
    ctx->r10 = ADD32(ctx->r9, -0X50);
    // 0x08001E60: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x08001E64: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08001E68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001E6C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001E70: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(60, 0XE1C) << 16);
    // 0x08001E74: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(60, 0X0) << 16);
    // 0x08001E78: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(60, 0X0));
    // 0x08001E7C: addiu       $a1, $a1, 0xE1C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(60, 0XE1C));
    // 0x08001E80: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x08001E84: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x08001E88: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08001E8C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001E90: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001E94: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x08001E98: jalr        $v0
    // 0x08001E9C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_50;
    // 0x08001E9C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_50:
    // 0x08001EA0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x08001EA4: beq         $v0, $zero, L_08001ECC
    if (ctx->r2 == 0) {
        // 0x08001EA8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08001ECC;
    }
    // 0x08001EA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001EAC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X1058) << 16);
    // 0x08001EB0: addiu       $t9, $t9, 0x1058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X1058));
    // 0x08001EB4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001EB8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x08001EBC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x08001EC0: jalr        $t9
    // 0x08001EC4: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001EC4: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    after_51:
    // 0x08001EC8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_08001ECC:
    // 0x08001ECC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x08001ED0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x08001ED4: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x08001ED8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001EDC: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x08001EE0: mflo        $t4
    ctx->r12 = lo;
    // 0x08001EE4: addiu       $t5, $t4, -0x50
    ctx->r13 = ADD32(ctx->r12, -0X50);
    // 0x08001EE8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x08001EEC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08001EF0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08001EF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001EF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001EFC: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x08001F00: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08001F04: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001F08: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x08001F0C: jalr        $t9
    // 0x08001F10: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001F10: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_52:
    // 0x08001F14: beq         $v0, $zero, L_080023EC
    if (ctx->r2 == 0) {
        // 0x08001F18: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_080023EC;
    }
    // 0x08001F18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001F1C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X1058) << 16);
    // 0x08001F20: addiu       $t9, $t9, 0x1058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X1058));
    // 0x08001F24: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08001F28: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x08001F2C: jalr        $t9
    // 0x08001F30: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001F30: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_53:
    // 0x08001F34: b           L_080023F0
    // 0x08001F38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
        goto L_080023F0;
    // 0x08001F38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_08001F3C:
    // 0x08001F3C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X14B0) << 16);
    // 0x08001F40: addiu       $t9, $t9, 0x14B0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X14B0));
    // 0x08001F44: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001F48: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x08001F4C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x08001F50: jalr        $t9
    // 0x08001F54: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001F54: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_54:
    // 0x08001F58: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08001F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001F60: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F64: bne         $v0, $at, L_08002020
    if (ctx->r2 != ctx->r1) {
        // 0x08001F68: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_08002020;
    }
    // 0x08001F68: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001F6C: jalr        $t9
    // 0x08001F70: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08001F70: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_55:
    // 0x08001F74: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08001F78: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x08001F7C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08001F80: jalr        $v0
    // 0x08001F84: addiu       $a0, $zero, 0x13A
    ctx->r4 = ADD32(0, 0X13A);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_56;
    // 0x08001F84: addiu       $a0, $zero, 0x13A
    ctx->r4 = ADD32(0, 0X13A);
    after_56:
    // 0x08001F88: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x08001F8C: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x08001F90: jalr        $v0
    // 0x08001F94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_57;
    // 0x08001F94: nop

    after_57:
    // 0x08001F98: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X14D0) << 16);
    // 0x08001F9C: addiu       $t9, $t9, 0x14D0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X14D0));
    // 0x08001FA0: jalr        $t9
    // 0x08001FA4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08001FA4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_58:
    // 0x08001FA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FAC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001FB0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001FB4: jalr        $t9
    // 0x08001FB8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08001FB8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_59:
    // 0x08001FBC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001FC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001FC4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001FC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001FCC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x08001FD0: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001FD4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x08001FD8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08001FDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FE0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001FE4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x08001FE8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08001FEC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001FF0: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x08001FF4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001FF8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08001FFC: jalr        $t9
    // 0x08002000: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08002000: nop

    after_60:
    // 0x08002004: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002008: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800200C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002010: jalr        $t9
    // 0x08002014: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08002014: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_61:
    // 0x08002018: b           L_08002034
    // 0x0800201C: nop

        goto L_08002034;
    // 0x0800201C: nop

L_08002020:
    // 0x08002020: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08002024: bne         $v0, $at, L_08002034
    if (ctx->r2 != ctx->r1) {
        // 0x08002028: addiu       $t6, $zero, 0xB
        ctx->r14 = ADD32(0, 0XB);
            goto L_08002034;
    }
    // 0x08002028: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x0800202C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08002030: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08002034:
    // 0x08002034: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002038: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800203C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002040: jalr        $t9
    // 0x08002044: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08002044: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_62:
    // 0x08002048: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800204C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002050: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002054: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x08002058: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x0800205C: jalr        $t9
    // 0x08002060: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08002060: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_63:
    // 0x08002064: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x08002068: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800206C: b           L_0800257C
    // 0x08002070: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
        goto L_0800257C;
    // 0x08002070: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
L_08002074:
    // 0x08002074: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08002078: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800207C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002080: bne         $v0, $at, L_080020D8
    if (ctx->r2 != ctx->r1) {
        // 0x08002084: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_080020D8;
    }
    // 0x08002084: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002088: jalr        $t9
    // 0x0800208C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x0800208C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_64:
    // 0x08002090: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08002094: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002098: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x0800209C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080020A0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x080020A4: jalr        $t9
    // 0x080020A8: addiu       $a1, $zero, 0xCD
    ctx->r5 = ADD32(0, 0XCD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x080020A8: addiu       $a1, $zero, 0xCD
    ctx->r5 = ADD32(0, 0XCD);
    after_65:
    // 0x080020AC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x080020B0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080020B4: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x080020B8: addiu       $t9, $t9, -0x2920
    ctx->r25 = ADD32(ctx->r25, -0X2920);
    // 0x080020BC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x080020C0: jalr        $t9
    // 0x080020C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x080020C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_66:
    // 0x080020C8: jal         0x080014DC
    // 0x080020CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_080014DC_72CD2C(rdram, ctx);
        goto after_67;
    // 0x080020CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_67:
    // 0x080020D0: b           L_080020F0
    // 0x080020D4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
        goto L_080020F0;
    // 0x080020D4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_080020D8:
    // 0x080020D8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x080020DC: bne         $v0, $at, L_080020F0
    if (ctx->r2 != ctx->r1) {
        // 0x080020E0: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_080020F0;
    }
    // 0x080020E0: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x080020E4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x080020E8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x080020EC: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_080020F0:
    // 0x080020F0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x080020F4: b           L_0800257C
    // 0x080020F8: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
        goto L_0800257C;
    // 0x080020F8: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
L_080020FC:
    // 0x080020FC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x08002100: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002104: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x08002108: bnel        $v0, $at, L_08002124
    if (ctx->r2 != ctx->r1) {
        // 0x0800210C: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_08002124;
    }
    goto skip_6;
    // 0x0800210C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_6:
    // 0x08002110: jal         0x08000AC8
    // 0x08002114: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    func_08000AC8_72C318(rdram, ctx);
        goto after_68;
    // 0x08002114: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_68:
    // 0x08002118: b           L_08002394
    // 0x0800211C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
        goto L_08002394;
    // 0x0800211C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x08002120: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_08002124:
    // 0x08002124: bnel        $v0, $at, L_08002344
    if (ctx->r2 != ctx->r1) {
        // 0x08002128: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_08002344;
    }
    goto skip_7;
    // 0x08002128: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    skip_7:
    // 0x0800212C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002130: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002134: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08002138: beql        $a0, $zero, L_08002150
    if (ctx->r4 == 0) {
        // 0x0800213C: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_08002150;
    }
    goto skip_8;
    // 0x0800213C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_8:
    // 0x08002140: jalr        $t9
    // 0x08002144: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08002144: nop

    after_69:
    // 0x08002148: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0800214C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_08002150:
    // 0x08002150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002154: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08002158: beql        $a0, $zero, L_08002170
    if (ctx->r4 == 0) {
        // 0x0800215C: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_08002170;
    }
    goto skip_9;
    // 0x0800215C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_9:
    // 0x08002160: jalr        $t9
    // 0x08002164: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08002164: nop

    after_70:
    // 0x08002168: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x0800216C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08002170:
    // 0x08002170: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002174: addiu       $t9, $t9, 0x16AC
    ctx->r25 = ADD32(ctx->r25, 0X16AC);
    // 0x08002178: beq         $a0, $zero, L_0800218C
    if (ctx->r4 == 0) {
        // 0x0800217C: nop
    
            goto L_0800218C;
    }
    // 0x0800217C: nop

    // 0x08002180: jalr        $t9
    // 0x08002184: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08002184: nop

    after_71:
    // 0x08002188: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0800218C:
    // 0x0800218C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002190: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08002194: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08002198: addiu       $a3, $a3, -0x39F4
    ctx->r7 = ADD32(ctx->r7, -0X39F4);
    // 0x0800219C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X29FC) << 16);
    // 0x080021A0: lwc1        $f16, 0x29FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X29FC));
    // 0x080021A4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x080021A8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080021AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080021B0: swc1        $f16, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f16.u32l;
    // 0x080021B4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x080021B8: lui         $at, 0xC3A0
    ctx->r1 = S32(0XC3A0 << 16);
    // 0x080021BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080021C0: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x080021C4: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x080021C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080021CC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080021D0: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x080021D4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x080021D8: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x080021DC: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x080021E0: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x080021E4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080021E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080021EC: swc1        $f18, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f18.u32l;
    // 0x080021F0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x080021F4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080021F8: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080021FC: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    // 0x08002200: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x08002204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002208: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x0800220C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x08002210: lbu         $t8, 0x30($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X30);
    // 0x08002214: ori         $t1, $t8, 0x1
    ctx->r9 = ctx->r24 | 0X1;
    // 0x08002218: sb          $t1, 0x30($v1)
    MEM_B(0X30, ctx->r3) = ctx->r9;
    // 0x0800221C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08002220: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08002224: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08002228: jalr        $t9
    // 0x0800222C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x0800222C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_72:
    // 0x08002230: lui         $at, 0xC394
    ctx->r1 = S32(0XC394 << 16);
    // 0x08002234: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08002238: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800223C: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x08002240: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x08002244: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08002248: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800224C: sb          $zero, 0x64($t3)
    MEM_B(0X64, ctx->r11) = 0;
    // 0x08002250: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A00) << 16);
    // 0x08002254: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x08002258: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x0800225C: lwc1        $f8, 0x2A00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X2A00));
    // 0x08002260: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(60, 0X2A04) << 16);
    // 0x08002264: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x08002268: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    // 0x0800226C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x08002270: lwc1        $f10, 0x2A04($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(60, 0X2A04));
    // 0x08002274: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002278: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800227C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x08002280: jalr        $t9
    // 0x08002284: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08002284: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    after_73:
    // 0x08002288: bne         $v0, $zero, L_08002320
    if (ctx->r2 != 0) {
        // 0x0800228C: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08002320;
    }
    // 0x0800228C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002290: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002294: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002298: jalr        $t9
    // 0x0800229C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x0800229C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_74:
    // 0x080022A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022A4: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080022A8: jalr        $t9
    // 0x080022AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x080022AC: nop

    after_75:
    // 0x080022B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080022B4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080022B8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080022BC: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x080022C0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080022C4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080022C8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080022CC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x080022D0: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x080022D4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x080022D8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080022DC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080022E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080022E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080022E8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080022EC: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x080022F0: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x080022F4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x080022F8: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x080022FC: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x08002300: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x08002304: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x08002308: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x0800230C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x08002310: jalr        $t9
    // 0x08002314: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08002314: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_76:
    // 0x08002318: b           L_08002394
    // 0x0800231C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
        goto L_08002394;
    // 0x0800231C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
L_08002320:
    // 0x08002320: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08002324: jalr        $t9
    // 0x08002328: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08002328: nop

    after_77:
    // 0x0800232C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08002330: jal         0x08000AC8
    // 0x08002334: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_08000AC8_72C318(rdram, ctx);
        goto after_78;
    // 0x08002334: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_78:
    // 0x08002338: b           L_08002394
    // 0x0800233C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
        goto L_08002394;
    // 0x0800233C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x08002340: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_08002344:
    // 0x08002344: bne         $v0, $at, L_08002390
    if (ctx->r2 != ctx->r1) {
        // 0x08002348: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002390;
    }
    // 0x08002348: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800234C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002350: jalr        $t9
    // 0x08002354: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08002354: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_79:
    // 0x08002358: beq         $v0, $zero, L_08002390
    if (ctx->r2 == 0) {
        // 0x0800235C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002390;
    }
    // 0x0800235C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002360: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08002364: jalr        $t9
    // 0x08002368: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08002368: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    after_80:
    // 0x0800236C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08002370: beql        $a0, $zero, L_08002388
    if (ctx->r4 == 0) {
        // 0x08002374: addiu       $t6, $zero, 0xC
        ctx->r14 = ADD32(0, 0XC);
            goto L_08002388;
    }
    goto skip_10;
    // 0x08002374: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    skip_10:
    // 0x08002378: jal         0x08000A48
    // 0x0800237C: nop

    func_08000A48_72C298(rdram, ctx);
        goto after_81;
    // 0x0800237C: nop

    after_81:
    // 0x08002380: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08002384: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
L_08002388:
    // 0x08002388: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x0800238C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08002390:
    // 0x08002390: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
L_08002394:
    // 0x08002394: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08002398: b           L_0800257C
    // 0x0800239C: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
        goto L_0800257C;
    // 0x0800239C: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
L_080023A0:
    // 0x080023A0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080023A4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080023A8: jalr        $t9
    // 0x080023AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080023AC: nop

    after_82:
    // 0x080023B0: bne         $v0, $zero, L_0800257C
    if (ctx->r2 != 0) {
        // 0x080023B4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800257C;
    }
    // 0x080023B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023B8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080023BC: jalr        $t9
    // 0x080023C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x080023C0: nop

    after_83:
    // 0x080023C4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x080023C8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080023CC: addiu       $a2, $a2, -0x39FC
    ctx->r6 = ADD32(ctx->r6, -0X39FC);
    // 0x080023D0: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x080023D4: jalr        $t9
    // 0x080023D8: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x080023D8: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_84:
    // 0x080023DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080023E0: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x080023E4: b           L_0800257C
    // 0x080023E8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_0800257C;
    // 0x080023E8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_080023EC:
    // 0x080023EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_080023F0:
    // 0x080023F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023F4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080023F8: beql        $a0, $zero, L_0800240C
    if (ctx->r4 == 0) {
        // 0x080023FC: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_0800240C;
    }
    goto skip_11;
    // 0x080023FC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_11:
    // 0x08002400: jalr        $t9
    // 0x08002404: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08002404: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_85:
    // 0x08002408: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_0800240C:
    // 0x0800240C: beql        $a0, $zero, L_0800256C
    if (ctx->r4 == 0) {
        // 0x08002410: lh          $t5, 0x4($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X4);
            goto L_0800256C;
    }
    goto skip_12;
    // 0x08002410: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    skip_12:
    // 0x08002414: lb          $a2, 0x2($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X2);
    // 0x08002418: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(60, 0X14B0) << 16);
    // 0x0800241C: addiu       $t2, $t2, 0x14B0
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(60, 0X14B0));
    // 0x08002420: beq         $a2, $zero, L_08002444
    if (ctx->r6 == 0) {
        // 0x08002424: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_08002444;
    }
    // 0x08002424: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x08002428: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800242C: beq         $a2, $at, L_0800247C
    if (ctx->r6 == ctx->r1) {
        // 0x08002430: lui         $v0, 0x800
        ctx->r2 = S32(RELOC_HI16(60, 0X5A8) << 16);
            goto L_0800247C;
    }
    // 0x08002430: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(60, 0X5A8) << 16);
    // 0x08002434: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(60, 0X5A8) << 16);
    // 0x08002438: addiu       $t3, $t3, 0x5A8
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(60, 0X5A8));
    // 0x0800243C: b           L_080024AC
    // 0x08002440: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
        goto L_080024AC;
    // 0x08002440: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_08002444:
    // 0x08002444: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(60, 0X5A8) << 16);
    // 0x08002448: addiu       $t4, $t4, 0x5A8
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(60, 0X5A8));
    // 0x0800244C: jalr        $t4
    // 0x08002450: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r12)(rdram, ctx);
        goto after_86;
    // 0x08002450: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_86:
    // 0x08002454: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08002458: bne         $v0, $at, L_080024AC
    if (ctx->r2 != ctx->r1) {
        // 0x0800245C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080024AC;
    }
    // 0x0800245C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002460: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002464: jalr        $t9
    // 0x08002468: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x08002468: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_87:
    // 0x0800246C: lb          $t5, 0x2($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2);
    // 0x08002470: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08002474: b           L_080024AC
    // 0x08002478: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
        goto L_080024AC;
    // 0x08002478: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
L_0800247C:
    // 0x0800247C: addiu       $v0, $v0, 0x5A8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(60, 0X5A8));
    // 0x08002480: jalr        $v0
    // 0x08002484: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_88;
    // 0x08002484: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_88:
    // 0x08002488: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x0800248C: bne         $v0, $at, L_080024AC
    if (ctx->r2 != ctx->r1) {
        // 0x08002490: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080024AC;
    }
    // 0x08002490: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002494: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002498: jalr        $t9
    // 0x0800249C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x0800249C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_89:
    // 0x080024A0: lb          $t7, 0x2($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2);
    // 0x080024A4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080024A8: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
L_080024AC:
    // 0x080024AC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080024B0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080024B4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x080024B8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x080024BC: jalr        $t9
    // 0x080024C0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x080024C0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_90:
    // 0x080024C4: lui         $at, 0xC3DC
    ctx->r1 = S32(0XC3DC << 16);
    // 0x080024C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080024CC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x080024D0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(60, 0X5A0) << 16);
    // 0x080024D4: addiu       $t9, $t9, 0x5A0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(60, 0X5A0));
    // 0x080024D8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080024DC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080024E0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080024E4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080024E8: jalr        $t9
    // 0x080024EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x080024EC: nop

    after_91:
    // 0x080024F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080024F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080024F8: jalr        $t9
    // 0x080024FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x080024FC: nop

    after_92:
    // 0x08002500: bgtz        $v0, L_0800251C
    if (SIGNED(ctx->r2) > 0) {
        // 0x08002504: lw          $t9, 0x34($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X34);
            goto L_0800251C;
    }
    // 0x08002504: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08002508: jalr        $t9
    // 0x0800250C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x0800250C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_93:
    // 0x08002510: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08002514: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08002518: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_0800251C:
    // 0x0800251C: lui         $at, 0xC3DC
    ctx->r1 = S32(0XC3DC << 16);
    // 0x08002520: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002524: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08002528: lui         $at, 0x43BE
    ctx->r1 = S32(0X43BE << 16);
    // 0x0800252C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002530: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08002534: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x08002538: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x0800253C: bc1fl       L_08002550
    if (!c1cs) {
        // 0x08002540: lwc1        $f18, 0x6C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_08002550;
    }
    goto skip_13;
    // 0x08002540: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    skip_13:
    // 0x08002544: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08002548: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x0800254C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
L_08002550:
    // 0x08002550: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08002554: nop

    // 0x08002558: bc1fl       L_0800256C
    if (!c1cs) {
        // 0x0800255C: lh          $t5, 0x4($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X4);
            goto L_0800256C;
    }
    goto skip_14;
    // 0x0800255C: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
    skip_14:
    // 0x08002560: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08002564: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x08002568: lh          $t5, 0x4($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4);
L_0800256C:
    // 0x0800256C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08002570: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
    // 0x08002574: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x08002578: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
L_0800257C:
    // 0x0800257C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08002580: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08002584: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x08002588: jr          $ra
    // 0x0800258C: nop

    TRACE_RETURN()
    return;
    // 0x0800258C: nop

;}
RECOMP_FUNC void func_08000230_72BA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000234: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000238: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x0800023C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000240: addiu       $s0, $s0, 0x2E0
    ctx->r16 = ADD32(ctx->r16, 0X2E0);
    // 0x08000244: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A14) << 16);
    // 0x08000248: jalr        $s0
    // 0x0800024C: lw          $a0, 0x2A14($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A14));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800024C: lw          $a0, 0x2A14($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A14));
    after_0:
    // 0x08000250: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A18) << 16);
    // 0x08000254: jalr        $s0
    // 0x08000258: lw          $a0, 0x2A18($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A18));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08000258: lw          $a0, 0x2A18($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A18));
    after_1:
    // 0x0800025C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A1C) << 16);
    // 0x08000260: jalr        $s0
    // 0x08000264: lw          $a0, 0x2A1C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A1C));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08000264: lw          $a0, 0x2A1C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A1C));
    after_2:
    // 0x08000268: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A20) << 16);
    // 0x0800026C: jalr        $s0
    // 0x08000270: lw          $a0, 0x2A20($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A20));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08000270: lw          $a0, 0x2A20($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A20));
    after_3:
    // 0x08000274: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A24) << 16);
    // 0x08000278: jalr        $s0
    // 0x0800027C: lw          $a0, 0x2A24($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A24));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800027C: lw          $a0, 0x2A24($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A24));
    after_4:
    // 0x08000280: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A28) << 16);
    // 0x08000284: jalr        $s0
    // 0x08000288: lw          $a0, 0x2A28($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A28));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000288: lw          $a0, 0x2A28($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A28));
    after_5:
    // 0x0800028C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X2A2C) << 16);
    // 0x08000290: jalr        $s0
    // 0x08000294: lw          $a0, 0x2A2C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A2C));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08000294: lw          $a0, 0x2A2C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(60, 0X2A2C));
    after_6:
    // 0x08000298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800029C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080002A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080002A4: jr          $ra
    // 0x080002A8: nop

    TRACE_RETURN()
    return;
    // 0x080002A8: nop

    // 0x080002AC: jr          $ra
    // 0x080002B0: nop

    TRACE_RETURN()
    return;
    // 0x080002B0: nop

;}
RECOMP_FUNC void func_08000A48_72C298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A50: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x08000A54: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000A58: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000A5C: beq         $t6, $zero, L_08000A88
    if (ctx->r14 == 0) {
        // 0x08000A60: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_08000A88;
    }
    // 0x08000A60: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000A64: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000A68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A6C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000A70: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000A74: lw          $a1, 0x74($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X74);
    // 0x08000A78: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08000A7C: jalr        $t9
    // 0x08000A80: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A80: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000A84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08000A88:
    // 0x08000A88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A8C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000A90: jalr        $t9
    // 0x08000A94: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A94: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x08000A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000AA4: jr          $ra
    // 0x08000AA8: nop

    TRACE_RETURN()
    return;
    // 0x08000AA8: nop

    // 0x08000AAC: jr          $ra
    // 0x08000AB0: nop

    TRACE_RETURN()
    return;
    // 0x08000AB0: nop

;}
RECOMP_FUNC void func_0800037C_72E5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800037C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000380: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000384: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000388: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0800038C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000390: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000394: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000398: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x0800039C: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x080003A0: beq         $at, $zero, L_08000B18
    if (ctx->r1 == 0) {
        // 0x080003A4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000B18;
    }
    // 0x080003A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080003A8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X15E0) << 16);
    // 0x080003AC: addu        $at, $at, $t6
    gpr jr_addend_080003B4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080003B0: lw          $t6, 0x15E0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(61, 0X15E0));
    // 0x080003B4: jr          $t6
    // 0x080003B8: nop

    switch (jr_addend_080003B4 >> 2) {
        case 0: goto L_080003BC; break;
        case 1: goto L_08000418; break;
        case 2: goto L_080006BC; break;
        case 3: goto L_08000760; break;
        case 4: goto L_080007C4; break;
        case 5: goto L_080007A0; break;
        case 6: goto L_0800090C; break;
        default: switch_error(__func__, 0x080003B4, 0x080015E0);
    }
    // 0x080003B8: nop

L_080003BC:
    // 0x080003BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080003C4: jalr        $t9
    // 0x080003C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x080003CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X15FC) << 16);
    // 0x080003D0: lwc1        $f4, 0x15FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X15FC));
    // 0x080003D4: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x080003D8: lui         $at, 0x43D9
    ctx->r1 = S32(0X43D9 << 16);
    // 0x080003DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003E0: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x080003E4: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x080003E8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080003EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080003F0: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x080003F4: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x080003F8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080003FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08000400: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    // 0x08000404: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08000408: sb          $v1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r3;
    // 0x0800040C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000410: b           L_08000B18
    // 0x08000414: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
        goto L_08000B18;
    // 0x08000414: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_08000418:
    // 0x08000418: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800041C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000420: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000424: bne         $v0, $at, L_0800043C
    if (ctx->r2 != ctx->r1) {
        // 0x08000428: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_0800043C;
    }
    // 0x08000428: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800042C: jalr        $t9
    // 0x08000430: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000430: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    after_1:
    // 0x08000434: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x08000438: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_0800043C:
    // 0x0800043C: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x08000440: beq         $at, $zero, L_08000598
    if (ctx->r1 == 0) {
        // 0x08000444: andi        $v1, $v0, 0x7
        ctx->r3 = ctx->r2 & 0X7;
            goto L_08000598;
    }
    // 0x08000444: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x08000448: beq         $v1, $zero, L_08000464
    if (ctx->r3 == 0) {
        // 0x0800044C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000464;
    }
    // 0x0800044C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000450: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000454: beq         $v1, $at, L_08000500
    if (ctx->r3 == ctx->r1) {
        // 0x08000458: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000500;
    }
    // 0x08000458: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800045C: b           L_08000598
    // 0x08000460: nop

        goto L_08000598;
    // 0x08000460: nop

L_08000464:
    // 0x08000464: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000468: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800046C: jalr        $t9
    // 0x08000470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08000474: beq         $v0, $zero, L_08000598
    if (ctx->r2 == 0) {
        // 0x08000478: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000598;
    }
    // 0x08000478: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800047C: lw          $t3, 0x64($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X64);
    // 0x08000480: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000484: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08000488: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x0800048C: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x08000490: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000494: jalr        $v1
    // 0x08000498: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000498: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x0800049C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x080004A0: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x080004A4: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x080004A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080004AC: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x080004B0: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x080004B4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080004B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080004BC: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x080004C0: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x080004C4: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x080004C8: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x080004CC: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x080004D0: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080004D4: jalr        $v1
    // 0x080004D8: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x080004D8: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    after_4:
    // 0x080004DC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x080004E0: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x080004E4: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x080004E8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080004EC: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x080004F0: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x080004F4: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080004F8: b           L_08000598
    // 0x080004FC: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
        goto L_08000598;
    // 0x080004FC: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
L_08000500:
    // 0x08000500: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000504: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000508: jalr        $t9
    // 0x0800050C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800050C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08000510: beq         $v0, $zero, L_08000598
    if (ctx->r2 == 0) {
        // 0x08000514: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000598;
    }
    // 0x08000514: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000518: lw          $t5, 0x64($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X64);
    // 0x0800051C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000520: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08000524: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x08000528: sw          $t6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r14;
    // 0x0800052C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000530: jalr        $v1
    // 0x08000534: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_6;
    // 0x08000534: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x08000538: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800053C: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000540: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08000544: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000548: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x0800054C: lw          $t1, 0x18($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X18);
    // 0x08000550: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000554: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000558: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x0800055C: swc1        $f8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f8.u32l;
    // 0x08000560: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x08000564: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000568: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x0800056C: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08000570: jalr        $v1
    // 0x08000574: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x08000574: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    after_7:
    // 0x08000578: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x0800057C: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08000580: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x08000584: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000588: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x0800058C: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x08000590: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000594: swc1        $f16, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f16.u32l;
L_08000598:
    // 0x08000598: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x0800059C: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x080005A0: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x080005A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080005A8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080005AC: lhu         $t8, 0x98($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X98);
    // 0x080005B0: beql        $t8, $zero, L_08000698
    if (ctx->r24 == 0) {
        // 0x080005B4: lw          $v0, 0x84($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X84);
            goto L_08000698;
    }
    goto skip_0;
    // 0x080005B4: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    skip_0:
    // 0x080005B8: jalr        $t9
    // 0x080005BC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080005BC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_8:
    // 0x080005C0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080005C4: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x080005C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080005CC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x080005D0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x080005D4: sb          $t1, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r9;
    // 0x080005D8: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080005DC: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x080005E0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x080005E4: sh          $t0, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r8;
    // 0x080005E8: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080005EC: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x080005F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080005F4: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    // 0x080005F8: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x080005FC: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08000600: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08000604: sh          $zero, 0x18($t5)
    MEM_H(0X18, ctx->r13) = 0;
    // 0x08000608: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x0800060C: addiu       $a2, $a2, -0x39E4
    ctx->r6 = ADD32(ctx->r6, -0X39E4);
    // 0x08000610: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x08000614: sh          $t0, 0x94($t6)
    MEM_H(0X94, ctx->r14) = ctx->r8;
    // 0x08000618: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x0800061C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000620: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000624: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x08000628: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x0800062C: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x08000630: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000634: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000638: lwc1        $f0, 0xC($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XC);
    // 0x0800063C: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x08000640: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x08000644: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x08000648: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x0800064C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000650: lwc1        $f0, 0x10($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08000654: swc1        $f0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f0.u32l;
    // 0x08000658: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x0800065C: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    // 0x08000660: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000664: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000668: lhu         $v0, 0x16($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X16);
    // 0x0800066C: sh          $v0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r2;
    // 0x08000670: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x08000674: sh          $v0, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r2;
    // 0x08000678: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800067C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000680: jalr        $t9
    // 0x08000684: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000684: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    after_9:
    // 0x08000688: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x0800068C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08000690: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x08000694: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
L_08000698:
    // 0x08000698: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800069C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080006A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006A4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080006A8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x080006AC: jalr        $t9
    // 0x080006B0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080006B0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_10:
    // 0x080006B4: b           L_08000B1C
    // 0x080006B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_08000B1C;
    // 0x080006B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_080006BC:
    // 0x080006BC: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x080006C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080006C4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x080006C8: bne         $t2, $at, L_0800073C
    if (ctx->r10 != ctx->r1) {
        // 0x080006CC: lui         $v0, 0x8001
        ctx->r2 = S32(0X8001 << 16);
            goto L_0800073C;
    }
    // 0x080006CC: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080006D0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006D4: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080006D8: jalr        $v0
    // 0x080006DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x080006DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_11:
    // 0x080006E0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x080006E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006E8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080006EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006F0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080006F4: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x080006F8: jalr        $t9
    // 0x080006FC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080006FC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_12:
    // 0x08000700: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000704: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000708: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x0800070C: jalr        $t9
    // 0x08000710: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000710: nop

    after_13:
    // 0x08000714: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000718: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x0800071C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000720: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(61, 0X1360) << 16);
    // 0x08000724: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x08000728: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0800072C: addiu       $a2, $a2, 0x1360
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(61, 0X1360));
    // 0x08000730: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000734: jalr        $t9
    // 0x08000738: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000738: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_14:
L_0800073C:
    // 0x0800073C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000740: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000744: jalr        $t9
    // 0x08000748: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000748: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_15:
    // 0x0800074C: bne         $v0, $zero, L_08000B18
    if (ctx->r2 != 0) {
        // 0x08000750: addiu       $t4, $zero, 0x3
        ctx->r12 = ADD32(0, 0X3);
            goto L_08000B18;
    }
    // 0x08000750: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x08000754: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000758: b           L_08000B18
    // 0x0800075C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08000B18;
    // 0x0800075C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08000760:
    // 0x08000760: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000764: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000768: addiu       $a0, $zero, 0x1D4
    ctx->r4 = ADD32(0, 0X1D4);
    // 0x0800076C: bne         $t5, $at, L_08000B18
    if (ctx->r13 != ctx->r1) {
        // 0x08000770: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000B18;
    }
    // 0x08000770: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000774: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000778: jalr        $t9
    // 0x0800077C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800077C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x08000780: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000784: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000788: jalr        $t9
    // 0x0800078C: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800078C: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    after_17:
    // 0x08000790: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000794: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08000798: b           L_08000B18
    // 0x0800079C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08000B18;
    // 0x0800079C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_080007A0:
    // 0x080007A0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007A4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080007A8: jalr        $t9
    // 0x080007AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080007AC: nop

    after_18:
    // 0x080007B0: bne         $v0, $zero, L_08000B18
    if (ctx->r2 != 0) {
        // 0x080007B4: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_08000B18;
    }
    // 0x080007B4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x080007B8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080007BC: b           L_08000B18
    // 0x080007C0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08000B18;
    // 0x080007C0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_080007C4:
    // 0x080007C4: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x080007C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080007CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007D0: bne         $t8, $at, L_0800085C
    if (ctx->r24 != ctx->r1) {
        // 0x080007D4: nop
    
            goto L_0800085C;
    }
    // 0x080007D4: nop

    // 0x080007D8: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x080007DC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080007E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080007E4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080007E8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x080007EC: jalr        $t9
    // 0x080007F0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080007F0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_19:
    // 0x080007F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007F8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080007FC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000800: jalr        $t9
    // 0x08000804: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000804: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_20:
    // 0x08000808: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800080C: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000810: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000814: jalr        $t9
    // 0x08000818: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000818: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    after_21:
    // 0x0800081C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000820: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000824: lui         $a1, 0x44E3
    ctx->r5 = S32(0X44E3 << 16);
    // 0x08000828: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x0800082C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000830: lui         $a2, 0x4338
    ctx->r6 = S32(0X4338 << 16);
    // 0x08000834: jalr        $t9
    // 0x08000838: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000838: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    after_22:
    // 0x0800083C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000840: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000844: lui         $a1, 0x44D7
    ctx->r5 = S32(0X44D7 << 16);
    // 0x08000848: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x0800084C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000850: lui         $a2, 0x4326
    ctx->r6 = S32(0X4326 << 16);
    // 0x08000854: jalr        $t9
    // 0x08000858: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000858: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_23:
L_0800085C:
    // 0x0800085C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000860: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000864: jalr        $t9
    // 0x08000868: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000868: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_24:
    // 0x0800086C: bne         $v0, $zero, L_08000B18
    if (ctx->r2 != 0) {
        // 0x08000870: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000B18;
    }
    // 0x08000870: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000874: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08000878: jalr        $t9
    // 0x0800087C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x0800087C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_25:
    // 0x08000880: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x08000884: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000888: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x0800088C: addiu       $t2, $zero, 0x1400
    ctx->r10 = ADD32(0, 0X1400);
    // 0x08000890: lui         $at, 0x44E4
    ctx->r1 = S32(0X44E4 << 16);
    // 0x08000894: sb          $zero, 0x64($t1)
    MEM_B(0X64, ctx->r9) = 0;
    // 0x08000898: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x0800089C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080008A0: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x080008A4: sh          $t2, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r10;
    // 0x080008A8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x080008AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080008B0: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x080008B4: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x080008B8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080008BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080008C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X1600) << 16);
    // 0x080008C4: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x080008C8: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x080008CC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x080008D0: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x080008D4: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x080008D8: lwc1        $f4, 0x1600($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X1600));
    // 0x080008DC: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x080008E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080008E4: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x080008E8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x080008EC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080008F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080008F4: swc1        $f6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f6.u32l;
    // 0x080008F8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x080008FC: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x08000900: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000904: b           L_08000B18
    // 0x08000908: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_08000B18;
    // 0x08000908: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_0800090C:
    // 0x0800090C: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000910: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000914: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08000918: bne         $t2, $at, L_08000B18
    if (ctx->r10 != ctx->r1) {
        // 0x0800091C: addiu       $a3, $a3, -0x39FC
        ctx->r7 = ADD32(ctx->r7, -0X39FC);
            goto L_08000B18;
    }
    // 0x0800091C: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x08000920: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x08000924: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x08000928: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800092C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000930: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x08000934: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08000938: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800093C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x08000940: jalr        $t9
    // 0x08000944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x08000948: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x0800094C: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x08000950: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000954: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x08000958: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x0800095C: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x08000960: addiu       $t7, $zero, 0x1400
    ctx->r15 = ADD32(0, 0X1400);
    // 0x08000964: lui         $at, 0x44E4
    ctx->r1 = S32(0X44E4 << 16);
    // 0x08000968: sb          $t5, 0xD0($t6)
    MEM_B(0XD0, ctx->r14) = ctx->r13;
    // 0x0800096C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x08000970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000974: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x08000978: sh          $t7, 0x1A($t8)
    MEM_H(0X1A, ctx->r24) = ctx->r15;
    // 0x0800097C: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08000980: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000984: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x08000988: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x0800098C: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08000990: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000994: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X1604) << 16);
    // 0x08000998: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x0800099C: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x080009A0: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x080009A4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x080009A8: lwc1        $f4, 0x1604($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X1604));
    // 0x080009AC: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x080009B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080009B4: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x080009B8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x080009BC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080009C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080009C4: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x080009C8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080009CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009D0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080009D4: jalr        $t9
    // 0x080009D8: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080009D8: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
    after_27:
    // 0x080009DC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080009E0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080009E4: addiu       $t7, $zero, 0x1400
    ctx->r15 = ADD32(0, 0X1400);
    // 0x080009E8: lui         $at, 0x44E4
    ctx->r1 = S32(0X44E4 << 16);
    // 0x080009EC: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x080009F0: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x080009F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080009F8: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x080009FC: sh          $t7, 0x1A($t8)
    MEM_H(0X1A, ctx->r24) = ctx->r15;
    // 0x08000A00: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08000A04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000A08: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x08000A0C: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x08000A10: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08000A14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000A18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X1608) << 16);
    // 0x08000A1C: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x08000A20: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x08000A24: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x08000A28: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08000A2C: lwc1        $f4, 0x1608($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X1608));
    // 0x08000A30: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x08000A34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A38: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x08000A3C: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x08000A40: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000A44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000A48: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x08000A4C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x08000A50: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x08000A54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A58: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000A60: nop

    after_28:
    // 0x08000A64: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000A68: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000A6C: addiu       $t7, $zero, 0x1400
    ctx->r15 = ADD32(0, 0X1400);
    // 0x08000A70: lui         $at, 0x44E4
    ctx->r1 = S32(0X44E4 << 16);
    // 0x08000A74: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x08000A78: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x08000A7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000A80: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x08000A84: sh          $t7, 0x1A($t8)
    MEM_H(0X1A, ctx->r24) = ctx->r15;
    // 0x08000A88: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08000A8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000A90: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x08000A94: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x08000A98: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08000A9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000AA0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X160C) << 16);
    // 0x08000AA4: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x08000AA8: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x08000AAC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000AB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08000AB4: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x08000AB8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08000ABC: lwc1        $f4, 0x160C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X160C));
    // 0x08000AC0: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x08000AC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000AC8: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x08000ACC: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x08000AD0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000AD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000AD8: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x08000ADC: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x08000AE0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000AE4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000AE8: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x08000AEC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000AF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AF4: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000AF8: jalr        $t9
    // 0x08000AFC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000AFC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_29:
    // 0x08000B00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B04: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000B0C: nop

    after_30:
    // 0x08000B10: b           L_08000B44
    // 0x08000B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000B44;
    // 0x08000B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000B18:
    // 0x08000B18: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000B1C:
    // 0x08000B1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B20: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000B24: beql        $a0, $zero, L_08000B38
    if (ctx->r4 == 0) {
        // 0x08000B28: lhu         $t6, 0x8A($s1)
        ctx->r14 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B38;
    }
    goto skip_1;
    // 0x08000B28: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    skip_1:
    // 0x08000B2C: jalr        $t9
    // 0x08000B30: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000B30: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_31:
    // 0x08000B34: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
L_08000B38:
    // 0x08000B38: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000B3C: sh          $t7, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r15;
    // 0x08000B40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000B44:
    // 0x08000B44: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B48: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000B4C: jr          $ra
    // 0x08000B50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08000B50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0800131C_72F57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800131C: jr          $ra
    // 0x08001320: nop

    TRACE_RETURN()
    return;
    // 0x08001320: nop

;}
RECOMP_FUNC void func_0800017C_72E3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800017C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000180: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000184: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000188: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800018C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000190: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000198: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800019C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080001A0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080001A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080001A8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x080001AC: jalr        $t9
    // 0x080001B0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001B0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080001B4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x080001B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x080001BC: bne         $v0, $zero, L_080001DC
    if (ctx->r2 != 0) {
        // 0x080001C0: sw          $v0, 0xD0($v1)
        MEM_W(0XD0, ctx->r3) = ctx->r2;
            goto L_080001DC;
    }
    // 0x080001C0: sw          $v0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r2;
    // 0x080001C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080001CC: jalr        $t9
    // 0x080001D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001D0: nop

    after_1:
    // 0x080001D4: b           L_0800036C
    // 0x080001D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800036C;
    // 0x080001D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001DC:
    // 0x080001DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080001E0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: lw          $s0, 0xD0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001E8: lw          $s0, 0xD0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XD0);
    after_2:
    // 0x080001EC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080001F0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080001F4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080001F8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080001FC: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000200: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000204: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000208: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800020C: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x08000210: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000214: jalr        $t9
    // 0x08000218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x0800021C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000220: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000224: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800022C: jalr        $t9
    // 0x08000230: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000230: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x08000234: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800023C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000240: lw          $v0, 0xEC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XEC);
    // 0x08000244: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000248: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    // 0x0800024C: bne         $v0, $at, L_080002BC
    if (ctx->r2 != ctx->r1) {
        // 0x08000250: sh          $zero, 0x8A($v1)
        MEM_H(0X8A, ctx->r3) = 0;
            goto L_080002BC;
    }
    // 0x08000250: sh          $zero, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = 0;
    // 0x08000254: jalr        $t9
    // 0x08000258: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000258: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_5:
    // 0x0800025C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000260: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000264: lui         $a1, 0x44D5
    ctx->r5 = S32(0X44D5 << 16);
    // 0x08000268: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x0800026C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000270: lui         $a2, 0x439E
    ctx->r6 = S32(0X439E << 16);
    // 0x08000274: jalr        $t9
    // 0x08000278: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000278: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_6:
    // 0x0800027C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000280: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000284: lui         $a1, 0x44D9
    ctx->r5 = S32(0X44D9 << 16);
    // 0x08000288: lui         $a2, 0x43E0
    ctx->r6 = S32(0X43E0 << 16);
    // 0x0800028C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000290: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x08000294: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000298: jalr        $t9
    // 0x0800029C: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800029C: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    after_7:
    // 0x080002A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(61, 0X37C) << 16);
    // 0x080002AC: jalr        $t9
    // 0x080002B0: addiu       $a0, $a0, 0x37C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X37C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080002B0: addiu       $a0, $a0, 0x37C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X37C));
    after_8:
    // 0x080002B4: b           L_0800036C
    // 0x080002B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800036C;
    // 0x080002B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080002BC:
    // 0x080002BC: bne         $v0, $zero, L_08000338
    if (ctx->r2 != 0) {
        // 0x080002C0: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_08000338;
    }
    // 0x080002C0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080002C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002C8: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080002CC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080002D0: jalr        $t9
    // 0x080002D4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080002D4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_9:
    // 0x080002D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002DC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080002E0: lui         $a2, 0x43C2
    ctx->r6 = S32(0X43C2 << 16);
    // 0x080002E4: lui         $a3, 0xC3DA
    ctx->r7 = S32(0XC3DA << 16);
    // 0x080002E8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x080002EC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080002F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080002F4: jalr        $t9
    // 0x080002F8: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080002F8: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    after_10:
    // 0x080002FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000300: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000304: lui         $a3, 0xC3EC
    ctx->r7 = S32(0XC3EC << 16);
    // 0x08000308: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x0800030C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000310: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    // 0x08000314: jalr        $t9
    // 0x08000318: lui         $a2, 0x4406
    ctx->r6 = S32(0X4406 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000318: lui         $a2, 0x4406
    ctx->r6 = S32(0X4406 << 16);
    after_11:
    // 0x0800031C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000320: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000324: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(61, 0XB54) << 16);
    // 0x08000328: jalr        $t9
    // 0x0800032C: addiu       $a0, $a0, 0xB54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0XB54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800032C: addiu       $a0, $a0, 0xB54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0XB54));
    after_12:
    // 0x08000330: b           L_0800036C
    // 0x08000334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800036C;
    // 0x08000334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000338:
    // 0x08000338: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800033C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000340: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000344: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000348: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800034C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08000350: jalr        $t9
    // 0x08000354: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000354: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_13:
    // 0x08000358: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800035C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000360: jalr        $t9
    // 0x08000364: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000364: nop

    after_14:
    // 0x08000368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800036C:
    // 0x0800036C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000374: jr          $ra
    // 0x08000378: nop

    TRACE_RETURN()
    return;
    // 0x08000378: nop

;}
RECOMP_FUNC void func_08000000_72E260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800000C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000010: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000014: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000018: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x0800001C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000020: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000024: sw          $v0, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r2;
    // 0x08000028: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800002C: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000030: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08000034: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x08000038: jalr        $v1
    // 0x0800003C: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x0800003C: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    after_0:
    // 0x08000040: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000044: beq         $v0, $zero, L_08000058
    if (ctx->r2 == 0) {
        // 0x08000048: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_08000058;
    }
    // 0x08000048: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0800004C: lw          $t8, 0xEC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XEC);
    // 0x08000050: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000054: beq         $t8, $at, L_08000074
    if (ctx->r24 == ctx->r1) {
        // 0x08000058: addiu       $a0, $zero, 0xC4
        ctx->r4 = ADD32(0, 0XC4);
            goto L_08000074;
    }
L_08000058:
    // 0x08000058: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    // 0x0800005C: jalr        $v1
    // 0x08000060: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08000060: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x08000064: beq         $v0, $zero, L_0800008C
    if (ctx->r2 == 0) {
        // 0x08000068: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_0800008C;
    }
    // 0x08000068: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x0800006C: lw          $t9, 0xEC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XEC);
    // 0x08000070: bne         $t9, $zero, L_0800008C
    if (ctx->r25 != 0) {
        // 0x08000074: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800008C;
    }
L_08000074:
    // 0x08000074: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000078: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800007C: jalr        $t9
    // 0x08000080: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000080: nop

    after_2:
    // 0x08000084: b           L_08000170
    // 0x08000088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000170;
    // 0x08000088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800008C:
    // 0x0800008C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000090: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x08000094: lw          $t0, 0x23C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X23C);
    // 0x08000098: beql        $t0, $zero, L_080000FC
    if (ctx->r8 == 0) {
        // 0x0800009C: lw          $t2, 0x240($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X240);
            goto L_080000FC;
    }
    goto skip_0;
    // 0x0800009C: lw          $t2, 0x240($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X240);
    skip_0:
    // 0x080000A0: lw          $t1, 0xEC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XEC);
    // 0x080000A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080000A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080000AC: bne         $t1, $at, L_080000F8
    if (ctx->r9 != ctx->r1) {
        // 0x080000B0: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_080000F8;
    }
    // 0x080000B0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080000B4: jalr        $t9
    // 0x080000B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x080000BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C0: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080000C4: jalr        $t9
    // 0x080000C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000C8: nop

    after_4:
    // 0x080000CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x080000D4: jalr        $t9
    // 0x080000D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000D8: nop

    after_5:
    // 0x080000DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(61, 0X17C) << 16);
    // 0x080000E8: jalr        $t9
    // 0x080000EC: addiu       $a0, $a0, 0x17C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X17C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000EC: addiu       $a0, $a0, 0x17C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X17C));
    after_6:
    // 0x080000F0: b           L_08000170
    // 0x080000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000170;
    // 0x080000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000F8:
    // 0x080000F8: lw          $t2, 0x240($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X240);
L_080000FC:
    // 0x080000FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000100: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000104: beq         $t2, $zero, L_08000164
    if (ctx->r10 == 0) {
        // 0x08000108: nop
    
            goto L_08000164;
    }
    // 0x08000108: nop

    // 0x0800010C: lw          $t3, 0xEC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XEC);
    // 0x08000110: bne         $t3, $zero, L_08000164
    if (ctx->r11 != 0) {
        // 0x08000114: nop
    
            goto L_08000164;
    }
    // 0x08000114: nop

    // 0x08000118: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800011C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000120: jalr        $t9
    // 0x08000124: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000124: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x08000128: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800012C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000130: jalr        $t9
    // 0x08000134: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000134: nop

    after_8:
    // 0x08000138: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800013C: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x08000140: jalr        $t9
    // 0x08000144: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000144: nop

    after_9:
    // 0x08000148: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800014C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000150: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(61, 0X17C) << 16);
    // 0x08000154: jalr        $t9
    // 0x08000158: addiu       $a0, $a0, 0x17C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X17C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000158: addiu       $a0, $a0, 0x17C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(61, 0X17C));
    after_10:
    // 0x0800015C: b           L_08000170
    // 0x08000160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000170;
    // 0x08000160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000164:
    // 0x08000164: jalr        $t9
    // 0x08000168: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000168: nop

    after_11:
    // 0x0800016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000170:
    // 0x08000170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000174: jr          $ra
    // 0x08000178: nop

    TRACE_RETURN()
    return;
    // 0x08000178: nop

;}
RECOMP_FUNC void func_08000B54_72EDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000B58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000B5C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000B60: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000B64: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000B68: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000B6C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000B70: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x08000B74: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x08000B78: beq         $at, $zero, L_080012E0
    if (ctx->r1 == 0) {
        // 0x08000B7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_080012E0;
    }
    // 0x08000B7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000B80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X1610) << 16);
    // 0x08000B84: addu        $at, $at, $t6
    gpr jr_addend_08000B8C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000B88: lw          $t6, 0x1610($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(61, 0X1610));
    // 0x08000B8C: jr          $t6
    // 0x08000B90: nop

    switch (jr_addend_08000B8C >> 2) {
        case 0: goto L_08000B94; break;
        case 1: goto L_08000C04; break;
        case 2: goto L_08000EA4; break;
        case 3: goto L_08000F48; break;
        case 4: goto L_08000FAC; break;
        case 5: goto L_08000F88; break;
        default: switch_error(__func__, 0x08000B8C, 0x08001610);
    }
    // 0x08000B90: nop

L_08000B94:
    // 0x08000B94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B98: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000B9C: jalr        $t9
    // 0x08000BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x08000BA4: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x08000BA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000BAC: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000BB0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X1628) << 16);
    // 0x08000BB4: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000BB8: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x08000BBC: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08000BC0: lwc1        $f6, 0x1628($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X1628));
    // 0x08000BC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(61, 0X162C) << 16);
    // 0x08000BC8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BCC: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x08000BD0: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x08000BD4: lwc1        $f8, 0x162C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X162C));
    // 0x08000BD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000BDC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000BE0: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x08000BE4: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08000BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000BEC: jalr        $t9
    // 0x08000BF0: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BF0: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    after_1:
    // 0x08000BF4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000BF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000BFC: b           L_080012E0
    // 0x08000C00: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012E0;
    // 0x08000C00: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000C04:
    // 0x08000C04: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000C08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000C0C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000C10: bne         $v0, $at, L_08000C28
    if (ctx->r2 != ctx->r1) {
        // 0x08000C14: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_08000C28;
    }
    // 0x08000C14: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000C18: jalr        $t9
    // 0x08000C1C: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C1C: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    after_2:
    // 0x08000C20: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x08000C24: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08000C28:
    // 0x08000C28: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x08000C2C: beq         $at, $zero, L_08000D84
    if (ctx->r1 == 0) {
        // 0x08000C30: andi        $v1, $v0, 0x7
        ctx->r3 = ctx->r2 & 0X7;
            goto L_08000D84;
    }
    // 0x08000C30: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x08000C34: beq         $v1, $zero, L_08000C50
    if (ctx->r3 == 0) {
        // 0x08000C38: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000C50;
    }
    // 0x08000C38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000C40: beq         $v1, $at, L_08000CEC
    if (ctx->r3 == ctx->r1) {
        // 0x08000C44: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000CEC;
    }
    // 0x08000C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C48: b           L_08000D84
    // 0x08000C4C: nop

        goto L_08000D84;
    // 0x08000C4C: nop

L_08000C50:
    // 0x08000C50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C54: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08000C60: beq         $v0, $zero, L_08000D84
    if (ctx->r2 == 0) {
        // 0x08000C64: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000D84;
    }
    // 0x08000C64: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000C68: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x08000C6C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000C70: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08000C74: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x08000C78: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
    // 0x08000C7C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000C80: jalr        $v1
    // 0x08000C84: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08000C84: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x08000C88: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000C8C: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08000C90: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x08000C94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000C98: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08000C9C: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000CA0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000CA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000CA8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x08000CAC: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x08000CB0: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x08000CB4: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x08000CB8: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x08000CBC: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08000CC0: jalr        $v1
    // 0x08000CC4: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x08000CC4: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    after_5:
    // 0x08000CC8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000CCC: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08000CD0: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x08000CD4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000CD8: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08000CDC: lw          $t4, 0x18($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X18);
    // 0x08000CE0: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000CE4: b           L_08000D84
    // 0x08000CE8: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
        goto L_08000D84;
    // 0x08000CE8: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
L_08000CEC:
    // 0x08000CEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CF0: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000CF4: jalr        $t9
    // 0x08000CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x08000CFC: beq         $v0, $zero, L_08000D84
    if (ctx->r2 == 0) {
        // 0x08000D00: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08000D84;
    }
    // 0x08000D00: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000D04: lw          $t5, 0x64($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X64);
    // 0x08000D08: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000D0C: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08000D10: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x08000D14: sw          $t6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r14;
    // 0x08000D18: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000D1C: jalr        $v1
    // 0x08000D20: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_7;
    // 0x08000D20: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x08000D24: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000D28: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000D2C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08000D30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000D34: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000D38: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x08000D3C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000D40: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000D44: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x08000D48: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x08000D4C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08000D50: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000D54: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x08000D58: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08000D5C: jalr        $v1
    // 0x08000D60: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x08000D60: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    after_8:
    // 0x08000D64: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000D68: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08000D6C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x08000D70: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000D74: lwc1        $f6, 0x10($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08000D78: lw          $t5, 0x18($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X18);
    // 0x08000D7C: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000D80: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
L_08000D84:
    // 0x08000D84: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08000D88: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x08000D8C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x08000D90: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D94: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000D98: lhu         $t7, 0x98($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X98);
    // 0x08000D9C: beql        $t7, $zero, L_08000E80
    if (ctx->r15 == 0) {
        // 0x08000DA0: lw          $v0, 0x84($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X84);
            goto L_08000E80;
    }
    goto skip_0;
    // 0x08000DA0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    skip_0:
    // 0x08000DA4: jalr        $t9
    // 0x08000DA8: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000DA8: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_9:
    // 0x08000DAC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000DB0: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08000DB4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000DB8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08000DBC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08000DC0: sb          $t8, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r24;
    // 0x08000DC4: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000DC8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08000DCC: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x08000DD0: sh          $zero, 0x16($t1)
    MEM_H(0X16, ctx->r9) = 0;
    // 0x08000DD4: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000DD8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000DDC: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08000DE0: sh          $zero, 0x14($t2)
    MEM_H(0X14, ctx->r10) = 0;
    // 0x08000DE4: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08000DE8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08000DEC: addiu       $a2, $a2, -0x39E4
    ctx->r6 = ADD32(ctx->r6, -0X39E4);
    // 0x08000DF0: sh          $zero, 0x18($t3)
    MEM_H(0X18, ctx->r11) = 0;
    // 0x08000DF4: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x08000DF8: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x08000DFC: sh          $zero, 0x94($t4)
    MEM_H(0X94, ctx->r12) = 0;
    // 0x08000E00: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x08000E04: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08000E08: lwc1        $f0, 0x8($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08000E0C: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x08000E10: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08000E14: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x08000E18: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08000E1C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000E20: lwc1        $f0, 0xC($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0XC);
    // 0x08000E24: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000E28: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000E2C: swc1        $f0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f0.u32l;
    // 0x08000E30: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x08000E34: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x08000E38: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000E3C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000E40: lwc1        $f0, 0x10($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X10);
    // 0x08000E44: swc1        $f0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f0.u32l;
    // 0x08000E48: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x08000E4C: swc1        $f0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f0.u32l;
    // 0x08000E50: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08000E54: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000E58: lhu         $v0, 0x16($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X16);
    // 0x08000E5C: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x08000E60: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x08000E64: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x08000E68: jalr        $t9
    // 0x08000E6C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000E6C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    after_10:
    // 0x08000E70: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000E74: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000E78: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x08000E7C: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
L_08000E80:
    // 0x08000E80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E84: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000E88: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000E8C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000E90: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000E94: jalr        $t9
    // 0x08000E98: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E98: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_11:
    // 0x08000E9C: b           L_080012E4
    // 0x08000EA0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_080012E4;
    // 0x08000EA0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000EA4:
    // 0x08000EA4: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000EA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000EAC: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x08000EB0: bne         $t8, $at, L_08000F24
    if (ctx->r24 != ctx->r1) {
        // 0x08000EB4: lui         $v0, 0x8001
        ctx->r2 = S32(0X8001 << 16);
            goto L_08000F24;
    }
    // 0x08000EB4: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000EB8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000EBC: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000EC0: jalr        $v0
    // 0x08000EC4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x08000EC4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_12:
    // 0x08000EC8: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x08000ECC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000ED0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000ED4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000ED8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000EDC: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000EE4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_13:
    // 0x08000EE8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000EEC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000EF0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000EF4: jalr        $t9
    // 0x08000EF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000EF8: nop

    after_14:
    // 0x08000EFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F00: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x08000F04: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000F08: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(61, 0X1330) << 16);
    // 0x08000F0C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x08000F10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000F14: addiu       $a2, $a2, 0x1330
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(61, 0X1330));
    // 0x08000F18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000F1C: jalr        $t9
    // 0x08000F20: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000F20: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_15:
L_08000F24:
    // 0x08000F24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F28: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000F2C: jalr        $t9
    // 0x08000F30: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000F30: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_16:
    // 0x08000F34: bne         $v0, $zero, L_080012E0
    if (ctx->r2 != 0) {
        // 0x08000F38: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_080012E0;
    }
    // 0x08000F38: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x08000F3C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000F40: b           L_080012E0
    // 0x08000F44: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_080012E0;
    // 0x08000F44: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08000F48:
    // 0x08000F48: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000F4C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000F50: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x08000F54: bne         $t2, $at, L_080012E0
    if (ctx->r10 != ctx->r1) {
        // 0x08000F58: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080012E0;
    }
    // 0x08000F58: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000F5C: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000F60: jalr        $t9
    // 0x08000F64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000F64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x08000F68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F6C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000F70: jalr        $t9
    // 0x08000F74: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000F74: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    after_18:
    // 0x08000F78: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000F7C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x08000F80: b           L_080012E0
    // 0x08000F84: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012E0;
    // 0x08000F84: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000F88:
    // 0x08000F88: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000F8C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000F90: jalr        $t9
    // 0x08000F94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000F94: nop

    after_19:
    // 0x08000F98: bne         $v0, $zero, L_080012E0
    if (ctx->r2 != 0) {
        // 0x08000F9C: addiu       $t4, $zero, 0x4
        ctx->r12 = ADD32(0, 0X4);
            goto L_080012E0;
    }
    // 0x08000F9C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08000FA0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000FA4: b           L_080012E0
    // 0x08000FA8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_080012E0;
    // 0x08000FA8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08000FAC:
    // 0x08000FAC: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000FB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000FB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FB8: bne         $t5, $at, L_0800103C
    if (ctx->r13 != ctx->r1) {
        // 0x08000FBC: nop
    
            goto L_0800103C;
    }
    // 0x08000FBC: nop

    // 0x08000FC0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x08000FC4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000FC8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000FCC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000FD0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000FD4: jalr        $t9
    // 0x08000FD8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000FD8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_20:
    // 0x08000FDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FE0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000FE4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000FE8: jalr        $t9
    // 0x08000FEC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000FEC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_21:
    // 0x08000FF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FF4: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000FF8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000FFC: jalr        $t9
    // 0x08001000: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001000: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    after_22:
    // 0x08001004: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001008: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800100C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001010: lui         $a1, 0x4359
    ctx->r5 = S32(0X4359 << 16);
    // 0x08001014: lui         $a2, 0x4354
    ctx->r6 = S32(0X4354 << 16);
    // 0x08001018: jalr        $t9
    // 0x0800101C: lui         $a3, 0xC3DA
    ctx->r7 = S32(0XC3DA << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800101C: lui         $a3, 0xC3DA
    ctx->r7 = S32(0XC3DA << 16);
    after_23:
    // 0x08001020: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001024: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001028: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800102C: lui         $a1, 0x4355
    ctx->r5 = S32(0X4355 << 16);
    // 0x08001030: lui         $a2, 0x435E
    ctx->r6 = S32(0X435E << 16);
    // 0x08001034: jalr        $t9
    // 0x08001038: lui         $a3, 0xC3F7
    ctx->r7 = S32(0XC3F7 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001038: lui         $a3, 0xC3F7
    ctx->r7 = S32(0XC3F7 << 16);
    after_24:
L_0800103C:
    // 0x0800103C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001040: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001044: jalr        $t9
    // 0x08001048: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001048: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_25:
    // 0x0800104C: bne         $v0, $zero, L_080012E0
    if (ctx->r2 != 0) {
        // 0x08001050: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080012E0;
    }
    // 0x08001050: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001054: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08001058: jalr        $t9
    // 0x0800105C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x0800105C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_26:
    // 0x08001060: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x08001064: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001068: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800106C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001070: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08001074: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x08001078: lw          $t8, -0x39DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39DC);
    // 0x0800107C: addiu       $s1, $zero, 0x1400
    ctx->r17 = ADD32(0, 0X1400);
    // 0x08001080: lui         $at, 0x4359
    ctx->r1 = S32(0X4359 << 16);
    // 0x08001084: sb          $t7, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = ctx->r15;
    // 0x08001088: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0800108C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001090: lui         $at, 0x4354
    ctx->r1 = S32(0X4354 << 16);
    // 0x08001094: sh          $s1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r17;
    // 0x08001098: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x0800109C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080010A0: lui         $at, 0xC3DA
    ctx->r1 = S32(0XC3DA << 16);
    // 0x080010A4: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x080010A8: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x080010AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080010B0: lui         $at, 0x4355
    ctx->r1 = S32(0X4355 << 16);
    // 0x080010B4: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x080010B8: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x080010BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080010C0: lui         $at, 0x435E
    ctx->r1 = S32(0X435E << 16);
    // 0x080010C4: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x080010C8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x080010CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080010D0: lui         $at, 0xC3F7
    ctx->r1 = S32(0XC3F7 << 16);
    // 0x080010D4: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x080010D8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080010DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080010E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080010E4: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x080010E8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x080010EC: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x080010F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010F4: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x080010F8: jalr        $t9
    // 0x080010FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080010FC: nop

    after_27:
    // 0x08001100: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001104: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08001108: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800110C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08001110: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001114: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001118: addiu       $a3, $a3, -0x39FC
    ctx->r7 = ADD32(ctx->r7, -0X39FC);
    // 0x0800111C: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08001120: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001124: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x08001128: jalr        $t9
    // 0x0800112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x08001130: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08001134: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08001138: lui         $at, 0x4359
    ctx->r1 = S32(0X4359 << 16);
    // 0x0800113C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001140: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    // 0x08001144: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x08001148: lui         $at, 0x4354
    ctx->r1 = S32(0X4354 << 16);
    // 0x0800114C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001150: sh          $s1, 0x1A($t8)
    MEM_H(0X1A, ctx->r24) = ctx->r17;
    // 0x08001154: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x08001158: lui         $at, 0xC3DA
    ctx->r1 = S32(0XC3DA << 16);
    // 0x0800115C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001160: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x08001164: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08001168: lui         $at, 0x4355
    ctx->r1 = S32(0X4355 << 16);
    // 0x0800116C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001170: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x08001174: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08001178: lui         $at, 0x435E
    ctx->r1 = S32(0X435E << 16);
    // 0x0800117C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001180: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x08001184: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x08001188: lui         $at, 0xC3F7
    ctx->r1 = S32(0XC3F7 << 16);
    // 0x0800118C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001190: swc1        $f4, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f4.u32l;
    // 0x08001194: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08001198: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800119C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080011A0: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x080011A4: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080011A8: jalr        $t9
    // 0x080011AC: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080011AC: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
    after_29:
    // 0x080011B0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080011B4: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080011B8: lui         $at, 0x4359
    ctx->r1 = S32(0X4359 << 16);
    // 0x080011BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080011C0: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x080011C4: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x080011C8: lui         $at, 0x4354
    ctx->r1 = S32(0X4354 << 16);
    // 0x080011CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080011D0: sh          $s1, 0x1A($t7)
    MEM_H(0X1A, ctx->r15) = ctx->r17;
    // 0x080011D4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x080011D8: lui         $at, 0xC3DA
    ctx->r1 = S32(0XC3DA << 16);
    // 0x080011DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080011E0: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x080011E4: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x080011E8: lui         $at, 0x4355
    ctx->r1 = S32(0X4355 << 16);
    // 0x080011EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080011F0: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x080011F4: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x080011F8: lui         $at, 0x435E
    ctx->r1 = S32(0X435E << 16);
    // 0x080011FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001200: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x08001204: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08001208: lui         $at, 0xC3F7
    ctx->r1 = S32(0XC3F7 << 16);
    // 0x0800120C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001210: swc1        $f4, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f4.u32l;
    // 0x08001214: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x08001218: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800121C: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x08001220: swc1        $f6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f6.u32l;
    // 0x08001224: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x08001228: jalr        $t9
    // 0x0800122C: swc1        $f16, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x0800122C: swc1        $f16, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f16.u32l;
    after_30:
    // 0x08001230: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08001234: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08001238: lui         $at, 0x4359
    ctx->r1 = S32(0X4359 << 16);
    // 0x0800123C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001240: sb          $zero, 0x64($t5)
    MEM_B(0X64, ctx->r13) = 0;
    // 0x08001244: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x08001248: lui         $at, 0x4354
    ctx->r1 = S32(0X4354 << 16);
    // 0x0800124C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001250: sh          $s1, 0x1A($t6)
    MEM_H(0X1A, ctx->r14) = ctx->r17;
    // 0x08001254: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x08001258: lui         $at, 0xC3DA
    ctx->r1 = S32(0XC3DA << 16);
    // 0x0800125C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001260: swc1        $f8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f8.u32l;
    // 0x08001264: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x08001268: lui         $at, 0x4355
    ctx->r1 = S32(0X4355 << 16);
    // 0x0800126C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001270: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x08001274: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x08001278: lui         $at, 0x435E
    ctx->r1 = S32(0X435E << 16);
    // 0x0800127C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001280: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x08001284: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08001288: lui         $at, 0xC3F7
    ctx->r1 = S32(0XC3F7 << 16);
    // 0x0800128C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001290: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x08001294: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08001298: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800129C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080012A0: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x080012A4: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x080012A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012AC: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x080012B0: swc1        $f16, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f16.u32l;
    // 0x080012B4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080012B8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080012BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080012C0: jalr        $t9
    // 0x080012C4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080012C4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_31:
    // 0x080012C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012CC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080012D0: jalr        $t9
    // 0x080012D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080012D4: nop

    after_32:
    // 0x080012D8: b           L_0800130C
    // 0x080012DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800130C;
    // 0x080012DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080012E0:
    // 0x080012E0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_080012E4:
    // 0x080012E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012E8: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080012EC: beql        $a0, $zero, L_08001300
    if (ctx->r4 == 0) {
        // 0x080012F0: lhu         $t4, 0x8A($s1)
        ctx->r12 = MEM_HU(ctx->r17, 0X8A);
            goto L_08001300;
    }
    goto skip_1;
    // 0x080012F0: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
    skip_1:
    // 0x080012F4: jalr        $t9
    // 0x080012F8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080012F8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_33:
    // 0x080012FC: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
L_08001300:
    // 0x08001300: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08001304: sh          $t5, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r13;
    // 0x08001308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800130C:
    // 0x0800130C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001310: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001314: jr          $ra
    // 0x08001318: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08001318: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08001694_730F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001694: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001698: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800169C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080016A0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080016A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(62, 0X1468) << 16);
    // 0x080016A8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080016AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080016B0: addiu       $a1, $a1, 0x1468
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(62, 0X1468));
    // 0x080016B4: jalr        $t9
    // 0x080016B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x080016BC: bne         $v0, $zero, L_080016CC
    if (ctx->r2 != 0) {
        // 0x080016C0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080016CC;
    }
    // 0x080016C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080016C4: b           L_080017F0
    // 0x080016C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080017F0;
    // 0x080016C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080016CC:
    // 0x080016CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016D0: addiu       $t6, $zero, 0x47
    ctx->r14 = ADD32(0, 0X47);
    // 0x080016D4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080016D8: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x080016DC: jalr        $t9
    // 0x080016E0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016E0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_1:
    // 0x080016E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016E8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080016EC: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x080016F0: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x080016F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080016F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080016FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08001700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001704: jalr        $t9
    // 0x08001708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800170C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001710: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08001714: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001718: sw          $t7, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r15;
    // 0x0800171C: addiu       $t8, $zero, 0x30F
    ctx->r24 = ADD32(0, 0X30F);
    // 0x08001720: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001724: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08001728: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x0800172C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001734: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001738: jalr        $t9
    // 0x0800173C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800173C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001740: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001744: addiu       $t0, $zero, 0x221
    ctx->r8 = ADD32(0, 0X221);
    // 0x08001748: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800174C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08001750: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001754: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001758: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800175C: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08001760: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001764: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x08001768: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x0800176C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001770: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    // 0x08001774: jalr        $t9
    // 0x08001778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x0800177C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001780: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001784: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001788: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800178C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001790: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001794: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08001798: jalr        $t9
    // 0x0800179C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800179C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
    // 0x080017A0: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x080017A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080017A8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x080017AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080017B0: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080017B4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x080017B8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x080017BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080017C0: addiu       $t4, $zero, 0x160
    ctx->r12 = ADD32(0, 0X160);
    // 0x080017C4: sh          $t4, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r12;
    // 0x080017C8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x080017CC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080017D0: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x080017D4: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x080017D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080017DC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x080017E0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x080017E4: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x080017E8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x080017EC: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
L_080017F0:
    // 0x080017F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080017F4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080017F8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080017FC: jr          $ra
    // 0x08001800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080013B4_730C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x080013B8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x080013BC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x080013C0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080013C4: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x080013C8: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x080013CC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x080013D0: bgezl       $a2, L_080013E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x080013D4: slti        $at, $a2, 0x201
        ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
            goto L_080013E0;
    }
    goto skip_0;
    // 0x080013D4: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
    skip_0:
    // 0x080013D8: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x080013DC: slti        $at, $a2, 0x201
    ctx->r1 = SIGNED(ctx->r6) < 0X201 ? 1 : 0;
L_080013E0:
    // 0x080013E0: bne         $at, $zero, L_08001408
    if (ctx->r1 != 0) {
        // 0x080013E4: subu        $t9, $t8, $a2
        ctx->r25 = SUB32(ctx->r24, ctx->r6);
            goto L_08001408;
    }
    // 0x080013E4: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x080013E8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x080013EC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x080013F0: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x080013F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080013F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080013FC: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08001400: b           L_08001428
    // 0x08001404: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
        goto L_08001428;
    // 0x08001404: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_08001408:
    // 0x08001408: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0800140C: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x08001410: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x08001414: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001418: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800141C: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x08001420: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08001424: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_08001428:
    // 0x08001428: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    // 0x0800142C: lhu         $t0, 0x16($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X16);
    // 0x08001430: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001434: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x08001438: bgez        $t0, L_0800144C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800143C: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_0800144C;
    }
    // 0x0800143C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001444: nop

    // 0x08001448: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_0800144C:
    // 0x0800144C: jr          $ra
    // 0x08001450: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08001450: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000DD8_730668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DD8: jr          $ra
    // 0x08000DDC: nop

    TRACE_RETURN()
    return;
    // 0x08000DDC: nop

;}
RECOMP_FUNC void func_0800134C_730BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800134C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08001350: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001354: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001358: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x0800135C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001360: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x08001364: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x08001368: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x0800136C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08001370: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x08001374: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x08001378: jr          $ra
    // 0x0800137C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x0800137C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_08000090_72F920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000090: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000094: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000098: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800009C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080000A0: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080000A4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080000A8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080000AC: sltiu       $at, $t6, 0x1D
    ctx->r1 = ctx->r14 < 0X1D ? 1 : 0;
    // 0x080000B0: beq         $at, $zero, L_08000B78
    if (ctx->r1 == 0) {
        // 0x080000B4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000B78;
    }
    // 0x080000B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080000B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(62, 0X1994) << 16);
    // 0x080000BC: addu        $at, $at, $t6
    gpr jr_addend_080000C4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080000C0: lw          $t6, 0x1994($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(62, 0X1994));
    // 0x080000C4: jr          $t6
    // 0x080000C8: nop

    switch (jr_addend_080000C4 >> 2) {
        case 0: goto L_080000CC; break;
        case 1: goto L_0800022C; break;
        case 2: goto L_08000260; break;
        case 3: goto L_080002C8; break;
        case 4: goto L_08000328; break;
        case 5: goto L_080003B4; break;
        case 6: goto L_080003E4; break;
        case 7: goto L_08000474; break;
        case 8: goto L_08000498; break;
        case 9: goto L_08000544; break;
        case 10: goto L_08000580; break;
        case 11: goto L_08000620; break;
        case 12: goto L_0800069C; break;
        case 13: goto L_08000740; break;
        case 14: goto L_08000778; break;
        case 15: goto L_080007B0; break;
        case 16: goto L_08000818; break;
        case 17: goto L_08000898; break;
        case 18: goto L_080008D4; break;
        case 19: goto L_08000910; break;
        case 20: goto L_0800094C; break;
        case 21: goto L_0800096C; break;
        case 22: goto L_080009A8; break;
        case 23: goto L_080009E0; break;
        case 24: goto L_08000A10; break;
        case 25: goto L_08000A74; break;
        case 26: goto L_08000A94; break;
        case 27: goto L_08000B78; break;
        case 28: goto L_08000B04; break;
        default: switch_error(__func__, 0x080000C4, 0x08001994);
    }
    // 0x080000C8: nop

L_080000CC:
    // 0x080000CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080000D4: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x080000D8: jalr        $t9
    // 0x080000DC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000DC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x080000E0: beq         $v0, $zero, L_08000B78
    if (ctx->r2 == 0) {
        // 0x080000E4: lw          $a2, 0x48($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X48);
            goto L_08000B78;
    }
    // 0x080000E4: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x080000E8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000EC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080000F0: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000F8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_1:
    // 0x080000FC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000100: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000104: jalr        $t9
    // 0x08000108: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000108: nop

    after_2:
    // 0x0800010C: jal         0x08000CBC
    // 0x08000110: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_08000CBC_73054C(rdram, ctx);
        goto after_3;
    // 0x08000110: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x08000114: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000118: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x0800011C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000120: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000124: jalr        $t9
    // 0x08000128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x0800012C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08000130: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000134: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08000138: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800013C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000140: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08000144: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000148: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x0800014C: and         $a1, $t8, $at
    ctx->r5 = ctx->r24 & ctx->r1;
    // 0x08000150: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x08000154: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800015C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x08000160: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000164: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x08000168: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x0800016C: jalr        $t9
    // 0x08000170: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000170: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x08000174: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000178: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x0800017C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000180: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000184: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x08000188: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0800018C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000190: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000194: jalr        $v0
    // 0x08000198: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08000198: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_6:
    // 0x0800019C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001A0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080001A4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080001A8: jalr        $t9
    // 0x080001AC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001AC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_7:
    // 0x080001B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080001B4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080001B8: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080001BC: jalr        $t9
    // 0x080001C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001C0: nop

    after_8:
    // 0x080001C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080001CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080001D0: lui         $a1, 0xC3EB
    ctx->r5 = S32(0XC3EB << 16);
    // 0x080001D4: lui         $a2, 0x43B9
    ctx->r6 = S32(0X43B9 << 16);
    // 0x080001D8: jalr        $t9
    // 0x080001DC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001DC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_9:
    // 0x080001E0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080001E4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080001E8: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080001F0: nop

    after_10:
    // 0x080001F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080001F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001FC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000200: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000204: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000208: lui         $a1, 0xC3AF
    ctx->r5 = S32(0XC3AF << 16);
    // 0x0800020C: jalr        $t9
    // 0x08000210: lui         $a2, 0x43A5
    ctx->r6 = S32(0X43A5 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000210: lui         $a2, 0x43A5
    ctx->r6 = S32(0X43A5 << 16);
    after_11:
    // 0x08000214: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000218: addiu       $t3, $zero, 0x69
    ctx->r11 = ADD32(0, 0X69);
    // 0x0800021C: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x08000220: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000224: b           L_08000B78
    // 0x08000228: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000B78;
    // 0x08000228: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_0800022C:
    // 0x0800022C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000230: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000234: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000238: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08000B78;
    }
    // 0x08000238: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x0800023C: jal         0x08000F68
    // 0x08000240: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_08000F68_7307F8(rdram, ctx);
        goto after_12;
    // 0x08000240: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_12:
    // 0x08000244: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000248: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x0800024C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08000250: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000254: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x08000258: b           L_08000B78
    // 0x0800025C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000B78;
    // 0x0800025C: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_08000260:
    // 0x08000260: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000264: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08000268: bnel        $v0, $at, L_08000280
    if (ctx->r2 != ctx->r1) {
        // 0x0800026C: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_08000280;
    }
    goto skip_0;
    // 0x0800026C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x08000270: jal         0x0800105C
    // 0x08000274: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_0800105C_7308EC(rdram, ctx);
        goto after_13;
    // 0x08000274: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_13:
    // 0x08000278: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0800027C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
L_08000280:
    // 0x08000280: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000284: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000B78;
    }
    // 0x08000284: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000288: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800028C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000290: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000294: jalr        $t9
    // 0x08000298: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000298: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_14:
    // 0x0800029C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002A0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080002A4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080002A8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x080002AC: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x080002B0: jalr        $t9
    // 0x080002B4: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080002B4: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    after_15:
    // 0x080002B8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080002BC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080002C0: b           L_08000B78
    // 0x080002C4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000B78;
    // 0x080002C4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080002C8:
    // 0x080002C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002CC: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080002D0: jalr        $t9
    // 0x080002D4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080002D4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_16:
    // 0x080002D8: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x080002DC: lui         $a1, 0x42B4
        ctx->r5 = S32(0X42B4 << 16);
            goto L_08000B78;
    }
    // 0x080002DC: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080002E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002E4: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080002E8: jalr        $t9
    // 0x080002EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080002EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_17:
    // 0x080002F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002F4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080002F8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080002FC: lui         $a1, 0xC3EB
    ctx->r5 = S32(0XC3EB << 16);
    // 0x08000300: lui         $a2, 0x43B9
    ctx->r6 = S32(0X43B9 << 16);
    // 0x08000304: jalr        $t9
    // 0x08000308: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000308: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_18:
    // 0x0800030C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000310: jal         0x08000D7C
    // 0x08000314: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_08000D7C_73060C(rdram, ctx);
        goto after_19;
    // 0x08000314: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_19:
    // 0x08000318: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x0800031C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000320: b           L_08000B78
    // 0x08000324: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000B78;
    // 0x08000324: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000328:
    // 0x08000328: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800032C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000330: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000334: jalr        $t9
    // 0x08000338: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000338: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_20:
    // 0x0800033C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000340: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000344: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000348: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800034C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000350: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000354: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000358: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800035C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000360: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000364: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000368: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800036C: jalr        $t9
    // 0x08000370: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000370: nop

    after_21:
    // 0x08000374: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(62, 0XDC0) << 16);
    // 0x08000378: addiu       $t9, $t9, 0xDC0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(62, 0XDC0));
    // 0x0800037C: jalr        $t9
    // 0x08000380: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000380: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_22:
    // 0x08000384: bnel        $v0, $zero, L_08000B7C
    if (ctx->r2 != 0) {
        // 0x08000388: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_08000B7C;
    }
    goto skip_1;
    // 0x08000388: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x0800038C: jal         0x08001084
    // 0x08000390: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08001084_730914(rdram, ctx);
        goto after_23;
    // 0x08000390: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_23:
    // 0x08000394: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000398: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800039C: jalr        $t9
    // 0x080003A0: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080003A0: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
    after_24:
    // 0x080003A4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080003A8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080003AC: b           L_08000B78
    // 0x080003B0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000B78;
    // 0x080003B0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080003B4:
    // 0x080003B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003B8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080003BC: jalr        $t9
    // 0x080003C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080003C0: nop

    after_25:
    // 0x080003C4: bnel        $v0, $zero, L_08000B7C
    if (ctx->r2 != 0) {
        // 0x080003C8: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_08000B7C;
    }
    goto skip_2;
    // 0x080003C8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_2:
    // 0x080003CC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x080003D0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x080003D4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x080003D8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080003DC: b           L_08000B78
    // 0x080003E0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000B78;
    // 0x080003E0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_080003E4:
    // 0x080003E4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080003E8: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x080003EC: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x080003F0: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_08000B78;
    }
    // 0x080003F0: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x080003F4: jal         0x08001234
    // 0x080003F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_08001234_730AC4(rdram, ctx);
        goto after_26;
    // 0x080003F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_26:
    // 0x080003FC: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x08000400: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000404: addiu       $v1, $v1, -0x7468
    ctx->r3 = ADD32(ctx->r3, -0X7468);
    // 0x08000408: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0800040C: jalr        $v1
    // 0x08000410: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_27;
    // 0x08000410: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_27:
    // 0x08000414: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000418: lui         $a1, 0xC392
    ctx->r5 = S32(0XC392 << 16);
    // 0x0800041C: lui         $a2, 0x43B9
    ctx->r6 = S32(0X43B9 << 16);
    // 0x08000420: jal         0x08001328
    // 0x08000424: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    func_08001328_730BB8(rdram, ctx);
        goto after_28;
    // 0x08000424: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    after_28:
    // 0x08000428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800042C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000430: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000434: lui         $a1, 0xC392
    ctx->r5 = S32(0XC392 << 16);
    // 0x08000438: lui         $a2, 0x439B
    ctx->r6 = S32(0X439B << 16);
    // 0x0800043C: lui         $a3, 0x4180
    ctx->r7 = S32(0X4180 << 16);
    // 0x08000440: jal         0x0800134C
    // 0x08000444: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_0800134C_730BDC(rdram, ctx);
        goto after_29;
    // 0x08000444: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_29:
    // 0x08000448: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800044C: jal         0x0800139C
    // 0x08000450: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    func_0800139C_730C2C(rdram, ctx);
        goto after_30;
    // 0x08000450: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_30:
    // 0x08000454: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000458: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x0800045C: jalr        $t9
    // 0x08000460: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000460: nop

    after_31:
    // 0x08000464: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000468: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800046C: b           L_08000B78
    // 0x08000470: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000B78;
    // 0x08000470: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000474:
    // 0x08000474: jal         0x08001380
    // 0x08000478: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_08001380_730C10(rdram, ctx);
        goto after_32;
    // 0x08000478: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_32:
    // 0x0800047C: bnel        $v0, $zero, L_08000B7C
    if (ctx->r2 != 0) {
        // 0x08000480: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_08000B7C;
    }
    goto skip_3;
    // 0x08000480: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_3:
    // 0x08000484: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000488: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800048C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000490: b           L_08000B78
    // 0x08000494: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08000B78;
    // 0x08000494: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_08000498:
    // 0x08000498: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x0800049C: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x080004A0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080004A4: jal         0x0800139C
    // 0x080004A8: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    func_0800139C_730C2C(rdram, ctx);
        goto after_33;
    // 0x080004A8: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    after_33:
    // 0x080004AC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080004B0: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x080004B4: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x080004B8: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x080004BC: beql        $at, $zero, L_0800050C
    if (ctx->r1 == 0) {
        // 0x080004C0: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_0800050C;
    }
    goto skip_4;
    // 0x080004C0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    skip_4:
    // 0x080004C4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080004C8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x080004CC: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x080004D0: slti        $at, $a1, 0x2E9
    ctx->r1 = SIGNED(ctx->r5) < 0X2E9 ? 1 : 0;
    // 0x080004D4: beq         $at, $zero, L_08000508
    if (ctx->r1 == 0) {
        // 0x080004D8: slti        $at, $a1, 0x2D5
        ctx->r1 = SIGNED(ctx->r5) < 0X2D5 ? 1 : 0;
            goto L_08000508;
    }
    // 0x080004D8: slti        $at, $a1, 0x2D5
    ctx->r1 = SIGNED(ctx->r5) < 0X2D5 ? 1 : 0;
    // 0x080004DC: bne         $at, $zero, L_08000508
    if (ctx->r1 != 0) {
        // 0x080004E0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000508;
    }
    // 0x080004E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004E4: jal         0x0800139C
    // 0x080004E8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_0800139C_730C2C(rdram, ctx);
        goto after_34;
    // 0x080004E8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_34:
    // 0x080004EC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x080004F0: addiu       $t2, $zero, 0x2E8
    ctx->r10 = ADD32(0, 0X2E8);
    // 0x080004F4: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x080004F8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x080004FC: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x08000500: b           L_08000B78
    // 0x08000504: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000B78;
    // 0x08000504: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08000508:
    // 0x08000508: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
L_0800050C:
    // 0x0800050C: bne         $v0, $at, L_08000538
    if (ctx->r2 != ctx->r1) {
        // 0x08000510: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_08000538;
    }
    // 0x08000510: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000514: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000518: sb          $t4, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = ctx->r12;
    // 0x0800051C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000520: jal         0x08000DD0
    // 0x08000524: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_08000DD0_730660(rdram, ctx);
        goto after_35;
    // 0x08000524: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_35:
    // 0x08000528: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800052C: jal         0x08000DE0
    // 0x08000530: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    func_08000DE0_730670(rdram, ctx);
        goto after_36;
    // 0x08000530: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    after_36:
    // 0x08000534: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_08000538:
    // 0x08000538: addiu       $t5, $v0, 0x2
    ctx->r13 = ADD32(ctx->r2, 0X2);
    // 0x0800053C: b           L_08000B78
    // 0x08000540: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
        goto L_08000B78;
    // 0x08000540: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
L_08000544:
    // 0x08000544: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000548: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800054C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000550: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000554: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000558: jalr        $t9
    // 0x0800055C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x0800055C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_37:
    // 0x08000560: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000564: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000568: jalr        $t9
    // 0x0800056C: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x0800056C: addiu       $a0, $zero, 0xCE
    ctx->r4 = ADD32(0, 0XCE);
    after_38:
    // 0x08000570: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000574: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x08000578: b           L_08000B78
    // 0x0800057C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08000B78;
    // 0x0800057C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08000580:
    // 0x08000580: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000584: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000588: jalr        $t9
    // 0x0800058C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x0800058C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_39:
    // 0x08000590: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000594: lw          $a2, 0x48($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X48);
            goto L_08000B78;
    }
    // 0x08000594: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x08000598: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x0800059C: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x080005A0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x080005A4: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x080005A8: lui         $t2, 0xD
    ctx->r10 = S32(0XD << 16);
    // 0x080005AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x080005B4: lw          $t2, -0x718($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X718);
    // 0x080005B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080005BC: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x080005C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080005C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080005C8: jalr        $t9
    // 0x080005CC: sh          $t0, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x080005CC: sh          $t0, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r8;
    after_40:
    // 0x080005D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080005D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005D8: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080005DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080005E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080005E4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x080005E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080005EC: jalr        $t9
    // 0x080005F0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080005F0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_41:
    // 0x080005F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005F8: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x080005FC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000608: jalr        $t9
    // 0x0800060C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x0800060C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_42:
    // 0x08000610: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000614: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000618: b           L_08000B78
    // 0x0800061C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000B78;
    // 0x0800061C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000620:
    // 0x08000620: lhu         $a0, 0x6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6);
    // 0x08000624: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000628: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x0800062C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000630: jalr        $t9
    // 0x08000634: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08000634: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    after_43:
    // 0x08000638: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x0800063C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x08000640: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000644: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000648: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800064C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000650: bgez        $t5, L_08000660
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08000654: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_08000660;
    }
    // 0x08000654: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x08000658: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x0800065C: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08000660:
    // 0x08000660: subu        $a2, $t8, $t6
    ctx->r6 = SUB32(ctx->r24, ctx->r14);
    // 0x08000664: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x08000668: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x0800066C: jalr        $t9
    // 0x08000670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08000670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_44:
    // 0x08000674: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x08000678: addiu       $t0, $t1, -0x5
    ctx->r8 = ADD32(ctx->r9, -0X5);
    // 0x0800067C: slti        $at, $t0, 0x1F
    ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
    // 0x08000680: beq         $at, $zero, L_08000B78
    if (ctx->r1 == 0) {
        // 0x08000684: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_08000B78;
    }
    // 0x08000684: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08000688: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x0800068C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08000690: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000694: b           L_08000B78
    // 0x08000698: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000B78;
    // 0x08000698: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_0800069C:
    // 0x0800069C: jal         0x08001694
    // 0x080006A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_08001694_730F24(rdram, ctx);
        goto after_45;
    // 0x080006A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_45:
    // 0x080006A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080006A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080006AC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080006B0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080006B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080006B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080006BC: jalr        $t9
    // 0x080006C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x080006C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_46:
    // 0x080006C4: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x080006C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006CC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080006D0: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x080006D4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080006D8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x080006DC: jalr        $t9
    // 0x080006E0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x080006E0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_47:
    // 0x080006E4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x080006E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080006EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080006F0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080006F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006F8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080006FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000700: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000704: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000708: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800070C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08000710: jalr        $t9
    // 0x08000714: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000714: nop

    after_48:
    // 0x08000718: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800071C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000720: jalr        $t9
    // 0x08000724: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000724: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_49:
    // 0x08000728: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x0800072C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08000730: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x08000734: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000738: b           L_08000B78
    // 0x0800073C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000B78;
    // 0x0800073C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000740:
    // 0x08000740: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000744: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000748: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800074C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08000750: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000754: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000B78;
    }
    // 0x08000754: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000758: jalr        $t9
    // 0x0800075C: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x0800075C: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    after_50:
    // 0x08000760: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08000764: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08000768: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x0800076C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000770: b           L_08000B78
    // 0x08000774: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000B78;
    // 0x08000774: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08000778:
    // 0x08000778: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x0800077C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000780: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x08000784: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000788: sw          $t4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r12;
            goto L_08000B78;
    }
    // 0x08000788: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x0800078C: jal         0x080013A8
    // 0x08000790: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_080013A8_730C38(rdram, ctx);
        goto after_51;
    // 0x08000790: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_51:
    // 0x08000794: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000798: jal         0x080013B4
    // 0x0800079C: addiu       $a1, $zero, 0x168
    ctx->r5 = ADD32(0, 0X168);
    func_080013B4_730C44(rdram, ctx);
        goto after_52;
    // 0x0800079C: addiu       $a1, $zero, 0x168
    ctx->r5 = ADD32(0, 0X168);
    after_52:
    // 0x080007A0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x080007A4: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x080007A8: b           L_08000B78
    // 0x080007AC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08000B78;
    // 0x080007AC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_080007B0:
    // 0x080007B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080007B8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080007BC: jalr        $t9
    // 0x080007C0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x080007C0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_53:
    // 0x080007C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007C8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080007CC: lui         $a1, 0xC39E
    ctx->r5 = S32(0XC39E << 16);
    // 0x080007D0: lui         $a2, 0x43A8
    ctx->r6 = S32(0X43A8 << 16);
    // 0x080007D4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080007D8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080007DC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080007E0: jalr        $t9
    // 0x080007E4: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x080007E4: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_54:
    // 0x080007E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007EC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080007F0: lui         $a2, 0x43B6
    ctx->r6 = S32(0X43B6 << 16);
    // 0x080007F4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080007F8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080007FC: lui         $a1, 0xC37B
    ctx->r5 = S32(0XC37B << 16);
    // 0x08000800: jalr        $t9
    // 0x08000804: lui         $a3, 0xC1A8
    ctx->r7 = S32(0XC1A8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000804: lui         $a3, 0xC1A8
    ctx->r7 = S32(0XC1A8 << 16);
    after_55:
    // 0x08000808: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x0800080C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000810: b           L_08000B78
    // 0x08000814: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000B78;
    // 0x08000814: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000818:
    // 0x08000818: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800081C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000820: jalr        $t9
    // 0x08000824: addiu       $a0, $zero, 0x73
    ctx->r4 = ADD32(0, 0X73);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08000824: addiu       $a0, $zero, 0x73
    ctx->r4 = ADD32(0, 0X73);
    after_56:
    // 0x08000828: beq         $v0, $zero, L_08000B78
    if (ctx->r2 == 0) {
        // 0x0800082C: lui         $a1, 0xC3D7
        ctx->r5 = S32(0XC3D7 << 16);
            goto L_08000B78;
    }
    // 0x0800082C: lui         $a1, 0xC3D7
    ctx->r5 = S32(0XC3D7 << 16);
    // 0x08000830: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x08000834: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000838: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800083C: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x08000840: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000844: lui         $a2, 0x43A0
    ctx->r6 = S32(0X43A0 << 16);
    // 0x08000848: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x0800084C: jalr        $t9
    // 0x08000850: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08000850: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_57:
    // 0x08000854: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x08000858: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x0800085C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000860: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000864: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000868: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800086C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08000870: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000874: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000878: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800087C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08000880: jalr        $t9
    // 0x08000884: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08000884: nop

    after_58:
    // 0x08000888: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0800088C: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x08000890: b           L_08000B78
    // 0x08000894: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08000B78;
    // 0x08000894: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08000898:
    // 0x08000898: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800089C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080008A0: jalr        $t9
    // 0x080008A4: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x080008A4: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    after_59:
    // 0x080008A8: beq         $v0, $zero, L_08000B78
    if (ctx->r2 == 0) {
        // 0x080008AC: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_08000B78;
    }
    // 0x080008AC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080008B0: jal         0x080013A8
    // 0x080008B4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_080013A8_730C38(rdram, ctx);
        goto after_60;
    // 0x080008B4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_60:
    // 0x080008B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008BC: jal         0x080013B4
    // 0x080008C0: addiu       $a1, $zero, 0x2E8
    ctx->r5 = ADD32(0, 0X2E8);
    func_080013B4_730C44(rdram, ctx);
        goto after_61;
    // 0x080008C0: addiu       $a1, $zero, 0x2E8
    ctx->r5 = ADD32(0, 0X2E8);
    after_61:
    // 0x080008C4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x080008C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080008CC: b           L_08000B78
    // 0x080008D0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000B78;
    // 0x080008D0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_080008D4:
    // 0x080008D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008D8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080008DC: jalr        $t9
    // 0x080008E0: addiu       $a0, $zero, 0x71
    ctx->r4 = ADD32(0, 0X71);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x080008E0: addiu       $a0, $zero, 0x71
    ctx->r4 = ADD32(0, 0X71);
    after_62:
    // 0x080008E4: beq         $v0, $zero, L_08000B78
    if (ctx->r2 == 0) {
        // 0x080008E8: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_08000B78;
    }
    // 0x080008E8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080008EC: jal         0x080013A8
    // 0x080008F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_080013A8_730C38(rdram, ctx);
        goto after_63;
    // 0x080008F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_63:
    // 0x080008F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008F8: jal         0x080013B4
    // 0x080008FC: addiu       $a1, $zero, 0x168
    ctx->r5 = ADD32(0, 0X168);
    func_080013B4_730C44(rdram, ctx);
        goto after_64;
    // 0x080008FC: addiu       $a1, $zero, 0x168
    ctx->r5 = ADD32(0, 0X168);
    after_64:
    // 0x08000900: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000904: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x08000908: b           L_08000B78
    // 0x0800090C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08000B78;
    // 0x0800090C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08000910:
    // 0x08000910: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000914: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000918: jalr        $t9
    // 0x0800091C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x0800091C: nop

    after_65:
    // 0x08000920: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000924: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_08000B78;
    }
    // 0x08000924: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000928: jal         0x08001858
    // 0x0800092C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_08001858_7310E8(rdram, ctx);
        goto after_66;
    // 0x0800092C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_66:
    // 0x08000930: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000934: jal         0x08001860
    // 0x08000938: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_08001860_7310F0(rdram, ctx);
        goto after_67;
    // 0x08000938: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_67:
    // 0x0800093C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000940: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000944: b           L_08000B78
    // 0x08000948: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000B78;
    // 0x08000948: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_0800094C:
    // 0x0800094C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000950: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000954: jalr        $t9
    // 0x08000958: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08000958: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    after_68:
    // 0x0800095C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08000960: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x08000964: b           L_08000B78
    // 0x08000968: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000B78;
    // 0x08000968: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_0800096C:
    // 0x0800096C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000970: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000974: jalr        $t9
    // 0x08000978: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08000978: addiu       $a0, $zero, 0x72
    ctx->r4 = ADD32(0, 0X72);
    after_69:
    // 0x0800097C: beq         $v0, $zero, L_08000B78
    if (ctx->r2 == 0) {
        // 0x08000980: addiu       $a1, $zero, 0x1E
        ctx->r5 = ADD32(0, 0X1E);
            goto L_08000B78;
    }
    // 0x08000980: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000984: jal         0x080013A8
    // 0x08000988: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_080013A8_730C38(rdram, ctx);
        goto after_70;
    // 0x08000988: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_70:
    // 0x0800098C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000990: jal         0x080013B4
    // 0x08000994: addiu       $a1, $zero, 0x2E8
    ctx->r5 = ADD32(0, 0X2E8);
    func_080013B4_730C44(rdram, ctx);
        goto after_71;
    // 0x08000994: addiu       $a1, $zero, 0x2E8
    ctx->r5 = ADD32(0, 0X2E8);
    after_71:
    // 0x08000998: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x0800099C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080009A0: b           L_08000B78
    // 0x080009A4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000B78;
    // 0x080009A4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080009A8:
    // 0x080009A8: jal         0x08001454
    // 0x080009AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_08001454_730CE4(rdram, ctx);
        goto after_72;
    // 0x080009AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_72:
    // 0x080009B0: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x080009B4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000B78;
    }
    // 0x080009B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080009B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009BC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009C0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080009C4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080009C8: jalr        $t9
    // 0x080009CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x080009CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_73:
    // 0x080009D0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x080009D4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080009D8: b           L_08000B78
    // 0x080009DC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000B78;
    // 0x080009DC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_080009E0:
    // 0x080009E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009E4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080009E8: jalr        $t9
    // 0x080009EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x080009EC: nop

    after_74:
    // 0x080009F0: bnel        $v0, $zero, L_08000B7C
    if (ctx->r2 != 0) {
        // 0x080009F4: lw          $a0, 0x18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X18);
            goto L_08000B7C;
    }
    goto skip_5;
    // 0x080009F4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    skip_5:
    // 0x080009F8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080009FC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x08000A00: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x08000A04: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000A08: b           L_08000B78
    // 0x08000A0C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000B78;
    // 0x08000A0C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000A10:
    // 0x08000A10: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000A14: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A18: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000A1C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08000A20: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000A24: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_08000B78;
    }
    // 0x08000A24: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000A28: jalr        $t9
    // 0x08000A2C: addiu       $a0, $zero, 0x17F
    ctx->r4 = ADD32(0, 0X17F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08000A2C: addiu       $a0, $zero, 0x17F
    ctx->r4 = ADD32(0, 0X17F);
    after_75:
    // 0x08000A30: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000A34: jal         0x0800139C
    // 0x08000A38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_0800139C_730C2C(rdram, ctx);
        goto after_76;
    // 0x08000A38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_76:
    // 0x08000A3C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(62, 0X1A08) << 16);
    // 0x08000A40: lwc1        $f6, 0x1A08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1A08));
    // 0x08000A44: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000A48: lui         $a1, 0xC392
    ctx->r5 = S32(0XC392 << 16);
    // 0x08000A4C: lui         $a2, 0x439B
    ctx->r6 = S32(0X439B << 16);
    // 0x08000A50: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x08000A54: jal         0x0800134C
    // 0x08000A58: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_0800134C_730BDC(rdram, ctx);
        goto after_77;
    // 0x08000A58: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_77:
    // 0x08000A5C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08000A60: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x08000A64: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08000A68: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000A6C: b           L_08000B78
    // 0x08000A70: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000B78;
    // 0x08000A70: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08000A74:
    // 0x08000A74: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A78: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000A7C: jalr        $t9
    // 0x08000A80: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08000A80: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    after_78:
    // 0x08000A84: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000A88: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000A8C: b           L_08000B78
    // 0x08000A90: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000B78;
    // 0x08000A90: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000A94:
    // 0x08000A94: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A98: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000A9C: jalr        $t9
    // 0x08000AA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08000AA0: nop

    after_79:
    // 0x08000AA4: bne         $v0, $zero, L_08000B78
    if (ctx->r2 != 0) {
        // 0x08000AA8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000B78;
    }
    // 0x08000AA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AAC: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08000AB4: nop

    after_80:
    // 0x08000AB8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000ABC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000AC0: addiu       $t9, $t9, -0x5B04
    ctx->r25 = ADD32(ctx->r25, -0X5B04);
    // 0x08000AC4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08000AC8: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x08000ACC: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x08000AD0: addiu       $a2, $zero, 0xE6
    ctx->r6 = ADD32(0, 0XE6);
    // 0x08000AD4: addiu       $a3, $zero, -0x1D6
    ctx->r7 = ADD32(0, -0X1D6);
    // 0x08000AD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000ADC: jalr        $t9
    // 0x08000AE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x08000AE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_81:
    // 0x08000AE4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000AE8: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000AEC: jalr        $t9
    // 0x08000AF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x08000AF0: nop

    after_82:
    // 0x08000AF4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000AF8: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x08000AFC: b           L_08000B78
    // 0x08000B00: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08000B78;
    // 0x08000B00: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_08000B04:
    // 0x08000B04: jal         0x08001804
    // 0x08000B08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_08001804_731094(rdram, ctx);
        goto after_83;
    // 0x08000B08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_83:
    // 0x08000B0C: jal         0x08000D40
    // 0x08000B10: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000D40_7305D0(rdram, ctx);
        goto after_84;
    // 0x08000B10: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_84:
    // 0x08000B14: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B18: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08000B1C: jalr        $t9
    // 0x08000B20: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08000B20: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_85:
    // 0x08000B24: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000B28: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08000B2C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000B30: lui         $t0, 0xD
    ctx->r8 = S32(0XD << 16);
    // 0x08000B34: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    // 0x08000B38: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000B3C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000B40: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08000B44: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x08000B48: lw          $t0, -0x718($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X718);
    // 0x08000B4C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x08000B50: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000B54: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000B58: jalr        $t9
    // 0x08000B5C: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08000B5C: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    after_86:
    // 0x08000B60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B64: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000B68: jalr        $t9
    // 0x08000B6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x08000B6C: nop

    after_87:
    // 0x08000B70: b           L_08000B98
    // 0x08000B74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000B98;
    // 0x08000B74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000B78:
    // 0x08000B78: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
L_08000B7C:
    // 0x08000B7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B80: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000B84: beql        $a0, $zero, L_08000B98
    if (ctx->r4 == 0) {
        // 0x08000B88: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000B98;
    }
    goto skip_6;
    // 0x08000B88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x08000B90: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    after_88:
    // 0x08000B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000B98:
    // 0x08000B98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000B9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08000BA0: jr          $ra
    // 0x08000BA4: nop

    TRACE_RETURN()
    return;
    // 0x08000BA4: nop

;}
RECOMP_FUNC void func_08000E90_730720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E98: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x08000E9C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000EA0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08000EA4: beql        $t6, $zero, L_08000EE8
    if (ctx->r14 == 0) {
        // 0x08000EA8: lw          $v1, 0x68($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X68);
            goto L_08000EE8;
    }
    goto skip_0;
    // 0x08000EA8: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x08000EAC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08000EB0: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x08000EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000EB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x08000EBC: lhu         $t8, -0x5232($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X5232);
    // 0x08000EC0: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x08000EC4: bne         $t9, $zero, L_08000EE4
    if (ctx->r25 != 0) {
        // 0x08000EC8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000EE4;
    }
    // 0x08000EC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ECC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000ED4: jalr        $t9
    // 0x08000ED8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000ED8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000EDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000EE0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_08000EE4:
    // 0x08000EE4: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
L_08000EE8:
    // 0x08000EE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EEC: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000EF0: andi        $t0, $v1, 0x200
    ctx->r8 = ctx->r3 & 0X200;
    // 0x08000EF4: bne         $t0, $zero, L_08000F0C
    if (ctx->r8 != 0) {
        // 0x08000EF8: addiu       $t9, $t9, -0x7FB4
        ctx->r25 = ADD32(ctx->r25, -0X7FB4);
            goto L_08000F0C;
    }
    // 0x08000EF8: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000EFC: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x08000F00: andi        $t2, $v1, 0x1000
    ctx->r10 = ctx->r3 & 0X1000;
    // 0x08000F04: beq         $t1, $zero, L_08000F2C
    if (ctx->r9 == 0) {
        // 0x08000F08: nop
    
            goto L_08000F2C;
    }
    // 0x08000F08: nop

L_08000F0C:
    // 0x08000F0C: jalr        $t9
    // 0x08000F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000F14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F18: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000F1C: jalr        $t9
    // 0x08000F20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F20: nop

    after_2:
    // 0x08000F24: b           L_08000F5C
    // 0x08000F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000F5C;
    // 0x08000F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000F2C:
    // 0x08000F2C: beql        $t2, $zero, L_08000F4C
    if (ctx->r10 == 0) {
        // 0x08000F30: lhu         $t3, 0x16($a2)
        ctx->r11 = MEM_HU(ctx->r6, 0X16);
            goto L_08000F4C;
    }
    goto skip_1;
    // 0x08000F30: lhu         $t3, 0x16($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X16);
    skip_1:
    // 0x08000F34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000F38: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08000F3C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000F40: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000F44: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000F48: lhu         $t3, 0x16($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X16);
L_08000F4C:
    // 0x08000F4C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x08000F50: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08000F54: sh          $t5, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r13;
    // 0x08000F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000F5C:
    // 0x08000F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F60: jr          $ra
    // 0x08000F64: nop

    TRACE_RETURN()
    return;
    // 0x08000F64: nop

;}
RECOMP_FUNC void func_08001084_730914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001084: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001088: jr          $ra
    // 0x0800108C: sw          $t6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x0800108C: sw          $t6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_080013A8_730C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013A8: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080013AC: jr          $ra
    // 0x080013B0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080013B0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_0800139C_730C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800139C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080013A0: jr          $ra
    // 0x080013A4: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080013A4: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_08001454_730CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001454: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001458: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x0800145C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x08001460: jr          $ra
    // 0x08001464: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08001464: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_08001090_730920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001098: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800109C: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x080010A0: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x080010A4: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x080010A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x080010AC: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x080010B0: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x080010B4: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x080010B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010BC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080010C0: beql        $t1, $zero, L_080010E8
    if (ctx->r9 == 0) {
        // 0x080010C4: lw          $t2, 0x10($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X10);
            goto L_080010E8;
    }
    goto skip_0;
    // 0x080010C4: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x080010C8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080010CC: jalr        $t9
    // 0x080010D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x080010D4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080010D8: beq         $v0, $zero, L_080010E4
    if (ctx->r2 == 0) {
        // 0x080010DC: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_080010E4;
    }
    // 0x080010DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x080010E0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_080010E4:
    // 0x080010E4: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
L_080010E8:
    // 0x080010E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010EC: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080010F0: beql        $t2, $zero, L_08001124
    if (ctx->r10 == 0) {
        // 0x080010F4: lw          $t3, 0x2C($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X2C);
            goto L_08001124;
    }
    goto skip_1;
    // 0x080010F4: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    skip_1:
    // 0x080010F8: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x080010FC: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x08001100: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x08001104: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x08001108: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x0800110C: jalr        $t9
    // 0x08001110: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001110: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x08001114: bne         $v0, $zero, L_08001120
    if (ctx->r2 != 0) {
        // 0x08001118: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08001120;
    }
    // 0x08001118: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800111C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_08001120:
    // 0x08001120: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
L_08001124:
    // 0x08001124: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001128: beql        $t3, $zero, L_08001228
    if (ctx->r11 == 0) {
        // 0x0800112C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001228;
    }
    goto skip_2;
    // 0x0800112C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08001130: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x08001134: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x08001138: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x0800113C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001140: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08001144: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001148: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x0800114C: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x08001150: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08001154: nop

    // 0x08001158: bc1fl       L_08001174
    if (!c1cs) {
        // 0x0800115C: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_08001174;
    }
    goto skip_3;
    // 0x0800115C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_3:
    // 0x08001160: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08001164: swc1        $f16, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f16.u32l;
    // 0x08001168: b           L_08001194
    // 0x0800116C: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
        goto L_08001194;
    // 0x0800116C: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x08001170: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_08001174:
    // 0x08001174: nop

    // 0x08001178: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x0800117C: nop

    // 0x08001180: bc1fl       L_08001198
    if (!c1cs) {
        // 0x08001184: cfc1        $t7, $FpcCsr
        ctx->r15 = get_cop1_cs();
            goto L_08001198;
    }
    goto skip_4;
    // 0x08001184: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    skip_4:
    // 0x08001188: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x0800118C: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x08001190: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
L_08001194:
    // 0x08001194: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_08001198:
    // 0x08001198: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x0800119C: lw          $t4, 0x2C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X2C);
    // 0x080011A0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x080011A4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x080011A8: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
    // 0x080011AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080011B0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x080011B4: nop

    // 0x080011B8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x080011BC: beql        $t8, $zero, L_0800120C
    if (ctx->r24 == 0) {
        // 0x080011C0: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_0800120C;
    }
    goto skip_5;
    // 0x080011C0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_5:
    // 0x080011C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080011C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080011CC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x080011D0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x080011D4: nop

    // 0x080011D8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x080011DC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x080011E0: nop

    // 0x080011E4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x080011E8: bne         $t8, $zero, L_08001200
    if (ctx->r24 != 0) {
        // 0x080011EC: nop
    
            goto L_08001200;
    }
    // 0x080011EC: nop

    // 0x080011F0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x080011F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080011F8: b           L_08001218
    // 0x080011FC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_08001218;
    // 0x080011FC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_08001200:
    // 0x08001200: b           L_08001218
    // 0x08001204: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_08001218;
    // 0x08001204: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x08001208: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_0800120C:
    // 0x0800120C: nop

    // 0x08001210: bltz        $t8, L_08001200
    if (SIGNED(ctx->r24) < 0) {
        // 0x08001214: nop
    
            goto L_08001200;
    }
    // 0x08001214: nop

L_08001218:
    // 0x08001218: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x0800121C: sh          $t8, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r24;
    // 0x08001220: nop

    // 0x08001224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001228:
    // 0x08001228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800122C: jr          $ra
    // 0x08001230: nop

    TRACE_RETURN()
    return;
    // 0x08001230: nop

;}
RECOMP_FUNC void func_08001234_730AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001234: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001238: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800123C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001240: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001244: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(62, 0X1090) << 16);
    // 0x08001248: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800124C: addiu       $a1, $a1, 0x1090
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(62, 0X1090));
    // 0x08001250: jalr        $t9
    // 0x08001254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08001258: bne         $v0, $zero, L_08001268
    if (ctx->r2 != 0) {
        // 0x0800125C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08001268;
    }
    // 0x0800125C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001260: b           L_0800130C
    // 0x08001264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_0800130C;
    // 0x08001264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001268:
    // 0x08001268: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800126C: addiu       $t6, $zero, 0x47
    ctx->r14 = ADD32(0, 0X47);
    // 0x08001270: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001274: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08001278: jalr        $t9
    // 0x0800127C: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800127C: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_1:
    // 0x08001280: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08001284: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001288: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800128C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001290: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001294: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001298: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800129C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x080012A0: jalr        $t9
    // 0x080012A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012A4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x080012A8: addiu       $t7, $zero, 0x351
    ctx->r15 = ADD32(0, 0X351);
    // 0x080012AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080012B0: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x080012B4: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x080012B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080012BC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080012C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080012C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080012CC: jalr        $t9
    // 0x080012D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080012D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080012D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080012D8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080012DC: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x080012E0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080012E4: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080012E8: lbu         $t1, 0xD8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XD8);
    // 0x080012EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080012F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x080012F4: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x080012F8: lbu         $t2, 0xD8($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XD8);
    // 0x080012FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001300: sb          $t3, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r11;
    // 0x08001304: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x08001308: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
L_0800130C:
    // 0x0800130C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001310: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001318: jr          $ra
    // 0x0800131C: nop

    TRACE_RETURN()
    return;
    // 0x0800131C: nop

    // 0x08001320: jr          $ra
    // 0x08001324: nop

    TRACE_RETURN()
    return;
    // 0x08001324: nop

;}
RECOMP_FUNC void func_0800105C_7308EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800105C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001060: lui         $at, 0x280
    ctx->r1 = S32(0X280 << 16);
    // 0x08001064: ori         $at, $at, 0x300
    ctx->r1 = ctx->r1 | 0X300;
    // 0x08001068: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x0800106C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001070: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001074: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001078: sb          $t8, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r24;
    // 0x0800107C: jr          $ra
    // 0x08001080: sw          $t9, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x08001080: sw          $t9, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_08001858_7310E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001858: jr          $ra
    // 0x0800185C: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800185C: sw          $a1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_0800138C_730C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800138C: jr          $ra
    // 0x08001390: nop

    TRACE_RETURN()
    return;
    // 0x08001390: nop

    // 0x08001394: jr          $ra
    // 0x08001398: nop

    TRACE_RETURN()
    return;
    // 0x08001398: nop

;}
RECOMP_FUNC void func_08000F68_7307F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000F6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F74: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000F78: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(62, 0XE90) << 16);
    // 0x08000F7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F80: addiu       $a1, $a1, 0xE90
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(62, 0XE90));
    // 0x08000F84: jalr        $t9
    // 0x08000F88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08000F8C: bne         $v0, $zero, L_08000F9C
    if (ctx->r2 != 0) {
        // 0x08000F90: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000F9C;
    }
    // 0x08000F90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000F94: b           L_08001048
    // 0x08000F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001048;
    // 0x08000F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000F9C:
    // 0x08000F9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FA0: addiu       $t6, $zero, 0x47
    ctx->r14 = ADD32(0, 0X47);
    // 0x08000FA4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000FA8: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08000FAC: jalr        $t9
    // 0x08000FB0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FB0: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_1:
    // 0x08000FB4: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000FB8: addiu       $t7, $zero, 0x350
    ctx->r15 = ADD32(0, 0X350);
    // 0x08000FBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FC0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000FC4: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000FC8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FD4: jalr        $t9
    // 0x08000FD8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FD8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x08000FDC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(62, 0X1A0C) << 16);
    // 0x08000FE0: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000FE4: lwc1        $f0, 0x1A0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1A0C));
    // 0x08000FE8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000FEC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000FF0: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000FF4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000FF8: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000FFC: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001000: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x08001004: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001008: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x0800100C: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001010: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(62, 0X1A10) << 16);
    // 0x08001014: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001018: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x0800101C: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x08001020: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08001024: lwc1        $f6, 0x1A10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1A10));
    // 0x08001028: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800102C: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x08001030: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08001034: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08001038: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800103C: jalr        $t9
    // 0x08001040: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001040: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    after_3:
    // 0x08001044: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_08001048:
    // 0x08001048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800104C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001050: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001054: jr          $ra
    // 0x08001058: nop

    TRACE_RETURN()
    return;
    // 0x08001058: nop

;}
RECOMP_FUNC void func_08000DC0_730650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DC0: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x08000DC4: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000DC8: jr          $ra
    // 0x08000DCC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08000DCC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_08000000_72F890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000008: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800000C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000010: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000014: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800001C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000020: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000024: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000028: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x0800002C: jalr        $t9
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000034: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08000038: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800003C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000040: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x08000044: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x08000048: jalr        $t9
    // 0x0800004C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800004C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
    // 0x08000050: beq         $v0, $zero, L_08000070
    if (ctx->r2 == 0) {
        // 0x08000054: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(62, 0X90) << 16);
            goto L_08000070;
    }
    // 0x08000054: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(62, 0X90) << 16);
    // 0x08000058: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800005C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000060: jalr        $t9
    // 0x08000064: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000064: nop

    after_2:
    // 0x08000068: b           L_08000084
    // 0x0800006C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000084;
    // 0x0800006C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000070:
    // 0x08000070: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000074: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000078: jalr        $t9
    // 0x0800007C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(62, 0X90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800007C: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(62, 0X90));
    after_3:
    // 0x08000080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000084:
    // 0x08000084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000088: jr          $ra
    // 0x0800008C: nop

    TRACE_RETURN()
    return;
    // 0x0800008C: nop

;}
RECOMP_FUNC void func_08001328_730BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001328: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800132C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001330: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001334: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08001338: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x0800133C: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08001340: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08001344: jr          $ra
    // 0x08001348: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08001348: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000D40_7305D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D4C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000D50: jalr        $t9
    // 0x08000D54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D54: nop

    after_0:
    // 0x08000D58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x08000D5C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x08000D60: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x08000D64: sb          $zero, 0x2E23($at)
    MEM_B(0X2E23, ctx->r1) = 0;
    // 0x08000D68: sb          $zero, 0x2E21($at)
    MEM_B(0X2E21, ctx->r1) = 0;
    // 0x08000D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D74: jr          $ra
    // 0x08000D78: nop

    TRACE_RETURN()
    return;
    // 0x08000D78: nop

;}
RECOMP_FUNC void func_08000D7C_73060C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D84: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000D88: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x08000D8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D90: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08000D94: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000D98: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000D9C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08000DA0: jalr        $t9
    // 0x08000DA4: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DA4: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    after_0:
    // 0x08000DA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000DAC: sw          $v0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r2;
    // 0x08000DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000DB8: jr          $ra
    // 0x08000DBC: nop

    TRACE_RETURN()
    return;
    // 0x08000DBC: nop

;}
RECOMP_FUNC void func_08001804_731094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800180C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001810: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001814: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08001818: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800181C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001824: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08001828: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800182C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x08001830: jalr        $t9
    // 0x08001834: lw          $a1, 0xEC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XEC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001834: lw          $a1, 0xEC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XEC);
    after_0:
    // 0x08001838: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800183C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001840: jalr        $t9
    // 0x08001844: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001844: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800184C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001850: jr          $ra
    // 0x08001854: nop

    TRACE_RETURN()
    return;
    // 0x08001854: nop

;}
RECOMP_FUNC void func_08000DD0_730660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DD0: jr          $ra
    // 0x08000DD4: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000DD4: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
;}
