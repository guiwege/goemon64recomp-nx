#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000460_73CA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000460: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000464: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000468: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x0800046C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000470: sb          $t6, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = ctx->r14;
    // 0x08000474: swc1        $f12, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f12.u32l;
    // 0x08000478: swc1        $f14, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f14.u32l;
    // 0x0800047C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000480: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x08000484: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x08000488: jr          $ra
    // 0x0800048C: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x0800048C: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_08000000_73C610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800000C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000010: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000014: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000018: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800001C: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x08000020: beq         $at, $zero, L_08000340
    if (ctx->r1 == 0) {
        // 0x08000024: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000340;
    }
    // 0x08000024: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000028: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(70, 0XD78) << 16);
    // 0x0800002C: addu        $at, $at, $t6
    gpr jr_addend_08000034 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000030: lw          $t6, 0xD78($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(70, 0XD78));
    // 0x08000034: jr          $t6
    // 0x08000038: nop

    switch (jr_addend_08000034 >> 2) {
        case 0: goto L_0800003C; break;
        case 1: goto L_08000084; break;
        case 2: goto L_080000B4; break;
        case 3: goto L_08000110; break;
        case 4: goto L_08000134; break;
        case 5: goto L_08000280; break;
        case 6: goto L_08000304; break;
        case 7: goto L_08000340; break;
        default: switch_error(__func__, 0x08000034, 0x08000D78);
    }
    // 0x08000038: nop

L_0800003C:
    // 0x0800003C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000040: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000044: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000048: sw          $t7, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r15;
    // 0x0800004C: jalr        $t9
    // 0x08000050: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000050: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x08000054: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000058: beq         $v0, $zero, L_08000078
    if (ctx->r2 == 0) {
        // 0x0800005C: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_08000078;
    }
    // 0x0800005C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000060: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000064: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000068: jalr        $t9
    // 0x0800006C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800006C: nop

    after_1:
    // 0x08000070: b           L_08000370
    // 0x08000074: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000370;
    // 0x08000074: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000078:
    // 0x08000078: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x0800007C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08000080: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000084:
    // 0x08000084: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000088: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800008C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x08000090: jalr        $t9
    // 0x08000094: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000094: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    after_2:
    // 0x08000098: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x0800009C: beql        $v0, $t2, L_08000344
    if (ctx->r2 == ctx->r10) {
        // 0x080000A0: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08000344;
    }
    goto skip_0;
    // 0x080000A0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    skip_0:
    // 0x080000A4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x080000A8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080000AC: b           L_08000340
    // 0x080000B0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000340;
    // 0x080000B0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_080000B4:
    // 0x080000B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080000B8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080000BC: jalr        $t9
    // 0x080000C0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000C0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_3:
    // 0x080000C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000C8: addiu       $t9, $t9, 0x6D2C
    ctx->r25 = ADD32(ctx->r25, 0X6D2C);
    // 0x080000CC: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x080000D0: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x080000D4: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080000D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x080000DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080000E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080000E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080000E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080000EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x080000F8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080000FC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08000100: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08000104: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000108: b           L_08000340
    // 0x0800010C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08000340;
    // 0x0800010C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08000110:
    // 0x08000110: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000114: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x08000118: slti        $at, $t3, 0x1E
    ctx->r1 = SIGNED(ctx->r11) < 0X1E ? 1 : 0;
    // 0x0800011C: bnel        $at, $zero, L_08000344
    if (ctx->r1 != 0) {
        // 0x08000120: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08000344;
    }
    goto skip_1;
    // 0x08000120: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    skip_1:
    // 0x08000124: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000128: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800012C: b           L_08000340
    // 0x08000130: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000340;
    // 0x08000130: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000134:
    // 0x08000134: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000138: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x0800013C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(70, 0X380) << 16);
    // 0x08000140: addiu       $a1, $a1, 0x380
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(70, 0X380));
    // 0x08000144: slti        $at, $t6, 0x3C
    ctx->r1 = SIGNED(ctx->r14) < 0X3C ? 1 : 0;
    // 0x08000148: bne         $at, $zero, L_08000340
    if (ctx->r1 != 0) {
        // 0x0800014C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000340;
    }
    // 0x0800014C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000150: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000154: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000158: jalr        $t9
    // 0x0800015C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800015C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000160: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08000164: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000168: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x0800016C: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(70, 0XD10) << 16);
    // 0x08000170: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000174: lbu         $t8, 0x60($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X60);
    // 0x08000178: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000180: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x08000184: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x08000188: lhu         $t2, 0xD10($t2)
    ctx->r10 = MEM_HU(ctx->r10, (int16_t)RELOC_LO16(70, 0XD10));
    // 0x0800018C: sh          $t2, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r10;
    // 0x08000190: jalr        $t9
    // 0x08000194: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000194: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x08000198: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x0800019C: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x080001A0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x080001A4: sw          $t3, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r11;
    // 0x080001A8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x080001AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001B0: addiu       $t7, $zero, 0x4F
    ctx->r15 = ADD32(0, 0X4F);
    // 0x080001B4: sw          $t5, 0x64($t6)
    MEM_W(0X64, ctx->r14) = ctx->r13;
    // 0x080001B8: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x080001BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001C0: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x080001C4: jalr        $t9
    // 0x080001C8: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001C8: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_7:
    // 0x080001CC: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x080001D0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080001D4: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080001D8: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
    // 0x080001DC: lbu         $t2, 0xD8($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XD8);
    // 0x080001E0: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x080001E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001E8: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080001EC: sb          $t2, 0x74($t3)
    MEM_B(0X74, ctx->r11) = ctx->r10;
    // 0x080001F0: lbu         $t4, 0xD8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XD8);
    // 0x080001F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080001F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080001FC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000200: jalr        $t9
    // 0x08000204: sb          $t5, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000204: sb          $t5, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r13;
    after_8:
    // 0x08000208: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x0800020C: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x08000210: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000214: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x08000218: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x0800021C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x08000220: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x08000224: lwc1        $f0, 0x8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000228: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x0800022C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000230: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x08000234: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x08000238: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x0800023C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x08000240: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08000244: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000248: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x0800024C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x08000250: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x08000254: lwc1        $f0, 0x10($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X10);
    // 0x08000258: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x0800025C: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x08000260: lw          $t2, 0x30($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X30);
    // 0x08000264: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    // 0x08000268: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x0800026C: sw          $t3, 0x64($t4)
    MEM_W(0X64, ctx->r12) = ctx->r11;
    // 0x08000270: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000274: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x08000278: b           L_08000340
    // 0x0800027C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
        goto L_08000340;
    // 0x0800027C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_08000280:
    // 0x08000280: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000284: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000288: jalr        $t9
    // 0x0800028C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800028C: nop

    after_9:
    // 0x08000290: bne         $v0, $zero, L_08000340
    if (ctx->r2 != 0) {
        // 0x08000294: lui         $t0, 0x8020
        ctx->r8 = S32(0X8020 << 16);
            goto L_08000340;
    }
    // 0x08000294: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000298: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x0800029C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x080002A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080002A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080002A8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080002AC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x080002B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080002B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080002B8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080002BC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080002C0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080002C4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080002C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080002CC: jal         0x08000460
    // 0x080002D0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_08000460_73CA70(rdram, ctx);
        goto after_10;
    // 0x080002D0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x080002D4: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x080002D8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x080002DC: jal         0x08000490
    // 0x080002E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000490_73CAA0(rdram, ctx);
        goto after_11;
    // 0x080002E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_11:
    // 0x080002E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002E8: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080002EC: jalr        $t9
    // 0x080002F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080002F0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_12:
    // 0x080002F4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080002F8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080002FC: b           L_08000340
    // 0x08000300: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000340;
    // 0x08000300: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_08000304:
    // 0x08000304: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000308: jal         0x080004A4
    // 0x0800030C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_080004A4_73CAB4(rdram, ctx);
        goto after_13;
    // 0x0800030C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_13:
    // 0x08000310: bne         $v0, $zero, L_08000340
    if (ctx->r2 != 0) {
        // 0x08000314: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000340;
    }
    // 0x08000314: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000318: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800031C: jalr        $t9
    // 0x08000320: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000320: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_14:
    // 0x08000324: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000328: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800032C: jalr        $t9
    // 0x08000330: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000330: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_15:
    // 0x08000334: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x08000338: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x0800033C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000340:
    // 0x08000340: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
