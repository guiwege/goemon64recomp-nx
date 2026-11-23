#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080002B0_711DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080002B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080002BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080002C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080002C4: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x080002C8: lw          $t6, 0xE4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE4);
    // 0x080002CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080002D0: sltiu       $at, $t7, 0x1B
    ctx->r1 = ctx->r15 < 0X1B ? 1 : 0;
    // 0x080002D4: beq         $at, $zero, L_08001130
    if (ctx->r1 == 0) {
        // 0x080002D8: lw          $v1, 0x18($t6)
        ctx->r3 = MEM_W(ctx->r14, 0X18);
            goto L_08001130;
    }
    // 0x080002D8: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x080002DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x080002E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(46, 0X1414) << 16);
    // 0x080002E4: addu        $at, $at, $t7
    gpr jr_addend_080002EC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080002E8: lw          $t7, 0x1414($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(46, 0X1414));
    // 0x080002EC: jr          $t7
    // 0x080002F0: nop

    switch (jr_addend_080002EC >> 2) {
        case 0: goto L_080002F4; break;
        case 1: goto L_080003B0; break;
        case 2: goto L_080004B0; break;
        case 3: goto L_08000570; break;
        case 4: goto L_08000674; break;
        case 5: goto L_080005B4; break;
        case 6: goto L_08000600; break;
        case 7: goto L_080006E4; break;
        case 8: goto L_08000734; break;
        case 9: goto L_08001130; break;
        case 10: goto L_080009C4; break;
        case 11: goto L_08000A2C; break;
        case 12: goto L_08000A64; break;
        case 13: goto L_08000B14; break;
        case 14: goto L_08000CA4; break;
        case 15: goto L_08000D00; break;
        case 16: goto L_08000D34; break;
        case 17: goto L_08000D84; break;
        case 18: goto L_08000DB8; break;
        case 19: goto L_08000E04; break;
        case 20: goto L_08000E3C; break;
        case 21: goto L_08000F48; break;
        case 22: goto L_08000768; break;
        case 23: goto L_08000858; break;
        case 24: goto L_08000F0C; break;
        case 25: goto L_08000FE8; break;
        case 26: goto L_08000F9C; break;
        default: switch_error(__func__, 0x080002EC, 0x08001414);
    }
    // 0x080002F0: nop

L_080002F4:
    // 0x080002F4: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x080002F8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080002FC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000300: bne         $t8, $at, L_08000378
    if (ctx->r24 != ctx->r1) {
        // 0x08000304: lui         $a1, 0x42A8
        ctx->r5 = S32(0X42A8 << 16);
            goto L_08000378;
    }
    // 0x08000304: lui         $a1, 0x42A8
    ctx->r5 = S32(0X42A8 << 16);
    // 0x08000308: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800030C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000310: jalr        $t9
    // 0x08000314: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000314: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x08000318: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800031C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000320: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000324: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000328: lui         $a2, 0x42D6
    ctx->r6 = S32(0X42D6 << 16);
    // 0x0800032C: jalr        $t9
    // 0x08000330: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000330: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_1:
    // 0x08000334: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000338: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800033C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000340: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000344: lui         $a2, 0x4268
    ctx->r6 = S32(0X4268 << 16);
    // 0x08000348: jalr        $t9
    // 0x0800034C: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800034C: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    after_2:
    // 0x08000350: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000358: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x0800035C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x08000360: addiu       $t9, $t9, 0x3D40
    ctx->r25 = ADD32(ctx->r25, 0X3D40);
    // 0x08000364: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x08000368: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x0800036C: jalr        $t9
    // 0x08000370: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000370: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    after_3:
    // 0x08000374: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_08000378:
    // 0x08000378: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x0800037C: lbu         $t2, 0xC($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XC);
    // 0x08000380: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000384: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000388: beq         $t2, $zero, L_08001130
    if (ctx->r10 == 0) {
        // 0x0800038C: nop
    
            goto L_08001130;
    }
    // 0x0800038C: nop

    // 0x08000390: jalr        $t9
    // 0x08000394: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000394: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_4:
    // 0x08000398: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x0800039C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_08001130;
    }
    // 0x0800039C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080003A0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080003A4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x080003A8: b           L_08001130
    // 0x080003AC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08001130;
    // 0x080003AC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_080003B0:
    // 0x080003B0: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
    // 0x080003B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080003B8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080003BC: bne         $t4, $at, L_08000458
    if (ctx->r12 != ctx->r1) {
        // 0x080003C0: addiu       $a1, $zero, 0x5E
        ctx->r5 = ADD32(0, 0X5E);
            goto L_08000458;
    }
    // 0x080003C0: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    // 0x080003C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C8: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080003CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080003D0: jalr        $t9
    // 0x080003D4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003D4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_5:
    // 0x080003D8: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x080003DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080003E0: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x080003E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080003E8: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x080003EC: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
    // 0x080003F0: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x080003F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080003F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003FC: swc1        $f6, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f6.u32l;
    // 0x08000400: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000404: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000408: addiu       $a1, $zero, 0x1480
    ctx->r5 = ADD32(0, 0X1480);
    // 0x0800040C: swc1        $f8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f8.u32l;
    // 0x08000410: jalr        $t9
    // 0x08000414: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000414: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_6:
    // 0x08000418: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800041C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000420: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000424: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000428: lui         $a2, 0x41E8
    ctx->r6 = S32(0X41E8 << 16);
    // 0x0800042C: jalr        $t9
    // 0x08000430: lui         $a3, 0xC244
    ctx->r7 = S32(0XC244 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000430: lui         $a3, 0xC244
    ctx->r7 = S32(0XC244 << 16);
    after_7:
    // 0x08000434: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000438: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800043C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000440: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000444: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08000448: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x0800044C: jalr        $t9
    // 0x08000450: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000450: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    after_8:
    // 0x08000454: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_08000458:
    // 0x08000458: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800045C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000460: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000464: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000468: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0800046C: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x08000470: jalr        $t9
    // 0x08000474: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000474: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    after_9:
    // 0x08000478: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800047C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000480: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000484: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x08000488: bne         $at, $zero, L_08001130
    if (ctx->r1 != 0) {
        // 0x0800048C: nop
    
            goto L_08001130;
    }
    // 0x0800048C: nop

    // 0x08000490: jalr        $t9
    // 0x08000494: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000494: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x08000498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800049C: bne         $v0, $at, L_08001130
    if (ctx->r2 != ctx->r1) {
        // 0x080004A0: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_08001130;
    }
    // 0x080004A0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080004A4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080004A8: b           L_08001130
    // 0x080004AC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001130;
    // 0x080004AC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080004B0:
    // 0x080004B0: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x080004B4: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x080004B8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080004BC: bne         $t3, $at, L_08001130
    if (ctx->r11 != ctx->r1) {
        // 0x080004C0: addiu       $t0, $t0, -0x39FC
        ctx->r8 = ADD32(ctx->r8, -0X39FC);
            goto L_08001130;
    }
    // 0x080004C0: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x080004C4: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x080004C8: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
    // 0x080004CC: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x080004D0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080004D4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080004D8: lw          $t6, 0x5C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X5C);
    // 0x080004DC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080004E0: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x080004E4: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x080004E8: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x080004EC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080004F0: addiu       $a1, $zero, 0x8EA
    ctx->r5 = ADD32(0, 0X8EA);
    // 0x080004F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x080004F8: sb          $t7, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r15;
    // 0x080004FC: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08000500: sh          $t1, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r9;
    // 0x08000504: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000508: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800050C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000510: sh          $zero, 0x14($t2)
    MEM_H(0X14, ctx->r10) = 0;
    // 0x08000514: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08000518: sh          $zero, 0x18($t3)
    MEM_H(0X18, ctx->r11) = 0;
    // 0x0800051C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x08000520: sh          $t1, 0x94($t4)
    MEM_H(0X94, ctx->r12) = ctx->r9;
    // 0x08000524: jalr        $t9
    // 0x08000528: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000528: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_11:
    // 0x0800052C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000530: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000534: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000538: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x0800053C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x08000540: jalr        $t9
    // 0x08000544: lui         $a3, 0xC321
    ctx->r7 = S32(0XC321 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000544: lui         $a3, 0xC321
    ctx->r7 = S32(0XC321 << 16);
    after_12:
    // 0x08000548: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800054C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000550: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000554: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x08000558: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    // 0x0800055C: jalr        $t9
    // 0x08000560: lui         $a3, 0xC258
    ctx->r7 = S32(0XC258 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000560: lui         $a3, 0xC258
    ctx->r7 = S32(0XC258 << 16);
    after_13:
    // 0x08000564: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x08000568: b           L_08001130
    // 0x0800056C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08001130;
    // 0x0800056C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000570:
    // 0x08000570: lhu         $v0, 0x16($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X16);
    // 0x08000574: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    // 0x08000578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800057C: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x08000580: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x08000584: bne         $t6, $zero, L_080005AC
    if (ctx->r14 != 0) {
        // 0x08000588: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_080005AC;
    }
    // 0x08000588: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x0800058C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000590: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000594: jalr        $t9
    // 0x08000598: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000598: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    after_14:
    // 0x0800059C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x080005A0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080005A4: b           L_08001130
    // 0x080005A8: sb          $t7, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r15;
        goto L_08001130;
    // 0x080005A8: sb          $t7, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r15;
L_080005AC:
    // 0x080005AC: b           L_08001130
    // 0x080005B0: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
        goto L_08001130;
    // 0x080005B0: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
L_080005B4:
    // 0x080005B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005B8: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080005BC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080005C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080005C4: jalr        $t9
    // 0x080005C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080005C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_15:
    // 0x080005CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005D0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080005D4: jalr        $t9
    // 0x080005D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080005D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_16:
    // 0x080005DC: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x080005E0: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_08001130;
    }
    // 0x080005E0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x080005E4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005E8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080005EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x080005F0: jalr        $t9
    // 0x080005F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080005F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_17:
    // 0x080005F8: b           L_08001130
    // 0x080005FC: nop

        goto L_08001130;
    // 0x080005FC: nop

L_08000600:
    // 0x08000600: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000604: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000608: addiu       $v0, $v0, 0x2500
    ctx->r2 = ADD32(ctx->r2, 0X2500);
    // 0x0800060C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000610: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000614: jalr        $v0
    // 0x08000618: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x08000618: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_18:
    // 0x0800061C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000620: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000624: addiu       $a1, $zero, 0x6A2
    ctx->r5 = ADD32(0, 0X6A2);
    // 0x08000628: jalr        $v0
    // 0x0800062C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_19;
    // 0x0800062C: nop

    after_19:
    // 0x08000630: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000634: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000638: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800063C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x08000640: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x08000644: jalr        $t9
    // 0x08000648: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000648: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    after_20:
    // 0x0800064C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000650: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000654: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000658: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800065C: lui         $a2, 0x4150
    ctx->r6 = S32(0X4150 << 16);
    // 0x08000660: jalr        $t9
    // 0x08000664: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000664: lui         $a3, 0xC338
    ctx->r7 = S32(0XC338 << 16);
    after_21:
    // 0x08000668: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x0800066C: b           L_08001130
    // 0x08000670: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001130;
    // 0x08000670: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000674:
    // 0x08000674: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000678: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x0800067C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000680: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000684: lw          $t3, 0x60($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X60);
    // 0x08000688: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800068C: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x08000690: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08000694: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
    // 0x08000698: jalr        $t9
    // 0x0800069C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800069C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_22:
    // 0x080006A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006A4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080006A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080006AC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x080006B0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x080006B4: jalr        $t9
    // 0x080006B8: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080006B8: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    after_23:
    // 0x080006BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006C0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080006C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080006C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x080006CC: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    // 0x080006D0: jalr        $t9
    // 0x080006D4: lui         $a3, 0xC336
    ctx->r7 = S32(0XC336 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080006D4: lui         $a3, 0xC336
    ctx->r7 = S32(0XC336 << 16);
    after_24:
    // 0x080006D8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x080006DC: b           L_08001130
    // 0x080006E0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08001130;
    // 0x080006E0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_080006E4:
    // 0x080006E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006E8: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080006EC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080006F0: jalr        $t9
    // 0x080006F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080006F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_25:
    // 0x080006F8: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x080006FC: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_08001130;
    }
    // 0x080006FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000700: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x08000704: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000708: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800070C: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08000710: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000714: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000718: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x0800071C: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x08000720: jalr        $t9
    // 0x08000724: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000724: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_26:
    // 0x08000728: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x0800072C: b           L_08001130
    // 0x08000730: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08001130;
    // 0x08000730: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000734:
    // 0x08000734: lbu         $t2, 0x7C($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X7C);
    // 0x08000738: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800073C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000740: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x08000744: beq         $t3, $zero, L_08001130
    if (ctx->r11 == 0) {
        // 0x08000748: nop
    
            goto L_08001130;
    }
    // 0x08000748: nop

    // 0x0800074C: jalr        $t9
    // 0x08000750: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000750: nop

    after_27:
    // 0x08000754: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08000758: addiu       $t4, $zero, 0x16
        ctx->r12 = ADD32(0, 0X16);
            goto L_08001130;
    }
    // 0x08000758: addiu       $t4, $zero, 0x16
    ctx->r12 = ADD32(0, 0X16);
    // 0x0800075C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000760: b           L_08001130
    // 0x08000764: sb          $t4, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r12;
        goto L_08001130;
    // 0x08000764: sb          $t4, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r12;
L_08000768:
    // 0x08000768: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800076C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08000770: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000774: bne         $v1, $at, L_080007E4
    if (ctx->r3 != ctx->r1) {
        // 0x08000778: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_080007E4;
    }
    // 0x08000778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800077C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000780: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000784: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000788: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800078C: jalr        $t9
    // 0x08000790: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000790: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x08000794: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000798: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800079C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080007A0: jalr        $t9
    // 0x080007A4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080007A4: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_29:
    // 0x080007A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007AC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080007B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080007B4: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    // 0x080007B8: lui         $a2, 0x41B8
    ctx->r6 = S32(0X41B8 << 16);
    // 0x080007BC: jalr        $t9
    // 0x080007C0: lui         $a3, 0xC340
    ctx->r7 = S32(0XC340 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080007C0: lui         $a3, 0xC340
    ctx->r7 = S32(0XC340 << 16);
    after_30:
    // 0x080007C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080007C8: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080007CC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080007D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x080007D4: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    // 0x080007D8: jalr        $t9
    // 0x080007DC: lui         $a3, 0xC29E
    ctx->r7 = S32(0XC29E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080007DC: lui         $a3, 0xC29E
    ctx->r7 = S32(0XC29E << 16);
    after_31:
    // 0x080007E0: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_080007E4:
    // 0x080007E4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x080007E8: bne         $v1, $at, L_0800082C
    if (ctx->r3 != ctx->r1) {
        // 0x080007EC: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_0800082C;
    }
    // 0x080007EC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080007F0: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x080007F4: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x080007F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080007FC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000800: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x08000804: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08000808: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800080C: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08000810: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x08000814: addiu       $t9, $t9, 0x3D40
    ctx->r25 = ADD32(ctx->r25, 0X3D40);
    // 0x08000818: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x0800081C: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x08000820: jalr        $t9
    // 0x08000824: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000824: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    after_32:
    // 0x08000828: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_0800082C:
    // 0x0800082C: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x08000830: beq         $t6, $zero, L_08001130
    if (ctx->r14 == 0) {
        // 0x08000834: nop
    
            goto L_08001130;
    }
    // 0x08000834: nop

    // 0x08000838: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800083C: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x08000840: slti        $at, $t7, 0x78
    ctx->r1 = SIGNED(ctx->r15) < 0X78 ? 1 : 0;
    // 0x08000844: bne         $at, $zero, L_08001130
    if (ctx->r1 != 0) {
        // 0x08000848: nop
    
            goto L_08001130;
    }
    // 0x08000848: nop

    // 0x0800084C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000850: b           L_08001130
    // 0x08000854: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08001130;
    // 0x08000854: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000858:
    // 0x08000858: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x0800085C: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x08000860: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08000864: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x08000868: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x0800086C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08000870: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000874: lw          $t4, 0x5C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X5C);
    // 0x08000878: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x0800087C: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000880: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    // 0x08000884: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x08000888: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x0800088C: addiu       $a2, $a2, -0x39EC
    ctx->r6 = ADD32(ctx->r6, -0X39EC);
    // 0x08000890: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08000894: sb          $t5, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r13;
    // 0x08000898: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800089C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080008A0: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x080008A4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x080008A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080008AC: swc1        $f10, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f10.u32l;
    // 0x080008B0: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x080008B4: lui         $at, 0xC2D2
    ctx->r1 = S32(0XC2D2 << 16);
    // 0x080008B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080008BC: swc1        $f16, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f16.u32l;
    // 0x080008C0: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x080008C4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x080008C8: addiu       $a3, $a3, -0x39E4
    ctx->r7 = ADD32(ctx->r7, -0X39E4);
    // 0x080008CC: swc1        $f18, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f18.u32l;
    // 0x080008D0: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x080008D4: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080008D8: addiu       $a1, $zero, 0x89E
    ctx->r5 = ADD32(0, 0X89E);
    // 0x080008DC: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
    // 0x080008E0: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080008E4: sh          $zero, 0x14($t3)
    MEM_H(0X14, ctx->r11) = 0;
    // 0x080008E8: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080008EC: sh          $zero, 0x18($t4)
    MEM_H(0X18, ctx->r12) = 0;
    // 0x080008F0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x080008F4: sh          $t1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r9;
    // 0x080008F8: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x080008FC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x08000900: lwc1        $f0, 0x8($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X8);
    // 0x08000904: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x08000908: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x0800090C: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x08000910: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08000914: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x08000918: lwc1        $f0, 0xC($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0XC);
    // 0x0800091C: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x08000920: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x08000924: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x08000928: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x0800092C: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x08000930: lwc1        $f0, 0x10($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08000934: swc1        $f0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f0.u32l;
    // 0x08000938: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x0800093C: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x08000940: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08000944: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08000948: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800094C: lhu         $v0, 0x16($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X16);
    // 0x08000950: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000954: sh          $v0, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r2;
    // 0x08000958: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x0800095C: sh          $v0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r2;
    // 0x08000960: jalr        $t9
    // 0x08000964: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08000964: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_33:
    // 0x08000968: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800096C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000970: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000974: lui         $a1, 0x423C
    ctx->r5 = S32(0X423C << 16);
    // 0x08000978: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x0800097C: jalr        $t9
    // 0x08000980: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000980: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    after_34:
    // 0x08000984: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000988: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800098C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000990: lui         $a1, 0xC20C
    ctx->r5 = S32(0XC20C << 16);
    // 0x08000994: lui         $a2, 0x4208
    ctx->r6 = S32(0X4208 << 16);
    // 0x08000998: jalr        $t9
    // 0x0800099C: lui         $a3, 0xC318
    ctx->r7 = S32(0XC318 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x0800099C: lui         $a3, 0xC318
    ctx->r7 = S32(0XC318 << 16);
    after_35:
    // 0x080009A0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009A4: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080009A8: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    // 0x080009AC: jalr        $t9
    // 0x080009B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080009B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x080009B4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080009B8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x080009BC: b           L_08001130
    // 0x080009C0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001130;
    // 0x080009C0: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080009C4:
    // 0x080009C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009C8: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080009CC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080009D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080009D4: jalr        $t9
    // 0x080009D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x080009D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_37:
    // 0x080009DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009E0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080009E4: jalr        $t9
    // 0x080009E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x080009E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_38:
    // 0x080009EC: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x080009F0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001130;
    }
    // 0x080009F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009F4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080009F8: jalr        $t9
    // 0x080009FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x080009FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_39:
    // 0x08000A00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A04: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A10: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000A14: jalr        $t9
    // 0x08000A18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000A18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_40:
    // 0x08000A1C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A20: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x08000A24: b           L_08001130
    // 0x08000A28: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08001130;
    // 0x08000A28: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000A2C:
    // 0x08000A2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A30: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000A34: jalr        $t9
    // 0x08000A38: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08000A38: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_41:
    // 0x08000A3C: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000A40: addiu       $t4, $zero, 0xC
        ctx->r12 = ADD32(0, 0XC);
            goto L_08001130;
    }
    // 0x08000A40: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x08000A44: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A48: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000A4C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A50: sb          $t4, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r12;
    // 0x08000A54: jalr        $t9
    // 0x08000A58: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000A58: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_42:
    // 0x08000A5C: b           L_08001130
    // 0x08000A60: nop

        goto L_08001130;
    // 0x08000A60: nop

L_08000A64:
    // 0x08000A64: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000A68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000A70: bne         $t5, $at, L_08000A90
    if (ctx->r13 != ctx->r1) {
        // 0x08000A74: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_08000A90;
    }
    // 0x08000A74: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000A78: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A7C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A80: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08000A84: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000A88: jalr        $t9
    // 0x08000A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08000A8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_43:
L_08000A90:
    // 0x08000A90: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000A94: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000A98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000AA0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x08000AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000AA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000AAC: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x08000AB0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000AB4: beq         $t8, $zero, L_08000ACC
    if (ctx->r24 == 0) {
        // 0x08000AB8: nop
    
            goto L_08000ACC;
    }
    // 0x08000AB8: nop

    // 0x08000ABC: jalr        $t9
    // 0x08000AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08000AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_44:
    // 0x08000AC4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000AC8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
L_08000ACC:
    // 0x08000ACC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AD0: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000AD4: jalr        $t9
    // 0x08000AD8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08000AD8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_45:
    // 0x08000ADC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AE0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000AE4: jalr        $t9
    // 0x08000AE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08000AE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_46:
    // 0x08000AEC: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000AF0: addiu       $t2, $zero, 0xD
        ctx->r10 = ADD32(0, 0XD);
            goto L_08001130;
    }
    // 0x08000AF0: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x08000AF4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AF8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000AFC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000B00: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x08000B04: jalr        $t9
    // 0x08000B08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08000B08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_47:
    // 0x08000B0C: b           L_08001130
    // 0x08000B10: nop

        goto L_08001130;
    // 0x08000B10: nop

L_08000B14:
    // 0x08000B14: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000B18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000B1C: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000B20: bne         $v1, $at, L_08000C10
    if (ctx->r3 != ctx->r1) {
        // 0x08000B24: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000C10;
    }
    // 0x08000B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B2C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B30: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000B34: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000B38: jalr        $t9
    // 0x08000B3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000B3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_48:
    // 0x08000B40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B44: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000B48: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B4C: jalr        $t9
    // 0x08000B50: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000B50: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_49:
    // 0x08000B54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B58: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000B5C: lui         $a2, 0x4384
    ctx->r6 = S32(0X4384 << 16);
    // 0x08000B60: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08000B64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B68: lui         $a1, 0x433D
    ctx->r5 = S32(0X433D << 16);
    // 0x08000B6C: jalr        $t9
    // 0x08000B70: lui         $a3, 0x4304
    ctx->r7 = S32(0X4304 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08000B70: lui         $a3, 0x4304
    ctx->r7 = S32(0X4304 << 16);
    after_50:
    // 0x08000B74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B78: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000B7C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B80: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000B84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000B88: jalr        $t9
    // 0x08000B8C: lui         $a3, 0xC240
    ctx->r7 = S32(0XC240 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08000B8C: lui         $a3, 0xC240
    ctx->r7 = S32(0XC240 << 16);
    after_51:
    // 0x08000B90: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08000B94: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08000B98: addiu       $a2, $a2, -0x39EC
    ctx->r6 = ADD32(ctx->r6, -0X39EC);
    // 0x08000B9C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x08000BA0: lwc1        $f0, 0x8($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08000BA4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x08000BA8: addiu       $a3, $a3, -0x39E4
    ctx->r7 = ADD32(ctx->r7, -0X39E4);
    // 0x08000BAC: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x08000BB0: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x08000BB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000BB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BBC: swc1        $f0, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f0.u32l;
    // 0x08000BC0: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08000BC4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08000BC8: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08000BCC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000BD0: swc1        $f0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f0.u32l;
    // 0x08000BD4: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x08000BD8: swc1        $f0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f0.u32l;
    // 0x08000BDC: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000BE0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x08000BE4: lwc1        $f0, 0x10($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08000BE8: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x08000BEC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x08000BF0: swc1        $f0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f0.u32l;
    // 0x08000BF4: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08000BF8: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x08000BFC: lhu         $v0, 0x16($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X16);
    // 0x08000C00: sh          $v0, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r2;
    // 0x08000C04: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x08000C08: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x08000C0C: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_08000C10:
    // 0x08000C10: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08000C14: bne         $v1, $at, L_08001130
    if (ctx->r3 != ctx->r1) {
        // 0x08000C18: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08001130;
    }
    // 0x08000C18: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000C1C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000C20: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000C24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000C28: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000C2C: jalr        $v0
    // 0x08000C30: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_52;
    // 0x08000C30: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_52:
    // 0x08000C34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C38: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000C3C: lui         $a1, 0x4509
    ctx->r5 = S32(0X4509 << 16);
    // 0x08000C40: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x08000C44: jalr        $t9
    // 0x08000C48: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08000C48: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_53:
    // 0x08000C4C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C50: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000C54: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000C58: lui         $a1, 0x423C
    ctx->r5 = S32(0X423C << 16);
    // 0x08000C5C: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x08000C60: jalr        $t9
    // 0x08000C64: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08000C64: lui         $a3, 0xC286
    ctx->r7 = S32(0XC286 << 16);
    after_54:
    // 0x08000C68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000C6C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000C70: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x08000C74: jalr        $t9
    // 0x08000C78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000C78: nop

    after_55:
    // 0x08000C7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C80: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000C84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000C88: lui         $a1, 0xC20C
    ctx->r5 = S32(0XC20C << 16);
    // 0x08000C8C: lui         $a2, 0x4208
    ctx->r6 = S32(0X4208 << 16);
    // 0x08000C90: jalr        $t9
    // 0x08000C94: lui         $a3, 0xC318
    ctx->r7 = S32(0XC318 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08000C94: lui         $a3, 0xC318
    ctx->r7 = S32(0XC318 << 16);
    after_56:
    // 0x08000C98: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x08000C9C: b           L_08001130
    // 0x08000CA0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08001130;
    // 0x08000CA0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000CA4:
    // 0x08000CA4: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000CA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CAC: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000CB0: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x08000CB4: bne         $at, $zero, L_08001130
    if (ctx->r1 != 0) {
        // 0x08000CB8: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08001130;
    }
    // 0x08000CB8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08000CC0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_57:
    // 0x08000CC4: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08000CC8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001130;
    }
    // 0x08000CC8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CCC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000CD0: jalr        $t9
    // 0x08000CD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08000CD4: nop

    after_58:
    // 0x08000CD8: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08000CDC: addiu       $a0, $zero, 0x14C
        ctx->r4 = ADD32(0, 0X14C);
            goto L_08001130;
    }
    // 0x08000CDC: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    // 0x08000CE0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CE4: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000CE8: jalr        $t9
    // 0x08000CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08000CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_59:
    // 0x08000CF0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000CF4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x08000CF8: b           L_08001130
    // 0x08000CFC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001130;
    // 0x08000CFC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000D00:
    // 0x08000D00: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D04: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000D08: jalr        $t9
    // 0x08000D0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08000D0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_60:
    // 0x08000D10: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000D14: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_08001130;
    }
    // 0x08000D14: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x08000D18: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D1C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000D20: sb          $t3, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r11;
    // 0x08000D24: jalr        $t9
    // 0x08000D28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08000D28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_61:
    // 0x08000D2C: b           L_08001130
    // 0x08000D30: nop

        goto L_08001130;
    // 0x08000D30: nop

L_08000D34:
    // 0x08000D34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D38: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000D3C: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000D40: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000D44: jalr        $t9
    // 0x08000D48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08000D48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_62:
    // 0x08000D4C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D50: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000D54: jalr        $t9
    // 0x08000D58: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08000D58: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_63:
    // 0x08000D5C: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000D60: addiu       $t4, $zero, 0x11
        ctx->r12 = ADD32(0, 0X11);
            goto L_08001130;
    }
    // 0x08000D60: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x08000D64: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D68: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000D6C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000D70: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x08000D74: jalr        $t9
    // 0x08000D78: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08000D78: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_64:
    // 0x08000D7C: b           L_08001130
    // 0x08000D80: nop

        goto L_08001130;
    // 0x08000D80: nop

