#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08006048_6C5798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006048: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0800604C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08006050: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08006054: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08006058: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x0800605C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08006060: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08006064: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08006068: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x0800606C: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x08006070: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08006074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006078: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x0800607C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08006080: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x08006084: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08006088: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x0800608C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08006090: lw          $t3, 0x40($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X40);
    // 0x08006094: lui         $t5, 0x900
    ctx->r13 = S32(0X900 << 16);
    // 0x08006098: addiu       $t5, $t5, 0x4000
    ctx->r13 = ADD32(ctx->r13, 0X4000);
    // 0x0800609C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x080060A0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080060A4: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x080060A8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080060AC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080060B0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080060B4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x080060B8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x080060BC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080060C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080060C4: lbu         $t0, 0xE0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE0);
    // 0x080060C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080060CC: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080060D0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x080060D4: lbu         $t1, 0xE1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE1);
    // 0x080060D8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x080060DC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x080060E0: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x080060E4: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x080060E8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x080060EC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x080060F0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x080060F4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x080060F8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x080060FC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08006100: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08006104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800610C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006110: jalr        $t9
    // 0x08006114: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006114: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08006118: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0800611C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08006120: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08006124: jr          $ra
    // 0x08006128: nop

    TRACE_RETURN()
    return;
    // 0x08006128: nop

;}
RECOMP_FUNC void func_0800624C_6C599C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800624C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08006250: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006254: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08006258: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0800625C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08006260: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08006264: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08006268: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x0800626C: bne         $t6, $zero, L_080062FC
    if (ctx->r14 != 0) {
        // 0x08006270: lui         $t7, 0x8020
        ctx->r15 = S32(0X8020 << 16);
            goto L_080062FC;
    }
    // 0x08006270: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08006274: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006278: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x0800627C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08006280: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08006284: jalr        $t9
    // 0x08006288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800628C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08006290: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x08006294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006298: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x0800629C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080062A0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080062A4: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    // 0x080062A8: swc1        $f0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f0.u32l;
    // 0x080062AC: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x080062B0: jalr        $t9
    // 0x080062B4: swc1        $f4, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080062B4: swc1        $f4, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f4.u32l;
    after_1:
    // 0x080062B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080062BC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080062C0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X6778) << 16);
    // 0x080062C4: addiu       $a1, $a1, 0x6778
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X6778));
    // 0x080062C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080062CC: jalr        $t9
    // 0x080062D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080062D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080062D4: beq         $v0, $zero, L_080062FC
    if (ctx->r2 == 0) {
        // 0x080062D8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080062FC;
    }
    // 0x080062D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080062DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080062E0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080062E4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080062E8: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080062EC: jalr        $t9
    // 0x080062F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080062F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x080062F4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080062F8: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_080062FC:
    // 0x080062FC: lbu         $t0, 0xD0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD0);
    // 0x08006300: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08006304: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08006308: bne         $t0, $at, L_080063B0
    if (ctx->r8 != ctx->r1) {
        // 0x0800630C: ori         $t1, $t1, 0x6E1
        ctx->r9 = ctx->r9 | 0X6E1;
            goto L_080063B0;
    }
    // 0x0800630C: ori         $t1, $t1, 0x6E1
    ctx->r9 = ctx->r9 | 0X6E1;
    // 0x08006310: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x08006314: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006318: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
    // 0x0800631C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08006320: addiu       $t2, $t2, 0x71A8
    ctx->r10 = ADD32(ctx->r10, 0X71A8);
    // 0x08006324: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(21, 0X6778) << 16);
    // 0x08006328: addiu       $s0, $s0, 0x6778
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(21, 0X6778));
    // 0x0800632C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x08006330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006334: jalr        $t9
    // 0x08006338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08006338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x0800633C: lui         $at, 0xC342
    ctx->r1 = S32(0XC342 << 16);
    // 0x08006340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08006344: lui         $at, 0xC22C
    ctx->r1 = S32(0XC22C << 16);
    // 0x08006348: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800634C: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08006350: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08006354: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08006358: addiu       $t3, $zero, 0x25
    ctx->r11 = ADD32(0, 0X25);
    // 0x0800635C: addiu       $t4, $zero, 0x300
    ctx->r12 = ADD32(0, 0X300);
    // 0x08006360: sh          $t4, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r12;
    // 0x08006364: sh          $t3, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r11;
    // 0x08006368: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x0800636C: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x08006370: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    // 0x08006374: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08006378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800637C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08006380: jalr        $t9
    // 0x08006384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08006388: beq         $v0, $zero, L_080063B0
    if (ctx->r2 == 0) {
        // 0x0800638C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080063B0;
    }
    // 0x0800638C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006390: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006394: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x08006398: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800639C: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x080063A0: jalr        $t9
    // 0x080063A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080063A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x080063A8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080063AC: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_080063B0:
    // 0x080063B0: lbu         $t6, 0xD0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XD0);
    // 0x080063B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080063B8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080063BC: bne         $t6, $at, L_08006464
    if (ctx->r14 != ctx->r1) {
        // 0x080063C0: ori         $t7, $t7, 0x6E1
        ctx->r15 = ctx->r15 | 0X6E1;
            goto L_08006464;
    }
    // 0x080063C0: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x080063C4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x080063C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080063CC: sw          $t7, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r15;
    // 0x080063D0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080063D4: addiu       $t8, $t8, 0x71A8
    ctx->r24 = ADD32(ctx->r24, 0X71A8);
    // 0x080063D8: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(21, 0X6778) << 16);
    // 0x080063DC: addiu       $s0, $s0, 0x6778
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(21, 0X6778));
    // 0x080063E0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080063E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080063E8: jalr        $t9
    // 0x080063EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080063EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x080063F0: lui         $at, 0xC339
    ctx->r1 = S32(0XC339 << 16);
    // 0x080063F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080063F8: lui         $at, 0xC22C
    ctx->r1 = S32(0XC22C << 16);
    // 0x080063FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08006400: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08006404: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08006408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800640C: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x08006410: addiu       $t1, $zero, 0x300
    ctx->r9 = ADD32(0, 0X300);
    // 0x08006414: sh          $t1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r9;
    // 0x08006418: sh          $t0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r8;
    // 0x0800641C: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
    // 0x08006420: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x08006424: swc1        $f4, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f4.u32l;
    // 0x08006428: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800642C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006430: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08006434: jalr        $t9
    // 0x08006438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08006438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x0800643C: beq         $v0, $zero, L_08006464
    if (ctx->r2 == 0) {
        // 0x08006440: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006464;
    }
    // 0x08006440: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08006444: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006448: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x0800644C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08006450: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08006454: jalr        $t9
    // 0x08006458: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08006458: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_9:
    // 0x0800645C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006460: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006464:
    // 0x08006464: lbu         $t3, 0xD0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XD0);
    // 0x08006468: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800646C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08006470: bne         $t3, $at, L_08006518
    if (ctx->r11 != ctx->r1) {
        // 0x08006474: ori         $t4, $t4, 0x6E1
        ctx->r12 = ctx->r12 | 0X6E1;
            goto L_08006518;
    }
    // 0x08006474: ori         $t4, $t4, 0x6E1
    ctx->r12 = ctx->r12 | 0X6E1;
    // 0x08006478: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x0800647C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006480: sw          $t4, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r12;
    // 0x08006484: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08006488: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800648C: addiu       $t5, $t5, 0x71A8
    ctx->r13 = ADD32(ctx->r13, 0X71A8);
    // 0x08006490: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(21, 0X6778) << 16);
    // 0x08006494: addiu       $s0, $s0, 0x6778
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(21, 0X6778));
    // 0x08006498: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x0800649C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080064A0: jalr        $t9
    // 0x080064A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080064A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x080064A8: lui         $at, 0x432B
    ctx->r1 = S32(0X432B << 16);
    // 0x080064AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080064B0: lui         $at, 0xC22C
    ctx->r1 = S32(0XC22C << 16);
    // 0x080064B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080064B8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x080064BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080064C0: addiu       $t6, $zero, 0x3E4
    ctx->r14 = ADD32(0, 0X3E4);
    // 0x080064C4: addiu       $t7, $zero, 0x300
    ctx->r15 = ADD32(0, 0X300);
    // 0x080064C8: sh          $t7, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r15;
    // 0x080064CC: sh          $t6, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r14;
    // 0x080064D0: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x080064D4: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x080064D8: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    // 0x080064DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080064E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080064E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080064E8: jalr        $t9
    // 0x080064EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080064EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x080064F0: beq         $v0, $zero, L_08006518
    if (ctx->r2 == 0) {
        // 0x080064F4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08006518;
    }
    // 0x080064F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080064F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080064FC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08006500: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08006504: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08006508: jalr        $t9
    // 0x0800650C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800650C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_12:
    // 0x08006510: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08006514: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_08006518:
    // 0x08006518: lbu         $t0, 0xD0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XD0);
    // 0x0800651C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08006520: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08006524: bne         $t0, $at, L_080065D0
    if (ctx->r8 != ctx->r1) {
        // 0x08006528: ori         $t1, $t1, 0x6E1
        ctx->r9 = ctx->r9 | 0X6E1;
            goto L_080065D0;
    }
    // 0x08006528: ori         $t1, $t1, 0x6E1
    ctx->r9 = ctx->r9 | 0X6E1;
    // 0x0800652C: lui         $at, 0x42E2
    ctx->r1 = S32(0X42E2 << 16);
    // 0x08006530: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08006534: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08006538: lui         $at, 0xC22C
    ctx->r1 = S32(0XC22C << 16);
    // 0x0800653C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08006540: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
    // 0x08006544: sb          $t2, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r10;
    // 0x08006548: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x0800654C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006550: addiu       $t3, $zero, 0x3E4
    ctx->r11 = ADD32(0, 0X3E4);
    // 0x08006554: addiu       $t4, $zero, 0x300
    ctx->r12 = ADD32(0, 0X300);
    // 0x08006558: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x0800655C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006560: sh          $t4, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r12;
    // 0x08006564: sh          $t3, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r11;
    // 0x08006568: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800656C: addiu       $t5, $t5, 0x71A8
    ctx->r13 = ADD32(ctx->r13, 0X71A8);
    // 0x08006570: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(21, 0X6778) << 16);
    // 0x08006574: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
    // 0x08006578: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x0800657C: swc1        $f4, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f4.u32l;
    // 0x08006580: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x08006584: addiu       $s0, $s0, 0x6778
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(21, 0X6778));
    // 0x08006588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800658C: jalr        $t9
    // 0x08006590: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08006590: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x08006594: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08006598: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800659C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080065A0: jalr        $t9
    // 0x080065A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080065A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x080065A8: beq         $v0, $zero, L_080065D0
    if (ctx->r2 == 0) {
        // 0x080065AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080065D0;
    }
    // 0x080065AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080065B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080065B4: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x080065B8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080065BC: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x080065C0: jalr        $t9
    // 0x080065C4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080065C4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_15:
    // 0x080065C8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080065CC: sw          $s1, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r17;
L_080065D0:
    // 0x080065D0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A58) << 16);
    // 0x080065D4: lwc1        $f0, -0x75A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A58));
    // 0x080065D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080065DC: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x080065E0: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x080065E4: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x080065E8: jalr        $t9
    // 0x080065EC: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080065EC: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    after_16:
    // 0x080065F0: bne         $v0, $zero, L_08006610
    if (ctx->r2 != 0) {
        // 0x080065F4: sw          $v0, 0xE4($s1)
        MEM_W(0XE4, ctx->r17) = ctx->r2;
            goto L_08006610;
    }
    // 0x080065F4: sw          $v0, 0xE4($s1)
    MEM_W(0XE4, ctx->r17) = ctx->r2;
    // 0x080065F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080065FC: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08006600: jalr        $t9
    // 0x08006604: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08006604: nop

    after_17:
    // 0x08006608: b           L_08006638
    // 0x0800660C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08006638;
    // 0x0800660C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08006610:
    // 0x08006610: lw          $t7, 0xE4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XE4);
    // 0x08006614: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08006618: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800661C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006620: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X664C) << 16);
    // 0x08006624: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08006628: sw          $t8, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r24;
    // 0x0800662C: jalr        $t9
    // 0x08006630: addiu       $a0, $a0, 0x664C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X664C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08006630: addiu       $a0, $a0, 0x664C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X664C));
    after_18:
    // 0x08006634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08006638:
    // 0x08006638: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800663C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08006640: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08006644: jr          $ra
    // 0x08006648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08006648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08002ACC_6C221C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002AD4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002AD8: addiu       $t6, $zero, 0x1BB
    ctx->r14 = ADD32(0, 0X1BB);
    // 0x08002ADC: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08002AE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002AE4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08002AE8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08002AEC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002AF0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002AF4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08002AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002AFC: jalr        $t9
    // 0x08002B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08002B04: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89F8) << 16);
    // 0x08002B08: lwc1        $f0, -0x7608($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89F8));
    // 0x08002B0C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002B10: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08002B14: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08002B18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B1C: sb          $t8, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r24;
    // 0x08002B20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2B4C) << 16);
    // 0x08002B28: addiu       $a0, $a0, 0x2B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2B4C));
    // 0x08002B2C: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08002B30: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002B34: jalr        $t9
    // 0x08002B38: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B38: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x08002B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B44: jr          $ra
    // 0x08002B48: nop

    TRACE_RETURN()
    return;
    // 0x08002B48: nop

;}
RECOMP_FUNC void func_0800178C_6C0EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800178C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001790: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001794: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001798: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800179C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080017A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080017A4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080017A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080017AC: jalr        $t9
    // 0x080017B0: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017B0: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    after_0:
    // 0x080017B4: beq         $v0, $zero, L_080017CC
    if (ctx->r2 == 0) {
        // 0x080017B8: addiu       $t8, $zero, 0x3D3
        ctx->r24 = ADD32(0, 0X3D3);
            goto L_080017CC;
    }
    // 0x080017B8: addiu       $t8, $zero, 0x3D3
    ctx->r24 = ADD32(0, 0X3D3);
    // 0x080017BC: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x080017C0: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x080017C4: b           L_08001860
    // 0x080017C8: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_08001860;
    // 0x080017C8: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_080017CC:
    // 0x080017CC: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x080017D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017D4: ori         $t0, $t0, 0x6E1
    ctx->r8 = ctx->r8 | 0X6E1;
    // 0x080017D8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x080017DC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080017E0: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x080017E4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080017E8: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x080017EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017F0: jalr        $t9
    // 0x080017F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080017F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017FC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001804: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08001808: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x0800180C: jalr        $t9
    // 0x08001810: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001810: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001814: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89CC) << 16);
    // 0x08001818: lwc1        $f0, -0x7634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89CC));
    // 0x0800181C: lui         $at, 0xC2C6
    ctx->r1 = S32(0XC2C6 << 16);
    // 0x08001820: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001824: lui         $at, 0xC26C
    ctx->r1 = S32(0XC26C << 16);
    // 0x08001828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800182C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08001830: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001834: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001838: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800183C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1874) << 16);
    // 0x08001840: addiu       $a0, $a0, 0x1874
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1874));
    // 0x08001844: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001848: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x0800184C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001850: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x08001854: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x08001858: jalr        $t9
    // 0x0800185C: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800185C: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_3:
L_08001860:
    // 0x08001860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001864: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001868: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x0800186C: jr          $ra
    // 0x08001870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08003110_6C2860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003114: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800311C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08003120: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003124: jalr        $t9
    // 0x08003128: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003128: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800312C: bne         $v0, $zero, L_08003154
    if (ctx->r2 != 0) {
        // 0x08003130: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08003154;
    }
    // 0x08003130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003134: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08003138: jalr        $t9
    // 0x0800313C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800313C: nop

    after_1:
    // 0x08003140: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003144: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003148: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2E5C) << 16);
    // 0x0800314C: jalr        $t9
    // 0x08003150: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003150: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    after_2:
L_08003154:
    // 0x08003154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800315C: jr          $ra
    // 0x08003160: nop

    TRACE_RETURN()
    return;
    // 0x08003160: nop

;}
RECOMP_FUNC void func_080004F8_6BFC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080004FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000504: lwc1        $f6, 0xDC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08000508: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800050C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000510: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000514: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x08000518: nop

    // 0x0800051C: bc1tl       L_08000558
    if (c1cs) {
        // 0x08000520: lw          $t8, 0x68($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X68);
            goto L_08000558;
    }
    goto skip_0;
    // 0x08000520: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08000524: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000528: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800052C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000530: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000534: bne         $t7, $zero, L_08000554
    if (ctx->r15 != 0) {
        // 0x08000538: addiu       $a0, $zero, 0x2A0
        ctx->r4 = ADD32(0, 0X2A0);
            goto L_08000554;
    }
    // 0x08000538: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x0800053C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000540: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000544: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08000548: jalr        $t9
    // 0x0800054C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800054C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000550: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_08000554:
    // 0x08000554: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