L_08000344:
    // 0x08000344: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x08000348: beql        $v1, $zero, L_08000364
    if (ctx->r3 == 0) {
        // 0x0800034C: lw          $t4, 0x4($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X4);
            goto L_08000364;
    }
    goto skip_2;
    // 0x0800034C: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x08000350: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08000354: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x08000358: addiu       $t3, $t2, 0x20
    ctx->r11 = ADD32(ctx->r10, 0X20);
    // 0x0800035C: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    // 0x08000360: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
L_08000364:
    // 0x08000364: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000368: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x0800036C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000370:
    // 0x08000370: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000374: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000378: jr          $ra
    // 0x0800037C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800037C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08000380_73C990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000380: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000384: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000388: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800038C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08000390: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000394: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x08000398: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x0800039C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080003A0: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x080003A4: lbu         $t9, 0xD2($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD2);
    // 0x080003A8: beql        $t9, $zero, L_080003EC
    if (ctx->r25 == 0) {
        // 0x080003AC: addiu       $v1, $a0, 0xD0
        ctx->r3 = ADD32(ctx->r4, 0XD0);
            goto L_080003EC;
    }
    goto skip_0;
    // 0x080003AC: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    skip_0:
    // 0x080003B0: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080003B4: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x080003B8: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x080003BC: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x080003C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080003C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080003CC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x080003D0: jalr        $t9
    // 0x080003D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x080003D8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080003DC: bne         $v0, $zero, L_080003E8
    if (ctx->r2 != 0) {
        // 0x080003E0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080003E8;
    }
    // 0x080003E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080003E4: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
L_080003E8:
    // 0x080003E8: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
