#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080004AC_70DBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080004BC: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080004C0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080004C4: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x080004C8: beql        $t6, $zero, L_08000524
    if (ctx->r14 == 0) {
        // 0x080004CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000524;
    }
    goto skip_0;
    // 0x080004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080004D0: jalr        $t9
    // 0x080004D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080004D8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080004DC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080004E0: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x080004E4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080004E8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080004EC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080004F0: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x080004F4: jalr        $t9
    // 0x080004F8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004F8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_1:
    // 0x080004FC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000500: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000508: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x0800050C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X434) << 16);
    // 0x08000510: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X434));
    // 0x08000514: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08000518: jalr        $t9
    // 0x0800051C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800051C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_2:
    // 0x08000520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000524:
    // 0x08000524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000528: jr          $ra
    // 0x0800052C: nop

    TRACE_RETURN()
    return;
    // 0x0800052C: nop

;}
RECOMP_FUNC void func_08000434_70DB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800043C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000440: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000444: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000448: beql        $t7, $zero, L_080004A0
    if (ctx->r15 == 0) {
        // 0x0800044C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080004A0;
    }
    goto skip_0;
    // 0x0800044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000450: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08000454: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000458: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x0800045C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08000460: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08000464: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08000468: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x0800046C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000470: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08000474: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08000478: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x0800047C: lhu         $t1, 0xD8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XD8);
    // 0x08000480: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08000484: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X428) << 16);
    // 0x08000488: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800048C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08000490: addiu       $a0, $a0, 0x428
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X428));
    // 0x08000494: jalr        $t9
    // 0x08000498: sb          $t1, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000498: sb          $t1, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r9;
    after_0:
    // 0x0800049C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080004A0:
    // 0x080004A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004A4: jr          $ra
    // 0x080004A8: nop

    TRACE_RETURN()
    return;
    // 0x080004A8: nop

;}
RECOMP_FUNC void func_080002D8_70DA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080002DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080002E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080002EC: addiu       $t6, $zero, 0x2CC
    ctx->r14 = ADD32(0, 0X2CC);
    // 0x080002F0: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x080002F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080002F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080002FC: jalr        $t9
    // 0x08000300: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000300: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_0:
    // 0x08000304: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x08000308: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800030C: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08000310: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x08000314: lui         $a2, 0x900
    ctx->r6 = S32(0X900 << 16);
    // 0x08000318: lui         $a3, 0x900
    ctx->r7 = S32(0X900 << 16);
    // 0x0800031C: addiu       $a3, $a3, 0x3000
    ctx->r7 = ADD32(ctx->r7, 0X3000);
    // 0x08000320: addiu       $a2, $a2, 0x2000
    ctx->r6 = ADD32(ctx->r6, 0X2000);
    // 0x08000324: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000328: jalr        $t9
    // 0x0800032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000330: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000334: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000338: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x0800033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000340: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000344: jalr        $t9
    // 0x08000348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800034C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000350: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800035C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000360: jalr        $t9
    // 0x08000364: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000364: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08000368: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x0800036C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x08000370: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000374: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x08000378: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800037C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08000380: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000384: sb          $t0, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r8;
    // 0x08000388: jalr        $t9
    // 0x0800038C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800038C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x08000390: beq         $v0, $zero, L_08000404
    if (ctx->r2 == 0) {
        // 0x08000394: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(42, 0X174) << 16);
            goto L_08000404;
    }
    // 0x08000394: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X174) << 16);
    // 0x08000398: lhu         $t1, 0xD8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD8);
    // 0x0800039C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080003A0: beql        $t1, $zero, L_080003C4
    if (ctx->r9 == 0) {
        // 0x080003A4: lwc1        $f10, 0x8($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
            goto L_080003C4;
    }
    goto skip_0;
    // 0x080003A4: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    skip_0:
    // 0x080003A8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080003AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003B0: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080003B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080003B8: b           L_080003D4
    // 0x080003BC: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
        goto L_080003D4;
    // 0x080003BC: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x080003C0: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
L_080003C4:
    // 0x080003C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080003C8: nop

    // 0x080003CC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080003D0: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
L_080003D4:
    // 0x080003D4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080003D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003DC: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080003E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080003EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X0) << 16);
    // 0x080003F0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X0));
    // 0x080003F4: jalr        $t9
    // 0x080003F8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003F8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_5:
    // 0x080003FC: b           L_08000418
    // 0x08000400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000418;
    // 0x08000400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000404:
    // 0x08000404: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000408: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800040C: jalr        $t9
    // 0x08000410: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000410: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X174));
    after_6:
    // 0x08000414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000418:
    // 0x08000418: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x0800041C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000420: jr          $ra
    // 0x08000424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080006F8_70DE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000700: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08000704: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000708: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800070C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000710: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000714: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000718: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x0800071C: jalr        $t9
    // 0x08000720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000724: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000728: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800072C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000730: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08000734: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x08000738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800073C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000740: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000744: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X6B4) << 16);
    // 0x08000748: addiu       $a0, $a0, 0x6B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X6B4));
    // 0x0800074C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08000750: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08000754: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08000758: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x0800075C: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x08000760: jalr        $t9
    // 0x08000764: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000764: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    after_1:
    // 0x08000768: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800076C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000770: jalr        $t9
    // 0x08000774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x08000778: beq         $v0, $zero, L_0800078C
    if (ctx->r2 == 0) {
        // 0x0800077C: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800078C;
    }
    // 0x0800077C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000780: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000784: jalr        $t9
    // 0x08000788: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000788: nop

    after_3:
L_0800078C:
    // 0x0800078C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000794: jr          $ra
    // 0x08000798: nop

    TRACE_RETURN()
    return;
    // 0x08000798: nop

;}
RECOMP_FUNC void func_08000600_70DD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800060C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000610: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000614: addiu       $t6, $zero, 0x240
    ctx->r14 = ADD32(0, 0X240);
    // 0x08000618: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x0800061C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08000620: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000624: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000628: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800062C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000630: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08000634: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000638: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800063C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000640: jalr        $t9
    // 0x08000644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000648: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(42, 0X8A4) << 16);
    // 0x0800064C: lwc1        $f0, 0x8A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(42, 0X8A4));
    // 0x08000650: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000654: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000658: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800065C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000660: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000664: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000668: jalr        $t9
    // 0x0800066C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800066C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000670: beq         $v0, $zero, L_08000694
    if (ctx->r2 == 0) {
        // 0x08000674: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(42, 0X598) << 16);
            goto L_08000694;
    }
    // 0x08000674: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X598) << 16);
    // 0x08000678: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800067C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000680: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X4AC) << 16);
    // 0x08000684: jalr        $t9
    // 0x08000688: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X4AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000688: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X4AC));
    after_2:
    // 0x0800068C: b           L_080006A8
    // 0x08000690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080006A8;
    // 0x08000690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000694:
    // 0x08000694: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000698: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800069C: jalr        $t9
    // 0x080006A0: addiu       $a0, $a0, 0x598
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X598));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080006A0: addiu       $a0, $a0, 0x598
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X598));
    after_3:
    // 0x080006A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080006A8:
    // 0x080006A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006AC: jr          $ra
    // 0x080006B0: nop

    TRACE_RETURN()
    return;
    // 0x080006B0: nop

;}
RECOMP_FUNC void func_08000598_70DCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800059C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080005A8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080005AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080005B0: jalr        $t9
    // 0x080005B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x080005B8: beq         $v0, $zero, L_080005F0
    if (ctx->r2 == 0) {
        // 0x080005BC: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080005F0;
    }
    // 0x080005BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080005C0: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x080005C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080005C8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080005CC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080005D0: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
    // 0x080005D4: jalr        $t9
    // 0x080005D8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005D8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_1:
    // 0x080005DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(42, 0X530) << 16);
    // 0x080005E8: jalr        $t9
    // 0x080005EC: addiu       $a0, $a0, 0x530
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X530));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080005EC: addiu       $a0, $a0, 0x530
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(42, 0X530));
    after_2:
L_080005F0:
    // 0x080005F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005F8: jr          $ra
    // 0x080005FC: nop

    TRACE_RETURN()
    return;
    // 0x080005FC: nop

;}
RECOMP_FUNC void func_080006B4_70DDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080006BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080006C4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080006C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006CC: jalr        $t9
    // 0x080006D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x080006D4: beq         $v0, $zero, L_080006E8
    if (ctx->r2 == 0) {
        // 0x080006D8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080006E8;
    }
    // 0x080006D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006DC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080006E0: jalr        $t9
    // 0x080006E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006E4: nop

    after_1:
L_080006E8:
    // 0x080006E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080006EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006F0: jr          $ra
    // 0x080006F4: nop

    TRACE_RETURN()
    return;
    // 0x080006F4: nop

;}
RECOMP_FUNC void func_08000530_70DC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800053C: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08000540: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000544: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08000548: beql        $t6, $zero, L_0800058C
    if (ctx->r14 == 0) {
        // 0x0800054C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800058C;
    }
    goto skip_0;
    // 0x0800054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000550: jalr        $t9
    // 0x08000554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000558: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800055C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x08000560: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08000564: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000568: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x0800056C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000570: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08000574: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08000578: lhu         $t8, 0xD8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XD8);
    // 0x0800057C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08000580: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08000584: sb          $t8, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r24;
    // 0x08000588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800058C:
    // 0x0800058C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000590: jr          $ra
    // 0x08000594: nop

    TRACE_RETURN()
    return;
    // 0x08000594: nop

;}
RECOMP_FUNC void func_0800000C_70DFFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800000C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000014: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000018: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x0800001C: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x08000020: ori         $t7, $t6, 0x21
    ctx->r15 = ctx->r14 | 0X21;
    // 0x08000024: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000028: lw          $t8, 0x7740($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7740);
    // 0x0800002C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x08000030: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000034: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08000038: lw          $t9, 0x774C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X774C);
    // 0x0800003C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x08000040: lw          $a1, 0x7748($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7748);
    // 0x08000044: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08000048: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800004C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000050: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000058: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x0800005C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08000060: jalr        $t9
    // 0x08000064: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000064: nop

    after_0:
    // 0x08000068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800006C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000070: jr          $ra
    // 0x08000074: nop

    TRACE_RETURN()
    return;
    // 0x08000074: nop

;}
RECOMP_FUNC void func_08000000_70DFF0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_080007F4_70E8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080007F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080007FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000800: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000804: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000808: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800080C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x08000810: beq         $at, $zero, L_080009C8
    if (ctx->r1 == 0) {
        // 0x08000814: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_080009C8;
    }
    // 0x08000814: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000818: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24AC) << 16);
    // 0x0800081C: addu        $at, $at, $t6
    gpr jr_addend_08000824 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000820: lw          $t6, 0x24AC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X24AC));
    // 0x08000824: jr          $t6
    // 0x08000828: nop

    switch (jr_addend_08000824 >> 2) {
        case 0: goto L_0800082C; break;
        case 1: goto L_08000840; break;
        case 2: goto L_08000874; break;
        case 3: goto L_08000934; break;
        case 4: goto L_08000960; break;
        case 5: goto L_08000988; break;
        default: switch_error(__func__, 0x08000824, 0x080024AC);
    }
    // 0x08000828: nop

L_0800082C:
    // 0x0800082C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000830: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08000834: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000838: b           L_080009C8
    // 0x0800083C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_080009C8;
    // 0x0800083C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000840:
    // 0x08000840: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000844: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000848: jalr        $t9
    // 0x0800084C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800084C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_0:
    // 0x08000850: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000854: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000858: jalr        $t9
    // 0x0800085C: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800085C: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    after_1:
    // 0x08000860: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000864: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08000868: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800086C: b           L_080009C8
    // 0x08000870: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_080009C8;
    // 0x08000870: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000874:
    // 0x08000874: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000878: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800087C: jalr        $t9
    // 0x08000880: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000880: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x08000884: beq         $v0, $zero, L_080009C8
    if (ctx->r2 == 0) {
        // 0x08000888: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080009C8;
    }
    // 0x08000888: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800088C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000890: jalr        $t9
    // 0x08000894: addiu       $a0, $zero, 0x2EF
    ctx->r4 = ADD32(0, 0X2EF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000894: addiu       $a0, $zero, 0x2EF
    ctx->r4 = ADD32(0, 0X2EF);
    after_3:
    // 0x08000898: lui         $t3, 0x1280
    ctx->r11 = S32(0X1280 << 16);
    // 0x0800089C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008A0: addiu       $t2, $zero, 0x31B
    ctx->r10 = ADD32(0, 0X31B);
    // 0x080008A4: ori         $t3, $t3, 0x761
    ctx->r11 = ctx->r11 | 0X761;
    // 0x080008A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080008AC: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x080008B0: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x080008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080008BC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080008C0: jalr        $t9
    // 0x080008C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080008C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080008C8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080008CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080008D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008D4: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x080008D8: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008E0: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
    // 0x080008E4: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x080008E8: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x080008EC: jalr        $t9
    // 0x080008F0: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080008F0: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    after_5:
    // 0x080008F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008F8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000900: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000904: jalr        $t9
    // 0x08000908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x0800090C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000910: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000918: jalr        $t9
    // 0x0800091C: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800091C: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_7:
    // 0x08000920: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000924: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000928: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x0800092C: b           L_080009C8
    // 0x08000930: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_080009C8;
    // 0x08000930: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_08000934:
    // 0x08000934: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000938: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800093C: jalr        $t9
    // 0x08000940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x08000944: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000948: bne         $v0, $at, L_080009C8
    if (ctx->r2 != ctx->r1) {
        // 0x0800094C: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_080009C8;
    }
    // 0x0800094C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000950: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08000954: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000958: b           L_080009C8
    // 0x0800095C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_080009C8;
    // 0x0800095C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000960:
    // 0x08000960: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000964: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000968: jalr        $t9
    // 0x0800096C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800096C: nop

    after_9:
    // 0x08000970: bne         $v0, $zero, L_080009C8
    if (ctx->r2 != 0) {
        // 0x08000974: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_080009C8;
    }
    // 0x08000974: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000978: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0800097C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000980: b           L_080009C8
    // 0x08000984: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_080009C8;
    // 0x08000984: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000988:
    // 0x08000988: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800098C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000990: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000994: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800099C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080009A0: jalr        $t9
    // 0x080009A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080009A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x080009A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009AC: addiu       $t9, $t9, 0x1724
    ctx->r25 = ADD32(ctx->r25, 0X1724);
    // 0x080009B0: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(44, 0X9DC) << 16);
    // 0x080009B4: addiu       $a2, $a2, 0x9DC
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(44, 0X9DC));
    // 0x080009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009BC: jalr        $t9
    // 0x080009C0: addiu       $a1, $zero, 0x2F1
    ctx->r5 = ADD32(0, 0X2F1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080009C0: addiu       $a1, $zero, 0x2F1
    ctx->r5 = ADD32(0, 0X2F1);
    after_11:
    // 0x080009C4: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
L_080009C8:
    // 0x080009C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
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
RECOMP_FUNC void func_08000000_70E0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000008: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x0800000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000018: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800001C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000020: jalr        $v1
    // 0x08000024: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000024: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x08000028: bne         $v0, $zero, L_080000D8
    if (ctx->r2 != 0) {
        // 0x0800002C: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_080000D8;
    }
    // 0x0800002C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000030: jal         0x0800220C
    // 0x08000034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_0800220C_7102BC(rdram, ctx);
        goto after_1;
    // 0x08000034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000038: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x0800003C: addiu       $t0, $t0, 0x71A8
    ctx->r8 = ADD32(ctx->r8, 0X71A8);
    // 0x08000040: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X1680) << 16);
    // 0x08000044: addiu       $a1, $a1, 0x1680
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X1680));
    // 0x08000048: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x0800004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000050: jalr        $t0
    // 0x08000054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_2;
    // 0x08000054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000058: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0800005C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000060: addiu       $a3, $s0, 0xD0
    ctx->r7 = ADD32(ctx->r16, 0XD0);
    // 0x08000064: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x08000068: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x0800006C: lbu         $t6, 0xD8($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000070: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X1868) << 16);
    // 0x08000074: addiu       $a1, $a1, 0x1868
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X1868));
    // 0x08000078: sb          $t6, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r14;
    // 0x0800007C: lbu         $t7, 0xD8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000080: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x08000084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000088: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800008C: sb          $t8, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r24;
    // 0x08000090: jalr        $t0
    // 0x08000094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_3;
    // 0x08000094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000098: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x0800009C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080000A0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080000A4: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x080000A8: lbu         $t9, 0xD8($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XD8);
    // 0x080000AC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x080000B0: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    // 0x080000B4: sb          $t9, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r25;
    // 0x080000B8: lbu         $t1, 0xD8($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XD8);
    // 0x080000BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000C4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080000C8: jalr        $t9
    // 0x080000CC: sb          $t2, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000CC: sb          $t2, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r10;
    after_4:
    // 0x080000D0: b           L_080001AC
    // 0x080000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080001AC;
    // 0x080000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000D8:
    // 0x080000D8: jalr        $v1
    // 0x080000DC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x080000DC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_5:
    // 0x080000E0: beq         $v0, $zero, L_08000100
    if (ctx->r2 == 0) {
        // 0x080000E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000100;
    }
    // 0x080000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000EC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000F4: nop

    after_6:
    // 0x080000F8: b           L_080001AC
    // 0x080000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080001AC;
    // 0x080000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000100:
    // 0x08000100: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x08000104: addiu       $t0, $t0, 0x71A8
    ctx->r8 = ADD32(ctx->r8, 0X71A8);
    // 0x08000108: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X1680) << 16);
    // 0x0800010C: addiu       $a1, $a1, 0x1680
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X1680));
    // 0x08000110: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x08000114: jalr        $t0
    // 0x08000118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_7;
    // 0x08000118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x0800011C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08000120: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000124: addiu       $a3, $s0, 0xD0
    ctx->r7 = ADD32(ctx->r16, 0XD0);
    // 0x08000128: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x0800012C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08000130: lbu         $t3, 0xD8($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000134: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X1868) << 16);
    // 0x08000138: addiu       $a1, $a1, 0x1868
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X1868));
    // 0x0800013C: sb          $t3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r11;
    // 0x08000140: lbu         $t4, 0xD8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000144: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x08000148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800014C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000150: sb          $t5, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r13;
    // 0x08000154: jalr        $t0
    // 0x08000158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_8;
    // 0x08000158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x0800015C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000160: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000164: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08000168: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x0800016C: lbu         $t6, 0xD8($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000170: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(44, 0X1BC) << 16);
    // 0x08000174: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000178: sb          $t6, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r14;
    // 0x0800017C: lbu         $t7, 0xD8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000180: addiu       $t1, $zero, 0x2710
    ctx->r9 = ADD32(0, 0X2710);
    // 0x08000184: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000188: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800018C: sb          $t8, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r24;
    // 0x08000190: addiu       $t2, $t2, 0x1BC
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(44, 0X1BC));
    // 0x08000194: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08000198: sw          $t1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r9;
    // 0x0800019C: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, 0X218C);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001A4: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    after_9:
    // 0x080001A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001AC:
    // 0x080001AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080001B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080001B4: jr          $ra
    // 0x080001B8: nop

    TRACE_RETURN()
    return;
    // 0x080001B8: nop