L_08000D84:
    // 0x08000D84: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D88: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000D8C: jalr        $t9
    // 0x08000D90: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08000D90: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_65:
    // 0x08000D94: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000D98: addiu       $t5, $zero, 0x12
        ctx->r13 = ADD32(0, 0X12);
            goto L_08001130;
    }
    // 0x08000D98: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x08000D9C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DA0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000DA4: sb          $t5, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r13;
    // 0x08000DA8: jalr        $t9
    // 0x08000DAC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08000DAC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_66:
    // 0x08000DB0: b           L_08001130
    // 0x08000DB4: nop

        goto L_08001130;
    // 0x08000DB4: nop

L_08000DB8:
    // 0x08000DB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DBC: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000DC0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000DC4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000DC8: jalr        $t9
    // 0x08000DCC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08000DCC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_67:
    // 0x08000DD0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DD4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000DD8: jalr        $t9
    // 0x08000DDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08000DDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_68:
    // 0x08000DE0: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000DE4: addiu       $t6, $zero, 0x13
        ctx->r14 = ADD32(0, 0X13);
            goto L_08001130;
    }
    // 0x08000DE4: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x08000DE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DEC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000DF0: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x08000DF4: jalr        $t9
    // 0x08000DF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08000DF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_69:
    // 0x08000DFC: b           L_08001130
    // 0x08000E00: nop

        goto L_08001130;
    // 0x08000E00: nop

L_08000E04:
    // 0x08000E04: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E08: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000E0C: jalr        $t9
    // 0x08000E10: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08000E10: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_70:
    // 0x08000E14: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000E18: addiu       $t7, $zero, 0x14
        ctx->r15 = ADD32(0, 0X14);
            goto L_08001130;
    }
    // 0x08000E18: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x08000E1C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E20: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000E24: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000E28: sb          $t7, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r15;
    // 0x08000E2C: jalr        $t9
    // 0x08000E30: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08000E30: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_71:
    // 0x08000E34: b           L_08001130
    // 0x08000E38: nop

        goto L_08001130;
    // 0x08000E38: nop

L_08000E3C:
    // 0x08000E3C: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000E40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E44: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000E48: bne         $t8, $at, L_08000E68
    if (ctx->r24 != ctx->r1) {
        // 0x08000E4C: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_08000E68;
    }
    // 0x08000E4C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000E50: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E54: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E58: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x08000E5C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000E60: jalr        $t9
    // 0x08000E64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08000E64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_72:
L_08000E68:
    // 0x08000E68: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000E6C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000E70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E74: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E78: lw          $t2, 0x18($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X18);
    // 0x08000E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E80: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000E84: lbu         $t3, 0x7C($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X7C);
    // 0x08000E88: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x08000E8C: beq         $t4, $zero, L_08000EA4
    if (ctx->r12 == 0) {
        // 0x08000E90: nop
    
            goto L_08000EA4;
    }
    // 0x08000E90: nop

    // 0x08000E94: jalr        $t9
    // 0x08000E98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08000E98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_73:
    // 0x08000E9C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000EA0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
L_08000EA4:
    // 0x08000EA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EA8: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000EAC: jalr        $t9
    // 0x08000EB0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x08000EB0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_74:
    // 0x08000EB4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EB8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000EBC: jalr        $t9
    // 0x08000EC0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08000EC0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_75:
    // 0x08000EC4: beq         $v0, $zero, L_08001130
    if (ctx->r2 == 0) {
        // 0x08000EC8: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_08001130;
    }
    // 0x08000EC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000ECC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000ED0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000ED4: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08000ED8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000EDC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08000EE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_76:
    // 0x08000EE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EEC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000EF0: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x08000EF4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000EF8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x08000EFC: jalr        $t9
    // 0x08000F00: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08000F00: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_77:
    // 0x08000F04: b           L_08001130
    // 0x08000F08: nop

        goto L_08001130;
    // 0x08000F08: nop

L_08000F0C:
    // 0x08000F0C: lbu         $t7, 0x7C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X7C);
    // 0x08000F10: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F18: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08000F1C: beq         $t8, $zero, L_08001130
    if (ctx->r24 == 0) {
        // 0x08000F20: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08001130;
    }
    // 0x08000F20: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000F24: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F28: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F2C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000F30: jalr        $t9
    // 0x08000F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08000F34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_78:
    // 0x08000F38: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000F3C: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x08000F40: b           L_08001130
    // 0x08000F44: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001130;
    // 0x08000F44: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000F48:
    // 0x08000F48: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000F4C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000F50: jalr        $t9
    // 0x08000F54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08000F54: nop

    after_79:
    // 0x08000F58: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08000F5C: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08001130;
    }
    // 0x08000F5C: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000F60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F68: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F70: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000F74: jalr        $t9
    // 0x08000F78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08000F78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_80:
    // 0x08000F7C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F80: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000F84: jalr        $t9
    // 0x08000F88: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x08000F88: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_81:
    // 0x08000F8C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000F90: addiu       $t3, $zero, 0x1A
    ctx->r11 = ADD32(0, 0X1A);
    // 0x08000F94: b           L_08001130
    // 0x08000F98: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08001130;
    // 0x08000F98: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000F9C:
    // 0x08000F9C: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000FA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000FA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000FA8: bne         $t4, $at, L_08000FC4
    if (ctx->r12 != ctx->r1) {
        // 0x08000FAC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000FC4;
    }
    // 0x08000FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FB4: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08000FB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000FBC: jalr        $t9
    // 0x08000FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x08000FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_82:
L_08000FC4:
    // 0x08000FC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x1F0
    ctx->r25 = ADD32(ctx->r25, 0X1F0);
    // 0x08000FCC: jalr        $t9
    // 0x08000FD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x08000FD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_83:
    // 0x08000FD4: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08000FD8: addiu       $t5, $zero, 0x19
        ctx->r13 = ADD32(0, 0X19);
            goto L_08001130;
    }
    // 0x08000FD8: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x08000FDC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000FE0: b           L_08001130
    // 0x08000FE4: sb          $t5, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r13;
        goto L_08001130;
    // 0x08000FE4: sb          $t5, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r13;
L_08000FE8:
    // 0x08000FE8: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000FEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000FF0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000FF4: bne         $v1, $at, L_0800109C
    if (ctx->r3 != ctx->r1) {
        // 0x08000FF8: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_0800109C;
    }
    // 0x08000FF8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000FFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001000: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08001004: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001008: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800100C: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x08001010: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08001014: lui         $at, 0xC250
    ctx->r1 = S32(0XC250 << 16);
    // 0x08001018: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800101C: swc1        $f10, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f10.u32l;
    // 0x08001020: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08001024: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001028: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800102C: swc1        $f16, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f16.u32l;
    // 0x08001030: jalr        $t9
    // 0x08001034: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x08001034: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_84:
    // 0x08001038: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800103C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08001040: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001044: jalr        $t9
    // 0x08001048: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08001048: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_85:
    // 0x0800104C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001050: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001054: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001058: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x0800105C: lui         $a2, 0x41B0
    ctx->r6 = S32(0X41B0 << 16);
    // 0x08001060: jalr        $t9
    // 0x08001064: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08001064: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    after_86:
    // 0x08001068: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800106C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001070: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001074: lui         $a1, 0x4288
    ctx->r5 = S32(0X4288 << 16);
    // 0x08001078: lui         $a2, 0x4210
    ctx->r6 = S32(0X4210 << 16);
    // 0x0800107C: jalr        $t9
    // 0x08001080: lui         $a3, 0xC32E
    ctx->r7 = S32(0XC32E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x08001080: lui         $a3, 0xC32E
    ctx->r7 = S32(0XC32E << 16);
    after_87:
    // 0x08001084: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001088: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800108C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001090: jalr        $t9
    // 0x08001094: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x08001094: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_88:
    // 0x08001098: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_0800109C:
    // 0x0800109C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080010A0: bne         $v1, $at, L_080010B4
    if (ctx->r3 != ctx->r1) {
        // 0x080010A4: lui         $t2, 0x8020
        ctx->r10 = S32(0X8020 << 16);
            goto L_080010B4;
    }
    // 0x080010A4: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080010A8: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x080010AC: sb          $zero, 0x64($t2)
    MEM_B(0X64, ctx->r10) = 0;
    // 0x080010B0: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_080010B4:
    // 0x080010B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080010B8: bne         $v1, $at, L_080010E4
    if (ctx->r3 != ctx->r1) {
        // 0x080010BC: lui         $t3, 0x8016
        ctx->r11 = S32(0X8016 << 16);
            goto L_080010E4;
    }
    // 0x080010BC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x080010C0: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x080010C4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080010C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010CC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x080010D0: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x080010D4: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080010D8: jalr        $t9
    // 0x080010DC: lw          $a0, 0xD4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x080010DC: lw          $a0, 0xD4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD4);
    after_89:
    // 0x080010E0: lhu         $v1, 0x8A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8A);
L_080010E4:
    // 0x080010E4: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x080010E8: bne         $at, $zero, L_08001130
    if (ctx->r1 != 0) {
        // 0x080010EC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001130;
    }
    // 0x080010EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010F0: addiu       $t9, $t9, 0x148
    ctx->r25 = ADD32(ctx->r25, 0X148);
    // 0x080010F4: jalr        $t9
    // 0x080010F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x080010F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_90:
    // 0x080010FC: bne         $v0, $zero, L_08001130
    if (ctx->r2 != 0) {
        // 0x08001100: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001130;
    }
    // 0x08001100: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001104: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001108: jalr        $t9
    // 0x0800110C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x0800110C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_91:
    // 0x08001110: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001114: addiu       $t4, $zero, 0x6B
    ctx->r12 = ADD32(0, 0X6B);
    // 0x08001118: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x0800111C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001120: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(46, 0X1180) << 16);
    // 0x08001124: sw          $t4, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = ctx->r12;
    // 0x08001128: jalr        $t9
    // 0x0800112C: addiu       $a0, $a0, 0x1180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X1180));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x0800112C: addiu       $a0, $a0, 0x1180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X1180));
    after_92:
L_08001130:
    // 0x08001130: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08001134: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08001138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800113C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001140: lbu         $t6, 0x64($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X64);
    // 0x08001144: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001148: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x0800114C: bnel        $t6, $at, L_08001164
    if (ctx->r14 != ctx->r1) {
        // 0x08001150: lhu         $t7, 0x8A($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X8A);
            goto L_08001164;
    }
    goto skip_0;
    // 0x08001150: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    skip_0:
    // 0x08001154: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001158: jalr        $t9
    // 0x0800115C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x0800115C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_93:
    // 0x08001160: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
L_08001164:
    // 0x08001164: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08001168: sh          $t8, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r24;
    // 0x0800116C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001170: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001174: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001178: jr          $ra
    // 0x0800117C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x0800117C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08000008_711AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800000C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000018: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800001C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000020: jalr        $t9
    // 0x08000024: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000024: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_0:
    // 0x08000028: beq         $v0, $zero, L_08000048
    if (ctx->r2 == 0) {
        // 0x0800002C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_08000048;
    }
    // 0x0800002C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x08000030: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000034: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000038: jalr        $t9
    // 0x0800003C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800003C: nop

    after_1:
    // 0x08000040: b           L_08000100
    // 0x08000044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000100;
    // 0x08000044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000048:
    // 0x08000048: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800004C: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x08000050: jalr        $v0
    // 0x08000054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08000054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000058: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x0800005C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x08000060: jalr        $t9
    // 0x08000064: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000064: nop

    after_3:
    // 0x08000068: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x0800006C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x08000070: jalr        $t9
    // 0x08000074: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000074: nop

    after_4:
    // 0x08000078: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x0800007C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000080: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x08000084: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000088: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800008C: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x08000090: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000094: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000098: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x0800009C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080000A0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080000A4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080000A8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x080000AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000B4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    after_5:
    // 0x080000B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000BC: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080000C0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080000C4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080000C8: jalr        $t9
    // 0x080000CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x080000D0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x080000D4: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(46, 0X10C) << 16);
    // 0x080000D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000DC: addiu       $t6, $zero, 0xA28
    ctx->r14 = ADD32(0, 0XA28);
    // 0x080000E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000E4: addiu       $t8, $t8, 0x10C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(46, 0X10C));
    // 0x080000E8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x080000EC: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, 0X218C);
    // 0x080000F0: sw          $t6, 0xC0($t7)
    MEM_W(0XC0, ctx->r15) = ctx->r14;
    // 0x080000F4: jalr        $t9
    // 0x080000F8: sw          $t8, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080000F8: sw          $t8, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->r24;
    after_7:
    // 0x080000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000100:
    // 0x08000100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000104: jr          $ra
    // 0x08000108: nop

    TRACE_RETURN()
    return;
    // 0x08000108: nop

;}
RECOMP_FUNC void func_08003544_7164B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003544: lhu         $v1, 0xD6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XD6);
    // 0x08003548: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x0800354C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08003550: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003554: addiu       $t8, $v1, -0x100
    ctx->r24 = ADD32(ctx->r3, -0X100);
    // 0x08003558: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800355C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08003560: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08003564: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003568: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800356C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F10) << 16);
    // 0x08003570: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x08003574: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x08003578: mflo        $t6
    ctx->r14 = lo;
    // 0x0800357C: addiu       $t7, $t6, -0x300
    ctx->r15 = ADD32(ctx->r14, -0X300);
    // 0x08003580: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x08003584: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003588: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x0800358C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08003590: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08003594: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08003598: mflo        $t9
    ctx->r25 = lo;
    // 0x0800359C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x080035A0: nop

    // 0x080035A4: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x080035A8: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x080035AC: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x080035B0: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x080035B4: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x080035B8: sub.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d - ctx->f10.d;
    // 0x080035BC: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x080035C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080035C4: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x080035C8: ldc1        $f18, 0x3F10($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F10));
    // 0x080035CC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x080035D0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080035D4: mul.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x080035D8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080035DC: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x080035E0: mul.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x080035E4: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x080035E8: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x080035EC: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x080035F0: lhu         $a3, 0xD4($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0XD4);
    // 0x080035F4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080035F8: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x080035FC: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003600: addiu       $t3, $a3, -0x100
    ctx->r11 = ADD32(ctx->r7, -0X100);
    // 0x08003604: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x08003608: mflo        $t1
    ctx->r9 = lo;
    // 0x0800360C: addiu       $t2, $t1, -0x300
    ctx->r10 = ADD32(ctx->r9, -0X300);
    // 0x08003610: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x08003614: multu       $t3, $a2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003618: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x0800361C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x08003620: mflo        $t4
    ctx->r12 = lo;
    // 0x08003624: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x08003628: nop

    // 0x0800362C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x08003630: add.d       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f4.d + ctx->f18.d;
    // 0x08003634: mul.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x08003638: sub.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d - ctx->f16.d;
    // 0x0800363C: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x08003640: jr          $ra
    // 0x08003644: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x08003644: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_08001BEC_714B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08001BF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001BF4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x08001BF8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08001BFC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001C00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001C04: addiu       $v0, $v0, 0x255C
    ctx->r2 = ADD32(ctx->r2, 0X255C);
    // 0x08001C08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C0C: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x08001C10: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x08001C14: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x08001C18: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08001C1C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001C20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001C24: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x08001C28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08001C2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001C30: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    // 0x08001C34: jalr        $v0
    // 0x08001C38: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001C38: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08001C3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001C40: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001C44: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C48: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x08001C4C: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x08001C50: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x08001C54: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001C58: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001C5C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x08001C60: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08001C64: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08001C68: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    // 0x08001C6C: jalr        $v0
    // 0x08001C70: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001C70: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x08001C74: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08001C78: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08001C7C: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x08001C80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C84: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001C88: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x08001C8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1CDC) << 16);
    // 0x08001C94: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x08001C98: addiu       $a0, $a0, 0x1CDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1CDC));
    // 0x08001C9C: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x08001CA0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001CA4: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x08001CA8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08001CAC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08001CB0: sh          $t2, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r10;
    // 0x08001CB4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08001CB8: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x08001CBC: add.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f2.d + ctx->f2.d;
    // 0x08001CC0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001CC4: jalr        $t9
    // 0x08001CC8: swc1        $f10, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CC8: swc1        $f10, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f10.u32l;
    after_2:
    // 0x08001CCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001CD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08001CD4: jr          $ra
    // 0x08001CD8: nop

    TRACE_RETURN()
    return;
    // 0x08001CD8: nop