L_080003EC:
    // 0x080003EC: lbu         $t0, 0x3($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3);
    // 0x080003F0: beql        $t0, $zero, L_08000450
    if (ctx->r8 == 0) {
        // 0x080003F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000450;
    }
    goto skip_1;
    // 0x080003F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x080003F8: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080003FC: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08000400: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(70, 0XD98) << 16);
    // 0x08000404: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x08000408: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x0800040C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08000410: ldc1        $f4, 0xD98($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(70, 0XD98));
    // 0x08000414: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000418: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x0800041C: nop

    // 0x08000420: bc1fl       L_08000430
    if (!c1cs) {
        // 0x08000424: lwc1        $f6, 0x20($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
            goto L_08000430;
    }
    goto skip_2;
    // 0x08000424: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    skip_2:
    // 0x08000428: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x0800042C: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
L_08000430:
    // 0x08000430: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08000434: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08000438: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x0800043C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x08000440: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08000444: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x08000448: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x0800044C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000450:
    // 0x08000450: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000454: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000458: jr          $ra
    // 0x0800045C: nop

    TRACE_RETURN()
    return;
    // 0x0800045C: nop

;}
RECOMP_FUNC void func_08000C18_73D228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C18: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08000C1C: lhu         $a3, 0x16($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X16);
    // 0x08000C20: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x08000C24: subu        $v0, $a1, $a3
    ctx->r2 = SUB32(ctx->r5, ctx->r7);
    // 0x08000C28: bgez        $v0, L_08000C38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000C2C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08000C38;
    }
    // 0x08000C2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000C30: b           L_08000C38
    // 0x08000C34: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
        goto L_08000C38;
    // 0x08000C34: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
L_08000C38:
    // 0x08000C38: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x08000C3C: beq         $at, $zero, L_08000C50
    if (ctx->r1 == 0) {
        // 0x08000C40: andi        $t6, $a3, 0x3FF
        ctx->r14 = ctx->r7 & 0X3FF;
            goto L_08000C50;
    }
    // 0x08000C40: andi        $t6, $a3, 0x3FF
    ctx->r14 = ctx->r7 & 0X3FF;
    // 0x08000C44: sh          $a1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r5;
    // 0x08000C48: jr          $ra
    // 0x08000C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x08000C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08000C50:
    // 0x08000C50: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x08000C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000C58: jr          $ra
    // 0x08000C5C: nop

    TRACE_RETURN()
    return;
    // 0x08000C5C: nop

;}
RECOMP_FUNC void func_080004AC_73CABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080004B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080004B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080004B8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080004BC: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080004C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080004C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080004C8: beq         $v0, $zero, L_080004EC
    if (ctx->r2 == 0) {
        // 0x080004CC: nop
    
            goto L_080004EC;
    }
    // 0x080004CC: nop

    // 0x080004D0: beq         $v0, $at, L_080006CC
    if (ctx->r2 == ctx->r1) {
        // 0x080004D4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080006CC;
    }
    // 0x080004D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004D8: lui         $t6, 0x8002
    ctx->r14 = S32(0X8002 << 16);
    // 0x080004DC: addiu       $t6, $t6, 0x40DC
    ctx->r14 = ADD32(ctx->r14, 0X40DC);
    // 0x080004E0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x080004E4: b           L_080006E8
    // 0x080004E8: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
        goto L_080006E8;
    // 0x080004E8: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
L_080004EC:
    // 0x080004EC: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080004F0: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080004F4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080004F8: jalr        $v0
    // 0x080004FC: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080004FC: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_0:
    // 0x08000500: bne         $v0, $zero, L_08000520
    if (ctx->r2 != 0) {
        // 0x08000504: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000520;
    }
    // 0x08000504: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000508: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800050C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000510: jalr        $t9
    // 0x08000514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000514: nop

    after_1:
    // 0x08000518: b           L_08000708
    // 0x0800051C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000708;
    // 0x0800051C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000520:
    // 0x08000520: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000524: jalr        $t9
    // 0x08000528: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000528: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_2:
    // 0x0800052C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000530: addiu       $t7, $zero, 0x3D8
    ctx->r15 = ADD32(0, 0X3D8);
    // 0x08000534: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000538: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x0800053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000544: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000548: jalr        $t9
    // 0x0800054C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800054C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08000550: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x08000554: addiu       $t8, $zero, 0x226
    ctx->r24 = ADD32(0, 0X226);
    // 0x08000558: sh          $t8, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r24;
    // 0x0800055C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08000560: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08000564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800056C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000574: jal         0x08000C60
    // 0x08000578: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_08000C60_73D270(rdram, ctx);
        goto after_4;
    // 0x08000578: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_4:
    // 0x0800057C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x08000580: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000584: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000588: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x0800058C: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08000590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000594: jalr        $t9
    // 0x08000598: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000598: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    after_5:
    // 0x0800059C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x080005A0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x080005A4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x080005A8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080005AC: sb          $t6, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r14;
    // 0x080005B0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080005B4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080005B8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x080005BC: jalr        $t9
    // 0x080005C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080005C0: nop

    after_6:
    // 0x080005C4: beq         $v0, $zero, L_080005E0
    if (ctx->r2 == 0) {
        // 0x080005C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080005E0;
    }
    // 0x080005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005CC: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080005D0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x080005D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080005D8: b           L_080006E8
    // 0x080005DC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_080006E8;
    // 0x080005DC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_080005E0:
    // 0x080005E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005E4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080005E8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(70, 0X718) << 16);
    // 0x080005EC: addiu       $a1, $a1, 0x718
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(70, 0X718));
    // 0x080005F0: jalr        $t9
    // 0x080005F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080005F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080005F8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080005FC: beq         $v0, $zero, L_080006BC
    if (ctx->r2 == 0) {
        // 0x08000600: sw          $v0, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r2;
            goto L_080006BC;
    }
    // 0x08000600: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x08000604: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x08000608: addiu       $t4, $zero, 0x4F
    ctx->r12 = ADD32(0, 0X4F);
    // 0x0800060C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000610: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08000614: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000618: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0800061C: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x08000620: jalr        $t9
    // 0x08000624: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000624: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_8:
    // 0x08000628: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800062C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08000630: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000634: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x08000638: addiu       $t1, $t1, -0x33D0
    ctx->r9 = ADD32(ctx->r9, -0X33D0);
    // 0x0800063C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000640: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
    // 0x08000644: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x08000648: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800064C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000650: sw          $s0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r16;
    // 0x08000654: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x08000658: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0800065C: sw          $zero, 0x60($t7)
    MEM_W(0X60, ctx->r15) = 0;
    // 0x08000660: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x08000664: sw          $t8, 0x64($t2)
    MEM_W(0X64, ctx->r10) = ctx->r24;
    // 0x08000668: lbu         $t3, 0xD8($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XD8);
    // 0x0800066C: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x08000670: sb          $t3, 0x74($t4)
    MEM_B(0X74, ctx->r12) = ctx->r11;
    // 0x08000674: lbu         $t9, 0xD8($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0XD8);
    // 0x08000678: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x0800067C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000680: sb          $t5, 0xD8($t1)
    MEM_B(0XD8, ctx->r9) = ctx->r13;
    // 0x08000684: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000688: jalr        $t9
    // 0x0800068C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800068C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    after_9:
    // 0x08000690: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x08000694: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08000698: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800069C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080006A0: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x080006A4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080006A8: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x080006AC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080006B0: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x080006B4: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x080006B8: sh          $t6, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r14;