L_08000558:
    // 0x08000558: lui         $t5, 0x8280
    ctx->r13 = S32(0X8280 << 16);
    // 0x0800055C: addiu       $t1, $zero, 0x220
    ctx->r9 = ADD32(0, 0X220);
    // 0x08000560: sll         $t0, $t8, 15
    ctx->r8 = S32(ctx->r24 << 15);
    // 0x08000564: bgez        $t0, L_08000618
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000568: ori         $t5, $t5, 0x320
        ctx->r13 = ctx->r13 | 0X320;
            goto L_08000618;
    }
    // 0x08000568: ori         $t5, $t5, 0x320
    ctx->r13 = ctx->r13 | 0X320;
    // 0x0800056C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000570: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08000574: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08000578: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x0800057C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x08000580: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x08000584: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x08000588: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x0800058C: mfhi        $t4
    ctx->r12 = hi;
    // 0x08000590: bnel        $t4, $zero, L_08000600
    if (ctx->r12 != 0) {
        // 0x08000594: lwc1        $f8, 0x8($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
            goto L_08000600;
    }
    goto skip_1;
    // 0x08000594: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    skip_1:
    // 0x08000598: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x0800059C: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x080005A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080005A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005A8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x080005AC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080005B0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080005B4: addiu       $a0, $zero, 0x270
    ctx->r4 = ADD32(0, 0X270);
    // 0x080005B8: bc1f        L_080005F0
    if (!c1cs) {
        // 0x080005BC: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_080005F0;
    }
    // 0x080005BC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080005C0: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080005C4: lwc1        $f18, 0xD4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x080005C8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x080005CC: nop

    // 0x080005D0: bc1f        L_080005F0
    if (!c1cs) {
        // 0x080005D4: nop
    
            goto L_080005F0;
    }
    // 0x080005D4: nop

    // 0x080005D8: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x080005DC: lwc1        $f6, 0xD8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x080005E0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x080005E4: nop

    // 0x080005E8: bc1tl       L_08000600
    if (c1cs) {
        // 0x080005EC: lwc1        $f8, 0x8($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
            goto L_08000600;
    }
    goto skip_2;
    // 0x080005EC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    skip_2:
L_080005F0:
    // 0x080005F0: jalr        $t9
    // 0x080005F4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005F4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x080005F8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080005FC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
L_08000600:
    // 0x08000600: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    // 0x08000604: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08000608: swc1        $f10, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f10.u32l;
    // 0x0800060C: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08000610: b           L_0800061C
    // 0x08000614: swc1        $f16, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f16.u32l;
        goto L_0800061C;
    // 0x08000614: swc1        $f16, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f16.u32l;
L_08000618:
    // 0x08000618: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
L_0800061C:
    // 0x0800061C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000620: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000624: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000628: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x0800062C: bgez        $t7, L_08000640
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08000630: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000640;
    }
    // 0x08000630: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000638: nop

    // 0x0800063C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_08000640:
    // 0x08000640: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
    // 0x08000644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000648: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800064C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000650: jr          $ra
    // 0x08000654: nop

    TRACE_RETURN()
    return;
    // 0x08000654: nop

;}
RECOMP_FUNC void func_080079FC_6C714C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080079FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08007A00: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08007A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007A08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08007A0C: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08007A10: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08007A14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08007A18: jalr        $v0
    // 0x08007A1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08007A1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08007A20: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08007A24: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08007A28: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x08007A2C: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x08007A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08007A34: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08007A38: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X7B28) << 16);
    // 0x08007A3C: addiu       $a1, $a1, 0x7B28
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X7B28));
    // 0x08007A40: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x08007A44: mfhi        $t9
    ctx->r25 = hi;
    // 0x08007A48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08007A4C: bne         $t8, $zero, L_08007A58
    if (ctx->r24 != 0) {
        // 0x08007A50: nop
    
            goto L_08007A58;
    }
    // 0x08007A50: nop

    // 0x08007A54: break       7
    do_break(134249044);
L_08007A58:
    // 0x08007A58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08007A5C: bne         $t8, $at, L_08007A70
    if (ctx->r24 != ctx->r1) {
        // 0x08007A60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08007A70;
    }
    // 0x08007A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08007A64: bne         $t7, $at, L_08007A70
    if (ctx->r15 != ctx->r1) {
        // 0x08007A68: nop
    
            goto L_08007A70;
    }
    // 0x08007A68: nop

    // 0x08007A6C: break       6
    do_break(134249068);
L_08007A70:
    // 0x08007A70: bne         $t9, $zero, L_08007B08
    if (ctx->r25 != 0) {
        // 0x08007A74: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08007B08;
    }
    // 0x08007A74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007A78: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08007A7C: jalr        $t9
    // 0x08007A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007A80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x08007A84: beq         $v0, $zero, L_08007B08
    if (ctx->r2 == 0) {
        // 0x08007A88: addiu       $t0, $zero, 0x1E
        ctx->r8 = ADD32(0, 0X1E);
            goto L_08007B08;
    }
    // 0x08007A88: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08007A8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08007A90: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08007A94: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08007A98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08007A9C: jalr        $t9
    // 0x08007AA0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007AA0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x08007AA4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08007AA8: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x08007AAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08007AB0: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x08007AB4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08007AB8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x08007ABC: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08007AC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08007AC4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x08007AC8: jalr        $t9
    // 0x08007ACC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007ACC: nop

    after_3:
    // 0x08007AD0: addiu       $t1, $v0, -0x30C
    ctx->r9 = ADD32(ctx->r2, -0X30C);
    // 0x08007AD4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x08007AD8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x08007ADC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08007AE0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08007AE4: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x08007AE8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08007AEC: jalr        $t9
    // 0x08007AF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007AF0: nop

    after_4:
    // 0x08007AF4: addiu       $t3, $v0, -0x104
    ctx->r11 = ADD32(ctx->r2, -0X104);
    // 0x08007AF8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x08007AFC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x08007B00: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08007B04: swc1        $f16, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f16.u32l;
L_08007B08:
    // 0x08007B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08007B10: jr          $ra
    // 0x08007B14: nop

    TRACE_RETURN()
    return;
    // 0x08007B14: nop

    // 0x08007B18: jr          $ra
    // 0x08007B1C: nop

    TRACE_RETURN()
    return;
    // 0x08007B1C: nop

    // 0x08007B20: jr          $ra
    // 0x08007B24: nop

    TRACE_RETURN()
    return;
    // 0x08007B24: nop

;}
RECOMP_FUNC void func_080078A0_6C6FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080078A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080078A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080078A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080078AC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080078B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080078B4: jalr        $t9
    // 0x080078B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080078B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080078BC: bne         $v0, $zero, L_080078D0
    if (ctx->r2 != 0) {
        // 0x080078C0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080078D0;
    }
    // 0x080078C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080078C4: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080078C8: jalr        $t9
    // 0x080078CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080078CC: nop

    after_1:
L_080078D0:
    // 0x080078D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080078D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080078D8: jr          $ra
    // 0x080078DC: nop

    TRACE_RETURN()
    return;
    // 0x080078DC: nop

;}
RECOMP_FUNC void func_08000658_6BFDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800065C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000660: lui         $t7, 0x8280
    ctx->r15 = S32(0X8280 << 16);
    // 0x08000664: addiu       $t6, $zero, 0x243
    ctx->r14 = ADD32(0, 0X243);
    // 0x08000668: ori         $t7, $t7, 0x320
    ctx->r15 = ctx->r15 | 0X320;
    // 0x0800066C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000670: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000674: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000678: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x0800067C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000680: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000684: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000688: jalr        $t9
    // 0x0800068C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800068C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000690: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89A8) << 16);
    // 0x08000694: lwc1        $f0, -0x7658($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89A8));
    // 0x08000698: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800069C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4F8) << 16);
    // 0x080006A8: addiu       $a0, $a0, 0x4F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4F8));
    // 0x080006AC: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080006B0: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080006B4: jalr        $t9
    // 0x080006B8: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006B8: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x080006BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080006C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006C4: jr          $ra
    // 0x080006C8: nop

    TRACE_RETURN()
    return;
    // 0x080006C8: nop

;}
RECOMP_FUNC void func_08000490_6BFBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800049C: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    // 0x080004A0: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x080004A4: addiu       $t6, $zero, 0x33C
    ctx->r14 = ADD32(0, 0X33C);
    // 0x080004A8: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x080004AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080004B0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080004B4: bne         $t8, $at, L_080004C4
    if (ctx->r24 != ctx->r1) {
        // 0x080004B8: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_080004C4;
    }
    // 0x080004B8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080004BC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080004C0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_080004C4:
    // 0x080004C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004C8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080004CC: jalr        $t9
    // 0x080004D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080004D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3B0) << 16);
    // 0x080004E0: jalr        $t9
    // 0x080004E4: addiu       $a0, $a0, 0x3B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004E4: addiu       $a0, $a0, 0x3B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B0));
    after_1:
    // 0x080004E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004F0: jr          $ra
    // 0x080004F4: nop

    TRACE_RETURN()
    return;
    // 0x080004F4: nop

;}
RECOMP_FUNC void func_08003A8C_6C31DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A94: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x08003A98: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08003A9C: addiu       $t6, $zero, 0x1FB
    ctx->r14 = ADD32(0, 0X1FB);
    // 0x08003AA0: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x08003AA4: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08003AA8: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08003AAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003AB0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08003AB4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003AB8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003ABC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003AC0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08003AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003AC8: jalr        $t9
    // 0x08003ACC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003ACC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x08003AD0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003AD4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08003AD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003ADC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003AE0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08003AE4: sb          $t0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r8;
    // 0x08003AE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003AEC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003AF0: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08003AF4: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08003AF8: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08003AFC: jalr        $t9
    // 0x08003B00: lhu         $a0, 0xD4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B00: lhu         $a0, 0xD4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XD4);
    after_1:
    // 0x08003B04: beq         $v0, $zero, L_08003B28
    if (ctx->r2 == 0) {
        // 0x08003B08: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3B48) << 16);
            goto L_08003B28;
    }
    // 0x08003B08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3B48) << 16);
    // 0x08003B0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003B18: jalr        $t9
    // 0x08003B1C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003B1C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_2:
    // 0x08003B20: b           L_08003B3C
    // 0x08003B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08003B3C;
    // 0x08003B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003B28:
    // 0x08003B28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B30: jalr        $t9
    // 0x08003B34: addiu       $a0, $a0, 0x3B48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B48));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003B34: addiu       $a0, $a0, 0x3B48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3B48));
    after_3:
    // 0x08003B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003B3C:
    // 0x08003B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003B40: jr          $ra
    // 0x08003B44: nop

    TRACE_RETURN()
    return;
    // 0x08003B44: nop

;}
RECOMP_FUNC void func_08004E58_6C45A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004E58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004E5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004E60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004E64: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004E68: lbu         $t6, 0xDC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004E70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004E74: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x08004E78: sb          $t7, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r15;
    // 0x08004E7C: lbu         $a1, 0xDC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004E80: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004E84: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x08004E88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08004E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004E90: jalr        $t9
    // 0x08004E94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004E94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004E98: lbu         $t0, 0xDC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004E9C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4CEC) << 16);
    // 0x08004EA0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x08004EA4: slti        $at, $t0, 0x9
    ctx->r1 = SIGNED(ctx->r8) < 0X9 ? 1 : 0;
    // 0x08004EA8: beq         $at, $zero, L_08004EC0
    if (ctx->r1 == 0) {
        // 0x08004EAC: addiu       $a0, $a0, 0x4CEC
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4CEC));
            goto L_08004EC0;
    }
    // 0x08004EAC: addiu       $a0, $a0, 0x4CEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4CEC));
    // 0x08004EB0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004EB4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004EB8: jalr        $t9
    // 0x08004EBC: sb          $t1, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004EBC: sb          $t1, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r9;
    after_1:
L_08004EC0:
    // 0x08004EC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004EC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004ECC: jr          $ra
    // 0x08004ED0: nop

    TRACE_RETURN()
    return;
    // 0x08004ED0: nop

;}
RECOMP_FUNC void func_0800551C_6C4C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800551C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005524: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005528: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800552C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08005530: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005534: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08005538: bne         $v0, $zero, L_08005580
    if (ctx->r2 != 0) {
        // 0x0800553C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005580;
    }
    // 0x0800553C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005540: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005544: lwc1        $f4, 0xDC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08005548: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x0800554C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005550: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08005554: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005558: swc1        $f6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f6.u32l;
    // 0x0800555C: lwc1        $f10, 0xDC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08005560: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08005564: nop

    // 0x08005568: bc1f        L_08005574
    if (!c1cs) {
        // 0x0800556C: nop
    
            goto L_08005574;
    }
    // 0x0800556C: nop

    // 0x08005570: swc1        $f0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f0.u32l;
L_08005574:
    // 0x08005574: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X54A4) << 16);
    // 0x08005578: jalr        $t9
    // 0x0800557C: addiu       $a0, $a0, 0x54A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X54A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800557C: addiu       $a0, $a0, 0x54A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X54A4));
    after_0:
L_08005580:
    // 0x08005580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005588: jr          $ra
    // 0x0800558C: nop

    TRACE_RETURN()
    return;
    // 0x0800558C: nop

;}
RECOMP_FUNC void func_0800488C_6C3FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800488C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004890: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004894: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004898: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x0800489C: addiu       $t6, $zero, 0x4B
    ctx->r14 = ADD32(0, 0X4B);
    // 0x080048A0: lui         $a2, 0xC31A
    ctx->r6 = S32(0XC31A << 16);
    // 0x080048A4: lbu         $v1, 0xD0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XD0);
    // 0x080048A8: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    // 0x080048AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080048B0: bne         $v1, $zero, L_080048F0
    if (ctx->r3 != 0) {
        // 0x080048B4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_080048F0;
    }
    // 0x080048B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080048B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080048BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080048C0: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x080048C4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080048C8: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x080048CC: jalr        $t9
    // 0x080048D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x080048D4: bne         $v0, $zero, L_08004970
    if (ctx->r2 != 0) {
        // 0x080048D8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08004970;
    }
    // 0x080048D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080048DC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080048E0: jalr        $t9
    // 0x080048E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080048E4: nop

    after_1:
    // 0x080048E8: b           L_08004974
    // 0x080048EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004974;
    // 0x080048EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080048F0:
    // 0x080048F0: bne         $v1, $at, L_08004940
    if (ctx->r3 != ctx->r1) {
        // 0x080048F4: addiu       $t8, $zero, 0x4B
        ctx->r24 = ADD32(0, 0X4B);
            goto L_08004940;
    }
    // 0x080048F4: addiu       $t8, $zero, 0x4B
    ctx->r24 = ADD32(0, 0X4B);
    // 0x080048F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080048FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08004900: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004904: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004908: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x0800490C: sh          $t8, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r24;
    // 0x08004910: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x08004914: lui         $a2, 0xC327
    ctx->r6 = S32(0XC327 << 16);
    // 0x08004918: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    // 0x0800491C: jalr        $t9
    // 0x08004920: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004920: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x08004924: bne         $v0, $zero, L_08004970
    if (ctx->r2 != 0) {
        // 0x08004928: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08004970;
    }
    // 0x08004928: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800492C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004930: jalr        $t9
    // 0x08004934: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004934: nop

    after_3:
    // 0x08004938: b           L_08004974
    // 0x0800493C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08004974;
    // 0x0800493C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004940:
    // 0x08004940: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004944: bne         $v1, $at, L_08004970
    if (ctx->r3 != ctx->r1) {
        // 0x08004948: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_08004970;
    }
    // 0x08004948: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x0800494C: sh          $zero, 0x14($t1)
    MEM_H(0X14, ctx->r9) = 0;
    // 0x08004950: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004954: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004958: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800495C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08004960: bne         $v0, $zero, L_08004970
    if (ctx->r2 != 0) {
        // 0x08004964: sh          $t2, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r10;
            goto L_08004970;
    }
    // 0x08004964: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x08004968: jalr        $t9
    // 0x0800496C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800496C: nop

    after_4:
L_08004970:
    // 0x08004970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004974:
    // 0x08004974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004978: jr          $ra
    // 0x0800497C: nop

    TRACE_RETURN()
    return;
    // 0x0800497C: nop

;}
RECOMP_FUNC void func_0800664C_6C5D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800664C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006650: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(21, 0X6164) << 16);
    // 0x08006654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006658: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800665C: addiu       $t9, $t9, 0x6164
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(21, 0X6164));
    // 0x08006660: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08006664: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x08006668: jalr        $t9
    // 0x0800666C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800666C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08006670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08006674: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08006678: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800667C: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x08006680: addiu       $a1, $a1, -0x39FC
    ctx->r5 = ADD32(ctx->r5, -0X39FC);
    // 0x08006684: bne         $v1, $zero, L_080066AC
    if (ctx->r3 != 0) {
        // 0x08006688: nop
    
            goto L_080066AC;
    }
    // 0x08006688: nop

    // 0x0800668C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x08006690: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A5C) << 16);
    // 0x08006694: lw          $t6, 0xA0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA0);
    // 0x08006698: bne         $a2, $t6, L_080066AC
    if (ctx->r6 != ctx->r14) {
        // 0x0800669C: nop
    
            goto L_080066AC;
    }
    // 0x0800669C: nop

    // 0x080066A0: lwc1        $f4, -0x75A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A5C));
    // 0x080066A4: swc1        $f4, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f4.u32l;
    // 0x080066A8: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
L_080066AC:
    // 0x080066AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x080066B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080066B4: bne         $v1, $at, L_080066DC
    if (ctx->r3 != ctx->r1) {
        // 0x080066B8: addiu       $a1, $a1, -0x39FC
        ctx->r5 = ADD32(ctx->r5, -0X39FC);
            goto L_080066DC;
    }
    // 0x080066B8: addiu       $a1, $a1, -0x39FC
    ctx->r5 = ADD32(ctx->r5, -0X39FC);
    // 0x080066BC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x080066C0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A60) << 16);
    // 0x080066C4: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x080066C8: bnel        $a2, $t7, L_080066E0
    if (ctx->r6 != ctx->r15) {
        // 0x080066CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080066E0;
    }
    goto skip_0;
    // 0x080066CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x080066D0: lwc1        $f6, -0x75A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A60));
    // 0x080066D4: swc1        $f6, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f6.u32l;
    // 0x080066D8: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