;}
RECOMP_FUNC void func_08002720_715690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002724: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800272C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002730: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08002734: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002738: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800273C: jalr        $t9
    // 0x08002740: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002740: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_0:
    // 0x08002744: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x08002748: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800274C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002750: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002754: bgez        $t6, L_08002768
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08002758: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08002768;
    }
    // 0x08002758: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800275C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002760: nop

    // 0x08002764: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_08002768:
    // 0x08002768: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0800276C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002770: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002774: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002778: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800277C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002780: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08002784: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002788: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x0800278C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x08002790: jalr        $t9
    // 0x08002794: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002794: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    after_1:
    // 0x08002798: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0800279C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080027A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080027A4: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x080027A8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080027AC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080027B0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x080027B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080027B8: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x080027BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080027C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080027C4: jr          $ra
    // 0x080027C8: nop

    TRACE_RETURN()
    return;
    // 0x080027C8: nop

;}
RECOMP_FUNC void func_08003648_7165B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003648: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x0800364C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F18) << 16);
    // 0x08003650: ldc1        $f0, 0x3F18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F18));
    // 0x08003654: addiu       $t7, $t6, -0x100
    ctx->r15 = ADD32(ctx->r14, -0X100);
    // 0x08003658: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x0800365C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003660: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F20) << 16);
    // 0x08003664: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08003668: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x0800366C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08003670: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08003674: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x08003678: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x0800367C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08003680: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08003684: ldc1        $f8, 0x3F20($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F20));
    // 0x08003688: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x0800368C: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003690: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003694: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08003698: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x0800369C: lhu         $t8, 0xD6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XD6);
    // 0x080036A0: addiu       $t9, $t8, -0x100
    ctx->r25 = ADD32(ctx->r24, -0X100);
    // 0x080036A4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x080036A8: nop

    // 0x080036AC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080036B0: mul.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x080036B4: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x080036B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080036BC: jr          $ra
    // 0x080036C0: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080036C0: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001844_7147B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001844: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001848: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800184C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001850: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001854: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001858: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800185C: lui         $a1, 0xC37A
    ctx->r5 = S32(0XC37A << 16);
    // 0x08001860: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001864: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08001868: bne         $t8, $zero, L_08001914
    if (ctx->r24 != 0) {
        // 0x0800186C: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08001914;
    }
    // 0x0800186C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001870: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x08001874: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08001878: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800187C: addiu       $t9, $t9, 0x255C
    ctx->r25 = ADD32(ctx->r25, 0X255C);
    // 0x08001880: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001884: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x08001888: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x0800188C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x08001890: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08001894: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    // 0x08001898: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800189C: jalr        $t9
    // 0x080018A0: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018A0: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    after_0:
    // 0x080018A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x080018A8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080018AC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080018B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080018B4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080018B8: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x080018BC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(47, 0X38F4) << 16);
    // 0x080018C0: addiu       $t9, $t9, 0x38F4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(47, 0X38F4));
    // 0x080018C4: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x080018C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(47, 0X1A10) << 16);
    // 0x080018CC: addiu       $a1, $a1, 0x1A10
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(47, 0X1A10));
    // 0x080018D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080018D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018D8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x080018DC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x080018E0: jalr        $t9
    // 0x080018E4: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018E4: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    after_1:
    // 0x080018E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018EC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080018F0: jalr        $t9
    // 0x080018F4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018F4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x080018F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018FC: addiu       $t3, $v0, 0x28
    ctx->r11 = ADD32(ctx->r2, 0X28);
    // 0x08001900: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001904: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1928) << 16);
    // 0x08001908: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x0800190C: jalr        $t9
    // 0x08001910: addiu       $a0, $a0, 0x1928
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1928));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001910: addiu       $a0, $a0, 0x1928
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1928));
    after_3:
L_08001914:
    // 0x08001914: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001918: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800191C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001920: jr          $ra
    // 0x08001924: nop

    TRACE_RETURN()
    return;
    // 0x08001924: nop

;}
RECOMP_FUNC void func_0800319C_71610C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800319C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080031A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080031A4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x080031A8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x080031AC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x080031B0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x080031B4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080031B8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080031BC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x080031C0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x080031C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080031C8: lhu         $t2, 0xD4($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XD4);
    // 0x080031CC: lhu         $t9, 0xD0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XD0);
    // 0x080031D0: lhu         $t0, 0xD2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD2);
    // 0x080031D4: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x080031D8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080031DC: addiu       $t8, $zero, 0x28A
    ctx->r24 = ADD32(0, 0X28A);
    // 0x080031E0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x080031E4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080031E8: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080031EC: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x080031F0: sh          $t2, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r10;
    // 0x080031F4: sh          $t2, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r10;
    // 0x080031F8: sh          $t9, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r25;
    // 0x080031FC: jal         0x080034B4
    // 0x08003200: sh          $t0, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r8;
    func_080034B4_716424(rdram, ctx);
        goto after_0;
    // 0x08003200: sh          $t0, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r8;
    after_0:
    // 0x08003204: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F08) << 16);
    // 0x08003208: lwc1        $f22, 0x3F08($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F08));
    // 0x0800320C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F0C) << 16);
    // 0x08003210: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08003214: addiu       $s5, $s5, 0x6838
    ctx->r21 = ADD32(ctx->r21, 0X6838);
    // 0x08003218: lwc1        $f20, 0x3F0C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F0C));
    // 0x0800321C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08003220: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x08003224: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
L_08003228:
    // 0x08003228: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x0800322C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003230: jalr        $s5
    // 0x08003234: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_1;
    // 0x08003234: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003238: beq         $v0, $zero, L_08003270
    if (ctx->r2 == 0) {
        // 0x0800323C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08003270;
    }
    // 0x0800323C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003240: sll         $s3, $s1, 2
    ctx->r19 = S32(ctx->r17 << 2);
    // 0x08003244: subu        $s3, $s3, $s1
    ctx->r19 = SUB32(ctx->r19, ctx->r17);
    // 0x08003248: sll         $s3, $s3, 4
    ctx->r19 = S32(ctx->r19 << 4);
    // 0x0800324C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08003250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x08003254: jal         0x08003544
    // 0x08003258: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_08003544_7164B4(rdram, ctx);
        goto after_2;
    // 0x08003258: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x0800325C: andi        $t3, $s3, 0x3FF
    ctx->r11 = ctx->r19 & 0X3FF;
    // 0x08003260: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x08003264: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x08003268: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x0800326C: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
L_08003270:
    // 0x08003270: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08003274: bnel        $s1, $s4, L_08003228
    if (ctx->r17 != ctx->r20) {
        // 0x08003278: mfc1        $a2, $f22
        ctx->r6 = (int32_t)ctx->f22.u32l;
            goto L_08003228;
    }
    goto skip_0;
    // 0x08003278: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    skip_0:
    // 0x0800327C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003280: addiu       $t4, $zero, 0x4B0
    ctx->r12 = ADD32(0, 0X4B0);
    // 0x08003284: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003288: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X32C4) << 16);
    // 0x0800328C: sh          $t4, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r12;
    // 0x08003290: jalr        $t9
    // 0x08003294: addiu       $a0, $a0, 0x32C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X32C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003294: addiu       $a0, $a0, 0x32C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X32C4));
    after_3:
    // 0x08003298: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x0800329C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x080032A0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x080032A4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080032A8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080032AC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x080032B0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x080032B4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x080032B8: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x080032BC: jr          $ra
    // 0x080032C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080032C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_080027CC_71573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080027D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080027D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080027D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080027DC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080027E0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x080027E4: jalr        $t9
    // 0x080027E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x080027EC: beq         $v0, $zero, L_08002830
    if (ctx->r2 == 0) {
        // 0x080027F0: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_08002830;
    }
    // 0x080027F0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x080027F4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x080027F8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x080027FC: jal         0x0800285C
    // 0x08002800: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_0800285C_7157CC(rdram, ctx);
        goto after_1;
    // 0x08002800: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_1:
    // 0x08002804: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x08002808: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x0800280C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08002810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002814: swc1        $f4, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f4.u32l;
    // 0x08002818: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0800281C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002820: swc1        $f10, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = ctx->f10.u32l;
    // 0x08002824: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x08002828: b           L_0800284C
    // 0x0800282C: swc1        $f16, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->f16.u32l;
        goto L_0800284C;
    // 0x0800282C: swc1        $f16, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->f16.u32l;
L_08002830:
    // 0x08002830: lw          $v0, 0x84($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X84);
    // 0x08002834: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002838: swc1        $f18, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f18.u32l;
    // 0x0800283C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002840: swc1        $f4, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = ctx->f4.u32l;
    // 0x08002844: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002848: swc1        $f6, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->f6.u32l;
L_0800284C:
    // 0x0800284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002850: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08002854: jr          $ra
    // 0x08002858: nop

    TRACE_RETURN()
    return;
    // 0x08002858: nop

;}
RECOMP_FUNC void func_08001318_714288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001318: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800131C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001320: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001324: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001328: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x0800132C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001330: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001334: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001338: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x0800133C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001340: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001344: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001348: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x0800134C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001350: jalr        $t9
    // 0x08001354: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001354: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    after_0:
    // 0x08001358: lhu         $t8, 0xD6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD6);
    // 0x0800135C: lhu         $t0, 0xD4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD4);
    // 0x08001360: lbu         $t1, 0xD3($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD3);
    // 0x08001364: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(47, 0X948) << 16);
    // 0x08001368: addiu       $t9, $t9, 0x948
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(47, 0X948));
    // 0x0800136C: lb          $a1, 0xD0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD0);
    // 0x08001370: lb          $a2, 0xD1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XD1);
    // 0x08001374: lb          $a3, 0xD2($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XD2);
    // 0x08001378: sh          $t8, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r24;
    // 0x0800137C: sh          $t0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r8;
    // 0x08001380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001384: jalr        $t9
    // 0x08001388: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001388: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x0800138C: lhu         $t2, 0xB0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XB0);
    // 0x08001390: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x08001394: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x08001398: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x0800139C: beq         $t3, $zero, L_080013C0
    if (ctx->r11 == 0) {
        // 0x080013A0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_080013C0;
    }
    // 0x080013A0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x080013A4: lw          $t4, 0x38($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X38);
    // 0x080013A8: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x080013AC: addiu       $t6, $t6, 0x60
    ctx->r14 = ADD32(ctx->r14, 0X60);
    // 0x080013B0: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x080013B4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x080013B8: b           L_080013D8
    // 0x080013BC: sw          $t7, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r15;
        goto L_080013D8;
    // 0x080013BC: sw          $t7, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r15;
L_080013C0:
    // 0x080013C0: lw          $t8, 0x40($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X40);
    // 0x080013C4: lui         $t1, 0x900
    ctx->r9 = S32(0X900 << 16);
    // 0x080013C8: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x080013CC: addu        $t0, $t8, $at
    ctx->r8 = ADD32(ctx->r24, ctx->r1);
    // 0x080013D0: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x080013D4: sw          $t9, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r25;
L_080013D8:
    // 0x080013D8: lhu         $v0, 0xEA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XEA);
    // 0x080013DC: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x080013E0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x080013E4: andi        $t2, $v0, 0x400
    ctx->r10 = ctx->r2 & 0X400;
    // 0x080013E8: beq         $t2, $zero, L_08001428
    if (ctx->r10 == 0) {
        // 0x080013EC: addiu       $t8, $zero, 0x20
        ctx->r24 = ADD32(0, 0X20);
            goto L_08001428;
    }
    // 0x080013EC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080013F0: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x080013F4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x080013F8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080013FC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x08001400: sb          $t9, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r25;
    // 0x08001404: sb          $t7, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r15;
    // 0x08001408: sb          $t1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r9;
    // 0x0800140C: sb          $t5, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r13;
    // 0x08001410: sb          $t8, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r24;
    // 0x08001414: sb          $v1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r3;
    // 0x08001418: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x0800141C: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08001420: b           L_080015EC
    // 0x08001424: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x08001424: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08001428:
    // 0x08001428: andi        $t2, $v0, 0x800
    ctx->r10 = ctx->r2 & 0X800;
    // 0x0800142C: beq         $t2, $zero, L_08001478
    if (ctx->r10 == 0) {
        // 0x08001430: andi        $t9, $v0, 0x1000
        ctx->r25 = ctx->r2 & 0X1000;
            goto L_08001478;
    }
    // 0x08001430: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x08001434: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x08001438: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x0800143C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x08001440: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x08001444: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001448: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x0800144C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x08001450: sb          $v1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r3;
    // 0x08001454: sb          $v1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r3;
    // 0x08001458: sb          $t1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r9;
    // 0x0800145C: sb          $t7, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r15;
    // 0x08001460: sb          $t8, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r24;
    // 0x08001464: sb          $t5, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r13;
    // 0x08001468: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x0800146C: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08001470: b           L_080015EC
    // 0x08001474: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x08001474: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08001478:
    // 0x08001478: beq         $t9, $zero, L_080014C4
    if (ctx->r25 == 0) {
        // 0x0800147C: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_080014C4;
    }
    // 0x0800147C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x08001480: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x08001484: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x08001488: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x0800148C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x08001490: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08001494: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x08001498: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x0800149C: sb          $t1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r9;
    // 0x080014A0: sb          $t0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r8;
    // 0x080014A4: sb          $t6, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r14;
    // 0x080014A8: sb          $t7, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r15;
    // 0x080014AC: sb          $t4, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r12;
    // 0x080014B0: sb          $v1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r3;
    // 0x080014B4: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x080014B8: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x080014BC: b           L_080015EC
    // 0x080014C0: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x080014C0: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_080014C4:
    // 0x080014C4: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x080014C8: beq         $t9, $zero, L_08001514
    if (ctx->r25 == 0) {
        // 0x080014CC: andi        $t1, $v0, 0x4000
        ctx->r9 = ctx->r2 & 0X4000;
            goto L_08001514;
    }
    // 0x080014CC: andi        $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 & 0X4000;
    // 0x080014D0: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x080014D4: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x080014D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080014DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x080014E0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x080014E4: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x080014E8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x080014EC: sb          $v1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r3;
    // 0x080014F0: sb          $v1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r3;
    // 0x080014F4: sb          $t0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r8;
    // 0x080014F8: sb          $t6, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r14;
    // 0x080014FC: sb          $t7, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r15;
    // 0x08001500: sb          $t4, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r12;
    // 0x08001504: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x08001508: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x0800150C: b           L_080015EC
    // 0x08001510: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x08001510: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08001514:
    // 0x08001514: beq         $t1, $zero, L_08001558
    if (ctx->r9 == 0) {
        // 0x08001518: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_08001558;
    }
    // 0x08001518: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x0800151C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x08001520: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    // 0x08001524: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x08001528: addiu       $v0, $t3, -0x1
    ctx->r2 = ADD32(ctx->r11, -0X1);
    // 0x0800152C: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x08001530: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x08001534: sb          $t4, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r12;
    // 0x08001538: sb          $t2, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r10;
    // 0x0800153C: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x08001540: sb          $v0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r2;
    // 0x08001544: sb          $v1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r3;
    // 0x08001548: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x0800154C: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08001550: b           L_080015EC
    // 0x08001554: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x08001554: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08001558:
    // 0x08001558: lhu         $t5, 0xB0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XB0);
    // 0x0800155C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x08001560: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x08001564: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x08001568: beq         $t6, $zero, L_080015B4
    if (ctx->r14 == 0) {
        // 0x0800156C: addiu       $t7, $zero, 0x20
        ctx->r15 = ADD32(0, 0X20);
            goto L_080015B4;
    }
    // 0x0800156C: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08001570: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x08001574: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    // 0x08001578: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x0800157C: addiu       $v0, $t0, -0x1
    ctx->r2 = ADD32(ctx->r8, -0X1);
    // 0x08001580: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x08001584: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x08001588: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x0800158C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001590: sb          $t9, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = ctx->r25;
    // 0x08001594: sb          $t1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r9;
    // 0x08001598: sb          $t8, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r24;
    // 0x0800159C: sb          $v1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r3;
    // 0x080015A0: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x080015A4: sb          $v0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r2;
    // 0x080015A8: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x080015AC: b           L_080015EC
    // 0x080015B0: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_080015EC;
    // 0x080015B0: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_080015B4:
    // 0x080015B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x080015B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080015BC: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x080015C0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x080015C4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x080015C8: sb          $t1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r9;
    // 0x080015CC: sb          $t6, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r14;
    // 0x080015D0: sb          $t0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r8;
    // 0x080015D4: sb          $t4, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r12;
    // 0x080015D8: sb          $t7, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r15;
    // 0x080015DC: sb          $v1, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r3;
    // 0x080015E0: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x080015E4: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x080015E8: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_080015EC:
    // 0x080015EC: lhu         $t9, 0xB0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XB0);
    // 0x080015F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080015F4: andi        $t2, $t9, 0x400
    ctx->r10 = ctx->r25 & 0X400;
    // 0x080015F8: bne         $t2, $zero, L_0800161C
    if (ctx->r10 != 0) {
        // 0x080015FC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800161C;
    }
    // 0x080015FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001600: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001604: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001608: nop

    // 0x0800160C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001610: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08001614: b           L_08001634
    // 0x08001618: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
        goto L_08001634;
    // 0x08001618: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_0800161C:
    // 0x0800161C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001620: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x08001624: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001628: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x0800162C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001630: swc1        $f4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f4.u32l;
L_08001634:
    // 0x08001634: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x08001638: jalr        $t9
    // 0x0800163C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800163C: nop

    after_2:
    // 0x08001640: bne         $v0, $zero, L_08001660
    if (ctx->r2 != 0) {
        // 0x08001644: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_08001660;
    }
    // 0x08001644: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x08001648: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800164C: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001650: jalr        $t9
    // 0x08001654: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001654: nop

    after_3:
    // 0x08001658: b           L_08001690
    // 0x0800165C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001690;
    // 0x0800165C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001660:
    // 0x08001660: lw          $t3, 0xD4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD4);
    // 0x08001664: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001668: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800166C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x08001670: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001674: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x08001678: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800167C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X16A0) << 16);
    // 0x08001680: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
    // 0x08001684: jalr        $t9
    // 0x08001688: addiu       $a0, $a0, 0x16A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X16A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001688: addiu       $a0, $a0, 0x16A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X16A0));
    after_4:
    // 0x0800168C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001690:
    // 0x08001690: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001694: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001698: jr          $ra
    // 0x0800169C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800169C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0800377C_7166EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800377C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08003780: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08003784: lbu         $v1, 0xE0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE0);
    // 0x08003788: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x0800378C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x08003790: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x08003794: bne         $v1, $zero, L_080037B8
    if (ctx->r3 != 0) {
        // 0x08003798: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_080037B8;
    }
    // 0x08003798: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x0800379C: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x080037A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080037A4: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x080037A8: bne         $at, $zero, L_080037B8
    if (ctx->r1 != 0) {
        // 0x080037AC: nop
    
            goto L_080037B8;
    }
    // 0x080037AC: nop

    // 0x080037B0: sb          $t9, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r25;
    // 0x080037B4: andi        $v1, $t9, 0xFF
    ctx->r3 = ctx->r25 & 0XFF;
L_080037B8:
    // 0x080037B8: bne         $v1, $zero, L_080037D0
    if (ctx->r3 != 0) {
        // 0x080037BC: lhu         $a1, 0x16($v0)
        ctx->r5 = MEM_HU(ctx->r2, 0X16);
            goto L_080037D0;
    }
    // 0x080037BC: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x080037C0: addu        $t0, $a1, $a2
    ctx->r8 = ADD32(ctx->r5, ctx->r6);
    // 0x080037C4: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x080037C8: b           L_080037DC
    // 0x080037CC: sh          $t1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r9;
        goto L_080037DC;
    // 0x080037CC: sh          $t1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r9;
L_080037D0:
    // 0x080037D0: subu        $t2, $a1, $a2
    ctx->r10 = SUB32(ctx->r5, ctx->r6);
    // 0x080037D4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x080037D8: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
L_080037DC:
    // 0x080037DC: lhu         $t4, 0x16($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X16);
    // 0x080037E0: bne         $t4, $zero, L_080037EC
    if (ctx->r12 != 0) {
        // 0x080037E4: nop
    
            goto L_080037EC;
    }
    // 0x080037E4: nop

    // 0x080037E8: sb          $zero, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = 0;
L_080037EC:
    // 0x080037EC: jr          $ra
    // 0x080037F0: nop

    TRACE_RETURN()
    return;
    // 0x080037F0: nop

;}
RECOMP_FUNC void func_080038F4_716864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038F4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x080038F8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x080038FC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08003900: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003904: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003908: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800390C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08003910: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x08003914: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x08003918: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800391C: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x08003920: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003924: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x08003928: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800392C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003930: addiu       $t9, $t9, 0x58E8
    ctx->r25 = ADD32(ctx->r25, 0X58E8);
    // 0x08003934: or          $t6, $a3, $at
    ctx->r14 = ctx->r7 | ctx->r1;
    // 0x08003938: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x0800393C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08003940: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08003944: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08003948: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x0800394C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08003950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003954: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x08003958: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x0800395C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x08003960: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08003964: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x08003968: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x0800396C: jalr        $t9
    // 0x08003970: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003970: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x08003974: bne         $v0, $zero, L_08003984
    if (ctx->r2 != 0) {
        // 0x08003978: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08003984;
    }
    // 0x08003978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800397C: b           L_080039D8
    // 0x08003980: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_080039D8;
    // 0x08003980: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_08003984:
    // 0x08003984: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08003988: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0800398C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003990: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08003994: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x08003998: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0800399C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080039A0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080039A4: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x080039A8: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x080039AC: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x080039B0: jalr        $t9
    // 0x080039B4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080039B4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_1:
    // 0x080039B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039BC: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080039C0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080039C4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x080039C8: jalr        $t9
    // 0x080039CC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080039CC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    after_2:
    // 0x080039D0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x080039D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_080039D8:
    // 0x080039D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x080039DC: jr          $ra
    // 0x080039E0: nop

    TRACE_RETURN()
    return;
    // 0x080039E0: nop

;}
RECOMP_FUNC void func_08001F4C_714EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001F54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001F58: lbu         $t6, 0xED($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XED);
    // 0x08001F5C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001F60: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001F64: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001F68: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08001F6C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x08001F70: beq         $at, $zero, L_08001F84
    if (ctx->r1 == 0) {
        // 0x08001F74: sb          $t7, 0xED($a0)
        MEM_B(0XED, ctx->r4) = ctx->r15;
            goto L_08001F84;
    }
    // 0x08001F74: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x08001F78: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001F7C: sb          $t8, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r24;
    // 0x08001F80: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