;}
RECOMP_FUNC void func_08001E60_70FF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001E68: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x08001E6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001E70: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08001E74: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x08001E78: beq         $at, $zero, L_08002008
    if (ctx->r1 == 0) {
        // 0x08001E7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002008;
    }
    // 0x08001E7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08001E80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2578) << 16);
    // 0x08001E84: addu        $at, $at, $t6
    gpr jr_addend_08001E8C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001E88: lw          $t6, 0x2578($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X2578));
    // 0x08001E8C: jr          $t6
    // 0x08001E90: nop

    switch (jr_addend_08001E8C >> 2) {
        case 0: goto L_08001E94; break;
        case 1: goto L_08001EC8; break;
        case 2: goto L_08001F14; break;
        case 3: goto L_08001F68; break;
        case 4: goto L_08001FA4; break;
        case 5: goto L_08002008; break;
        default: switch_error(__func__, 0x08001E8C, 0x08002578);
    }
    // 0x08001E90: nop

L_08001E94:
    // 0x08001E94: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001E98: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001E9C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x08001EA0: jalr        $t9
    // 0x08001EA4: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EA4: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001EA8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08001EAC: addiu       $t7, $zero, 0xD2
    ctx->r15 = ADD32(0, 0XD2);
    // 0x08001EB0: addiu       $v0, $a1, 0xE0
    ctx->r2 = ADD32(ctx->r5, 0XE0);
    // 0x08001EB4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08001EB8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x08001EBC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001EC0: b           L_08002008
    // 0x08001EC4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_08002008;
    // 0x08001EC4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_08001EC8:
    // 0x08001EC8: addiu       $v0, $a1, 0xE0
    ctx->r2 = ADD32(ctx->r5, 0XE0);
    // 0x08001ECC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001ED0: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x08001ED4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001ED8: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x08001EDC: bne         $v1, $zero, L_08002008
    if (ctx->r3 != 0) {
        // 0x08001EE0: sw          $t1, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r9;
            goto L_08002008;
    }
    // 0x08001EE0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x08001EE4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001EE8: jalr        $t9
    // 0x08001EEC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001EEC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x08001EF0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001EF4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001EF8: jalr        $t9
    // 0x08001EFC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001EFC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x08001F00: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F04: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08001F08: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001F0C: b           L_08002008
    // 0x08001F10: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08002008;
    // 0x08001F10: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08001F14:
    // 0x08001F14: lbu         $v0, 0x27($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X27);
    // 0x08001F18: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x08001F1C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x08001F20: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x08001F24: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08001F28: bne         $at, $zero, L_08001F60
    if (ctx->r1 != 0) {
        // 0x08001F2C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001F60;
    }
    // 0x08001F2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F30: sb          $t4, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r12;
    // 0x08001F34: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001F38: jalr        $t9
    // 0x08001F3C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001F3C: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_3:
    // 0x08001F40: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08001F44: addiu       $t5, $zero, 0x41A
    ctx->r13 = ADD32(0, 0X41A);
    // 0x08001F48: addiu       $v0, $a1, 0xE0
    ctx->r2 = ADD32(ctx->r5, 0XE0);
    // 0x08001F4C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08001F50: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x08001F54: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001F58: b           L_08002008
    // 0x08001F5C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_08002008;
    // 0x08001F5C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_08001F60:
    // 0x08001F60: b           L_08002008
    // 0x08001F64: sb          $v0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r2;
        goto L_08002008;
    // 0x08001F64: sb          $v0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r2;
L_08001F68:
    // 0x08001F68: addiu       $v0, $a1, 0xE0
    ctx->r2 = ADD32(ctx->r5, 0XE0);
    // 0x08001F6C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001F70: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x08001F74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F78: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x08001F7C: bne         $v1, $zero, L_08002008
    if (ctx->r3 != 0) {
        // 0x08001F80: sw          $t8, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r24;
            goto L_08002008;
    }
    // 0x08001F80: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x08001F84: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001F88: jalr        $t9
    // 0x08001F8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001F8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_4:
    // 0x08001F90: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F94: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08001F98: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001F9C: b           L_08002008
    // 0x08001FA0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08002008;
    // 0x08001FA0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08001FA4:
    // 0x08001FA4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001FA8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001FAC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x08001FB0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08001FB4: jalr        $t9
    // 0x08001FB8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001FB8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_5:
    // 0x08001FBC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08001FC0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001FC4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08001FC8: lbu         $v0, 0x27($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X27);
    // 0x08001FCC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001FD0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x08001FD4: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x08001FD8: bgezl       $v0, L_08002008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001FDC: sb          $v0, 0x27($v1)
        MEM_B(0X27, ctx->r3) = ctx->r2;
            goto L_08002008;
    }
    goto skip_0;
    // 0x08001FDC: sb          $v0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r2;
    skip_0:
    // 0x08001FE0: sb          $zero, 0x27($v1)
    MEM_B(0X27, ctx->r3) = 0;
    // 0x08001FE4: jalr        $t9
    // 0x08001FE8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001FE8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_6:
    // 0x08001FEC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001FF0: addiu       $t9, $t9, 0x4888
    ctx->r25 = ADD32(ctx->r25, 0X4888);
    // 0x08001FF4: jalr        $t9
    // 0x08001FF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001FF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x08001FFC: b           L_0800200C
    // 0x08002000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800200C;
    // 0x08002000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002004: sb          $v0, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r2;
L_08002008:
    // 0x08002008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800200C:
    // 0x0800200C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002010: jr          $ra
    // 0x08002014: nop

    TRACE_RETURN()
    return;
    // 0x08002014: nop

;}
RECOMP_FUNC void func_08002018_7100C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800201C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002020: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002024: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08002028: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x0800202C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x08002030: beq         $at, $zero, L_080021F0
    if (ctx->r1 == 0) {
        // 0x08002034: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_080021F0;
    }
    // 0x08002034: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08002038: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2590) << 16);
    // 0x0800203C: addu        $at, $at, $t6
    gpr jr_addend_08002044 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08002040: lw          $t6, 0x2590($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X2590));
    // 0x08002044: jr          $t6
    // 0x08002048: nop

    switch (jr_addend_08002044 >> 2) {
        case 0: goto L_0800204C; break;
        case 1: goto L_08002100; break;
        case 2: goto L_0800214C; break;
        case 3: goto L_08002184; break;
        case 4: goto L_080021A8; break;
        default: switch_error(__func__, 0x08002044, 0x08002590);
    }
    // 0x08002048: nop

L_0800204C:
    // 0x0800204C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002050: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x08002054: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08002058: jalr        $t9
    // 0x0800205C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800205C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x08002060: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08002064: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x08002068: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x0800206C: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x08002070: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08002074: addu        $t1, $t8, $a2
    ctx->r9 = ADD32(ctx->r24, ctx->r6);
    // 0x08002078: lw          $t2, 0x3018($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3018);
    // 0x0800207C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08002080: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x08002084: sb          $t7, 0xD($t2)
    MEM_B(0XD, ctx->r10) = ctx->r15;
    // 0x08002088: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x0800208C: addiu       $v0, $a3, 0xD0
    ctx->r2 = ADD32(ctx->r7, 0XD0);
    // 0x08002090: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x08002094: lw          $t5, 0x3018($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3018);
    // 0x08002098: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800209C: sb          $zero, 0xF($t5)
    MEM_B(0XF, ctx->r13) = 0;
    // 0x080020A0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x080020A4: addu        $t9, $t6, $a2
    ctx->r25 = ADD32(ctx->r14, ctx->r6);
    // 0x080020A8: lw          $v1, 0x3018($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X3018);
    // 0x080020AC: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x080020B0: lbu         $t8, 0xF($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XF);
    // 0x080020B4: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
    // 0x080020B8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x080020BC: addu        $t7, $t1, $a2
    ctx->r15 = ADD32(ctx->r9, ctx->r6);
    // 0x080020C0: lw          $t2, 0x3018($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X3018);
    // 0x080020C4: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
    // 0x080020C8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x080020CC: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x080020D0: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x080020D4: lw          $t6, 0x3018($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X3018);
    // 0x080020D8: sb          $t3, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r11;
    // 0x080020DC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x080020E0: addu        $t1, $t8, $a2
    ctx->r9 = ADD32(ctx->r24, ctx->r6);
    // 0x080020E4: lw          $t7, 0x3018($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X3018);
    // 0x080020E8: sh          $t9, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r25;
    // 0x080020EC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x080020F0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x080020F4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080020F8: b           L_080021F0
    // 0x080020FC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_080021F0;
    // 0x080020FC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_08002100:
    // 0x08002100: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08002104: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x08002108: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x0800210C: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x08002110: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x08002114: addu        $t6, $t3, $a2
    ctx->r14 = ADD32(ctx->r11, ctx->r6);
    // 0x08002118: lw          $v1, 0x3018($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X3018);
    // 0x0800211C: addiu       $v0, $a3, 0xD0
    ctx->r2 = ADD32(ctx->r7, 0XD0);
    // 0x08002120: lbu         $t8, 0x10($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X10);
    // 0x08002124: addiu       $t1, $t8, 0x2
    ctx->r9 = ADD32(ctx->r24, 0X2);
    // 0x08002128: sb          $t1, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r9;
    // 0x0800212C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08002130: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x08002134: bne         $a0, $zero, L_080021F0
    if (ctx->r4 != 0) {
        // 0x08002138: sw          $t9, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r25;
            goto L_080021F0;
    }
    // 0x08002138: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x0800213C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08002140: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x08002144: b           L_080021F0
    // 0x08002148: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
        goto L_080021F0;
    // 0x08002148: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_0800214C:
    // 0x0800214C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002150: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08002154: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x08002158: jalr        $t9
    // 0x0800215C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800215C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x08002160: beq         $v0, $zero, L_080021F0
    if (ctx->r2 == 0) {
        // 0x08002164: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_080021F0;
    }
    // 0x08002164: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08002168: addiu       $v0, $a3, 0xD0
    ctx->r2 = ADD32(ctx->r7, 0XD0);
    // 0x0800216C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08002170: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08002174: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08002178: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x0800217C: b           L_080021F0
    // 0x08002180: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_080021F0;
    // 0x08002180: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08002184:
    // 0x08002184: addiu       $v0, $a3, 0xD0
    ctx->r2 = ADD32(ctx->r7, 0XD0);
    // 0x08002188: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x0800218C: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x08002190: bne         $a0, $zero, L_080021F0
    if (ctx->r4 != 0) {
        // 0x08002194: sw          $t6, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r14;
            goto L_080021F0;
    }
    // 0x08002194: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x08002198: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x0800219C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x080021A0: b           L_080021F0
    // 0x080021A4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_080021F0;
    // 0x080021A4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_080021A8:
    // 0x080021A8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x080021AC: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x080021B0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x080021B4: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x080021B8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080021BC: addu        $t2, $t7, $a2
    ctx->r10 = ADD32(ctx->r15, ctx->r6);
    // 0x080021C0: lw          $v1, 0x3018($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X3018);
    // 0x080021C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021C8: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080021CC: lbu         $v0, 0x10($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X10);
    // 0x080021D0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x080021D4: bgtzl       $v0, L_080021F0
    if (SIGNED(ctx->r2) > 0) {
        // 0x080021D8: sb          $v0, 0x10($v1)
        MEM_B(0X10, ctx->r3) = ctx->r2;
            goto L_080021F0;
    }
    goto skip_0;
    // 0x080021D8: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
    skip_0:
    // 0x080021DC: jalr        $t9
    // 0x080021E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080021E0: nop

    after_2:
    // 0x080021E4: b           L_080021F4
    // 0x080021E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080021F4;
    // 0x080021E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080021EC: sb          $v0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r2;
L_080021F0:
    // 0x080021F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080021F4:
    // 0x080021F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080021F8: jr          $ra
    // 0x080021FC: nop

    TRACE_RETURN()
    return;
    // 0x080021FC: nop

;}
RECOMP_FUNC void func_08001868_70F918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001868: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0800186C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001870: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001874: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08001878: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800187C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001880: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x08001884: beq         $at, $zero, L_08001B7C
    if (ctx->r1 == 0) {
        // 0x08001888: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08001B7C;
    }
    // 0x08001888: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x0800188C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2540) << 16);
    // 0x08001890: addu        $at, $at, $t6
    gpr jr_addend_08001898 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001894: lw          $t6, 0x2540($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X2540));
    // 0x08001898: jr          $t6
    // 0x0800189C: nop

    switch (jr_addend_08001898 >> 2) {
        case 0: goto L_080018A0; break;
        case 1: goto L_08001914; break;
        case 2: goto L_08001958; break;
        case 3: goto L_080019A4; break;
        case 4: goto L_080019E8; break;
        case 5: goto L_08001A4C; break;
        case 6: goto L_08001AD4; break;
        case 7: goto L_08001AE8; break;
        case 8: goto L_08001B6C; break;
        default: switch_error(__func__, 0x08001898, 0x08002540);
    }
    // 0x0800189C: nop