L_080066DC:
    // 0x080066DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_080066E0:
    // 0x080066E0: bnel        $v1, $at, L_0800670C
    if (ctx->r3 != ctx->r1) {
        // 0x080066E4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_0800670C;
    }
    goto skip_1;
    // 0x080066E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_1:
    // 0x080066E8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x080066EC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A64) << 16);
    // 0x080066F0: lw          $t8, 0xA0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XA0);
    // 0x080066F4: bnel        $a2, $t8, L_0800670C
    if (ctx->r6 != ctx->r24) {
        // 0x080066F8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_0800670C;
    }
    goto skip_2;
    // 0x080066F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_2:
    // 0x080066FC: lwc1        $f8, -0x759C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A64));
    // 0x08006700: swc1        $f8, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f8.u32l;
    // 0x08006704: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x08006708: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_0800670C:
    // 0x0800670C: bnel        $v1, $at, L_08006738
    if (ctx->r3 != ctx->r1) {
        // 0x08006710: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08006738;
    }
    goto skip_3;
    // 0x08006710: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_3:
    // 0x08006714: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x08006718: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A68) << 16);
    // 0x0800671C: lw          $t0, 0xA0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XA0);
    // 0x08006720: bnel        $a2, $t0, L_08006738
    if (ctx->r6 != ctx->r8) {
        // 0x08006724: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08006738;
    }
    goto skip_4;
    // 0x08006724: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_4:
    // 0x08006728: lwc1        $f10, -0x7598($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A68));
    // 0x0800672C: swc1        $f10, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f10.u32l;
    // 0x08006730: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x08006734: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_08006738:
    // 0x08006738: bnel        $v1, $at, L_08006760
    if (ctx->r3 != ctx->r1) {
        // 0x0800673C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08006760;
    }
    goto skip_5;
    // 0x0800673C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x08006740: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x08006744: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A6C) << 16);
    // 0x08006748: lw          $t1, 0xA0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XA0);
    // 0x0800674C: bnel        $a2, $t1, L_08006760
    if (ctx->r6 != ctx->r9) {
        // 0x08006750: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08006760;
    }
    goto skip_6;
    // 0x08006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x08006754: lwc1        $f16, -0x7594($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A6C));
    // 0x08006758: swc1        $f16, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f16.u32l;
    // 0x0800675C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08006760:
    // 0x08006760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006764: jr          $ra
    // 0x08006768: nop

    TRACE_RETURN()
    return;
    // 0x08006768: nop

;}
RECOMP_FUNC void func_08007B28_6C7278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007B28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007B30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08007B34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007B38: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x08007B3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007B40: addiu       $t6, $zero, 0x12F
    ctx->r14 = ADD32(0, 0X12F);
    // 0x08007B44: ori         $t7, $t7, 0x6E3
    ctx->r15 = ctx->r15 | 0X6E3;
    // 0x08007B48: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08007B4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08007B50: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08007B54: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08007B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007B5C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08007B60: jalr        $t9
    // 0x08007B64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007B64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08007B68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007B6C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08007B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007B78: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08007B7C: jalr        $t9
    // 0x08007B80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007B80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08007B84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007B88: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08007B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007B90: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08007B94: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x08007B98: jalr        $t9
    // 0x08007B9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007B9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08007BA0: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x08007BA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08007BA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007BAC: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x08007BB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007BB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X7BDC) << 16);
    // 0x08007BB8: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08007BBC: addiu       $a0, $a0, 0x7BDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7BDC));
    // 0x08007BC0: jalr        $t9
    // 0x08007BC4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007BC4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x08007BC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007BCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08007BD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08007BD4: jr          $ra
    // 0x08007BD8: nop

    TRACE_RETURN()
    return;
    // 0x08007BD8: nop

;}
RECOMP_FUNC void func_0800028C_6BF9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800028C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000290: jr          $ra
    // 0x08000294: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000294: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080051F4_6C4944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080051F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080051F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080051FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005200: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08005204: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08005208: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x0800520C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08005210: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08005214: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08005218: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x0800521C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08005220: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x08005224: lhu         $t0, -0x5232($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X5232);
    // 0x08005228: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800522C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08005230: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x08005234: bnel        $t1, $zero, L_08005248
    if (ctx->r9 != 0) {
        // 0x08005238: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_08005248;
    }
    goto skip_0;
    // 0x08005238: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x0800523C: jalr        $t9
    // 0x08005240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08005244: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_08005248:
    // 0x08005248: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800524C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005250: lw          $v0, 0x68($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X68);
    // 0x08005254: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X532C) << 16);
    // 0x08005258: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
    // 0x0800525C: beql        $t3, $zero, L_08005278
    if (ctx->r11 == 0) {
        // 0x08005260: andi        $t5, $v0, 0x20
        ctx->r13 = ctx->r2 & 0X20;
            goto L_08005278;
    }
    goto skip_1;
    // 0x08005260: andi        $t5, $v0, 0x20
    ctx->r13 = ctx->r2 & 0X20;
    skip_1:
    // 0x08005264: jalr        $t9
    // 0x08005268: addiu       $a0, $a0, 0x532C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X532C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005268: addiu       $a0, $a0, 0x532C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X532C));
    after_1:
    // 0x0800526C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x08005270: lw          $v0, 0x68($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X68);
    // 0x08005274: andi        $t5, $v0, 0x20
    ctx->r13 = ctx->r2 & 0X20;
L_08005278:
    // 0x08005278: bne         $t5, $zero, L_08005290
    if (ctx->r13 != 0) {
        // 0x0800527C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X52A0) << 16);
            goto L_08005290;
    }
    // 0x0800527C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X52A0) << 16);
    // 0x08005280: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005284: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005288: jalr        $t9
    // 0x0800528C: addiu       $a0, $a0, 0x52A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X52A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800528C: addiu       $a0, $a0, 0x52A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X52A0));
    after_2:
L_08005290:
    // 0x08005290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005298: jr          $ra
    // 0x0800529C: nop

    TRACE_RETURN()
    return;
    // 0x0800529C: nop

;}
RECOMP_FUNC void func_08001600_6C0D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001608: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800160C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001610: beql        $t7, $zero, L_08001660
    if (ctx->r15 == 0) {
        // 0x08001614: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001660;
    }
    goto skip_0;
    // 0x08001614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001618: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x0800161C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08001620: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08001624: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001628: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x0800162C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89C4) << 16);
    // 0x08001630: lwc1        $f4, -0x763C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89C4));
    // 0x08001634: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001638: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800163C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08001640: jalr        $t9
    // 0x08001644: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001644: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_0:
    // 0x08001648: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800164C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001650: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X166C) << 16);
    // 0x08001654: jalr        $t9
    // 0x08001658: addiu       $a0, $a0, 0x166C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X166C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001658: addiu       $a0, $a0, 0x166C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X166C));
    after_1:
    // 0x0800165C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001660:
    // 0x08001660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001664: jr          $ra
    // 0x08001668: nop

    TRACE_RETURN()
    return;
    // 0x08001668: nop

;}
RECOMP_FUNC void func_08006164_6C58B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006164: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08006168: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x0800616C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08006170: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08006174: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x08006178: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800617C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08006180: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08006184: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x08006188: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x0800618C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08006190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006194: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08006198: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x0800619C: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x080061A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080061A4: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x080061A8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x080061AC: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x080061B0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x080061B4: addiu       $t5, $t5, 0x1390
    ctx->r13 = ADD32(ctx->r13, 0X1390);
    // 0x080061B8: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x080061BC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080061C0: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x080061C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080061C8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080061CC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080061D0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x080061D4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x080061D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080061DC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080061E0: lbu         $t0, 0xE1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE1);
    // 0x080061E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080061E8: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080061EC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x080061F0: lbu         $t1, 0xE0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE0);
    // 0x080061F4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x080061F8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x080061FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08006200: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x08006204: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x08006208: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x0800620C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08006210: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08006214: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x08006218: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x0800621C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08006220: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08006224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800622C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006230: jalr        $t9
    // 0x08006234: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006234: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08006238: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x0800623C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08006240: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08006244: jr          $ra
    // 0x08006248: nop

    TRACE_RETURN()
    return;
    // 0x08006248: nop

;}
RECOMP_FUNC void func_08006B00_6C6250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006B08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006B0C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08006B10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006B14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006B18: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08006B1C: bne         $v0, $zero, L_08006B30
    if (ctx->r2 != 0) {
        // 0x08006B20: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08006B30;
    }
    // 0x08006B20: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08006B24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6968) << 16);
    // 0x08006B28: jalr        $t9
    // 0x08006B2C: addiu       $a0, $a0, 0x6968
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6968));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006B2C: addiu       $a0, $a0, 0x6968
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6968));
    after_0:
L_08006B30:
    // 0x08006B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006B38: jr          $ra
    // 0x08006B3C: nop

    TRACE_RETURN()
    return;
    // 0x08006B3C: nop

;}
RECOMP_FUNC void func_08005CF4_6C5444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005CFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08005D00: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x08005D04: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08005D08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005D0C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08005D10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08005D14: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08005D18: jalr        $t9
    // 0x08005D1C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005D1C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x08005D20: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08005D24: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08005D28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08005D2C: beq         $a1, $zero, L_08005D48
    if (ctx->r5 == 0) {
        // 0x08005D30: lwc1        $f12, 0x28($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
            goto L_08005D48;
    }
    // 0x08005D30: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08005D34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005D38: beq         $a1, $at, L_08005E4C
    if (ctx->r5 == ctx->r1) {
        // 0x08005D3C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08005E4C;
    }
    // 0x08005D3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005D40: b           L_08005F1C
    // 0x08005D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08005F1C;
    // 0x08005D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08005D48:
    // 0x08005D48: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08005D4C: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x08005D50: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x08005D54: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08005D58: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08005D5C: nop

    // 0x08005D60: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005D64: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_0;
    // 0x08005D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x08005D68: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x08005D6C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x08005D70: nop

    // 0x08005D74: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005D78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_1;
    // 0x08005D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x08005D7C: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08005D80: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08005D84: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x08005D88: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08005D8C: nop

    // 0x08005D90: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005D94: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_2;
    // 0x08005D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x08005D98: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x08005D9C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08005DA0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08005DA4: nop

    // 0x08005DA8: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005DAC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_3;
    // 0x08005DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x08005DB0: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08005DB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005DB8: lhu         $t6, 0x3E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3E);
    // 0x08005DBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08005DC0: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x08005DC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08005DC8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x08005DCC: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08005DD0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08005DD4: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08005DD8: bgez        $t6, L_08005DF0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08005DDC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08005DF0;
    }
    // 0x08005DDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08005DE0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08005DE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005DE8: nop

    // 0x08005DEC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_08005DF0:
    // 0x08005DF0: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08005DF4: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x08005DF8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x08005DFC: nop

    // 0x08005E00: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005E04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_4;
    // 0x08005E04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x08005E08: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08005E0C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08005E10: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005E14: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_5;
    // 0x08005E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x08005E18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005E1C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08005E20: add.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x08005E24: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x08005E28: nop

    // 0x08005E2C: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005E30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_6;
    // 0x08005E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x08005E34: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08005E38: lhu         $t8, 0x98($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X98);
    // 0x08005E3C: beql        $t8, $zero, L_08005F1C
    if (ctx->r24 == 0) {
        // 0x08005E40: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_7;
    // 0x08005E40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x08005E44: b           L_08005F1C
    // 0x08005E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08005F1C;
    // 0x08005E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08005E4C:
    // 0x08005E4C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x08005E50: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x08005E54: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08005E58: jalr        $t9
    // 0x08005E5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005E5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08005E60: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08005E64: beq         $v0, $zero, L_08005F18
    if (ctx->r2 == 0) {
        // 0x08005E68: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08005F18;
    }
    // 0x08005E68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08005E6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08005E70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005E74: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08005E78: lhu         $t0, 0x3E($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3E);
    // 0x08005E7C: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x08005E80: sub.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x08005E84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08005E88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005E8C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08005E90: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08005E94: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08005E98: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x08005E9C: bgez        $t0, L_08005EB4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08005EA0: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08005EB4;
    }
    // 0x08005EA0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08005EA4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08005EA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005EAC: nop

    // 0x08005EB0: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_08005EB4:
    // 0x08005EB4: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x08005EB8: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x08005EBC: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x08005EC0: nop

    // 0x08005EC4: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005EC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_8;
    // 0x08005EC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x08005ECC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08005ED0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08005ED4: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005ED8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_9;
    // 0x08005ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_9:
    // 0x08005EDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005EE0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08005EE4: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x08005EE8: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x08005EEC: nop

    // 0x08005EF0: bc1fl       L_08005F1C
    if (!c1cs) {
        // 0x08005EF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_10;
    // 0x08005EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_10:
    // 0x08005EF8: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08005EFC: lhu         $t2, 0x98($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X98);
    // 0x08005F00: beql        $t2, $zero, L_08005F1C
    if (ctx->r10 == 0) {
        // 0x08005F04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08005F1C;
    }
    goto skip_11;
    // 0x08005F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_11:
    // 0x08005F08: b           L_08005F1C
    // 0x08005F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08005F1C;
    // 0x08005F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08005F10: b           L_08005F1C
    // 0x08005F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08005F1C;
    // 0x08005F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08005F18:
    // 0x08005F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08005F1C:
    // 0x08005F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005F24: jr          $ra
    // 0x08005F28: nop

    TRACE_RETURN()
    return;
    // 0x08005F28: nop

;}
RECOMP_FUNC void func_08005684_6C4DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800568C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08005690: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x08005694: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08005698: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800569C: beq         $t7, $zero, L_080056EC
    if (ctx->r15 == 0) {
        // 0x080056A0: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_080056EC;
    }
    // 0x080056A0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x080056A4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x080056A8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080056AC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080056B0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x080056B4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080056B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080056BC: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x080056C0: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x080056C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080056C8: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x080056CC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080056D0: jalr        $t9
    // 0x080056D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080056D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080056D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080056DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080056E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X56FC) << 16);
    // 0x080056E4: jalr        $t9
    // 0x080056E8: addiu       $a0, $a0, 0x56FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X56FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080056E8: addiu       $a0, $a0, 0x56FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X56FC));
    after_1:
L_080056EC:
    // 0x080056EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080056F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080056F4: jr          $ra
    // 0x080056F8: nop

    TRACE_RETURN()
    return;
    // 0x080056F8: nop

;}
RECOMP_FUNC void func_08000760_6BFEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800076C: lwc1        $f6, 0xDC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08000770: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000778: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800077C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x08000780: nop

    // 0x08000784: bc1tl       L_080007C0
    if (c1cs) {
        // 0x08000788: lw          $t8, 0x68($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X68);
            goto L_080007C0;
    }
    goto skip_0;
    // 0x08000788: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x0800078C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000790: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000794: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000798: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x0800079C: bne         $t7, $zero, L_080007BC
    if (ctx->r15 != 0) {
        // 0x080007A0: addiu       $a0, $zero, 0x2A0
        ctx->r4 = ADD32(0, 0X2A0);
            goto L_080007BC;
    }
    // 0x080007A0: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x080007A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007A8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080007AC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080007B0: jalr        $t9
    // 0x080007B4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007B4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x080007B8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_080007BC:
    // 0x080007BC: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
L_080007C0:
    // 0x080007C0: lui         $t5, 0x8280
    ctx->r13 = S32(0X8280 << 16);
    // 0x080007C4: lui         $t1, 0x8280
    ctx->r9 = S32(0X8280 << 16);
    // 0x080007C8: sll         $t0, $t8, 15
    ctx->r8 = S32(ctx->r24 << 15);
    // 0x080007CC: bgez        $t0, L_08000884
    if (SIGNED(ctx->r8) >= 0) {
        // 0x080007D0: ori         $t5, $t5, 0x320
        ctx->r13 = ctx->r13 | 0X320;
            goto L_08000884;
    }
    // 0x080007D0: ori         $t5, $t5, 0x320
    ctx->r13 = ctx->r13 | 0X320;
    // 0x080007D4: ori         $t1, $t1, 0x320
    ctx->r9 = ctx->r9 | 0X320;
    // 0x080007D8: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x080007DC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x080007E0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x080007E4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x080007E8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x080007EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x080007F0: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x080007F4: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x080007F8: mfhi        $t4
    ctx->r12 = hi;
    // 0x080007FC: bnel        $t4, $zero, L_0800086C
    if (ctx->r12 != 0) {
        // 0x08000800: lwc1        $f8, 0x8($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
            goto L_0800086C;
    }
    goto skip_1;
    // 0x08000800: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    skip_1:
    // 0x08000804: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x08000808: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x0800080C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000810: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000814: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x08000818: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800081C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000820: addiu       $a0, $zero, 0x270
    ctx->r4 = ADD32(0, 0X270);
    // 0x08000824: bc1f        L_0800085C
    if (!c1cs) {
        // 0x08000828: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_0800085C;
    }
    // 0x08000828: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x0800082C: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08000830: lwc1        $f18, 0xD4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x08000834: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x08000838: nop

    // 0x0800083C: bc1f        L_0800085C
    if (!c1cs) {
        // 0x08000840: nop
    
            goto L_0800085C;
    }
    // 0x08000840: nop

    // 0x08000844: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08000848: lwc1        $f6, 0xD8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x0800084C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x08000850: nop

    // 0x08000854: bc1tl       L_0800086C
    if (c1cs) {
        // 0x08000858: lwc1        $f8, 0x8($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
            goto L_0800086C;
    }
    goto skip_2;
    // 0x08000858: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    skip_2:
L_0800085C:
    // 0x0800085C: jalr        $t9
    // 0x08000860: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000860: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000864: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000868: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
L_0800086C:
    // 0x0800086C: swc1        $f8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f8.u32l;
    // 0x08000870: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08000874: swc1        $f10, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f10.u32l;
    // 0x08000878: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x0800087C: b           L_08000888
    // 0x08000880: swc1        $f16, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f16.u32l;
        goto L_08000888;
    // 0x08000880: swc1        $f16, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f16.u32l;
L_08000884:
    // 0x08000884: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
L_08000888:
    // 0x08000888: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x0800088C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000890: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000894: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x08000898: bgez        $t7, L_080008AC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x0800089C: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_080008AC;
    }
    // 0x0800089C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080008A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080008A4: nop

    // 0x080008A8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_080008AC:
    // 0x080008AC: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
    // 0x080008B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080008B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080008B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080008BC: jr          $ra
    // 0x080008C0: nop

    TRACE_RETURN()
    return;
    // 0x080008C0: nop

    // 0x080008C4: jr          $ra
    // 0x080008C8: nop

    TRACE_RETURN()
    return;
    // 0x080008C8: nop

;}
RECOMP_FUNC void func_08001324_6C0A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800132C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001330: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001334: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001338: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800133C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001340: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001344: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08001348: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x0800134C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001350: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001354: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08001358: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800135C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001360: bne         $v0, $zero, L_08001378
    if (ctx->r2 != 0) {
        // 0x08001364: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001378;
    }
    // 0x08001364: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001368: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x0800136C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1388) << 16);
    // 0x08001370: jalr        $t9
    // 0x08001374: addiu       $a0, $a0, 0x1388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1388));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001374: addiu       $a0, $a0, 0x1388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1388));
    after_0:
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
RECOMP_FUNC void func_080077C8_6C6F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080077C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080077CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080077D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080077D4: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080077D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080077DC: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x080077E0: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080077E4: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x080077E8: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x080077EC: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x080077F0: beq         $t0, $zero, L_0800788C
    if (ctx->r8 == 0) {
        // 0x080077F4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800788C;
    }
    // 0x080077F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080077F8: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080077FC: jalr        $t9
    // 0x08007800: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007800: nop

    after_0:
    // 0x08007804: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007808: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800780C: jalr        $t9
    // 0x08007810: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007810: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_1:
    // 0x08007814: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007818: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800781C: jalr        $t9
    // 0x08007820: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007820: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_2:
    // 0x08007824: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007828: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800782C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08007838: jalr        $t9
    // 0x0800783C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800783C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08007840: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007844: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08007848: jalr        $t9
    // 0x0800784C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800784C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08007850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007854: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08007858: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x0800785C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007860: jalr        $t9
    // 0x08007864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08007868: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x0800786C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007870: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007874: beq         $v0, $zero, L_08007884
    if (ctx->r2 == 0) {
        // 0x08007878: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X78A0) << 16);
            goto L_08007884;
    }
    // 0x08007878: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X78A0) << 16);
    // 0x0800787C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08007880: sb          $t1, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r9;
L_08007884:
    // 0x08007884: jalr        $t9
    // 0x08007888: addiu       $a0, $a0, 0x78A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X78A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08007888: addiu       $a0, $a0, 0x78A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X78A0));
    after_6:
L_0800788C:
    // 0x0800788C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007890: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08007894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08007898: jr          $ra
    // 0x0800789C: nop

    TRACE_RETURN()
    return;
    // 0x0800789C: nop

;}
RECOMP_FUNC void func_08004F74_6C46C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004F78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004F80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004F84: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08004F88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004F8C: jalr        $t9
    // 0x08004F90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004F90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08004F94: beq         $v0, $zero, L_08004FCC
    if (ctx->r2 == 0) {
        // 0x08004F98: lui         $at, 0x801
        ctx->r1 = S32(RELOC_HI16(21, 0X8A44) << 16);
            goto L_08004FCC;
    }
    // 0x08004F98: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A44) << 16);
    // 0x08004F9C: lwc1        $f4, -0x75BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A44));
    // 0x08004FA0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08004FA4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004FA8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004FAC: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    // 0x08004FB0: jalr        $t9
    // 0x08004FB4: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004FB4: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    after_1:
    // 0x08004FB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004FBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004FC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4FDC) << 16);
    // 0x08004FC4: jalr        $t9
    // 0x08004FC8: addiu       $a0, $a0, 0x4FDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4FDC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004FC8: addiu       $a0, $a0, 0x4FDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4FDC));
    after_2:
L_08004FCC:
    // 0x08004FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004FD4: jr          $ra
    // 0x08004FD8: nop

    TRACE_RETURN()
    return;
    // 0x08004FD8: nop

;}
RECOMP_FUNC void func_0800097C_6C00CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800097C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000980: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000984: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000988: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x0800098C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000990: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000994: addiu       $s1, $s1, 0x71A8
    ctx->r17 = ADD32(ctx->r17, 0X71A8);
    // 0x08000998: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0XACC) << 16);
    // 0x0800099C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009A0: addiu       $a1, $a1, 0xACC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0XACC));
    // 0x080009A4: jalr        $s1
    // 0x080009A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x080009A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x080009AC: beq         $v0, $zero, L_080009D8
    if (ctx->r2 == 0) {
        // 0x080009B0: addiu       $t6, $zero, 0x1E
        ctx->r14 = ADD32(0, 0X1E);
            goto L_080009D8;
    }
    // 0x080009B0: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x080009B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009B8: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x080009BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080009C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080009C4: jalr        $t9
    // 0x080009C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x080009CC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080009D0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080009D4: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_080009D8:
    // 0x080009D8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X1D0C) << 16);
    // 0x080009DC: addiu       $a1, $a1, 0x1D0C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X1D0C));
    // 0x080009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009E4: jalr        $s1
    // 0x080009E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x080009E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080009EC: beq         $v0, $zero, L_08000A18
    if (ctx->r2 == 0) {
        // 0x080009F0: addiu       $t7, $zero, 0x1E
        ctx->r15 = ADD32(0, 0X1E);
            goto L_08000A18;
    }
    // 0x080009F0: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x080009F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009F8: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080009FC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000A00: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000A04: jalr        $t9
    // 0x08000A08: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A08: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x08000A0C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08000A10: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000A14: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000A18:
    // 0x08000A18: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X1EE4) << 16);
    // 0x08000A1C: addiu       $a1, $a1, 0x1EE4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X1EE4));
    // 0x08000A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A24: jalr        $s1
    // 0x08000A28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x08000A28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x08000A2C: beq         $v0, $zero, L_08000A58
    if (ctx->r2 == 0) {
        // 0x08000A30: addiu       $t8, $zero, 0x1E
        ctx->r24 = ADD32(0, 0X1E);
            goto L_08000A58;
    }
    // 0x08000A30: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08000A34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A38: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000A3C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000A40: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000A44: jalr        $t9
    // 0x08000A48: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000A48: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_5:
    // 0x08000A4C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000A50: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000A54: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000A58:
    // 0x08000A58: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X24A0) << 16);
    // 0x08000A5C: addiu       $a1, $a1, 0x24A0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X24A0));
    // 0x08000A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A64: jalr        $s1
    // 0x08000A68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x08000A68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x08000A6C: beq         $v0, $zero, L_08000A98
    if (ctx->r2 == 0) {
        // 0x08000A70: addiu       $t0, $zero, 0x1E
        ctx->r8 = ADD32(0, 0X1E);
            goto L_08000A98;
    }
    // 0x08000A70: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08000A74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A78: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000A7C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000A80: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000A84: jalr        $t9
    // 0x08000A88: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000A88: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x08000A8C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000A90: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000A94: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000A98:
    // 0x08000A98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XAC0) << 16);
    // 0x08000AA4: jalr        $t9
    // 0x08000AA8: addiu       $a0, $a0, 0xAC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XAC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000AA8: addiu       $a0, $a0, 0xAC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XAC0));
    after_8:
    // 0x08000AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000AB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000AB8: jr          $ra
    // 0x08000ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08000ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0800435C_6C3AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800435C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004360: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004364: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004368: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800436C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004370: addiu       $t6, $zero, 0xE6
    ctx->r14 = ADD32(0, 0XE6);
    // 0x08004374: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08004378: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x0800437C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08004380: jalr        $t9
    // 0x08004384: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004384: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_0:
    // 0x08004388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800438C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004390: jr          $ra
    // 0x08004394: nop

    TRACE_RETURN()
    return;
    // 0x08004394: nop

;}
RECOMP_FUNC void func_08004594_6C3CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004594: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004598: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800459C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080045A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080045A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080045A8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080045AC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X4694) << 16);
    // 0x080045B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080045B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080045B8: addiu       $a1, $a1, 0x4694
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X4694));
    // 0x080045BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080045C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080045C4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080045C8: jalr        $t9
    // 0x080045CC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080045CC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x080045D0: beq         $v0, $zero, L_08004624
    if (ctx->r2 == 0) {
        // 0x080045D4: addiu       $a0, $zero, 0x271
        ctx->r4 = ADD32(0, 0X271);
            goto L_08004624;
    }
    // 0x080045D4: addiu       $a0, $zero, 0x271
    ctx->r4 = ADD32(0, 0X271);
    // 0x080045D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080045DC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080045E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080045E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080045E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080045EC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080045F0: jalr        $t9
    // 0x080045F4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080045F4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x080045F8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080045FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004600: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08004604: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004608: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x0800460C: jalr        $t9
    // 0x08004610: sh          $t6, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004610: sh          $t6, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r14;
    after_2:
    // 0x08004614: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004618: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x0800461C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08004620: sw          $a1, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r5;
L_08004624:
    // 0x08004624: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08004628: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800462C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004630: lbu         $t7, 0xD1($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XD1);
    // 0x08004634: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4654) << 16);
    // 0x08004638: addiu       $a0, $a0, 0x4654
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4654));
    // 0x0800463C: jalr        $t9
    // 0x08004640: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004640: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    after_3:
    // 0x08004644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004648: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800464C: jr          $ra
    // 0x08004650: nop

    TRACE_RETURN()
    return;
    // 0x08004650: nop

;}
RECOMP_FUNC void func_080003B0_6BFB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x080003B4: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080003B8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x080003BC: bgezl       $t7, L_080003EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x080003C0: lw          $t0, 0xD0($a0)
        ctx->r8 = MEM_W(ctx->r4, 0XD0);
            goto L_080003EC;
    }
    goto skip_0;
    // 0x080003C0: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x080003C4: lw          $t8, 0xD0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD0);
    // 0x080003C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080003CC: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x080003D0: bne         $t8, $at, L_080003E0
    if (ctx->r24 != ctx->r1) {
        // 0x080003D4: nop
    
            goto L_080003E0;
    }
    // 0x080003D4: nop

    // 0x080003D8: jr          $ra
    // 0x080003DC: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x080003DC: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
L_080003E0:
    // 0x080003E0: jr          $ra
    // 0x080003E4: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x080003E4: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x080003E8: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
L_080003EC:
    // 0x080003EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080003F0: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x080003F4: bne         $t0, $at, L_08000408
    if (ctx->r8 != ctx->r1) {
        // 0x080003F8: ori         $t2, $t2, 0x20
        ctx->r10 = ctx->r10 | 0X20;
            goto L_08000408;
    }
    // 0x080003F8: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x080003FC: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x08000400: jr          $ra
    // 0x08000404: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x08000404: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
L_08000408:
    // 0x08000408: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x0800040C: jr          $ra
    // 0x08000410: nop

    TRACE_RETURN()
    return;
    // 0x08000410: nop

;}
RECOMP_FUNC void func_080008CC_6C001C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080008DC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080008E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008E4: jalr        $t9
    // 0x080008E8: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008E8: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_0:
    // 0x080008EC: beq         $v0, $zero, L_08000910
    if (ctx->r2 == 0) {
        // 0x080008F0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000910;
    }
    // 0x080008F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080008F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X970) << 16);
    // 0x08000900: jalr        $t9
    // 0x08000904: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000904: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X970));
    after_1:
    // 0x08000908: b           L_08000964
    // 0x0800090C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000964;
    // 0x0800090C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000910:
    // 0x08000910: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08000914: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000918: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x0800091C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000920: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000924: jalr        $t9
    // 0x08000928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x0800092C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89B0) << 16);
    // 0x08000930: lwc1        $f0, -0x7650($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89B0));
    // 0x08000934: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000938: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800093C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000940: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000944: sb          $zero, 0x6C($t7)
    MEM_B(0X6C, ctx->r15) = 0;
    // 0x08000948: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X970) << 16);
    // 0x0800094C: addiu       $a0, $a0, 0x970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X970));
    // 0x08000950: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000954: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000958: jalr        $t9
    // 0x0800095C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800095C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_3:
    // 0x08000960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000964:
    // 0x08000964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000968: jr          $ra
    // 0x0800096C: nop

    TRACE_RETURN()
    return;
    // 0x0800096C: nop

;}
RECOMP_FUNC void func_08007494_6C6BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007498: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800749C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080074A0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080074A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080074A8: jalr        $t9
    // 0x080074AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080074AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080074B0: bne         $v0, $zero, L_080074C4
    if (ctx->r2 != 0) {
        // 0x080074B4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080074C4;
    }
    // 0x080074B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080074B8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080074BC: jalr        $t9
    // 0x080074C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080074C0: nop

    after_1:
L_080074C4:
    // 0x080074C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080074C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080074CC: jr          $ra
    // 0x080074D0: nop

    TRACE_RETURN()
    return;
    // 0x080074D0: nop

;}
RECOMP_FUNC void func_08005154_6C48A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800515C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08005160: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08005164: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08005168: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x0800516C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08005170: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08005174: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005178: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800517C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08005180: bne         $v0, $at, L_08005198
    if (ctx->r2 != ctx->r1) {
        // 0x08005184: addiu       $a0, $zero, 0x135
        ctx->r4 = ADD32(0, 0X135);
            goto L_08005198;
    }
    // 0x08005184: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    // 0x08005188: jalr        $t9
    // 0x0800518C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800518C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08005190: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005194: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
L_08005198:
    // 0x08005198: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x0800519C: bne         $v0, $zero, L_080051E4
    if (ctx->r2 != 0) {
        // 0x080051A0: sh          $t0, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r8;
            goto L_080051E4;
    }
    // 0x080051A0: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    // 0x080051A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080051A8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080051AC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    // 0x080051B0: jalr        $t9
    // 0x080051B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080051B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x080051B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080051BC: lui         $t1, 0x2A0
    ctx->r9 = S32(0X2A0 << 16);
    // 0x080051C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080051C4: ori         $t1, $t1, 0x7E1
    ctx->r9 = ctx->r9 | 0X7E1;
    // 0x080051C8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x080051CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080051D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X51F4) << 16);
    // 0x080051D4: addiu       $a0, $a0, 0x51F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X51F4));
    // 0x080051D8: sw          $t1, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r9;
    // 0x080051DC: jalr        $t9
    // 0x080051E0: sb          $t2, 0x75($a2)
    MEM_B(0X75, ctx->r6) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080051E0: sb          $t2, 0x75($a2)
    MEM_B(0X75, ctx->r6) = ctx->r10;
    after_2:
L_080051E4:
    // 0x080051E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080051E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080051EC: jr          $ra
    // 0x080051F0: nop

    TRACE_RETURN()
    return;
    // 0x080051F0: nop

;}
RECOMP_FUNC void func_08001974_6C10C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001978: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800197C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001980: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001984: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08001988: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800198C: lui         $a1, 0xC34F
    ctx->r5 = S32(0XC34F << 16);
    // 0x08001990: lui         $a2, 0xC2AE
    ctx->r6 = S32(0XC2AE << 16);
    // 0x08001994: jalr        $t9
    // 0x08001998: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001998: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_0:
    // 0x0800199C: bne         $v0, $zero, L_080019D4
    if (ctx->r2 != 0) {
        // 0x080019A0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X1A24) << 16);
            goto L_080019D4;
    }
    // 0x080019A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1A24) << 16);
    // 0x080019A4: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x080019A8: addiu       $v0, $v0, 0x521C
    ctx->r2 = ADD32(ctx->r2, 0X521C);
    // 0x080019AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080019B0: jalr        $v0
    // 0x080019B4: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1A24));
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080019B4: addiu       $a0, $a0, 0x1A24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1A24));
    after_1:
    // 0x080019B8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080019BC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x080019C0: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x080019C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X19E4) << 16);
    // 0x080019C8: addiu       $a0, $a0, 0x19E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X19E4));
    // 0x080019CC: jalr        $v0
    // 0x080019D0: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080019D0: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_2:
L_080019D4:
    // 0x080019D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080019D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080019DC: jr          $ra
    // 0x080019E0: nop

    TRACE_RETURN()
    return;
    // 0x080019E0: nop