L_08001F84:
    // 0x08001F84: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08001F88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08001F8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F90: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001F94: jalr        $t9
    // 0x08001F98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001F9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001FA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FA4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001FA8: lhu         $t0, 0x8A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001FAC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x08001FB0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x08001FB4: bgtz        $t2, L_08001FC4
    if (SIGNED(ctx->r10) > 0) {
        // 0x08001FB8: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_08001FC4;
    }
    // 0x08001FB8: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x08001FBC: jalr        $t9
    // 0x08001FC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FC0: nop

    after_1:
L_08001FC4:
    // 0x08001FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001FCC: jr          $ra
    // 0x08001FD0: nop

    TRACE_RETURN()
    return;
    // 0x08001FD0: nop

;}
RECOMP_FUNC void func_08001CDC_714C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001CE4: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001CE8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EA0) << 16);
    // 0x08001CEC: ldc1        $f0, 0x3EA0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EA0));
    // 0x08001CF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001CF4: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001CF8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001CFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D00: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x08001D04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001D08: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001D0C: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001D10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D14: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001D18: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001D1C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001D20: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001D24: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001D28: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08001D2C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001D30: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08001D34: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001D38: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001D3C: bne         $v0, $zero, L_08001D54
    if (ctx->r2 != 0) {
        // 0x08001D40: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001D54;
    }
    // 0x08001D40: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001D44: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001D48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1D64) << 16);
    // 0x08001D4C: jalr        $t9
    // 0x08001D50: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1D64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D50: addiu       $a0, $a0, 0x1D64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1D64));
    after_0:
L_08001D54:
    // 0x08001D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D5C: jr          $ra
    // 0x08001D60: nop

    TRACE_RETURN()
    return;
    // 0x08001D60: nop

;}
RECOMP_FUNC void func_08000F40_713EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08000F44: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000F48: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000F4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F50: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08000F54: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x08000F58: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08000F5C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x08000F60: lw          $v1, 0x2C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X2C);
    // 0x08000F64: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x08000F68: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000F6C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000F70: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x08000F74: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x08000F78: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08000F7C: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x08000F80: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08000F84: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08000F88: sub.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x08000F8C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08000F90: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x08000F94: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000F98: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000F9C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08000FA0: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x08000FA4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x08000FA8: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x08000FAC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000FB0: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x08000FB4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08000FB8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000FBC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x08000FC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000FC4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000FC8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000FCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000FD0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x08000FD4: div.s       $f20, $f0, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08000FD8: c.lt.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl < ctx->f10.fl;
    // 0x08000FDC: nop

    // 0x08000FE0: bc1fl       L_08000FF4
    if (!c1cs) {
        // 0x08000FE4: cvt.d.s     $f6, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
            goto L_08000FF4;
    }
    goto skip_0;
    // 0x08000FE4: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    skip_0:
    // 0x08000FE8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08000FEC: nop

    // 0x08000FF0: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
L_08000FF4:
    // 0x08000FF4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x08000FF8: nop

    // 0x08000FFC: bc1f        L_0800100C
    if (!c1cs) {
        // 0x08001000: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_0800100C;
    }
    // 0x08001000: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001004: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08001008: nop

L_0800100C:
    // 0x0800100C: lbu         $t1, 0xDC($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0XDC);
    // 0x08001010: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08001014: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08001018: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x0800101C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x08001020: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001024: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001028: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x0800102C: lwc1        $f14, 0x14($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08001030: lui         $a0, 0x8001
    ctx->r4 = S32(0X8001 << 16);
    // 0x08001034: addiu       $a0, $a0, -0x1D74
    ctx->r4 = ADD32(ctx->r4, -0X1D74);
    // 0x08001038: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800103C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x08001040: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x08001044: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08001048: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x0800104C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08001050: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x08001054: jalr        $a0
    // 0x08001058: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r4)(rdram, ctx);
        goto after_0;
    // 0x08001058: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x0800105C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08001060: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x08001064: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08001068: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x0800106C: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x08001070: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x08001074: lwc1        $f14, 0x10($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X10);
    // 0x08001078: jalr        $a0
    // 0x0800107C: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    LOOKUP_FUNC(ctx->r4)(rdram, ctx);
        goto after_1;
    // 0x0800107C: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    after_1:
    // 0x08001080: lhu         $t4, 0x34($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X34);
    // 0x08001084: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001088: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800108C: subu        $v1, $v0, $t4
    ctx->r3 = SUB32(ctx->r2, ctx->r12);
    // 0x08001090: andi        $t5, $v1, 0x3FF
    ctx->r13 = ctx->r3 & 0X3FF;
    // 0x08001094: sh          $t5, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r13;
    // 0x08001098: jalr        $t9
    // 0x0800109C: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800109C: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    after_2:
    // 0x080010A0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x080010A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x080010A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080010AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080010B0: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x080010B4: lhu         $v0, 0x36($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X36);
    // 0x080010B8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x080010BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080010C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080010C4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080010C8: addiu       $t9, $t9, -0x726C
    ctx->r25 = ADD32(ctx->r25, -0X726C);
    // 0x080010CC: add.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x080010D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080010D4: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x080010D8: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x080010DC: nop

    // 0x080010E0: bc1fl       L_080010F0
    if (!c1cs) {
        // 0x080010E4: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_080010F0;
    }
    goto skip_1;
    // 0x080010E4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_1:
    // 0x080010E8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x080010EC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_080010F0:
    // 0x080010F0: nop

    // 0x080010F4: bc1f        L_08001100
    if (!c1cs) {
        // 0x080010F8: nop
    
            goto L_08001100;
    }
    // 0x080010F8: nop

    // 0x080010FC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_08001100:
    // 0x08001100: bne         $at, $zero, L_08001148
    if (ctx->r1 != 0) {
        // 0x08001104: slti        $at, $v0, 0x300
        ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
            goto L_08001148;
    }
    // 0x08001104: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x08001108: beq         $at, $zero, L_08001148
    if (ctx->r1 == 0) {
        // 0x0800110C: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_08001148;
    }
    // 0x0800110C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x08001110: lbu         $t7, 0xDC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XDC);
    // 0x08001114: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3E88) << 16);
    // 0x08001118: ldc1        $f8, 0x3E88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3E88));
    // 0x0800111C: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x08001120: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08001124: subu        $t2, $t8, $t7
    ctx->r10 = SUB32(ctx->r24, ctx->r15);
    // 0x08001128: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x0800112C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x08001130: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3E90) << 16);
    // 0x08001134: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x08001138: ldc1        $f10, 0x3E90($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3E90));
    // 0x0800113C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08001140: sub.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d - ctx->f8.d;
    // 0x08001144: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
L_08001148:
    // 0x08001148: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x0800114C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001150: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x08001154: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001158: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x0800115C: nop

    // 0x08001160: bc1fl       L_08001174
    if (!c1cs) {
        // 0x08001164: cfc1        $t1, $FpcCsr
        ctx->r9 = get_cop1_cs();
            goto L_08001174;
    }
    goto skip_2;
    // 0x08001164: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    skip_2:
    // 0x08001168: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800116C: nop

    // 0x08001170: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_08001174:
    // 0x08001174: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08001178: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x0800117C: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001180: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08001184: nop

    // 0x08001188: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x0800118C: beql        $a1, $zero, L_080011DC
    if (ctx->r5 == 0) {
        // 0x08001190: mfc1        $a1, $f8
        ctx->r5 = (int32_t)ctx->f8.u32l;
            goto L_080011DC;
    }
    goto skip_3;
    // 0x08001190: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x08001194: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001198: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800119C: sub.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x080011A0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x080011A4: nop

    // 0x080011A8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x080011AC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x080011B0: nop

    // 0x080011B4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x080011B8: bne         $a1, $zero, L_080011D0
    if (ctx->r5 != 0) {
        // 0x080011BC: nop
    
            goto L_080011D0;
    }
    // 0x080011BC: nop

    // 0x080011C0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x080011C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080011C8: b           L_080011E8
    // 0x080011CC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_080011E8;
    // 0x080011CC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_080011D0:
    // 0x080011D0: b           L_080011E8
    // 0x080011D4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_080011E8;
    // 0x080011D4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x080011D8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
L_080011DC:
    // 0x080011DC: nop

    // 0x080011E0: bltz        $a1, L_080011D0
    if (SIGNED(ctx->r5) < 0) {
        // 0x080011E4: nop
    
            goto L_080011D0;
    }
    // 0x080011E4: nop

L_080011E8:
    // 0x080011E8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x080011EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080011F0: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x080011F4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x080011F8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x080011FC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08001200: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001204: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x08001208: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x0800120C: nop

    // 0x08001210: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08001214: beql        $a2, $zero, L_08001264
    if (ctx->r6 == 0) {
        // 0x08001218: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_08001264;
    }
    goto skip_4;
    // 0x08001218: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x0800121C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001220: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001224: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x08001228: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x0800122C: nop

    // 0x08001230: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08001234: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08001238: nop

    // 0x0800123C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08001240: bne         $a2, $zero, L_08001258
    if (ctx->r6 != 0) {
        // 0x08001244: nop
    
            goto L_08001258;
    }
    // 0x08001244: nop

    // 0x08001248: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x0800124C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001250: b           L_08001270
    // 0x08001254: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_08001270;
    // 0x08001254: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_08001258:
    // 0x08001258: b           L_08001270
    // 0x0800125C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_08001270;
    // 0x0800125C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x08001260: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_08001264:
    // 0x08001264: nop

    // 0x08001268: bltz        $a2, L_08001258
    if (SIGNED(ctx->r6) < 0) {
        // 0x0800126C: nop
    
            goto L_08001258;
    }
    // 0x0800126C: nop

L_08001270:
    // 0x08001270: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08001274: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x08001278: jalr        $t9
    // 0x0800127C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800127C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_3:
    // 0x08001280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001284: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08001288: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x0800128C: jr          $ra
    // 0x08001290: nop

    TRACE_RETURN()
    return;
    // 0x08001290: nop

;}
RECOMP_FUNC void func_08002414_715384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002418: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0800241C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08002420: sltiu       $at, $a2, 0x6
    ctx->r1 = ctx->r6 < 0X6 ? 1 : 0;
    // 0x08002424: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002428: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x0800242C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002430: beq         $at, $zero, L_08002660
    if (ctx->r1 == 0) {
        // 0x08002434: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_08002660;
    }
    // 0x08002434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002438: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x0800243C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EDC) << 16);
    // 0x08002440: addu        $at, $at, $t6
    gpr jr_addend_08002448 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08002444: lw          $t6, 0x3EDC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EDC));
    // 0x08002448: jr          $t6
    // 0x0800244C: nop

    switch (jr_addend_08002448 >> 2) {
        case 0: goto L_08002450; break;
        case 1: goto L_080024A0; break;
        case 2: goto L_080024FC; break;
        case 3: goto L_08002558; break;
        case 4: goto L_080025B4; break;
        case 5: goto L_08002604; break;
        default: switch_error(__func__, 0x08002448, 0x08003EDC);
    }
    // 0x0800244C: nop

L_08002450:
    // 0x08002450: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08002454: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x08002458: jalr        $s0
    // 0x0800245C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800245C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x08002460: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08002464: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800246C: lwc1        $f4, 0xE0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x08002470: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002474: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x08002478: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800247C: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x08002480: jalr        $s0
    // 0x08002484: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08002484: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    after_1:
    // 0x08002488: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800248C: lwc1        $f10, 0xE8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x08002490: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002494: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x08002498: b           L_080026B8
    // 0x0800249C: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
        goto L_080026B8;
    // 0x0800249C: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
L_080024A0:
    // 0x080024A0: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080024A4: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x080024A8: jalr        $s0
    // 0x080024AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x080024AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x080024B0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080024B4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080024B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080024BC: lwc1        $f8, 0xE0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x080024C0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080024C4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x080024C8: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x080024CC: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x080024D0: jalr        $s0
    // 0x080024D4: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x080024D4: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    after_3:
    // 0x080024D8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x080024DC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080024E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080024E4: lwc1        $f8, 0xE8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x080024E8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080024EC: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x080024F0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080024F4: b           L_080026B8
    // 0x080024F8: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
        goto L_080026B8;
    // 0x080024F8: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
L_080024FC:
    // 0x080024FC: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08002500: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x08002504: jalr        $s0
    // 0x08002508: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08002508: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x0800250C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002510: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002514: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002518: lwc1        $f8, 0xE0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x0800251C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002520: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x08002524: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x08002528: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x0800252C: jalr        $s0
    // 0x08002530: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08002530: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    after_5:
    // 0x08002534: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08002538: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x0800253C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002540: lwc1        $f8, 0xE8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x08002544: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002548: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x0800254C: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08002550: b           L_080026B8
    // 0x08002554: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
        goto L_080026B8;
    // 0x08002554: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
L_08002558:
    // 0x08002558: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x0800255C: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x08002560: jalr        $s0
    // 0x08002564: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08002564: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x08002568: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x0800256C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002570: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002574: lwc1        $f8, 0xE0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x08002578: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x0800257C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x08002580: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x08002584: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002588: jalr        $s0
    // 0x0800258C: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x0800258C: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    after_7:
    // 0x08002590: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002594: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800259C: lwc1        $f8, 0xE8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x080025A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080025A4: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x080025A8: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x080025AC: b           L_080026B8
    // 0x080025B0: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
        goto L_080026B8;
    // 0x080025B0: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
L_080025B4:
    // 0x080025B4: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080025B8: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x080025BC: jalr        $s0
    // 0x080025C0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x080025C0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x080025C4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080025C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080025CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080025D0: lwc1        $f8, 0xE0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x080025D4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080025D8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x080025DC: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x080025E0: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x080025E4: jalr        $s0
    // 0x080025E8: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x080025E8: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    after_9:
    // 0x080025EC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x080025F0: lwc1        $f6, 0xE8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x080025F4: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080025F8: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x080025FC: b           L_080026B8
    // 0x08002600: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
        goto L_080026B8;
    // 0x08002600: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
L_08002604:
    // 0x08002604: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08002608: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x0800260C: jalr        $s0
    // 0x08002610: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x08002610: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_10:
    // 0x08002614: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08002618: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x0800261C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002620: lwc1        $f4, 0xE0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x08002624: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08002628: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x0800262C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x08002630: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002634: jalr        $s0
    // 0x08002638: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_11;
    // 0x08002638: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    after_11:
    // 0x0800263C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08002640: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002644: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002648: lwc1        $f4, 0xE8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x0800264C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002650: sub.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x08002654: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x08002658: b           L_080026B8
    // 0x0800265C: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
        goto L_080026B8;
    // 0x0800265C: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
L_08002660:
    // 0x08002660: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x08002664: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x08002668: jalr        $s0
    // 0x0800266C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_12;
    // 0x0800266C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_12:
    // 0x08002670: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002674: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08002678: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800267C: lwc1        $f4, 0xE0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x08002680: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002684: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x08002688: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x0800268C: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x08002690: jalr        $s0
    // 0x08002694: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_13;
    // 0x08002694: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    after_13:
    // 0x08002698: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x0800269C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080026A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080026A4: lwc1        $f4, 0xE8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XE8);
    // 0x080026A8: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080026AC: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x080026B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080026B4: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
L_080026B8:
    // 0x080026B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080026BC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080026C0: jalr        $t9
    // 0x080026C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080026C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x080026C8: bne         $v0, $zero, L_080026F4
    if (ctx->r2 != 0) {
        // 0x080026CC: lui         $at, 0x4302
        ctx->r1 = S32(0X4302 << 16);
            goto L_080026F4;
    }
    // 0x080026CC: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x080026D0: lwc1        $f0, 0xD0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XD0);
    // 0x080026D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080026D8: nop

    // 0x080026DC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x080026E0: nop

    // 0x080026E4: bc1tl       L_080026F8
    if (c1cs) {
        // 0x080026E8: lwc1        $f16, 0xE4($s2)
        ctx->f16.u32l = MEM_W(ctx->r18, 0XE4);
            goto L_080026F8;
    }
    goto skip_0;
    // 0x080026E8: lwc1        $f16, 0xE4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XE4);
    skip_0:
    // 0x080026EC: b           L_08002708
    // 0x080026F0: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
        goto L_08002708;
    // 0x080026F0: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_080026F4:
    // 0x080026F4: lwc1        $f16, 0xE4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XE4);
L_080026F8:
    // 0x080026F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080026FC: nop

    // 0x08002700: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002704: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
L_08002708:
    // 0x08002708: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800270C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002710: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08002714: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08002718: jr          $ra
    // 0x0800271C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800271C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08003770_7166E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003770: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003774: jr          $ra
    // 0x08003778: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003778: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001FE0_714F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08001FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001FE8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001FEC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001FF0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001FF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001FFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002000: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08002004: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08002008: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x0800200C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08002010: jalr        $t9
    // 0x08002014: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002014: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08002018: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0800201C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002020: bne         $v0, $zero, L_08002040
    if (ctx->r2 != 0) {
        // 0x08002024: sw          $v0, 0xD8($a2)
        MEM_W(0XD8, ctx->r6) = ctx->r2;
            goto L_08002040;
    }
    // 0x08002024: sw          $v0, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r2;
    // 0x08002028: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800202C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002030: jalr        $t9
    // 0x08002034: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002034: nop

    after_1:
    // 0x08002038: b           L_080020B4
    // 0x0800203C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080020B4;
    // 0x0800203C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002040:
    // 0x08002040: lw          $t0, 0xD0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XD0);
    // 0x08002044: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002048: addiu       $t8, $zero, 0x28C
    ctx->r24 = ADD32(0, 0X28C);
    // 0x0800204C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08002050: sw          $t6, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r14;
    // 0x08002054: sw          $t7, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->r15;
    // 0x08002058: sh          $t8, 0x5E($a2)
    MEM_H(0X5E, ctx->r6) = ctx->r24;
    // 0x0800205C: bgez        $t0, L_08002074
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08002060: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08002074;
    }
    // 0x08002060: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002064: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002068: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800206C: nop

    // 0x08002070: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08002074:
    // 0x08002074: lw          $t1, 0xD4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XD4);
    // 0x08002078: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X20C0) << 16);
    // 0x0800207C: swc1        $f6, 0xD0($a2)
    MEM_W(0XD0, ctx->r6) = ctx->f6.u32l;
    // 0x08002080: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x08002084: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X20C0));
    // 0x08002088: bgez        $t1, L_080020A0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x0800208C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_080020A0;
    }
    // 0x0800208C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002090: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002094: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002098: nop

    // 0x0800209C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_080020A0:
    // 0x080020A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020A8: jalr        $t9
    // 0x080020AC: swc1        $f16, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080020AC: swc1        $f16, 0xD4($a2)
    MEM_W(0XD4, ctx->r6) = ctx->f16.u32l;
    after_2:
    // 0x080020B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080020B4:
    // 0x080020B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080020B8: jr          $ra
    // 0x080020BC: nop

    TRACE_RETURN()
    return;
    // 0x080020BC: nop

;}
RECOMP_FUNC void func_0800056C_7134DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800056C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000570: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08000574: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x08000578: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x0800057C: lhu         $t6, 0xEA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XEA);
    // 0x08000580: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000584: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000588: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x0800058C: beq         $t7, $zero, L_080005A8
    if (ctx->r15 == 0) {
        // 0x08000590: lui         $a1, 0x3CA3
        ctx->r5 = S32(0X3CA3 << 16);
            goto L_080005A8;
    }
    // 0x08000590: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x08000594: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000598: addiu       $t9, $t9, -0x4214
    ctx->r25 = ADD32(ctx->r25, -0X4214);
    // 0x0800059C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x080005A0: jalr        $t9
    // 0x080005A4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005A4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_0:
L_080005A8:
    // 0x080005A8: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x080005AC: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x080005B0: addiu       $t1, $t1, -0x20D8
    ctx->r9 = ADD32(ctx->r9, -0X20D8);
    // 0x080005B4: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x080005B8: beq         $t8, $zero, L_08000668
    if (ctx->r24 == 0) {
        // 0x080005BC: andi        $t5, $v0, 0x1000
        ctx->r13 = ctx->r2 & 0X1000;
            goto L_08000668;
    }
    // 0x080005BC: andi        $t5, $v0, 0x1000
    ctx->r13 = ctx->r2 & 0X1000;
    // 0x080005C0: lbu         $t0, 0xED($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XED);
    // 0x080005C4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x080005C8: lbu         $a2, 0xAD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAD);
    // 0x080005CC: lbu         $a3, 0xAE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XAE);
    // 0x080005D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080005D4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080005D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080005DC: lbu         $t2, 0xE8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE8);
    // 0x080005E0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x080005E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x080005E8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x080005EC: lw          $t3, 0xB4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB4);
    // 0x080005F0: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x080005F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080005F8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x080005FC: lbu         $t5, 0xDC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XDC);
    // 0x08000600: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x08000604: lbu         $t6, 0xDD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XDD);
    // 0x08000608: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x0800060C: lbu         $t7, 0xE4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE4);
    // 0x08000610: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x08000614: lbu         $t9, 0xE5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE5);
    // 0x08000618: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x0800061C: lbu         $t8, 0xE6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE6);
    // 0x08000620: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000624: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08000628: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x0800062C: lbu         $t0, 0xE7($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE7);
    // 0x08000630: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x08000634: lbu         $t1, 0xEE($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XEE);
    // 0x08000638: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x0800063C: lbu         $t2, 0xEF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XEF);
    // 0x08000640: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x08000644: lbu         $t3, 0xE2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE2);
    // 0x08000648: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x0800064C: lbu         $t4, 0xE3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE3);
    // 0x08000650: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08000654: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08000658: jalr        $t9
    // 0x0800065C: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800065C: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    after_1:
    // 0x08000660: b           L_08000938
    // 0x08000664: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_08000938;
    // 0x08000664: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_08000668:
    // 0x08000668: beq         $t5, $zero, L_08000720
    if (ctx->r13 == 0) {
        // 0x0800066C: andi        $t2, $v0, 0x2000
        ctx->r10 = ctx->r2 & 0X2000;
            goto L_08000720;
    }
    // 0x0800066C: andi        $t2, $v0, 0x2000
    ctx->r10 = ctx->r2 & 0X2000;
    // 0x08000670: lbu         $t6, 0xED($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XED);
    // 0x08000674: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x08000678: lbu         $a2, 0xAD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAD);
    // 0x0800067C: lbu         $a3, 0xAE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XAE);
    // 0x08000680: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x08000684: addiu       $t7, $t7, -0x20B8
    ctx->r15 = ADD32(ctx->r15, -0X20B8);
    // 0x08000688: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x0800068C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000690: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08000694: lbu         $t8, 0xE8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE8);
    // 0x08000698: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x0800069C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x080006A0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x080006A4: lw          $t0, 0xB4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XB4);
    // 0x080006A8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x080006AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080006B0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x080006B4: lbu         $t2, 0xDC($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XDC);
    // 0x080006B8: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x080006BC: lbu         $t3, 0xDD($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XDD);
    // 0x080006C0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x080006C4: lbu         $t4, 0xE4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE4);
    // 0x080006C8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x080006CC: lbu         $t9, 0xE5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE5);
    // 0x080006D0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x080006D4: lbu         $t5, 0xE6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE6);
    // 0x080006D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006DC: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080006E0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x080006E4: lbu         $t6, 0xE7($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE7);
    // 0x080006E8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x080006EC: lbu         $t7, 0xEE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XEE);
    // 0x080006F0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x080006F4: lbu         $t8, 0xEF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEF);
    // 0x080006F8: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x080006FC: lbu         $t0, 0xE2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE2);
    // 0x08000700: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x08000704: lbu         $t1, 0xE3($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE3);
    // 0x08000708: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0800070C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08000710: jalr        $t9
    // 0x08000714: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000714: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_2:
    // 0x08000718: b           L_08000938
    // 0x0800071C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_08000938;
    // 0x0800071C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_08000720:
    // 0x08000720: beq         $t2, $zero, L_080007D8
    if (ctx->r10 == 0) {
        // 0x08000724: andi        $t8, $v0, 0x8000
        ctx->r24 = ctx->r2 & 0X8000;
            goto L_080007D8;
    }
    // 0x08000724: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x08000728: lbu         $t3, 0xED($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XED);
    // 0x0800072C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x08000730: lbu         $a2, 0xAD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAD);
    // 0x08000734: lbu         $a3, 0xAE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XAE);
    // 0x08000738: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x0800073C: addiu       $t4, $t4, -0x2098
    ctx->r12 = ADD32(ctx->r12, -0X2098);
    // 0x08000740: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x08000744: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000748: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x0800074C: lbu         $t5, 0xE8($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE8);
    // 0x08000750: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000754: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08000758: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x0800075C: lw          $t6, 0xB4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XB4);
    // 0x08000760: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08000764: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08000768: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x0800076C: lbu         $t8, 0xDC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDC);
    // 0x08000770: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08000774: lbu         $t0, 0xDD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDD);
    // 0x08000778: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x0800077C: lbu         $t1, 0xE4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE4);
    // 0x08000780: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x08000784: lbu         $t9, 0xE5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE5);
    // 0x08000788: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x0800078C: lbu         $t2, 0xE6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE6);
    // 0x08000790: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000794: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08000798: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x0800079C: lbu         $t3, 0xE7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE7);
    // 0x080007A0: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x080007A4: lbu         $t4, 0xEE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XEE);
    // 0x080007A8: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x080007AC: lbu         $t5, 0xEF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XEF);
    // 0x080007B0: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x080007B4: lbu         $t6, 0xE2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE2);
    // 0x080007B8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x080007BC: lbu         $t7, 0xE3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE3);
    // 0x080007C0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x080007C4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x080007C8: jalr        $t9
    // 0x080007CC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007CC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    after_3:
    // 0x080007D0: b           L_08000938
    // 0x080007D4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_08000938;
    // 0x080007D4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_080007D8:
    // 0x080007D8: beq         $t8, $zero, L_08000890
    if (ctx->r24 == 0) {
        // 0x080007DC: lui         $t6, 0x8007
        ctx->r14 = S32(0X8007 << 16);
            goto L_08000890;
    }
    // 0x080007DC: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x080007E0: lbu         $t0, 0xED($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XED);
    // 0x080007E4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x080007E8: lbu         $a2, 0xAD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAD);
    // 0x080007EC: lbu         $a3, 0xAE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XAE);
    // 0x080007F0: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x080007F4: addiu       $t1, $t1, -0x2078
    ctx->r9 = ADD32(ctx->r9, -0X2078);
    // 0x080007F8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080007FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000800: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000804: lbu         $t2, 0xE8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE8);
    // 0x08000808: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x0800080C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08000810: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x08000814: lw          $t3, 0xB4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB4);
    // 0x08000818: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x0800081C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08000820: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x08000824: lbu         $t5, 0xDC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XDC);
    // 0x08000828: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x0800082C: lbu         $t6, 0xDD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XDD);
    // 0x08000830: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x08000834: lbu         $t7, 0xE4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE4);
    // 0x08000838: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x0800083C: lbu         $t9, 0xE5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE5);
    // 0x08000840: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x08000844: lbu         $t8, 0xE6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE6);
    // 0x08000848: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800084C: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08000850: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x08000854: lbu         $t0, 0xE7($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE7);
    // 0x08000858: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x0800085C: lbu         $t1, 0xEE($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XEE);
    // 0x08000860: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x08000864: lbu         $t2, 0xEF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XEF);
    // 0x08000868: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x0800086C: lbu         $t3, 0xE2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE2);
    // 0x08000870: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x08000874: lbu         $t4, 0xE3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE3);
    // 0x08000878: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x0800087C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08000880: jalr        $t9
    // 0x08000884: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000884: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    after_4:
    // 0x08000888: b           L_08000938
    // 0x0800088C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_08000938;
    // 0x0800088C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_08000890:
    // 0x08000890: lbu         $t5, 0xED($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XED);
    // 0x08000894: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x08000898: lbu         $a2, 0xAD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XAD);
    // 0x0800089C: lbu         $a3, 0xAE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XAE);
    // 0x080008A0: addiu       $t6, $t6, -0x2058
    ctx->r14 = ADD32(ctx->r14, -0X2058);
    // 0x080008A4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x080008A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080008AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x080008B0: lbu         $t7, 0xE8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE8);
    // 0x080008B4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x080008B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x080008BC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x080008C0: lw          $t8, 0xB4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB4);
    // 0x080008C4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x080008C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080008CC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x080008D0: lbu         $t1, 0xDC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XDC);
    // 0x080008D4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x080008D8: lbu         $t2, 0xDD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XDD);
    // 0x080008DC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x080008E0: lbu         $t3, 0xE4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE4);
    // 0x080008E4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x080008E8: lbu         $t4, 0xE5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE5);
    // 0x080008EC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x080008F0: lbu         $t9, 0xE6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE6);
    // 0x080008F4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x080008F8: lbu         $t5, 0xE7($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE7);
    // 0x080008FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000900: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08000904: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x08000908: lbu         $t6, 0xEE($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XEE);
    // 0x0800090C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x08000910: lbu         $t7, 0xEF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XEF);
    // 0x08000914: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x08000918: lbu         $t8, 0xE2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE2);
    // 0x0800091C: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x08000920: lbu         $t0, 0xE3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE3);
    // 0x08000924: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08000928: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x0800092C: jalr        $t9
    // 0x08000930: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000930: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    after_5:
    // 0x08000934: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_08000938:
    // 0x08000938: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x0800093C: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x08000940: jr          $ra
    // 0x08000944: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000944: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08001928_714898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001928: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x0800192C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001930: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001934: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001938: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800193C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001940: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x08001944: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001948: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x0800194C: bne         $t8, $zero, L_080019FC
    if (ctx->r24 != 0) {
        // 0x08001950: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_080019FC;
    }
    // 0x08001950: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001954: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001958: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x0800195C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08001960: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001964: addiu       $t9, $t9, 0x255C
    ctx->r25 = ADD32(ctx->r25, 0X255C);
    // 0x08001968: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800196C: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x08001970: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x08001974: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08001978: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800197C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x08001980: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x08001984: jalr        $t9
    // 0x08001988: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001988: lw          $a0, -0x39D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39D8);
    after_0:
    // 0x0800198C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x08001990: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08001994: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001998: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800199C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080019A0: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x080019A4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(47, 0X38F4) << 16);
    // 0x080019A8: addiu       $t9, $t9, 0x38F4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(47, 0X38F4));
    // 0x080019AC: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x080019B0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(47, 0X1A10) << 16);
    // 0x080019B4: addiu       $a1, $a1, 0x1A10
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(47, 0X1A10));
    // 0x080019B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080019BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080019C0: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x080019C4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x080019C8: jalr        $t9
    // 0x080019CC: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019CC: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    after_1:
    // 0x080019D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019D4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080019D8: jalr        $t9
    // 0x080019DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080019DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x080019E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019E4: addiu       $t3, $v0, 0x12C
    ctx->r11 = ADD32(ctx->r2, 0X12C);
    // 0x080019E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1844) << 16);
    // 0x080019F0: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x080019F4: jalr        $t9
    // 0x080019F8: addiu       $a0, $a0, 0x1844
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1844));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080019F8: addiu       $a0, $a0, 0x1844
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1844));
    after_3:
L_080019FC:
    // 0x080019FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001A00: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001A04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001A08: jr          $ra
    // 0x08001A0C: nop

    TRACE_RETURN()
    return;
    // 0x08001A0C: nop

;}
RECOMP_FUNC void func_08000F00_713E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000F0C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000F10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F18: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000F1C: bne         $v0, $zero, L_08000F30
    if (ctx->r2 != 0) {
        // 0x08000F20: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000F30;
    }
    // 0x08000F20: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000F24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XDC4) << 16);
    // 0x08000F28: jalr        $t9
    // 0x08000F2C: addiu       $a0, $a0, 0xDC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XDC4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F2C: addiu       $a0, $a0, 0xDC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XDC4));
    after_0:
L_08000F30:
    // 0x08000F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F38: jr          $ra
    // 0x08000F3C: nop

    TRACE_RETURN()
    return;
    // 0x08000F3C: nop

;}
RECOMP_FUNC void func_08001DB0_714D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001DB8: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001DBC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EA8) << 16);
    // 0x08001DC0: ldc1        $f0, 0x3EA8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EA8));
    // 0x08001DC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001DC8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001DCC: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001DD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001DD4: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x08001DD8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001DDC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001DE0: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001DE4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001DE8: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001DEC: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001DF0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001DF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001DF8: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001DFC: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08001E00: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001E04: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08001E08: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001E0C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001E10: bne         $v0, $zero, L_08001E28
    if (ctx->r2 != 0) {
        // 0x08001E14: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001E28;
    }
    // 0x08001E14: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001E18: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001E1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1E38) << 16);
    // 0x08001E20: jalr        $t9
    // 0x08001E24: addiu       $a0, $a0, 0x1E38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1E38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E24: addiu       $a0, $a0, 0x1E38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1E38));
    after_0:
L_08001E28:
    // 0x08001E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001E30: jr          $ra
    // 0x08001E34: nop

    TRACE_RETURN()
    return;
    // 0x08001E34: nop

;}
RECOMP_FUNC void func_080020C0_715030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080020C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x080020C8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x080020CC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x080020D0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x080020D4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x080020D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x080020DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x080020E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x080020E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x080020E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080020EC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080020F0: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x080020F4: jal         0x080027CC
    // 0x080020F8: lw          $s0, 0xD8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD8);
    func_080027CC_71573C(rdram, ctx);
        goto after_0;
    // 0x080020F8: lw          $s0, 0xD8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD8);
    after_0:
    // 0x080020FC: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x08002100: addiu       $s2, $s2, -0x6D4C
    ctx->r18 = ADD32(ctx->r18, -0X6D4C);
    // 0x08002104: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x08002108: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x0800210C: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x08002110: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_08002114:
    // 0x08002114: mtc1        $s5, $f4
    ctx->f4.u32l = ctx->r21;
    // 0x08002118: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EC0) << 16);
    // 0x0800211C: ldc1        $f8, 0x3EC0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EC0));
    // 0x08002120: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08002124: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08002128: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x0800212C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08002130: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x08002134: mfc1        $s3, $f16
    ctx->r19 = (int32_t)ctx->f16.u32l;
    // 0x08002138: nop

L_0800213C:
    // 0x0800213C: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x08002140: jalr        $s2
    // 0x08002144: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x08002144: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x08002148: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x0800214C: sb          $t7, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r15;
    // 0x08002150: jalr        $s2
    // 0x08002154: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_2;
    // 0x08002154: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_2:
    // 0x08002158: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x0800215C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08002160: bne         $s1, $s4, L_0800213C
    if (ctx->r17 != ctx->r20) {
        // 0x08002164: sh          $v0, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r2;
            goto L_0800213C;
    }
    // 0x08002164: sh          $v0, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r2;
    // 0x08002168: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x0800216C: jal         0x08002324
    // 0x08002170: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_08002324_715294(rdram, ctx);
        goto after_3;
    // 0x08002170: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x08002174: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x08002178: bne         $s5, $fp, L_08002114
    if (ctx->r21 != ctx->r30) {
        // 0x0800217C: addiu       $s6, $s6, 0x18
        ctx->r22 = ADD32(ctx->r22, 0X18);
            goto L_08002114;
    }
    // 0x0800217C: addiu       $s6, $s6, 0x18
    ctx->r22 = ADD32(ctx->r22, 0X18);
    // 0x08002180: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002184: lwc1        $f0, 0xD0($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0XD0);
    // 0x08002188: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800218C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002190: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x08002194: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X2218) << 16);
    // 0x08002198: bc1fl       L_080021C4
    if (!c1cs) {
        // 0x0800219C: lwc1        $f4, 0xD4($s7)
        ctx->f4.u32l = MEM_W(ctx->r23, 0XD4);
            goto L_080021C4;
    }
    goto skip_0;
    // 0x0800219C: lwc1        $f4, 0xD4($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0XD4);
    skip_0:
    // 0x080021A0: lwc1        $f18, 0xD4($s7)
    ctx->f18.u32l = MEM_W(ctx->r23, 0XD4);
    // 0x080021A4: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x080021A8: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x080021AC: nop

    // 0x080021B0: bc1fl       L_080021C4
    if (!c1cs) {
        // 0x080021B4: lwc1        $f4, 0xD4($s7)
        ctx->f4.u32l = MEM_W(ctx->r23, 0XD4);
            goto L_080021C4;
    }
    goto skip_1;
    // 0x080021B4: lwc1        $f4, 0xD4($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0XD4);
    skip_1:
    // 0x080021B8: b           L_080021E0
    // 0x080021BC: sw          $t8, 0xDC($s7)
    MEM_W(0XDC, ctx->r23) = ctx->r24;
        goto L_080021E0;
    // 0x080021BC: sw          $t8, 0xDC($s7)
    MEM_W(0XDC, ctx->r23) = ctx->r24;
    // 0x080021C0: lwc1        $f4, 0xD4($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0XD4);
L_080021C4:
    // 0x080021C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EC8) << 16);
    // 0x080021C8: ldc1        $f10, 0x3EC8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EC8));
    // 0x080021CC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x080021D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080021D4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080021D8: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x080021DC: swc1        $f18, 0xDC($s7)
    MEM_W(0XDC, ctx->r23) = ctx->f18.u32l;
L_080021E0:
    // 0x080021E0: jalr        $t9
    // 0x080021E4: addiu       $a0, $a0, 0x2218
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X2218));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080021E4: addiu       $a0, $a0, 0x2218
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X2218));
    after_4:
    // 0x080021E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x080021EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080021F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x080021F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x080021F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x080021FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08002200: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x08002204: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x08002208: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x0800220C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x08002210: jr          $ra
    // 0x08002214: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08002214: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08001D64_714CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001D70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001D74: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001D78: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x08001D7C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D80: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001D84: bne         $v0, $zero, L_08001DA0
    if (ctx->r2 != 0) {
        // 0x08001D88: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001DA0;
    }
    // 0x08001D88: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001D8C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001D90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1DB0) << 16);
    // 0x08001D94: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D98: jalr        $t9
    // 0x08001D9C: addiu       $a0, $a0, 0x1DB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1DB0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D9C: addiu       $a0, $a0, 0x1DB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1DB0));
    after_0:
L_08001DA0:
    // 0x08001DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001DA8: jr          $ra
    // 0x08001DAC: nop

    TRACE_RETURN()
    return;
    // 0x08001DAC: nop

;}
RECOMP_FUNC void func_080034B4_716424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080034B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080034B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080034BC: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x080034C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080034C4: lhu         $t6, 0xD2($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XD2);
    // 0x080034C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034CC: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    // 0x080034D0: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080034D4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080034D8: jalr        $t9
    // 0x080034DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080034DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x080034E0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x080034E4: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(47, 0X3AC0) << 16);
    // 0x080034E8: addiu       $t0, $t0, 0x3AC0
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(47, 0X3AC0));
    // 0x080034EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x080034F0: addu        $v1, $t8, $t0
    ctx->r3 = ADD32(ctx->r24, ctx->r8);
    // 0x080034F4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x080034F8: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x080034FC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x08003500: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x08003504: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x08003508: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x0800350C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x08003510: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08003514: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08003518: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x0800351C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x08003520: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08003524: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08003528: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x0800352C: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08003530: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x08003534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800353C: jr          $ra
    // 0x08003540: nop

    TRACE_RETURN()
    return;
    // 0x08003540: nop

;}
RECOMP_FUNC void func_0800292C_71589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800292C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x08002930: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x08002934: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08002938: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x0800293C: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x08002940: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x08002944: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x08002948: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x0800294C: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x08002950: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x08002954: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x08002958: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x0800295C: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x08002960: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x08002964: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x08002968: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x0800296C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x08002970: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x08002974: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x08002978: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x0800297C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x08002980: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08002984: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08002988: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x0800298C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08002990: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x08002994: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x08002998: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x0800299C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x080029A0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(47, 0X2C50) << 16);
    // 0x080029A4: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(47, 0X38F4) << 16);
    // 0x080029A8: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(47, 0X38F4));
    // 0x080029AC: addiu       $a1, $a1, 0x2C50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(47, 0X2C50));
    // 0x080029B0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EF8) << 16);
    // 0x080029B4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x080029B8: ldc1        $f20, 0x3EF8($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EF8));
    // 0x080029BC: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x080029C0: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x080029C4: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x080029C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x080029CC: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    // 0x080029D0: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
L_080029D4:
    // 0x080029D4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x080029D8: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x080029DC: jalr        $v0
    // 0x080029E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080029E0: nop

    after_0:
    // 0x080029E4: beq         $v0, $zero, L_08002BE8
    if (ctx->r2 == 0) {
        // 0x080029E8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002BE8;
    }
    // 0x080029E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080029EC: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x080029F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029F4: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080029F8: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080029FC: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x08002A00: negu        $s5, $s2
    ctx->r21 = SUB32(0, ctx->r18);
    // 0x08002A04: sll         $t8, $s5, 4
    ctx->r24 = S32(ctx->r21 << 4);
    // 0x08002A08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A0C: sll         $s7, $s2, 4
    ctx->r23 = S32(ctx->r18 << 4);
    // 0x08002A10: lui         $t0, 0x8022
    ctx->r8 = S32(0X8022 << 16);
    // 0x08002A14: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x08002A18: addiu       $t1, $t1, 0x5244
    ctx->r9 = ADD32(ctx->r9, 0X5244);
    // 0x08002A1C: addiu       $t0, $t0, -0x70D0
    ctx->r8 = ADD32(ctx->r8, -0X70D0);
    // 0x08002A20: addu        $s7, $s7, $s2
    ctx->r23 = ADD32(ctx->r23, ctx->r18);
    // 0x08002A24: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002A28: addu        $t8, $t8, $s5
    ctx->r24 = ADD32(ctx->r24, ctx->r21);
    // 0x08002A2C: lui         $s3, 0x8021
    ctx->r19 = S32(0X8021 << 16);
    // 0x08002A30: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08002A34: lui         $s6, 0x8022
    ctx->r22 = S32(0X8022 << 16);
    // 0x08002A38: lui         $fp, 0x8022
    ctx->r30 = S32(0X8022 << 16);
    // 0x08002A3C: addiu       $fp, $fp, -0x6DA4
    ctx->r30 = ADD32(ctx->r30, -0X6DA4);
    // 0x08002A40: addiu       $s6, $s6, -0x213C
    ctx->r22 = ADD32(ctx->r22, -0X213C);
    // 0x08002A44: addiu       $s4, $s4, 0x4ABC
    ctx->r20 = ADD32(ctx->r20, 0X4ABC);
    // 0x08002A48: addiu       $s3, $s3, 0x6E1C
    ctx->r19 = ADD32(ctx->r19, 0X6E1C);
    // 0x08002A4C: addiu       $s5, $t8, 0x22
    ctx->r21 = ADD32(ctx->r24, 0X22);
    // 0x08002A50: addiu       $s7, $s7, 0x11
    ctx->r23 = ADD32(ctx->r23, 0X11);
    // 0x08002A54: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x08002A58: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x08002A5C: jalr        $t9
    // 0x08002A60: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A60: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_1:
    // 0x08002A64: lw          $t3, 0x64($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X64);
    // 0x08002A68: addiu       $t2, $zero, 0x22A
    ctx->r10 = ADD32(0, 0X22A);
    // 0x08002A6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08002A70: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x08002A74: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002A78: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x08002A7C: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08002A80: sw          $t4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r12;
    // 0x08002A84: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x08002A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002A8C: jalr        $s3
    // 0x08002A90: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x08002A90: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x08002A94: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x08002A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002A9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002AA0: jalr        $s4
    // 0x08002AA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_3;
    // 0x08002AA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08002AA8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08002AAC: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    // 0x08002AB0: sb          $s5, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r21;
    // 0x08002AB4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08002AB8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002AC0: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x08002AC4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002AC8: jalr        $s6
    // 0x08002ACC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_4;
    // 0x08002ACC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x08002AD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002AD4: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x08002AD8: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08002ADC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002AE0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08002AE4: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x08002AE8: sw          $a2, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r6;
    // 0x08002AEC: lbu         $v1, 0xD0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XD0);
    // 0x08002AF0: mtc1        $s7, $f8
    ctx->f8.u32l = ctx->r23;
    // 0x08002AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002AF8: bne         $v1, $zero, L_08002B1C
    if (ctx->r3 != 0) {
        // 0x08002AFC: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08002B1C;
    }
    // 0x08002AFC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002B00: swc1        $f26, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f26.u32l;
    // 0x08002B04: swc1        $f28, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f28.u32l;
    // 0x08002B08: addiu       $t1, $zero, 0x3E0
    ctx->r9 = ADD32(0, 0X3E0);
    // 0x08002B0C: addiu       $t9, $zero, 0x275
    ctx->r25 = ADD32(0, 0X275);
    // 0x08002B10: sh          $t1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r9;
    // 0x08002B14: b           L_08002B48
    // 0x08002B18: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
        goto L_08002B48;
    // 0x08002B18: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