L_080018A0:
    // 0x080018A0: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x080018A4: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x080018A8: addiu       $t8, $zero, 0x24E
    ctx->r24 = ADD32(0, 0X24E);
    // 0x080018AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080018B0: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080018B4: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x080018B8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080018BC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x080018C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080018C4: jalr        $t9
    // 0x080018C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x080018CC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x080018D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080018D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080018D8: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x080018DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080018E0: lui         $at, 0x4319
    ctx->r1 = S32(0X4319 << 16);
    // 0x080018E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080018E8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080018EC: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x080018F0: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x080018F4: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x080018F8: swc1        $f2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f2.u32l;
    // 0x080018FC: swc1        $f2, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f2.u32l;
    // 0x08001900: swc1        $f4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f4.u32l;
    // 0x08001904: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08001908: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800190C: b           L_08001B7C
    // 0x08001910: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08001B7C;
    // 0x08001910: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08001914:
    // 0x08001914: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08001918: addiu       $v1, $v1, 0x3E94
    ctx->r3 = ADD32(ctx->r3, 0X3E94);
    // 0x0800191C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001920: jalr        $v1
    // 0x08001924: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08001924: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x08001928: beq         $v0, $zero, L_08001B7C
    if (ctx->r2 == 0) {
        // 0x0800192C: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08001B7C;
    }
    // 0x0800192C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001930: jalr        $v1
    // 0x08001934: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08001934: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x08001938: beq         $v0, $zero, L_08001B7C
    if (ctx->r2 == 0) {
        // 0x0800193C: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_08001B7C;
    }
    // 0x0800193C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08001940: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08001944: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x08001948: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x0800194C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001950: b           L_08001B7C
    // 0x08001954: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08001B7C;
    // 0x08001954: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_08001958:
    // 0x08001958: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800195C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001960: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X1BD0) << 16);
    // 0x08001964: addiu       $a1, $a1, 0x1BD0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X1BD0));
    // 0x08001968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800196C: jalr        $t9
    // 0x08001970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08001974: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001978: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x0800197C: lbu         $t5, 0xD8($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XD8);
    // 0x08001980: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08001984: sb          $t5, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r13;
    // 0x08001988: lbu         $t6, 0xD8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD8);
    // 0x0800198C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001990: sb          $t7, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r15;
    // 0x08001994: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08001998: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800199C: b           L_08001B7C
    // 0x080019A0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_08001B7C;
    // 0x080019A0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_080019A4:
    // 0x080019A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080019A8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080019AC: jalr        $t9
    // 0x080019B0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080019B0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_4:
    // 0x080019B4: beq         $v0, $zero, L_08001B7C
    if (ctx->r2 == 0) {
        // 0x080019B8: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001B7C;
    }
    // 0x080019B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080019BC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080019C0: jalr        $t9
    // 0x080019C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080019C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_5:
    // 0x080019C8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080019CC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x080019D0: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x080019D4: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x080019D8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080019DC: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x080019E0: b           L_08001B7C
    // 0x080019E4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_08001B7C;
    // 0x080019E4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_080019E8:
    // 0x080019E8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080019EC: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x080019F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080019F4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x080019F8: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
    // 0x080019FC: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x08001A00: jal         0x08001B90
    // 0x08001A04: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_08001B90_70FC40(rdram, ctx);
        goto after_6;
    // 0x08001A04: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x08001A08: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001A0C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A10: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001A14: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08001A18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08001A1C: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08001A20: bne         $v0, $zero, L_08001B7C
    if (ctx->r2 != 0) {
        // 0x08001A24: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_08001B7C;
    }
    // 0x08001A24: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08001A28: jalr        $t9
    // 0x08001A2C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001A2C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x08001A30: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001A34: addiu       $t6, $zero, 0x10E
    ctx->r14 = ADD32(0, 0X10E);
    // 0x08001A38: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08001A3C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x08001A40: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08001A44: b           L_08001B7C
    // 0x08001A48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_08001B7C;
    // 0x08001A48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08001A4C:
    // 0x08001A4C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08001A50: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08001A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A58: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001A5C: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x08001A60: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x08001A64: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x08001A68: jal         0x08001B90
    // 0x08001A6C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_08001B90_70FC40(rdram, ctx);
        goto after_8;
    // 0x08001A6C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_8:
    // 0x08001A70: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x08001A74: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2568) << 16);
    // 0x08001A78: ldc1        $f10, 0x2568($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(44, 0X2568));
    // 0x08001A7C: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08001A80: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001A84: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A88: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001A8C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001A90: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08001A94: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x08001A98: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001A9C: swc1        $f18, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f18.u32l;
    // 0x08001AA0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08001AA4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08001AA8: bne         $v0, $zero, L_08001B7C
    if (ctx->r2 != 0) {
        // 0x08001AAC: sw          $t1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r9;
            goto L_08001B7C;
    }
    // 0x08001AAC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x08001AB0: jalr        $t9
    // 0x08001AB4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001AB4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_9:
    // 0x08001AB8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001ABC: addiu       $t2, $zero, 0x384
    ctx->r10 = ADD32(0, 0X384);
    // 0x08001AC0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08001AC4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08001AC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001ACC: b           L_08001B7C
    // 0x08001AD0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_08001B7C;
    // 0x08001AD0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_08001AD4:
    // 0x08001AD4: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08001AD8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08001ADC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08001AE0: b           L_08001B7C
    // 0x08001AE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_08001B7C;
    // 0x08001AE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_08001AE8:
    // 0x08001AE8: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08001AEC: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08001AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AF4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001AF8: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x08001AFC: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x08001B00: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x08001B04: jal         0x08001B90
    // 0x08001B08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_08001B90_70FC40(rdram, ctx);
        goto after_10;
    // 0x08001B08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_10:
    // 0x08001B0C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x08001B10: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08001B14: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001B18: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08001B1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001B20: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001B24: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001B28: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001B2C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08001B30: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001B34: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x08001B38: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001B3C: swc1        $f16, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f16.u32l;
    // 0x08001B40: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08001B44: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08001B48: bne         $v0, $zero, L_08001B7C
    if (ctx->r2 != 0) {
        // 0x08001B4C: sw          $t8, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r24;
            goto L_08001B7C;
    }
    // 0x08001B4C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08001B50: jalr        $t9
    // 0x08001B54: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001B54: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_11:
    // 0x08001B58: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001B5C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08001B60: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001B64: b           L_08001B7C
    // 0x08001B68: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_08001B7C;
    // 0x08001B68: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08001B6C:
    // 0x08001B6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B70: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001B74: jalr        $t9
    // 0x08001B78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001B78: nop

    after_12:
L_08001B7C:
    // 0x08001B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001B84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08001B88: jr          $ra
    // 0x08001B8C: nop

    TRACE_RETURN()
    return;
    // 0x08001B8C: nop

;}
RECOMP_FUNC void func_080001BC_70E26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080001C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080001C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080001C8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080001CC: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x080001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080001D4: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x080001D8: beq         $at, $zero, L_08000368
    if (ctx->r1 == 0) {
        // 0x080001DC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000368;
    }
    // 0x080001DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080001E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2454) << 16);
    // 0x080001E4: addu        $at, $at, $t6
    gpr jr_addend_080001EC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080001E8: lw          $t6, 0x2454($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X2454));
    // 0x080001EC: jr          $t6
    // 0x080001F0: nop

    switch (jr_addend_080001EC >> 2) {
        case 0: goto L_080001F4; break;
        case 1: goto L_08000268; break;
        case 2: goto L_080002B8; break;
        case 3: goto L_080002F8; break;
        case 4: goto L_08000320; break;
        case 5: goto L_08000334; break;
        default: switch_error(__func__, 0x080001EC, 0x08002454);
    }
    // 0x080001F0: nop

L_080001F4:
    // 0x080001F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080001F8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080001FC: jalr        $t9
    // 0x08000200: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000200: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x08000204: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000208: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x0800020C: jalr        $t9
    // 0x08000210: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000210: nop

    after_1:
    // 0x08000214: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x08000218: addiu       $v1, $v1, 0x4DD8
    ctx->r3 = ADD32(ctx->r3, 0X4DD8);
    // 0x0800021C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(44, 0X37C) << 16);
    // 0x08000220: addiu       $a0, $a0, 0x37C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(44, 0X37C));
    // 0x08000224: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08000228: jalr        $v1
    // 0x0800022C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x0800022C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08000230: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000234: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(44, 0XBC8) << 16);
    // 0x08000238: addiu       $a0, $a0, 0xBC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(44, 0XBC8));
    // 0x0800023C: jalr        $v1
    // 0x08000240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08000244: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000248: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x0800024C: sw          $v1, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->r3;
    // 0x08000250: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000254: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x08000258: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x0800025C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000260: b           L_08000368
    // 0x08000264: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_08000368;
    // 0x08000264: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_08000268:
    // 0x08000268: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x0800026C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000274: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X7F4) << 16);
    // 0x08000278: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x0800027C: bne         $v0, $zero, L_08000368
    if (ctx->r2 != 0) {
        // 0x08000280: sw          $t1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r9;
            goto L_08000368;
    }
    // 0x08000280: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x08000284: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800028C: addiu       $a1, $a1, 0x7F4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X7F4));
    // 0x08000290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000294: jalr        $t9
    // 0x08000298: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000298: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x0800029C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080002A0: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x080002A4: sw          $v1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r3;
    // 0x080002A8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x080002AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080002B0: b           L_08000368
    // 0x080002B4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_08000368;
    // 0x080002B4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_080002B8:
    // 0x080002B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002BC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080002C0: jalr        $t9
    // 0x080002C4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002C4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_5:
    // 0x080002C8: beq         $v0, $zero, L_08000368
    if (ctx->r2 == 0) {
        // 0x080002CC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(44, 0X2018) << 16);
            goto L_08000368;
    }
    // 0x080002CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(44, 0X2018) << 16);
    // 0x080002D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002D4: addiu       $t9, $t9, 0x4DD8
    ctx->r25 = ADD32(ctx->r25, 0X4DD8);
    // 0x080002D8: addiu       $a0, $a0, 0x2018
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(44, 0X2018));
    // 0x080002DC: jalr        $t9
    // 0x080002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x080002E4: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x080002E8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x080002EC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080002F0: b           L_08000368
    // 0x080002F4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_08000368;
    // 0x080002F4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_080002F8:
    // 0x080002F8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002FC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000300: jalr        $t9
    // 0x08000304: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000304: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
    // 0x08000308: beq         $v0, $zero, L_08000368
    if (ctx->r2 == 0) {
        // 0x0800030C: addiu       $v1, $s0, 0xD0
        ctx->r3 = ADD32(ctx->r16, 0XD0);
            goto L_08000368;
    }
    // 0x0800030C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000310: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08000314: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000318: b           L_08000368
    // 0x0800031C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_08000368;
    // 0x0800031C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_08000320:
    // 0x08000320: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000324: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000328: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800032C: b           L_08000368
    // 0x08000330: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_08000368;
    // 0x08000330: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_08000334:
    // 0x08000334: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000338: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800033C: jalr        $t9
    // 0x08000340: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000340: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_8:
    // 0x08000344: beq         $v0, $zero, L_08000368
    if (ctx->r2 == 0) {
        // 0x08000348: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000368;
    }
    // 0x08000348: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800034C: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000350: jalr        $t9
    // 0x08000354: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000354: nop

    after_9:
    // 0x08000358: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800035C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000360: jalr        $t9
    // 0x08000364: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000364: nop

    after_10:
L_08000368:
    // 0x08000368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800036C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000374: jr          $ra
    // 0x08000378: nop

    TRACE_RETURN()
    return;
    // 0x08000378: nop

;}
RECOMP_FUNC void func_0800037C_70E42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800037C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000384: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000388: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x0800038C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000390: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x08000394: beq         $at, $zero, L_080007E4
    if (ctx->r1 == 0) {
        // 0x08000398: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_080007E4;
    }
    // 0x08000398: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x0800039C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X246C) << 16);
    // 0x080003A0: addu        $at, $at, $t6
    gpr jr_addend_080003A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080003A4: lw          $t6, 0x246C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X246C));
    // 0x080003A8: jr          $t6
    // 0x080003AC: nop

    switch (jr_addend_080003A8 >> 2) {
        case 0: goto L_080003B0; break;
        case 1: goto L_08000408; break;
        case 2: goto L_08000444; break;
        case 3: goto L_0800047C; break;
        case 4: goto L_080004CC; break;
        case 5: goto L_08000504; break;
        case 6: goto L_0800054C; break;
        case 7: goto L_08000588; break;
        case 8: goto L_080005CC; break;
        case 9: goto L_08000620; break;
        case 10: goto L_08000648; break;
        case 11: goto L_0800068C; break;
        case 12: goto L_080006C8; break;
        case 13: goto L_0800070C; break;
        case 14: goto L_08000744; break;
        case 15: goto L_08000780; break;
        default: switch_error(__func__, 0x080003A8, 0x0800246C);
    }
    // 0x080003AC: nop

L_080003B0:
    // 0x080003B0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080003B4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x080003B8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080003BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080003C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x080003C4: sb          $t7, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r15;
    // 0x080003C8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080003CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003D0: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x080003D4: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x080003D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080003DC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080003E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080003E4: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x080003E8: jalr        $t9
    // 0x080003EC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003EC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_0:
    // 0x080003F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080003F4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x080003F8: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x080003FC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000400: b           L_080007E4
    // 0x08000404: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_080007E4;
    // 0x08000404: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_08000408:
    // 0x08000408: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x0800040C: lbu         $t2, 0x8($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X8);
    // 0x08000410: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000414: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000418: beq         $t2, $zero, L_080007E4
    if (ctx->r10 == 0) {
        // 0x0800041C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_080007E4;
    }
    // 0x0800041C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08000420: jalr        $t9
    // 0x08000424: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000424: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x08000428: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800042C: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x08000430: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000434: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x08000438: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800043C: b           L_080007E4
    // 0x08000440: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_080007E4;
    // 0x08000440: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_08000444:
    // 0x08000444: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000448: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0800044C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000450: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000454: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000458: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x0800045C: sw          $t6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r14;
            goto L_080007E4;
    }
    // 0x0800045C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x08000460: sb          $t7, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = ctx->r15;
    // 0x08000464: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08000468: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x0800046C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08000470: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000474: b           L_080007E4
    // 0x08000478: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_080007E4;
    // 0x08000478: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_0800047C:
    // 0x0800047C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08000480: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x08000484: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000488: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x0800048C: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    // 0x08000490: addiu       $t9, $t2, 0x18
    ctx->r25 = ADD32(ctx->r10, 0X18);
    // 0x08000494: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08000498: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0800049C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004A0: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080004A4: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x080004A8: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x080004AC: sw          $t3, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r11;
            goto L_080007E4;
    }
    // 0x080004AC: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x080004B0: jalr        $t9
    // 0x080004B4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004B4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x080004B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080004BC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x080004C0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080004C4: b           L_080007E4
    // 0x080004C8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_080007E4;
    // 0x080004C8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_080004CC:
    // 0x080004CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004D0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080004D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x080004D8: jalr        $t9
    // 0x080004DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_3:
    // 0x080004E0: beq         $v0, $zero, L_080007E4
    if (ctx->r2 == 0) {
        // 0x080004E4: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_080007E4;
    }
    // 0x080004E4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080004E8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080004EC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x080004F0: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x080004F4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x080004F8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080004FC: b           L_080007E4
    // 0x08000500: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_080007E4;
    // 0x08000500: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_08000504:
    // 0x08000504: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08000508: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x0800050C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000510: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000514: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x08000518: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x0800051C: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x08000520: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000524: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08000528: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x0800052C: sw          $t2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r10;
            goto L_080007E4;
    }
    // 0x0800052C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x08000530: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    // 0x08000534: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000538: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x0800053C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x08000540: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000544: b           L_080007E4
    // 0x08000548: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_080007E4;
    // 0x08000548: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_0800054C:
    // 0x0800054C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000550: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000554: addiu       $a0, $zero, 0x2F2
    ctx->r4 = ADD32(0, 0X2F2);
    // 0x08000558: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x0800055C: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x08000560: sw          $t9, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r25;
            goto L_080007E4;
    }
    // 0x08000560: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x08000564: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000568: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800056C: jalr        $t9
    // 0x08000570: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000570: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x08000574: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000578: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x0800057C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000580: b           L_080007E4
    // 0x08000584: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_080007E4;
    // 0x08000584: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_08000588:
    // 0x08000588: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800058C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000590: jalr        $t9
    // 0x08000594: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000594: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_5:
    // 0x08000598: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x0800059C: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_080007E4;
    }
    // 0x0800059C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080005A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005A4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080005A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x080005AC: jalr        $t9
    // 0x080005B0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080005B0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x080005B4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080005B8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080005BC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x080005C0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080005C4: b           L_080007E4
    // 0x080005C8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_080007E4;
    // 0x080005C8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_080005CC:
    // 0x080005CC: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080005D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005D4: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x080005D8: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x080005DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080005E0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080005E4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080005E8: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x080005EC: jalr        $t9
    // 0x080005F0: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080005F0: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_7:
    // 0x080005F4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080005F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080005FC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000600: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x08000604: jalr        $t9
    // 0x08000608: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000608: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    after_8:
    // 0x0800060C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000610: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x08000614: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000618: b           L_080007E4
    // 0x0800061C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_080007E4;
    // 0x0800061C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_08000620:
    // 0x08000620: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000624: lbu         $t3, 0x8($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X8);
    // 0x08000628: beql        $t3, $zero, L_080007E8
    if (ctx->r11 == 0) {
        // 0x0800062C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080007E8;
    }
    goto skip_0;
    // 0x0800062C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000630: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000634: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x08000638: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x0800063C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000640: b           L_080007E4
    // 0x08000644: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_080007E4;
    // 0x08000644: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_08000648:
    // 0x08000648: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x0800064C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000650: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000654: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000658: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x0800065C: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x08000660: sw          $t7, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r15;
            goto L_080007E4;
    }
    // 0x08000660: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x08000664: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000668: jalr        $t9
    // 0x0800066C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800066C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_9:
    // 0x08000670: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000674: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08000678: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x0800067C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x08000680: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000684: b           L_080007E4
    // 0x08000688: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_080007E4;
    // 0x08000688: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_0800068C:
    // 0x0800068C: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000690: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x08000694: addiu       $a0, $zero, 0x2F3
    ctx->r4 = ADD32(0, 0X2F3);
    // 0x08000698: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800069C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x080006A0: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x080006A4: sw          $t2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r10;
            goto L_080007E4;
    }
    // 0x080006A4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x080006A8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080006AC: jalr        $t9
    // 0x080006B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080006B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_10:
    // 0x080006B4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080006B8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x080006BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080006C0: b           L_080007E4
    // 0x080006C4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_080007E4;
    // 0x080006C4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_080006C8:
    // 0x080006C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006CC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080006D0: jalr        $t9
    // 0x080006D4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080006D4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_11:
    // 0x080006D8: beq         $v0, $zero, L_080007E4
    if (ctx->r2 == 0) {
        // 0x080006DC: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_080007E4;
    }
    // 0x080006DC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080006E0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080006E4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080006E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x080006EC: jalr        $t9
    // 0x080006F0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080006F0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_12:
    // 0x080006F4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x080006F8: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080006FC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08000700: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000704: b           L_080007E4
    // 0x08000708: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_080007E4;
    // 0x08000708: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_0800070C:
    // 0x0800070C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000710: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000714: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x08000718: jalr        $t9
    // 0x0800071C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800071C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_13:
    // 0x08000720: beq         $v0, $zero, L_080007E4
    if (ctx->r2 == 0) {
        // 0x08000724: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_080007E4;
    }
    // 0x08000724: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x08000728: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x0800072C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08000730: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08000734: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x08000738: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800073C: b           L_080007E4
    // 0x08000740: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_080007E4;
    // 0x08000740: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_08000744:
    // 0x08000744: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x08000748: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x0800074C: addiu       $a0, $zero, 0x2F4
    ctx->r4 = ADD32(0, 0X2F4);
    // 0x08000750: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000754: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x08000758: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x0800075C: sw          $t1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r9;
            goto L_080007E4;
    }
    // 0x0800075C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x08000760: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000764: jalr        $t9
    // 0x08000768: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000768: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_14:
    // 0x0800076C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08000770: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08000774: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000778: b           L_080007E4
    // 0x0800077C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_080007E4;
    // 0x0800077C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_08000780:
    // 0x08000780: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000784: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000788: jalr        $t9
    // 0x0800078C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800078C: nop

    after_15:
    // 0x08000790: bne         $v0, $zero, L_080007E4
    if (ctx->r2 != 0) {
        // 0x08000794: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080007E4;
    }
    // 0x08000794: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000798: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x0800079C: jalr        $t9
    // 0x080007A0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080007A0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_16:
    // 0x080007A4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080007A8: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x080007AC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080007B0: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x080007B4: lhu         $t5, 0x16($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X16);
    // 0x080007B8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080007BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080007C0: sh          $t5, 0x94($t6)
    MEM_H(0X94, ctx->r14) = ctx->r13;
    // 0x080007C4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x080007C8: sb          $zero, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = 0;
    // 0x080007CC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080007D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007D4: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x080007D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080007DC: jalr        $t9
    // 0x080007E0: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080007E0: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    after_17:
L_080007E4:
    // 0x080007E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080007E8:
    // 0x080007E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080007EC: jr          $ra
    // 0x080007F0: nop

    TRACE_RETURN()
    return;
    // 0x080007F0: nop

;}
RECOMP_FUNC void func_08001BD0_70FC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BD4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BE0: addiu       $t9, $t9, 0x4670
    ctx->r25 = ADD32(ctx->r25, 0X4670);
    // 0x08001BE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001BE8: jalr        $t9
    // 0x08001BEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001BF0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08001BF4: bne         $v0, $zero, L_08001C14
    if (ctx->r2 != 0) {
        // 0x08001BF8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08001C14;
    }
    // 0x08001BF8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08001BFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C00: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001C04: jalr        $t9
    // 0x08001C08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C08: nop

    after_1:
    // 0x08001C0C: b           L_08001CD8
    // 0x08001C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001CD8;
    // 0x08001C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001C14:
    // 0x08001C14: sw          $v0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->r2;
    // 0x08001C18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001C1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x08001C20: ori         $a3, $zero, 0xC350
    ctx->r7 = 0 | 0XC350;
    // 0x08001C24: addiu       $t6, $zero, 0x2D41
    ctx->r14 = ADD32(0, 0X2D41);
    // 0x08001C28: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x08001C2C: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x08001C30: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x08001C34: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x08001C38: sw          $a3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r7;
    // 0x08001C3C: sw          $a3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r7;
    // 0x08001C40: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x08001C44: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x08001C48: sb          $t7, 0x25($v0)
    MEM_B(0X25, ctx->r2) = ctx->r15;
    // 0x08001C4C: sb          $zero, 0x26($v0)
    MEM_B(0X26, ctx->r2) = 0;
    // 0x08001C50: sb          $zero, 0x27($v0)
    MEM_B(0X27, ctx->r2) = 0;
    // 0x08001C54: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
    // 0x08001C58: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x08001C5C: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x08001C60: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2570) << 16);
    // 0x08001C64: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x08001C68: lwc1        $f6, 0x2570($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X2570));
    // 0x08001C6C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x08001C70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001C74: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x08001C78: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x08001C7C: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x08001C80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001C84: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x08001C88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001C8C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x08001C90: lui         $t1, 0x800
    ctx->r9 = S32(RELOC_HI16(44, 0X1CE4) << 16);
    // 0x08001C94: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(44, 0X1E60) << 16);
    // 0x08001C98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C9C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x08001CA0: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x08001CA4: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x08001CA8: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x08001CAC: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x08001CB0: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    // 0x08001CB4: addiu       $t1, $t1, 0x1CE4
    ctx->r9 = ADD32(ctx->r9, (int16_t)RELOC_LO16(44, 0X1CE4));
    // 0x08001CB8: addiu       $t2, $t2, 0x1E60
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(44, 0X1E60));
    // 0x08001CBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CC0: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08001CC4: sw          $t1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r9;
    // 0x08001CC8: sw          $t2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r10;
    // 0x08001CCC: jalr        $t9
    // 0x08001CD0: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CD0: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    after_2:
    // 0x08001CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001CD8:
    // 0x08001CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001CDC: jr          $ra
    // 0x08001CE0: nop

    TRACE_RETURN()
    return;
    // 0x08001CE0: nop

;}
RECOMP_FUNC void func_08002200_7102B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002200: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002204: jr          $ra
    // 0x08002208: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002208: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001CE4_70FD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001CEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001CF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001CF4: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08001CF8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2574) << 16);
    // 0x08001CFC: lwc1        $f0, 0x2574($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X2574));
    // 0x08001D00: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001D04: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x08001D08: lw          $t6, 0x58($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X58);
    // 0x08001D0C: addiu       $t2, $v1, 0x2
    ctx->r10 = ADD32(ctx->r3, 0X2);
    // 0x08001D10: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001D14: bgez        $v1, L_08001D24
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001D18: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08001D24;
    }
    // 0x08001D18: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08001D1C: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08001D20: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08001D24:
    // 0x08001D24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x08001D28: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x08001D2C: bgez        $t0, L_08001D3C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08001D30: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_08001D3C;
    }
    // 0x08001D30: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x08001D34: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x08001D38: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_08001D3C:
    // 0x08001D3C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D40: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x08001D44: addiu       $a0, $a0, 0x5B38
    ctx->r4 = ADD32(ctx->r4, 0X5B38);
    // 0x08001D48: mflo        $t3
    ctx->r11 = lo;
    // 0x08001D4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x08001D50: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x08001D54: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x08001D58: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001D5C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x08001D60: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x08001D64: bgez        $v1, L_08001D74
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001D68: sra         $t6, $v1, 1
        ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08001D74;
    }
    // 0x08001D68: sra         $t6, $v1, 1
    ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08001D6C: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08001D70: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08001D74:
    // 0x08001D74: addiu       $t9, $v1, 0x2
    ctx->r25 = ADD32(ctx->r3, 0X2);
    // 0x08001D78: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x08001D7C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x08001D80: bgez        $t1, L_08001D90
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001D84: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_08001D90;
    }
    // 0x08001D84: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x08001D88: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x08001D8C: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_08001D90:
    // 0x08001D90: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001D94: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D98: mflo        $t4
    ctx->r12 = lo;
    // 0x08001D9C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x08001DA0: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x08001DA4: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x08001DA8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001DAC: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x08001DB0: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x08001DB4: bgez        $v1, L_08001DC4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001DB8: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08001DC4;
    }
    // 0x08001DB8: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08001DBC: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08001DC0: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_08001DC4:
    // 0x08001DC4: addiu       $t4, $v1, 0x2
    ctx->r12 = ADD32(ctx->r3, 0X2);
    // 0x08001DC8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x08001DCC: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x08001DD0: bgez        $t3, L_08001DE0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08001DD4: sra         $t9, $t3, 1
        ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
            goto L_08001DE0;
    }
    // 0x08001DD4: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x08001DD8: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x08001DDC: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_08001DE0:
    // 0x08001DE0: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001DE4: mflo        $t0
    ctx->r8 = lo;
    // 0x08001DE8: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x08001DEC: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x08001DF0: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x08001DF4: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x08001DF8: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x08001DFC: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x08001E00: bgez        $v1, L_08001E10
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001E04: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_08001E10;
    }
    // 0x08001E04: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x08001E08: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x08001E0C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_08001E10:
    // 0x08001E10: addiu       $t2, $v1, 0x2
    ctx->r10 = ADD32(ctx->r3, 0X2);
    // 0x08001E14: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x08001E18: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x08001E1C: bgez        $t9, L_08001E2C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x08001E20: sra         $t4, $t9, 1
        ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
            goto L_08001E2C;
    }
    // 0x08001E20: sra         $t4, $t9, 1
    ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
    // 0x08001E24: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x08001E28: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_08001E2C:
    // 0x08001E2C: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x08001E30: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001E34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E3C: mflo        $t5
    ctx->r13 = lo;
    // 0x08001E40: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x08001E44: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x08001E48: jalr        $t9
    // 0x08001E4C: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001E4C: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_0:
    // 0x08001E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001E58: jr          $ra
    // 0x08001E5C: nop

    TRACE_RETURN()
    return;
    // 0x08001E5C: nop

;}
RECOMP_FUNC void func_08001680_70F730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001684: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001688: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800168C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001690: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08001694: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001698: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800169C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x080016A0: beq         $at, $zero, L_08001854
    if (ctx->r1 == 0) {
        // 0x080016A4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08001854;
    }
    // 0x080016A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080016A8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X2528) << 16);
    // 0x080016AC: addu        $at, $at, $t6
    gpr jr_addend_080016B4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080016B0: lw          $t6, 0x2528($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X2528));
    // 0x080016B4: jr          $t6
    // 0x080016B8: nop

    switch (jr_addend_080016B4 >> 2) {
        case 0: goto L_080016BC; break;
        case 1: goto L_0800173C; break;
        case 2: goto L_08001764; break;
        case 3: goto L_080017A8; break;
        case 4: goto L_08001800; break;
        case 5: goto L_08001844; break;
        default: switch_error(__func__, 0x080016B4, 0x08002528);
    }
    // 0x080016B8: nop

L_080016BC:
    // 0x080016BC: addiu       $t9, $zero, 0x35
    ctx->r25 = ADD32(0, 0X35);
    // 0x080016C0: sh          $t9, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r25;
    // 0x080016C4: addiu       $t7, $zero, 0x220
    ctx->r15 = ADD32(0, 0X220);
    // 0x080016C8: addiu       $t8, $zero, 0x24E
    ctx->r24 = ADD32(0, 0X24E);
    // 0x080016CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016D0: sw          $t7, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r15;
    // 0x080016D4: sh          $t8, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r24;
    // 0x080016D8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080016DC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x080016E0: jalr        $t9
    // 0x080016E4: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016E4: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_0:
    // 0x080016E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016EC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080016F0: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x080016F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080016F8: jalr        $t9
    // 0x080016FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08001700: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001704: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001708: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800170C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001710: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001714: swc1        $f2, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f2.u32l;
    // 0x08001718: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
    // 0x0800171C: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x08001720: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x08001724: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x08001728: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x0800172C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x08001730: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001734: b           L_08001854
    // 0x08001738: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08001854;
    // 0x08001738: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_0800173C:
    // 0x0800173C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001740: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001744: jalr        $t9
    // 0x08001748: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001748: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x0800174C: beq         $v0, $zero, L_08001854
    if (ctx->r2 == 0) {
        // 0x08001750: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08001854;
    }
    // 0x08001750: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001754: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08001758: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x0800175C: b           L_08001854
    // 0x08001760: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08001854;
    // 0x08001760: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08001764:
    // 0x08001764: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001768: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x0800176C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001770: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001774: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
    // 0x08001778: jal         0x08001B90
    // 0x0800177C: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    func_08001B90_70FC40(rdram, ctx);
        goto after_3;
    // 0x0800177C: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    after_3:
    // 0x08001780: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001784: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001788: jalr        $t9
    // 0x0800178C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800178C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x08001790: beql        $v0, $zero, L_08001858
    if (ctx->r2 == 0) {
        // 0x08001794: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001858;
    }
    goto skip_0;
    // 0x08001794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001798: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x0800179C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080017A0: b           L_08001854
    // 0x080017A4: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08001854;
    // 0x080017A4: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_080017A8:
    // 0x080017A8: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080017AC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x080017B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080017B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x080017B8: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x080017BC: jal         0x08001B90
    // 0x080017C0: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    func_08001B90_70FC40(rdram, ctx);
        goto after_5;
    // 0x080017C0: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_5:
    // 0x080017C4: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x080017C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080017D0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080017D4: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x080017D8: sw          $t0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r8;
    // 0x080017DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080017E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080017E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080017E8: jalr        $t9
    // 0x080017EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080017EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x080017F0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x080017F4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080017F8: b           L_08001854
    // 0x080017FC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08001854;
    // 0x080017FC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08001800:
    // 0x08001800: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001804: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x08001808: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800180C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001810: addiu       $t3, $a1, 0x1
    ctx->r11 = ADD32(ctx->r5, 0X1);
    // 0x08001814: jal         0x08001B90
    // 0x08001818: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    func_08001B90_70FC40(rdram, ctx);
        goto after_7;
    // 0x08001818: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    after_7:
    // 0x0800181C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001820: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001824: jalr        $t9
    // 0x08001828: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001828: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_8:
    // 0x0800182C: beql        $v0, $zero, L_08001858
    if (ctx->r2 == 0) {
        // 0x08001830: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001858;
    }
    goto skip_1;
    // 0x08001830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001834: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08001838: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800183C: b           L_08001854
    // 0x08001840: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08001854;
    // 0x08001840: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08001844:
    // 0x08001844: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001848: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x0800184C: jalr        $t9
    // 0x08001850: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001850: nop

    after_9:
L_08001854:
    // 0x08001854: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001858:
    // 0x08001858: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x0800185C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001860: jr          $ra
    // 0x08001864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080009DC_70EA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080009E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080009E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080009E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080009EC: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x080009F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009F4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x080009F8: beq         $at, $zero, L_08000BB4
    if (ctx->r1 == 0) {
        // 0x080009FC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000BB4;
    }
    // 0x080009FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000A00: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24C4) << 16);
    // 0x08000A04: addu        $at, $at, $t6
    gpr jr_addend_08000A0C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000A08: lw          $t6, 0x24C4($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X24C4));
    // 0x08000A0C: jr          $t6
    // 0x08000A10: nop

    switch (jr_addend_08000A0C >> 2) {
        case 0: goto L_08000A14; break;
        case 1: goto L_08000A4C; break;
        case 2: goto L_08000A78; break;
        case 3: goto L_08000AD4; break;
        case 4: goto L_08000AFC; break;
        case 5: goto L_08000B4C; break;
        case 6: goto L_08000BA4; break;
        default: switch_error(__func__, 0x08000A0C, 0x080024C4);
    }
    // 0x08000A10: nop

L_08000A14:
    // 0x08000A14: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A18: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000A1C: jalr        $t9
    // 0x08000A20: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A20: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x08000A24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A28: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A30: jalr        $t9
    // 0x08000A34: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A34: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_1:
    // 0x08000A38: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000A3C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08000A40: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000A44: b           L_08000BB4
    // 0x08000A48: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_08000BB4;
    // 0x08000A48: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_08000A4C:
    // 0x08000A4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A50: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000A54: jalr        $t9
    // 0x08000A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A60: bne         $v0, $at, L_08000BB4
    if (ctx->r2 != ctx->r1) {
        // 0x08000A64: addiu       $v0, $s0, 0xD0
        ctx->r2 = ADD32(ctx->r16, 0XD0);
            goto L_08000BB4;
    }
    // 0x08000A64: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000A68: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08000A6C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000A70: b           L_08000BB4
    // 0x08000A74: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08000BB4;
    // 0x08000A74: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08000A78:
    // 0x08000A78: lui         $t2, 0x1000
    ctx->r10 = S32(0X1000 << 16);
    // 0x08000A7C: ori         $t2, $t2, 0x661
    ctx->r10 = ctx->r10 | 0X661;
    // 0x08000A80: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08000A84: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24E0) << 16);
    // 0x08000A88: lwc1        $f4, 0x24E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X24E0));
    // 0x08000A8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A90: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A98: lui         $a1, 0x43EF
    ctx->r5 = S32(0X43EF << 16);
    // 0x08000A9C: lui         $a2, 0x42D2
    ctx->r6 = S32(0X42D2 << 16);
    // 0x08000AA0: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x08000AA4: jalr        $t9
    // 0x08000AA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000AA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x08000AAC: bne         $v0, $zero, L_08000BB4
    if (ctx->r2 != 0) {
        // 0x08000AB0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000BB4;
    }
    // 0x08000AB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AB4: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08000AB8: jalr        $t9
    // 0x08000ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000AC0: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000AC4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08000AC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000ACC: b           L_08000BB4
    // 0x08000AD0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_08000BB4;
    // 0x08000AD0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_08000AD4:
    // 0x08000AD4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AD8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000ADC: jalr        $t9
    // 0x08000AE0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000AE0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x08000AE4: beq         $v0, $zero, L_08000BB4
    if (ctx->r2 == 0) {
        // 0x08000AE8: addiu       $v0, $s0, 0xD0
        ctx->r2 = ADD32(ctx->r16, 0XD0);
            goto L_08000BB4;
    }
    // 0x08000AE8: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000AEC: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08000AF0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000AF4: b           L_08000BB4
    // 0x08000AF8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_08000BB4;
    // 0x08000AF8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_08000AFC:
    // 0x08000AFC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24E4) << 16);
    // 0x08000B00: lwc1        $f6, 0x24E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X24E4));
    // 0x08000B04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B08: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000B0C: lui         $a3, 0x4424
    ctx->r7 = S32(0X4424 << 16);
    // 0x08000B10: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B18: lui         $a1, 0x43EF
    ctx->r5 = S32(0X43EF << 16);
    // 0x08000B1C: lui         $a2, 0x42D2
    ctx->r6 = S32(0X42D2 << 16);
    // 0x08000B20: jalr        $t9
    // 0x08000B24: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000B24: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x08000B28: bne         $v0, $zero, L_08000BB4
    if (ctx->r2 != 0) {
        // 0x08000B2C: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_08000BB4;
    }
    // 0x08000B2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B30: addiu       $t7, $zero, 0xAF
    ctx->r15 = ADD32(0, 0XAF);
    // 0x08000B34: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x08000B38: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000B3C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08000B40: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000B44: b           L_08000BB4
    // 0x08000B48: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_08000BB4;
    // 0x08000B48: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_08000B4C:
    // 0x08000B4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24E8) << 16);
    // 0x08000B50: lwc1        $f8, 0x24E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X24E8));
    // 0x08000B54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B58: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000B5C: lui         $a1, 0x440E
    ctx->r5 = S32(0X440E << 16);
    // 0x08000B60: lui         $a3, 0x4430
    ctx->r7 = S32(0X4430 << 16);
    // 0x08000B64: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000B68: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x08000B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B70: lui         $a2, 0x42D2
    ctx->r6 = S32(0X42D2 << 16);
    // 0x08000B74: jalr        $t9
    // 0x08000B78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000B78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x08000B7C: bne         $v0, $zero, L_08000BB4
    if (ctx->r2 != 0) {
        // 0x08000B80: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000BB4;
    }
    // 0x08000B80: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B84: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000B88: jalr        $t9
    // 0x08000B8C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000B8C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x08000B90: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000B94: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08000B98: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000B9C: b           L_08000BB4
    // 0x08000BA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08000BB4;
    // 0x08000BA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08000BA4:
    // 0x08000BA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BA8: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000BAC: jalr        $t9
    // 0x08000BB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000BB0: nop

    after_9:
L_08000BB4:
    // 0x08000BB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000BB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000BC0: jr          $ra
    // 0x08000BC4: nop

    TRACE_RETURN()
    return;
    // 0x08000BC4: nop

;}
RECOMP_FUNC void func_08001B90_70FC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B90: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x08001B94: beq         $t6, $zero, L_08001BB4
    if (ctx->r14 == 0) {
        // 0x08001B98: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_08001BB4;
    }
    // 0x08001B98: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001B9C: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x08001BA0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001BA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001BA8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x08001BAC: jr          $ra
    // 0x08001BB0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08001BB0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_08001BB4:
    // 0x08001BB4: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x08001BB8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001BBC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001BC0: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08001BC4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08001BC8: jr          $ra
    // 0x08001BCC: nop

    TRACE_RETURN()
    return;
    // 0x08001BCC: nop

;}
RECOMP_FUNC void func_08000BC8_70EC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000BD4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000BD8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000BDC: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x08000BE0: sltiu       $at, $t7, 0xF
    ctx->r1 = ctx->r15 < 0XF ? 1 : 0;
    // 0x08000BE4: beq         $at, $zero, L_08001650
    if (ctx->r1 == 0) {
        // 0x08000BE8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08001650;
    }
    // 0x08000BE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08000BEC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X24EC) << 16);
    // 0x08000BF0: addu        $at, $at, $t7
    gpr jr_addend_08000BF8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000BF4: lw          $t7, 0x24EC($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(44, 0X24EC));
    // 0x08000BF8: jr          $t7
    // 0x08000BFC: nop

    switch (jr_addend_08000BF8 >> 2) {
        case 0: goto L_08000C00; break;
        case 1: goto L_08000C8C; break;
        case 2: goto L_08000D90; break;
        case 3: goto L_08000EC8; break;
        case 4: goto L_08000EFC; break;
        case 5: goto L_08000FB0; break;
        case 6: goto L_08001068; break;
        case 7: goto L_08001190; break;
        case 8: goto L_080012E4; break;
        case 9: goto L_080013BC; break;
        case 10: goto L_080013E8; break;
        case 11: goto L_080014A4; break;
        case 12: goto L_080014D4; break;
        case 13: goto L_08001508; break;
        case 14: goto L_0800160C; break;
        default: switch_error(__func__, 0x08000BF8, 0x080024EC);
    }
    // 0x08000BFC: nop

L_08000C00:
    // 0x08000C00: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000C04: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x08000C08: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000C0C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000C10: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x08000C14: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C1C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x08000C20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C24: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000C28: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    // 0x08000C2C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000C30: jalr        $t9
    // 0x08000C34: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C34: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_0:
    // 0x08000C38: bne         $v0, $zero, L_08000C58
    if (ctx->r2 != 0) {
        // 0x08000C3C: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_08000C58;
    }
    // 0x08000C3C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08000C40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C44: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C4C: nop

    after_1:
    // 0x08000C50: b           L_08001670
    // 0x08000C54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001670;
    // 0x08000C54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000C58:
    // 0x08000C58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C5C: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000C60: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000C64: jalr        $t9
    // 0x08000C68: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C68: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_2:
    // 0x08000C6C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000C70: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08000C74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000C78: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x08000C7C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08000C80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08000C84: b           L_08001650
    // 0x08000C88: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08001650;
    // 0x08000C88: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000C8C:
    // 0x08000C8C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000C90: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000C94: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000C98: lw          $a0, 0xEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEC);
    // 0x08000C9C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000CA0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08000CA4: jalr        $v0
    // 0x08000CA8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000CA8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_3:
    // 0x08000CAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CB0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000CB4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000CB8: jalr        $t9
    // 0x08000CBC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CBC: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_4:
    // 0x08000CC0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000CC4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000CC8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x08000CCC: jalr        $t9
    // 0x08000CD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000CD0: nop

    after_5:
    // 0x08000CD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CD8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000CDC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08000CE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000CE4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000CE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000CEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000CF0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000CF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CF8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000CFC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000D00: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000D04: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000D08: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08000D0C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000D10: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08000D14: jalr        $t9
    // 0x08000D18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D18: nop

    after_6:
    // 0x08000D1C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000D20: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000D24: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x08000D28: jalr        $t9
    // 0x08000D2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000D2C: nop

    after_7:
    // 0x08000D30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000D34: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000D38: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000D3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000D40: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000D44: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D48: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000D4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000D50: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000D54: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000D58: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000D5C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000D60: jalr        $t9
    // 0x08000D64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D64: nop

    after_8:
    // 0x08000D68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D6C: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000D70: jalr        $t9
    // 0x08000D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x08000D78: beql        $v0, $zero, L_08001654
    if (ctx->r2 == 0) {
        // 0x08000D7C: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001654;
    }
    goto skip_0;
    // 0x08000D7C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x08000D80: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x08000D84: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000D88: b           L_08001650
    // 0x08000D8C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_08001650;
    // 0x08000D8C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_08000D90:
    // 0x08000D90: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D94: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000D98: jalr        $t9
    // 0x08000D9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000D9C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x08000DA0: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x08000DA4: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x08000DA4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000DA8: lw          $t7, 0xE4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE4);
    // 0x08000DAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DB0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000DB4: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x08000DB8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000DBC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000DC0: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x08000DC4: lui         $a1, 0x4394
    ctx->r5 = S32(0X4394 << 16);
    // 0x08000DC8: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x08000DCC: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    // 0x08000DD0: jalr        $t9
    // 0x08000DD4: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000DD4: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
    after_11:
    // 0x08000DD8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x08000DDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DE0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000DE4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000DE8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000DEC: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000DF0: jalr        $t9
    // 0x08000DF4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000DF4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_12:
    // 0x08000DF8: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000DFC: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000E00: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000E04: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000E08: jalr        $v0
    // 0x08000E0C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x08000E0C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_13:
    // 0x08000E10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E14: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000E18: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000E1C: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x08000E20: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x08000E24: jalr        $t9
    // 0x08000E28: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000E28: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    after_14:
    // 0x08000E2C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000E30: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000E34: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x08000E38: jalr        $t9
    // 0x08000E3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000E3C: nop

    after_15:
    // 0x08000E40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000E44: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000E48: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000E4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000E50: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x08000E54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000E58: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000E5C: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x08000E60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E64: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000E68: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000E6C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000E70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000E74: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x08000E78: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x08000E7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E80: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000E84: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x08000E88: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000E8C: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x08000E90: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000E94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000E98: nop

    // 0x08000E9C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x08000EA0: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08000EA4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000EA8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08000EAC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08000EB0: jalr        $t9
    // 0x08000EB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000EB4: nop

    after_16:
    // 0x08000EB8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x08000EBC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000EC0: b           L_08001650
    // 0x08000EC4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08001650;
    // 0x08000EC4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_08000EC8:
    // 0x08000EC8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000ECC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000ED0: jalr        $t9
    // 0x08000ED4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000ED4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_17:
    // 0x08000ED8: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x08000EDC: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x08000EDC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000EE0: lw          $t4, 0xD0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD0);
    // 0x08000EE4: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x08000EE8: sw          $t3, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r11;
    // 0x08000EEC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000EF0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000EF4: b           L_08001650
    // 0x08000EF8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08001650;
    // 0x08000EF8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000EFC:
    // 0x08000EFC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000F00: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000F04: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08000F08: lw          $a0, 0xEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEC);
    // 0x08000F0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000F10: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x08000F14: jalr        $v0
    // 0x08000F18: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x08000F18: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_18:
    // 0x08000F1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F20: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000F24: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000F28: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x08000F2C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x08000F30: jalr        $t9
    // 0x08000F34: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000F34: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    after_19:
    // 0x08000F38: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000F3C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000F40: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x08000F44: jalr        $t9
    // 0x08000F48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000F48: nop

    after_20:
    // 0x08000F4C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x08000F50: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08000F54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F58: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000F5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000F60: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000F64: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000F68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F6C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000F70: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000F74: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000F78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000F7C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08000F80: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000F84: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000F88: jalr        $t9
    // 0x08000F8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000F8C: nop

    after_21:
    // 0x08000F90: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000F94: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000F98: bne         $v0, $zero, L_08001650
    if (ctx->r2 != 0) {
        // 0x08000F9C: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08001650;
    }
    // 0x08000F9C: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x08000FA0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x08000FA4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000FA8: b           L_08001650
    // 0x08000FAC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_08001650;
    // 0x08000FAC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_08000FB0:
    // 0x08000FB0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000FB4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000FBC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_22:
    // 0x08000FC0: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x08000FC4: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x08000FC4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000FC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FCC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000FD0: lui         $a1, 0x4419
    ctx->r5 = S32(0X4419 << 16);
    // 0x08000FD4: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x08000FD8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000FDC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08000FE0: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x08000FE4: jalr        $t9
    // 0x08000FE8: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000FE8: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    after_23:
    // 0x08000FEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000FF0: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000FF4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000FF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000FFC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001000: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001004: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001008: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800100C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001010: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001014: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001018: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800101C: jalr        $t9
    // 0x08001020: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001020: nop

    after_24:
    // 0x08001024: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001028: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800102C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001030: jalr        $t9
    // 0x08001034: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001034: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_25:
    // 0x08001038: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800103C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001040: lui         $a1, 0x43F3
    ctx->r5 = S32(0X43F3 << 16);
    // 0x08001044: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001048: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800104C: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x08001050: jalr        $t9
    // 0x08001054: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001054: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_26:
    // 0x08001058: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0800105C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001060: b           L_08001650
    // 0x08001064: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08001650;
    // 0x08001064: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08001068:
    // 0x08001068: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0800106C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08001070: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001074: lw          $a0, 0xEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEC);
    // 0x08001078: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0800107C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x08001080: jalr        $v0
    // 0x08001084: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_27;
    // 0x08001084: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_27:
    // 0x08001088: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800108C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001090: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001094: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001098: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800109C: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x080010A0: addiu       $v1, $v1, 0x2628
    ctx->r3 = ADD32(ctx->r3, 0X2628);
    // 0x080010A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080010A8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080010AC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080010B0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080010B4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080010B8: jalr        $v1
    // 0x080010BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_28;
    // 0x080010BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_28:
    // 0x080010C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010C4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080010C8: jalr        $t9
    // 0x080010CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080010CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_29:
    // 0x080010D0: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x080010D4: lui         $a1, 0x4448
        ctx->r5 = S32(0X4448 << 16);
            goto L_08001650;
    }
    // 0x080010D4: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x080010D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010DC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080010E0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080010E4: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    // 0x080010E8: jalr        $t9
    // 0x080010EC: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080010EC: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_30:
    // 0x080010F0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x080010F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080010F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080010FC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001100: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001104: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001108: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800110C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001110: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001114: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08001118: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800111C: jalr        $t9
    // 0x08001120: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001120: nop

    after_31:
    // 0x08001124: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001128: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800112C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x08001130: jalr        $t9
    // 0x08001134: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001134: nop

    after_32:
    // 0x08001138: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800113C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001140: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001144: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x08001148: lui         $a2, 0x4407
    ctx->r6 = S32(0X4407 << 16);
    // 0x0800114C: jalr        $t9
    // 0x08001150: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001150: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_33:
    // 0x08001154: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001158: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800115C: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    // 0x08001160: jalr        $t9
    // 0x08001164: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001164: nop

    after_34:
    // 0x08001168: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x0800116C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001170: lui         $a1, 0x43EB
    ctx->r5 = S32(0X43EB << 16);
    // 0x08001174: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x08001178: jalr        $t9
    // 0x0800117C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x0800117C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_35:
    // 0x08001180: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08001184: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001188: b           L_08001650
    // 0x0800118C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08001650;
    // 0x0800118C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08001190:
    // 0x08001190: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001194: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001198: jalr        $t9
    // 0x0800119C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x0800119C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_36:
    // 0x080011A0: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x080011A4: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_08001650;
    }
    // 0x080011A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080011A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080011AC: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080011B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080011B4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080011B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080011BC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080011C0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080011C4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080011C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080011CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011D0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080011D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080011D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080011DC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080011E0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080011E4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x080011E8: jalr        $t9
    // 0x080011EC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x080011EC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_37:
    // 0x080011F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080011F4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080011F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080011FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001200: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001204: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001208: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800120C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001210: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001214: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x08001218: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800121C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001220: jalr        $t9
    // 0x08001224: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001224: nop

    after_38:
    // 0x08001228: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800122C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001230: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001234: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001238: jalr        $v0
    // 0x0800123C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_39;
    // 0x0800123C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_39:
    // 0x08001240: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001244: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001248: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800124C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001250: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08001254: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001258: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800125C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001260: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001264: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001268: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800126C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001270: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001274: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08001278: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800127C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08001280: jalr        $t9
    // 0x08001284: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001284: nop

    after_40:
    // 0x08001288: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800128C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001290: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x08001294: jalr        $t9
    // 0x08001298: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001298: nop

    after_41:
    // 0x0800129C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080012A0: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080012A4: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x080012A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080012AC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080012B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012B4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080012B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080012BC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080012C0: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x080012C4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080012C8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x080012CC: jalr        $t9
    // 0x080012D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x080012D0: nop

    after_42:
    // 0x080012D4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x080012D8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x080012DC: b           L_08001650
    // 0x080012E0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08001650;
    // 0x080012E0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_080012E4:
    // 0x080012E4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080012E8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080012EC: jalr        $t9
    // 0x080012F0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080012F0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_43:
    // 0x080012F4: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x080012F8: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x080012F8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080012FC: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08001300: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001304: lw          $a0, 0xEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEC);
    // 0x08001308: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x0800130C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001310: jalr        $v0
    // 0x08001314: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_44;
    // 0x08001314: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_44:
    // 0x08001318: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800131C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001320: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001324: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001328: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x0800132C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001330: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001334: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001338: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800133C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001340: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001344: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001348: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800134C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001350: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001354: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x08001358: jalr        $t9
    // 0x0800135C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x0800135C: nop

    after_45:
    // 0x08001360: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001364: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001368: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x0800136C: jalr        $t9
    // 0x08001370: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001370: nop

    after_46:
    // 0x08001374: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001378: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800137C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001384: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001388: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800138C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001390: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001394: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001398: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x0800139C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080013A0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080013A4: jalr        $t9
    // 0x080013A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x080013A8: nop

    after_47:
    // 0x080013AC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080013B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080013B4: b           L_08001650
    // 0x080013B8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08001650;
    // 0x080013B8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080013BC:
    // 0x080013BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080013C0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080013C4: jalr        $t9
    // 0x080013C8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x080013C8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_48:
    // 0x080013CC: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x080013D0: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x080013D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080013D4: lw          $t8, 0xD0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD0);
    // 0x080013D8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080013DC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080013E0: b           L_08001650
    // 0x080013E4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08001650;
    // 0x080013E4: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_080013E8:
    // 0x080013E8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080013EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013F0: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080013F4: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x080013F8: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    // 0x080013FC: lui         $a3, 0xC47A
    ctx->r7 = S32(0XC47A << 16);
    // 0x08001400: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001404: jalr        $t9
    // 0x08001408: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001408: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_49:
    // 0x0800140C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001410: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001414: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001418: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x0800141C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x08001420: jalr        $t9
    // 0x08001424: lui         $a3, 0x442F
    ctx->r7 = S32(0X442F << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08001424: lui         $a3, 0x442F
    ctx->r7 = S32(0X442F << 16);
    after_50:
    // 0x08001428: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800142C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001430: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001434: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001438: jalr        $v0
    // 0x0800143C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_51;
    // 0x0800143C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_51:
    // 0x08001440: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001444: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001448: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800144C: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x08001450: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    // 0x08001454: jalr        $t9
    // 0x08001458: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001458: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    after_52:
    // 0x0800145C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001460: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001464: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    // 0x08001468: jalr        $t9
    // 0x0800146C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x0800146C: nop

    after_53:
    // 0x08001470: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001474: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001478: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x0800147C: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x08001480: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x08001484: jalr        $t9
    // 0x08001488: lui         $a3, 0x442F
    ctx->r7 = S32(0X442F << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001488: lui         $a3, 0x442F
    ctx->r7 = S32(0X442F << 16);
    after_54:
    // 0x0800148C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x08001490: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x08001494: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08001498: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x0800149C: b           L_08001650
    // 0x080014A0: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08001650;
    // 0x080014A0: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080014A4:
    // 0x080014A4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080014A8: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x080014AC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080014B0: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x080014B4: bne         $v0, $zero, L_08001650
    if (ctx->r2 != 0) {
        // 0x080014B8: sw          $t4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r12;
            goto L_08001650;
    }
    // 0x080014B8: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x080014BC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080014C0: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x080014C4: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080014C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080014CC: b           L_08001650
    // 0x080014D0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08001650;
    // 0x080014D0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080014D4:
    // 0x080014D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080014D8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080014DC: jalr        $t9
    // 0x080014E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x080014E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_55:
    // 0x080014E4: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x080014E8: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_08001650;
    }
    // 0x080014E8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080014EC: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x080014F0: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x080014F4: sw          $t8, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r24;
    // 0x080014F8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080014FC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001500: b           L_08001650
    // 0x08001504: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08001650;
    // 0x08001504: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08001508:
    // 0x08001508: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0800150C: lui         $a1, 0x440E
    ctx->r5 = S32(0X440E << 16);
    // 0x08001510: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001514: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x08001518: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x0800151C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001520: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08001524: bne         $v0, $zero, L_08001650
    if (ctx->r2 != 0) {
        // 0x08001528: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_08001650;
    }
    // 0x08001528: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x0800152C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001530: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001534: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001538: jalr        $t9
    // 0x0800153C: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x0800153C: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    after_56:
    // 0x08001540: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001544: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001548: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800154C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001550: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001554: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001558: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800155C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001560: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001564: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08001568: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800156C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08001570: jalr        $t9
    // 0x08001574: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08001574: nop

    after_57:
    // 0x08001578: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800157C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08001580: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x08001584: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001588: jalr        $v0
    // 0x0800158C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_58;
    // 0x0800158C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_58:
    // 0x08001590: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001594: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001598: lui         $a1, 0x43F3
    ctx->r5 = S32(0X43F3 << 16);
    // 0x0800159C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080015A0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080015A4: lui         $a2, 0x430C
    ctx->r6 = S32(0X430C << 16);
    // 0x080015A8: jalr        $t9
    // 0x080015AC: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x080015AC: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_59:
    // 0x080015B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080015B4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080015B8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x080015BC: jalr        $t9
    // 0x080015C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x080015C0: nop

    after_60:
    // 0x080015C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080015C8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080015CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080015D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080015D4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080015D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015DC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080015E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080015E4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x080015E8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080015EC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080015F0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080015F4: jalr        $t9
    // 0x080015F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x080015F8: nop

    after_61:
    // 0x080015FC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x08001600: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001604: b           L_08001650
    // 0x08001608: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08001650;
    // 0x08001608: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_0800160C:
    // 0x0800160C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001610: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001614: jalr        $t9
    // 0x08001618: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08001618: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_62:
    // 0x0800161C: beq         $v0, $zero, L_08001650
    if (ctx->r2 == 0) {
        // 0x08001620: addiu       $t5, $zero, 0x3C
        ctx->r13 = ADD32(0, 0X3C);
            goto L_08001650;
    }
    // 0x08001620: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x08001624: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001628: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x0800162C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08001630: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001634: sb          $t5, 0xD0($t6)
    MEM_B(0XD0, ctx->r14) = ctx->r13;
    // 0x08001638: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x0800163C: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001640: jalr        $t9
    // 0x08001644: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08001644: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    after_63:
    // 0x08001648: b           L_08001670
    // 0x0800164C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001670;
    // 0x0800164C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001650:
    // 0x08001650: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
L_08001654:
    // 0x08001654: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001658: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800165C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08001660: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x08001664: jalr        $t9
    // 0x08001668: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08001668: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_64:
    // 0x0800166C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001670:
    // 0x08001670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001674: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08001678: jr          $ra
    // 0x0800167C: nop

    TRACE_RETURN()
    return;
    // 0x0800167C: nop

;}
RECOMP_FUNC void func_0800220C_7102BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800220C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002210: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002218: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800221C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(44, 0X2200) << 16);
    // 0x08002220: addiu       $a1, $a1, 0x2200
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(44, 0X2200));
    // 0x08002224: jalr        $t9
    // 0x08002228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x0800222C: bne         $v0, $zero, L_0800223C
    if (ctx->r2 != 0) {
        // 0x08002230: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_0800223C;
    }
    // 0x08002230: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08002234: b           L_080022C8
    // 0x08002238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080022C8;
    // 0x08002238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800223C:
    // 0x0800223C: addiu       $t6, $zero, 0x35
    ctx->r14 = ADD32(0, 0X35);
    // 0x08002240: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002244: sh          $t6, 0x28($a2)
    MEM_H(0X28, ctx->r6) = ctx->r14;
    // 0x08002248: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800224C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08002250: jalr        $t9
    // 0x08002254: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002254: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_1:
    // 0x08002258: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x0800225C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002260: addiu       $t7, $zero, 0x33F
    ctx->r15 = ADD32(0, 0X33F);
    // 0x08002264: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08002268: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800226C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002270: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x08002274: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002278: jalr        $t9
    // 0x0800227C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800227C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_2:
    // 0x08002280: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08002284: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(44, 0X25A4) << 16);
    // 0x08002288: lwc1        $f0, 0x25A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(44, 0X25A4));
    // 0x0800228C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08002290: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x08002294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002298: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x0800229C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080022A0: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x080022A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080022A8: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x080022AC: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080022B0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080022B4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080022B8: sh          $t0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r8;
    // 0x080022BC: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x080022C0: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x080022C4: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_080022C8:
    // 0x080022C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080022CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080022D0: jr          $ra
    // 0x080022D4: nop

    TRACE_RETURN()
    return;
    // 0x080022D4: nop