L_080006BC:
    // 0x080006BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x080006C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080006C4: b           L_080006E8
    // 0x080006C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_080006E8;
    // 0x080006C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_080006CC:
    // 0x080006CC: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x080006D0: jalr        $t9
    // 0x080006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x080006D8: lui         $t2, 0x8002
    ctx->r10 = S32(0X8002 << 16);
    // 0x080006DC: addiu       $t2, $t2, 0x40DC
    ctx->r10 = ADD32(ctx->r10, 0X40DC);
    // 0x080006E0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x080006E4: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
L_080006E8:
    // 0x080006E8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080006EC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x080006F0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x080006F4: jalr        $t9
    // 0x080006F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080006F8: nop

    after_11:
    // 0x080006FC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000700: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x08000704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000708:
    // 0x08000708: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800070C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000710: jr          $ra
    // 0x08000714: nop

    TRACE_RETURN()
    return;
    // 0x08000714: nop

;}
RECOMP_FUNC void func_080004A4_73CAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004A4: jr          $ra
    // 0x080004A8: lbu         $v0, 0xD3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD3);
    TRACE_RETURN()
    return;
    // 0x080004A8: lbu         $v0, 0xD3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD3);
;}
RECOMP_FUNC void func_080000DC_73D4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080000E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080000EC: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x080000F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBD4) << 16);
    // 0x080000F4: lwc1        $f4, 0xBD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBD4));
    // 0x080000F8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080000FC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000100: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBD8) << 16);
    // 0x08000104: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x08000108: nop

    // 0x0800010C: bc1fl       L_080001C0
    if (!c1cs) {
        // 0x08000110: sh          $zero, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = 0;
            goto L_080001C0;
    }
    goto skip_0;
    // 0x08000110: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    skip_0:
    // 0x08000114: lwc1        $f6, 0xBD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBD8));
    // 0x08000118: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBDC) << 16);
    // 0x0800011C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x08000120: nop

    // 0x08000124: bc1fl       L_080001C0
    if (!c1cs) {
        // 0x08000128: sh          $zero, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = 0;
            goto L_080001C0;
    }
    goto skip_1;
    // 0x08000128: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    skip_1:
    // 0x0800012C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000130: lwc1        $f8, 0xBDC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBDC));
    // 0x08000134: lui         $at, 0xC375
    ctx->r1 = S32(0XC375 << 16);
    // 0x08000138: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x0800013C: nop

    // 0x08000140: bc1fl       L_080001C0
    if (!c1cs) {
        // 0x08000144: sh          $zero, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = 0;
            goto L_080001C0;
    }
    goto skip_2;
    // 0x08000144: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    skip_2:
    // 0x08000148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800014C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000150: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x08000154: nop

    // 0x08000158: bc1fl       L_080001C0
    if (!c1cs) {
        // 0x0800015C: sh          $zero, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = 0;
            goto L_080001C0;
    }
    goto skip_3;
    // 0x0800015C: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    skip_3:
    // 0x08000160: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08000164: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08000168: lbu         $v0, 0xCC($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XCC);
    // 0x0800016C: beq         $v0, $at, L_0800017C
    if (ctx->r2 == ctx->r1) {
        // 0x08000170: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_0800017C;
    }
    // 0x08000170: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x08000174: bne         $v0, $at, L_080001B4
    if (ctx->r2 != ctx->r1) {
        // 0x08000178: nop
    
            goto L_080001B4;
    }
    // 0x08000178: nop

