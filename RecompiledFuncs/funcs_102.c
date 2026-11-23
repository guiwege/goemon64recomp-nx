#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000180_6AF590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000180: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x08000184: lw          $t6, 0x7920($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7920);
    // 0x08000188: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800018C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000194: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000198: beq         $t6, $zero, L_080001B0
    if (ctx->r14 == 0) {
        // 0x0800019C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_080001B0;
    }
    // 0x0800019C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080001A0: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x080001A4: lw          $t7, 0x792C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X792C);
    // 0x080001A8: lbu         $t8, 0xDB($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XDB);
    // 0x080001AC: beq         $t7, $t8, L_080001C4
    if (ctx->r15 == ctx->r24) {
        // 0x080001B0: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080001C4;
    }
L_080001B0:
    // 0x080001B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X274) << 16);
    // 0x080001BC: jalr        $t9
    // 0x080001C0: addiu       $a0, $a0, 0x274
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X274));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001C0: addiu       $a0, $a0, 0x274
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X274));
    after_0:
L_080001C4:
    // 0x080001C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x255C
    ctx->r25 = ADD32(ctx->r25, 0X255C);
    // 0x080001CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080001D0: addiu       $t0, $s0, 0xC0
    ctx->r8 = ADD32(ctx->r16, 0XC0);
    // 0x080001D4: addiu       $t1, $s0, 0xC4
    ctx->r9 = ADD32(ctx->r16, 0XC4);
    // 0x080001D8: addiu       $t2, $s0, 0xC8
    ctx->r10 = ADD32(ctx->r16, 0XC8);
    // 0x080001DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x080001E0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080001E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080001E8: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    // 0x080001EC: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x080001F0: lui         $a2, 0xC0A0
    ctx->r6 = S32(0XC0A0 << 16);
    // 0x080001F4: jalr        $t9
    // 0x080001F8: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001F8: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    after_1:
    // 0x080001FC: jal         0x08000394
    // 0x08000200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000394_6AF7A4(rdram, ctx);
        goto after_2;
    // 0x08000200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000204: jal         0x08000490
    // 0x08000208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000490_6AF8A0(rdram, ctx);
        goto after_3;
    // 0x08000208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x0800020C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08000210: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000214: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000218: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x0800021C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x08000220: lw          $a2, 0xC4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC4);
    // 0x08000224: lw          $a3, 0xC8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC8);
    // 0x08000228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800022C: jalr        $t9
    // 0x08000230: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000230: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x08000234: bne         $v0, $zero, L_08000260
    if (ctx->r2 != 0) {
        // 0x08000238: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X320) << 16);
            goto L_08000260;
    }
    // 0x08000238: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X320) << 16);
    // 0x0800023C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000240: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000244: jalr        $t9
    // 0x08000248: addiu       $a0, $a0, 0x320
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X320));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000248: addiu       $a0, $a0, 0x320
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X320));
    after_5:
    // 0x0800024C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x08000250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000254: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x08000258: jalr        $t9
    // 0x0800025C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800025C: nop

    after_6:
L_08000260:
    // 0x08000260: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000264: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000268: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800026C: jr          $ra
    // 0x08000270: nop

    TRACE_RETURN()
    return;
    // 0x08000270: nop

;}
RECOMP_FUNC void func_08000000_6AF410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800000C: lbu         $t8, 0xD9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD9);
    // 0x08000010: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x08000014: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000018: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800001C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000020: beq         $t8, $zero, L_08000054
    if (ctx->r24 == 0) {
        // 0x08000024: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08000054;
    }
    // 0x08000024: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000028: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x0800002C: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08000030: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000034: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08000038: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800003C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000040: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000044: jalr        $t9
    // 0x08000048: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000048: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800004C: b           L_0800006C
    // 0x08000050: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_0800006C;
    // 0x08000050: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08000054:
    // 0x08000054: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000058: addiu       $t9, $t9, 0x6ED0
    ctx->r25 = ADD32(ctx->r25, 0X6ED0);
    // 0x0800005C: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08000060: jalr        $t9
    // 0x08000064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000068: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_0800006C:
    // 0x0800006C: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x08000070: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000074: sw          $zero, -0x321C($at)
    MEM_W(-0X321C, ctx->r1) = 0;
    // 0x08000078: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800007C: lbu         $t3, 0xDA($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XDA);
    // 0x08000080: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000084: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x08000088: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800008C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000090: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x08000094: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    // 0x08000098: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800009C: swc1        $f8, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f8.u32l;
    // 0x080000A0: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x080000A4: sh          $t0, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r8;
    // 0x080000A8: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x080000AC: sh          $t1, 0xEA($a0)
    MEM_H(0XEA, ctx->r4) = ctx->r9;
    // 0x080000B0: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x080000B4: beq         $t3, $zero, L_080000C4
    if (ctx->r11 == 0) {
        // 0x080000B8: sh          $t2, 0xEC($a0)
        MEM_H(0XEC, ctx->r4) = ctx->r10;
            goto L_080000C4;
    }
    // 0x080000B8: sh          $t2, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r10;
    // 0x080000BC: jalr        $t9
    // 0x080000C0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000C0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
L_080000C4:
    // 0x080000C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0XEC) << 16);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000D4: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XEC));
    after_3:
    // 0x080000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080000DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080000E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000E4: jr          $ra
    // 0x080000E8: nop

    TRACE_RETURN()
    return;
    // 0x080000E8: nop

;}
RECOMP_FUNC void func_080032FC_6B270C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080032FC: jr          $ra
    // 0x08003300: nop

    TRACE_RETURN()
    return;
    // 0x08003300: nop

;}
RECOMP_FUNC void func_08000394_6AF7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000394: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000398: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800039C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080003A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080003A4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x080003A8: lw          $v0, 0x2C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2C);
    // 0x080003AC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080003B0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080003B4: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x080003B8: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x080003BC: lwc1        $f6, 0xC($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC);
    // 0x080003C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080003C4: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x080003C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080003CC: addiu       $v1, $v1, -0x2C6C
    ctx->r3 = ADD32(ctx->r3, -0X2C6C);
    // 0x080003D0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x080003D4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x080003D8: lwc1        $f16, 0x10($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X10);
    // 0x080003DC: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x080003E0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080003E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080003E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B3C) << 16);
    // 0x080003EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080003F0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x080003F4: lwc1        $f6, 0x14($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X14);
    // 0x080003F8: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x080003FC: lwc1        $f18, 0x3B3C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B3C));
    // 0x08000400: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08000404: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000408: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x0800040C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x08000410: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x08000414: jalr        $v1
    // 0x08000418: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000418: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x0800041C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000420: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x08000424: jalr        $v1
    // 0x08000428: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08000428: nop

    after_1:
    // 0x0800042C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000430: addiu       $t9, $t9, -0x2A48
    ctx->r25 = ADD32(ctx->r25, -0X2A48);
    // 0x08000434: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x08000438: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x0800043C: jalr        $t9
    // 0x08000440: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000440: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x08000444: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x08000448: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800044C: addiu       $t9, $t9, -0x24FC
    ctx->r25 = ADD32(ctx->r25, -0X24FC);
    // 0x08000450: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08000454: lhu         $t8, 0x8A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8A);
    // 0x08000458: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800045C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x08000460: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000464: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x08000468: jalr        $t9
    // 0x0800046C: andi        $a3, $t8, 0x3FF
    ctx->r7 = ctx->r24 & 0X3FF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800046C: andi        $a3, $t8, 0x3FF
    ctx->r7 = ctx->r24 & 0X3FF;
    after_3:
    // 0x08000470: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x08000474: lhu         $t2, 0x8A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8A);
    // 0x08000478: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x0800047C: sh          $t3, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r11;
    // 0x08000480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000484: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x08000488: jr          $ra
    // 0x0800048C: nop

    TRACE_RETURN()
    return;
    // 0x0800048C: nop

;}
RECOMP_FUNC void func_080006B8_6AFAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080006BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080006C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x080006C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x080006C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080006CC: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x080006D0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080006D4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x080006D8: beq         $v0, $zero, L_08000708
    if (ctx->r2 == 0) {
        // 0x080006DC: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08000708;
    }
    // 0x080006DC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080006E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080006E4: beq         $v0, $at, L_08000780
    if (ctx->r2 == ctx->r1) {
        // 0x080006E8: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08000780;
    }
    // 0x080006E8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080006EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080006F0: beq         $v0, $at, L_080007F8
    if (ctx->r2 == ctx->r1) {
        // 0x080006F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080007F8;
    }
    // 0x080006F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080006F8: beql        $v0, $at, L_080008B0
    if (ctx->r2 == ctx->r1) {
        // 0x080006FC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_080008B0;
    }
    goto skip_0;
    // 0x080006FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x08000700: b           L_080008B0
    // 0x08000704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080008B0;
    // 0x08000704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000708:
    // 0x08000708: lw          $t6, 0xD8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XD8);
    // 0x0800070C: lui         $a1, 0x1000
    ctx->r5 = S32(0X1000 << 16);
    // 0x08000710: ori         $a1, $a1, 0x660
    ctx->r5 = ctx->r5 | 0X660;
    // 0x08000714: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x08000718: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x0800071C: jal         0x080004FC
    // 0x08000720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x08000724: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000728: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x0800072C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000730: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x08000734: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000738: jalr        $t9
    // 0x0800073C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800073C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000740: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000744: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000748: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x0800074C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08000750: jalr        $t9
    // 0x08000754: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000754: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x08000758: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x0800075C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x08000760: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x08000764: lwc1        $f6, 0xC($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC);
    // 0x08000768: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800076C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x08000770: lwc1        $f8, 0x10($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X10);
    // 0x08000774: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    // 0x08000778: b           L_080008AC
    // 0x0800077C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_080008AC;
    // 0x0800077C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_08000780:
    // 0x08000780: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08000784: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800078C: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x08000790: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000794: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08000798: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x0800079C: nop

    // 0x080007A0: bc1tl       L_080008B0
    if (c1cs) {
        // 0x080007A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_080008B0;
    }
    goto skip_1;
    // 0x080007A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x080007A8: jalr        $t9
    // 0x080007AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x080007B0: lw          $t2, 0x60($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X60);
    // 0x080007B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007B8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080007BC: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x080007C0: sw          $t3, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r11;
    // 0x080007C4: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080007C8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080007CC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080007D0: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x080007D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080007D8: jalr        $t9
    // 0x080007DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080007DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080007E0: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x080007E4: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x080007E8: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x080007EC: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x080007F0: b           L_080008AC
    // 0x080007F4: sw          $t4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r12;
        goto L_080008AC;
    // 0x080007F4: sw          $t4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r12;