;}
RECOMP_FUNC void func_08000CCC_6C8EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000CD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000CD4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000CD8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000CE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000CE4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000CE8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000CEC: jalr        $t9
    // 0x08000CF0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CF0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08000CF4: bne         $v0, $zero, L_08000E84
    if (ctx->r2 != 0) {
        // 0x08000CF8: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_08000E84;
    }
    // 0x08000CF8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000CFC: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x08000D00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000D04: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000D08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000D0C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08000D10: nop

    // 0x08000D14: bc1tl       L_08000E88
    if (c1cs) {
        // 0x08000D18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000E88;
    }
    goto skip_0;
    // 0x08000D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000D1C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08000D20: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08000D24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000D28: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000D2C: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000D30: swc1        $f0, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->f0.u32l;
    // 0x08000D34: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08000D38: nop

    // 0x08000D3C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08000D40: beql        $t7, $zero, L_08000D90
    if (ctx->r15 == 0) {
        // 0x08000D44: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_08000D90;
    }
    goto skip_1;
    // 0x08000D44: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x08000D48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000D4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000D50: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x08000D54: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08000D58: nop

    // 0x08000D5C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08000D60: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08000D64: nop

    // 0x08000D68: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08000D6C: bne         $t7, $zero, L_08000D84
    if (ctx->r15 != 0) {
        // 0x08000D70: nop
    
            goto L_08000D84;
    }
    // 0x08000D70: nop

    // 0x08000D74: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x08000D78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000D7C: b           L_08000D9C
    // 0x08000D80: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08000D9C;
    // 0x08000D80: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08000D84:
    // 0x08000D84: b           L_08000D9C
    // 0x08000D88: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08000D9C;
    // 0x08000D88: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08000D8C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_08000D90:
    // 0x08000D90: nop

    // 0x08000D94: bltz        $t7, L_08000D84
    if (SIGNED(ctx->r15) < 0) {
        // 0x08000D98: nop
    
            goto L_08000D84;
    }
    // 0x08000D98: nop

L_08000D9C:
    // 0x08000D9C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000DA0: sh          $t7, -0x324C($at)
    MEM_H(-0X324C, ctx->r1) = ctx->r15;
    // 0x08000DA4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08000DA8: lwc1        $f10, 0xD8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x08000DAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DA8) << 16);
    // 0x08000DB0: ldc1        $f18, 0x6DA8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DA8));
    // 0x08000DB4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000DB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000DBC: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08000DC0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000DC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000DC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DB0) << 16);
    // 0x08000DCC: ldc1        $f10, 0x6DB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DB0));
    // 0x08000DD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000DD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DD8: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08000DDC: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x08000DE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DE4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08000DE8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08000DEC: lwc1        $f8, 0xEC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XEC);
    // 0x08000DF0: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x08000DF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000DF8: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x08000DFC: nop

    // 0x08000E00: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000E04: nop

    // 0x08000E08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000E0C: div.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x08000E10: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08000E14: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08000E18: jalr        $t9
    // 0x08000E1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E1C: nop

    after_1:
    // 0x08000E20: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x08000E24: sh          $t1, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r9;
    // 0x08000E28: lwc1        $f4, 0xD8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x08000E2C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DB8) << 16);
    // 0x08000E30: ldc1        $f6, 0x6DB8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DB8));
    // 0x08000E34: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x08000E38: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E3C: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x08000E40: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000E44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000E48: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000E4C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08000E50: addiu       $a0, $zero, 0x2A1
    ctx->r4 = ADD32(0, 0X2A1);
    // 0x08000E54: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08000E58: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x08000E5C: swc1        $f0, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->f0.u32l;
    // 0x08000E60: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000E64: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08000E68: jalr        $t9
    // 0x08000E6C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E6C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    after_2:
    // 0x08000E70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0XE98) << 16);
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: addiu       $a0, $a0, 0xE98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XE98));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E80: addiu       $a0, $a0, 0xE98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0XE98));
    after_3:
L_08000E84:
    // 0x08000E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000E88:
    // 0x08000E88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000E8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000E90: jr          $ra
    // 0x08000E94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000E94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08003E64_6CC074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003E68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003E6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003E70: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08003E74: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08003E78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E7C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x08003E80: ori         $t6, $t6, 0x2A0
    ctx->r14 = ctx->r14 | 0X2A0;
    // 0x08003E84: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08003E88: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x08003E8C: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003E90: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(22, 0X3F84) << 16);
    // 0x08003E94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003E98: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003E9C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08003EA0: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08003EA4: sb          $v0, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r2;
    // 0x08003EA8: sb          $v0, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r2;
    // 0x08003EAC: jalr        $t9
    // 0x08003EB0: addiu       $a1, $a1, 0x3F84
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X3F84));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003EB0: addiu       $a1, $a1, 0x3F84
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(22, 0X3F84));
    after_0:
    // 0x08003EB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003EB8: addiu       $t9, $t9, -0x2004
    ctx->r25 = ADD32(ctx->r25, -0X2004);
    // 0x08003EBC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08003EC0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08003EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003EC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08003ECC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003ED0: jalr        $t9
    // 0x08003ED4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003ED4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x08003ED8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003EDC: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08003EE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x08003EE4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003EE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003EEC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08003EF0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003EF8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08003EFC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x08003F00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003F04: jalr        $t9
    // 0x08003F08: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003F08: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    after_2:
    // 0x08003F0C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003F10: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003F18: jalr        $t9
    // 0x08003F1C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003F1C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
    // 0x08003F20: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E48) << 16);
    // 0x08003F24: lwc1        $f0, 0x6E48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E48));
    // 0x08003F28: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08003F2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F30: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003F38: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x08003F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003F40: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003F44: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003F48: jalr        $t9
    // 0x08003F4C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003F4C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_4:
    // 0x08003F50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X3F78) << 16);
    // 0x08003F5C: jalr        $t9
    // 0x08003F60: addiu       $a0, $a0, 0x3F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3F78));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003F60: addiu       $a0, $a0, 0x3F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X3F78));
    after_5:
    // 0x08003F64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003F68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003F70: jr          $ra
    // 0x08003F74: nop

    TRACE_RETURN()
    return;
    // 0x08003F74: nop

;}
RECOMP_FUNC void func_08005768_6CD978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800576C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800577C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08005780: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x08005784: jalr        $t9
    // 0x08005788: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005788: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x0800578C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08005790: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005794: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08005798: lui         $a1, 0xC3A7
    ctx->r5 = S32(0XC3A7 << 16);
    // 0x0800579C: lui         $a2, 0x43CD
    ctx->r6 = S32(0X43CD << 16);
    // 0x080057A0: lui         $a3, 0x431D
    ctx->r7 = S32(0X431D << 16);
    // 0x080057A4: jalr        $t9
    // 0x080057A8: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080057A8: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    after_1:
    // 0x080057AC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080057B0: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x080057B4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080057B8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x080057BC: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x080057C0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080057C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080057C8: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080057CC: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x080057D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x080057D4: jalr        $t9
    // 0x080057D8: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080057D8: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    after_2:
    // 0x080057DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080057E0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080057E4: jalr        $t9
    // 0x080057E8: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080057E8: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    after_3:
    // 0x080057EC: beq         $v0, $zero, L_08005814
    if (ctx->r2 == 0) {
        // 0x080057F0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08005814;
    }
    // 0x080057F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080057F4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080057F8: jalr        $t9
    // 0x080057FC: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080057FC: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    after_4:
    // 0x08005800: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005804: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005808: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5824) << 16);
    // 0x0800580C: jalr        $t9
    // 0x08005810: addiu       $a0, $a0, 0x5824
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5824));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005810: addiu       $a0, $a0, 0x5824
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5824));
    after_5:
L_08005814:
    // 0x08005814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800581C: jr          $ra
    // 0x08005820: nop

    TRACE_RETURN()
    return;
    // 0x08005820: nop

;}
RECOMP_FUNC void func_08006100_6CE310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006100: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08006104: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006108: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800610C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08006110: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08006114: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x08006118: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x0800611C: addiu       $s1, $s1, -0x33D0
    ctx->r17 = ADD32(ctx->r17, -0X33D0);
    // 0x08006120: lwc1        $f4, 0x148($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X148);
    // 0x08006124: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08006128: lwc1        $f8, 0x140($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X140);
    // 0x0800612C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08006130: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08006134: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x08006138: addiu       $v1, $v1, 0x17E0
    ctx->r3 = ADD32(ctx->r3, 0X17E0);
    // 0x0800613C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08006140: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08006144: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006148: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x0800614C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08006150: jalr        $v1
    // 0x08006154: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08006154: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_0:
    // 0x08006158: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x0800615C: lhu         $t7, 0xD4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XD4);
    // 0x08006160: lwc1        $f14, 0x140($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X140);
    // 0x08006164: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08006168: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x0800616C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08006170: sub.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x08006174: bgez        $t7, L_08006188
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08006178: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08006188;
    }
    // 0x08006178: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x0800617C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08006180: nop

    // 0x08006184: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08006188:
    // 0x08006188: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x0800618C: lwc1        $f2, 0x148($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X148);
    // 0x08006190: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08006194: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x08006198: sub.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x0800619C: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x080061A0: lhu         $t9, 0xD4($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XD4);
    // 0x080061A4: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x080061A8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x080061AC: lwc1        $f12, 0x10($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X10);
    // 0x080061B0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080061B4: bgez        $t9, L_080061C8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x080061B8: sub.s       $f10, $f2, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_080061C8;
    }
    // 0x080061B8: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x080061BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080061C0: nop

    // 0x080061C4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_080061C8:
    // 0x080061C8: div.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x080061CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080061D0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080061D4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x080061D8: lui         $a2, 0x43A7
    ctx->r6 = S32(0X43A7 << 16);
    // 0x080061DC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x080061E0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080061E4: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x080061E8: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x080061EC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x080061F0: jalr        $t9
    // 0x080061F4: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080061F4: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_1:
    // 0x080061F8: lhu         $t0, 0xD4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD4);
    // 0x080061FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08006200: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006204: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x08006208: mflo        $t1
    ctx->r9 = lo;
    // 0x0800620C: addiu       $t2, $t1, 0x136
    ctx->r10 = ADD32(ctx->r9, 0X136);
    // 0x08006210: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x08006214: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08006218: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x0800621C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08006220: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x08006224: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x08006228: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0800622C: jalr        $t9
    // 0x08006230: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006230: nop

    after_2:
    // 0x08006234: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08006238: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x0800623C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08006240: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08006244: lw          $a1, 0x2C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X2C);
    // 0x08006248: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800624C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08006250: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x08006254: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x08006258: jalr        $t9
    // 0x0800625C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800625C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    after_3:
    // 0x08006260: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006264: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x08006268: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x0800626C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x08006270: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x08006274: jalr        $t9
    // 0x08006278: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08006278: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x0800627C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08006280: lwc1        $f18, 0x140($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X140);
    // 0x08006284: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08006288: lwc1        $f8, 0x148($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X148);
    // 0x0800628C: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x08006290: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08006294: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08006298: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0800629C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x080062A0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080062A4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x080062A8: jalr        $t9
    // 0x080062AC: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080062AC: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    after_5:
    // 0x080062B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080062B4: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x080062B8: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x080062BC: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    // 0x080062C0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x080062C4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x080062C8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x080062CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080062D0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x080062D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080062D8: jalr        $t9
    // 0x080062DC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080062DC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_6:
    // 0x080062E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080062E4: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080062E8: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x080062EC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080062F0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x080062F4: jalr        $t9
    // 0x080062F8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080062F8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_7:
    // 0x080062FC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08006300: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x08006304: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08006308: slti        $v1, $v0, 0x23
    ctx->r3 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
    // 0x0800630C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08006310: bne         $v1, $zero, L_08006358
    if (ctx->r3 != 0) {
        // 0x08006314: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_08006358;
    }
    // 0x08006314: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08006318: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800631C: lw          $t8, 0x184($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X184);
    // 0x08006320: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006324: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08006328: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x0800632C: jalr        $t9
    // 0x08006330: sw          $t0, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08006330: sw          $t0, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r8;
    after_8:
    // 0x08006334: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006338: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800633C: jalr        $t9
    // 0x08006340: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08006340: nop

    after_9:
    // 0x08006344: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006348: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800634C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5AA0) << 16);
    // 0x08006350: jalr        $t9
    // 0x08006354: addiu       $a0, $a0, 0x5AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5AA0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08006354: addiu       $a0, $a0, 0x5AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5AA0));
    after_10:
L_08006358:
    // 0x08006358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800635C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08006360: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08006364: jr          $ra
    // 0x08006368: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08006368: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08001360_6C9570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001364: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001368: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800136C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001370: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001378: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800137C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001380: jalr        $t9
    // 0x08001384: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001384: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x08001388: bne         $v0, $zero, L_0800152C
    if (ctx->r2 != 0) {
        // 0x0800138C: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_0800152C;
    }
    // 0x0800138C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001390: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x08001394: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001398: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800139C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x080013A0: nop

    // 0x080013A4: bc1tl       L_08001530
    if (c1cs) {
        // 0x080013A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001530;
    }
    goto skip_0;
    // 0x080013A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080013AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x080013B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x080013B4: lwc1        $f8, 0xD8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x080013B8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080013BC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x080013C0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x080013C4: nop

    // 0x080013C8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x080013CC: beql        $t7, $zero, L_0800141C
    if (ctx->r15 == 0) {
        // 0x080013D0: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_0800141C;
    }
    goto skip_1;
    // 0x080013D0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x080013D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080013D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080013DC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080013E0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x080013E4: nop

    // 0x080013E8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x080013EC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x080013F0: nop

    // 0x080013F4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x080013F8: bne         $t7, $zero, L_08001410
    if (ctx->r15 != 0) {
        // 0x080013FC: nop
    
            goto L_08001410;
    }
    // 0x080013FC: nop

    // 0x08001400: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x08001404: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001408: b           L_08001428
    // 0x0800140C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08001428;
    // 0x0800140C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08001410:
    // 0x08001410: b           L_08001428
    // 0x08001414: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08001428;
    // 0x08001414: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08001418: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_0800141C:
    // 0x0800141C: nop

    // 0x08001420: bltz        $t7, L_08001410
    if (SIGNED(ctx->r15) < 0) {
        // 0x08001424: nop
    
            goto L_08001410;
    }
    // 0x08001424: nop

L_08001428:
    // 0x08001428: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800142C: sh          $t7, -0x324C($at)
    MEM_H(-0X324C, ctx->r1) = ctx->r15;
    // 0x08001430: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001434: lwc1        $f16, 0xD8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x08001438: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DD0) << 16);
    // 0x0800143C: ldc1        $f4, 0x6DD0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DD0));
    // 0x08001440: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001444: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001448: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x0800144C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001450: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001454: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DD8) << 16);
    // 0x08001458: ldc1        $f16, 0x6DD8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DD8));
    // 0x0800145C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001460: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001464: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08001468: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x0800146C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001470: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08001474: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x08001478: lwc1        $f10, 0xEC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XEC);
    // 0x0800147C: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x08001480: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001484: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x08001488: nop

    // 0x0800148C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x08001490: nop

    // 0x08001494: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001498: div.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x0800149C: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x080014A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x080014A4: jalr        $t9
    // 0x080014A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014A8: nop

    after_1:
    // 0x080014AC: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x080014B0: sh          $t1, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r9;
    // 0x080014B4: lwc1        $f6, 0xD8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XD8);
    // 0x080014B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DE0) << 16);
    // 0x080014BC: ldc1        $f8, 0x6DE0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DE0));
    // 0x080014C0: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x080014C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080014C8: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x080014CC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080014D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080014D4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080014D8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x080014DC: addiu       $a0, $zero, 0x2A1
    ctx->r4 = ADD32(0, 0X2A1);
    // 0x080014E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x080014E4: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x080014E8: swc1        $f0, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->f0.u32l;
    // 0x080014EC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080014F0: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x080014F4: jalr        $t9
    // 0x080014F8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080014F8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x080014FC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001500: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08001504: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x08001508: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800150C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001510: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x08001514: beq         $t2, $zero, L_08001524
    if (ctx->r10 == 0) {
        // 0x08001518: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X1540) << 16);
            goto L_08001524;
    }
    // 0x08001518: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1540) << 16);
    // 0x0800151C: ori         $t3, $v0, 0x40
    ctx->r11 = ctx->r2 | 0X40;
    // 0x08001520: sw          $t3, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r11;
L_08001524:
    // 0x08001524: jalr        $t9
    // 0x08001528: addiu       $a0, $a0, 0x1540
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1540));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001528: addiu       $a0, $a0, 0x1540
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1540));
    after_3:
L_0800152C:
    // 0x0800152C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001530:
    // 0x08001530: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001534: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001538: jr          $ra
    // 0x0800153C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800153C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800053C_6C874C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800053C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000548: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800054C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000550: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000554: bnel        $t7, $zero, L_080005B4
    if (ctx->r15 != 0) {
        // 0x08000558: lhu         $t5, 0x16($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X16);
            goto L_080005B4;
    }
    goto skip_0;
    // 0x08000558: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    skip_0:
    // 0x0800055C: lhu         $v0, 0xD4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XD4);
    // 0x08000560: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x08000564: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x08000568: bnel        $at, $zero, L_0800057C
    if (ctx->r1 != 0) {
        // 0x0800056C: lhu         $t8, 0x16($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X16);
            goto L_0800057C;
    }
    goto skip_1;
    // 0x0800056C: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    skip_1:
    // 0x08000570: sh          $v1, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r3;
    // 0x08000574: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x08000578: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