L_0800017C:
    // 0x0800017C: lhu         $t7, 0x8A($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8A);
    // 0x08000180: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x08000184: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08000188: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800018C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x08000190: bne         $t9, $at, L_080001C0
    if (ctx->r25 != ctx->r1) {
        // 0x08000194: sh          $t8, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r24;
            goto L_080001C0;
    }
    // 0x08000194: sh          $t8, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r24;
    // 0x08000198: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x0800019C: addiu       $t9, $t9, -0x32B8
    ctx->r25 = ADD32(ctx->r25, -0X32B8);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001A4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080001A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080001AC: b           L_080001C0
    // 0x080001B0: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
        goto L_080001C0;
    // 0x080001B0: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
L_080001B4:
    // 0x080001B4: b           L_080001C0
    // 0x080001B8: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
        goto L_080001C0;
    // 0x080001B8: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    // 0x080001BC: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
L_080001C0:
    // 0x080001C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001C8: jr          $ra
    // 0x080001CC: nop

    TRACE_RETURN()
    return;
    // 0x080001CC: nop

;}
RECOMP_FUNC void func_0800046C_73D83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800046C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x08000470: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x08000474: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x08000478: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x0800047C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x08000480: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x08000484: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x08000488: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x0800048C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x08000490: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08000494: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000498: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0800049C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x080004A0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080004A4: lui         $s7, 0x800
    ctx->r23 = S32(RELOC_HI16(71, 0XB54) << 16);
    // 0x080004A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x080004AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x080004B0: addu        $s7, $s7, $v1
    ctx->r23 = ADD32(ctx->r23, ctx->r3);
    // 0x080004B4: lw          $s7, 0xB54($s7)
    ctx->r23 = MEM_W(ctx->r23, (int16_t)RELOC_LO16(71, 0XB54));
    // 0x080004B8: sh          $v0, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r2;
    // 0x080004BC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080004C0: sh          $s7, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r23;
    // 0x080004C4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080004C8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080004CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004D0: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080004D4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080004D8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x080004DC: sll         $a1, $s7, 3
    ctx->r5 = S32(ctx->r23 << 3);
    // 0x080004E0: jalr        $t9
    // 0x080004E4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004E4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080004E8: sw          $v0, 0xDC($s4)
    MEM_W(0XDC, ctx->r20) = ctx->r2;
    // 0x080004EC: bne         $v0, $zero, L_0800050C
    if (ctx->r2 != 0) {
        // 0x080004F0: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_0800050C;
    }
    // 0x080004F0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x080004F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004F8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080004FC: jalr        $t9
    // 0x08000500: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000500: nop

    after_1:
    // 0x08000504: b           L_08000674
    // 0x08000508: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_08000674;
    // 0x08000508: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_0800050C:
    // 0x0800050C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000510: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000514: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000518: sw          $t6, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->r14;
    // 0x0800051C: sw          $t7, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r15;
    // 0x08000520: sh          $t8, 0x5E($s4)
    MEM_H(0X5E, ctx->r20) = ctx->r24;
    // 0x08000524: blez        $s7, L_0800065C
    if (SIGNED(ctx->r23) <= 0) {
        // 0x08000528: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_0800065C;
    }
    // 0x08000528: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x0800052C: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x08000530: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBFC) << 16);
    // 0x08000534: lui         $fp, 0xA00
    ctx->r30 = S32(0XA00 << 16);
    // 0x08000538: addiu       $fp, $fp, 0x640
    ctx->r30 = ADD32(ctx->r30, 0X640);
    // 0x0800053C: lwc1        $f20, 0xBFC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBFC));
    // 0x08000540: addiu       $s6, $s6, 0x6E54
    ctx->r22 = ADD32(ctx->r22, 0X6E54);
    // 0x08000544: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x08000548: ori         $s2, $zero, 0x8000
    ctx->r18 = 0 | 0X8000;
    // 0x0800054C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_08000550:
    // 0x08000550: jalr        $s6
    // 0x08000554: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_2;
    // 0x08000554: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x08000558: beq         $v0, $zero, L_08000650
    if (ctx->r2 == 0) {
        // 0x0800055C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000650;
    }
    // 0x0800055C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000560: lw          $t4, 0x48($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X48);
    // 0x08000564: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x08000568: lui         $t9, 0xA00
    ctx->r25 = S32(0XA00 << 16);
    // 0x0800056C: addiu       $t9, $t9, 0x6980
    ctx->r25 = ADD32(ctx->r25, 0X6980);
    // 0x08000570: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x08000574: addu        $t2, $fp, $s3
    ctx->r10 = ADD32(ctx->r30, ctx->r19);
    // 0x08000578: addiu       $t3, $zero, 0x152
    ctx->r11 = ADD32(0, 0X152);
    // 0x0800057C: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x08000580: sw          $t2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r10;
    // 0x08000584: sh          $zero, 0x34($v0)
    MEM_H(0X34, ctx->r2) = 0;
    // 0x08000588: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x0800058C: sh          $t3, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r11;
    // 0x08000590: sw          $t6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r14;
    // 0x08000594: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x08000598: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x0800059C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x080005A0: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(71, 0XB3C) << 16);
    // 0x080005A4: addiu       $t8, $t8, 0xB3C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(71, 0XB3C));
    // 0x080005A8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x080005AC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x080005B0: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x080005B4: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x080005B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x080005BC: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x080005C0: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x080005C4: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x080005C8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x080005CC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080005D0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x080005D4: addu        $t0, $s5, $t7
    ctx->r8 = ADD32(ctx->r21, ctx->r15);
    // 0x080005D8: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x080005DC: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x080005E0: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x080005E4: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x080005E8: addiu       $t1, $t1, 0xED0
    ctx->r9 = ADD32(ctx->r9, 0XED0);
    // 0x080005EC: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080005F0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x080005F4: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x080005F8: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x080005FC: addu        $t6, $t9, $a0
    ctx->r14 = ADD32(ctx->r25, ctx->r4);
    // 0x08000600: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08000604: sh          $s2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r18;
    // 0x08000608: sh          $s2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r18;
    // 0x0800060C: sh          $s2, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r18;
    // 0x08000610: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x08000614: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08000618: swc1        $f20, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f20.u32l;
    // 0x0800061C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x08000620: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x08000624: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x08000628: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
    // 0x0800062C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08000630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000634: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x08000638: jalr        $t1
    // 0x0800063C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_3;
    // 0x0800063C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    after_3:
    // 0x08000640: or          $t4, $v0, $s3
    ctx->r12 = ctx->r2 | ctx->r19;
    // 0x08000644: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000648: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x0800064C: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