L_080007F8:
    // 0x080007F8: lbu         $t7, 0x7C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X7C);
    // 0x080007FC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000800: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000804: beql        $t8, $zero, L_080008B0
    if (ctx->r24 == 0) {
        // 0x08000808: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_080008B0;
    }
    goto skip_2;
    // 0x08000808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x0800080C: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x08000810: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x08000814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000818: addiu       $a1, $t0, 0x1
    ctx->r5 = ADD32(ctx->r8, 0X1);
    // 0x0800081C: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x08000820: bne         $t3, $a1, L_08000838
    if (ctx->r11 != ctx->r5) {
        // 0x08000824: sw          $a1, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r5;
            goto L_08000838;
    }
    // 0x08000824: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x08000828: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x0800082C: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x08000830: b           L_080008AC
    // 0x08000834: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
        goto L_080008AC;
    // 0x08000834: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
L_08000838:
    // 0x08000838: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800083C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000840: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08000844: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000848: jalr        $t9
    // 0x0800084C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800084C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000850: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x08000854: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000858: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800085C: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x08000860: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x08000864: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x08000868: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x0800086C: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
    // 0x08000870: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x08000874: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x08000878: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x0800087C: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x08000880: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08000884: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x08000888: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x0800088C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000890: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000894: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08000898: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x0800089C: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    // 0x080008A0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x080008A4: addiu       $t0, $t8, 0xC
    ctx->r8 = ADD32(ctx->r24, 0XC);
    // 0x080008A8: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
L_080008AC:
    // 0x080008AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080008B0:
    // 0x080008B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080008B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x080008B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x080008BC: jr          $ra
    // 0x080008C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080008C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080013C4_6B07D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080013C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080013CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080013D0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080013D4: addiu       $a1, $zero, 0x249
    ctx->r5 = ADD32(0, 0X249);
    // 0x080013D8: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(18, 0X1408) << 16);
    // 0x080013DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080013E0: bne         $v0, $zero, L_080013F8
    if (ctx->r2 != 0) {
        // 0x080013E4: sw          $t6, 0xD0($a0)
        MEM_W(0XD0, ctx->r4) = ctx->r14;
            goto L_080013F8;
    }
    // 0x080013E4: sw          $t6, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r14;
    // 0x080013E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013EC: addiu       $t9, $t9, 0x1638
    ctx->r25 = ADD32(ctx->r25, 0X1638);
    // 0x080013F0: jalr        $t9
    // 0x080013F4: addiu       $a2, $a2, 0x1408
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0X1408));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013F4: addiu       $a2, $a2, 0x1408
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0X1408));
    after_0:
L_080013F8:
    // 0x080013F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001400: jr          $ra
    // 0x08001404: nop

    TRACE_RETURN()
    return;
    // 0x08001404: nop

;}
RECOMP_FUNC void func_08000B34_6AFF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B40: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000B48: jal         0x080004FC
    // 0x08000B4C: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000B4C: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x08000B50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B54: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000B58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B60: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000B64: jalr        $t9
    // 0x08000B68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000B6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B74: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000B78: jalr        $t9
    // 0x08000B7C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B7C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B88: jr          $ra
    // 0x08000B8C: nop

    TRACE_RETURN()
    return;
    // 0x08000B8C: nop

;}
RECOMP_FUNC void func_0800301C_6B242C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800301C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003020: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800302C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003030: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003034: jalr        $t9
    // 0x08003038: lhu         $a0, 0xD2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003038: lhu         $a0, 0xD2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD2);
    after_0:
    // 0x0800303C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003040: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003044: jalr        $t9
    // 0x08003048: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003048: nop

    after_1:
    // 0x0800304C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003054: jr          $ra
    // 0x08003058: nop

    TRACE_RETURN()
    return;
    // 0x08003058: nop

;}
RECOMP_FUNC void func_08002A38_6B1E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002A3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002A40: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002A44: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002A48: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08002A4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002A50: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x08002A54: beq         $at, $zero, L_08002DE0
    if (ctx->r1 == 0) {
        // 0x08002A58: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002DE0;
    }
    // 0x08002A58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08002A5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B40) << 16);
    // 0x08002A60: addu        $at, $at, $t6
    gpr jr_addend_08002A68 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08002A64: lw          $t6, 0x3B40($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B40));
    // 0x08002A68: jr          $t6
    // 0x08002A6C: nop

    switch (jr_addend_08002A68 >> 2) {
        case 0: goto L_08002A70; break;
        case 1: goto L_08002AA8; break;
        case 2: goto L_08002B08; break;
        case 3: goto L_08002B74; break;
        case 4: goto L_08002BCC; break;
        case 5: goto L_08002C08; break;
        case 6: goto L_08002D54; break;
        case 7: goto L_08002DE0; break;
        default: switch_error(__func__, 0x08002A68, 0x08003B40);
    }
    // 0x08002A6C: nop

L_08002A70:
    // 0x08002A70: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A74: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002A78: jalr        $t9
    // 0x08002A7C: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A7C: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    after_0:
    // 0x08002A80: beq         $v0, $zero, L_08002DE0
    if (ctx->r2 == 0) {
        // 0x08002A84: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002DE0;
    }
    // 0x08002A84: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A88: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08002A8C: jalr        $t9
    // 0x08002A90: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A90: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    after_1:
    // 0x08002A94: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002A98: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08002A9C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08002AA0: b           L_08002DE0
    // 0x08002AA4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08002DE0;
    // 0x08002AA4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08002AA8:
    // 0x08002AA8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002AAC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08002AB0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08002AB4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002AB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08002ABC: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    // 0x08002AC0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002AC4: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002AC8: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x08002ACC: jalr        $t9
    // 0x08002AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x08002AD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AD8: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08002ADC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08002AE0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08002AE4: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x08002AE8: jalr        $t9
    // 0x08002AEC: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002AEC: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x08002AF0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08002AF4: addiu       $t1, $zero, 0xB4
    ctx->r9 = ADD32(0, 0XB4);
    // 0x08002AF8: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08002AFC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08002B00: b           L_08002DE0
    // 0x08002B04: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08002DE0;
    // 0x08002B04: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08002B08:
    // 0x08002B08: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002B0C: lbu         $t4, 0x10($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X10);
    // 0x08002B10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B14: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08002B18: bne         $t4, $zero, L_08002B30
    if (ctx->r12 != 0) {
        // 0x08002B1C: nop
    
            goto L_08002B30;
    }
    // 0x08002B1C: nop

    // 0x08002B20: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x08002B24: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08002B28: bne         $t6, $zero, L_08002DE0
    if (ctx->r14 != 0) {
        // 0x08002B2C: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08002DE0;
    }
    // 0x08002B2C: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
L_08002B30:
    // 0x08002B30: jalr        $t9
    // 0x08002B34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002B34: nop

    after_4:
    // 0x08002B38: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x08002B3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B40: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002B44: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x08002B48: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x08002B4C: sw          $t0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r8;
    // 0x08002B50: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x08002B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B5C: jalr        $t9
    // 0x08002B60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002B60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08002B64: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08002B68: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002B6C: b           L_08002DE0
    // 0x08002B70: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08002DE0;
    // 0x08002B70: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08002B74:
    // 0x08002B74: lbu         $t3, 0x7C($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002B78: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002B7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002B80: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x08002B84: beq         $t4, $zero, L_08002DE0
    if (ctx->r12 == 0) {
        // 0x08002B88: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_08002DE0;
    }
    // 0x08002B88: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08002B8C: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x08002B90: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002B94: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002B98: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x08002B9C: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x08002BA0: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x08002BA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08002BA8: jalr        $t9
    // 0x08002BAC: sb          $t7, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002BAC: sb          $t7, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r15;
    after_6:
    // 0x08002BB0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002BB4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08002BB8: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x08002BBC: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08002BC0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002BC4: b           L_08002DE0
    // 0x08002BC8: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08002DE0;
    // 0x08002BC8: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08002BCC:
    // 0x08002BCC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002BD0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08002BD4: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x08002BD8: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    // 0x08002BDC: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x08002BE0: bne         $v1, $zero, L_08002DE0
    if (ctx->r3 != 0) {
        // 0x08002BE4: sw          $t3, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r11;
            goto L_08002DE0;
    }
    // 0x08002BE4: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x08002BE8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002BEC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002BF0: jalr        $t9
    // 0x08002BF4: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002BF4: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    after_7:
    // 0x08002BF8: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08002BFC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08002C00: b           L_08002DE0
    // 0x08002C04: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08002DE0;
    // 0x08002C04: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_08002C08:
    // 0x08002C08: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002C0C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x08002C10: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002C14: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08002C18: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x08002C1C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x08002C20: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x08002C24: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x08002C28: addiu       $t1, $t0, 0xE10
    ctx->r9 = ADD32(ctx->r8, 0XE10);
    // 0x08002C2C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08002C30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002C34: jalr        $t9
    // 0x08002C38: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002C38: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_8:
    // 0x08002C3C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08002C40: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08002C44: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08002C48: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002C4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08002C50: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08002C54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08002C58: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002C5C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08002C60: nop

    // 0x08002C64: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08002C68: beql        $t3, $zero, L_08002CB8
    if (ctx->r11 == 0) {
        // 0x08002C6C: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_08002CB8;
    }
    goto skip_0;
    // 0x08002C6C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08002C70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002C74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08002C78: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08002C7C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08002C80: nop

    // 0x08002C84: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08002C88: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08002C8C: nop

    // 0x08002C90: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08002C94: bne         $t3, $zero, L_08002CAC
    if (ctx->r11 != 0) {
        // 0x08002C98: nop
    
            goto L_08002CAC;
    }
    // 0x08002C98: nop

    // 0x08002C9C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x08002CA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002CA4: b           L_08002CC4
    // 0x08002CA8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_08002CC4;
    // 0x08002CA8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_08002CAC:
    // 0x08002CAC: b           L_08002CC4
    // 0x08002CB0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_08002CC4;
    // 0x08002CB0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x08002CB4: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_08002CB8:
    // 0x08002CB8: nop

    // 0x08002CBC: bltz        $t3, L_08002CAC
    if (SIGNED(ctx->r11) < 0) {
        // 0x08002CC0: nop
    
            goto L_08002CAC;
    }
    // 0x08002CC0: nop