;}
RECOMP_FUNC void func_08000360_7109C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000360: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000364: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000368: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800036C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000370: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000374: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000378: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x0800037C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000380: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000384: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000388: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800038C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000390: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x08000394: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800039C: jalr        $t9
    // 0x080003A0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003A0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x080003A4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080003A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003AC: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080003B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080003B4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x080003B8: jalr        $t9
    // 0x080003BC: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003BC: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    after_1:
    // 0x080003C0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080003C4: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080003C8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080003CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080003D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003D4: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080003D8: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x080003DC: jalr        $t9
    // 0x080003E0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003E0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    after_2:
    // 0x080003E4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x080003E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X410) << 16);
    // 0x080003F4: addiu       $a0, $a0, 0x410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X410));
    // 0x080003F8: jalr        $t9
    // 0x080003FC: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003FC: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    after_3:
    // 0x08000400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000408: jr          $ra
    // 0x0800040C: nop

    TRACE_RETURN()
    return;
    // 0x0800040C: nop

;}
RECOMP_FUNC void func_08001100_711760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001100: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001104: jr          $ra
    // 0x08001108: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001108: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000410_710A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000410: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x08000414: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000418: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x0800041C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000420: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x08000424: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000428: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800042C: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x08000430: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x08000434: beq         $at, $zero, L_08000AE8
    if (ctx->r1 == 0) {
        // 0x08000438: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000AE8;
    }
    // 0x08000438: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x0800043C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1424) << 16);
    // 0x08000440: addu        $at, $at, $t6
    gpr jr_addend_08000448 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000444: lw          $t6, 0x1424($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(45, 0X1424));
    // 0x08000448: jr          $t6
    // 0x0800044C: nop

    switch (jr_addend_08000448 >> 2) {
        case 0: goto L_08000450; break;
        case 1: goto L_0800055C; break;
        case 2: goto L_080005A4; break;
        case 3: goto L_080005F0; break;
        case 4: goto L_08000860; break;
        case 5: goto L_08000A88; break;
        case 6: goto L_08000818; break;
        case 7: goto L_0800066C; break;
        case 8: goto L_080008A8; break;
        case 9: goto L_080007E0; break;
        case 10: goto L_08000A30; break;
        case 11: goto L_080009D4; break;
        case 12: goto L_0800071C; break;
        case 13: goto L_08000AAC; break;
        default: switch_error(__func__, 0x08000448, 0x08001424);
    }
    // 0x0800044C: nop

L_08000450:
    // 0x08000450: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000454: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000458: bnel        $t7, $zero, L_080004E8
    if (ctx->r15 != 0) {
        // 0x0800045C: lw          $t2, 0x84($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X84);
            goto L_080004E8;
    }
    goto skip_0;
    // 0x0800045C: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    skip_0:
    // 0x08000460: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08000464: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000468: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800046C: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x08000470: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08000474: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x08000478: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x0800047C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000480: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000484: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000488: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800048C: sb          $t0, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r8;
    // 0x08000490: jalr        $t9
    // 0x08000494: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000494: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x08000498: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800049C: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080004A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080004A4: jalr        $t9
    // 0x080004A8: lui         $a1, 0x45BE
    ctx->r5 = S32(0X45BE << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004A8: lui         $a1, 0x45BE
    ctx->r5 = S32(0X45BE << 16);
    after_1:
    // 0x080004AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004B0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080004B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080004B8: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    // 0x080004BC: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x080004C0: jalr        $t9
    // 0x080004C4: lui         $a3, 0x423C
    ctx->r7 = S32(0X423C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004C4: lui         $a3, 0x423C
    ctx->r7 = S32(0X423C << 16);
    after_2:
    // 0x080004C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004CC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080004D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080004D4: lui         $a1, 0x42D8
    ctx->r5 = S32(0X42D8 << 16);
    // 0x080004D8: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x080004DC: jalr        $t9
    // 0x080004E0: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004E0: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    after_3:
    // 0x080004E4: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
L_080004E8:
    // 0x080004E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004EC: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080004F0: sh          $zero, 0x14($t2)
    MEM_H(0X14, ctx->r10) = 0;
    // 0x080004F4: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080004F8: sh          $zero, 0x18($t3)
    MEM_H(0X18, ctx->r11) = 0;
    // 0x080004FC: jalr        $t9
    // 0x08000500: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000500: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_4:
    // 0x08000504: bne         $v0, $zero, L_08000AE8
    if (ctx->r2 != 0) {
        // 0x08000508: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08000AE8;
    }
    // 0x08000508: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800050C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000510: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08000514: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000518: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x0800051C: jalr        $t9
    // 0x08000520: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000520: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x08000524: beq         $v0, $zero, L_08000AE8
    if (ctx->r2 == 0) {
        // 0x08000528: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000AE8;
    }
    // 0x08000528: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800052C: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000530: jalr        $t9
    // 0x08000534: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000534: nop

    after_6:
    // 0x08000538: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800053C: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000540: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    // 0x08000544: jalr        $t9
    // 0x08000548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x0800054C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000550: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000554: b           L_08000AE8
    // 0x08000558: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08000AE8;
    // 0x08000558: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_0800055C:
    // 0x0800055C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000560: addiu       $t9, $t9, 0x1CCC
    ctx->r25 = ADD32(ctx->r25, 0X1CCC);
    // 0x08000564: jalr        $t9
    // 0x08000568: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000568: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x0800056C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000570: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000574: jalr        $t9
    // 0x08000578: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000578: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x0800057C: beq         $v0, $zero, L_08000AE8
    if (ctx->r2 == 0) {
        // 0x08000580: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_08000AE8;
    }
    // 0x08000580: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08000584: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000588: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x0800058C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000590: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x08000594: jalr        $t9
    // 0x08000598: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000598: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_10:
    // 0x0800059C: b           L_08000AE8
    // 0x080005A0: nop

        goto L_08000AE8;
    // 0x080005A0: nop

L_080005A4:
    // 0x080005A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005A8: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080005AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080005B0: jalr        $t9
    // 0x080005B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080005B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x080005B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005BC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080005C0: jalr        $t9
    // 0x080005C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080005C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x080005C8: beq         $v0, $zero, L_08000AE8
    if (ctx->r2 == 0) {
        // 0x080005CC: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_08000AE8;
    }
    // 0x080005CC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x080005D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005D4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080005D8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080005DC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x080005E0: jalr        $t9
    // 0x080005E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080005E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_13:
    // 0x080005E8: b           L_08000AE8
    // 0x080005EC: nop

        goto L_08000AE8;
    // 0x080005EC: nop

L_080005F0:
    // 0x080005F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005F4: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080005F8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080005FC: jalr        $t9
    // 0x08000600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x08000604: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000608: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x0800060C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x08000610: jalr        $v1
    // 0x08000614: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x08000614: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_15:
    // 0x08000618: beq         $v0, $zero, L_08000640
    if (ctx->r2 == 0) {
        // 0x0800061C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000640;
    }
    // 0x0800061C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000620: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000624: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000628: jalr        $t9
    // 0x0800062C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800062C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_16:
    // 0x08000630: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000634: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000638: b           L_08000AE8
    // 0x0800063C: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08000AE8;
    // 0x0800063C: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000640:
    // 0x08000640: jalr        $v1
    // 0x08000644: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_17;
    // 0x08000644: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_17:
    // 0x08000648: beq         $v0, $zero, L_08000AE8
    if (ctx->r2 == 0) {
        // 0x0800064C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000AE8;
    }
    // 0x0800064C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000650: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000654: jalr        $t9
    // 0x08000658: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000658: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_18:
    // 0x0800065C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000660: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x08000664: b           L_08000AE8
    // 0x08000668: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08000AE8;
    // 0x08000668: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_0800066C:
    // 0x0800066C: lhu         $t0, 0x8A($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000670: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000674: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000678: bne         $t0, $at, L_080006A0
    if (ctx->r8 != ctx->r1) {
        // 0x0800067C: addiu       $a1, $zero, 0xC2
        ctx->r5 = ADD32(0, 0XC2);
            goto L_080006A0;
    }
    // 0x0800067C: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x08000680: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000684: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000688: jalr        $t9
    // 0x0800068C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800068C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_19:
    // 0x08000690: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000694: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x08000698: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800069C: sb          $t1, 0xDB($t2)
    MEM_B(0XDB, ctx->r10) = ctx->r9;
L_080006A0:
    // 0x080006A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080006A4: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x080006A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x080006AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1460) << 16);
    // 0x080006B0: ldc1        $f8, 0x1460($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(45, 0X1460));
    // 0x080006B4: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x080006B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080006BC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x080006C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080006C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080006C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080006CC: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
    // 0x080006D0: jalr        $t9
    // 0x080006D4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080006D4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_20:
    // 0x080006D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080006DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080006E0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x080006E4: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x080006E8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x080006EC: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080006F0: lwc1        $f18, 0x28($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X28);
    // 0x080006F4: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x080006F8: nop

    // 0x080006FC: bc1f        L_08000AE8
    if (!c1cs) {
        // 0x08000700: nop
    
            goto L_08000AE8;
    }
    // 0x08000700: nop

    // 0x08000704: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x08000708: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x0800070C: sb          $zero, 0xDB($t4)
    MEM_B(0XDB, ctx->r12) = 0;
    // 0x08000710: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000714: b           L_08000AE8
    // 0x08000718: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08000AE8;
    // 0x08000718: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_0800071C:
    // 0x0800071C: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000720: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000724: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000728: bne         $t6, $at, L_08000750
    if (ctx->r14 != ctx->r1) {
        // 0x0800072C: addiu       $a1, $zero, 0xC2
        ctx->r5 = ADD32(0, 0XC2);
            goto L_08000750;
    }
    // 0x0800072C: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x08000730: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000734: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000738: jalr        $t9
    // 0x0800073C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800073C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_21:
    // 0x08000740: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000744: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08000748: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800074C: sb          $t7, 0xDB($t8)
    MEM_B(0XDB, ctx->r24) = ctx->r15;
L_08000750:
    // 0x08000750: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000754: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08000758: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x0800075C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1468) << 16);
    // 0x08000760: ldc1        $f16, 0x1468($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(45, 0X1468));
    // 0x08000764: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x08000768: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800076C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08000770: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000774: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x08000778: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x0800077C: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x08000780: jalr        $t9
    // 0x08000784: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000784: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_22:
    // 0x08000788: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800078C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000790: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000794: lw          $t0, -0x39F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39F4);
    // 0x08000798: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x0800079C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080007A0: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x080007A4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080007A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080007AC: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x080007B0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x080007B4: bc1f        L_08000AE8
    if (!c1cs) {
        // 0x080007B8: nop
    
            goto L_08000AE8;
    }
    // 0x080007B8: nop

    // 0x080007BC: jalr        $t9
    // 0x080007C0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080007C0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_23:
    // 0x080007C4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080007C8: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x080007CC: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x080007D0: sb          $zero, 0xDB($t1)
    MEM_B(0XDB, ctx->r9) = 0;
    // 0x080007D4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080007D8: b           L_08000AE8
    // 0x080007DC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08000AE8;
    // 0x080007DC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080007E0:
    // 0x080007E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007E4: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080007E8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080007EC: jalr        $t9
    // 0x080007F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080007F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x080007F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007F8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080007FC: jalr        $t9
    // 0x08000800: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000800: nop

    after_25:
    // 0x08000804: bne         $v0, $zero, L_08000AE8
    if (ctx->r2 != 0) {
        // 0x08000808: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_08000AE8;
    }
    // 0x08000808: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x0800080C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000810: b           L_08000AE8
    // 0x08000814: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08000AE8;
    // 0x08000814: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000818:
    // 0x08000818: lhu         $t4, 0x8A($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800081C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000820: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x08000824: bne         $t4, $at, L_08000838
    if (ctx->r12 != ctx->r1) {
        // 0x08000828: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000838;
    }
    // 0x08000828: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800082C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000830: jalr        $t9
    // 0x08000834: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000834: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_26:
L_08000838:
    // 0x08000838: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800083C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000840: jalr        $t9
    // 0x08000844: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000844: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_27:
    // 0x08000848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800084C: bne         $v0, $at, L_08000AE8
    if (ctx->r2 != ctx->r1) {
        // 0x08000850: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_08000AE8;
    }
    // 0x08000850: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x08000854: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000858: b           L_08000AE8
    // 0x0800085C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08000AE8;
    // 0x0800085C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000860:
    // 0x08000860: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000868: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x0800086C: bne         $t6, $at, L_08000880
    if (ctx->r14 != ctx->r1) {
        // 0x08000870: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000880;
    }
    // 0x08000870: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000874: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000878: jalr        $t9
    // 0x0800087C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800087C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_28:
L_08000880:
    // 0x08000880: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000884: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000888: jalr        $t9
    // 0x0800088C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x0800088C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_29:
    // 0x08000890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000894: bne         $v0, $at, L_08000AE8
    if (ctx->r2 != ctx->r1) {
        // 0x08000898: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_08000AE8;
    }
    // 0x08000898: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x0800089C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080008A0: b           L_08000AE8
    // 0x080008A4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08000AE8;
    // 0x080008A4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_080008A8:
    // 0x080008A8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080008AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080008B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008B4: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x080008B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080008BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080008C0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x080008C4: lhu         $t0, 0x8A($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X8A);
    // 0x080008C8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080008CC: bnel        $t0, $at, L_0800093C
    if (ctx->r8 != ctx->r1) {
        // 0x080008D0: lhu         $t5, 0x8A($s1)
        ctx->r13 = MEM_HU(ctx->r17, 0X8A);
            goto L_0800093C;
    }
    goto skip_1;
    // 0x080008D0: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    skip_1:
    // 0x080008D4: jalr        $t9
    // 0x080008D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080008D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x080008DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080008E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080008E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008E8: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080008EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(45, 0X102C) << 16);
    // 0x080008F0: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x080008F4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x080008F8: addiu       $a1, $a1, 0x102C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(45, 0X102C));
    // 0x080008FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000900: lui         $a2, 0x42CA
    ctx->r6 = S32(0X42CA << 16);
    // 0x08000904: lui         $a3, 0xC280
    ctx->r7 = S32(0XC280 << 16);
    // 0x08000908: jalr        $t9
    // 0x0800090C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800090C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_31:
    // 0x08000910: beq         $v0, $zero, L_08000938
    if (ctx->r2 == 0) {
        // 0x08000914: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_08000938;
    }
    // 0x08000914: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08000918: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800091C: addiu       $t2, $zero, 0x36
    ctx->r10 = ADD32(0, 0X36);
    // 0x08000920: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000924: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08000928: jalr        $t9
    // 0x0800092C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x0800092C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_32:
    // 0x08000930: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x08000934: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
L_08000938:
    // 0x08000938: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
L_0800093C:
    // 0x0800093C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x08000940: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x08000944: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x08000948: bne         $at, $zero, L_080009A8
    if (ctx->r1 != 0) {
        // 0x0800094C: lui         $a2, 0x800
        ctx->r6 = S32(0X800 << 16);
            goto L_080009A8;
    }
    // 0x0800094C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08000950: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000954: addiu       $t9, $t9, -0x46E8
    ctx->r25 = ADD32(ctx->r25, -0X46E8);
    // 0x08000958: jalr        $t9
    // 0x0800095C: addiu       $a2, $a2, 0x2E68
    ctx->r6 = ADD32(ctx->r6, 0X2E68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x0800095C: addiu       $a2, $a2, 0x2E68
    ctx->r6 = ADD32(ctx->r6, 0X2E68);
    after_33:
    // 0x08000960: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08000964: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08000968: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800096C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000970: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x08000974: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x08000978: sub.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f18.d - ctx->f8.d;
    // 0x0800097C: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x08000980: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x08000984: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x08000988: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0800098C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x08000990: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x08000994: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x08000998: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0800099C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080009A0: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x080009A4: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
L_080009A8:
    // 0x080009A8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x080009AC: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x080009B0: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x080009B4: lbu         $t1, 0x7C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X7C);
    // 0x080009B8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x080009BC: beq         $t2, $zero, L_08000AE8
    if (ctx->r10 == 0) {
        // 0x080009C0: nop
    
            goto L_08000AE8;
    }
    // 0x080009C0: nop

    // 0x080009C4: sh          $t4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r12;
    // 0x080009C8: sh          $t4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r12;
    // 0x080009CC: b           L_08000AE8
    // 0x080009D0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08000AE8;
    // 0x080009D0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_080009D4:
    // 0x080009D4: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080009D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009DC: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x080009E0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x080009E4: bne         $v1, $zero, L_08000B20
    if (ctx->r3 != 0) {
        // 0x080009E8: sh          $t9, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r25;
            goto L_08000B20;
    }
    // 0x080009E8: sh          $t9, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r25;
    // 0x080009EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F0: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080009F4: jalr        $t9
    // 0x080009F8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x080009F8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_34:
    // 0x080009FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A00: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000A04: jalr        $t9
    // 0x08000A08: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08000A08: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_35:
    // 0x08000A0C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A10: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000A14: addiu       $a0, $zero, 0xCA
    ctx->r4 = ADD32(0, 0XCA);
    // 0x08000A18: jalr        $t9
    // 0x08000A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08000A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x08000A20: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A24: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000A28: b           L_08000AE8
    // 0x08000A2C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08000AE8;
    // 0x08000A2C: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000A30:
    // 0x08000A30: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000A34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A38: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x08000A3C: bne         $t7, $at, L_08000A50
    if (ctx->r15 != ctx->r1) {
        // 0x08000A40: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000A50;
    }
    // 0x08000A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A44: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08000A4C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_37:
L_08000A50:
    // 0x08000A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A54: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000A58: jalr        $t9
    // 0x08000A5C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08000A5C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_38:
    // 0x08000A60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A64: bne         $v0, $at, L_08000AE8
    if (ctx->r2 != ctx->r1) {
        // 0x08000A68: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000AE8;
    }
    // 0x08000A68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A6C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000A70: jalr        $t9
    // 0x08000A74: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08000A74: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    after_39:
    // 0x08000A78: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A7C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08000A80: b           L_08000AE8
    // 0x08000A84: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08000AE8;
    // 0x08000A84: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000A88:
    // 0x08000A88: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A8C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000A90: jalr        $t9
    // 0x08000A94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000A94: nop

    after_40:
    // 0x08000A98: bne         $v0, $zero, L_08000AE8
    if (ctx->r2 != 0) {
        // 0x08000A9C: addiu       $t0, $zero, 0xD
        ctx->r8 = ADD32(0, 0XD);
            goto L_08000AE8;
    }
    // 0x08000A9C: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x08000AA0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000AA4: b           L_08000AE8
    // 0x08000AA8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_08000AE8;
    // 0x08000AA8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000AAC:
    // 0x08000AAC: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000AB0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08000AB4: addiu       $a0, $zero, 0x166
    ctx->r4 = ADD32(0, 0X166);
    // 0x08000AB8: bne         $v0, $at, L_08000AE8
    if (ctx->r2 != ctx->r1) {
        // 0x08000ABC: addiu       $a1, $zero, 0x95
        ctx->r5 = ADD32(0, 0X95);
            goto L_08000AE8;
    }
    // 0x08000ABC: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    // 0x08000AC0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000AC4: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08000AC8: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08000ACC: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x08000AD0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x08000AD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000AD8: addiu       $a2, $zero, 0xAB
    ctx->r6 = ADD32(0, 0XAB);
    // 0x08000ADC: addiu       $a3, $zero, -0x53
    ctx->r7 = ADD32(0, -0X53);
    // 0x08000AE0: jalr        $t9
    // 0x08000AE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08000AE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_41:
L_08000AE8:
    // 0x08000AE8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000AEC: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x08000AF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000AF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AF8: lbu         $t4, 0x64($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X64);
    // 0x08000AFC: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000B00: bnel        $t4, $at, L_08000B18
    if (ctx->r12 != ctx->r1) {
        // 0x08000B04: lhu         $t5, 0x8A($s1)
        ctx->r13 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B18;
    }
    goto skip_2;
    // 0x08000B04: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    skip_2:
    // 0x08000B08: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B0C: jalr        $t9
    // 0x08000B10: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000B10: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_42:
    // 0x08000B14: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
L_08000B18:
    // 0x08000B18: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000B1C: sh          $t6, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r14;
L_08000B20:
    // 0x08000B20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000B24: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000B28: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000B2C: jr          $ra
    // 0x08000B30: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x08000B30: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_0800110C_71176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800110C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001118: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x0800111C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x08001120: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001124: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08001128: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800112C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001130: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001134: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X1158) << 16);
    // 0x08001138: bc1fl       L_0800114C
    if (!c1cs) {
        // 0x0800113C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800114C;
    }
    goto skip_0;
    // 0x0800113C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001140: jalr        $t9
    // 0x08001144: addiu       $a0, $a0, 0x1158
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X1158));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001144: addiu       $a0, $a0, 0x1158
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X1158));
    after_0:
    // 0x08001148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800114C:
    // 0x0800114C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001150: jr          $ra
    // 0x08001154: nop

    TRACE_RETURN()
    return;
    // 0x08001154: nop