L_08000650:
    // 0x08000650: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000654: bnel        $s1, $s7, L_08000550
    if (ctx->r17 != ctx->r23) {
        // 0x08000658: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_08000550;
    }
    goto skip_0;
    // 0x08000658: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
L_0800065C:
    // 0x0800065C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000660: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000664: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(71, 0X6A4) << 16);
    // 0x08000668: jalr        $t9
    // 0x0800066C: addiu       $a0, $a0, 0x6A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0X6A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800066C: addiu       $a0, $a0, 0x6A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0X6A4));
    after_4:
    // 0x08000670: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_08000674:
    // 0x08000674: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x08000678: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800067C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x08000680: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08000684: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08000688: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x0800068C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x08000690: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x08000694: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x08000698: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x0800069C: jr          $ra
    // 0x080006A0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x080006A0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_080001D0_73D5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080001D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080001D8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080001DC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080001E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080001E8: addiu       $t6, $zero, 0x22A
    ctx->r14 = ADD32(0, 0X22A);
    // 0x080001EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080001F0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080001F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080001F8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080001FC: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000200: jalr        $t9
    // 0x08000204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08000208: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800020C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000218: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800021C: jalr        $t9
    // 0x08000220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000224: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBE0) << 16);
    // 0x08000228: lwc1        $f0, 0xBE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBE0));
    // 0x0800022C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000230: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08000234: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000238: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x0800023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000240: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000244: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000248: jalr        $t9
    // 0x0800024C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800024C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08000250: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000254: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08000258: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0800025C: jalr        $v0
    // 0x08000260: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000260: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_3:
    // 0x08000264: addiu       $t0, $v0, 0x2BB
    ctx->r8 = ADD32(ctx->r2, 0X2BB);
    // 0x08000268: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x0800026C: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x08000270: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000274: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x08000278: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800027C: jalr        $t9
    // 0x08000280: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000280: nop

    after_4:
    // 0x08000284: addiu       $t1, $v0, -0x143
    ctx->r9 = ADD32(ctx->r2, -0X143);
    // 0x08000288: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x0800028C: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x08000290: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000294: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000298: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x0800029C: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x080002A0: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x080002A4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080002A8: jalr        $t9
    // 0x080002AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002AC: nop

    after_5:
    // 0x080002B0: addiu       $t2, $zero, 0x75
    ctx->r10 = ADD32(0, 0X75);
    // 0x080002B4: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x080002B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002BC: sh          $t3, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r11;
    // 0x080002C0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080002C4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x080002C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080002CC: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    // 0x080002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080002D8: jalr        $t9
    // 0x080002DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080002DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x080002E0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080002E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002E8: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x080002EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(71, 0X314) << 16);
    // 0x080002F4: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
    // 0x080002F8: jalr        $t9
    // 0x080002FC: addiu       $a0, $a0, 0x314
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0X314));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080002FC: addiu       $a0, $a0, 0x314
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0X314));
    after_7:
    // 0x08000300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000304: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000308: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800030C: jr          $ra
    // 0x08000310: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08000310: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080006A4_73DA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006A4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x080006A8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x080006AC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080006B0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x080006B4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x080006B8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x080006BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XC00) << 16);
    // 0x080006C0: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x080006C4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x080006C8: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x080006CC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x080006D0: ldc1        $f24, 0xC00($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(71, 0XC00));
    // 0x080006D4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x080006D8: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x080006DC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x080006E0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x080006E4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x080006E8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x080006EC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x080006F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080006F4: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x080006F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XC08) << 16);
    // 0x080006FC: lui         $s6, 0x8022
    ctx->r22 = S32(0X8022 << 16);
    // 0x08000700: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08000704: lw          $s1, 0xDC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XDC);
    // 0x08000708: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x0800070C: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x08000710: lhu         $fp, 0xE0($a0)
    ctx->r30 = MEM_HU(ctx->r4, 0XE0);
    // 0x08000714: addiu       $s6, $s6, 0xED0
    ctx->r22 = ADD32(ctx->r22, 0XED0);
    // 0x08000718: ldc1        $f20, 0xC08($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(71, 0XC08));
    // 0x0800071C: lui         $s7, 0x2000
    ctx->r23 = S32(0X2000 << 16);
    // 0x08000720: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