L_0800057C:
    // 0x0800057C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000580: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x08000584: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08000588: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x0800058C: lhu         $t1, -0x33D0($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X33D0);
    // 0x08000590: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x08000594: beql        $t2, $zero, L_0800062C
    if (ctx->r10 == 0) {
        // 0x08000598: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800062C;
    }
    goto skip_2;
    // 0x08000598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x0800059C: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x080005A0: lbu         $t3, 0x6E($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6E);
    // 0x080005A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080005A8: b           L_08000628
    // 0x080005AC: sb          $t4, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r12;
        goto L_08000628;
    // 0x080005AC: sb          $t4, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r12;
    // 0x080005B0: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
L_080005B4:
    // 0x080005B4: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x080005B8: addiu       $t9, $zero, 0x180
    ctx->r25 = ADD32(0, 0X180);
    // 0x080005BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080005C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x080005C4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x080005C8: slti        $at, $t8, 0x180
    ctx->r1 = SIGNED(ctx->r24) < 0X180 ? 1 : 0;
    // 0x080005CC: bne         $at, $zero, L_08000628
    if (ctx->r1 != 0) {
        // 0x080005D0: sh          $t7, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r15;
            goto L_08000628;
    }
    // 0x080005D0: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x080005D4: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
    // 0x080005D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080005E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080005E4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080005E8: jalr        $t9
    // 0x080005EC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005EC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x080005F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005F4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080005F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080005FC: jalr        $t9
    // 0x08000600: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000600: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
    // 0x08000604: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000608: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800060C: jalr        $t9
    // 0x08000610: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000610: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    after_2:
    // 0x08000614: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000618: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800061C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X63C) << 16);
    // 0x08000620: jalr        $t9
    // 0x08000624: addiu       $a0, $a0, 0x63C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X63C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000624: addiu       $a0, $a0, 0x63C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X63C));
    after_3:
L_08000628:
    // 0x08000628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800062C:
    // 0x0800062C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000634: jr          $ra
    // 0x08000638: nop

    TRACE_RETURN()
    return;
    // 0x08000638: nop

;}
RECOMP_FUNC void func_08000F70_6C9180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000F80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F84: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000F88: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08000F8C: jalr        $t9
    // 0x08000F90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000F94: bne         $v0, $zero, L_0800108C
    if (ctx->r2 != 0) {
        // 0x08000F98: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_0800108C;
    }
    // 0x08000F98: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000F9C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08000FA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000FA4: lwc1        $f0, 0x28($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X28);
    // 0x08000FA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000FAC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x08000FB0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x08000FB4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000FB8: addiu       $a0, $zero, 0x2A2
    ctx->r4 = ADD32(0, 0X2A2);
    // 0x08000FBC: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    // 0x08000FC0: bc1f        L_08000FE4
    if (!c1cs) {
        // 0x08000FC4: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000FE4;
    }
    // 0x08000FC4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000FCC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08000FD0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08000FD4: nop

    // 0x08000FD8: bc1fl       L_08000FE8
    if (!c1cs) {
        // 0x08000FDC: lui         $at, 0x439B
        ctx->r1 = S32(0X439B << 16);
            goto L_08000FE8;
    }
    goto skip_0;
    // 0x08000FDC: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    skip_0:
    // 0x08000FE0: sb          $t6, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r14;
L_08000FE4:
    // 0x08000FE4: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
L_08000FE8:
    // 0x08000FE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000FEC: lwc1        $f8, 0xD8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x08000FF0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6DC8) << 16);
    // 0x08000FF4: ldc1        $f16, 0x6DC8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6DC8));
    // 0x08000FF8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000FFC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x08001000: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x08001004: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001008: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x0800100C: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x08001010: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08001014: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08001018: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x0800101C: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08001020: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x08001024: nop

    // 0x08001028: bc1fl       L_08001090
    if (!c1cs) {
        // 0x0800102C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001090;
    }
    goto skip_1;
    // 0x0800102C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001030: lbu         $t7, 0x7C($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X7C);
    // 0x08001034: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001038: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800103C: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x08001040: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x08001044: sb          $t8, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r24;
    // 0x08001048: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x0800104C: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x08001050: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08001054: jalr        $t9
    // 0x08001058: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001058: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x0800105C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001060: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08001064: lw          $v0, 0x184($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X184);
    // 0x08001068: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800106C: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x08001070: andi        $t0, $v0, 0x8
    ctx->r8 = ctx->r2 & 0X8;
    // 0x08001074: beq         $t0, $zero, L_08001084
    if (ctx->r8 == 0) {
        // 0x08001078: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X10A0) << 16);
            goto L_08001084;
    }
    // 0x08001078: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X10A0) << 16);
    // 0x0800107C: ori         $t1, $v0, 0x80
    ctx->r9 = ctx->r2 | 0X80;
    // 0x08001080: sw          $t1, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->r9;
L_08001084:
    // 0x08001084: jalr        $t9
    // 0x08001088: addiu       $a0, $a0, 0x10A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X10A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001088: addiu       $a0, $a0, 0x10A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X10A0));
    after_2:
L_0800108C:
    // 0x0800108C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001090:
    // 0x08001090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001098: jr          $ra
    // 0x0800109C: nop

    TRACE_RETURN()
    return;
    // 0x0800109C: nop

;}
RECOMP_FUNC void func_08004BE0_6CCDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004BE8: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x08004BEC: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x08004BF0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004BF4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08004BF8: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08004BFC: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08004C00: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08004C04: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08004C08: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08004C0C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08004C10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004C14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004C18: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08004C1C: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08004C20: nop

    // 0x08004C24: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08004C28: jalr        $t9
    // 0x08004C2C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004C2C: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x08004C30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004C34: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08004C38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6EA0) << 16);
    // 0x08004C3C: lwc1        $f8, 0xD4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08004C40: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x08004C44: lw          $t0, 0x84($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X84);
    // 0x08004C48: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08004C4C: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08004C50: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08004C54: ldc1        $f14, 0x6EA0($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6EA0));
    // 0x08004C58: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    // 0x08004C5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08004C60: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x08004C64: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08004C68: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x08004C6C: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x08004C70: lw          $t1, 0xDC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XDC);
    // 0x08004C74: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x08004C78: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08004C7C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x08004C80: lwc1        $f10, 0xD4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08004C84: lw          $t3, 0xDC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XDC);
    // 0x08004C88: lw          $t5, 0x84($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X84);
    // 0x08004C8C: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08004C90: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x08004C94: lwc1        $f8, 0x10($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08004C98: lwc1        $f2, 0x10($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08004C9C: sub.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x08004CA0: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x08004CA4: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x08004CA8: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x08004CAC: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004CB0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x08004CB4: bgez        $t6, L_08004CCC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08004CB8: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_08004CCC;
    }
    // 0x08004CB8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08004CBC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004CC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004CC4: nop

    // 0x08004CC8: add.d       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f10.d + ctx->f6.d;
L_08004CCC:
    // 0x08004CCC: sub.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f10.d - ctx->f14.d;
    // 0x08004CD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08004CD4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08004CD8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08004CDC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08004CE0: nop

    // 0x08004CE4: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x08004CE8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08004CEC: nop

    // 0x08004CF0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08004CF4: beql        $t7, $zero, L_08004D48
    if (ctx->r15 == 0) {
        // 0x08004CF8: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_08004D48;
    }
    goto skip_0;
    // 0x08004CF8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x08004CFC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004D00: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004D04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08004D08: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x08004D0C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08004D10: nop

    // 0x08004D14: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x08004D18: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08004D1C: nop

    // 0x08004D20: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08004D24: bne         $t7, $zero, L_08004D3C
    if (ctx->r15 != 0) {
        // 0x08004D28: nop
    
            goto L_08004D3C;
    }
    // 0x08004D28: nop

    // 0x08004D2C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x08004D30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08004D34: b           L_08004D54
    // 0x08004D38: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08004D54;
    // 0x08004D38: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08004D3C:
    // 0x08004D3C: b           L_08004D54
    // 0x08004D40: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08004D54;
    // 0x08004D40: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08004D44: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_08004D48:
    // 0x08004D48: nop

    // 0x08004D4C: bltz        $t7, L_08004D3C
    if (SIGNED(ctx->r15) < 0) {
        // 0x08004D50: nop
    
            goto L_08004D3C;
    }
    // 0x08004D50: nop

L_08004D54:
    // 0x08004D54: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x08004D58: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08004D5C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08004D60: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x08004D64: bgez        $t8, L_08004D80
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08004D68: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_08004D80;
    }
    // 0x08004D68: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x08004D6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08004D70: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004D74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004D78: nop

    // 0x08004D7C: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_08004D80:
    // 0x08004D80: c.lt.d      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.d < ctx->f14.d;
    // 0x08004D84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004D88: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004D8C: bc1fl       L_08004DA0
    if (!c1cs) {
        // 0x08004D90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08004DA0;
    }
    goto skip_1;
    // 0x08004D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08004D94: jalr        $t9
    // 0x08004D98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004D98: nop

    after_1:
    // 0x08004D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004DA0:
    // 0x08004DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004DA4: jr          $ra
    // 0x08004DA8: nop

    TRACE_RETURN()
    return;
    // 0x08004DA8: nop

;}
RECOMP_FUNC void func_080020B4_6CA2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080020B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080020BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080020C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080020C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080020C8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080020CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080020D0: jalr        $t9
    // 0x080020D4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020D4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080020D8: bne         $v0, $zero, L_08002178
    if (ctx->r2 != 0) {
        // 0x080020DC: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08002178;
    }
    // 0x080020DC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080020E0: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x080020E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E08) << 16);
    // 0x080020E8: ldc1        $f8, 0x6E08($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E08));
    // 0x080020EC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080020F0: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080020F4: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x080020F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080020FC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002104: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08002108: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800210C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002110: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08002114: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x08002118: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800211C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08002120: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x08002124: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x08002128: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x0800212C: nop

    // 0x08002130: bc1fl       L_0800217C
    if (!c1cs) {
        // 0x08002134: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800217C;
    }
    goto skip_0;
    // 0x08002134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08002138: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x0800213C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002140: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002144: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08002148: jalr        $t9
    // 0x0800214C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800214C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    after_1:
    // 0x08002150: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002154: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800215C: jalr        $t9
    // 0x08002160: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002160: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_2:
    // 0x08002164: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002168: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800216C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X218C) << 16);
    // 0x08002170: jalr        $t9
    // 0x08002174: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X218C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002174: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X218C));
    after_3:
L_08002178:
    // 0x08002178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800217C:
    // 0x0800217C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002184: jr          $ra
    // 0x08002188: nop

    TRACE_RETURN()
    return;
    // 0x08002188: nop

;}
RECOMP_FUNC void func_080010A0_6C92B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080010B0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080010B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080010B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080010BC: jalr        $t9
    // 0x080010C0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010C0: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x080010C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080010C8: bne         $v0, $zero, L_08001138
    if (ctx->r2 != 0) {
        // 0x080010CC: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08001138;
    }
    // 0x080010CC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080010D0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x080010D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080010D8: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x080010DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x080010E0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x080010E4: nop

    // 0x080010E8: bc1fl       L_0800111C
    if (!c1cs) {
        // 0x080010EC: lbu         $t7, 0x7C($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X7C);
            goto L_0800111C;
    }
    goto skip_0;
    // 0x080010EC: lbu         $t7, 0x7C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X7C);
    skip_0:
    // 0x080010F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080010F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010F8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080010FC: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x08001100: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x08001104: jalr        $t9
    // 0x08001108: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001108: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x0800110C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08001110: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08001114: sh          $t6, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r14;
    // 0x08001118: lbu         $t7, 0x7C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X7C);
L_0800111C:
    // 0x0800111C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001120: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001124: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08001128: beq         $t8, $zero, L_08001138
    if (ctx->r24 == 0) {
        // 0x0800112C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(22, 0X1148) << 16);
            goto L_08001138;
    }
    // 0x0800112C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1148) << 16);
    // 0x08001130: jalr        $t9
    // 0x08001134: addiu       $a0, $a0, 0x1148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1148));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001134: addiu       $a0, $a0, 0x1148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1148));
    after_2:
L_08001138:
    // 0x08001138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800113C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001140: jr          $ra
    // 0x08001144: nop

    TRACE_RETURN()
    return;
    // 0x08001144: nop

;}
RECOMP_FUNC void func_08002B30_6CAD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002B34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002B38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002B3C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002B40: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x08002B44: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x08002B48: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002B4C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002B50: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08002B54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08002B58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08002B5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08002B60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08002B64: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002B68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B6C: addiu       $t9, $t9, -0x1ECC
    ctx->r25 = ADD32(ctx->r25, -0X1ECC);
    // 0x08002B70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002B74: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002B78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002B7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08002B80: jalr        $t9
    // 0x08002B84: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B84: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x08002B88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002B8C: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08002B90: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002B94: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002B98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B9C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08002BA0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08002BA4: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002BA8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x08002BAC: jalr        $t9
    // 0x08002BB0: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BB0: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    after_1:
    // 0x08002BB4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x08002BB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002BBC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002BC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08002BC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BC8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002BCC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08002BD0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08002BD4: jalr        $t9
    // 0x08002BD8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002BD8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_2:
    // 0x08002BDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BE0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X2C00) << 16);
    // 0x08002BE8: jalr        $t9
    // 0x08002BEC: addiu       $a0, $a0, 0x2C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2C00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002BEC: addiu       $a0, $a0, 0x2C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X2C00));
    after_3:
    // 0x08002BF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002BF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002BF8: jr          $ra
    // 0x08002BFC: nop

    TRACE_RETURN()
    return;
    // 0x08002BFC: nop

;}
RECOMP_FUNC void func_08003F84_6CC194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F84: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003F88: lw          $v0, -0x324C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X324C);
    // 0x08003F8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08003F90: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003F94: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x08003F98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003F9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003FA0: bne         $t6, $zero, L_08003FC4
    if (ctx->r14 != 0) {
        // 0x08003FA4: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_08003FC4;
    }
    // 0x08003FA4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08003FA8: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x08003FAC: bne         $t7, $zero, L_08003FC4
    if (ctx->r15 != 0) {
        // 0x08003FB0: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_08003FC4;
    }
    // 0x08003FB0: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x08003FB4: bne         $t8, $zero, L_08003FC4
    if (ctx->r24 != 0) {
        // 0x08003FB8: andi        $t9, $v0, 0x80
        ctx->r25 = ctx->r2 & 0X80;
            goto L_08003FC4;
    }
    // 0x08003FB8: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x08003FBC: beql        $t9, $zero, L_08003FDC
    if (ctx->r25 == 0) {
        // 0x08003FC0: lw          $t2, 0x60($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X60);
            goto L_08003FDC;
    }
    goto skip_0;
    // 0x08003FC0: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    skip_0:
L_08003FC4:
    // 0x08003FC4: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08003FC8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x08003FCC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08003FD0: b           L_08003FEC
    // 0x08003FD4: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
        goto L_08003FEC;
    // 0x08003FD4: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08003FD8: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