;}
RECOMP_FUNC void func_0800102C_71168C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800102C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001034: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001038: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x0800103C: addiu       $t7, $zero, 0x79
    ctx->r15 = ADD32(0, 0X79);
    // 0x08001040: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001044: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001048: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800104C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001050: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001058: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x0800105C: jalr        $t9
    // 0x08001060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001064: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1480) << 16);
    // 0x08001068: lwc1        $f0, 0x1480($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0X1480));
    // 0x0800106C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001070: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001074: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001078: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800107C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08001080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001084: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001088: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x0800108C: jalr        $t9
    // 0x08001090: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001090: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08001094: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001098: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x0800109C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080010A0: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080010A4: jalr        $t9
    // 0x080010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080010AC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080010B0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080010B4: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x080010B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010BC: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080010C0: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x080010C4: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010CC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080010D0: jalr        $t9
    // 0x080010D4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010D4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_3:
    // 0x080010D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080010E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X1100) << 16);
    // 0x080010E4: jalr        $t9
    // 0x080010E8: addiu       $a0, $a0, 0x1100
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X1100));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080010E8: addiu       $a0, $a0, 0x1100
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X1100));
    after_4:
    // 0x080010EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080010F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080010F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080010F8: jr          $ra
    // 0x080010FC: nop

    TRACE_RETURN()
    return;
    // 0x080010FC: nop

;}
RECOMP_FUNC void func_08000F18_711578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000F24: addiu       $t6, $zero, 0x2D2
    ctx->r14 = ADD32(0, 0X2D2);
    // 0x08000F28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F2C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000F30: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000F34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F3C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000F40: jalr        $t9
    // 0x08000F44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000F48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F4C: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08000F50: jalr        $t9
    // 0x08000F54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000F58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X147C) << 16);
    // 0x08000F5C: lwc1        $f0, 0x147C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0X147C));
    // 0x08000F60: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F64: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F68: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08000F6C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000F70: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000F74: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000F78: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08000F7C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000F80: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    // 0x08000F84: jalr        $t9
    // 0x08000F88: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F88: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    after_2:
    // 0x08000F8C: bne         $v0, $zero, L_08000FAC
    if (ctx->r2 != 0) {
        // 0x08000F90: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(45, 0XFCC) << 16);
            goto L_08000FAC;
    }
    // 0x08000F90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XFCC) << 16);
    // 0x08000F94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F98: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000F9C: jalr        $t9
    // 0x08000FA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000FA0: nop

    after_3:
    // 0x08000FA4: b           L_08000FC0
    // 0x08000FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000FC0;
    // 0x08000FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000FAC:
    // 0x08000FAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FB4: jalr        $t9
    // 0x08000FB8: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XFCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000FB8: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XFCC));
    after_4:
    // 0x08000FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000FC0:
    // 0x08000FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000FC4: jr          $ra
    // 0x08000FC8: nop

    TRACE_RETURN()
    return;
    // 0x08000FC8: nop

;}
RECOMP_FUNC void func_08001158_7117B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001158: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800115C: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08001160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800116C: lhu         $t7, 0x98($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X98);
    // 0x08001170: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001174: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08001178: beq         $t7, $zero, L_080011A0
    if (ctx->r15 == 0) {
        // 0x0800117C: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_080011A0;
    }
    // 0x0800117C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001180: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    // 0x08001184: jalr        $t9
    // 0x08001188: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001188: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x0800118C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001190: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x08001194: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x08001198: jalr        $t9
    // 0x0800119C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800119C: nop

    after_1:
L_080011A0:
    // 0x080011A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011A8: jr          $ra
    // 0x080011AC: nop

    TRACE_RETURN()
    return;
    // 0x080011AC: nop

;}
RECOMP_FUNC void func_0800025C_7108BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800025C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000260: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(45, 0X29C) << 16);
    // 0x08000264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800026C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000270: addiu       $t6, $t6, 0x29C
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(45, 0X29C));
    // 0x08000274: sw          $t6, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r14;
    // 0x08000278: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800027C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000280: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X110C) << 16);
    // 0x08000284: jalr        $t9
    // 0x08000288: addiu       $a0, $a0, 0x110C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X110C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000288: addiu       $a0, $a0, 0x110C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X110C));
    after_0:
    // 0x0800028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000294: jr          $ra
    // 0x08000298: nop

    TRACE_RETURN()
    return;
    // 0x08000298: nop

;}
RECOMP_FUNC void func_08000ED0_711530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000ED4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000EDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000EE0: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08000EE4: addiu       $a1, $zero, 0x358
    ctx->r5 = ADD32(0, 0X358);
    // 0x08000EE8: jalr        $t9
    // 0x08000EEC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EEC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_0:
    // 0x08000EF0: beq         $v0, $zero, L_08000F08
    if (ctx->r2 == 0) {
        // 0x08000EF4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(45, 0XE00) << 16);
            goto L_08000F08;
    }
    // 0x08000EF4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XE00) << 16);
    // 0x08000EF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F00: jalr        $t9
    // 0x08000F04: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F04: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE00));
    after_1:
L_08000F08:
    // 0x08000F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F10: jr          $ra
    // 0x08000F14: nop

    TRACE_RETURN()
    return;
    // 0x08000F14: nop

;}
RECOMP_FUNC void func_08000CCC_71132C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000CD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000CD8: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000CDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000CE0: jalr        $t9
    // 0x08000CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000CE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000CEC: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08000CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000CF4: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000CF8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000CFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000D00: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x08000D04: beq         $t6, $zero, L_08000D1C
    if (ctx->r14 == 0) {
        // 0x08000D08: and         $t7, $v0, $at
        ctx->r15 = ctx->r2 & ctx->r1;
            goto L_08000D1C;
    }
    // 0x08000D08: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x08000D0C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D10: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000D14: jalr        $t9
    // 0x08000D18: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D18: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    after_1:
L_08000D1C:
    // 0x08000D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D24: jr          $ra
    // 0x08000D28: nop

    TRACE_RETURN()
    return;
    // 0x08000D28: nop

;}
RECOMP_FUNC void func_08000E00_711460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E00: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000E04: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08000E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E0C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x08000E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000E18: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x08000E1C: lhu         $v0, -0x4F56($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F56);
    // 0x08000E20: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x08000E24: beq         $t7, $zero, L_08000E5C
    if (ctx->r15 == 0) {
        // 0x08000E28: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_08000E5C;
    }
    // 0x08000E28: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x08000E2C: beq         $t8, $zero, L_08000E5C
    if (ctx->r24 == 0) {
        // 0x08000E30: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_08000E5C;
    }
    // 0x08000E30: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x08000E34: beq         $t9, $zero, L_08000E5C
    if (ctx->r25 == 0) {
        // 0x08000E38: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000E5C;
    }
    // 0x08000E38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E3C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000E40: jalr        $t9
    // 0x08000E44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_0:
    // 0x08000E48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XE6C) << 16);
    // 0x08000E54: jalr        $t9
    // 0x08000E58: addiu       $a0, $a0, 0xE6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E58: addiu       $a0, $a0, 0xE6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE6C));
    after_1:
L_08000E5C:
    // 0x08000E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E64: jr          $ra
    // 0x08000E68: nop

    TRACE_RETURN()
    return;
    // 0x08000E68: nop

;}
RECOMP_FUNC void func_0800029C_7108FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800029C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080002A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080002AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080002B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080002B4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080002B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080002BC: jalr        $t9
    // 0x080002C0: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002C0: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    after_0:
    // 0x080002C4: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x080002C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002CC: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080002D0: bnel        $t6, $zero, L_08000308
    if (ctx->r14 != 0) {
        // 0x080002D4: lbu         $t7, 0x20($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X20);
            goto L_08000308;
    }
    goto skip_0;
    // 0x080002D4: lbu         $t7, 0x20($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X20);
    skip_0:
    // 0x080002D8: jalr        $t9
    // 0x080002DC: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002DC: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    after_1:
    // 0x080002E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002E4: sb          $zero, 0x20($s0)
    MEM_B(0X20, ctx->r16) = 0;
    // 0x080002E8: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x080002EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080002F0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080002F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080002F8: jalr        $t9
    // 0x080002FC: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002FC: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    after_2:
    // 0x08000300: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08000304: lbu         $t7, 0x20($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X20);
L_08000308:
    // 0x08000308: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800030C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000310: beq         $t7, $zero, L_08000340
    if (ctx->r15 == 0) {
        // 0x08000314: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_08000340;
    }
    // 0x08000314: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000318: sb          $zero, 0x20($s0)
    MEM_B(0X20, ctx->r16) = 0;
    // 0x0800031C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08000320: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000324: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000328: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x0800032C: sb          $t8, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r24;
    // 0x08000330: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X360) << 16);
    // 0x08000334: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000338: jalr        $t9
    // 0x0800033C: addiu       $a0, $a0, 0x360
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X360));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800033C: addiu       $a0, $a0, 0x360
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X360));
    after_3:
L_08000340:
    // 0x08000340: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000344: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000348: sh          $t2, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r10;
    // 0x0800034C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000350: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000354: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000358: jr          $ra
    // 0x0800035C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800035C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000000_710660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08000010: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000014: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000018: jalr        $t9
    // 0x0800001C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x08000020: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000024: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000028: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800002C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000030: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000034: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000038: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x0800003C: jalr        $t9
    // 0x08000040: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000040: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08000044: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08000048: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    // 0x0800004C: bne         $v0, $zero, L_0800006C
    if (ctx->r2 != 0) {
        // 0x08000050: sw          $v0, 0xD0($a1)
        MEM_W(0XD0, ctx->r5) = ctx->r2;
            goto L_0800006C;
    }
    // 0x08000050: sw          $v0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->r2;
    // 0x08000054: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000058: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800005C: jalr        $t9
    // 0x08000060: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000060: nop

    after_2:
    // 0x08000064: b           L_0800020C
    // 0x08000068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800020C;
    // 0x08000068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800006C:
    // 0x0800006C: lw          $t6, 0xD0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XD0);
    // 0x08000070: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000074: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000078: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x0800007C: jalr        $v1
    // 0x08000080: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08000080: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_3:
    // 0x08000084: bne         $v0, $zero, L_080000A4
    if (ctx->r2 != 0) {
        // 0x08000088: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_080000A4;
    }
    // 0x08000088: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800008C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000090: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000094: jalr        $t9
    // 0x08000098: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000098: nop

    after_4:
    // 0x0800009C: b           L_0800020C
    // 0x080000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800020C;
    // 0x080000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000A4:
    // 0x080000A4: jalr        $v1
    // 0x080000A8: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x080000A8: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    after_5:
    // 0x080000AC: beq         $v0, $zero, L_080000CC
    if (ctx->r2 == 0) {
        // 0x080000B0: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_080000CC;
    }
    // 0x080000B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x080000B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000B8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000BC: jalr        $t9
    // 0x080000C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000C0: nop

    after_6:
    // 0x080000C4: b           L_0800020C
    // 0x080000C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800020C;
    // 0x080000C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000CC:
    // 0x080000CC: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080000D0: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x080000D4: jalr        $v0
    // 0x080000D8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x080000D8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_7:
    // 0x080000DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080000E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x080000E4: jalr        $t9
    // 0x080000E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080000E8: nop

    after_8:
    // 0x080000EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080000F0: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080000F8: nop

    after_9:
    // 0x080000FC: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x08000100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000104: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000108: addiu       $v0, $v0, 0x410
    ctx->r2 = ADD32(ctx->r2, 0X410);
    // 0x0800010C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(45, 0XB34) << 16);
    // 0x08000110: addiu       $t7, $zero, 0x300
    ctx->r15 = ADD32(0, 0X300);
    // 0x08000114: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000118: addiu       $a1, $a1, 0xB34
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(45, 0XB34));
    // 0x0800011C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000120: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000124: lui         $a2, 0x42F6
    ctx->r6 = S32(0X42F6 << 16);
    // 0x08000128: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    // 0x0800012C: jalr        $v0
    // 0x08000130: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x08000130: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x08000134: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000138: addiu       $t0, $zero, 0x36
    ctx->r8 = ADD32(0, 0X36);
    // 0x0800013C: beq         $v0, $zero, L_08000164
    if (ctx->r2 == 0) {
        // 0x08000140: sw          $v0, 0xC($t8)
        MEM_W(0XC, ctx->r24) = ctx->r2;
            goto L_08000164;
    }
    // 0x08000140: sw          $v0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r2;
    // 0x08000144: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000148: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800014C: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000150: jalr        $t9
    // 0x08000154: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000154: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_11:
    // 0x08000158: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x0800015C: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x08000160: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
L_08000164:
    // 0x08000164: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000168: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x0800016C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000170: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(45, 0XD2C) << 16);
    // 0x08000174: addiu       $t3, $zero, 0x358
    ctx->r11 = ADD32(0, 0X358);
    // 0x08000178: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x0800017C: addiu       $a1, $a1, 0xD2C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(45, 0XD2C));
    // 0x08000180: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000184: lui         $a2, 0x42F6
    ctx->r6 = S32(0X42F6 << 16);
    // 0x08000188: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    // 0x0800018C: jalr        $t9
    // 0x08000190: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000190: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x08000194: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000198: addiu       $t4, $zero, 0x36
    ctx->r12 = ADD32(0, 0X36);
    // 0x0800019C: beq         $v0, $zero, L_080001C4
    if (ctx->r2 == 0) {
        // 0x080001A0: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_080001C4;
    }
    // 0x080001A0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x080001A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001A8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080001AC: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x080001B0: jalr        $t9
    // 0x080001B4: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080001B4: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_13:
    // 0x080001B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x080001BC: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x080001C0: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_080001C4:
    // 0x080001C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080001CC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080001D0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080001D4: jalr        $t9
    // 0x080001D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080001D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_14:
    // 0x080001DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001E0: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080001E4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080001E8: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080001F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_15:
    // 0x080001F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X218) << 16);
    // 0x08000200: jalr        $t9
    // 0x08000204: addiu       $a0, $a0, 0x218
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X218));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000204: addiu       $a0, $a0, 0x218
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X218));
    after_16:
    // 0x08000208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800020C:
    // 0x0800020C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000210: jr          $ra
    // 0x08000214: nop

    TRACE_RETURN()
    return;
    // 0x08000214: nop

;}
RECOMP_FUNC void func_08000FCC_71162C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000FD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000FD8: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x08000FDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000FE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000FEC: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08000FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FF4: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000FF8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000FFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001000: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x08001004: beq         $t6, $zero, L_0800101C
    if (ctx->r14 == 0) {
        // 0x08001008: and         $t7, $v0, $at
        ctx->r15 = ctx->r2 & ctx->r1;
            goto L_0800101C;
    }
    // 0x08001008: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x0800100C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001010: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001014: jalr        $t9
    // 0x08001018: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001018: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    after_1:
L_0800101C:
    // 0x0800101C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001024: jr          $ra
    // 0x08001028: nop

    TRACE_RETURN()
    return;
    // 0x08001028: nop

;}
RECOMP_FUNC void func_08000218_710878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800021C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000228: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800022C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000230: jalr        $t9
    // 0x08000234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x08000238: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800023C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000240: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0X25C) << 16);
    // 0x08000244: jalr        $t9
    // 0x08000248: addiu       $a0, $a0, 0x25C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X25C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000248: addiu       $a0, $a0, 0x25C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0X25C));
    after_1:
    // 0x0800024C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000254: jr          $ra
    // 0x08000258: nop

    TRACE_RETURN()
    return;
    // 0x08000258: nop

;}
RECOMP_FUNC void func_08000D2C_71138C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000D34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000D38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000D3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D40: addiu       $t6, $zero, 0x261
    ctx->r14 = ADD32(0, 0X261);
    // 0x08000D44: addiu       $t7, $zero, 0x2D2
    ctx->r15 = ADD32(0, 0X2D2);
    // 0x08000D48: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000D4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000D50: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000D54: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000D58: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08000D5C: jalr        $t9
    // 0x08000D60: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D60: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x08000D64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D68: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000D78: jalr        $t9
    // 0x08000D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000D80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D84: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D90: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000D94: jalr        $t9
    // 0x08000D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000D9C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000DA0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000DA4: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000DA8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1478) << 16);
    // 0x08000DAC: lwc1        $f0, 0x1478($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0X1478));
    // 0x08000DB0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000DB4: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08000DB8: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000DBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DC0: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x08000DC4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000DC8: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x08000DCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000DD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XE00) << 16);
    // 0x08000DD4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000DD8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000DDC: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000DE0: sh          $t2, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r10;
    // 0x08000DE4: jalr        $t9
    // 0x08000DE8: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000DE8: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XE00));
    after_3:
    // 0x08000DEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000DF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000DF8: jr          $ra
    // 0x08000DFC: nop

    TRACE_RETURN()
    return;
    // 0x08000DFC: nop

;}
RECOMP_FUNC void func_08000E6C_7114CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E78: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000E80: jalr        $t9
    // 0x08000E84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000E88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E8C: bne         $v0, $at, L_08000EC0
    if (ctx->r2 != ctx->r1) {
        // 0x08000E90: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000EC0;
    }
    // 0x08000E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000E94: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E98: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000EA0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000EA4: jalr        $t9
    // 0x08000EA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000EAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XED0) << 16);
    // 0x08000EB8: jalr        $t9
    // 0x08000EBC: addiu       $a0, $a0, 0xED0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XED0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000EBC: addiu       $a0, $a0, 0xED0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XED0));
    after_2:
L_08000EC0:
    // 0x08000EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000EC8: jr          $ra
    // 0x08000ECC: nop

    TRACE_RETURN()
    return;
    // 0x08000ECC: nop

;}
RECOMP_FUNC void func_08000B34_711194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000B40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000B44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B48: addiu       $t6, $zero, 0x261
    ctx->r14 = ADD32(0, 0X261);
    // 0x08000B4C: addiu       $t7, $zero, 0x2D1
    ctx->r15 = ADD32(0, 0X2D1);
    // 0x08000B50: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000B54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B58: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000B5C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000B60: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08000B64: jalr        $t9
    // 0x08000B68: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B68: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x08000B6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B70: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B80: jalr        $t9
    // 0x08000B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000B88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B8C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000B90: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000B94: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BA0: jalr        $t9
    // 0x08000BA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000BA8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000BAC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000BB0: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000BB4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1470) << 16);
    // 0x08000BB8: lwc1        $f0, 0x1470($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0X1470));
    // 0x08000BBC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000BC0: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08000BC4: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000BC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BCC: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x08000BD0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000BD4: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    // 0x08000BD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XC0C) << 16);
    // 0x08000BE0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000BE4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08000BE8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000BEC: sh          $t2, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r10;
    // 0x08000BF0: jalr        $t9
    // 0x08000BF4: addiu       $a0, $a0, 0xC0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XC0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BF4: addiu       $a0, $a0, 0xC0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XC0C));
    after_3:
    // 0x08000BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000C00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000C04: jr          $ra
    // 0x08000C08: nop

    TRACE_RETURN()
    return;
    // 0x08000C08: nop

;}
RECOMP_FUNC void func_08000C0C_71126C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000C10: jr          $ra
    // 0x08000C14: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000C14: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000C18_711278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000C24: addiu       $t6, $zero, 0x2D1
    ctx->r14 = ADD32(0, 0X2D1);
    // 0x08000C28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C2C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000C30: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C3C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000C40: jalr        $t9
    // 0x08000C44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000C48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C4C: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08000C50: jalr        $t9
    // 0x08000C54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000C58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(45, 0X1474) << 16);
    // 0x08000C5C: lwc1        $f0, 0x1474($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(45, 0X1474));
    // 0x08000C60: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C64: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C68: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08000C6C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000C70: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000C74: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000C78: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08000C7C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000C80: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    // 0x08000C84: jalr        $t9
    // 0x08000C88: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C88: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    after_2:
    // 0x08000C8C: bne         $v0, $zero, L_08000CAC
    if (ctx->r2 != 0) {
        // 0x08000C90: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(45, 0XCCC) << 16);
            goto L_08000CAC;
    }
    // 0x08000C90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(45, 0XCCC) << 16);
    // 0x08000C94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C98: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000C9C: jalr        $t9
    // 0x08000CA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CA0: nop

    after_3:
    // 0x08000CA4: b           L_08000CC0
    // 0x08000CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000CC0;
    // 0x08000CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000CAC:
    // 0x08000CAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CB4: jalr        $t9
    // 0x08000CB8: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XCCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CB8: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(45, 0XCCC));
    after_4:
    // 0x08000CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000CC0:
    // 0x08000CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000CC4: jr          $ra
    // 0x08000CC8: nop

    TRACE_RETURN()
    return;
    // 0x08000CC8: nop

;}
RECOMP_FUNC void func_080011CC_712CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080011D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080011D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080011D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080011DC: lui         $t6, 0xA80
    ctx->r14 = S32(0XA80 << 16);
    // 0x080011E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011E4: ori         $t6, $t6, 0x361
    ctx->r14 = ctx->r14 | 0X361;
    // 0x080011E8: addiu       $t7, $zero, 0xE1
    ctx->r15 = ADD32(0, 0XE1);
    // 0x080011EC: addiu       $t8, $zero, 0x2D6
    ctx->r24 = ADD32(0, 0X2D6);
    // 0x080011F0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080011F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080011F8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080011FC: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x08001200: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001204: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001208: jalr        $t9
    // 0x0800120C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800120C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08001210: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001214: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08001218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800121C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001220: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001224: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x08001228: jalr        $t9
    // 0x0800122C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800122C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08001230: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001234: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800123C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001240: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001244: jalr        $t9
    // 0x08001248: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001248: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800124C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001250: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001254: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001258: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x0800125C: jalr        $t9
    // 0x08001260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08001264: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001268: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x0800126C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001270: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001274: jalr        $t9
    // 0x08001278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x0800127C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001280: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001284: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001288: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800128C: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x08001290: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08001294: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001298: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800129C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(46, 0X12C8) << 16);
    // 0x080012A0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080012A4: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x080012A8: sh          $t3, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r11;
    // 0x080012AC: jalr        $t9
    // 0x080012B0: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X12C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080012B0: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X12C8));
    after_5:
    // 0x080012B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080012B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080012BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080012C0: jr          $ra
    // 0x080012C4: nop

    TRACE_RETURN()
    return;
    // 0x080012C4: nop

;}
RECOMP_FUNC void func_080012C8_712DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080012CC: jr          $ra
    // 0x080012D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080012D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001180_712C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001184: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800118C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001194: jalr        $t9
    // 0x08001198: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001198: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800119C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080011A0: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080011A4: jalr        $t9
    // 0x080011A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011A8: nop

    after_1:
    // 0x080011AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011B0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080011B4: jalr        $t9
    // 0x080011B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080011B8: nop

    after_2:
    // 0x080011BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011C4: jr          $ra
    // 0x080011C8: nop

    TRACE_RETURN()
    return;
    // 0x080011C8: nop

;}
RECOMP_FUNC void func_0800010C_711BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800010C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000110: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x08000114: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000118: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800011C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000124: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000128: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x0800012C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(46, 0X11CC) << 16);
    // 0x08000130: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x08000134: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000138: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x0800013C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08000140: addiu       $a1, $a1, 0x11CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(46, 0X11CC));
    // 0x08000144: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08000148: lui         $a3, 0x42B0
    ctx->r7 = S32(0X42B0 << 16);
    // 0x0800014C: jalr        $t9
    // 0x08000150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000154: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000158: beq         $v0, $zero, L_08000180
    if (ctx->r2 == 0) {
        // 0x0800015C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_08000180;
    }
    // 0x0800015C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08000160: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000164: addiu       $t7, $zero, 0x37
    ctx->r15 = ADD32(0, 0X37);
    // 0x08000168: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800016C: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000170: jalr        $t9
    // 0x08000174: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000174: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x08000178: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x0800017C: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08000180:
    // 0x08000180: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x08000184: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000188: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x0800018C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000190: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x08000194: swc1        $f6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f6.u32l;
    // 0x08000198: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x0800019C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080001A0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x080001A4: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x080001A8: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080001AC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x080001B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001B4: swc1        $f10, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f10.u32l;
    // 0x080001B8: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080001BC: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080001C0: sh          $v0, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r2;
    // 0x080001C4: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x080001C8: jalr        $t9
    // 0x080001CC: sh          $v0, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001CC: sh          $v0, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r2;
    after_2:
    // 0x080001D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080001D4: addiu       $v0, $v0, -0x39D8
    ctx->r2 = ADD32(ctx->r2, -0X39D8);
    // 0x080001D8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080001DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080001E0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080001E4: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x080001E8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x080001EC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080001F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001F4: lw          $t0, 0x2C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X2C);
    // 0x080001F8: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080001FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000200: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000204: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    // 0x08000208: jalr        $t9
    // 0x0800020C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800020C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08000210: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000214: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000218: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800021C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000220: jalr        $t9
    // 0x08000224: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000224: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_4:
    // 0x08000228: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800022C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000230: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000234: jalr        $t9
    // 0x08000238: addiu       $a1, $zero, 0x1840
    ctx->r5 = ADD32(0, 0X1840);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000238: addiu       $a1, $zero, 0x1840
    ctx->r5 = ADD32(0, 0X1840);
    after_5:
    // 0x0800023C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000240: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000244: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000248: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x0800024C: lui         $a2, 0x42E4
    ctx->r6 = S32(0X42E4 << 16);
    // 0x08000250: jalr        $t9
    // 0x08000254: lui         $a3, 0xC100
    ctx->r7 = S32(0XC100 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000254: lui         $a3, 0xC100
    ctx->r7 = S32(0XC100 << 16);
    after_6:
    // 0x08000258: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800025C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000260: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000264: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x08000268: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x0800026C: jalr        $t9
    // 0x08000270: lui         $a3, 0xC224
    ctx->r7 = S32(0XC224 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000270: lui         $a3, 0xC224
    ctx->r7 = S32(0XC224 << 16);
    after_7:
    // 0x08000274: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000278: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x0800027C: jalr        $t9
    // 0x08000280: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000280: nop

    after_8:
    // 0x08000284: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800028C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(46, 0X2B0) << 16);
    // 0x08000290: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000294: jalr        $t9
    // 0x08000298: addiu       $a0, $a0, 0x2B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X2B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000298: addiu       $a0, $a0, 0x2B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(46, 0X2B0));
    after_9:
    // 0x0800029C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080002A0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080002A4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080002A8: jr          $ra
    // 0x080002AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080002AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000000_711AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: jr          $ra
    // 0x08000004: nop

    TRACE_RETURN()
    return;
    // 0x08000004: nop

;}