L_08002B1C:
    // 0x08002B1C: bne         $v1, $at, L_08002B48
    if (ctx->r3 != ctx->r1) {
        // 0x08002B20: addiu       $t2, $zero, 0x3DD
        ctx->r10 = ADD32(0, 0X3DD);
            goto L_08002B48;
    }
    // 0x08002B20: addiu       $t2, $zero, 0x3DD
    ctx->r10 = ADD32(0, 0X3DD);
    // 0x08002B24: lui         $at, 0xC090
    ctx->r1 = S32(0XC090 << 16);
    // 0x08002B28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002B2C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08002B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002B34: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08002B38: addiu       $t3, $zero, 0x17B
    ctx->r11 = ADD32(0, 0X17B);
    // 0x08002B3C: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x08002B40: sh          $t2, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r10;
    // 0x08002B44: sh          $t3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r11;
L_08002B48:
    // 0x08002B48: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002B4C: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x08002B50: swc1        $f30, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f30.u32l;
    // 0x08002B54: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08002B58: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B60: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x08002B64: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002B68: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x08002B6C: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08002B70: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002B74: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x08002B78: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002B7C: mtc1        $s7, $f10
    ctx->f10.u32l = ctx->r23;
    // 0x08002B80: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x08002B84: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08002B88: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x08002B8C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002B90: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08002B94: nop

    // 0x08002B98: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x08002B9C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002BA0: add.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f18.d + ctx->f22.d;
    // 0x08002BA4: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x08002BA8: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x08002BAC: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x08002BB0: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08002BB4: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x08002BB8: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x08002BBC: jalr        $t9
    // 0x08002BC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002BC0: nop

    after_5:
    // 0x08002BC4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x08002BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002BCC: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x08002BD0: jalr        $t9
    // 0x08002BD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002BD4: nop

    after_6:
    // 0x08002BD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x08002BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08002BE0: bnel        $s2, $at, L_080029D4
    if (ctx->r18 != ctx->r1) {
        // 0x08002BE4: lw          $v0, 0xA0($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XA0);
            goto L_080029D4;
    }
    goto skip_0;
    // 0x08002BE4: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    skip_0:
L_08002BE8:
    // 0x08002BE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X2C44) << 16);
    // 0x08002BF4: jalr        $t9
    // 0x08002BF8: addiu       $a0, $a0, 0x2C44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X2C44));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002BF8: addiu       $a0, $a0, 0x2C44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X2C44));
    after_7:
    // 0x08002BFC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x08002C00: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x08002C04: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08002C08: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x08002C0C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x08002C10: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x08002C14: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x08002C18: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08002C1C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x08002C20: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x08002C24: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x08002C28: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x08002C2C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x08002C30: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x08002C34: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x08002C38: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x08002C3C: jr          $ra
    // 0x08002C40: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x08002C40: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_08001E38_714DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001E3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001E40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001E44: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EB0) << 16);
    // 0x08001E48: ldc1        $f0, 0x3EB0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EB0));
    // 0x08001E4C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08001E50: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3EB8) << 16);
    // 0x08001E54: ldc1        $f2, 0x3EB8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3EB8));
    // 0x08001E58: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08001E5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001E60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001E64: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x08001E68: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001E6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001E74: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x08001E78: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x08001E7C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001E80: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001E84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001E88: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08001E8C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001E90: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001E94: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x08001E98: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08001E9C: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001EA0: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001EA4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001EA8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001EAC: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001EB0: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001EB4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001EB8: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001EBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001EC0: swc1        $f18, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x08001EC4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001EC8: swc1        $f10, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f10.u32l;
    // 0x08001ECC: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08001ED0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001ED4: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x08001ED8: lbu         $t6, 0xED($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XED);
    // 0x08001EDC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08001EE0: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x08001EE4: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x08001EE8: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x08001EEC: beq         $at, $zero, L_08001EFC
    if (ctx->r1 == 0) {
        // 0x08001EF0: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_08001EFC;
    }
    // 0x08001EF0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x08001EF4: sb          $t0, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r8;
    // 0x08001EF8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_08001EFC:
    // 0x08001EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F00: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001F04: jalr        $t9
    // 0x08001F08: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F08: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x08001F0C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08001F10: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x08001F14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1F4C) << 16);
    // 0x08001F18: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08001F1C: bne         $v0, $zero, L_08001F38
    if (ctx->r2 != 0) {
        // 0x08001F20: sh          $t3, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r11;
            goto L_08001F38;
    }
    // 0x08001F20: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08001F24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F28: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F2C: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08001F30: jalr        $t9
    // 0x08001F34: addiu       $a0, $a0, 0x1F4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1F4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F34: addiu       $a0, $a0, 0x1F4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1F4C));
    after_1:
L_08001F38:
    // 0x08001F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001F3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001F40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001F44: jr          $ra
    // 0x08001F48: nop

    TRACE_RETURN()
    return;
    // 0x08001F48: nop

;}
RECOMP_FUNC void func_0800285C_7157CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800285C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002860: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08002864: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800286C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002870: lw          $v0, 0x2C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2C);
    // 0x08002874: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08002878: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800287C: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x08002880: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08002884: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x08002888: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x0800288C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002890: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002894: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08002898: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x0800289C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x080028A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x080028A4: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x080028A8: lwc1        $f10, 0x10($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X10);
    // 0x080028AC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080028B0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x080028B4: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x080028B8: lwc1        $f4, 0x14($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X14);
    // 0x080028BC: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x080028C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x080028C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080028C8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x080028CC: jalr        $t9
    // 0x080028D0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028D0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x080028D4: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x080028D8: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x080028DC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080028E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x080028E4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x080028E8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x080028EC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080028F0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x080028F4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x080028F8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080028FC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x08002900: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002904: swc1        $f16, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f16.u32l;
    // 0x08002908: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x0800290C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002910: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x08002914: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002918: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x0800291C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002924: jr          $ra
    // 0x08002928: nop

    TRACE_RETURN()
    return;
    // 0x08002928: nop

;}
RECOMP_FUNC void func_08000534_7134A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800053C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000540: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08000544: jal         0x0800056C
    // 0x08000548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_0800056C_7134DC(rdram, ctx);
        goto after_0;
    // 0x08000548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800054C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(47, 0X978) << 16);
    // 0x08000550: addiu       $t9, $t9, 0x978
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(47, 0X978));
    // 0x08000554: jalr        $t9
    // 0x08000558: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000558: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000564: jr          $ra
    // 0x08000568: nop

    TRACE_RETURN()
    return;
    // 0x08000568: nop

;}
RECOMP_FUNC void func_080017F8_714768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001804: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800180C: jalr        $t9
    // 0x08001810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001814: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001818: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800181C: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x08001820: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001824: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1844) << 16);
    // 0x08001828: addiu       $a0, $a0, 0x1844
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1844));
    // 0x0800182C: jalr        $t9
    // 0x08001830: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001830: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08001834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800183C: jr          $ra
    // 0x08001840: nop

    TRACE_RETURN()
    return;
    // 0x08001840: nop

;}
RECOMP_FUNC void func_080039E4_716954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080039E8: jr          $ra
    // 0x080039EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080039EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080016A0_714610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016A0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080016A4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x080016A8: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x080016AC: lbu         $v0, 0xD8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD8);
    // 0x080016B0: lbu         $v1, 0xD9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD9);
    // 0x080016B4: lbu         $t7, 0xE4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XE4);
    // 0x080016B8: lbu         $t3, 0xE5($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XE5);
    // 0x080016BC: lbu         $t6, 0xDE($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDE);
    // 0x080016C0: lbu         $t2, 0xDF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XDF);
    // 0x080016C4: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x080016C8: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x080016CC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x080016D0: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x080016D4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080016D8: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x080016DC: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x080016E0: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x080016E4: sb          $t9, 0xE4($a0)
    MEM_B(0XE4, ctx->r4) = ctx->r25;
    // 0x080016E8: sb          $t5, 0xE5($a0)
    MEM_B(0XE5, ctx->r4) = ctx->r13;
    // 0x080016EC: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x080016F0: lbu         $a3, 0xDA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XDA);
    // 0x080016F4: lbu         $t0, 0xDB($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XDB);
    // 0x080016F8: lw          $t7, 0xA0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XA0);
    // 0x080016FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001700: addiu       $a3, $a3, -0x80
    ctx->r7 = ADD32(ctx->r7, -0X80);
    // 0x08001704: bne         $a1, $t7, L_08001744
    if (ctx->r5 != ctx->r15) {
        // 0x08001708: addiu       $t0, $t0, -0x80
        ctx->r8 = ADD32(ctx->r8, -0X80);
            goto L_08001744;
    }
    // 0x08001708: addiu       $t0, $t0, -0x80
    ctx->r8 = ADD32(ctx->r8, -0X80);
    // 0x0800170C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x08001710: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08001714: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x08001718: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x0800171C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001720: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001724: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x08001728: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x0800172C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001730: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08001734: swc1        $f10, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->f10.u32l;
    // 0x08001738: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x0800173C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001740: swc1        $f6, 0xC8($t6)
    MEM_W(0XC8, ctx->r14) = ctx->f6.u32l;
L_08001744:
    // 0x08001744: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x08001748: addiu       $t9, $t9, -0x2058
    ctx->r25 = ADD32(ctx->r25, -0X2058);
    // 0x0800174C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08001750: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001754: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08001758: lw          $t3, 0xD4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD4);
    // 0x0800175C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08001760: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08001764: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x08001768: lw          $t2, 0xB4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB4);
    // 0x0800176C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x08001770: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08001774: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x08001778: lbu         $t5, 0xDC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XDC);
    // 0x0800177C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08001780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001784: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x08001788: lbu         $t7, 0xDD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XDD);
    // 0x0800178C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001790: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001794: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x08001798: lbu         $t6, 0xE4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE4);
    // 0x0800179C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x080017A0: lbu         $t8, 0xE5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE5);
    // 0x080017A4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x080017A8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x080017AC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x080017B0: lbu         $t9, 0xEE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XEE);
    // 0x080017B4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x080017B8: lbu         $t3, 0xEF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XEF);
    // 0x080017BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017C0: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x080017C4: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x080017C8: lbu         $t2, 0xE2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE2);
    // 0x080017CC: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x080017D0: lbu         $t4, 0xE3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE3);
    // 0x080017D4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x080017D8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x080017DC: jalr        $t9
    // 0x080017E0: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017E0: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    after_0:
    // 0x080017E4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x080017E8: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x080017EC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x080017F0: jr          $ra
    // 0x080017F4: nop

    TRACE_RETURN()
    return;
    // 0x080017F4: nop

;}
RECOMP_FUNC void func_08003390_716300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003390: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003394: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08003398: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x0800339C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x080033A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080033A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080033A8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x080033AC: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x080033B0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x080033B4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x080033B8: beq         $s0, $zero, L_08003404
    if (ctx->r16 == 0) {
        // 0x080033BC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_08003404;
    }
    // 0x080033BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x080033C0: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x080033C4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080033C8: nop

    // 0x080033CC: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
L_080033D0:
    // 0x080033D0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080033D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080033D8: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x080033DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080033E0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x080033E4: nop

    // 0x080033E8: bc1fl       L_080033FC
    if (!c1cs) {
        // 0x080033EC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_080033FC;
    }
    goto skip_0;
    // 0x080033EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x080033F0: jal         0x08003648
    // 0x080033F4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_08003648_7165B8(rdram, ctx);
        goto after_0;
    // 0x080033F4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x080033F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_080033FC:
    // 0x080033FC: bnel        $s0, $zero, L_080033D0
    if (ctx->r16 != 0) {
        // 0x08003400: lwc1        $f4, 0xC($s2)
        ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
            goto L_080033D0;
    }
    goto skip_1;
    // 0x08003400: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    skip_1:
L_08003404:
    // 0x08003404: bne         $s1, $zero, L_0800341C
    if (ctx->r17 != 0) {
        // 0x08003408: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(47, 0X343C) << 16);
            goto L_0800341C;
    }
    // 0x08003408: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X343C) << 16);
    // 0x0800340C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003410: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003414: jalr        $t9
    // 0x08003418: addiu       $a0, $a0, 0x343C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X343C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003418: addiu       $a0, $a0, 0x343C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X343C));
    after_1:
L_0800341C:
    // 0x0800341C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08003420: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08003424: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003428: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800342C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x08003430: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x08003434: jr          $ra
    // 0x08003438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08003438: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08001A10_714980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001A14: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001A18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001A1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001A20: lui         $t6, 0x280
    ctx->r14 = S32(0X280 << 16);
    // 0x08001A24: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x08001A28: ori         $t6, $t6, 0x30A
    ctx->r14 = ctx->r14 | 0X30A;
    // 0x08001A2C: addiu       $t7, $zero, 0x13
    ctx->r15 = ADD32(0, 0X13);
    // 0x08001A30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001A34: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x08001A38: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x08001A3C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001A40: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x08001A44: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001A48: sb          $t0, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r8;
    // 0x08001A4C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x08001A50: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A54: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001A58: sb          $t1, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r9;
    // 0x08001A5C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001A64: jalr        $t9
    // 0x08001A68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08001A6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A70: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08001A74: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001A78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001A84: jalr        $t9
    // 0x08001A88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001A8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A90: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001A94: lbu         $a1, 0xED($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XED);
    // 0x08001A98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001AAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001AB0: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x08001AB4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001AB8: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08001ABC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AC0: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
    // 0x08001AC4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08001AC8: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x08001ACC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08001AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AD4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08001AD8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001ADC: jalr        $t9
    // 0x08001AE0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001AE0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_3:
    // 0x08001AE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AE8: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001AEC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001AF0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08001AF4: jalr        $t9
    // 0x08001AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08001AFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B00: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001B04: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001B08: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001B0C: jalr        $t9
    // 0x08001B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x08001B14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3E98) << 16);
    // 0x08001B18: lwc1        $f0, 0x3E98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(47, 0X3E98));
    // 0x08001B1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B20: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x08001B24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1B58) << 16);
    // 0x08001B2C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001B30: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08001B34: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001B38: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x08001B3C: jalr        $t9
    // 0x08001B40: addiu       $a0, $a0, 0x1B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1B58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001B40: addiu       $a0, $a0, 0x1B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1B58));
    after_6:
    // 0x08001B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001B48: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B4C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001B50: jr          $ra
    // 0x08001B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000000_712F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000004: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000010: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000014: sw          $a0, -0x3248($at)
    MEM_W(-0X3248, ctx->r1) = ctx->r4;
    // 0x08000018: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x0800001C: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08000020: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x08000024: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08000028: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800002C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000030: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08000034: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000038: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800003C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08000040: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000044: jalr        $t9
    // 0x08000048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800004C: lhu         $t3, 0xD4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000050: lhu         $t1, 0xD6($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD6);
    // 0x08000054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000058: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x0800005C: sh          $t3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r11;
    // 0x08000060: beq         $t4, $zero, L_08000078
    if (ctx->r12 == 0) {
        // 0x08000064: sh          $t1, 0xEA($s0)
        MEM_H(0XEA, ctx->r16) = ctx->r9;
            goto L_08000078;
    }
    // 0x08000064: sh          $t1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r9;
    // 0x08000068: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x0800006C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08000070: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x08000074: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
L_08000078:
    // 0x08000078: lbu         $t7, 0xD3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD3);
    // 0x0800007C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(47, 0X948) << 16);
    // 0x08000080: addiu       $t9, $t9, 0x948
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(47, 0X948));
    // 0x08000084: lb          $a1, 0xD0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD0);
    // 0x08000088: lb          $a2, 0xD1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XD1);
    // 0x0800008C: lb          $a3, 0xD2($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XD2);
    // 0x08000090: jalr        $t9
    // 0x08000094: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000094: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x08000098: lhu         $t8, 0xB0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XB0);
    // 0x0800009C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080000A0: sb          $zero, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = 0;
    // 0x080000A4: andi        $t1, $t8, 0x8
    ctx->r9 = ctx->r24 & 0X8;
    // 0x080000A8: beq         $t1, $zero, L_080000D0
    if (ctx->r9 == 0) {
        // 0x080000AC: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(47, 0X3F30) << 16);
            goto L_080000D0;
    }
    // 0x080000AC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(47, 0X3F30) << 16);
    // 0x080000B0: lw          $t2, 0x38($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X38);
    // 0x080000B4: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x080000B8: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x080000BC: addiu       $t4, $t4, 0x60
    ctx->r12 = ADD32(ctx->r12, 0X60);
    // 0x080000C0: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x080000C4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x080000C8: b           L_080000EC
    // 0x080000CC: sw          $t5, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r13;
        goto L_080000EC;
    // 0x080000CC: sw          $t5, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r13;