L_08003FDC:
    // 0x08003FDC: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x08003FE0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003FE4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08003FE8: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08003FEC:
    // 0x08003FEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003FF0: addiu       $t9, $t9, 0x7114
    ctx->r25 = ADD32(ctx->r25, 0X7114);
    // 0x08003FF4: jalr        $t9
    // 0x08003FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x08003FFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004000: addiu       $t9, $t9, 0x6AB8
    ctx->r25 = ADD32(ctx->r25, 0X6AB8);
    // 0x08004004: jalr        $t9
    // 0x08004008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800400C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004010: addiu       $t9, $t9, 0x4B88
    ctx->r25 = ADD32(ctx->r25, 0X4B88);
    // 0x08004014: jalr        $t9
    // 0x08004018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x0800401C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004020: addiu       $t9, $t9, -0x76C4
    ctx->r25 = ADD32(ctx->r25, -0X76C4);
    // 0x08004024: jalr        $t9
    // 0x08004028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x0800402C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004030: addiu       $t9, $t9, -0x3BBC
    ctx->r25 = ADD32(ctx->r25, -0X3BBC);
    // 0x08004034: jalr        $t9
    // 0x08004038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x0800403C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004040: addiu       $t9, $t9, -0x47F8
    ctx->r25 = ADD32(ctx->r25, -0X47F8);
    // 0x08004044: jalr        $t9
    // 0x08004048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x0800404C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004050: addiu       $t9, $t9, -0x3AE8
    ctx->r25 = ADD32(ctx->r25, -0X3AE8);
    // 0x08004054: jalr        $t9
    // 0x08004058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x0800405C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004060: addiu       $t9, $t9, -0x5688
    ctx->r25 = ADD32(ctx->r25, -0X5688);
    // 0x08004064: jalr        $t9
    // 0x08004068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x0800406C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004070: addiu       $t9, $t9, -0x7670
    ctx->r25 = ADD32(ctx->r25, -0X7670);
    // 0x08004074: jalr        $t9
    // 0x08004078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x0800407C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004080: addiu       $t9, $t9, -0x49F0
    ctx->r25 = ADD32(ctx->r25, -0X49F0);
    // 0x08004084: jalr        $t9
    // 0x08004088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x0800408C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004090: addiu       $t9, $t9, -0x60E0
    ctx->r25 = ADD32(ctx->r25, -0X60E0);
    // 0x08004094: jalr        $t9
    // 0x08004098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08004098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x0800409C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080040A0: addiu       $t9, $t9, -0x5CF8
    ctx->r25 = ADD32(ctx->r25, -0X5CF8);
    // 0x080040A4: jalr        $t9
    // 0x080040A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080040A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x080040AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080040B0: addiu       $t9, $t9, -0x7CB0
    ctx->r25 = ADD32(ctx->r25, -0X7CB0);
    // 0x080040B4: jalr        $t9
    // 0x080040B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080040B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x080040BC: lw          $t5, 0x68($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X68);
    // 0x080040C0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x080040C4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x080040C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080040CC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x080040D0: sb          $t4, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r12;
    // 0x080040D4: sw          $t6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r14;
    // 0x080040D8: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080040DC: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x080040E0: jalr        $v0
    // 0x080040E4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x080040E4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_13:
    // 0x080040E8: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x080040EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080040F0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x080040F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080040F8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080040FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08004100: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(22, 0X432C) << 16);
    // 0x08004104: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08004108: addiu       $t9, $t9, 0x432C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(22, 0X432C));
    // 0x0800410C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08004110: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08004114: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08004118: nop

    // 0x0800411C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08004120: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08004124: nop

    // 0x08004128: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x0800412C: beql        $t8, $zero, L_0800417C
    if (ctx->r24 == 0) {
        // 0x08004130: mfc1        $t8, $f16
        ctx->r24 = (int32_t)ctx->f16.u32l;
            goto L_0800417C;
    }
    goto skip_1;
    // 0x08004130: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x08004134: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08004138: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800413C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08004140: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08004144: nop

    // 0x08004148: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x0800414C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08004150: nop

    // 0x08004154: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x08004158: bne         $t8, $zero, L_08004170
    if (ctx->r24 != 0) {
        // 0x0800415C: nop
    
            goto L_08004170;
    }
    // 0x0800415C: nop

    // 0x08004160: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x08004164: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08004168: b           L_08004188
    // 0x0800416C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_08004188;
    // 0x0800416C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_08004170:
    // 0x08004170: b           L_08004188
    // 0x08004174: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_08004188;
    // 0x08004174: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x08004178: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
L_0800417C:
    // 0x0800417C: nop

    // 0x08004180: bltz        $t8, L_08004170
    if (SIGNED(ctx->r24) < 0) {
        // 0x08004184: nop
    
            goto L_08004170;
    }
    // 0x08004184: nop

L_08004188:
    // 0x08004188: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x0800418C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08004190: sh          $t8, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r24;
    // 0x08004194: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x08004198: beql        $t1, $zero, L_080041AC
    if (ctx->r9 == 0) {
        // 0x0800419C: lw          $t2, 0xDC($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XDC);
            goto L_080041AC;
    }
    goto skip_2;
    // 0x0800419C: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
    skip_2:
    // 0x080041A0: jalr        $t9
    // 0x080041A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080041A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x080041A8: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
L_080041AC:
    // 0x080041AC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080041B0: addiu       $t9, $t9, -0x46E8
    ctx->r25 = ADD32(ctx->r25, -0X46E8);
    // 0x080041B4: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x080041B8: addiu       $a2, $a2, -0xDE8
    ctx->r6 = ADD32(ctx->r6, -0XDE8);
    // 0x080041BC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x080041C0: jalr        $t9
    // 0x080041C4: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080041C4: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    after_15:
    // 0x080041C8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080041CC: lw          $v0, -0x324C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X324C);
    // 0x080041D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080041D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080041D8: andi        $t3, $v0, 0x800
    ctx->r11 = ctx->r2 & 0X800;
    // 0x080041DC: beq         $t3, $zero, L_080041F8
    if (ctx->r11 == 0) {
        // 0x080041E0: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_080041F8;
    }
    // 0x080041E0: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x080041E4: lhu         $t4, 0xD8($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XD8);
    // 0x080041E8: addiu       $t5, $t4, 0x50
    ctx->r13 = ADD32(ctx->r12, 0X50);
    // 0x080041EC: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x080041F0: b           L_08004240
    // 0x080041F4: sh          $t6, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r14;
        goto L_08004240;
    // 0x080041F4: sh          $t6, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r14;
L_080041F8:
    // 0x080041F8: beq         $t7, $zero, L_08004214
    if (ctx->r15 == 0) {
        // 0x080041FC: andi        $t2, $v0, 0x200
        ctx->r10 = ctx->r2 & 0X200;
            goto L_08004214;
    }
    // 0x080041FC: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x08004200: lhu         $t8, 0xD8($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD8);
    // 0x08004204: addiu       $t0, $t8, 0x40
    ctx->r8 = ADD32(ctx->r24, 0X40);
    // 0x08004208: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x0800420C: b           L_08004240
    // 0x08004210: sh          $t1, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r9;
        goto L_08004240;
    // 0x08004210: sh          $t1, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r9;
L_08004214:
    // 0x08004214: beql        $t2, $zero, L_08004234
    if (ctx->r10 == 0) {
        // 0x08004218: lhu         $t5, 0xD8($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0XD8);
            goto L_08004234;
    }
    goto skip_3;
    // 0x08004218: lhu         $t5, 0xD8($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD8);
    skip_3:
    // 0x0800421C: lhu         $t9, 0xD8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XD8);
    // 0x08004220: addiu       $t3, $t9, 0x30
    ctx->r11 = ADD32(ctx->r25, 0X30);
    // 0x08004224: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x08004228: b           L_08004240
    // 0x0800422C: sh          $t4, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r12;
        goto L_08004240;
    // 0x0800422C: sh          $t4, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r12;
    // 0x08004230: lhu         $t5, 0xD8($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD8);
L_08004234:
    // 0x08004234: addiu       $t6, $t5, 0x20
    ctx->r14 = ADD32(ctx->r13, 0X20);
    // 0x08004238: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x0800423C: sh          $t7, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r15;
L_08004240:
    // 0x08004240: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x08004244: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004248: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x0800424C: bnel        $t0, $zero, L_08004270
    if (ctx->r8 != 0) {
        // 0x08004250: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_08004270;
    }
    goto skip_4;
    // 0x08004250: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x08004254: lhu         $a3, 0xDA($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XDA);
    // 0x08004258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800425C: addiu       $t9, $t9, -0x2004
    ctx->r25 = ADD32(ctx->r25, -0X2004);
    // 0x08004260: addiu       $t1, $a3, 0x80
    ctx->r9 = ADD32(ctx->r7, 0X80);
    // 0x08004264: jalr        $t9
    // 0x08004268: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08004268: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_16:
    // 0x0800426C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08004270:
    // 0x08004270: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x08004274: jalr        $t9
    // 0x08004278: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08004278: nop

    after_17:
    // 0x0800427C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E50) << 16);
    // 0x08004280: ldc1        $f4, 0x6E50($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E50));
    // 0x08004284: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08004288: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E58) << 16);
    // 0x0800428C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x08004290: ldc1        $f8, 0x6E58($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E58));
    // 0x08004294: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x08004298: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x0800429C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080042A0: swc1        $f16, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f16.u32l;
    // 0x080042A4: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x080042A8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080042AC: addiu       $t3, $a0, 0x340
    ctx->r11 = ADD32(ctx->r4, 0X340);
    // 0x080042B0: jalr        $t9
    // 0x080042B4: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080042B4: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    after_18:
    // 0x080042B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E60) << 16);
    // 0x080042BC: ldc1        $f4, 0x6E60($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E60));
    // 0x080042C0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x080042C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080042C8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x080042CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E70) << 16);
    // 0x080042D0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x080042D4: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x080042D8: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x080042DC: nop

    // 0x080042E0: bc1f        L_08004308
    if (!c1cs) {
        // 0x080042E4: nop
    
            goto L_08004308;
    }
    // 0x080042E4: nop

    // 0x080042E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(22, 0X6E68) << 16);
    // 0x080042EC: ldc1        $f16, 0x6E68($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E68));
    // 0x080042F0: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x080042F4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x080042F8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x080042FC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08004300: b           L_08004310
    // 0x08004304: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
        goto L_08004310;
    // 0x08004304: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
L_08004308:
    // 0x08004308: lwc1        $f6, 0x6E70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(22, 0X6E70));
    // 0x0800430C: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
L_08004310:
    // 0x08004310: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x08004314: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x08004318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800431C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004320: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08004324: jr          $ra
    // 0x08004328: nop

    TRACE_RETURN()
    return;
    // 0x08004328: nop

;}
RECOMP_FUNC void func_080058F4_6CDB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080058F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080058F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080058FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005900: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005904: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005908: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800590C: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x08005910: lui         $a1, 0xC37E
    ctx->r5 = S32(0XC37E << 16);
    // 0x08005914: lui         $a2, 0x439B
    ctx->r6 = S32(0X439B << 16);
    // 0x08005918: jalr        $t9
    // 0x0800591C: lui         $a3, 0x4214
    ctx->r7 = S32(0X4214 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800591C: lui         $a3, 0x4214
    ctx->r7 = S32(0X4214 << 16);
    after_0:
    // 0x08005920: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08005924: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005928: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800592C: lui         $a1, 0xC3A7
    ctx->r5 = S32(0XC3A7 << 16);
    // 0x08005930: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x08005934: lui         $a3, 0x4331
    ctx->r7 = S32(0X4331 << 16);
    // 0x08005938: jalr        $t9
    // 0x0800593C: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800593C: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    after_1:
    // 0x08005940: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08005944: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08005948: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800594C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08005950: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x08005954: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08005958: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800595C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08005960: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x08005964: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x08005968: jalr        $t9
    // 0x0800596C: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800596C: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    after_2:
    // 0x08005970: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005974: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005978: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X5994) << 16);
    // 0x0800597C: jalr        $t9
    // 0x08005980: addiu       $a0, $a0, 0x5994
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5994));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005980: addiu       $a0, $a0, 0x5994
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X5994));
    after_3:
    // 0x08005984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800598C: jr          $ra
    // 0x08005990: nop

    TRACE_RETURN()
    return;
    // 0x08005990: nop

;}
RECOMP_FUNC void func_08001B1C_6C9D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B20: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B2C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001B30: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08001B34: jalr        $t9
    // 0x08001B38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001B3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001B40: bne         $v0, $zero, L_08001C0C
    if (ctx->r2 != 0) {
        // 0x08001B44: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08001C0C;
    }
    // 0x08001B44: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B48: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001B4C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001B50: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001B54: bnel        $t7, $zero, L_08001BB0
    if (ctx->r15 != 0) {
        // 0x08001B58: lhu         $t1, 0x7E($a1)
        ctx->r9 = MEM_HU(ctx->r5, 0X7E);
            goto L_08001BB0;
    }
    goto skip_0;
    // 0x08001B58: lhu         $t1, 0x7E($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X7E);
    skip_0:
    // 0x08001B5C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08001B60: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001B64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001B68: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08001B6C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001B70: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x08001B74: nop

    // 0x08001B78: bc1fl       L_08001C10
    if (!c1cs) {
        // 0x08001B7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001C10;
    }
    goto skip_1;
    // 0x08001B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08001B80: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001B84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001B88: nop

    // 0x08001B8C: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x08001B90: nop

    // 0x08001B94: bc1fl       L_08001C10
    if (!c1cs) {
        // 0x08001B98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001C10;
    }
    goto skip_2;
    // 0x08001B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x08001B9C: lhu         $t8, 0x16($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X16);
    // 0x08001BA0: addiu       $t0, $t8, -0x8
    ctx->r8 = ADD32(ctx->r24, -0X8);
    // 0x08001BA4: b           L_08001C0C
    // 0x08001BA8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
        goto L_08001C0C;
    // 0x08001BA8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x08001BAC: lhu         $t1, 0x7E($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X7E);
L_08001BB0:
    // 0x08001BB0: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08001BB4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08001BB8: bgez        $t1, L_08001BC8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001BBC: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_08001BC8;
    }
    // 0x08001BBC: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x08001BC0: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x08001BC4: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_08001BC8:
    // 0x08001BC8: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x08001BCC: bne         $t3, $zero, L_08001C0C
    if (ctx->r11 != 0) {
        // 0x08001BD0: sh          $t2, 0x7E($a1)
        MEM_H(0X7E, ctx->r5) = ctx->r10;
            goto L_08001C0C;
    }
    // 0x08001BD0: sh          $t2, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r10;
    // 0x08001BD4: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x08001BD8: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08001BDC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08001BE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001BE4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001BE8: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08001BEC: sw          $t5, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r13;
    // 0x08001BF0: jalr        $t9
    // 0x08001BF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001BF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08001BF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(22, 0X1C1C) << 16);
    // 0x08001C04: jalr        $t9
    // 0x08001C08: addiu       $a0, $a0, 0x1C1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1C1C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C08: addiu       $a0, $a0, 0x1C1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(22, 0X1C1C));
    after_2:
L_08001C0C:
    // 0x08001C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001C10:
    // 0x08001C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C14: jr          $ra
    // 0x08001C18: nop

    TRACE_RETURN()
    return;
    // 0x08001C18: nop

;}
RECOMP_FUNC void func_08003810_6CBA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003810: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003814: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003818: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800381C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08003820: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x08003824: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800382C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003830: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x08003834: jalr        $t9
    // 0x08003838: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003838: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_0:
    // 0x0800383C: beq         $v0, $zero, L_0800386C
    if (ctx->r2 == 0) {
        // 0x08003840: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_0800386C;
    }
    // 0x08003840: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003844: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003848: lw          $t7, 0xD4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XD4);
    // 0x0800384C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003850: addiu       $t9, $t9, 0x7114
    ctx->r25 = ADD32(ctx->r25, 0X7114);
    // 0x08003854: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08003858: sw          $t8, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->r24;
    // 0x0800385C: jalr        $t9
    // 0x08003860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003864: b           L_0800393C
    // 0x08003868: nop

        goto L_0800393C;
    // 0x08003868: nop

L_0800386C:
    // 0x0800386C: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x08003870: beq         $t2, $zero, L_0800393C
    if (ctx->r10 == 0) {
        // 0x08003874: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_0800393C;
    }
    // 0x08003874: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003878: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x0800387C: lw          $t3, 0xD4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XD4);
    // 0x08003880: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08003884: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x08003888: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x0800388C: sw          $t4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->r12;
    // 0x08003890: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003894: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08003898: lui         $at, 0xC3CA
    ctx->r1 = S32(0XC3CA << 16);
    // 0x0800389C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080038A0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080038A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038A8: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x080038AC: addiu       $t9, $t9, -0x7184
    ctx->r25 = ADD32(ctx->r25, -0X7184);
    // 0x080038B0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x080038B4: nop

    // 0x080038B8: bc1tl       L_080038DC
    if (c1cs) {
        // 0x080038BC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_080038DC;
    }
    goto skip_0;
    // 0x080038BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x080038C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080038C4: nop

    // 0x080038C8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x080038CC: nop

    // 0x080038D0: bc1fl       L_080038E8
    if (!c1cs) {
        // 0x080038D4: lw          $t6, 0x34($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X34);
            goto L_080038E8;
    }
    goto skip_1;
    // 0x080038D4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x080038D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_080038DC:
    // 0x080038DC: nop

    // 0x080038E0: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x080038E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
L_080038E8:
    // 0x080038E8: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080038EC: lui         $at, 0xC369
    ctx->r1 = S32(0XC369 << 16);
    // 0x080038F0: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x080038F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080038F8: lui         $at, 0x4363
    ctx->r1 = S32(0X4363 << 16);
    // 0x080038FC: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003900: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08003904: nop

    // 0x08003908: bc1tl       L_0800392C
    if (c1cs) {
        // 0x0800390C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_0800392C;
    }
    goto skip_2;
    // 0x0800390C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_2:
    // 0x08003910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003914: nop

    // 0x08003918: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x0800391C: nop

    // 0x08003920: bc1f        L_08003934
    if (!c1cs) {
        // 0x08003924: nop
    
            goto L_08003934;
    }
    // 0x08003924: nop

    // 0x08003928: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_0800392C:
    // 0x0800392C: nop

    // 0x08003930: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
L_08003934:
    // 0x08003934: jalr        $t9
    // 0x08003938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_0800393C:
    // 0x0800393C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003940: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003944: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
    // 0x08003948: andi        $t7, $v1, 0x1000
    ctx->r15 = ctx->r3 & 0X1000;
    // 0x0800394C: bnel        $t7, $zero, L_08003E54
    if (ctx->r15 != 0) {
        // 0x08003950: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08003E54;
    }
    goto skip_3;
    // 0x08003950: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x08003954: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x08003958: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x0800395C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x08003960: beql        $t8, $zero, L_080039B4
    if (ctx->r24 == 0) {
        // 0x08003964: andi        $t5, $v1, 0x2
        ctx->r13 = ctx->r3 & 0X2;
            goto L_080039B4;
    }
    goto skip_4;
    // 0x08003964: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
    skip_4:
    // 0x08003968: lbu         $t3, 0x4C($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4C);
    // 0x0800396C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x08003970: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x08003974: bne         $t3, $at, L_080039A0
    if (ctx->r11 != ctx->r1) {
        // 0x08003978: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_080039A0;
    }
    // 0x08003978: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800397C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003980: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003984: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003988: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800398C: jalr        $t9
    // 0x08003990: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003990: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_3:
    // 0x08003994: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003998: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x0800399C: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