L_08002CC4:
    // 0x08002CC4: lhu         $t5, 0x16($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X16);
    // 0x08002CC8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x08002CCC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08002CD0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x08002CD4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08002CD8: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08002CDC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08002CE0: bnel        $v1, $at, L_08002D20
    if (ctx->r3 != ctx->r1) {
        // 0x08002CE4: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_08002D20;
    }
    goto skip_1;
    // 0x08002CE4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    skip_1:
    // 0x08002CE8: jalr        $t9
    // 0x08002CEC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002CEC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_9:
    // 0x08002CF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CF4: addiu       $t9, $t9, 0x6CB4
    ctx->r25 = ADD32(ctx->r25, 0X6CB4);
    // 0x08002CF8: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002CFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08002D00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002D04: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002D08: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002D0C: jalr        $t9
    // 0x08002D10: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08002D10: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_10:
    // 0x08002D14: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08002D18: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08002D1C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_08002D20:
    // 0x08002D20: bne         $v1, $at, L_08002D34
    if (ctx->r3 != ctx->r1) {
        // 0x08002D24: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(18, 0X3B60) << 16);
            goto L_08002D34;
    }
    // 0x08002D24: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B60) << 16);
    // 0x08002D28: lwc1        $f8, 0x3B60($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B60));
    // 0x08002D2C: swc1        $f8, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f8.u32l;
    // 0x08002D30: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_08002D34:
    // 0x08002D34: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08002D38: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x08002D3C: beq         $v0, $zero, L_08002DE0
    if (ctx->r2 == 0) {
        // 0x08002D40: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_08002DE0;
    }
    // 0x08002D40: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08002D44: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08002D48: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002D4C: b           L_08002DE0
    // 0x08002D50: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08002DE0;
    // 0x08002D50: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08002D54:
    // 0x08002D54: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08002D58: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x08002D5C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002D60: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002D64: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08002D68: jalr        $t9
    // 0x08002D6C: sb          $zero, 0x64($t3)
    MEM_B(0X64, ctx->r11) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002D6C: sb          $zero, 0x64($t3)
    MEM_B(0X64, ctx->r11) = 0;
    after_11:
    // 0x08002D70: beq         $v0, $zero, L_08002DA0
    if (ctx->r2 == 0) {
        // 0x08002D74: addiu       $a0, $zero, 0x155
        ctx->r4 = ADD32(0, 0X155);
            goto L_08002DA0;
    }
    // 0x08002D74: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    // 0x08002D78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002D7C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002D80: jalr        $t9
    // 0x08002D84: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08002D84: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    after_12:
    // 0x08002D88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D8C: addiu       $t9, $t9, 0x72E8
    ctx->r25 = ADD32(ctx->r25, 0X72E8);
    // 0x08002D90: jalr        $t9
    // 0x08002D94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002D94: nop

    after_13:
    // 0x08002D98: b           L_08002DC0
    // 0x08002D9C: nop

        goto L_08002DC0;
    // 0x08002D9C: nop

L_08002DA0:
    // 0x08002DA0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002DA4: addiu       $t9, $t9, -0x5B04
    ctx->r25 = ADD32(ctx->r25, -0X5B04);
    // 0x08002DA8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x08002DAC: addiu       $a2, $zero, 0x3D4
    ctx->r6 = ADD32(0, 0X3D4);
    // 0x08002DB0: addiu       $a3, $zero, -0x634
    ctx->r7 = ADD32(0, -0X634);
    // 0x08002DB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002DB8: jalr        $t9
    // 0x08002DBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08002DBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_14:
L_08002DC0:
    // 0x08002DC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DC4: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08002DC8: jalr        $t9
    // 0x08002DCC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08002DCC: nop

    after_15:
    // 0x08002DD0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002DD4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08002DD8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08002DDC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08002DE0:
    // 0x08002DE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002DE4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002DE8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002DEC: jr          $ra
    // 0x08002DF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002DF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0800059C_6AF9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800059C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005A8: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x080005AC: jalr        $t9
    // 0x080005B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080005B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005BC: jr          $ra
    // 0x080005C0: nop

    TRACE_RETURN()
    return;
    // 0x080005C0: nop

;}
RECOMP_FUNC void func_08001380_6B0790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001384: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x08001388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800138C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001390: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001394: sw          $zero, -0x4E5C($at)
    MEM_W(-0X4E5C, ctx->r1) = 0;
    // 0x08001398: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x0800139C: sw          $t6, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r14;
    // 0x080013A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X13C4) << 16);
    // 0x080013AC: jalr        $t9
    // 0x080013B0: addiu       $a0, $a0, 0x13C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X13C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013B0: addiu       $a0, $a0, 0x13C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X13C4));
    after_0:
    // 0x080013B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013BC: jr          $ra
    // 0x080013C0: nop

    TRACE_RETURN()
    return;
    // 0x080013C0: nop

;}
RECOMP_FUNC void func_08000A7C_6AFE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A88: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000A8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A90: jal         0x080004FC
    // 0x08000A94: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000A94: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x08000A98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A9C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000AA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000AA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000AAC: jalr        $t9
    // 0x08000AB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000AB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000AB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000ABC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000AC0: jalr        $t9
    // 0x08000AC4: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000AC4: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AD0: jr          $ra
    // 0x08000AD4: nop

    TRACE_RETURN()
    return;
    // 0x08000AD4: nop

;}
RECOMP_FUNC void func_08003570_6B2980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003570: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003578: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800357C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08003580: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003584: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003588: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x0800358C: bne         $t7, $zero, L_080035A0
    if (ctx->r15 != 0) {
        // 0x08003590: addiu       $t9, $t9, -0x61F8
        ctx->r25 = ADD32(ctx->r25, -0X61F8);
            goto L_080035A0;
    }
    // 0x08003590: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08003594: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08003598: nop

    // 0x0800359C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
L_080035A0:
    // 0x080035A0: lwc1        $f0, 0xD4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x080035A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B80) << 16);
    // 0x080035A8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x080035AC: nop

    // 0x080035B0: bc1fl       L_080035D4
    if (!c1cs) {
        // 0x080035B4: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_080035D4;
    }
    goto skip_0;
    // 0x080035B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x080035B8: ldc1        $f10, 0x3B80($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B80));
    // 0x080035BC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080035C0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x080035C4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080035C8: swc1        $f18, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f18.u32l;
    // 0x080035CC: lwc1        $f0, 0xD4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x080035D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_080035D4:
    // 0x080035D4: jalr        $t9
    // 0x080035D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080035D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x080035DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080035E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035E4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080035E8: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x080035EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080035F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080035F4: addiu       $t0, $t8, -0x8
    ctx->r8 = ADD32(ctx->r24, -0X8);
    // 0x080035F8: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x080035FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08003600: jalr        $t9
    // 0x08003604: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003604: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    after_1:
    // 0x08003608: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800360C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003610: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003614: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003618: bnel        $t1, $zero, L_0800362C
    if (ctx->r9 != 0) {
        // 0x0800361C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800362C;
    }
    goto skip_1;
    // 0x0800361C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08003620: jalr        $t9
    // 0x08003624: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003624: nop

    after_2:
    // 0x08003628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800362C:
    // 0x0800362C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003630: jr          $ra
    // 0x08003634: nop

    TRACE_RETURN()
    return;
    // 0x08003634: nop

;}
RECOMP_FUNC void func_080019A8_6B0DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080019B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019B4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1E50) << 16);
    // 0x080019B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080019BC: jal         0x08000F88
    // 0x080019C0: addiu       $a1, $a1, 0x1E50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1E50));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x080019C0: addiu       $a1, $a1, 0x1E50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1E50));
    after_0:
    // 0x080019C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019C8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080019CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080019D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080019D4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080019D8: jalr        $t9
    // 0x080019DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080019E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019E4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080019E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080019EC: jalr        $t9
    // 0x080019F0: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080019F0: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x080019F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x08001A00: jalr        $t9
    // 0x08001A04: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A04: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_3:
    // 0x08001A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A10: jr          $ra
    // 0x08001A14: nop

    TRACE_RETURN()
    return;
    // 0x08001A14: nop