L_080000D0:
    // 0x080000D0: lw          $t6, 0x40($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X40);
    // 0x080000D4: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x080000D8: lui         $t9, 0x900
    ctx->r25 = S32(0X900 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x080000E0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x080000E4: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x080000E8: sw          $t8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r24;
L_080000EC:
    // 0x080000EC: lhu         $v1, 0xEA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XEA);
    // 0x080000F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080000F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080000F8: andi        $t1, $v1, 0x400
    ctx->r9 = ctx->r3 & 0X400;
    // 0x080000FC: beq         $t1, $zero, L_0800014C
    if (ctx->r9 == 0) {
        // 0x08000100: addiu       $a1, $a1, 0x3F30
        ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(47, 0X3F30));
            goto L_0800014C;
    }
    // 0x08000100: addiu       $a1, $a1, 0x3F30
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(47, 0X3F30));
    // 0x08000104: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x08000108: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x0800010C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x08000110: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x08000114: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08000118: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x0800011C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000120: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x08000124: sb          $t1, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r9;
    // 0x08000128: sb          $a0, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r4;
    // 0x0800012C: sb          $t8, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r24;
    // 0x08000130: sb          $t6, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r14;
    // 0x08000134: sb          $t7, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r15;
    // 0x08000138: sb          $t4, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r12;
    // 0x0800013C: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x08000140: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08000144: b           L_08000310
    // 0x08000148: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x08000148: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_0800014C:
    // 0x0800014C: andi        $t2, $v1, 0x800
    ctx->r10 = ctx->r3 & 0X800;
    // 0x08000150: beq         $t2, $zero, L_08000198
    if (ctx->r10 == 0) {
        // 0x08000154: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08000198;
    }
    // 0x08000154: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000158: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x0800015C: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08000160: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x08000164: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x08000168: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x0800016C: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x08000170: sb          $t1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r9;
    // 0x08000174: sb          $t7, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r15;
    // 0x08000178: sb          $t9, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r25;
    // 0x0800017C: sb          $t5, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r13;
    // 0x08000180: sb          $a0, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r4;
    // 0x08000184: sb          $a0, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r4;
    // 0x08000188: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x0800018C: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08000190: b           L_08000310
    // 0x08000194: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x08000194: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08000198:
    // 0x08000198: andi        $t2, $v1, 0x1000
    ctx->r10 = ctx->r3 & 0X1000;
    // 0x0800019C: beq         $t2, $zero, L_080001EC
    if (ctx->r10 == 0) {
        // 0x080001A0: andi        $t3, $v1, 0x2000
        ctx->r11 = ctx->r3 & 0X2000;
            goto L_080001EC;
    }
    // 0x080001A0: andi        $t3, $v1, 0x2000
    ctx->r11 = ctx->r3 & 0X2000;
    // 0x080001A4: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x080001A8: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x080001AC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x080001B0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x080001B4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080001B8: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x080001BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080001C0: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x080001C4: sb          $t2, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r10;
    // 0x080001C8: sb          $a0, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r4;
    // 0x080001CC: sb          $t1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r9;
    // 0x080001D0: sb          $t7, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r15;
    // 0x080001D4: sb          $t9, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r25;
    // 0x080001D8: sb          $t5, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r13;
    // 0x080001DC: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x080001E0: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x080001E4: b           L_08000310
    // 0x080001E8: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x080001E8: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_080001EC:
    // 0x080001EC: beq         $t3, $zero, L_08000234
    if (ctx->r11 == 0) {
        // 0x080001F0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08000234;
    }
    // 0x080001F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080001F4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x080001F8: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x080001FC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x08000200: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000204: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x08000208: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x0800020C: sb          $t2, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r10;
    // 0x08000210: sb          $t9, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r25;
    // 0x08000214: sb          $t8, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r24;
    // 0x08000218: sb          $t6, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r14;
    // 0x0800021C: sb          $a0, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r4;
    // 0x08000220: sb          $a0, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r4;
    // 0x08000224: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x08000228: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x0800022C: b           L_08000310
    // 0x08000230: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x08000230: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08000234:
    // 0x08000234: andi        $t3, $v1, 0x4000
    ctx->r11 = ctx->r3 & 0X4000;
    // 0x08000238: beq         $t3, $zero, L_0800027C
    if (ctx->r11 == 0) {
        // 0x0800023C: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_0800027C;
    }
    // 0x0800023C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000240: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x08000244: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    // 0x08000248: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x0800024C: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x08000250: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x08000254: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000258: sb          $t7, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r15;
    // 0x0800025C: sb          $t5, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r13;
    // 0x08000260: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x08000264: sb          $v0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r2;
    // 0x08000268: sb          $a0, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r4;
    // 0x0800026C: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x08000270: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x08000274: b           L_08000310
    // 0x08000278: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x08000278: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_0800027C:
    // 0x0800027C: lhu         $t9, 0xB0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XB0);
    // 0x08000280: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000284: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x08000288: andi        $t8, $t9, 0x4
    ctx->r24 = ctx->r25 & 0X4;
    // 0x0800028C: beq         $t8, $zero, L_080002D8
    if (ctx->r24 == 0) {
        // 0x08000290: addiu       $t9, $zero, 0x40
        ctx->r25 = ADD32(0, 0X40);
            goto L_080002D8;
    }
    // 0x08000290: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08000294: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x08000298: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    // 0x0800029C: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x080002A0: addiu       $v0, $t3, -0x1
    ctx->r2 = ADD32(ctx->r11, -0X1);
    // 0x080002A4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080002A8: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x080002AC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x080002B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x080002B4: sb          $t5, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = ctx->r13;
    // 0x080002B8: sb          $t4, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r12;
    // 0x080002BC: sb          $t2, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r10;
    // 0x080002C0: sb          $a0, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r4;
    // 0x080002C4: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x080002C8: sb          $v0, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r2;
    // 0x080002CC: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x080002D0: b           L_08000310
    // 0x080002D4: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
        goto L_08000310;
    // 0x080002D4: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_080002D8:
    // 0x080002D8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x080002DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x080002E0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x080002E4: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x080002E8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x080002EC: sb          $t5, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r13;
    // 0x080002F0: sb          $t1, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r9;
    // 0x080002F4: sb          $t4, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r12;
    // 0x080002F8: sb          $t9, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r25;
    // 0x080002FC: sb          $t2, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r10;
    // 0x08000300: sb          $a0, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = ctx->r4;
    // 0x08000304: sb          $zero, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = 0;
    // 0x08000308: sb          $zero, 0xEF($s0)
    MEM_B(0XEF, ctx->r16) = 0;
    // 0x0800030C: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_08000310:
    // 0x08000310: lhu         $v1, 0xEA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XEA);
    // 0x08000314: addiu       $t7, $zero, 0xE8
    ctx->r15 = ADD32(0, 0XE8);
    // 0x08000318: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    // 0x0800031C: beql        $t6, $zero, L_08000340
    if (ctx->r14 == 0) {
        // 0x08000320: lhu         $v0, 0xB0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XB0);
            goto L_08000340;
    }
    goto skip_0;
    // 0x08000320: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    skip_0:
    // 0x08000324: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x08000328: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x0800032C: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x08000330: sb          $t7, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r15;
    // 0x08000334: b           L_08000444
    // 0x08000338: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x08000338: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x0800033C: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_08000340:
    // 0x08000340: addiu       $t8, $zero, 0x4E
    ctx->r24 = ADD32(0, 0X4E);
    // 0x08000344: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x08000348: beq         $t9, $zero, L_08000368
    if (ctx->r25 == 0) {
        // 0x0800034C: andi        $t1, $v0, 0x80
        ctx->r9 = ctx->r2 & 0X80;
            goto L_08000368;
    }
    // 0x0800034C: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x08000350: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x08000354: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x08000358: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x0800035C: sb          $t8, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r24;
    // 0x08000360: b           L_08000444
    // 0x08000364: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x08000364: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_08000368:
    // 0x08000368: beq         $t1, $zero, L_0800038C
    if (ctx->r9 == 0) {
        // 0x0800036C: andi        $t3, $v1, 0x80
        ctx->r11 = ctx->r3 & 0X80;
            goto L_0800038C;
    }
    // 0x0800036C: andi        $t3, $v1, 0x80
    ctx->r11 = ctx->r3 & 0X80;
    // 0x08000370: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08000374: sb          $t2, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r10;
    // 0x08000378: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x0800037C: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x08000380: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x08000384: b           L_08000444
    // 0x08000388: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x08000388: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_0800038C:
    // 0x0800038C: beq         $t3, $zero, L_080003C0
    if (ctx->r11 == 0) {
        // 0x08000390: andi        $t7, $v1, 0x8
        ctx->r15 = ctx->r3 & 0X8;
            goto L_080003C0;
    }
    // 0x08000390: andi        $t7, $v1, 0x8
    ctx->r15 = ctx->r3 & 0X8;
    // 0x08000394: addiu       $t4, $zero, 0xAB
    ctx->r12 = ADD32(0, 0XAB);
    // 0x08000398: andi        $t5, $v0, 0x400
    ctx->r13 = ctx->r2 & 0X400;
    // 0x0800039C: sb          $t4, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r12;
    // 0x080003A0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x080003A4: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x080003A8: beq         $t5, $zero, L_08000444
    if (ctx->r13 == 0) {
        // 0x080003AC: sb          $zero, 0xAE($s0)
        MEM_B(0XAE, ctx->r16) = 0;
            goto L_08000444;
    }
    // 0x080003AC: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x080003B0: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x080003B4: sb          $t6, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r14;
    // 0x080003B8: b           L_08000444
    // 0x080003BC: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x080003BC: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_080003C0:
    // 0x080003C0: beq         $t7, $zero, L_080003E4
    if (ctx->r15 == 0) {
        // 0x080003C4: andi        $t8, $v1, 0x20
        ctx->r24 = ctx->r3 & 0X20;
            goto L_080003E4;
    }
    // 0x080003C4: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x080003C8: addiu       $t9, $zero, 0xE1
    ctx->r25 = ADD32(0, 0XE1);
    // 0x080003CC: sb          $t9, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r25;
    // 0x080003D0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x080003D4: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x080003D8: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x080003DC: b           L_08000444
    // 0x080003E0: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x080003E0: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_080003E4:
    // 0x080003E4: beq         $t8, $zero, L_0800040C
    if (ctx->r24 == 0) {
        // 0x080003E8: andi        $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 & 0X4000;
            goto L_0800040C;
    }
    // 0x080003E8: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x080003EC: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x080003F0: addiu       $t2, $zero, 0xB9
    ctx->r10 = ADD32(0, 0XB9);
    // 0x080003F4: sb          $t2, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r10;
    // 0x080003F8: sb          $t1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r9;
    // 0x080003FC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x08000400: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x08000404: b           L_08000444
    // 0x08000408: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x08000408: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_0800040C:
    // 0x0800040C: beq         $t3, $zero, L_08000430
    if (ctx->r11 == 0) {
        // 0x08000410: addiu       $t5, $zero, 0xB7
        ctx->r13 = ADD32(0, 0XB7);
            goto L_08000430;
    }
    // 0x08000410: addiu       $t5, $zero, 0xB7
    ctx->r13 = ADD32(0, 0XB7);
    // 0x08000414: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x08000418: sb          $t4, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r12;
    // 0x0800041C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x08000420: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x08000424: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x08000428: b           L_08000444
    // 0x0800042C: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
        goto L_08000444;
    // 0x0800042C: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_08000430:
    // 0x08000430: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x08000434: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x08000438: sb          $zero, 0xAE($s0)
    MEM_B(0XAE, ctx->r16) = 0;
    // 0x0800043C: sb          $t5, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r13;
    // 0x08000440: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_08000444:
    // 0x08000444: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08000448: bnel        $t6, $zero, L_08000474
    if (ctx->r14 != 0) {
        // 0x0800044C: lhu         $t4, 0xEA($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0XEA);
            goto L_08000474;
    }
    goto skip_1;
    // 0x0800044C: lhu         $t4, 0xEA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XEA);
    skip_1:
    // 0x08000450: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x08000454: lhu         $t8, 0xEA($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XEA);
    // 0x08000458: ori         $t9, $t7, 0x80
    ctx->r25 = ctx->r15 | 0X80;
    // 0x0800045C: andi        $t1, $t8, 0x100
    ctx->r9 = ctx->r24 & 0X100;
    // 0x08000460: beq         $t1, $zero, L_08000470
    if (ctx->r9 == 0) {
        // 0x08000464: sw          $t9, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->r25;
            goto L_08000470;
    }
    // 0x08000464: sw          $t9, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r25;
    // 0x08000468: ori         $t3, $t9, 0x100
    ctx->r11 = ctx->r25 | 0X100;
    // 0x0800046C: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
L_08000470:
    // 0x08000470: lhu         $t4, 0xEA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XEA);
L_08000474:
    // 0x08000474: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08000478: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x0800047C: beql        $t5, $zero, L_08000490
    if (ctx->r13 == 0) {
        // 0x08000480: sb          $a0, 0x5($t0)
        MEM_B(0X5, ctx->r8) = ctx->r4;
            goto L_08000490;
    }
    goto skip_2;
    // 0x08000480: sb          $a0, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r4;
    skip_2:
    // 0x08000484: b           L_08000490
    // 0x08000488: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
        goto L_08000490;
    // 0x08000488: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
    // 0x0800048C: sb          $a0, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r4;
L_08000490:
    // 0x08000490: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x08000494: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x08000498: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x0800049C: jal         0x0800056C
    // 0x080004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_0800056C_7134DC(rdram, ctx);
        goto after_2;
    // 0x080004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080004A4: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(47, 0X3F30) << 16);
    // 0x080004A8: addiu       $t7, $t7, 0x3F30
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(47, 0X3F30));
    // 0x080004AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080004B0: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x080004B4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080004B8: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x080004BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080004C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004C4: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x080004C8: jalr        $t9
    // 0x080004CC: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004CC: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    after_3:
    // 0x080004D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080004D4: bne         $v0, $zero, L_080004F4
    if (ctx->r2 != 0) {
        // 0x080004D8: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_080004F4;
    }
    // 0x080004D8: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x080004DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E0: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080004E4: jalr        $t9
    // 0x080004E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004E8: nop

    after_4:
    // 0x080004EC: b           L_08000524
    // 0x080004F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000524;
    // 0x080004F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080004F4:
    // 0x080004F4: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x080004F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080004FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000500: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08000504: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000508: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x0800050C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000510: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X534) << 16);
    // 0x08000514: sw          $t3, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r11;
    // 0x08000518: jalr        $t9
    // 0x0800051C: addiu       $a0, $a0, 0x534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X534));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800051C: addiu       $a0, $a0, 0x534
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X534));
    after_5:
    // 0x08000520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000524:
    // 0x08000524: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800052C: jr          $ra
    // 0x08000530: nop

    TRACE_RETURN()
    return;
    // 0x08000530: nop

;}
RECOMP_FUNC void func_0800343C_7163AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800343C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003440: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003444: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08003448: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0800344C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003450: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08003454: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x08003458: jal         0x080034B4
    // 0x0800345C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_080034B4_716424(rdram, ctx);
        goto after_0;
    // 0x0800345C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x08003460: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_08003464:
    // 0x08003464: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08003468: jal         0x08003544
    // 0x0800346C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_08003544_7164B4(rdram, ctx);
        goto after_1;
    // 0x0800346C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x08003470: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x08003474: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08003478: bnel        $s0, $zero, L_08003464
    if (ctx->r16 != 0) {
        // 0x0800347C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08003464;
    }
    goto skip_0;
    // 0x0800347C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x08003480: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003484: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
    // 0x08003488: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800348C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X32C4) << 16);
    // 0x08003490: sh          $t6, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r14;
    // 0x08003494: jalr        $t9
    // 0x08003498: addiu       $a0, $a0, 0x32C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X32C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003498: addiu       $a0, $a0, 0x32C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X32C4));
    after_2:
    // 0x0800349C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080034A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080034A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x080034A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x080034AC: jr          $ra
    // 0x080034B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080034B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080032C4_716234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080032C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080032C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080032CC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x080032D0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x080032D4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080032D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080032DC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x080032E0: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x080032E4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x080032E8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x080032EC: beq         $s0, $zero, L_08003348
    if (ctx->r16 == 0) {
        // 0x080032F0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_08003348;
    }
    // 0x080032F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x080032F4: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x080032F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080032FC: nop

    // 0x08003300: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_08003304:
    // 0x08003304: jal         0x08003648
    // 0x08003308: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_08003648_7165B8(rdram, ctx);
        goto after_0;
    // 0x08003308: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x0800330C: lwc1        $f6, 0xC($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08003310: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08003314: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08003318: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x0800331C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08003320: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x08003324: nop

    // 0x08003328: bc1fl       L_0800333C
    if (!c1cs) {
        // 0x0800332C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_0800333C;
    }
    goto skip_0;
    // 0x0800332C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x08003330: jal         0x08003544
    // 0x08003334: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_08003544_7164B4(rdram, ctx);
        goto after_1;
    // 0x08003334: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x08003338: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_0800333C:
    // 0x0800333C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08003340: bnel        $s0, $zero, L_08003304
    if (ctx->r16 != 0) {
        // 0x08003344: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08003304;
    }
    goto skip_1;
    // 0x08003344: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_08003348:
    // 0x08003348: lhu         $v0, 0x8A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X8A);
    // 0x0800334C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X3390) << 16);
    // 0x08003350: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003354: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x08003358: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800335C: bne         $v1, $zero, L_08003370
    if (ctx->r3 != 0) {
        // 0x08003360: sh          $t6, 0x8A($s2)
        MEM_H(0X8A, ctx->r18) = ctx->r14;
            goto L_08003370;
    }
    // 0x08003360: sh          $t6, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r14;
    // 0x08003364: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003368: jalr        $t9
    // 0x0800336C: addiu       $a0, $a0, 0x3390
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X3390));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800336C: addiu       $a0, $a0, 0x3390
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X3390));
    after_2:
L_08003370:
    // 0x08003370: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08003374: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08003378: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0800337C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003380: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x08003384: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x08003388: jr          $ra
    // 0x0800338C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x0800338C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08000948_7138B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000948: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x0800094C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08000950: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000954: sb          $a1, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r5;
    // 0x08000958: sb          $a2, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r6;
    // 0x0800095C: sb          $a3, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r7;
    // 0x08000960: lb          $t2, 0x13($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X13);
    // 0x08000964: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x08000968: sb          $v0, 0xE6($a0)
    MEM_B(0XE6, ctx->r4) = ctx->r2;
    // 0x0800096C: sb          $v0, 0xE7($a0)
    MEM_B(0XE7, ctx->r4) = ctx->r2;
    // 0x08000970: jr          $ra
    // 0x08000974: sb          $t2, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x08000974: sb          $t2, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_08000C90_713C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000C9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000CA0: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000CA4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000CA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000CAC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000CB0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000CB4: bgez        $t6, L_08000CC8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08000CB8: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000CC8;
    }
    // 0x08000CB8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000CBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000CC0: nop

    // 0x08000CC4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_08000CC8:
    // 0x08000CC8: lw          $v1, 0xD4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XD4);
    // 0x08000CCC: lhu         $v0, 0xDA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XDA);
    // 0x08000CD0: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x08000CD4: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x08000CD8: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    // 0x08000CDC: sh          $v1, 0xD4($a1)
    MEM_H(0XD4, ctx->r5) = ctx->r3;
    // 0x08000CE0: bne         $a2, $zero, L_08000D0C
    if (ctx->r6 != 0) {
        // 0x08000CE4: sh          $v0, 0xD8($a1)
        MEM_H(0XD8, ctx->r5) = ctx->r2;
            goto L_08000D0C;
    }
    // 0x08000CE4: sh          $v0, 0xD8($a1)
    MEM_H(0XD8, ctx->r5) = ctx->r2;
    // 0x08000CE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CEC: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x08000CF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CF4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XD60) << 16);
    // 0x08000CF8: sb          $t8, 0xDC($a1)
    MEM_B(0XDC, ctx->r5) = ctx->r24;
    // 0x08000CFC: jalr        $t9
    // 0x08000D00: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D00: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    after_0:
    // 0x08000D04: b           L_08000D54
    // 0x08000D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000D54;
    // 0x08000D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000D0C:
    // 0x08000D0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000D10: bne         $a2, $at, L_08000D38
    if (ctx->r6 != ctx->r1) {
        // 0x08000D14: addiu       $t0, $zero, 0x70
        ctx->r8 = ADD32(0, 0X70);
            goto L_08000D38;
    }
    // 0x08000D14: addiu       $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
    // 0x08000D18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D1C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XEB4) << 16);
    // 0x08000D24: sb          $zero, 0xDC($a1)
    MEM_B(0XDC, ctx->r5) = 0;
    // 0x08000D28: jalr        $t9
    // 0x08000D2C: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XEB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D2C: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XEB4));
    after_1:
    // 0x08000D30: b           L_08000D54
    // 0x08000D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000D54;
    // 0x08000D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000D38:
    // 0x08000D38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XD60) << 16);
    // 0x08000D44: sb          $t0, 0xDC($a1)
    MEM_B(0XDC, ctx->r5) = ctx->r8;
    // 0x08000D48: jalr        $t9
    // 0x08000D4C: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D4C: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    after_2:
    // 0x08000D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000D54:
    // 0x08000D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D58: jr          $ra
    // 0x08000D5C: nop

    TRACE_RETURN()
    return;
    // 0x08000D5C: nop

;}
RECOMP_FUNC void func_080039F0_716960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039F0: jr          $ra
    // 0x080039F4: nop

    TRACE_RETURN()
    return;
    // 0x080039F4: nop

;}
RECOMP_FUNC void func_08002218_715188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002218: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0800221C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x08002220: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x08002224: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x08002228: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0800222C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08002230: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002234: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08002238: lw          $s1, 0x0($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X0);
    // 0x0800223C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08002240: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x08002244: beq         $s1, $zero, L_08002300
    if (ctx->r17 == 0) {
        // 0x08002248: lw          $v1, 0xD8($a0)
        ctx->r3 = MEM_W(ctx->r4, 0XD8);
            goto L_08002300;
    }
    // 0x08002248: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x0800224C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08002250: jal         0x080027CC
    // 0x08002254: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_080027CC_71573C(rdram, ctx);
        goto after_0;
    // 0x08002254: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x08002258: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x0800225C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08002260: lui         $s4, 0x800
    ctx->r20 = S32(RELOC_HI16(47, 0X2720) << 16);
    // 0x08002264: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3ED0) << 16);
    // 0x08002268: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x0800226C: ldc1        $f20, 0x3ED0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3ED0));
    // 0x08002270: addiu       $s4, $s4, 0x2720
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(47, 0X2720));
    // 0x08002274: addu        $s0, $v1, $t6
    ctx->r16 = ADD32(ctx->r3, ctx->r14);
    // 0x08002278: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_0800227C:
    // 0x0800227C: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x08002280: jalr        $s4
    // 0x08002284: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x08002284: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    after_1:
    // 0x08002288: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x0800228C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08002290: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08002294: addiu       $t8, $t7, 0x5
    ctx->r24 = ADD32(ctx->r15, 0X5);
    // 0x08002298: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x0800229C: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x080022A0: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x080022A4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x080022A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080022AC: sub.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = ctx->f6.d - ctx->f20.d;
    // 0x080022B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080022B4: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x080022B8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x080022BC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080022C0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x080022C4: lw          $t3, 0xDC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0XDC);
    // 0x080022C8: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x080022CC: bnel        $at, $zero, L_080022E0
    if (ctx->r1 != 0) {
        // 0x080022D0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_080022E0;
    }
    goto skip_0;
    // 0x080022D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x080022D4: jal         0x08002414
    // 0x080022D8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    func_08002414_715384(rdram, ctx);
        goto after_2;
    // 0x080022D8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_2:
    // 0x080022DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_080022E0:
    // 0x080022E0: slti        $at, $s2, 0x6
    ctx->r1 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x080022E4: bnel        $at, $zero, L_080022F4
    if (ctx->r1 != 0) {
        // 0x080022E8: lw          $s1, 0x0($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X0);
            goto L_080022F4;
    }
    goto skip_1;
    // 0x080022E8: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x080022EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x080022F0: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_080022F4:
    // 0x080022F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x080022F8: bnel        $s1, $zero, L_0800227C
    if (ctx->r17 != 0) {
        // 0x080022FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800227C;
    }
    goto skip_2;
    // 0x080022FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_2:
L_08002300:
    // 0x08002300: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x08002304: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08002308: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800230C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08002310: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08002314: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x08002318: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x0800231C: jr          $ra
    // 0x08002320: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08002320: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080037F4_716764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080037F8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x080037FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003800: lui         $t7, 0xD
    ctx->r15 = S32(0XD << 16);
    // 0x08003804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003808: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x0800380C: lbu         $t7, -0x774($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X774);
    // 0x08003810: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08003814: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003818: bne         $t7, $at, L_080038E4
    if (ctx->r15 != ctx->r1) {
        // 0x0800381C: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_080038E4;
    }
    // 0x0800381C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08003820: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08003824: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08003828: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800382C: beql        $t8, $zero, L_080038E8
    if (ctx->r24 == 0) {
        // 0x08003830: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080038E8;
    }
    goto skip_0;
    // 0x08003830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003834: lw          $t9, -0x39D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39D8);
    // 0x08003838: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800383C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08003840: lw          $v0, 0x2C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X2C);
    // 0x08003844: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003848: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x0800384C: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x08003850: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08003854: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x08003858: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x0800385C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08003860: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x08003864: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x08003868: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x0800386C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08003870: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x08003874: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08003878: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x0800387C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08003880: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x08003884: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x08003888: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x0800388C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08003890: jalr        $t9
    // 0x08003894: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003894: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x08003898: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0800389C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x080038A0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080038A4: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x080038A8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080038AC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x080038B0: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x080038B4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080038B8: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x080038BC: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x080038C0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080038C4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x080038C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080038CC: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x080038D0: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x080038D4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080038D8: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x080038DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080038E0: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_080038E4:
    // 0x080038E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080038E8:
    // 0x080038E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080038EC: jr          $ra
    // 0x080038F0: nop

    TRACE_RETURN()
    return;
    // 0x080038F0: nop

;}
RECOMP_FUNC void func_08002C44_715BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002C48: jr          $ra
    // 0x08002C4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002C4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000978_7138E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000978: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0800097C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000980: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000984: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000988: lbu         $t6, 0xEC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEC);
    // 0x0800098C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000990: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08000994: slt         $v1, $v0, $t6
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x08000998: bne         $v1, $zero, L_08000B58
    if (ctx->r3 != 0) {
        // 0x0800099C: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000B58;
    }
    // 0x0800099C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080009A0: lhu         $v0, 0xEA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XEA);
    // 0x080009A4: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x080009A8: beql        $t8, $zero, L_08000A44
    if (ctx->r24 == 0) {
        // 0x080009AC: lbu         $t4, 0xD8($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XD8);
            goto L_08000A44;
    }
    goto skip_0;
    // 0x080009AC: lbu         $t4, 0xD8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD8);
    skip_0:
    // 0x080009B0: lhu         $t9, 0xE0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE0);
    // 0x080009B4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080009B8: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x080009BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x080009C0: jalr        $v0
    // 0x080009C4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080009C4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    after_0:
    // 0x080009C8: lbu         $t1, 0xD8($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD8);
    // 0x080009CC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080009D0: addiu       $t2, $t1, -0x80
    ctx->r10 = ADD32(ctx->r9, -0X80);
    // 0x080009D4: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x080009D8: sra         $t4, $t3, 24
    ctx->r12 = S32(SIGNED(ctx->r11) >> 24);
    // 0x080009DC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x080009E0: nop

    // 0x080009E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080009E8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x080009EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080009F0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x080009F4: nop

    // 0x080009F8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x080009FC: lhu         $a0, 0xE0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE0);
    // 0x08000A00: addiu       $t7, $a0, 0x60
    ctx->r15 = ADD32(ctx->r4, 0X60);
    // 0x08000A04: jalr        $v0
    // 0x08000A08: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000A08: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_1:
    // 0x08000A0C: lbu         $t9, 0xDA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XDA);
    // 0x08000A10: lhu         $v0, 0xEA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XEA);
    // 0x08000A14: addiu       $t0, $t9, -0x80
    ctx->r8 = ADD32(ctx->r25, -0X80);
    // 0x08000A18: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x08000A1C: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x08000A20: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x08000A24: nop

    // 0x08000A28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000A2C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08000A30: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08000A34: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08000A38: b           L_08000A58
    // 0x08000A3C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
        goto L_08000A58;
    // 0x08000A3C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x08000A40: lbu         $t4, 0xD8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD8);