L_080039A0:
    // 0x080039A0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080039A4: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x080039A8: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    // 0x080039AC: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
    // 0x080039B0: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
L_080039B4:
    // 0x080039B4: beq         $t5, $zero, L_08003ABC
    if (ctx->r13 == 0) {
        // 0x080039B8: lui         $t7, 0x8020
        ctx->r15 = S32(0X8020 << 16);
            goto L_08003ABC;
    }
    // 0x080039B8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080039BC: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080039C0: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x080039C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080039C8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080039CC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080039D0: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
    // 0x080039D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080039D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080039DC: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x080039E0: bne         $t8, $zero, L_08003A00
    if (ctx->r24 != 0) {
        // 0x080039E4: andi        $t2, $v1, 0x20
        ctx->r10 = ctx->r3 & 0X20;
            goto L_08003A00;
    }
    // 0x080039E4: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x080039E8: bne         $t2, $zero, L_08003A00
    if (ctx->r10 != 0) {
        // 0x080039EC: andi        $t3, $v1, 0x40
        ctx->r11 = ctx->r3 & 0X40;
            goto L_08003A00;
    }
    // 0x080039EC: andi        $t3, $v1, 0x40
    ctx->r11 = ctx->r3 & 0X40;
    // 0x080039F0: bne         $t3, $zero, L_08003A00
    if (ctx->r11 != 0) {
        // 0x080039F4: andi        $t9, $v1, 0x80
        ctx->r25 = ctx->r3 & 0X80;
            goto L_08003A00;
    }
    // 0x080039F4: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x080039F8: beql        $t9, $zero, L_08003A58
    if (ctx->r25 == 0) {
        // 0x080039FC: lw          $t8, 0xDC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XDC);
            goto L_08003A58;
    }
    goto skip_5;
    // 0x080039FC: lw          $t8, 0xDC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XDC);
    skip_5:
L_08003A00:
    // 0x08003A00: lhu         $v0, 0xE8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003A04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A08: addiu       $t9, $t9, -0x1F68
    ctx->r25 = ADD32(ctx->r25, -0X1F68);
    // 0x08003A0C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x08003A10: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08003A14: beq         $at, $zero, L_08003A24
    if (ctx->r1 == 0) {
        // 0x08003A18: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_08003A24;
    }
    // 0x08003A18: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08003A1C: b           L_08003A3C
    // 0x08003A20: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003A3C;
    // 0x08003A20: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
L_08003A24:
    // 0x08003A24: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x08003A28: sh          $t4, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r12;
    // 0x08003A2C: lw          $t5, 0x184($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X184);
    // 0x08003A30: addiu       $at, $zero, -0xF1
    ctx->r1 = ADD32(0, -0XF1);
    // 0x08003A34: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x08003A38: sw          $t6, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r14;
L_08003A3C:
    // 0x08003A3C: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003A40: jalr        $t9
    // 0x08003A44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003A44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x08003A48: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003A4C: b           L_08003A5C
    // 0x08003A50: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
        goto L_08003A5C;
    // 0x08003A50: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003A54: lw          $t8, 0xDC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XDC);
L_08003A58:
    // 0x08003A58: sw          $zero, 0x60($t8)
    MEM_W(0X60, ctx->r24) = 0;
L_08003A5C:
    // 0x08003A5C: lw          $t2, 0x184($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X184);
    // 0x08003A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003A64: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003A68: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x08003A6C: beq         $t3, $zero, L_08003E50
    if (ctx->r11 == 0) {
        // 0x08003A70: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_08003E50;
    }
    // 0x08003A70: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003A74: lhu         $v0, 0xE8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003A78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A7C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08003A80: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08003A84: blez        $v0, L_08003A94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08003A88: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_08003A94;
    }
    // 0x08003A88: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08003A8C: b           L_08003AA8
    // 0x08003A90: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003AA8;
    // 0x08003A90: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
L_08003A94:
    // 0x08003A94: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x08003A98: lw          $t4, 0x184($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X184);
    // 0x08003A9C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08003AA0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08003AA4: sw          $t5, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r13;
L_08003AA8:
    // 0x08003AA8: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003AAC: jalr        $t9
    // 0x08003AB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003AB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_5:
    // 0x08003AB4: b           L_08003E54
    // 0x08003AB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08003E54;
    // 0x08003AB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08003ABC:
    // 0x08003ABC: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08003AC0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08003AC4: andi        $t2, $v1, 0x1
    ctx->r10 = ctx->r3 & 0X1;
    // 0x08003AC8: lbu         $t8, 0x4C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4C);
    // 0x08003ACC: bnel        $t8, $at, L_08003B44
    if (ctx->r24 != ctx->r1) {
        // 0x08003AD0: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_08003B44;
    }
    goto skip_6;
    // 0x08003AD0: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    skip_6:
    // 0x08003AD4: beq         $t2, $zero, L_08003B40
    if (ctx->r10 == 0) {
        // 0x08003AD8: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_08003B40;
    }
    // 0x08003AD8: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x08003ADC: bne         $t3, $zero, L_08003B40
    if (ctx->r11 != 0) {
        // 0x08003AE0: addiu       $t4, $zero, 0x130
        ctx->r12 = ADD32(0, 0X130);
            goto L_08003B40;
    }
    // 0x08003AE0: addiu       $t4, $zero, 0x130
    ctx->r12 = ADD32(0, 0X130);
    // 0x08003AE4: sh          $t4, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r12;
    // 0x08003AE8: lw          $t5, 0x184($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X184);
    // 0x08003AEC: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x08003AF0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003AF4: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x08003AF8: sw          $t6, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r14;
    // 0x08003AFC: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x08003B00: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003B04: addiu       $t8, $t8, -0xBE0
    ctx->r24 = ADD32(ctx->r24, -0XBE0);
    // 0x08003B08: sw          $t7, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r15;
    // 0x08003B0C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x08003B10: jalr        $t9
    // 0x08003B14: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003B14: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_6:
    // 0x08003B18: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003B1C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003B20: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003B24: addiu       $a0, $zero, 0x2A4
    ctx->r4 = ADD32(0, 0X2A4);
    // 0x08003B28: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08003B2C: jalr        $t9
    // 0x08003B30: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003B30: lui         $a3, 0x4496
    ctx->r7 = S32(0X4496 << 16);
    after_7:
    // 0x08003B34: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003B38: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003B3C: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003B40:
    // 0x08003B40: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
L_08003B44:
    // 0x08003B44: beql        $t2, $zero, L_08003C24
    if (ctx->r10 == 0) {
        // 0x08003B48: andi        $t8, $v1, 0x10
        ctx->r24 = ctx->r3 & 0X10;
            goto L_08003C24;
    }
    goto skip_7;
    // 0x08003B48: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    skip_7:
    // 0x08003B4C: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x08003B50: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x08003B54: lhu         $v0, 0xE8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003B58: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08003B5C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x08003B60: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003B64: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x08003B68: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x08003B6C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003B70: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08003B74: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x08003B78: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x08003B7C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08003B80: slti        $at, $v0, 0x91
    ctx->r1 = SIGNED(ctx->r2) < 0X91 ? 1 : 0;
    // 0x08003B84: bne         $at, $zero, L_08003B94
    if (ctx->r1 != 0) {
        // 0x08003B88: sw          $t8, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r24;
            goto L_08003B94;
    }
    // 0x08003B88: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08003B8C: b           L_08003BB4
    // 0x08003B90: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003BB4;
    // 0x08003B90: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
L_08003B94:
    // 0x08003B94: addiu       $t9, $zero, 0x90
    ctx->r25 = ADD32(0, 0X90);
    // 0x08003B98: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
    // 0x08003B9C: lw          $t2, 0x184($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X184);
    // 0x08003BA0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x08003BA4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08003BA8: sw          $t3, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r11;
    // 0x08003BAC: ori         $t5, $t3, 0x20
    ctx->r13 = ctx->r11 | 0X20;
    // 0x08003BB0: sw          $t5, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r13;
L_08003BB4:
    // 0x08003BB4: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BBC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003BC0: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x08003BC4: bne         $at, $zero, L_08003C00
    if (ctx->r1 != 0) {
        // 0x08003BC8: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_08003C00;
    }
    // 0x08003BC8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003BCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BD0: addiu       $t9, $t9, -0x1F68
    ctx->r25 = ADD32(ctx->r25, -0X1F68);
    // 0x08003BD4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08003BD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BE0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08003BE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003BE8: jalr        $t9
    // 0x08003BEC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003BEC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_8:
    // 0x08003BF0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003BF4: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003BF8: b           L_08003C20
    // 0x08003BFC: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
        goto L_08003C20;
    // 0x08003BFC: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003C00:
    // 0x08003C00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C04: addiu       $t9, $t9, -0x1F68
    ctx->r25 = ADD32(ctx->r25, -0X1F68);
    // 0x08003C08: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08003C0C: jalr        $t9
    // 0x08003C10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003C10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_9:
    // 0x08003C14: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003C18: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003C1C: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003C20:
    // 0x08003C20: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
L_08003C24:
    // 0x08003C24: beq         $t8, $zero, L_08003CDC
    if (ctx->r24 == 0) {
        // 0x08003C28: addiu       $at, $zero, -0x41
        ctx->r1 = ADD32(0, -0X41);
            goto L_08003CDC;
    }
    // 0x08003C28: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x08003C2C: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08003C30: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003C34: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x08003C38: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08003C3C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x08003C40: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003C44: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x08003C48: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x08003C4C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003C50: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x08003C54: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x08003C58: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08003C5C: slti        $at, $a1, 0x90
    ctx->r1 = SIGNED(ctx->r5) < 0X90 ? 1 : 0;
    // 0x08003C60: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08003C64: bne         $at, $zero, L_08003C74
    if (ctx->r1 != 0) {
        // 0x08003C68: addiu       $t1, $t1, -0x1F68
        ctx->r9 = ADD32(ctx->r9, -0X1F68);
            goto L_08003C74;
    }
    // 0x08003C68: addiu       $t1, $t1, -0x1F68
    ctx->r9 = ADD32(ctx->r9, -0X1F68);
    // 0x08003C6C: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x08003C70: bne         $at, $zero, L_08003C80
    if (ctx->r1 != 0) {
        // 0x08003C74: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_08003C80;
    }
L_08003C74:
    // 0x08003C74: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08003C78: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
    // 0x08003C7C: andi        $a1, $t9, 0xFFFF
    ctx->r5 = ctx->r25 & 0XFFFF;
L_08003C80:
    // 0x08003C80: addiu       $v0, $a1, -0x4
    ctx->r2 = ADD32(ctx->r5, -0X4);
    // 0x08003C84: slti        $at, $v0, 0x91
    ctx->r1 = SIGNED(ctx->r2) < 0X91 ? 1 : 0;
    // 0x08003C88: bne         $at, $zero, L_08003C98
    if (ctx->r1 != 0) {
        // 0x08003C8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003C98;
    }
    // 0x08003C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C90: b           L_08003CB8
    // 0x08003C94: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003CB8;
    // 0x08003C94: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
L_08003C98:
    // 0x08003C98: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x08003C9C: sh          $t8, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r24;
    // 0x08003CA0: lw          $t2, 0x184($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X184);
    // 0x08003CA4: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x08003CA8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08003CAC: sw          $t3, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r11;
    // 0x08003CB0: ori         $t5, $t3, 0x20
    ctx->r13 = ctx->r11 | 0X20;
    // 0x08003CB4: sw          $t5, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r13;
L_08003CB8:
    // 0x08003CB8: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003CBC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08003CC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003CC4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003CC8: jalr        $t1
    // 0x08003CCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_10;
    // 0x08003CCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_10:
    // 0x08003CD0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003CD4: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003CD8: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003CDC:
    // 0x08003CDC: andi        $t7, $v1, 0xC0
    ctx->r15 = ctx->r3 & 0XC0;
    // 0x08003CE0: beq         $t7, $zero, L_08003DC8
    if (ctx->r15 == 0) {
        // 0x08003CE4: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_08003DC8;
    }
    // 0x08003CE4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08003CE8: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x08003CEC: sw          $t9, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r25;
    // 0x08003CF0: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003CF4: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x08003CF8: addiu       $t1, $t1, -0x1F68
    ctx->r9 = ADD32(ctx->r9, -0X1F68);
    // 0x08003CFC: slti        $at, $a1, 0x90
    ctx->r1 = SIGNED(ctx->r5) < 0X90 ? 1 : 0;
    // 0x08003D00: bne         $at, $zero, L_08003D10
    if (ctx->r1 != 0) {
        // 0x08003D04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003D10;
    }
    // 0x08003D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D08: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x08003D0C: bne         $at, $zero, L_08003D18
    if (ctx->r1 != 0) {
        // 0x08003D10: addiu       $t8, $zero, 0x90
        ctx->r24 = ADD32(0, 0X90);
            goto L_08003D18;
    }
L_08003D10:
    // 0x08003D10: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x08003D14: sh          $t8, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r24;
L_08003D18:
    // 0x08003D18: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
    // 0x08003D1C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x08003D20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003D24: andi        $t2, $v1, 0x40
    ctx->r10 = ctx->r3 & 0X40;
    // 0x08003D28: beq         $t2, $zero, L_08003D38
    if (ctx->r10 == 0) {
        // 0x08003D2C: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_08003D38;
    }
    // 0x08003D2C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003D30: sh          $t3, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r11;
    // 0x08003D34: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003D38:
    // 0x08003D38: andi        $t4, $v1, 0x80
    ctx->r12 = ctx->r3 & 0X80;
    // 0x08003D3C: beq         $t4, $zero, L_08003D4C
    if (ctx->r12 == 0) {
        // 0x08003D40: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_08003D4C;
    }
    // 0x08003D40: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08003D44: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x08003D48: sh          $t5, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r13;
L_08003D4C:
    // 0x08003D4C: lhu         $t6, 0xD4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XD4);
    // 0x08003D50: lhu         $t7, 0xE8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003D54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08003D58: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x08003D5C: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08003D60: beql        $at, $zero, L_08003D74
    if (ctx->r1 == 0) {
        // 0x08003D64: sh          $t9, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r25;
            goto L_08003D74;
    }
    goto skip_8;
    // 0x08003D64: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
    skip_8:
    // 0x08003D68: b           L_08003DB0
    // 0x08003D6C: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003DB0;
    // 0x08003D6C: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
    // 0x08003D70: sh          $t9, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r25;
L_08003D74:
    // 0x08003D74: lw          $t8, 0x184($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X184);
    // 0x08003D78: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x08003D7C: and         $t2, $t8, $at
    ctx->r10 = ctx->r24 & ctx->r1;
    // 0x08003D80: sw          $t2, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r10;
    // 0x08003D84: ori         $t4, $t2, 0x100
    ctx->r12 = ctx->r10 | 0X100;
    // 0x08003D88: sw          $t4, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r12;
    // 0x08003D8C: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x08003D90: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x08003D94: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x08003D98: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x08003D9C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08003DA0: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x08003DA4: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x08003DA8: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x08003DAC: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_08003DB0:
    // 0x08003DB0: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003DB4: jalr        $t1
    // 0x08003DB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
        goto after_11;
    // 0x08003DB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_11:
    // 0x08003DBC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003DC0: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08003DC4: lw          $v1, 0x184($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X184);
L_08003DC8:
    // 0x08003DC8: andi        $t4, $v1, 0x100
    ctx->r12 = ctx->r3 & 0X100;
    // 0x08003DCC: beq         $t4, $zero, L_08003E24
    if (ctx->r12 == 0) {
        // 0x08003DD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003E24;
    }
    // 0x08003DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003DD4: lhu         $v0, 0xE8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003DD8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003DDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003DE0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08003DE4: blez        $v0, L_08003DF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x08003DE8: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_08003DF4;
    }
    // 0x08003DE8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08003DEC: b           L_08003E08
    // 0x08003DF0: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
        goto L_08003E08;
    // 0x08003DF0: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
L_08003DF4:
    // 0x08003DF4: sh          $zero, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = 0;
    // 0x08003DF8: lw          $t5, 0x184($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X184);
    // 0x08003DFC: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08003E00: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x08003E04: sw          $t6, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->r14;
L_08003E08:
    // 0x08003E08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E0C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08003E10: lhu         $a1, 0xE8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE8);
    // 0x08003E14: jalr        $t9
    // 0x08003E18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08003E18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_12:
    // 0x08003E1C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08003E20: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
L_08003E24:
    // 0x08003E24: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x08003E28: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08003E2C: swc1        $f16, 0x140($t0)
    MEM_W(0X140, ctx->r8) = ctx->f16.u32l;
    // 0x08003E30: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08003E34: swc1        $f18, 0x144($t0)
    MEM_W(0X144, ctx->r8) = ctx->f18.u32l;
    // 0x08003E38: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08003E3C: swc1        $f4, 0x148($t0)
    MEM_W(0X148, ctx->r8) = ctx->f4.u32l;
    // 0x08003E40: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x08003E44: sh          $t8, 0x14C($t0)
    MEM_H(0X14C, ctx->r8) = ctx->r24;
    // 0x08003E48: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x08003E4C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
L_08003E50:
    // 0x08003E50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08003E54:
    // 0x08003E54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003E58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003E5C: jr          $ra
    // 0x08003E60: nop

    TRACE_RETURN()
    return;
    // 0x08003E60: nop

;}