;}
RECOMP_FUNC void func_080004FC_6AF90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000508: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x0800050C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x08000510: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
    // 0x08000514: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000518: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x0800051C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000520: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x08000524: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000528: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x0800052C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000530: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x08000534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000538: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x0800053C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08000540: jalr        $t9
    // 0x08000544: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000544: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800054C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x08000550: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000554: sb          $t1, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r9;
    // 0x08000558: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x0800055C: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000560: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x08000564: bgez        $t3, L_08000578
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08000568: nop
    
            goto L_08000578;
    }
    // 0x08000568: nop

    // 0x0800056C: jalr        $t9
    // 0x08000570: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000570: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_08000578:
    // 0x08000578: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800057C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000580: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000584: jalr        $t9
    // 0x08000588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x0800058C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000594: jr          $ra
    // 0x08000598: nop

    TRACE_RETURN()
    return;
    // 0x08000598: nop

;}
RECOMP_FUNC void func_0800105C_6B046C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800105C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001064: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800106C: addiu       $t9, $t9, 0x1CCC
    ctx->r25 = ADD32(ctx->r25, 0X1CCC);
    // 0x08001070: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x08001074: beql        $t7, $zero, L_08001090
    if (ctx->r15 == 0) {
        // 0x08001078: lhu         $t8, 0xA8($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0XA8);
            goto L_08001090;
    }
    goto skip_0;
    // 0x08001078: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
    skip_0:
    // 0x0800107C: jalr        $t9
    // 0x08001080: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001080: nop

    after_0:
    // 0x08001084: b           L_08001098
    // 0x08001088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001098;
    // 0x08001088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800108C: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
L_08001090:
    // 0x08001090: sh          $t8, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r24;
    // 0x08001094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001098:
    // 0x08001098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800109C: jr          $ra
    // 0x080010A0: nop

    TRACE_RETURN()
    return;
    // 0x080010A0: nop

;}
RECOMP_FUNC void func_08001620_6B0A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001620: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001628: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800162C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001630: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001638: beq         $v0, $zero, L_08001658
    if (ctx->r2 == 0) {
        // 0x0800163C: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08001658;
    }
    // 0x0800163C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001640: beq         $v0, $at, L_08001690
    if (ctx->r2 == ctx->r1) {
        // 0x08001644: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08001690;
    }
    // 0x08001644: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001648: beq         $v0, $at, L_0800170C
    if (ctx->r2 == ctx->r1) {
        // 0x0800164C: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_0800170C;
    }
    // 0x0800164C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08001650: b           L_08001714
    // 0x08001654: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
        goto L_08001714;
    // 0x08001654: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_08001658:
    // 0x08001658: jalr        $t9
    // 0x0800165C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800165C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001660: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001664: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08001668: jalr        $t9
    // 0x0800166C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800166C: nop

    after_1:
    // 0x08001670: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08001674: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x08001678: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x0800167C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08001680: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08001684: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001688: b           L_08001714
    // 0x0800168C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_08001714;
    // 0x0800168C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_08001690:
    // 0x08001690: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08001694: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001698: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x0800169C: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x080016A0: bnel        $at, $zero, L_08001718
    if (ctx->r1 != 0) {
        // 0x080016A4: addiu       $t2, $v1, 0x1
        ctx->r10 = ADD32(ctx->r3, 0X1);
            goto L_08001718;
    }
    goto skip_0;
    // 0x080016A4: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x080016A8: lhu         $t8, 0x7AB4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7AB4);
    // 0x080016AC: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x080016B0: addiu       $a1, $zero, 0x178
    ctx->r5 = ADD32(0, 0X178);
    // 0x080016B4: bne         $t8, $at, L_080016E0
    if (ctx->r24 != ctx->r1) {
        // 0x080016B8: lui         $a2, 0x800
        ctx->r6 = S32(RELOC_HI16(18, 0X172C) << 16);
            goto L_080016E0;
    }
    // 0x080016B8: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(18, 0X172C) << 16);
    // 0x080016BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016C0: addiu       $t9, $t9, 0x1638
    ctx->r25 = ADD32(ctx->r25, 0X1638);
    // 0x080016C4: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(18, 0X172C) << 16);
    // 0x080016C8: addiu       $a2, $a2, 0x172C
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0X172C));
    // 0x080016CC: addiu       $a1, $zero, 0x172
    ctx->r5 = ADD32(0, 0X172);
    // 0x080016D0: jalr        $t9
    // 0x080016D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080016D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x080016D8: b           L_080016F8
    // 0x080016DC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_080016F8;
    // 0x080016DC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_080016E0:
    // 0x080016E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016E4: addiu       $t9, $t9, 0x1638
    ctx->r25 = ADD32(ctx->r25, 0X1638);
    // 0x080016E8: addiu       $a2, $a2, 0x172C
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0X172C));
    // 0x080016EC: jalr        $t9
    // 0x080016F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080016F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x080016F4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_080016F8:
    // 0x080016F8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x080016FC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001700: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001704: b           L_08001714
    // 0x08001708: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08001714;
    // 0x08001708: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_0800170C:
    // 0x0800170C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08001710: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_08001714:
    // 0x08001714: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
L_08001718:
    // 0x08001718: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x0800171C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001720: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001724: jr          $ra
    // 0x08001728: nop

    TRACE_RETURN()
    return;
    // 0x08001728: nop

;}
RECOMP_FUNC void func_08001568_6B0978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800156C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001570: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001578: addiu       $t9, $t9, 0x1CCC
    ctx->r25 = ADD32(ctx->r25, 0X1CCC);
    // 0x0800157C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x08001580: beql        $t7, $zero, L_0800159C
    if (ctx->r15 == 0) {
        // 0x08001584: lhu         $t8, 0xA8($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0XA8);
            goto L_0800159C;
    }
    goto skip_0;
    // 0x08001584: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
    skip_0:
    // 0x08001588: jalr        $t9
    // 0x0800158C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800158C: nop

    after_0:
    // 0x08001590: b           L_080015A0
    // 0x08001594: nop

        goto L_080015A0;
    // 0x08001594: nop

    // 0x08001598: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
L_0800159C:
    // 0x0800159C: sh          $t8, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r24;
L_080015A0:
    // 0x080015A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080015A4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080015A8: jalr        $t9
    // 0x080015AC: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015AC: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    after_1:
    // 0x080015B0: beq         $v0, $zero, L_08001610
    if (ctx->r2 == 0) {
        // 0x080015B4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001610;
    }
    // 0x080015B4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080015B8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080015BC: jalr        $t9
    // 0x080015C0: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015C0: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    after_2:
    // 0x080015C4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x080015C8: lhu         $t0, 0x7AB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7AB4);
    // 0x080015CC: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x080015D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015D4: bne         $t0, $at, L_080015F4
    if (ctx->r8 != ctx->r1) {
        // 0x080015D8: addiu       $t9, $t9, 0x71B4
        ctx->r25 = ADD32(ctx->r25, 0X71B4);
            goto L_080015F4;
    }
    // 0x080015D8: addiu       $t9, $t9, 0x71B4
    ctx->r25 = ADD32(ctx->r25, 0X71B4);
    // 0x080015DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015E0: addiu       $t9, $t9, 0x70E8
    ctx->r25 = ADD32(ctx->r25, 0X70E8);
    // 0x080015E4: jalr        $t9
    // 0x080015E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015E8: nop

    after_3:
    // 0x080015EC: b           L_080015FC
    // 0x080015F0: nop

        goto L_080015FC;
    // 0x080015F0: nop

L_080015F4:
    // 0x080015F4: jalr        $t9
    // 0x080015F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015F8: nop

    after_4:
L_080015FC:
    // 0x080015FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001600: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001604: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08001608: jalr        $t9
    // 0x0800160C: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800160C: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_5:
L_08001610:
    // 0x08001610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001618: jr          $ra
    // 0x0800161C: nop

    TRACE_RETURN()
    return;
    // 0x0800161C: nop

;}
RECOMP_FUNC void func_080018C8_6B0CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080018D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018D4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1DB0) << 16);
    // 0x080018D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080018DC: jal         0x08000F88
    // 0x080018E0: addiu       $a1, $a1, 0x1DB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1DB0));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x080018E0: addiu       $a1, $a1, 0x1DB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1DB0));
    after_0:
    // 0x080018E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018E8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080018EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080018F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080018F4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080018F8: jalr        $t9
    // 0x080018FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001900: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001904: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800190C: jalr        $t9
    // 0x08001910: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001910: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x08001914: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001918: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800191C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x08001920: jalr        $t9
    // 0x08001924: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001924: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_3:
    // 0x08001928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800192C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001930: jr          $ra
    // 0x08001934: nop

    TRACE_RETURN()
    return;
    // 0x08001934: nop

;}
RECOMP_FUNC void func_080014A4_6B08B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080014A8: jr          $ra
    // 0x080014AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080014AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000920_6AFD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000924: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800092C: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000934: jal         0x080004FC
    // 0x08000938: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000938: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x0800093C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000940: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000944: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800094C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000950: jalr        $t9
    // 0x08000954: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000954: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000958: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800095C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000960: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000964: jalr        $t9
    // 0x08000968: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000968: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x0800096C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000974: jr          $ra
    // 0x08000978: nop

    TRACE_RETURN()
    return;
    // 0x08000978: nop