L_08000724:
    // 0x08000724: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08000728: addiu       $s2, $s2, -0x6D4C
    ctx->r18 = ADD32(ctx->r18, -0X6D4C);
    // 0x0800072C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x08000730: beq         $at, $zero, L_08000818
    if (ctx->r1 == 0) {
        // 0x08000734: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08000818;
    }
    // 0x08000734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000738: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(71, 0XB3C) << 16);
    // 0x0800073C: sll         $s4, $s5, 2
    ctx->r20 = S32(ctx->r21 << 2);
    // 0x08000740: subu        $s4, $s4, $s5
    ctx->r20 = SUB32(ctx->r20, ctx->r21);
    // 0x08000744: addiu       $t8, $t8, 0xB3C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(71, 0XB3C));
    // 0x08000748: sll         $t7, $fp, 2
    ctx->r15 = S32(ctx->r30 << 2);
    // 0x0800074C: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x08000750: jalr        $s2
    // 0x08000754: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x08000754: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    after_0:
    // 0x08000758: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800075C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x08000760: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000764: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000768: addu        $t0, $t9, $s4
    ctx->r8 = ADD32(ctx->r25, ctx->r20);
    // 0x0800076C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x08000770: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000774: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x08000778: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x0800077C: addu        $t2, $t1, $s4
    ctx->r10 = ADD32(ctx->r9, ctx->r20);
    // 0x08000780: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x08000784: jalr        $s2
    // 0x08000788: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x08000788: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    after_1:
    // 0x0800078C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000790: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x08000794: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000798: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800079C: addu        $t4, $t3, $s4
    ctx->r12 = ADD32(ctx->r11, ctx->r20);
    // 0x080007A0: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x080007A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080007A8: jalr        $s2
    // 0x080007AC: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x080007AC: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x080007B0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x080007B4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x080007B8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080007BC: div.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f26.fl);
    // 0x080007C0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080007C4: add.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = ctx->f4.d + ctx->f20.d;
    // 0x080007C8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x080007CC: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x080007D0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080007D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080007D8: jalr        $s2
    // 0x080007DC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_3;
    // 0x080007DC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x080007E0: addiu       $t6, $zero, 0xA0
    ctx->r14 = ADD32(0, 0XA0);
    // 0x080007E4: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x080007E8: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x080007EC: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x080007F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080007F4: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x080007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007FC: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x08000800: jalr        $s6
    // 0x08000804: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_4;
    // 0x08000804: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    after_4:
    // 0x08000808: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800080C: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x08000810: or          $t0, $t9, $s7
    ctx->r8 = ctx->r25 | ctx->r23;
    // 0x08000814: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