L_08000A44:
    // 0x08000A44: addiu       $t5, $t4, -0x80
    ctx->r13 = ADD32(ctx->r12, -0X80);
    // 0x08000A48: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x08000A4C: lbu         $a2, 0xDA($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XDA);
    // 0x08000A50: addiu       $a2, $a2, -0x80
    ctx->r6 = ADD32(ctx->r6, -0X80);
    // 0x08000A54: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
L_08000A58:
    // 0x08000A58: beq         $t6, $zero, L_08000AEC
    if (ctx->r14 == 0) {
        // 0x08000A5C: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_08000AEC;
    }
    // 0x08000A5C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08000A60: lhu         $t7, 0xE0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE0);
    // 0x08000A64: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08000A68: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000A6C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x08000A70: jalr        $v0
    // 0x08000A74: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08000A74: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_2:
    // 0x08000A78: lbu         $t9, 0xD9($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XD9);
    // 0x08000A7C: lhu         $a0, 0xE0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE0);
    // 0x08000A80: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08000A84: addiu       $t0, $t9, -0x80
    ctx->r8 = ADD32(ctx->r25, -0X80);
    // 0x08000A88: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x08000A8C: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x08000A90: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x08000A94: addiu       $t4, $a0, 0x60
    ctx->r12 = ADD32(ctx->r4, 0X60);
    // 0x08000A98: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    // 0x08000A9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000AA0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08000AA4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08000AA8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08000AAC: jalr        $v0
    // 0x08000AB0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000AB0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_3:
    // 0x08000AB4: lbu         $t6, 0xDB($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XDB);
    // 0x08000AB8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000ABC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x08000AC0: addiu       $t7, $t6, -0x80
    ctx->r15 = ADD32(ctx->r14, -0X80);
    // 0x08000AC4: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x08000AC8: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x08000ACC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08000AD0: nop

    // 0x08000AD4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000AD8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000ADC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08000AE0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x08000AE4: b           L_08000B00
    // 0x08000AE8: lbu         $t1, 0xE4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE4);
        goto L_08000B00;
    // 0x08000AE8: lbu         $t1, 0xE4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE4);
L_08000AEC:
    // 0x08000AEC: lbu         $a1, 0xD9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD9);
    // 0x08000AF0: lbu         $a0, 0xDB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XDB);
    // 0x08000AF4: addiu       $a1, $a1, -0x80
    ctx->r5 = ADD32(ctx->r5, -0X80);
    // 0x08000AF8: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    // 0x08000AFC: lbu         $t1, 0xE4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE4);
L_08000B00:
    // 0x08000B00: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x08000B04: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x08000B08: lbu         $t5, 0xE6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XE6);
    // 0x08000B0C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x08000B10: lbu         $v1, 0xDF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDF);
    // 0x08000B14: lbu         $t8, 0xE5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE5);
    // 0x08000B18: lbu         $t1, 0xE7($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE7);
    // 0x08000B1C: and         $t4, $v0, $t3
    ctx->r12 = ctx->r2 & ctx->r11;
    // 0x08000B20: addu        $t6, $t5, $a2
    ctx->r14 = ADD32(ctx->r13, ctx->r6);
    // 0x08000B24: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x08000B28: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x08000B2C: and         $t7, $v0, $t6
    ctx->r15 = ctx->r2 & ctx->r14;
    // 0x08000B30: and         $t0, $v1, $t9
    ctx->r8 = ctx->r3 & ctx->r25;
    // 0x08000B34: and         $t3, $v1, $t2
    ctx->r11 = ctx->r3 & ctx->r10;
    // 0x08000B38: sb          $t4, 0xE4($s0)
    MEM_B(0XE4, ctx->r16) = ctx->r12;
    // 0x08000B3C: sb          $t7, 0xE6($s0)
    MEM_B(0XE6, ctx->r16) = ctx->r15;
    // 0x08000B40: sb          $t0, 0xE5($s0)
    MEM_B(0XE5, ctx->r16) = ctx->r8;
    // 0x08000B44: sb          $t3, 0xE7($s0)
    MEM_B(0XE7, ctx->r16) = ctx->r11;
    // 0x08000B48: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08000B4C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x08000B50: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000B54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
L_08000B58:
    // 0x08000B58: lhu         $t4, 0xEA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XEA);
    // 0x08000B5C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000B60: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B64: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x08000B68: beq         $t5, $zero, L_08000C6C
    if (ctx->r13 == 0) {
        // 0x08000B6C: lw          $a2, 0x30($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X30);
            goto L_08000C6C;
    }
    // 0x08000B6C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x08000B70: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x08000B74: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x08000B78: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x08000B7C: beql        $t6, $zero, L_08000BEC
    if (ctx->r14 == 0) {
        // 0x08000B80: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_08000BEC;
    }
    goto skip_1;
    // 0x08000B80: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x08000B84: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x08000B88: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x08000B8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000B90: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000B94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000B98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000B9C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000BA0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000BA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000BA8: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x08000BAC: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x08000BB0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x08000BB4: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x08000BB8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000BBC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08000BC0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000BC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BC8: nop

    // 0x08000BCC: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
    // 0x08000BD0: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x08000BD4: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08000BD8: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
    // 0x08000BDC: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08000BE0: div.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x08000BE4: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x08000BE8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
L_08000BEC:
    // 0x08000BEC: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x08000BF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000BF4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08000BF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000BFC: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x08000C00: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000C04: beq         $t9, $zero, L_08000C30
    if (ctx->r25 == 0) {
        // 0x08000C08: cvt.s.w     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08000C30;
    }
    // 0x08000C08: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000C0C: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x08000C10: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08000C14: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08000C18: div.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x08000C1C: div.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x08000C20: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x08000C24: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
    // 0x08000C28: b           L_08000C7C
    // 0x08000C2C: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
        goto L_08000C7C;
    // 0x08000C2C: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
L_08000C30:
    // 0x08000C30: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x08000C34: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x08000C38: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x08000C3C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000C40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x08000C44: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000C48: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x08000C4C: add.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x08000C50: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08000C54: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08000C58: div.s       $f4, $f16, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    // 0x08000C5C: div.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x08000C60: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
    // 0x08000C64: b           L_08000C7C
    // 0x08000C68: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
        goto L_08000C7C;
    // 0x08000C68: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
L_08000C6C:
    // 0x08000C6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000C70: nop

    // 0x08000C74: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x08000C78: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
L_08000C7C:
    // 0x08000C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000C84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000C88: jr          $ra
    // 0x08000C8C: nop

    TRACE_RETURN()
    return;
    // 0x08000C8C: nop

;}
RECOMP_FUNC void func_08000EB4_713E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000EBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000EC0: lw          $a1, 0xD0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD0);
    // 0x08000EC4: jal         0x08001294
    // 0x08000EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08001294_714204(rdram, ctx);
        goto after_0;
    // 0x08000EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000ECC: beq         $v0, $zero, L_08000EF0
    if (ctx->r2 == 0) {
        // 0x08000ED0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08000EF0;
    }
    // 0x08000ED0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000ED4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000ED8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08000EDC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XD60) << 16);
    // 0x08000EE4: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08000EE8: jalr        $t9
    // 0x08000EEC: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EEC: addiu       $a0, $a0, 0xD60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XD60));
    after_1:
L_08000EF0:
    // 0x08000EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000EF8: jr          $ra
    // 0x08000EFC: nop

    TRACE_RETURN()
    return;
    // 0x08000EFC: nop

;}
RECOMP_FUNC void func_08002E24_715D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E24: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x08002E28: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x08002E2C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x08002E30: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x08002E34: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x08002E38: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x08002E3C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x08002E40: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x08002E44: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08002E48: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08002E4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002E50: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08002E54: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x08002E58: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x08002E5C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002E60: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002E64: bgez        $t6, L_08002E7C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08002E68: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08002E7C;
    }
    // 0x08002E68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002E6C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002E70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002E74: nop

    // 0x08002E78: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08002E7C:
    // 0x08002E7C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x08002E80: lw          $t7, 0xD4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XD4);
    // 0x08002E84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E88: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08002E8C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x08002E90: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08002E94: bgez        $t7, L_08002EAC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08002E98: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08002EAC;
    }
    // 0x08002E98: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002E9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002EA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002EA4: nop

    // 0x08002EA8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_08002EAC:
    // 0x08002EAC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08002EB0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08002EB4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08002EB8: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x08002EBC: jalr        $t9
    // 0x08002EC0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002EC0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08002EC4: sw          $v0, 0xD0($s4)
    MEM_W(0XD0, ctx->r20) = ctx->r2;
    // 0x08002EC8: bne         $v0, $zero, L_08002EE8
    if (ctx->r2 != 0) {
        // 0x08002ECC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08002EE8;
    }
    // 0x08002ECC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08002ED0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002ED4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002ED8: jalr        $t9
    // 0x08002EDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002EDC: nop

    after_1:
    // 0x08002EE0: b           L_08002FFC
    // 0x08002EE4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_08002FFC;
    // 0x08002EE4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_08002EE8:
    // 0x08002EE8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002EEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002EF0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08002EF4: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08002EF8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08002EFC: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x08002F00: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x08002F04: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x08002F08: addiu       $s7, $s7, 0xED0
    ctx->r23 = ADD32(ctx->r23, 0XED0);
    // 0x08002F0C: addiu       $s6, $s6, 0x6E54
    ctx->r22 = ADD32(ctx->r22, 0X6E54);
    // 0x08002F10: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x08002F14: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x08002F18: addiu       $s1, $zero, 0xB4
    ctx->r17 = ADD32(0, 0XB4);
    // 0x08002F1C: addiu       $fp, $zero, 0x200
    ctx->r30 = ADD32(0, 0X200);
    // 0x08002F20: swc1        $f8, 0xD8($s4)
    MEM_W(0XD8, ctx->r20) = ctx->f8.u32l;
    // 0x08002F24: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08002F28: sw          $t8, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->r24;
    // 0x08002F2C: sw          $t0, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r8;
    // 0x08002F30: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x08002F34: swc1        $f10, 0xDC($s4)
    MEM_W(0XDC, ctx->r20) = ctx->f10.u32l;
L_08002F38:
    // 0x08002F38: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x08002F3C: jalr        $s6
    // 0x08002F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_2;
    // 0x08002F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08002F44: lwc1        $f18, 0x8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X8);
    // 0x08002F48: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x08002F4C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x08002F50: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x08002F54: lwc1        $f16, 0xC($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08002F58: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002F5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08002F60: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x08002F64: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x08002F68: sh          $fp, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r30;
    // 0x08002F6C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x08002F70: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x08002F74: lhu         $t1, 0x16($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X16);
    // 0x08002F78: sb          $t2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r10;
    // 0x08002F7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08002F80: sh          $t1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r9;
    // 0x08002F84: lwc1        $f8, 0xDC($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0XDC);
    // 0x08002F88: lwc1        $f16, 0xD8($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0XD8);
    // 0x08002F8C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x08002F90: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08002F94: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002F98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08002F9C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x08002FA0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x08002FA4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x08002FA8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08002FAC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002FB0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08002FB4: sb          $s1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r17;
    // 0x08002FB8: jalr        $s7
    // 0x08002FBC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_3;
    // 0x08002FBC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x08002FC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002FC4: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x08002FC8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002FCC: addiu       $s1, $s1, -0x3C
    ctx->r17 = ADD32(ctx->r17, -0X3C);
    // 0x08002FD0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x08002FD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x08002FD8: addiu       $s2, $s2, 0x3C
    ctx->r18 = ADD32(ctx->r18, 0X3C);
    // 0x08002FDC: bne         $s1, $zero, L_08002F38
    if (ctx->r17 != 0) {
        // 0x08002FE0: sw          $t5, 0x30($s5)
        MEM_W(0X30, ctx->r21) = ctx->r13;
            goto L_08002F38;
    }
    // 0x08002FE0: sw          $t5, 0x30($s5)
    MEM_W(0X30, ctx->r21) = ctx->r13;
    // 0x08002FE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FEC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X3028) << 16);
    // 0x08002FF0: jalr        $t9
    // 0x08002FF4: addiu       $a0, $a0, 0x3028
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X3028));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002FF4: addiu       $a0, $a0, 0x3028
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X3028));
    after_4:
    // 0x08002FF8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_08002FFC:
    // 0x08002FFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003000: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08003004: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x08003008: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x0800300C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x08003010: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x08003014: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x08003018: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x0800301C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x08003020: jr          $ra
    // 0x08003024: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x08003024: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_08001FD4_714F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FD4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001FD8: jr          $ra
    // 0x08001FDC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001FDC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001294_714204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001294: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001298: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800129C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x080012A0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080012A4: lw          $v0, 0x2C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2C);
    // 0x080012A8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080012AC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080012B0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x080012B4: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x080012B8: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x080012BC: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080012C0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080012C4: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x080012C8: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080012CC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080012D0: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080012D4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x080012D8: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080012DC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080012E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x080012E4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x080012E8: nop

    // 0x080012EC: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x080012F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080012F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080012F8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x080012FC: nop

    // 0x08001300: bc1f        L_08001310
    if (!c1cs) {
        // 0x08001304: nop
    
            goto L_08001310;
    }
    // 0x08001304: nop

    // 0x08001308: jr          $ra
    // 0x0800130C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x0800130C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08001310:
    // 0x08001310: jr          $ra
    // 0x08001314: nop

    TRACE_RETURN()
    return;
    // 0x08001314: nop

;}
RECOMP_FUNC void func_08003028_715F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003028: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0800302C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x08003030: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x08003034: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x08003038: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x0800303C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x08003040: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x08003044: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08003048: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x0800304C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08003050: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003054: lui         $s5, 0x8022
    ctx->r21 = S32(0X8022 << 16);
    // 0x08003058: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x0800305C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x08003060: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x08003064: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08003068: addiu       $s5, $s5, 0xED0
    ctx->r21 = ADD32(ctx->r21, 0XED0);
    // 0x0800306C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x08003070: lui         $s6, 0x4000
    ctx->r22 = S32(0X4000 << 16);
    // 0x08003074: lui         $s7, 0x2000
    ctx->r23 = S32(0X2000 << 16);
    // 0x08003078: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_0800307C:
    // 0x0800307C: lwc1        $f4, 0xDC($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XDC);
    // 0x08003080: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x08003084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003088: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800308C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003090: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08003094: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08003098: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x0800309C: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x080030A0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080030A4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080030A8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080030AC: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x080030B0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080030B4: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x080030B8: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x080030BC: beq         $at, $zero, L_080030CC
    if (ctx->r1 == 0) {
        // 0x080030C0: sb          $t7, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r15;
            goto L_080030CC;
    }
    // 0x080030C0: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x080030C4: sb          $fp, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r30;
    // 0x080030C8: andi        $a1, $fp, 0xFF
    ctx->r5 = ctx->r30 & 0XFF;
L_080030CC:
    // 0x080030CC: jalr        $s5
    // 0x080030D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x080030D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x080030D4: or          $t9, $v0, $s6
    ctx->r25 = ctx->r2 | ctx->r22;
    // 0x080030D8: or          $t0, $t9, $s7
    ctx->r8 = ctx->r25 | ctx->r23;
    // 0x080030DC: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x080030E0: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x080030E4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x080030E8: beql        $at, $zero, L_08003154
    if (ctx->r1 == 0) {
        // 0x080030EC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_08003154;
    }
    goto skip_0;
    // 0x080030EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x080030F0: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x080030F4: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x080030F8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x080030FC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x08003100: lwc1        $f16, 0xC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XC);
    // 0x08003104: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x08003108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800310C: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x08003110: lwc1        $f18, 0x10($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X10);
    // 0x08003114: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003118: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x0800311C: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x08003120: lwc1        $f4, 0xD8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XD8);
    // 0x08003124: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x08003128: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x0800312C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08003130: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08003134: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08003138: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x0800313C: jalr        $s5
    // 0x08003140: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_1;
    // 0x08003140: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x08003144: or          $t4, $v0, $s6
    ctx->r12 = ctx->r2 | ctx->r22;
    // 0x08003148: or          $t5, $t4, $s7
    ctx->r13 = ctx->r12 | ctx->r23;
    // 0x0800314C: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
    // 0x08003150: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_08003154:
    // 0x08003154: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x08003158: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x0800315C: beql        $s0, $zero, L_08003170
    if (ctx->r16 == 0) {
        // 0x08003160: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_08003170;
    }
    goto skip_1;
    // 0x08003160: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x08003164: bne         $s3, $at, L_0800307C
    if (ctx->r19 != ctx->r1) {
        // 0x08003168: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_0800307C;
    }
    // 0x08003168: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x0800316C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_08003170:
    // 0x08003170: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003174: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x08003178: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x0800317C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x08003180: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x08003184: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x08003188: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x0800318C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x08003190: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x08003194: jr          $ra
    // 0x08003198: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08003198: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08002C50_715BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002C54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002C58: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002C5C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002C60: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08002C64: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3F00) << 16);
    // 0x08002C68: ldc1        $f8, 0x3F00($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(47, 0X3F00));
    // 0x08002C6C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002C70: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x08002C74: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08002C78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002C7C: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08002C80: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002C84: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x08002C88: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x08002C8C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002C90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002C94: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08002C98: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08002C9C: c.lt.d      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.d < ctx->f2.d;
    // 0x08002CA0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08002CA4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08002CA8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002CAC: bc1f        L_08002CC0
    if (!c1cs) {
        // 0x08002CB0: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_08002CC0;
    }
    // 0x08002CB0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08002CB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002CB8: nop

    // 0x08002CBC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
L_08002CC0:
    // 0x08002CC0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002CC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002CC8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002CCC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08002CD0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002CD4: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x08002CD8: addiu       $v0, $v0, -0x5D94
    ctx->r2 = ADD32(ctx->r2, -0X5D94);
    // 0x08002CDC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x08002CE0: bc1fl       L_08002CF0
    if (!c1cs) {
        // 0x08002CE4: lwc1        $f6, 0x24($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
            goto L_08002CF0;
    }
    goto skip_0;
    // 0x08002CE4: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    skip_0:
    // 0x08002CE8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002CEC: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
L_08002CF0:
    // 0x08002CF0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002CF4: c.lt.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d < ctx->f2.d;
    // 0x08002CF8: nop

    // 0x08002CFC: bc1fl       L_08002D0C
    if (!c1cs) {
        // 0x08002D00: lbu         $t6, 0xED($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0XED);
            goto L_08002D0C;
    }
    goto skip_1;
    // 0x08002D00: lbu         $t6, 0xED($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XED);
    skip_1:
    // 0x08002D04: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08002D08: lbu         $t6, 0xED($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XED);
L_08002D0C:
    // 0x08002D0C: addiu       $t8, $t6, -0x2
    ctx->r24 = ADD32(ctx->r14, -0X2);
    // 0x08002D10: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    // 0x08002D14: slti        $at, $a1, 0x36
    ctx->r1 = SIGNED(ctx->r5) < 0X36 ? 1 : 0;
    // 0x08002D18: beq         $at, $zero, L_08002D28
    if (ctx->r1 == 0) {
        // 0x08002D1C: sb          $t8, 0xED($s1)
        MEM_B(0XED, ctx->r17) = ctx->r24;
            goto L_08002D28;
    }
    // 0x08002D1C: sb          $t8, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r24;
    // 0x08002D20: bgtzl       $a1, L_08002D34
    if (SIGNED(ctx->r5) > 0) {
        // 0x08002D24: sw          $t1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r9;
            goto L_08002D34;
    }
    goto skip_2;
    // 0x08002D24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    skip_2:
L_08002D28:
    // 0x08002D28: sb          $t9, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r25;
    // 0x08002D2C: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    // 0x08002D30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
L_08002D34:
    // 0x08002D34: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08002D38: jalr        $v0
    // 0x08002D3C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08002D3C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x08002D40: lbu         $t2, 0xED($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XED);
    // 0x08002D44: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08002D48: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x08002D4C: beql        $at, $zero, L_08002E14
    if (ctx->r1 == 0) {
        // 0x08002D50: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08002E14;
    }
    goto skip_3;
    // 0x08002D50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x08002D54: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08002D58: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08002D5C: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08002D60: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x08002D64: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08002D68: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x08002D6C: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x08002D70: lwc1        $f18, 0x10($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X10);
    // 0x08002D74: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x08002D78: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08002D7C: jalr        $v1
    // 0x08002D80: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08002D80: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x08002D84: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08002D88: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08002D8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002D90: lhu         $t3, 0x16($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X16);
    // 0x08002D94: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002D98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08002D9C: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x08002DA0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08002DA4: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x08002DA8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002DAC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002DB0: jalr        $v1
    // 0x08002DB4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08002DB4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x08002DB8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08002DBC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x08002DC0: mflo        $t6
    ctx->r14 = lo;
    // 0x08002DC4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002DC8: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08002DCC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08002DD0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08002DD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002DD8: addiu       $t7, $zero, 0x35
    ctx->r15 = ADD32(0, 0X35);
    // 0x08002DDC: sb          $t7, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r15;
    // 0x08002DE0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08002DE4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002DE8: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08002DEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002DF0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002DF4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002DF8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08002DFC: swc1        $f16, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f16.u32l;
    // 0x08002E00: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08002E04: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08002E08: jalr        $t9
    // 0x08002E0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E0C: nop

    after_3:
    // 0x08002E10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002E14:
    // 0x08002E14: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002E18: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002E1C: jr          $ra
    // 0x08002E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08002E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