;}
RECOMP_FUNC void func_08000274_6AF684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000274: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x08000278: lw          $t6, 0x7920($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7920);
    // 0x0800027C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000280: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000284: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000288: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800028C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000290: bne         $t6, $at, L_080002BC
    if (ctx->r14 != ctx->r1) {
        // 0x08000294: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_080002BC;
    }
    // 0x08000294: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000298: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x0800029C: lw          $t7, 0x792C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X792C);
    // 0x080002A0: lbu         $t8, 0xDB($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XDB);
    // 0x080002A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002AC: bne         $t7, $t8, L_080002BC
    if (ctx->r15 != ctx->r24) {
        // 0x080002B0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X180) << 16);
            goto L_080002BC;
    }
    // 0x080002B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X180) << 16);
    // 0x080002B4: jalr        $t9
    // 0x080002B8: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X180));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002B8: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X180));
    after_0:
L_080002BC:
    // 0x080002BC: jal         0x08000394
    // 0x080002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000394_6AF7A4(rdram, ctx);
        goto after_1;
    // 0x080002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080002C4: jal         0x08000490
    // 0x080002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000490_6AF8A0(rdram, ctx);
        goto after_2;
    // 0x080002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080002CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080002D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080002D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002D8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080002DC: lw          $a1, 0xDC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XDC);
    // 0x080002E0: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x080002E4: lw          $a3, 0xE4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE4);
    // 0x080002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002EC: jalr        $t9
    // 0x080002F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x080002F4: bne         $v0, $zero, L_0800030C
    if (ctx->r2 != 0) {
        // 0x080002F8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0XEC) << 16);
            goto L_0800030C;
    }
    // 0x080002F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0XEC) << 16);
    // 0x080002FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000300: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000304: jalr        $t9
    // 0x08000308: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000308: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XEC));
    after_4:
L_0800030C:
    // 0x0800030C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000310: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000318: jr          $ra
    // 0x0800031C: nop

    TRACE_RETURN()
    return;
    // 0x0800031C: nop

;}
RECOMP_FUNC void func_08003768_6B2B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800376C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003770: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003774: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003778: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800377C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003780: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x08003784: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x08003788: addiu       $t8, $zero, 0xFA
    ctx->r24 = ADD32(0, 0XFA);
    // 0x0800378C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003790: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003794: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08003798: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x0800379C: jalr        $t9
    // 0x080037A0: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037A0: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_0:
    // 0x080037A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080037A8: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080037AC: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x080037B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080037B4: jalr        $t9
    // 0x080037B8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080037B8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x080037BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080037C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037C4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080037C8: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x080037CC: bnel        $t0, $zero, L_080037E0
    if (ctx->r8 != 0) {
        // 0x080037D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080037E0;
    }
    goto skip_0;
    // 0x080037D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080037D4: jalr        $t9
    // 0x080037D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080037D8: nop

    after_2:
    // 0x080037DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080037E0:
    // 0x080037E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080037E4: jr          $ra
    // 0x080037E8: nop

    TRACE_RETURN()
    return;
    // 0x080037E8: nop

;}
RECOMP_FUNC void func_080009D8_6AFDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009D8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x080009DC: lhu         $t6, 0x7AB2($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7AB2);
    // 0x080009E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080009E4: addiu       $at, $zero, 0x1B0
    ctx->r1 = ADD32(0, 0X1B0);
    // 0x080009E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080009EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080009F0: bne         $t6, $at, L_08000A24
    if (ctx->r14 != ctx->r1) {
        // 0x080009F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_08000A24;
    }
    // 0x080009F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080009F8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009FC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000A00: jalr        $t9
    // 0x08000A04: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A04: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x08000A08: beq         $v0, $zero, L_08000A24
    if (ctx->r2 == 0) {
        // 0x08000A0C: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000A24;
    }
    // 0x08000A0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A10: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000A14: jalr        $t9
    // 0x08000A18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A18: nop

    after_1:
    // 0x08000A1C: b           L_08000A70
    // 0x08000A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000A70;
    // 0x08000A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A24:
    // 0x08000A24: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000A28: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    // 0x08000A2C: jal         0x080004FC
    // 0x08000A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_080004FC_6AF90C(rdram, ctx);
        goto after_2;
    // 0x08000A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08000A34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A3C: addiu       $t7, $zero, 0x31B
    ctx->r15 = ADD32(0, 0X31B);
    // 0x08000A40: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000A44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000A48: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000A4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000A50: jalr        $t9
    // 0x08000A54: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A54: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    after_3:
    // 0x08000A58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A5C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A60: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000A64: jalr        $t9
    // 0x08000A68: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A68: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_4:
    // 0x08000A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A70:
    // 0x08000A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A74: jr          $ra
    // 0x08000A78: nop

    TRACE_RETURN()
    return;
    // 0x08000A78: nop

;}
RECOMP_FUNC void func_08001448_6B0858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800144C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001454: lui         $a1, 0x1000
    ctx->r5 = S32(0X1000 << 16);
    // 0x08001458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800145C: jal         0x080004FC
    // 0x08001460: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08001460: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    after_0:
    // 0x08001464: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001468: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x0800146C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001474: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001478: jalr        $t9
    // 0x0800147C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800147C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001480: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001484: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001488: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x0800148C: jalr        $t9
    // 0x08001490: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001490: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08001494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800149C: jr          $ra
    // 0x080014A0: nop

    TRACE_RETURN()
    return;
    // 0x080014A0: nop

;}
RECOMP_FUNC void func_08000648_6AFA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800064C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000654: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000658: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800065C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000660: jalr        $t9
    // 0x08000664: addiu       $a0, $zero, 0x34F
    ctx->r4 = ADD32(0, 0X34F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000664: addiu       $a0, $zero, 0x34F
    ctx->r4 = ADD32(0, 0X34F);
    after_0:
    // 0x08000668: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x0800066C: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    // 0x08000670: jal         0x080004FC
    // 0x08000674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_080004FC_6AF90C(rdram, ctx);
        goto after_1;
    // 0x08000674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000678: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800067C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000680: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000688: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800068C: jalr        $t9
    // 0x08000690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000694: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000698: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800069C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X620) << 16);
    // 0x080006A0: jalr        $t9
    // 0x080006A4: addiu       $a0, $a0, 0x620
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X620));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006A4: addiu       $a0, $a0, 0x620
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X620));
    after_3:
    // 0x080006A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080006AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006B0: jr          $ra
    // 0x080006B4: nop

    TRACE_RETURN()
    return;
    // 0x080006B4: nop

;}
RECOMP_FUNC void func_08001AEC_6B0EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001AF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001AF8: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x08001AFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B00: addiu       $t9, $t9, 0x12F0
    ctx->r25 = ADD32(ctx->r25, 0X12F0);
    // 0x08001B04: beq         $t6, $zero, L_08001B28
    if (ctx->r14 == 0) {
        // 0x08001B08: nop
    
            goto L_08001B28;
    }
    // 0x08001B08: nop

    // 0x08001B0C: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08001B10: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08001B14: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x08001B18: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001B1C: sw          $t8, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r24;
    // 0x08001B20: b           L_08001B4C
    // 0x08001B24: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
        goto L_08001B4C;
    // 0x08001B24: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
L_08001B28:
    // 0x08001B28: jalr        $t9
    // 0x08001B2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001B30: beq         $v0, $zero, L_08001B4C
    if (ctx->r2 == 0) {
        // 0x08001B34: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001B4C;
    }
    // 0x08001B34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001B38: lw          $t1, 0xE8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XE8);
    // 0x08001B3C: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x08001B40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001B44: sw          $t0, 0x68($t1)
    MEM_W(0X68, ctx->r9) = ctx->r8;
    // 0x08001B48: sw          $t2, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r10;
L_08001B4C:
    // 0x08001B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B54: jr          $ra
    // 0x08001B58: nop

    TRACE_RETURN()
    return;
    // 0x08001B58: nop

;}
RECOMP_FUNC void func_0800097C_6AFD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800097C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000988: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x0800098C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000990: jal         0x080004FC
    // 0x08000994: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000994: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x08000998: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800099C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080009A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080009A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009A8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080009AC: jalr        $t9
    // 0x080009B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080009B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x080009C0: jalr        $t9
    // 0x080009C4: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009C4: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x080009C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080009CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080009D0: jr          $ra
    // 0x080009D4: nop

    TRACE_RETURN()
    return;
    // 0x080009D4: nop

;}
RECOMP_FUNC void func_08001408_6B0818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800140C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001414: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001418: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800141C: jalr        $t9
    // 0x08001420: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001420: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001424: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001428: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800142C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X12C0) << 16);
    // 0x08001430: jalr        $t9
    // 0x08001434: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X12C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001434: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X12C0));
    after_1:
    // 0x08001438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800143C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001440: jr          $ra
    // 0x08001444: nop

    TRACE_RETURN()
    return;
    // 0x08001444: nop

;}
RECOMP_FUNC void func_080011AC_6B05BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080011B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080011B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080011B8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1BEC) << 16);
    // 0x080011BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080011C0: jal         0x08000F88
    // 0x080011C4: addiu       $a1, $a1, 0x1BEC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1BEC));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x080011C4: addiu       $a1, $a1, 0x1BEC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1BEC));
    after_0:
    // 0x080011C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011CC: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080011D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080011D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080011D8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080011DC: jalr        $t9
    // 0x080011E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080011E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011E8: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080011EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080011F0: jalr        $t9
    // 0x080011F4: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080011F4: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x080011F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001200: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X121C) << 16);
    // 0x08001204: jalr        $t9
    // 0x08001208: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X121C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001208: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X121C));
    after_3:
    // 0x0800120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001214: jr          $ra
    // 0x08001218: nop

    TRACE_RETURN()
    return;
    // 0x08001218: nop