L_08000818:
    // 0x08000818: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000820: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x08000824: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000828: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x0800082C: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x08000830: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x08000834: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000838: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x0800083C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x08000840: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000844: add.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = ctx->f6.d + ctx->f24.d;
    // 0x08000848: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800084C: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    // 0x08000850: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x08000854: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000858: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800085C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000860: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x08000864: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x08000868: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x0800086C: beql        $at, $zero, L_0800087C
    if (ctx->r1 == 0) {
        // 0x08000870: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_0800087C;
    }
    goto skip_0;
    // 0x08000870: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    skip_0:
    // 0x08000874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08000878: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_0800087C:
    // 0x0800087C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000880: jalr        $s6
    // 0x08000884: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_5;
    // 0x08000884: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_5:
    // 0x08000888: or          $t2, $v0, $s7
    ctx->r10 = ctx->r2 | ctx->r23;
    // 0x0800088C: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x08000890: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x08000894: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x08000898: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0800089C: bnel        $s0, $zero, L_08000724
    if (ctx->r16 != 0) {
        // 0x080008A0: lbu         $t6, 0x0($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0X0);
            goto L_08000724;
    }
    goto skip_1;
    // 0x080008A0: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    skip_1:
    // 0x080008A4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x080008A8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x080008AC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x080008B0: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x080008B4: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x080008B8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x080008BC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x080008C0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x080008C4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x080008C8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x080008CC: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x080008D0: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x080008D4: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x080008D8: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x080008DC: jr          $ra
    // 0x080008E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x080008E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_08000000_73D3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000004: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x08000008: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x0800000C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x08000010: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x08000014: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x08000018: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x0800001C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000020: lui         $s3, 0x8001
    ctx->r19 = S32(0X8001 << 16);
    // 0x08000024: lui         $s6, 0x800
    ctx->r22 = S32(RELOC_HI16(71, 0X1D0) << 16);
    // 0x08000028: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x0800002C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x08000030: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08000034: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000038: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x0800003C: addiu       $s7, $s7, 0x71A8
    ctx->r23 = ADD32(ctx->r23, 0X71A8);
    // 0x08000040: addiu       $s6, $s6, 0x1D0
    ctx->r22 = ADD32(ctx->r22, (int16_t)RELOC_LO16(71, 0X1D0));
    // 0x08000044: addiu       $s3, $s3, 0x41C4
    ctx->r19 = ADD32(ctx->r19, 0X41C4);
    // 0x08000048: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x0800004C: addiu       $s2, $zero, 0x50
    ctx->r18 = ADD32(0, 0X50);
    // 0x08000050: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x08000054: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_08000058:
    // 0x08000058: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x0800005C: jalr        $s7
    // 0x08000060: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_0;
    // 0x08000060: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08000064: beq         $v0, $zero, L_0800007C
    if (ctx->r2 == 0) {
        // 0x08000068: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800007C;
    }
    // 0x08000068: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800006C: sh          $s2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r18;
    // 0x08000070: jalr        $s3
    // 0x08000074: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x08000074: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x08000078: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_0800007C:
    // 0x0800007C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000080: bnel        $s1, $s4, L_08000058
    if (ctx->r17 != ctx->r20) {
        // 0x08000084: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_08000058;
    }
    goto skip_0;
    // 0x08000084: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x08000088: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800008C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000090: sh          $zero, 0x8A($s5)
    MEM_H(0X8A, ctx->r21) = 0;
    // 0x08000094: jalr        $t9
    // 0x08000098: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000098: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
    // 0x0800009C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(71, 0XDC) << 16);
    // 0x080000A8: jalr        $t9
    // 0x080000AC: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0XDC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000AC: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(71, 0XDC));
    after_3:
    // 0x080000B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x080000B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080000B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080000BC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x080000C0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x080000C4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x080000C8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x080000CC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x080000D0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x080000D4: jr          $ra
    // 0x080000D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x080000D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08000314_73D6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800031C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000320: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000324: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000328: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBE8) << 16);
    // 0x0800032C: ldc1        $f8, 0xBE8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(71, 0XBE8));
    // 0x08000330: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000334: lhu         $v0, 0xD2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XD2);
    // 0x08000338: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x0800033C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08000340: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBF0) << 16);
    // 0x08000344: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x08000348: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800034C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000350: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08000354: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000358: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x0800035C: ldc1        $f6, 0xBF0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(71, 0XBF0));
    // 0x08000360: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08000364: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000368: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x0800036C: addiu       $v1, $v1, -0x5D94
    ctx->r3 = ADD32(ctx->r3, -0X5D94);
    // 0x08000370: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000374: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000378: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x0800037C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000380: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08000384: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08000388: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x0800038C: beq         $at, $zero, L_08000398
    if (ctx->r1 == 0) {
        // 0x08000390: swc1        $f0, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
            goto L_08000398;
    }
    // 0x08000390: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08000398:
    // 0x08000398: sh          $v0, 0xD2($s1)
    MEM_H(0XD2, ctx->r17) = ctx->r2;
    // 0x0800039C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x080003A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080003A4: jalr        $v1
    // 0x080003A8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x080003A8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x080003AC: lhu         $t7, 0xD2($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XD2);
    // 0x080003B0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080003B4: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080003B8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x080003BC: beq         $at, $zero, L_08000458
    if (ctx->r1 == 0) {
        // 0x080003C0: addiu       $a0, $zero, 0x4E
        ctx->r4 = ADD32(0, 0X4E);
            goto L_08000458;
    }
    // 0x080003C0: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x080003C4: jalr        $v0
    // 0x080003C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080003C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x080003CC: addiu       $t8, $v0, 0x2BB
    ctx->r24 = ADD32(ctx->r2, 0X2BB);
    // 0x080003D0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x080003D4: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x080003D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080003DC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080003E0: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x080003E4: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x080003E8: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x080003EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080003F0: jalr        $t9
    // 0x080003F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003F4: nop

    after_2:
    // 0x080003F8: addiu       $t0, $v0, -0x143
    ctx->r8 = ADD32(ctx->r2, -0X143);
    // 0x080003FC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000400: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(71, 0XBF8) << 16);
    // 0x08000404: lwc1        $f0, 0xBF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0XBF8));
    // 0x08000408: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800040C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x08000410: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000414: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000418: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800041C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08000420: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000424: jalr        $t9
    // 0x08000428: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000428: nop

    after_3:
    // 0x0800042C: addiu       $t1, $zero, 0x75
    ctx->r9 = ADD32(0, 0X75);
    // 0x08000430: subu        $t2, $t1, $v0
    ctx->r10 = SUB32(ctx->r9, ctx->r2);
    // 0x08000434: sh          $t2, 0xD2($s1)
    MEM_H(0XD2, ctx->r17) = ctx->r10;
    // 0x08000438: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x0800043C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08000440: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08000444: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x08000448: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800044C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000450: jalr        $t9
    // 0x08000454: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000454: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
L_08000458:
    // 0x08000458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800045C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000460: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000464: jr          $ra
    // 0x08000468: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08000468: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