;}
RECOMP_FUNC void func_08001C78_6B1088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C84: jal         0x08001A18
    // 0x08001C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001C8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001C90: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C94: addiu       $t6, $zero, 0x2F2
    ctx->r14 = ADD32(0, 0X2F2);
    // 0x08001C98: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001CA0: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001CA4: jalr        $t9
    // 0x08001CA8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CA8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001CAC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001CB4: lui         $at, 0xC238
    ctx->r1 = S32(0XC238 << 16);
    // 0x08001CB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001CBC: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x08001CC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001CC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001CC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CCC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001CD0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001CD4: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001CD8: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001CDC: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001CE0: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001CE4: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001CE8: jalr        $t9
    // 0x08001CEC: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CEC: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001CF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001CFC: jalr        $t9
    // 0x08001D00: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001D00: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
    // 0x08001D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D0C: jr          $ra
    // 0x08001D10: nop

    TRACE_RETURN()
    return;
    // 0x08001D10: nop

;}
RECOMP_FUNC void func_08001128_6B0538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800112C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001138: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800113C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001140: jalr        $t9
    // 0x08001144: addiu       $a0, $zero, 0x353
    ctx->r4 = ADD32(0, 0X353);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001144: addiu       $a0, $zero, 0x353
    ctx->r4 = ADD32(0, 0X353);
    after_0:
    // 0x08001148: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1B5C) << 16);
    // 0x0800114C: addiu       $a1, $a1, 0x1B5C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1B5C));
    // 0x08001150: jal         0x08000F88
    // 0x08001154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_08000F88_6B0398(rdram, ctx);
        goto after_1;
    // 0x08001154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001158: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800115C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08001160: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001168: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800116C: jalr        $t9
    // 0x08001170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001178: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800117C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001180: jalr        $t9
    // 0x08001184: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001184: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_3:
    // 0x08001188: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800118C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001190: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x08001194: jalr        $t9
    // 0x08001198: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001198: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_4:
    // 0x0800119C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011A4: jr          $ra
    // 0x080011A8: nop

    TRACE_RETURN()
    return;
    // 0x080011A8: nop

;}
RECOMP_FUNC void func_08001E50_6B1260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001E58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001E5C: jal         0x08001A18
    // 0x08001E60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001E60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001E64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001E68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E6C: addiu       $t6, $zero, 0x2F1
    ctx->r14 = ADD32(0, 0X2F1);
    // 0x08001E70: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001E78: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001E7C: jalr        $t9
    // 0x08001E80: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E80: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001E84: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001E88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001E8C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08001E90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001E94: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x08001E98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001E9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001EA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001EA4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001EA8: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x08001EAC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08001EB0: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001EB4: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001EB8: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001EBC: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001EC0: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001EC4: jalr        $t9
    // 0x08001EC8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001EC8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001ECC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ED0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001ED4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001ED8: jalr        $t9
    // 0x08001EDC: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001EDC: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
    // 0x08001EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001EE8: jr          $ra
    // 0x08001EEC: nop

    TRACE_RETURN()
    return;
    // 0x08001EEC: nop

;}
RECOMP_FUNC void func_0800305C_6B246C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800305C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003060: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003068: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800306C: addiu       $t6, $zero, 0x3FD
    ctx->r14 = ADD32(0, 0X3FD);
    // 0x08003070: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003074: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003078: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800307C: lw          $a1, 0xD0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD0);
    // 0x08003080: jalr        $t9
    // 0x08003084: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003084: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003088: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800308C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003090: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08003094: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08003098: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800309C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080030A0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080030A4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080030A8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080030AC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080030B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080030B4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x080030B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080030BC: jalr        $t9
    // 0x080030C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080030C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080030C4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080030C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030CC: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x080030D0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x080030D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030D8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x080030DC: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x080030E0: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x080030E4: jalr        $t9
    // 0x080030E8: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080030E8: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_2:
    // 0x080030EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080030F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080030F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080030F8: jr          $ra
    // 0x080030FC: nop

    TRACE_RETURN()
    return;
    // 0x080030FC: nop

    // 0x08003100: jr          $ra
    // 0x08003104: nop

    TRACE_RETURN()
    return;
    // 0x08003104: nop

;}
RECOMP_FUNC void func_08000620_6AFA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000624: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800062C: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x08000630: jalr        $t9
    // 0x08000634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800063C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000640: jr          $ra
    // 0x08000644: nop

    TRACE_RETURN()
    return;
    // 0x08000644: nop

;}
RECOMP_FUNC void func_08001B5C_6B0F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B68: jal         0x08001A18
    // 0x08001B6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001B6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001B74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001B78: addiu       $t6, $zero, 0x2F3
    ctx->r14 = ADD32(0, 0X2F3);
    // 0x08001B7C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001B84: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001B88: jalr        $t9
    // 0x08001B8C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B8C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001B90: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001B9C: lui         $at, 0xC23C
    ctx->r1 = S32(0XC23C << 16);
    // 0x08001BA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001BA4: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x08001BA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001BAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BB0: addiu       $t8, $zero, 0x300
    ctx->r24 = ADD32(0, 0X300);
    // 0x08001BB4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BB8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001BBC: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    // 0x08001BC0: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001BC4: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001BC8: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    // 0x08001BCC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001BD0: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001BD4: jalr        $t9
    // 0x08001BD8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BD8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BE4: jr          $ra
    // 0x08001BE8: nop

    TRACE_RETURN()
    return;
    // 0x08001BE8: nop

;}
RECOMP_FUNC void func_08002814_6B1C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002818: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800281C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002820: addiu       $t9, $t9, -0x7018
    ctx->r25 = ADD32(ctx->r25, -0X7018);
    // 0x08002824: jalr        $t9
    // 0x08002828: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002828: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800282C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002830: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08002834: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002838: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x0800283C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002844: jr          $ra
    // 0x08002848: nop

    TRACE_RETURN()
    return;
    // 0x08002848: nop

;}
RECOMP_FUNC void func_08000BF8_6B0008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000C04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000C08: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x08000C0C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000C10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000C14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C18: beq         $v0, $at, L_08000C70
    if (ctx->r2 == ctx->r1) {
        // 0x08000C1C: sh          $t6, 0x5E($a0)
        MEM_H(0X5E, ctx->r4) = ctx->r14;
            goto L_08000C70;
    }
    // 0x08000C1C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000C20: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000C24: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    // 0x08000C28: bgez        $v0, L_08000C40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000C2C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000C40;
    }
    // 0x08000C2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000C30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000C34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000C38: nop

    // 0x08000C3C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08000C40:
    // 0x08000C40: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08000C44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000C48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C4C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C50: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000C54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000C58: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000C5C: jalr        $t9
    // 0x08000C60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C60: nop

    after_0:
    // 0x08000C64: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x08000C68: b           L_08000C8C
    // 0x08000C6C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
        goto L_08000C8C;
    // 0x08000C6C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
L_08000C70:
    // 0x08000C70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C74: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C7C: jalr        $t9
    // 0x08000C80: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C80: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    after_1:
    // 0x08000C84: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08000C88: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_08000C8C:
    // 0x08000C8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C90: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x08000C94: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000C98: sh          $t0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r8;
    // 0x08000C9C: jalr        $t9
    // 0x08000CA0: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000CA0: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_2:
    // 0x08000CA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0XBEC) << 16);
    // 0x08000CB0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000CB4: jalr        $t9
    // 0x08000CB8: addiu       $a0, $a0, 0xBEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XBEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CB8: addiu       $a0, $a0, 0xBEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XBEC));
    after_3:
    // 0x08000CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CC8: jr          $ra
    // 0x08000CCC: nop

    TRACE_RETURN()
    return;
    // 0x08000CCC: nop

;}
RECOMP_FUNC void func_08002DF4_6B2204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002E00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08002E04: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08002E08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002E0C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x08002E10: beq         $at, $zero, L_08003008
    if (ctx->r1 == 0) {
        // 0x08002E14: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08003008;
    }
    // 0x08002E14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08002E18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B64) << 16);
    // 0x08002E1C: addu        $at, $at, $t6
    gpr jr_addend_08002E24 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08002E20: lw          $t6, 0x3B64($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B64));
    // 0x08002E24: jr          $t6
    // 0x08002E28: nop

    switch (jr_addend_08002E24 >> 2) {
        case 0: goto L_08002E2C; break;
        case 1: goto L_08002EA4; break;
        case 2: goto L_08002F38; break;
        case 3: goto L_08002F80; break;
        case 4: goto L_08002FA8; break;
        case 5: goto L_08002FE4; break;
        default: switch_error(__func__, 0x08002E24, 0x08003B64);
    }
    // 0x08002E28: nop

L_08002E2C:
    // 0x08002E2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08002E30: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08002E34: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08002E38: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x08002E3C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08002E40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002E44: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x08002E48: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    // 0x08002E4C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08002E50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002E54: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x08002E58: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x08002E5C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x08002E60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002E64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08002E68: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    // 0x08002E6C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08002E70: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002E74: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002E78: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x08002E7C: jalr        $t9
    // 0x08002E80: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E80: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x08002E84: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002E88: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x08002E8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002E90: sw          $t1, -0x3320($at)
    MEM_W(-0X3320, ctx->r1) = ctx->r9;
    // 0x08002E94: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08002E98: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08002E9C: b           L_08003008
    // 0x08002EA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08003008;
    // 0x08002EA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08002EA4:
    // 0x08002EA4: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08002EA8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08002EAC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08002EB0: slti        $a0, $v1, 0x41
    ctx->r4 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x08002EB4: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x08002EB8: beq         $a0, $zero, L_08002EF8
    if (ctx->r4 == 0) {
        // 0x08002EBC: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_08002EF8;
    }
    // 0x08002EBC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08002EC0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x08002EC4: mfhi        $t5
    ctx->r13 = hi;
    // 0x08002EC8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x08002ECC: bne         $t5, $zero, L_08002F08
    if (ctx->r13 != 0) {
        // 0x08002ED0: lw          $t6, 0x34($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X34);
            goto L_08002F08;
    }
    // 0x08002ED0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x08002ED4: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x08002ED8: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x08002EDC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08002EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002EE4: jal         0x08003108
    // 0x08002EE8: lui         $a2, 0xC25C
    ctx->r6 = S32(0XC25C << 16);
    func_08003108_6B2518(rdram, ctx);
        goto after_1;
    // 0x08002EE8: lui         $a2, 0xC25C
    ctx->r6 = S32(0XC25C << 16);
    after_1:
    // 0x08002EEC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002EF0: b           L_08002F08
    // 0x08002EF4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
        goto L_08002F08;
    // 0x08002EF4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_08002EF8:
    // 0x08002EF8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08002EFC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08002F00: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08002F04: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_08002F08:
    // 0x08002F08: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08002F0C: bne         $v1, $at, L_08003008
    if (ctx->r3 != ctx->r1) {
        // 0x08002F10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003008;
    }
    // 0x08002F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F18: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002F1C: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x08002F20: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x08002F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002F28: jalr        $t9
    // 0x08002F2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002F2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002F30: b           L_0800300C
    // 0x08002F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800300C;
    // 0x08002F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002F38:
    // 0x08002F38: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08002F3C: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x08002F40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F44: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08002F48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x08002F4C: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08002F50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08002F54: sw          $t0, -0x4BF0($at)
    MEM_W(-0X4BF0, ctx->r1) = ctx->r8;
    // 0x08002F58: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08002F5C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08002F60: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    // 0x08002F64: jalr        $t9
    // 0x08002F68: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002F68: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    after_3:
    // 0x08002F6C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002F70: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08002F74: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002F78: b           L_08003008
    // 0x08002F7C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
        goto L_08003008;
    // 0x08002F7C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_08002F80:
    // 0x08002F80: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08002F84: lbu         $t3, 0x10($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X10);
    // 0x08002F88: beql        $t3, $zero, L_0800300C
    if (ctx->r11 == 0) {
        // 0x08002F8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800300C;
    }
    goto skip_0;
    // 0x08002F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08002F90: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08002F94: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x08002F98: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08002F9C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08002FA0: b           L_08003008
    // 0x08002FA4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_08003008;
    // 0x08002FA4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_08002FA8:
    // 0x08002FA8: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08002FAC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08002FB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08002FB4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002FB8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x08002FBC: bne         $v1, $zero, L_08003008
    if (ctx->r3 != 0) {
        // 0x08002FC0: sw          $t7, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r15;
            goto L_08003008;
    }
    // 0x08002FC0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x08002FC4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002FC8: jalr        $t9
    // 0x08002FCC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002FCC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x08002FD0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002FD4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08002FD8: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08002FDC: b           L_08003008
    // 0x08002FE0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_08003008;
    // 0x08002FE0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_08002FE4:
    // 0x08002FE4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002FE8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08002FEC: jalr        $t9
    // 0x08002FF0: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002FF0: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    after_5:
    // 0x08002FF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X295C) << 16);
    // 0x08003000: jalr        $t9
    // 0x08003004: addiu       $a0, $a0, 0x295C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X295C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003004: addiu       $a0, $a0, 0x295C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X295C));
    after_6:
L_08003008:
    // 0x08003008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800300C:
    // 0x0800300C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003010: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003014: jr          $ra
    // 0x08003018: nop

    TRACE_RETURN()
    return;
    // 0x08003018: nop

;}
RECOMP_FUNC void func_080036B0_6B2AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080036B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080036B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080036BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080036C0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080036C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080036C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080036CC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080036D0: bne         $v0, $zero, L_08003754
    if (ctx->r2 != 0) {
        // 0x080036D4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003754;
    }
    // 0x080036D4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080036D8: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x080036DC: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x080036E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080036E4: addiu       $t8, $zero, 0x22A
    ctx->r24 = ADD32(0, 0X22A);
    // 0x080036E8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080036EC: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080036F0: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080036F4: jalr        $t9
    // 0x080036F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x080036FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003700: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08003704: jalr        $t9
    // 0x08003708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800370C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003710: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003718: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800371C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003720: jalr        $t9
    // 0x08003724: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003724: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08003728: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800372C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08003730: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x08003734: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08003738: jalr        $t9
    // 0x0800373C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800373C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08003740: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003744: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003748: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X3768) << 16);
    // 0x0800374C: jalr        $t9
    // 0x08003750: addiu       $a0, $a0, 0x3768
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3768));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003750: addiu       $a0, $a0, 0x3768
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3768));
    after_4:
L_08003754:
    // 0x08003754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800375C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003760: jr          $ra
    // 0x08003764: nop

    TRACE_RETURN()
    return;
    // 0x08003764: nop

;}
RECOMP_FUNC void func_08003108_6B2518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003108: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0800310C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x08003110: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08003114: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x08003118: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x0800311C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08003120: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08003124: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x08003128: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x0800312C: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x08003130: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08003134: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08003138: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x0800313C: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08003140: lui         $fp, 0x800
    ctx->r30 = S32(RELOC_HI16(18, 0X3638) << 16);
    // 0x08003144: mtc1        $a1, $f30
    ctx->f30.u32l = ctx->r5;
    // 0x08003148: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x0800314C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08003150: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x08003154: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x08003158: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x0800315C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x08003160: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x08003164: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x08003168: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x0800316C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x08003170: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x08003174: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x08003178: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x0800317C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08003180: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x08003184: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x08003188: addiu       $fp, $fp, 0x3638
    ctx->r30 = ADD32(ctx->r30, (int16_t)RELOC_LO16(18, 0X3638));
    // 0x0800318C: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x08003190: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08003194: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
L_08003198:
    // 0x08003198: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x0800319C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x080031A0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x080031A4: jalr        $v0
    // 0x080031A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080031A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080031AC: beq         $v0, $zero, L_080032B4
    if (ctx->r2 == 0) {
        // 0x080031B0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_080032B4;
    }
    // 0x080031B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x080031B4: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x080031B8: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x080031BC: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x080031C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080031C4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080031C8: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080031CC: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x080031D0: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x080031D4: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x080031D8: addiu       $s7, $s7, 0x3E10
    ctx->r23 = ADD32(ctx->r23, 0X3E10);
    // 0x080031DC: addiu       $s6, $s6, 0x3EA0
    ctx->r22 = ADD32(ctx->r22, 0X3EA0);
    // 0x080031E0: addiu       $s4, $s4, -0x61F8
    ctx->r20 = ADD32(ctx->r20, -0X61F8);
    // 0x080031E4: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x080031E8: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x080031EC: sll         $s5, $s3, 7
    ctx->r21 = S32(ctx->r19 << 7);
    // 0x080031F0: cvt.d.s     $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f20.d = CVT_D_S(ctx->f30.fl);
    // 0x080031F4: jalr        $t9
    // 0x080031F8: cvt.d.s     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f24.d = CVT_D_S(ctx->f4.fl);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031F8: cvt.d.s     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f24.d = CVT_D_S(ctx->f4.fl);
    after_1:
    // 0x080031FC: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08003200: lw          $s2, 0x18($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X18);
    // 0x08003204: jalr        $s0
    // 0x08003208: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08003208: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x0800320C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08003210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08003214: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003218: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x0800321C: div.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f22.d);
    // 0x08003220: add.d       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = ctx->f16.d + ctx->f28.d;
    // 0x08003224: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08003228: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800322C: jalr        $s4
    // 0x08003230: nop

    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_3;
    // 0x08003230: nop

    after_3:
    // 0x08003234: andi        $s0, $s5, 0xFFFF
    ctx->r16 = ctx->r21 & 0XFFFF;
    // 0x08003238: jalr        $s6
    // 0x0800323C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_4;
    // 0x0800323C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_4:
    // 0x08003240: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08003244: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x08003248: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x0800324C: add.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = ctx->f8.d + ctx->f20.d;
    // 0x08003250: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003254: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
    // 0x08003258: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x0800325C: jalr        $s7
    // 0x08003260: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_5;
    // 0x08003260: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    after_5:
    // 0x08003264: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08003268: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x0800326C: mul.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x08003270: add.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = ctx->f6.d + ctx->f24.d;
    // 0x08003274: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08003278: jalr        $s6
    // 0x0800327C: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_6;
    // 0x0800327C: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    after_6:
    // 0x08003280: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08003284: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x08003288: mul.d       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f26.d);
    // 0x0800328C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08003290: jalr        $s7
    // 0x08003294: swc1        $f4, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_7;
    // 0x08003294: swc1        $f4, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f4.u32l;
    after_7:
    // 0x08003298: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x0800329C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x080032A0: mul.d       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f26.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f26.d);
    // 0x080032A4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080032A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080032AC: bne         $s3, $at, L_08003198
    if (ctx->r19 != ctx->r1) {
        // 0x080032B0: swc1        $f10, 0x80($s1)
        MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
            goto L_08003198;
    }
    // 0x080032B0: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
L_080032B4:
    // 0x080032B4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x080032B8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x080032BC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x080032C0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x080032C4: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x080032C8: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x080032CC: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x080032D0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x080032D4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x080032D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x080032DC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x080032E0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x080032E4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x080032E8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x080032EC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x080032F0: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x080032F4: jr          $ra
    // 0x080032F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x080032F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_08001DB0_6B11C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001DBC: jal         0x08001A18
    // 0x08001DC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001DC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001DC8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DCC: addiu       $t6, $zero, 0x2F2
    ctx->r14 = ADD32(0, 0X2F2);
    // 0x08001DD0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001DD8: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001DDC: jalr        $t9
    // 0x08001DE0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001DE0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001DE4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001DE8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001DEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001DF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001DF4: lui         $at, 0xC210
    ctx->r1 = S32(0XC210 << 16);
    // 0x08001DF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001DFC: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x08001E00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001E04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E08: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001E0C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001E10: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001E14: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001E18: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001E1C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001E20: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001E24: jalr        $t9
    // 0x08001E28: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001E28: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001E2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001E38: jalr        $t9
    // 0x08001E3C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E3C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
    // 0x08001E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001E48: jr          $ra
    // 0x08001E4C: nop

    TRACE_RETURN()
    return;
    // 0x08001E4C: nop

;}
RECOMP_FUNC void func_08000BEC_6AFFFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000BF0: jr          $ra
    // 0x08000BF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000BF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800295C_6B1D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800295C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002960: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800296C: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08002970: ori         $t6, $t6, 0x220
    ctx->r14 = ctx->r14 | 0X220;
    // 0x08002974: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002978: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800297C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002980: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08002984: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x08002988: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800298C: jalr        $t9
    // 0x08002990: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002990: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    after_0:
    // 0x08002994: beq         $v0, $zero, L_080029E8
    if (ctx->r2 == 0) {
        // 0x08002998: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080029E8;
    }
    // 0x08002998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800299C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x080029A0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080029A4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x080029A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080029AC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080029B0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080029B4: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080029B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080029C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080029C4: jalr        $t9
    // 0x080029C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080029C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080029CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2DF4) << 16);
    // 0x080029D8: jalr        $t9
    // 0x080029DC: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2DF4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080029DC: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2DF4));
    after_2:
    // 0x080029E0: b           L_08002A28
    // 0x080029E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002A28;
    // 0x080029E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080029E8:
    // 0x080029E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080029EC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080029F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080029F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080029F8: jalr        $t9
    // 0x080029FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080029FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08002A00: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A04: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08002A08: jalr        $t9
    // 0x08002A0C: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002A0C: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    after_4:
    // 0x08002A10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A18: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2A38) << 16);
    // 0x08002A1C: jalr        $t9
    // 0x08002A20: addiu       $a0, $a0, 0x2A38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2A38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002A20: addiu       $a0, $a0, 0x2A38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2A38));
    after_5:
    // 0x08002A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002A28:
    // 0x08002A28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002A30: jr          $ra
    // 0x08002A34: nop

    TRACE_RETURN()
    return;
    // 0x08002A34: nop

;}
RECOMP_FUNC void func_0800260C_6B1A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800260C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08002610: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08002614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002618: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800261C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002620: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002624: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x08002628: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x0800262C: jalr        $t9
    // 0x08002630: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002630: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x08002634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800263C: jr          $ra
    // 0x08002640: nop

    TRACE_RETURN()
    return;
    // 0x08002640: nop

;}
RECOMP_FUNC void func_0800176C_6B0B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800176C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001770: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001778: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800177C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1D14) << 16);
    // 0x08001780: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001784: jal         0x08000F88
    // 0x08001788: addiu       $a1, $a1, 0x1D14
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1D14));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x08001788: addiu       $a1, $a1, 0x1D14
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1D14));
    after_0:
    // 0x0800178C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001790: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08001794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800179C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080017A0: jalr        $t9
    // 0x080017A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080017A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017AC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080017B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017B4: jalr        $t9
    // 0x080017B8: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080017B8: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x080017BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080017C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080017C4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x080017C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080017CC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x080017D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080017D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080017D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080017DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080017E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X181C) << 16);
    // 0x080017EC: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X181C));
    // 0x080017F0: swc1        $f4, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f4.u32l;
    // 0x080017F4: swc1        $f8, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f8.u32l;
    // 0x080017F8: swc1        $f10, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f10.u32l;
    // 0x080017FC: swc1        $f6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f6.u32l;
    // 0x08001800: jalr        $t9
    // 0x08001804: swc1        $f16, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001804: swc1        $f16, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x08001808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800180C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001814: jr          $ra
    // 0x08001818: nop

    TRACE_RETURN()
    return;
    // 0x08001818: nop

;}
RECOMP_FUNC void func_08003378_6B2788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800337C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003384: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800338C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003390: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003394: bne         $v0, $zero, L_08003424
    if (ctx->r2 != 0) {
        // 0x08003398: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003424;
    }
    // 0x08003398: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800339C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080033A0: addiu       $t9, $t9, -0xC28
    ctx->r25 = ADD32(ctx->r25, -0XC28);
    // 0x080033A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080033A8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080033AC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x080033B0: jalr        $t9
    // 0x080033B4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033B4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x080033B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080033BC: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x080033C0: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x080033C4: addiu       $t0, $zero, 0xFC
    ctx->r8 = ADD32(0, 0XFC);
    // 0x080033C8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080033CC: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x080033D0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080033D4: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
    // 0x080033D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080033DC: jalr        $t9
    // 0x080033E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080033E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x080033E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080033E8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080033EC: jalr        $t9
    // 0x080033F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080033F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080033F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080033F8: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080033FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003404: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x08003408: jalr        $t9
    // 0x0800340C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800340C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08003410: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003414: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003418: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X3438) << 16);
    // 0x0800341C: jalr        $t9
    // 0x08003420: addiu       $a0, $a0, 0x3438
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3438));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003420: addiu       $a0, $a0, 0x3438
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3438));
    after_4:
L_08003424:
    // 0x08003424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800342C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003430: jr          $ra
    // 0x08003434: nop

    TRACE_RETURN()
    return;
    // 0x08003434: nop

;}
RECOMP_FUNC void func_08001870_6B0C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001870: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001874: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001878: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800187C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001880: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001884: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001888: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x0800188C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001890: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x08001894: lui         $a3, 0x4234
    ctx->r7 = S32(0X4234 << 16);
    // 0x08001898: jalr        $t9
    // 0x0800189C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800189C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x080018A0: bne         $v0, $zero, L_080018B8
    if (ctx->r2 != 0) {
        // 0x080018A4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
            goto L_080018B8;
    }
    // 0x080018A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x080018A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018B0: jalr        $t9
    // 0x080018B4: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018B4: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_1:
L_080018B8:
    // 0x080018B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080018BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080018C0: jr          $ra
    // 0x080018C4: nop

    TRACE_RETURN()
    return;
    // 0x080018C4: nop

;}
RECOMP_FUNC void func_0800011C_6B30BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800011C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000120: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000124: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800012C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000130: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(19, 0X150) << 16);
    // 0x08000134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000138: jalr        $t9
    // 0x0800013C: addiu       $a0, $a0, 0x150
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X150));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800013C: addiu       $a0, $a0, 0x150
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X150));
    after_0:
    // 0x08000140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000148: jr          $ra
    // 0x0800014C: nop

    TRACE_RETURN()
    return;
    // 0x0800014C: nop

;}
RECOMP_FUNC void func_08000150_6B30F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000150: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000154: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x08000158: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800015C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x08000160: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x08000164: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x08000168: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x0800016C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08000170: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08000174: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x08000178: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800017C: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08000180: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x08000184: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000188: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x0800018C: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08000190: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08000194: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08000198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800019C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x080001A0: lbu         $v1, 0xE9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE9);
    // 0x080001A4: addiu       $s3, $s3, -0x7840
    ctx->r19 = ADD32(ctx->r19, -0X7840);
    // 0x080001A8: addiu       $s2, $s2, -0x2218
    ctx->r18 = ADD32(ctx->r18, -0X2218);
L_080001AC:
    // 0x080001AC: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x080001B0: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x080001B4: mflo        $t7
    ctx->r15 = lo;
    // 0x080001B8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x080001BC: lw          $t0, 0xD4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD4);
    // 0x080001C0: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080001C4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080001C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x080001CC: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x080001D0: lw          $a1, -0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, -0X4);
    // 0x080001D4: bne         $v1, $zero, L_080001E0
    if (ctx->r3 != 0) {
        // 0x080001D8: nop
    
            goto L_080001E0;
    }
    // 0x080001D8: nop

    // 0x080001DC: break       7
    do_break(134218204);
L_080001E0:
    // 0x080001E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080001E4: bne         $v1, $at, L_080001F8
    if (ctx->r3 != ctx->r1) {
        // 0x080001E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080001F8;
    }
    // 0x080001E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080001EC: bne         $t6, $at, L_080001F8
    if (ctx->r14 != ctx->r1) {
        // 0x080001F0: nop
    
            goto L_080001F8;
    }
    // 0x080001F0: nop

    // 0x080001F4: break       6
    do_break(134218228);
L_080001F8:
    // 0x080001F8: mflo        $v0
    ctx->r2 = lo;
    // 0x080001FC: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x08000200: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x08000204: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08000208: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x0800020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000210: jalr        $s2
    // 0x08000214: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x08000214: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x08000218: lbu         $t3, 0xE8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE8);
    // 0x0800021C: lbu         $v1, 0xE9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE9);
    // 0x08000220: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000224: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000228: bne         $s1, $v1, L_080001AC
    if (ctx->r17 != ctx->r3) {
        // 0x0800022C: sb          $t4, 0xE8($s0)
        MEM_B(0XE8, ctx->r16) = ctx->r12;
            goto L_080001AC;
    }
    // 0x0800022C: sb          $t4, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = ctx->r12;
    // 0x08000230: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000234: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000238: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(19, 0X268) << 16);
    // 0x0800023C: jalr        $t9
    // 0x08000240: addiu       $a0, $a0, 0x268
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X268));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000240: addiu       $a0, $a0, 0x268
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(19, 0X268));
    after_1:
    // 0x08000244: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x08000248: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0800024C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08000250: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x08000254: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x08000258: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x0800025C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x08000260: jr          $ra
    // 0x08000264: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08000264: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
