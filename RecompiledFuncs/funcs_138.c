#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000338_721958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000338: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0800033C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000344: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000348: lui         $at, 0xC254
    ctx->r1 = S32(0XC254 << 16);
    // 0x0800034C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000350: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000358: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x0800035C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1C20) << 16);
    // 0x08000360: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x08000364: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08000368: addiu       $a1, $a1, 0x1C20
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1C20));
    // 0x0800036C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000370: lui         $a2, 0xC315
    ctx->r6 = S32(0XC315 << 16);
    // 0x08000374: lui         $a3, 0xC160
    ctx->r7 = S32(0XC160 << 16);
    // 0x08000378: jalr        $t9
    // 0x0800037C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800037C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000380: beq         $v0, $zero, L_080003A8
    if (ctx->r2 == 0) {
        // 0x08000384: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_080003A8;
    }
    // 0x08000384: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000388: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800038C: addiu       $t7, $zero, 0x3E
    ctx->r15 = ADD32(0, 0X3E);
    // 0x08000390: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000394: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000398: jalr        $t9
    // 0x0800039C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800039C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_1:
    // 0x080003A0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x080003A4: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_080003A8:
    // 0x080003A8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080003AC: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x080003B0: jalr        $t9
    // 0x080003B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x080003B8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080003BC: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080003C0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080003C4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080003C8: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x080003CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080003D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003D4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x080003D8: sw          $t3, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r11;
    // 0x080003DC: lhu         $t5, 0x1A($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X1A);
    // 0x080003E0: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080003E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003E8: jalr        $t9
    // 0x080003EC: sh          $t5, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080003EC: sh          $t5, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r13;
    after_3:
    // 0x080003F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080003F8: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x080003FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000400: jalr        $t9
    // 0x08000404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08000408: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800040C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000410: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08000414: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08000418: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800041C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000424: jalr        $t9
    // 0x08000428: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000428: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_5:
    // 0x0800042C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000430: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000434: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000438: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x0800043C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x08000440: jalr        $t9
    // 0x08000444: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000444: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_6:
    // 0x08000448: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800044C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08000450: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000454: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08000458: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0800045C: jalr        $t9
    // 0x08000460: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000460: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_7:
    // 0x08000464: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000468: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x0800046C: jalr        $t9
    // 0x08000470: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000470: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_8:
    // 0x08000474: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000478: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800047C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x08000480: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x08000484: addiu       $t8, $zero, 0x138
    ctx->r24 = ADD32(0, 0X138);
    // 0x08000488: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x0800048C: sh          $t6, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r14;
    // 0x08000490: sh          $t7, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r15;
    // 0x08000494: sh          $t8, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r24;
    // 0x08000498: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x0800049C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080004A0: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x080004A4: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x080004A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080004AC: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x080004B0: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x080004B4: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x080004B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x080004BC: jalr        $v1
    // 0x080004C0: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_9;
    // 0x080004C0: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_9:
    // 0x080004C4: bne         $v0, $zero, L_080004EC
    if (ctx->r2 != 0) {
        // 0x080004C8: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_080004EC;
    }
    // 0x080004C8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080004CC: jalr        $t9
    // 0x080004D0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080004D0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_10:
    // 0x080004D4: bne         $v0, $zero, L_080004EC
    if (ctx->r2 != 0) {
        // 0x080004D8: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_080004EC;
    }
    // 0x080004D8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080004DC: jalr        $t9
    // 0x080004E0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080004E0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_11:
    // 0x080004E4: beq         $v0, $zero, L_08000530
    if (ctx->r2 == 0) {
        // 0x080004E8: addiu       $a1, $zero, 0xB92
        ctx->r5 = ADD32(0, 0XB92);
            goto L_08000530;
    }
    // 0x080004E8: addiu       $a1, $zero, 0xB92
    ctx->r5 = ADD32(0, 0XB92);
L_080004EC:
    // 0x080004EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004F0: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080004F4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080004F8: jalr        $t9
    // 0x080004FC: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080004FC: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_12:
    // 0x08000500: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000508: jalr        $t9
    // 0x0800050C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800050C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_13:
    // 0x08000510: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000514: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000518: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X133C) << 16);
    // 0x0800051C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x08000520: jalr        $t9
    // 0x08000524: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X133C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000524: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X133C));
    after_14:
    // 0x08000528: b           L_08000590
    // 0x0800052C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_08000590;
    // 0x0800052C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_08000530:
    // 0x08000530: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000534: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000538: jalr        $t9
    // 0x0800053C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800053C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_15:
    // 0x08000540: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000544: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000548: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800054C: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x08000550: lui         $a2, 0x41D8
    ctx->r6 = S32(0X41D8 << 16);
    // 0x08000554: jalr        $t9
    // 0x08000558: lui         $a3, 0xC240
    ctx->r7 = S32(0XC240 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000558: lui         $a3, 0xC240
    ctx->r7 = S32(0XC240 << 16);
    after_16:
    // 0x0800055C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000560: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000564: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000568: lui         $a1, 0xC30F
    ctx->r5 = S32(0XC30F << 16);
    // 0x0800056C: lui         $a2, 0xC150
    ctx->r6 = S32(0XC150 << 16);
    // 0x08000570: jalr        $t9
    // 0x08000574: lui         $a3, 0xC250
    ctx->r7 = S32(0XC250 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000574: lui         $a3, 0xC250
    ctx->r7 = S32(0XC250 << 16);
    after_17:
    // 0x08000578: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800057C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000580: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X5AC) << 16);
    // 0x08000584: jalr        $t9
    // 0x08000588: addiu       $a0, $a0, 0x5AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X5AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000588: addiu       $a0, $a0, 0x5AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X5AC));
    after_18:
    // 0x0800058C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_08000590:
    // 0x08000590: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x08000594: sh          $zero, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = 0;
    // 0x08000598: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800059C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080005A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080005A4: jr          $ra
    // 0x080005A8: nop

    TRACE_RETURN()
    return;
    // 0x080005A8: nop

;}
RECOMP_FUNC void func_0800293C_723F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800293C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002948: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x0800294C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002950: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x08002954: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002958: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800295C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002960: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002964: jalr        $t9
    // 0x08002968: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002968: nop

    after_0:
    // 0x0800296C: beq         $v0, $zero, L_0800299C
    if (ctx->r2 == 0) {
        // 0x08002970: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_0800299C;
    }
    // 0x08002970: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002974: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002978: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800297C: lw          $a0, 0xBC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XBC);
    // 0x08002980: jalr        $t9
    // 0x08002984: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002984: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x08002988: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800298C: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x08002990: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x08002994: jalr        $t9
    // 0x08002998: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002998: nop

    after_2:
L_0800299C:
    // 0x0800299C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080029A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080029A4: jr          $ra
    // 0x080029A8: nop

    TRACE_RETURN()
    return;
    // 0x080029A8: nop

;}
RECOMP_FUNC void func_080005AC_721BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080005B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080005B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080005B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x080005BC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080005C0: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080005C4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x080005C8: lw          $t7, 0x18($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X18);
    // 0x080005CC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x080005D0: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x080005D4: sltiu       $at, $t8, 0x13
    ctx->r1 = ctx->r24 < 0X13 ? 1 : 0;
    // 0x080005D8: beq         $at, $zero, L_080012FC
    if (ctx->r1 == 0) {
        // 0x080005DC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_080012FC;
    }
    // 0x080005DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x080005E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2DD8) << 16);
    // 0x080005E4: addu        $at, $at, $t8
    gpr jr_addend_080005EC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x080005E8: lw          $t8, 0x2DD8($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(53, 0X2DD8));
    // 0x080005EC: jr          $t8
    // 0x080005F0: nop

    switch (jr_addend_080005EC >> 2) {
        case 0: goto L_080005F4; break;
        case 1: goto L_0800065C; break;
        case 2: goto L_08000740; break;
        case 3: goto L_08000A40; break;
        case 4: goto L_08000AD8; break;
        case 5: goto L_08000B38; break;
        case 6: goto L_08000BAC; break;
        case 7: goto L_08000C18; break;
        case 8: goto L_08000D40; break;
        case 9: goto L_08000D9C; break;
        case 10: goto L_08000EAC; break;
        case 11: goto L_08001020; break;
        case 12: goto L_0800113C; break;
        case 13: goto L_080012FC; break;
        case 14: goto L_080012FC; break;
        case 15: goto L_080012FC; break;
        case 16: goto L_08000C84; break;
        case 17: goto L_080010E0; break;
        case 18: goto L_08001218; break;
        default: switch_error(__func__, 0x080005EC, 0x08002DD8);
    }
    // 0x080005F0: nop

L_080005F4:
    // 0x080005F4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080005F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080005FC: lhu         $v1, 0x8A($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X8A);
    // 0x08000600: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000604: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000608: bnel        $v1, $at, L_08000624
    if (ctx->r3 != ctx->r1) {
        // 0x0800060C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_08000624;
    }
    goto skip_0;
    // 0x0800060C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_0:
    // 0x08000610: jalr        $t9
    // 0x08000614: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000614: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x08000618: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x0800061C: lhu         $v1, 0x8A($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X8A);
    // 0x08000620: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_08000624:
    // 0x08000624: bne         $v1, $at, L_08000640
    if (ctx->r3 != ctx->r1) {
        // 0x08000628: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000640;
    }
    // 0x08000628: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800062C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000630: jalr        $t9
    // 0x08000634: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000634: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_1:
    // 0x08000638: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x0800063C: lhu         $v1, 0x8A($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X8A);
L_08000640:
    // 0x08000640: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08000644: bne         $v1, $at, L_080012FC
    if (ctx->r3 != ctx->r1) {
        // 0x08000648: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_080012FC;
    }
    // 0x08000648: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x0800064C: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000650: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000654: b           L_080012FC
    // 0x08000658: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012FC;
    // 0x08000658: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_0800065C:
    // 0x0800065C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000660: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000664: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000668: lhu         $t5, 0x8A($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8A);
    // 0x0800066C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000670: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x08000674: bne         $t5, $at, L_08000718
    if (ctx->r13 != ctx->r1) {
        // 0x08000678: nop
    
            goto L_08000718;
    }
    // 0x08000678: nop

    // 0x0800067C: jalr        $t9
    // 0x08000680: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000680: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_2:
    // 0x08000684: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000688: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800068C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000690: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000694: lui         $a2, 0x42A6
    ctx->r6 = S32(0X42A6 << 16);
    // 0x08000698: jalr        $t9
    // 0x0800069C: lui         $a3, 0xC24C
    ctx->r7 = S32(0XC24C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800069C: lui         $a3, 0xC24C
    ctx->r7 = S32(0XC24C << 16);
    after_3:
    // 0x080006A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006A4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080006A8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080006AC: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x080006B0: lui         $a2, 0x422C
    ctx->r6 = S32(0X422C << 16);
    // 0x080006B4: jalr        $t9
    // 0x080006B8: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080006B8: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    after_4:
    // 0x080006BC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x080006C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006C4: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080006C8: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x080006CC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X20D8) << 16);
    // 0x080006D0: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x080006D4: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x080006D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x080006DC: addiu       $a1, $a1, 0x20D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X20D8));
    // 0x080006E0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x080006E4: lui         $a3, 0xC160
    ctx->r7 = S32(0XC160 << 16);
    // 0x080006E8: jalr        $t9
    // 0x080006EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080006EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x080006F0: beq         $v0, $zero, L_08000718
    if (ctx->r2 == 0) {
        // 0x080006F4: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_08000718;
    }
    // 0x080006F4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x080006F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006FC: addiu       $t8, $zero, 0x3E
    ctx->r24 = ADD32(0, 0X3E);
    // 0x08000700: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000704: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000708: jalr        $t9
    // 0x0800070C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800070C: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_6:
    // 0x08000710: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x08000714: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_08000718:
    // 0x08000718: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800071C: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000720: jalr        $t9
    // 0x08000724: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000724: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_7:
    // 0x08000728: bne         $v0, $zero, L_080012FC
    if (ctx->r2 != 0) {
        // 0x0800072C: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_080012FC;
    }
    // 0x0800072C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x08000730: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000734: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x08000738: b           L_080012FC
    // 0x0800073C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012FC;
    // 0x0800073C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000740:
    // 0x08000740: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000748: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    // 0x0800074C: lhu         $v0, 0x8A($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X8A);
    // 0x08000750: bne         $v0, $at, L_080007B8
    if (ctx->r2 != ctx->r1) {
        // 0x08000754: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080007B8;
    }
    // 0x08000754: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000758: lw          $t5, 0x60($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X60);
    // 0x0800075C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000760: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000764: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x08000768: sw          $t6, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r14;
    // 0x0800076C: jalr        $t9
    // 0x08000770: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000770: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_8:
    // 0x08000774: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000778: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800077C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000780: lui         $a1, 0xC2EC
    ctx->r5 = S32(0XC2EC << 16);
    // 0x08000784: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x08000788: jalr        $t9
    // 0x0800078C: lui         $a3, 0xC278
    ctx->r7 = S32(0XC278 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800078C: lui         $a3, 0xC278
    ctx->r7 = S32(0XC278 << 16);
    after_9:
    // 0x08000790: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000794: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000798: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800079C: lui         $a1, 0xC341
    ctx->r5 = S32(0XC341 << 16);
    // 0x080007A0: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x080007A4: jalr        $t9
    // 0x080007A8: lui         $a3, 0xC21C
    ctx->r7 = S32(0XC21C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080007A8: lui         $a3, 0xC21C
    ctx->r7 = S32(0XC21C << 16);
    after_10:
    // 0x080007AC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x080007B0: lhu         $v0, 0x8A($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X8A);
    // 0x080007B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_080007B8:
    // 0x080007B8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x080007BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080007C0: beql        $t8, $zero, L_080008A8
    if (ctx->r24 == 0) {
        // 0x080007C4: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_080008A8;
    }
    goto skip_1;
    // 0x080007C4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    skip_1:
    // 0x080007C8: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x080007CC: mfhi        $t0
    ctx->r8 = hi;
    // 0x080007D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007D4: bne         $t0, $zero, L_080008A4
    if (ctx->r8 != 0) {
        // 0x080007D8: addiu       $t9, $t9, -0x6D4C
        ctx->r25 = ADD32(ctx->r25, -0X6D4C);
            goto L_080008A4;
    }
    // 0x080007D8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080007DC: jalr        $t9
    // 0x080007E0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080007E0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x080007E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080007E8: beq         $v0, $at, L_0800081C
    if (ctx->r2 == ctx->r1) {
        // 0x080007EC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800081C;
    }
    // 0x080007EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080007F4: beq         $v0, $at, L_08000838
    if (ctx->r2 == ctx->r1) {
        // 0x080007F8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000838;
    }
    // 0x080007F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000800: beq         $v0, $at, L_08000854
    if (ctx->r2 == ctx->r1) {
        // 0x08000804: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000854;
    }
    // 0x08000804: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000808: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800080C: beq         $v0, $at, L_08000870
    if (ctx->r2 == ctx->r1) {
        // 0x08000810: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000870;
    }
    // 0x08000810: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000814: b           L_0800088C
    // 0x08000818: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
        goto L_0800088C;
    // 0x08000818: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
L_0800081C:
    // 0x0800081C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000820: jalr        $t9
    // 0x08000824: addiu       $a0, $zero, 0x279
    ctx->r4 = ADD32(0, 0X279);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000824: addiu       $a0, $zero, 0x279
    ctx->r4 = ADD32(0, 0X279);
    after_12:
    // 0x08000828: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x0800082C: lhu         $v0, 0x8A($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X8A);
    // 0x08000830: b           L_080008A4
    // 0x08000834: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_080008A4;
    // 0x08000834: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_08000838:
    // 0x08000838: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800083C: jalr        $t9
    // 0x08000840: addiu       $a0, $zero, 0x27A
    ctx->r4 = ADD32(0, 0X27A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000840: addiu       $a0, $zero, 0x27A
    ctx->r4 = ADD32(0, 0X27A);
    after_13:
    // 0x08000844: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x08000848: lhu         $v0, 0x8A($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X8A);
    // 0x0800084C: b           L_080008A4
    // 0x08000850: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_080008A4;
    // 0x08000850: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_08000854:
    // 0x08000854: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000858: jalr        $t9
    // 0x0800085C: addiu       $a0, $zero, 0x27B
    ctx->r4 = ADD32(0, 0X27B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x0800085C: addiu       $a0, $zero, 0x27B
    ctx->r4 = ADD32(0, 0X27B);
    after_14:
    // 0x08000860: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x08000864: lhu         $v0, 0x8A($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X8A);
    // 0x08000868: b           L_080008A4
    // 0x0800086C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_080008A4;
    // 0x0800086C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_08000870:
    // 0x08000870: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000874: jalr        $t9
    // 0x08000878: addiu       $a0, $zero, 0x27C
    ctx->r4 = ADD32(0, 0X27C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000878: addiu       $a0, $zero, 0x27C
    ctx->r4 = ADD32(0, 0X27C);
    after_15:
    // 0x0800087C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000880: lhu         $v0, 0x8A($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X8A);
    // 0x08000884: b           L_080008A4
    // 0x08000888: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_080008A4;
    // 0x08000888: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_0800088C:
    // 0x0800088C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000890: jalr        $t9
    // 0x08000894: addiu       $a0, $zero, 0x279
    ctx->r4 = ADD32(0, 0X279);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000894: addiu       $a0, $zero, 0x279
    ctx->r4 = ADD32(0, 0X279);
    after_16:
    // 0x08000898: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x0800089C: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x080008A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_080008A4:
    // 0x080008A4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_080008A8:
    // 0x080008A8: bne         $v1, $at, L_08000954
    if (ctx->r3 != ctx->r1) {
        // 0x080008AC: lui         $t6, 0x8004
        ctx->r14 = S32(0X8004 << 16);
            goto L_08000954;
    }
    // 0x080008AC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x080008B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008B4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080008B8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080008BC: addiu       $t6, $t6, -0x7438
    ctx->r14 = ADD32(ctx->r14, -0X7438);
    // 0x080008C0: jalr        $t9
    // 0x080008C4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080008C4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_17:
    // 0x080008C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008CC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080008D0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x080008D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080008D8: jalr        $t9
    // 0x080008DC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080008DC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_18:
    // 0x080008E0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x080008E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008E8: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080008EC: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x080008F0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x080008F4: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x080008F8: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x080008FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08000900: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x08000904: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000908: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x0800090C: jalr        $t9
    // 0x08000910: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000910: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x08000914: beq         $v0, $zero, L_0800093C
    if (ctx->r2 == 0) {
        // 0x08000918: addiu       $t0, $zero, 0x3E
        ctx->r8 = ADD32(0, 0X3E);
            goto L_0800093C;
    }
    // 0x08000918: addiu       $t0, $zero, 0x3E
    ctx->r8 = ADD32(0, 0X3E);
    // 0x0800091C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000920: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08000924: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000928: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0800092C: jalr        $t9
    // 0x08000930: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000930: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_20:
    // 0x08000934: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000938: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800093C:
    // 0x0800093C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000940: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    // 0x08000944: jalr        $t9
    // 0x08000948: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000948: nop

    after_21:
    // 0x0800094C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x08000950: lhu         $v0, 0x8A($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X8A);
L_08000954:
    // 0x08000954: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08000958: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E28) << 16);
    // 0x0800095C: ldc1        $f8, 0x2E28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E28));
    // 0x08000960: bgez        $v0, L_0800097C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000964: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_0800097C;
    }
    // 0x08000964: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x08000968: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800096C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000970: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000974: nop

    // 0x08000978: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_0800097C:
    // 0x0800097C: c.eq.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d == ctx->f16.d;
    // 0x08000980: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1FB4) << 16);
    // 0x08000984: addiu       $a1, $a1, 0x1FB4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1FB4));
    // 0x08000988: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x0800098C: bc1f        L_080009DC
    if (!c1cs) {
        // 0x08000990: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_080009DC;
    }
    // 0x08000990: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x08000994: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08000998: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800099C: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080009A0: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x080009A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080009A8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x080009AC: jalr        $t9
    // 0x080009B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080009B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_22:
    // 0x080009B4: beq         $v0, $zero, L_080009DC
    if (ctx->r2 == 0) {
        // 0x080009B8: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_080009DC;
    }
    // 0x080009B8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080009BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009C0: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x080009C4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080009C8: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x080009CC: jalr        $t9
    // 0x080009D0: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080009D0: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_23:
    // 0x080009D4: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x080009D8: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
L_080009DC:
    // 0x080009DC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x080009E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009E4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080009E8: lhu         $t7, 0x8A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8A);
    // 0x080009EC: slti        $at, $t7, 0x3D
    ctx->r1 = SIGNED(ctx->r15) < 0X3D ? 1 : 0;
    // 0x080009F0: bnel        $at, $zero, L_08001300
    if (ctx->r1 != 0) {
        // 0x080009F4: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_08001300;
    }
    goto skip_2;
    // 0x080009F4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_2:
    // 0x080009F8: jalr        $t9
    // 0x080009FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080009FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_24:
    // 0x08000A00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A04: bne         $v0, $at, L_080012FC
    if (ctx->r2 != ctx->r1) {
        // 0x08000A08: addiu       $a0, $zero, 0x162
        ctx->r4 = ADD32(0, 0X162);
            goto L_080012FC;
    }
    // 0x08000A08: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    // 0x08000A0C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A10: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000A14: jalr        $t9
    // 0x08000A18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000A18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x08000A1C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A20: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000A24: jalr        $t9
    // 0x08000A28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000A28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x08000A2C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x08000A30: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x08000A34: sh          $zero, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = 0;
    // 0x08000A38: b           L_080012FC
    // 0x08000A3C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_080012FC;
    // 0x08000A3C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08000A40:
    // 0x08000A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A44: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000A48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x08000A54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A58: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000A60: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_28:
    // 0x08000A64: beq         $v0, $zero, L_080012FC
    if (ctx->r2 == 0) {
        // 0x08000A68: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000A68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A6C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000A70: jalr        $t9
    // 0x08000A74: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000A74: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_29:
    // 0x08000A78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A7C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000A80: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000A84: jalr        $t9
    // 0x08000A88: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000A88: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_30:
    // 0x08000A8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A90: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000A94: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000A98: lui         $a1, 0xC1A8
    ctx->r5 = S32(0XC1A8 << 16);
    // 0x08000A9C: lui         $a2, 0x4208
    ctx->r6 = S32(0X4208 << 16);
    // 0x08000AA0: jalr        $t9
    // 0x08000AA4: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000AA4: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    after_31:
    // 0x08000AA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AAC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000AB0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000AB4: lui         $a1, 0xC2BA
    ctx->r5 = S32(0XC2BA << 16);
    // 0x08000AB8: lui         $a2, 0x41B0
    ctx->r6 = S32(0X41B0 << 16);
    // 0x08000ABC: jalr        $t9
    // 0x08000AC0: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000AC0: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    after_32:
    // 0x08000AC4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x08000AC8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x08000ACC: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    // 0x08000AD0: b           L_080012FC
    // 0x08000AD4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_080012FC;
    // 0x08000AD4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000AD8:
    // 0x08000AD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ADC: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000AE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000AE4: jalr        $t9
    // 0x08000AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08000AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x08000AEC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AF0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000AF4: jalr        $t9
    // 0x08000AF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000AF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_34:
    // 0x08000AFC: beq         $v0, $zero, L_080012FC
    if (ctx->r2 == 0) {
        // 0x08000B00: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000B00: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B04: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08000B0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_35:
    // 0x08000B10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B14: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000B18: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B1C: jalr        $t9
    // 0x08000B20: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08000B20: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    after_36:
    // 0x08000B24: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x08000B28: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x08000B2C: sh          $zero, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = 0;
    // 0x08000B30: b           L_080012FC
    // 0x08000B34: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_080012FC;
    // 0x08000B34: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08000B38:
    // 0x08000B38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B3C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000B40: jalr        $t9
    // 0x08000B44: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08000B44: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_37:
    // 0x08000B48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000B4C: bne         $v0, $at, L_08000B60
    if (ctx->r2 != ctx->r1) {
        // 0x08000B50: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000B60;
    }
    // 0x08000B50: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B54: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000B58: jalr        $t9
    // 0x08000B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08000B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_38:
L_08000B60:
    // 0x08000B60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B64: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000B68: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000B6C: jalr        $t9
    // 0x08000B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08000B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_39:
    // 0x08000B74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B78: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000B7C: jalr        $t9
    // 0x08000B80: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000B80: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_40:
    // 0x08000B84: beq         $v0, $zero, L_080012FC
    if (ctx->r2 == 0) {
        // 0x08000B88: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000B88: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B8C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000B90: jalr        $t9
    // 0x08000B94: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08000B94: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_41:
    // 0x08000B98: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x08000B9C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08000BA0: sh          $zero, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = 0;
    // 0x08000BA4: b           L_080012FC
    // 0x08000BA8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_080012FC;
    // 0x08000BA8: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08000BAC:
    // 0x08000BAC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x08000BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000BB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BB8: lhu         $t8, 0x8A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8A);
    // 0x08000BBC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000BC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000BC4: bne         $t8, $at, L_08000BDC
    if (ctx->r24 != ctx->r1) {
        // 0x08000BC8: nop
    
            goto L_08000BDC;
    }
    // 0x08000BC8: nop

    // 0x08000BCC: jalr        $t9
    // 0x08000BD0: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000BD0: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    after_42:
    // 0x08000BD4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08000BD8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
L_08000BDC:
    // 0x08000BDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BE0: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08000BE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_43:
    // 0x08000BEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000BF0: bne         $v0, $at, L_080012FC
    if (ctx->r2 != ctx->r1) {
        // 0x08000BF4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000BF4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BF8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000BFC: jalr        $t9
    // 0x08000C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08000C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_44:
    // 0x08000C04: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08000C08: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x08000C0C: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    // 0x08000C10: b           L_080012FC
    // 0x08000C14: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_080012FC;
    // 0x08000C14: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08000C18:
    // 0x08000C18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C1C: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000C20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000C24: jalr        $t9
    // 0x08000C28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08000C28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_45:
    // 0x08000C2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C30: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000C34: jalr        $t9
    // 0x08000C38: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08000C38: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_46:
    // 0x08000C3C: beq         $v0, $zero, L_080012FC
    if (ctx->r2 == 0) {
        // 0x08000C40: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000C40: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C44: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08000C4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_47:
    // 0x08000C50: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C54: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000C58: jalr        $t9
    // 0x08000C5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08000C5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x08000C60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C64: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x08000C68: jalr        $t9
    // 0x08000C6C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000C6C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_49:
    // 0x08000C70: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x08000C74: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x08000C78: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000C7C: b           L_080012FC
    // 0x08000C80: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012FC;
    // 0x08000C80: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000C84:
    // 0x08000C84: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000C88: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000C8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000C90: lhu         $v1, 0x8A($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X8A);
    // 0x08000C94: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x08000C98: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000C9C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x08000CA0: beql        $v0, $zero, L_08000CD0
    if (ctx->r2 == 0) {
        // 0x08000CA4: lwc1        $f6, 0xC($t5)
        ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
            goto L_08000CD0;
    }
    goto skip_3;
    // 0x08000CA4: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
    skip_3:
    // 0x08000CA8: beq         $v0, $at, L_08000D18
    if (ctx->r2 == ctx->r1) {
        // 0x08000CAC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08000D18;
    }
    // 0x08000CAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000CB0: beq         $v0, $at, L_08000CF4
    if (ctx->r2 == ctx->r1) {
        // 0x08000CB4: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_08000CF4;
    }
    // 0x08000CB4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x08000CB8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000CBC: beql        $v0, $at, L_08000D1C
    if (ctx->r2 == ctx->r1) {
        // 0x08000CC0: slti        $at, $v1, 0x3D
        ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_08000D1C;
    }
    goto skip_4;
    // 0x08000CC0: slti        $at, $v1, 0x3D
    ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    skip_4:
    // 0x08000CC4: b           L_08000D1C
    // 0x08000CC8: slti        $at, $v1, 0x3D
    ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
        goto L_08000D1C;
    // 0x08000CC8: slti        $at, $v1, 0x3D
    ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x08000CCC: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
L_08000CD0:
    // 0x08000CD0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E30) << 16);
    // 0x08000CD4: ldc1        $f18, 0x2E30($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E30));
    // 0x08000CD8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x08000CDC: add.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f10.d + ctx->f18.d;
    // 0x08000CE0: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x08000CE4: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x08000CE8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x08000CEC: b           L_08000D18
    // 0x08000CF0: lhu         $v1, 0x8A($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X8A);
        goto L_08000D18;
    // 0x08000CF0: lhu         $v1, 0x8A($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X8A);
L_08000CF4:
    // 0x08000CF4: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08000CF8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E38) << 16);
    // 0x08000CFC: ldc1        $f10, 0x2E38($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E38));
    // 0x08000D00: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000D04: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x08000D08: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x08000D0C: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x08000D10: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x08000D14: lhu         $v1, 0x8A($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X8A);
L_08000D18:
    // 0x08000D18: slti        $at, $v1, 0x3D
    ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
L_08000D1C:
    // 0x08000D1C: bnel        $at, $zero, L_08001300
    if (ctx->r1 != 0) {
        // 0x08000D20: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_08001300;
    }
    goto skip_5;
    // 0x08000D20: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_5:
    // 0x08000D24: jalr        $t9
    // 0x08000D28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08000D28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_50:
    // 0x08000D2C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08000D30: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x08000D34: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    // 0x08000D38: b           L_080012FC
    // 0x08000D3C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_080012FC;
    // 0x08000D3C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08000D40:
    // 0x08000D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D44: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000D48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000D4C: jalr        $t9
    // 0x08000D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08000D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_51:
    // 0x08000D54: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D58: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000D5C: jalr        $t9
    // 0x08000D60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08000D60: nop

    after_52:
    // 0x08000D64: bne         $v0, $zero, L_080012FC
    if (ctx->r2 != 0) {
        // 0x08000D68: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000D68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D6C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000D70: jalr        $t9
    // 0x08000D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08000D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_53:
    // 0x08000D78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D7C: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x08000D80: jalr        $t9
    // 0x08000D84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08000D84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_54:
    // 0x08000D88: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x08000D8C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x08000D90: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000D94: b           L_080012FC
    // 0x08000D98: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012FC;
    // 0x08000D98: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000D9C:
    // 0x08000D9C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000DA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000DA4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x08000DA8: lhu         $t5, 0x8A($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8A);
    // 0x08000DAC: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x08000DB0: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08000DB4: bne         $t5, $at, L_08000E38
    if (ctx->r13 != ctx->r1) {
        // 0x08000DB8: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_08000E38;
    }
    // 0x08000DB8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x08000DBC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x08000DC0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08000DC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DC8: lwc1        $f16, 0x10($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08000DCC: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08000DD0: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x08000DD4: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x08000DD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000DDC: jalr        $t9
    // 0x08000DE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000DE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_55:
    // 0x08000DE4: beq         $v0, $zero, L_08000E0C
    if (ctx->r2 == 0) {
        // 0x08000DE8: addiu       $t8, $zero, 0x3E
        ctx->r24 = ADD32(0, 0X3E);
            goto L_08000E0C;
    }
    // 0x08000DE8: addiu       $t8, $zero, 0x3E
    ctx->r24 = ADD32(0, 0X3E);
    // 0x08000DEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DF0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000DF4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000DF8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000DFC: jalr        $t9
    // 0x08000E00: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08000E00: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_56:
    // 0x08000E04: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000E08: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000E0C:
    // 0x08000E0C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E10: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000E14: jalr        $t9
    // 0x08000E18: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08000E18: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    after_57:
    // 0x08000E1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E20: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000E24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000E28: jalr        $t9
    // 0x08000E2C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08000E2C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_58:
    // 0x08000E30: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08000E34: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
L_08000E38:
    // 0x08000E38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E3C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000E40: jalr        $t9
    // 0x08000E44: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08000E44: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_59:
    // 0x08000E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E4C: bnel        $v0, $at, L_08000E8C
    if (ctx->r2 != ctx->r1) {
        // 0x08000E50: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_08000E8C;
    }
    goto skip_6;
    // 0x08000E50: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    skip_6:
    // 0x08000E54: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000E58: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08000E5C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E60: lw          $t0, 0x60($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X60);
    // 0x08000E64: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000E68: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000E6C: sw          $t1, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r9;
    // 0x08000E70: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000E74: beql        $a0, $zero, L_08000E8C
    if (ctx->r4 == 0) {
        // 0x08000E78: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_08000E8C;
    }
    goto skip_7;
    // 0x08000E78: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    skip_7:
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08000E80: nop

    after_60:
    // 0x08000E84: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x08000E88: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
L_08000E8C:
    // 0x08000E8C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x08000E90: lhu         $t3, 0x8A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X8A);
    // 0x08000E94: slti        $at, $t3, 0x64
    ctx->r1 = SIGNED(ctx->r11) < 0X64 ? 1 : 0;
    // 0x08000E98: bnel        $at, $zero, L_08001300
    if (ctx->r1 != 0) {
        // 0x08000E9C: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_08001300;
    }
    goto skip_8;
    // 0x08000E9C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_8:
    // 0x08000EA0: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08000EA4: b           L_080012FC
    // 0x08000EA8: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080012FC;
    // 0x08000EA8: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000EAC:
    // 0x08000EAC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08000EB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000EB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EB8: lhu         $t6, 0x8A($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X8A);
    // 0x08000EBC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000EC0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x08000EC4: bne         $t6, $at, L_08000FE4
    if (ctx->r14 != ctx->r1) {
        // 0x08000EC8: nop
    
            goto L_08000FE4;
    }
    // 0x08000EC8: nop

    // 0x08000ECC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08000ED0: jalr        $t9
    // 0x08000ED4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08000ED4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_61:
    // 0x08000ED8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EDC: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000EE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000EE4: jalr        $t9
    // 0x08000EE8: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08000EE8: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    after_62:
    // 0x08000EEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EF0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000EF4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000EF8: lui         $a1, 0xC286
    ctx->r5 = S32(0XC286 << 16);
    // 0x08000EFC: lui         $a2, 0x41B8
    ctx->r6 = S32(0X41B8 << 16);
    // 0x08000F00: jalr        $t9
    // 0x08000F04: lui         $a3, 0xC278
    ctx->r7 = S32(0XC278 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08000F04: lui         $a3, 0xC278
    ctx->r7 = S32(0XC278 << 16);
    after_63:
    // 0x08000F08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F0C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000F10: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000F14: lui         $a1, 0xC374
    ctx->r5 = S32(0XC374 << 16);
    // 0x08000F18: lui         $a2, 0xC1A8
    ctx->r6 = S32(0XC1A8 << 16);
    // 0x08000F1C: jalr        $t9
    // 0x08000F20: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08000F20: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_64:
    // 0x08000F24: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x08000F28: lui         $at, 0xC2E4
    ctx->r1 = S32(0XC2E4 << 16);
    // 0x08000F2C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000F30: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x08000F34: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000F38: lui         $at, 0xC23C
    ctx->r1 = S32(0XC23C << 16);
    // 0x08000F3C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000F40: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x08000F44: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x08000F48: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    // 0x08000F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F50: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x08000F54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F58: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x08000F5C: sh          $t0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r8;
    // 0x08000F60: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x08000F64: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x08000F68: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08000F6C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x08000F70: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x08000F74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000F78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08000F7C: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x08000F80: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000F84: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08000F88: jalr        $t9
    // 0x08000F8C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08000F8C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_65:
    // 0x08000F90: beq         $v0, $zero, L_08000FB8
    if (ctx->r2 == 0) {
        // 0x08000F94: addiu       $t3, $zero, 0x3E
        ctx->r11 = ADD32(0, 0X3E);
            goto L_08000FB8;
    }
    // 0x08000F94: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x08000F98: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F9C: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08000FA0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000FA4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000FA8: jalr        $t9
    // 0x08000FAC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08000FAC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_66:
    // 0x08000FB0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000FB4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000FB8:
    // 0x08000FB8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000FBC: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000FC0: jalr        $t9
    // 0x08000FC4: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08000FC4: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    after_67:
    // 0x08000FC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FCC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000FD0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000FD4: jalr        $t9
    // 0x08000FD8: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08000FD8: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_68:
    // 0x08000FDC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08000FE0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
L_08000FE4:
    // 0x08000FE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FE8: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000FEC: jalr        $t9
    // 0x08000FF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08000FF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_69:
    // 0x08000FF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000FF8: bne         $v0, $at, L_080012FC
    if (ctx->r2 != ctx->r1) {
        // 0x08000FFC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08000FFC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001000: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001004: jalr        $t9
    // 0x08001008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08001008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_70:
    // 0x0800100C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x08001010: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x08001014: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08001018: b           L_080012FC
    // 0x0800101C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080012FC;
    // 0x0800101C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08001020:
    // 0x08001020: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08001024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001028: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800102C: lhu         $t6, 0x8A($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X8A);
    // 0x08001030: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001034: addiu       $a0, $zero, 0x163
    ctx->r4 = ADD32(0, 0X163);
    // 0x08001038: bne         $t6, $at, L_080010B4
    if (ctx->r14 != ctx->r1) {
        // 0x0800103C: nop
    
            goto L_080010B4;
    }
    // 0x0800103C: nop

    // 0x08001040: jalr        $t9
    // 0x08001044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08001044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_71:
    // 0x08001048: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800104C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001050: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001054: jalr        $t9
    // 0x08001058: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08001058: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    after_72:
    // 0x0800105C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x08001060: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001064: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08001068: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800106C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1FB4) << 16);
    // 0x08001070: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08001074: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x08001078: addiu       $a1, $a1, 0x1FB4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1FB4));
    // 0x0800107C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08001080: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08001084: jalr        $t9
    // 0x08001088: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08001088: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_73:
    // 0x0800108C: beq         $v0, $zero, L_080010B4
    if (ctx->r2 == 0) {
        // 0x08001090: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_080010B4;
    }
    // 0x08001090: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08001094: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001098: addiu       $t7, $zero, 0x3E
    ctx->r15 = ADD32(0, 0X3E);
    // 0x0800109C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080010A0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080010A4: jalr        $t9
    // 0x080010A8: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x080010A8: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_74:
    // 0x080010AC: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x080010B0: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_080010B4:
    // 0x080010B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010B8: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080010BC: jalr        $t9
    // 0x080010C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x080010C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_75:
    // 0x080010C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080010C8: bne         $v0, $at, L_080012FC
    if (ctx->r2 != ctx->r1) {
        // 0x080010CC: lw          $t1, 0x40($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X40);
            goto L_080012FC;
    }
    // 0x080010CC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x080010D0: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    // 0x080010D4: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x080010D8: b           L_080012FC
    // 0x080010DC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_080012FC;
    // 0x080010DC: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_080010E0:
    // 0x080010E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010E4: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x080010E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080010EC: jalr        $t9
    // 0x080010F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x080010F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_76:
    // 0x080010F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080010F8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080010FC: jalr        $t9
    // 0x08001100: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08001100: nop

    after_77:
    // 0x08001104: bne         $v0, $zero, L_080012FC
    if (ctx->r2 != 0) {
        // 0x08001108: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080012FC;
    }
    // 0x08001108: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800110C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08001110: jalr        $t9
    // 0x08001114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08001114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_78:
    // 0x08001118: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800111C: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x08001120: jalr        $t9
    // 0x08001124: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08001124: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_79:
    // 0x08001128: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x0800112C: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x08001130: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x08001134: b           L_080012FC
    // 0x08001138: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_080012FC;
    // 0x08001138: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_0800113C:
    // 0x0800113C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x08001140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001144: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001148: lhu         $t6, 0x8A($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X8A);
    // 0x0800114C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001150: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08001154: bne         $t6, $at, L_080011EC
    if (ctx->r14 != ctx->r1) {
        // 0x08001158: nop
    
            goto L_080011EC;
    }
    // 0x08001158: nop

    // 0x0800115C: jalr        $t9
    // 0x08001160: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08001160: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_80:
    // 0x08001164: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x08001168: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800116C: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08001170: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001174: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x08001178: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x0800117C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08001180: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08001184: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x08001188: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x0800118C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08001190: jalr        $t9
    // 0x08001194: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x08001194: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_81:
    // 0x08001198: beq         $v0, $zero, L_080011C0
    if (ctx->r2 == 0) {
        // 0x0800119C: addiu       $t8, $zero, 0x3E
        ctx->r24 = ADD32(0, 0X3E);
            goto L_080011C0;
    }
    // 0x0800119C: addiu       $t8, $zero, 0x3E
    ctx->r24 = ADD32(0, 0X3E);
    // 0x080011A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011A4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080011A8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080011AC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080011B0: jalr        $t9
    // 0x080011B4: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080011B4: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_82:
    // 0x080011B8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080011BC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080011C0:
    // 0x080011C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080011C4: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080011C8: jalr        $t9
    // 0x080011CC: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x080011CC: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    after_83:
    // 0x080011D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011D4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080011D8: jalr        $t9
    // 0x080011DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x080011DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_84:
    // 0x080011E0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x080011E4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x080011E8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
L_080011EC:
    // 0x080011EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011F0: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080011F4: jalr        $t9
    // 0x080011F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x080011F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_85:
    // 0x080011FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001200: bne         $v0, $at, L_080012FC
    if (ctx->r2 != ctx->r1) {
        // 0x08001204: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_080012FC;
    }
    // 0x08001204: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001208: sh          $zero, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = 0;
    // 0x0800120C: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x08001210: b           L_080012FC
    // 0x08001214: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_080012FC;
    // 0x08001214: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08001218:
    // 0x08001218: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x0800121C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001220: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001224: lhu         $t2, 0x8A($t3)
    ctx->r10 = MEM_HU(ctx->r11, 0X8A);
    // 0x08001228: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800122C: bne         $t2, $at, L_080012D4
    if (ctx->r10 != ctx->r1) {
        // 0x08001230: nop
    
            goto L_080012D4;
    }
    // 0x08001230: nop

    // 0x08001234: jalr        $t9
    // 0x08001238: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08001238: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_86:
    // 0x0800123C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001240: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001244: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001248: jalr        $t9
    // 0x0800124C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x0800124C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_87:
    // 0x08001250: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x08001254: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001258: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800125C: lhu         $t4, 0xEC($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0XEC);
    // 0x08001260: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001264: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001268: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x0800126C: bgez        $t4, L_08001280
    if (SIGNED(ctx->r12) >= 0) {
        // 0x08001270: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_08001280;
    }
    // 0x08001270: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001274: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001278: nop

    // 0x0800127C: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_08001280:
    // 0x08001280: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08001284: jalr        $t9
    // 0x08001288: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x08001288: nop

    after_88:
    // 0x0800128C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001290: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001294: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001298: lui         $a1, 0xC130
    ctx->r5 = S32(0XC130 << 16);
    // 0x0800129C: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x080012A0: jalr        $t9
    // 0x080012A4: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x080012A4: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    after_89:
    // 0x080012A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012AC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080012B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080012B4: lui         $a1, 0xC26C
    ctx->r5 = S32(0XC26C << 16);
    // 0x080012B8: lui         $a2, 0x41D0
    ctx->r6 = S32(0X41D0 << 16);
    // 0x080012BC: jalr        $t9
    // 0x080012C0: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x080012C0: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    after_90:
    // 0x080012C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080012C8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080012CC: jalr        $t9
    // 0x080012D0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x080012D0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_91:
L_080012D4:
    // 0x080012D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012D8: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080012DC: jalr        $t9
    // 0x080012E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x080012E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_92:
    // 0x080012E4: bne         $v0, $zero, L_080012FC
    if (ctx->r2 != 0) {
        // 0x080012E8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(53, 0X1AA8) << 16);
            goto L_080012FC;
    }
    // 0x080012E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X1AA8) << 16);
    // 0x080012EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012F4: jalr        $t9
    // 0x080012F8: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1AA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x080012F8: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1AA8));
    after_93:
L_080012FC:
    // 0x080012FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_08001300:
    // 0x08001300: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001304: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001308: beql        $a0, $zero, L_0800131C
    if (ctx->r4 == 0) {
        // 0x0800130C: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_0800131C;
    }
    goto skip_9;
    // 0x0800130C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    skip_9:
    // 0x08001310: jalr        $t9
    // 0x08001314: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_94;
    // 0x08001314: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_94:
    // 0x08001318: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_0800131C:
    // 0x0800131C: lhu         $t7, 0x8A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8A);
    // 0x08001320: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08001324: sh          $t8, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = ctx->r24;
    // 0x08001328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800132C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001330: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001334: jr          $ra
    // 0x08001338: nop

    TRACE_RETURN()
    return;
    // 0x08001338: nop

;}
RECOMP_FUNC void func_080020CC_7236EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080020D0: jr          $ra
    // 0x080020D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080020D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002330_723950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002330: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002334: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x08002338: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x0800233C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x08002340: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x08002344: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x08002348: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x0800234C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08002350: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08002354: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08002358: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x0800235C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08002360: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08002364: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2ED0) << 16);
    // 0x08002368: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x0800236C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x08002370: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x08002374: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x08002378: ldc1        $f20, 0x2ED0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2ED0));
    // 0x0800237C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x08002380: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x08002384: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x08002388: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
L_0800238C:
    // 0x0800238C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08002390: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002394: add.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = ctx->f6.d + ctx->f20.d;
    // 0x08002398: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800239C: jalr        $s1
    // 0x080023A0: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x080023A0: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    after_0:
    // 0x080023A4: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x080023A8: mflo        $t6
    ctx->r14 = lo;
    // 0x080023AC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x080023B0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080023B4: bne         $s2, $zero, L_080023C0
    if (ctx->r18 != 0) {
        // 0x080023B8: nop
    
            goto L_080023C0;
    }
    // 0x080023B8: nop

    // 0x080023BC: break       7
    do_break(134226876);
L_080023C0:
    // 0x080023C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080023C4: bne         $s2, $at, L_080023D8
    if (ctx->r18 != ctx->r1) {
        // 0x080023C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080023D8;
    }
    // 0x080023C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080023CC: bne         $v0, $at, L_080023D8
    if (ctx->r2 != ctx->r1) {
        // 0x080023D0: nop
    
            goto L_080023D8;
    }
    // 0x080023D0: nop

    // 0x080023D4: break       6
    do_break(134226900);
L_080023D8:
    // 0x080023D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080023DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080023E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080023E4: jalr        $s1
    // 0x080023E8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_1;
    // 0x080023E8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x080023EC: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x080023F0: mflo        $t7
    ctx->r15 = lo;
    // 0x080023F4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x080023F8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080023FC: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08002400: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002404: bne         $s2, $zero, L_08002410
    if (ctx->r18 != 0) {
        // 0x08002408: nop
    
            goto L_08002410;
    }
    // 0x08002408: nop

    // 0x0800240C: break       7
    do_break(134226956);
L_08002410:
    // 0x08002410: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002414: bne         $s2, $at, L_08002428
    if (ctx->r18 != ctx->r1) {
        // 0x08002418: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002428;
    }
    // 0x08002418: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800241C: bne         $v0, $at, L_08002428
    if (ctx->r2 != ctx->r1) {
        // 0x08002420: nop
    
            goto L_08002428;
    }
    // 0x08002420: nop

    // 0x08002424: break       6
    do_break(134226980);
L_08002428:
    // 0x08002428: c.le.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl <= ctx->f4.fl;
    // 0x0800242C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08002430: bc1f        L_080024D0
    if (!c1cs) {
        // 0x08002434: swc1        $f18, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
            goto L_080024D0;
    }
    // 0x08002434: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x08002438: jalr        $s1
    // 0x0800243C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x0800243C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_2:
    // 0x08002440: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x08002444: mflo        $t8
    ctx->r24 = lo;
    // 0x08002448: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x0800244C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x08002450: bne         $s2, $zero, L_0800245C
    if (ctx->r18 != 0) {
        // 0x08002454: nop
    
            goto L_0800245C;
    }
    // 0x08002454: nop

    // 0x08002458: break       7
    do_break(134227032);
L_0800245C:
    // 0x0800245C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002460: bne         $s2, $at, L_08002474
    if (ctx->r18 != ctx->r1) {
        // 0x08002464: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002474;
    }
    // 0x08002464: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002468: bne         $v0, $at, L_08002474
    if (ctx->r2 != ctx->r1) {
        // 0x0800246C: nop
    
            goto L_08002474;
    }
    // 0x0800246C: nop

    // 0x08002470: break       6
    do_break(134227056);
L_08002474:
    // 0x08002474: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002478: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x0800247C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002480: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x08002484: lwc1        $f18, 0xC($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XC);
    // 0x08002488: jalr        $s1
    // 0x0800248C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x0800248C: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x08002490: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x08002494: mflo        $t9
    ctx->r25 = lo;
    // 0x08002498: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x0800249C: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x080024A0: bne         $s2, $zero, L_080024AC
    if (ctx->r18 != 0) {
        // 0x080024A4: nop
    
            goto L_080024AC;
    }
    // 0x080024A4: nop

    // 0x080024A8: break       7
    do_break(134227112);
L_080024AC:
    // 0x080024AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080024B0: bne         $s2, $at, L_080024C4
    if (ctx->r18 != ctx->r1) {
        // 0x080024B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080024C4;
    }
    // 0x080024B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080024B8: bne         $v0, $at, L_080024C4
    if (ctx->r2 != ctx->r1) {
        // 0x080024BC: nop
    
            goto L_080024C4;
    }
    // 0x080024BC: nop

    // 0x080024C0: break       6
    do_break(134227136);
L_080024C4:
    // 0x080024C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080024C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080024CC: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
L_080024D0:
    // 0x080024D0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x080024D4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x080024D8: beql        $s0, $zero, L_080024EC
    if (ctx->r16 == 0) {
        // 0x080024DC: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_080024EC;
    }
    goto skip_0;
    // 0x080024DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x080024E0: bnel        $s4, $s5, L_0800238C
    if (ctx->r20 != ctx->r21) {
        // 0x080024E4: lwc1        $f4, 0xC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
            goto L_0800238C;
    }
    goto skip_1;
    // 0x080024E4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x080024E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_080024EC:
    // 0x080024EC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x080024F0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x080024F4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080024F8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080024FC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x08002500: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x08002504: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x08002508: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x0800250C: jr          $ra
    // 0x08002510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08002510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08001D50_723370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001D54: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001D58: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001D5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001D60: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001D64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D68: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08001D6C: addiu       $t7, $zero, 0x10D
    ctx->r15 = ADD32(0, 0X10D);
    // 0x08001D70: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08001D74: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001D78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001D7C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001D80: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001D84: jalr        $t9
    // 0x08001D88: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D88: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    after_0:
    // 0x08001D8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D90: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08001D94: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001D98: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08001D9C: jalr        $t9
    // 0x08001DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08001DA4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001DA8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001DAC: lbu         $t8, 0xD8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001DB0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DB4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001DB8: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x08001DBC: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001DC8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08001DCC: jalr        $t9
    // 0x08001DD0: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001DD0: sb          $t1, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r9;
    after_2:
    // 0x08001DD4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E8C) << 16);
    // 0x08001DD8: lwc1        $f0, 0x2E8C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E8C));
    // 0x08001DDC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E90) << 16);
    // 0x08001DE0: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x08001DE4: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001DE8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001DEC: lwc1        $f4, 0x2E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E90));
    // 0x08001DF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DF4: sb          $t2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r10;
    // 0x08001DF8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001DFC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x08001E00: swc1        $f4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f4.u32l;
    // 0x08001E04: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08001E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E0C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08001E10: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001E14: jalr        $t9
    // 0x08001E18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001E18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x08001E1C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001E20: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x08001E24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E28: sw          $t4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r12;
    // 0x08001E2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X1E54) << 16);
    // 0x08001E34: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08001E38: jalr        $t9
    // 0x08001E3C: addiu       $a0, $a0, 0x1E54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1E54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001E3C: addiu       $a0, $a0, 0x1E54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1E54));
    after_4:
    // 0x08001E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001E44: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001E48: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001E4C: jr          $ra
    // 0x08001E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000000_721620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000008: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000018: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800001C: jalr        $t9
    // 0x08000020: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000020: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_0:
    // 0x08000024: bne         $v0, $zero, L_08000044
    if (ctx->r2 != 0) {
        // 0x08000028: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_08000044;
    }
    // 0x08000028: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x0800002C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000030: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000034: jalr        $t9
    // 0x08000038: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000038: nop

    after_1:
    // 0x0800003C: b           L_0800015C
    // 0x08000040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800015C;
    // 0x08000040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000044:
    // 0x08000044: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08000048: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x0800004C: jalr        $v0
    // 0x08000050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08000050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000054: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000058: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x0800005C: jalr        $t9
    // 0x08000060: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000060: nop

    after_3:
    // 0x08000064: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000068: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x0800006C: jalr        $t9
    // 0x08000070: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000070: nop

    after_4:
    // 0x08000074: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000078: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800007C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000080: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000084: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000088: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800008C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x08000090: jalr        $t9
    // 0x08000094: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000094: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
    // 0x08000098: bne         $v0, $zero, L_080000B8
    if (ctx->r2 != 0) {
        // 0x0800009C: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_080000B8;
    }
    // 0x0800009C: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x080000A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000A4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000A8: jalr        $t9
    // 0x080000AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000AC: nop

    after_6:
    // 0x080000B0: b           L_0800015C
    // 0x080000B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800015C;
    // 0x080000B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000B8:
    // 0x080000B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000BC: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080000C0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080000C4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080000C8: jalr        $t9
    // 0x080000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x080000D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000D4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080000D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080000DC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080000E0: jalr        $t9
    // 0x080000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x080000E8: lui         $at, 0xC254
    ctx->r1 = S32(0XC254 << 16);
    // 0x080000EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080000F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080000F4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080000F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080000FC: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x08000100: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000104: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08000108: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x0800010C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x08000110: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000114: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x08000118: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x0800011C: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(53, 0X16C) << 16);
    // 0x08000120: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000124: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x08000128: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800012C: addiu       $t2, $t2, 0x16C
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(53, 0X16C));
    // 0x08000130: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X293C) << 16);
    // 0x08000134: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x08000138: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x0800013C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000140: sw          $t0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r8;
    // 0x08000144: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08000148: sw          $t1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r9;
    // 0x0800014C: addiu       $a0, $a0, 0x293C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X293C));
    // 0x08000150: jalr        $t9
    // 0x08000154: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000154: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    after_9:
    // 0x08000158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800015C:
    // 0x0800015C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000164: jr          $ra
    // 0x08000168: nop

    TRACE_RETURN()
    return;
    // 0x08000168: nop

;}
RECOMP_FUNC void func_08000240_721860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000240: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000244: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x08000248: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x0800024C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000258: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x0800025C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08000260: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000264: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x08000268: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x0800026C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08000270: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000274: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08000278: sb          $t8, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r24;
    // 0x0800027C: lw          $t2, 0x84($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X84);
    // 0x08000280: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08000284: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08000288: sh          $zero, 0x14($t2)
    MEM_H(0X14, ctx->r10) = 0;
    // 0x0800028C: lw          $t3, 0x84($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X84);
    // 0x08000290: addiu       $t0, $t0, -0x39E4
    ctx->r8 = ADD32(ctx->r8, -0X39E4);
    // 0x08000294: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x08000298: sh          $zero, 0x18($t3)
    MEM_H(0X18, ctx->r11) = 0;
    // 0x0800029C: lw          $t4, 0x84($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X84);
    // 0x080002A0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x080002A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x080002A8: lwc1        $f0, 0x8($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X8);
    // 0x080002AC: swc1        $f0, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f0.u32l;
    // 0x080002B0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x080002B4: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x080002B8: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x080002BC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x080002C0: lwc1        $f0, 0x10($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X10);
    // 0x080002C4: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x080002C8: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x080002CC: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x080002D0: lw          $t2, 0x84($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X84);
    // 0x080002D4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x080002D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002DC: lhu         $v0, 0x16($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X16);
    // 0x080002E0: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x080002E4: sh          $v0, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r2;
    // 0x080002E8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x080002EC: sh          $v0, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r2;
    // 0x080002F0: jalr        $t9
    // 0x080002F4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002F4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_0:
    // 0x080002F8: beq         $v0, $zero, L_08000328
    if (ctx->r2 == 0) {
        // 0x080002FC: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08000328;
    }
    // 0x080002FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000300: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000304: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000308: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800030C: jalr        $t9
    // 0x08000310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000314: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000318: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800031C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X338) << 16);
    // 0x08000320: jalr        $t9
    // 0x08000324: addiu       $a0, $a0, 0x338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X338));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000324: addiu       $a0, $a0, 0x338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X338));
    after_2:
L_08000328:
    // 0x08000328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000330: jr          $ra
    // 0x08000334: nop

    TRACE_RETURN()
    return;
    // 0x08000334: nop

;}
RECOMP_FUNC void func_08002740_723D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002748: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800274C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08002750: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002754: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08002758: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x0800275C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002760: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x08002764: slti        $at, $v0, 0x301
    ctx->r1 = SIGNED(ctx->r2) < 0X301 ? 1 : 0;
    // 0x08002768: bne         $at, $zero, L_08002778
    if (ctx->r1 != 0) {
        // 0x0800276C: sh          $t8, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r24;
            goto L_08002778;
    }
    // 0x0800276C: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08002770: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08002774: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_08002778:
    // 0x08002778: bnel        $v0, $zero, L_080027A0
    if (ctx->r2 != 0) {
        // 0x0800277C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080027A0;
    }
    goto skip_0;
    // 0x0800277C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002780: jalr        $t9
    // 0x08002784: addiu       $a0, $zero, 0x273
    ctx->r4 = ADD32(0, 0X273);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002784: addiu       $a0, $zero, 0x273
    ctx->r4 = ADD32(0, 0X273);
    after_0:
    // 0x08002788: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800278C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002790: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X25A8) << 16);
    // 0x08002794: jalr        $t9
    // 0x08002798: addiu       $a0, $a0, 0x25A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X25A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002798: addiu       $a0, $a0, 0x25A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X25A8));
    after_1:
    // 0x0800279C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080027A0:
    // 0x080027A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080027A4: jr          $ra
    // 0x080027A8: nop

    TRACE_RETURN()
    return;
    // 0x080027A8: nop

;}
RECOMP_FUNC void func_0800266C_723C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800266C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002670: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002678: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x0800267C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002680: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002684: jalr        $t9
    // 0x08002688: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002688: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    after_0:
    // 0x0800268C: bne         $v0, $zero, L_080026A8
    if (ctx->r2 != 0) {
        // 0x08002690: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080026A8;
    }
    // 0x08002690: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002694: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08002698: jalr        $t9
    // 0x0800269C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800269C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x080026A0: beq         $v0, $zero, L_080026C4
    if (ctx->r2 == 0) {
        // 0x080026A4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_080026C4;
    }
    // 0x080026A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_080026A8:
    // 0x080026A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080026B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X2740) << 16);
    // 0x080026B4: jalr        $t9
    // 0x080026B8: addiu       $a0, $a0, 0x2740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2740));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080026B8: addiu       $a0, $a0, 0x2740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2740));
    after_2:
    // 0x080026BC: b           L_08002734
    // 0x080026C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002734;
    // 0x080026C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080026C4:
    // 0x080026C4: lui         $at, 0xC2CC
    ctx->r1 = S32(0XC2CC << 16);
    // 0x080026C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080026CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026D0: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080026D4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X27AC) << 16);
    // 0x080026D8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x080026DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x080026E0: addiu       $a1, $a1, 0x27AC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X27AC));
    // 0x080026E4: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x080026E8: lui         $a3, 0x42FA
    ctx->r7 = S32(0X42FA << 16);
    // 0x080026EC: jalr        $t9
    // 0x080026F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080026F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x080026F4: beq         $v0, $zero, L_0800271C
    if (ctx->r2 == 0) {
        // 0x080026F8: addiu       $t7, $zero, 0x3E
        ctx->r15 = ADD32(0, 0X3E);
            goto L_0800271C;
    }
    // 0x080026F8: addiu       $t7, $zero, 0x3E
    ctx->r15 = ADD32(0, 0X3E);
    // 0x080026FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002700: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08002704: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002708: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800270C: jalr        $t9
    // 0x08002710: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002710: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_4:
    // 0x08002714: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08002718: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800271C:
    // 0x0800271C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002720: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002724: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X2740) << 16);
    // 0x08002728: jalr        $t9
    // 0x0800272C: addiu       $a0, $a0, 0x2740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2740));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800272C: addiu       $a0, $a0, 0x2740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2740));
    after_5:
    // 0x08002730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002734:
    // 0x08002734: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002738: jr          $ra
    // 0x0800273C: nop

    TRACE_RETURN()
    return;
    // 0x0800273C: nop

;}
RECOMP_FUNC void func_080028D8_723EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080028DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080028E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080028E4: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x080028E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080028EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080028F0: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x080028F4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x080028F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080028FC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002900: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002904: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08002908: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x0800290C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08002910: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002914: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x08002918: nop

    // 0x0800291C: bc1fl       L_08002930
    if (!c1cs) {
        // 0x08002920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002930;
    }
    goto skip_0;
    // 0x08002920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002924: jalr        $t9
    // 0x08002928: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002928: nop

    after_0:
    // 0x0800292C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002930:
    // 0x08002930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002934: jr          $ra
    // 0x08002938: nop

    TRACE_RETURN()
    return;
    // 0x08002938: nop

;}
RECOMP_FUNC void func_080020D8_7236F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020D8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080020DC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x080020E0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x080020E4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x080020E8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x080020EC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x080020F0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x080020F4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x080020F8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x080020FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x08002100: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08002104: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08002108: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0800210C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08002110: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002114: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002118: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800211C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08002120: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002124: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x08002128: jalr        $t9
    // 0x0800212C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800212C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002130: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EC0) << 16);
    // 0x08002134: ldc1        $f22, 0x2EC0($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EC0));
    // 0x08002138: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x0800213C: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x08002140: addiu       $t8, $t8, 0xED0
    ctx->r24 = ADD32(ctx->r24, 0XED0);
    // 0x08002144: addiu       $v0, $v0, 0x6E54
    ctx->r2 = ADD32(ctx->r2, 0X6E54);
    // 0x08002148: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EC8) << 16);
    // 0x0800214C: lui         $s5, 0x8022
    ctx->r21 = S32(0X8022 << 16);
    // 0x08002150: addiu       $s5, $s5, -0x6D4C
    ctx->r21 = ADD32(ctx->r21, -0X6D4C);
    // 0x08002154: lwc1        $f20, 0x2EC8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EC8));
    // 0x08002158: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x0800215C: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x08002160: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x08002164: lui         $fp, 0x2000
    ctx->r30 = S32(0X2000 << 16);
    // 0x08002168: lui         $s7, 0x4000
    ctx->r23 = S32(0X4000 << 16);
    // 0x0800216C: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x08002170: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x08002174: ori         $s1, $zero, 0x8000
    ctx->r17 = 0 | 0X8000;
L_08002178:
    // 0x08002178: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x0800217C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x08002180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x08002184: jalr        $v0
    // 0x08002188: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002188: nop

    after_1:
    // 0x0800218C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002190: jalr        $s5
    // 0x08002194: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_2;
    // 0x08002194: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x08002198: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x0800219C: mflo        $t0
    ctx->r8 = lo;
    // 0x080021A0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x080021A4: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x080021A8: bne         $s4, $zero, L_080021B4
    if (ctx->r20 != 0) {
        // 0x080021AC: nop
    
            goto L_080021B4;
    }
    // 0x080021AC: nop

    // 0x080021B0: break       7
    do_break(134226352);
L_080021B4:
    // 0x080021B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080021B8: bne         $s4, $at, L_080021CC
    if (ctx->r20 != ctx->r1) {
        // 0x080021BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080021CC;
    }
    // 0x080021BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080021C0: bne         $v0, $at, L_080021CC
    if (ctx->r2 != ctx->r1) {
        // 0x080021C4: nop
    
            goto L_080021CC;
    }
    // 0x080021C4: nop

    // 0x080021C8: break       6
    do_break(134226376);
L_080021CC:
    // 0x080021CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080021D0: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x080021D4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x080021D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080021DC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080021E0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x080021E4: lwc1        $f16, 0xC($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XC);
    // 0x080021E8: mul.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x080021EC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080021F0: add.d       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f18.d + ctx->f8.d;
    // 0x080021F4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080021F8: jalr        $s5
    // 0x080021FC: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_3;
    // 0x080021FC: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x08002200: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x08002204: mflo        $t1
    ctx->r9 = lo;
    // 0x08002208: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x0800220C: lwc1        $f18, 0x10($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X10);
    // 0x08002210: sh          $s1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r17;
    // 0x08002214: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002218: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x0800221C: sh          $s1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r17;
    // 0x08002220: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002224: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002228: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x0800222C: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x08002230: sb          $s6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r22;
    // 0x08002234: bne         $s4, $zero, L_08002240
    if (ctx->r20 != 0) {
        // 0x08002238: nop
    
            goto L_08002240;
    }
    // 0x08002238: nop

    // 0x0800223C: break       7
    do_break(134226492);
L_08002240:
    // 0x08002240: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08002244: bne         $s4, $at, L_08002258
    if (ctx->r20 != ctx->r1) {
        // 0x08002248: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08002258;
    }
    // 0x08002248: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800224C: bne         $v0, $at, L_08002258
    if (ctx->r2 != ctx->r1) {
        // 0x08002250: nop
    
            goto L_08002258;
    }
    // 0x08002250: nop

    // 0x08002254: break       6
    do_break(134226516);
L_08002258:
    // 0x08002258: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x0800225C: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x08002260: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x08002264: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08002268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800226C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08002270: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002274: jalr        $t9
    // 0x08002278: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002278: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x0800227C: or          $t3, $v0, $s7
    ctx->r11 = ctx->r2 | ctx->r23;
    // 0x08002280: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x08002284: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08002288: or          $t4, $t3, $fp
    ctx->r12 = ctx->r11 | ctx->r30;
    // 0x0800228C: bne         $s2, $at, L_08002178
    if (ctx->r18 != ctx->r1) {
        // 0x08002290: sw          $t4, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r12;
            goto L_08002178;
    }
    // 0x08002290: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x08002294: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002298: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x0800229C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080022A0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080022A4: jalr        $t9
    // 0x080022A8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080022A8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_5:
    // 0x080022AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022B0: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080022B4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080022B8: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080022BC: jalr        $t9
    // 0x080022C0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080022C0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    after_6:
    // 0x080022C4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080022C8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080022CC: lbu         $t5, 0xD8($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XD8);
    // 0x080022D0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x080022D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022DC: sb          $t5, 0x74($t6)
    MEM_B(0X74, ctx->r14) = ctx->r13;
    // 0x080022E0: lbu         $t7, 0xD8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XD8);
    // 0x080022E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X2330) << 16);
    // 0x080022E8: addiu       $a0, $a0, 0x2330
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X2330));
    // 0x080022EC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080022F0: jalr        $t9
    // 0x080022F4: sb          $t8, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080022F4: sb          $t8, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r24;
    after_7:
    // 0x080022F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x080022FC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x08002300: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08002304: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08002308: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x0800230C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x08002310: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x08002314: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x08002318: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x0800231C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x08002320: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x08002324: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x08002328: jr          $ra
    // 0x0800232C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x0800232C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0800133C_72295C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800133C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001340: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001344: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001348: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x0800134C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001350: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08001354: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08001358: lw          $t7, 0x18($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X18);
    // 0x0800135C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x08001360: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x08001364: sltiu       $at, $t8, 0x13
    ctx->r1 = ctx->r24 < 0X13 ? 1 : 0;
    // 0x08001368: beq         $at, $zero, L_08001A68
    if (ctx->r1 == 0) {
        // 0x0800136C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_08001A68;
    }
    // 0x0800136C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x08001370: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E40) << 16);
    // 0x08001374: addu        $at, $at, $t8
    gpr jr_addend_0800137C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08001378: lw          $t8, 0x2E40($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E40));
    // 0x0800137C: jr          $t8
    // 0x08001380: nop

    switch (jr_addend_0800137C >> 2) {
        case 0: goto L_08001384; break;
        case 1: goto L_08001A68; break;
        case 2: goto L_080014CC; break;
        case 3: goto L_0800180C; break;
        case 4: goto L_08001A68; break;
        case 5: goto L_08001A68; break;
        case 6: goto L_08001A68; break;
        case 7: goto L_08001A68; break;
        case 8: goto L_08001A68; break;
        case 9: goto L_08001A68; break;
        case 10: goto L_08001A68; break;
        case 11: goto L_08001A68; break;
        case 12: goto L_08001868; break;
        case 13: goto L_08001468; break;
        case 14: goto L_0800178C; break;
        case 15: goto L_080017F0; break;
        case 16: goto L_08001A68; break;
        case 17: goto L_08001A68; break;
        case 18: goto L_08001984; break;
        default: switch_error(__func__, 0x0800137C, 0x08002E40);
    }
    // 0x08001380: nop

L_08001384:
    // 0x08001384: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800138C: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    // 0x08001390: lhu         $v0, 0x8A($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X8A);
    // 0x08001394: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001398: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800139C: bnel        $v0, $at, L_0800142C
    if (ctx->r2 != ctx->r1) {
        // 0x080013A0: slti        $at, $v0, 0x1E
        ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
            goto L_0800142C;
    }
    goto skip_0;
    // 0x080013A0: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    skip_0:
    // 0x080013A4: jalr        $t9
    // 0x080013A8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013A8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_0:
    // 0x080013AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013B0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080013B4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080013B8: jalr        $t9
    // 0x080013BC: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013BC: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    after_1:
    // 0x080013C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013C4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080013C8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080013CC: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x080013D0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x080013D4: jalr        $t9
    // 0x080013D8: lui         $a3, 0xC2A6
    ctx->r7 = S32(0XC2A6 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013D8: lui         $a3, 0xC2A6
    ctx->r7 = S32(0XC2A6 << 16);
    after_2:
    // 0x080013DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080013E0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080013E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080013E8: lui         $a1, 0xC2A8
    ctx->r5 = S32(0XC2A8 << 16);
    // 0x080013EC: lui         $a2, 0x41D0
    ctx->r6 = S32(0X41D0 << 16);
    // 0x080013F0: jalr        $t9
    // 0x080013F4: lui         $a3, 0xC244
    ctx->r7 = S32(0XC244 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080013F4: lui         $a3, 0xC244
    ctx->r7 = S32(0XC244 << 16);
    after_3:
    // 0x080013F8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080013FC: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001400: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001404: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001408: jalr        $t9
    // 0x0800140C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800140C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08001410: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001414: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001418: jalr        $t9
    // 0x0800141C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800141C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x08001420: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001424: lhu         $v0, 0x8A($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X8A);
    // 0x08001428: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_0800142C:
    // 0x0800142C: bne         $at, $zero, L_08001A68
    if (ctx->r1 != 0) {
        // 0x08001430: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08001A68;
    }
    // 0x08001430: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001434: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001438: jalr        $t9
    // 0x0800143C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800143C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x08001440: bne         $v0, $zero, L_08001A68
    if (ctx->r2 != 0) {
        // 0x08001444: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001A68;
    }
    // 0x08001444: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001448: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800144C: jalr        $t9
    // 0x08001450: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001450: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_7:
    // 0x08001454: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x08001458: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x0800145C: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    // 0x08001460: b           L_08001A68
    // 0x08001464: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001A68;
    // 0x08001464: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08001468:
    // 0x08001468: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800146C: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x08001470: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001474: jalr        $v0
    // 0x08001478: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08001478: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_8:
    // 0x0800147C: bne         $v0, $zero, L_08001490
    if (ctx->r2 != 0) {
        // 0x08001480: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_08001490;
    }
    // 0x08001480: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001484: jalr        $t9
    // 0x08001488: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001488: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_9:
    // 0x0800148C: beq         $v0, $zero, L_080014B8
    if (ctx->r2 == 0) {
        // 0x08001490: lui         $at, 0xC2D0
        ctx->r1 = S32(0XC2D0 << 16);
            goto L_080014B8;
    }
L_08001490:
    // 0x08001490: lui         $at, 0xC2D0
    ctx->r1 = S32(0XC2D0 << 16);
    // 0x08001494: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001498: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x0800149C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x080014A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080014A4: lui         $at, 0xC254
    ctx->r1 = S32(0XC254 << 16);
    // 0x080014A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080014AC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x080014B0: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080014B4: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
L_080014B8:
    // 0x080014B8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x080014BC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x080014C0: sh          $zero, 0x8A($t3)
    MEM_H(0X8A, ctx->r11) = 0;
    // 0x080014C4: b           L_08001A68
    // 0x080014C8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08001A68;
    // 0x080014C8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_080014CC:
    // 0x080014CC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x080014D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080014D4: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x080014D8: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x080014DC: bnel        $v0, $at, L_08001540
    if (ctx->r2 != ctx->r1) {
        // 0x080014E0: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_08001540;
    }
    goto skip_1;
    // 0x080014E0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_1:
    // 0x080014E4: lw          $t6, 0x60($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X60);
    // 0x080014E8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080014EC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080014F0: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x080014F4: jalr        $t9
    // 0x080014F8: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080014F8: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    after_10:
    // 0x080014FC: beq         $v0, $zero, L_08001524
    if (ctx->r2 == 0) {
        // 0x08001500: addiu       $a1, $zero, 0x69
        ctx->r5 = ADD32(0, 0X69);
            goto L_08001524;
    }
    // 0x08001500: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    // 0x08001504: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001508: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x0800150C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001510: jalr        $t9
    // 0x08001514: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001514: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    after_11:
    // 0x08001518: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x0800151C: b           L_0800153C
    // 0x08001520: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
        goto L_0800153C;
    // 0x08001520: lhu         $v0, 0x8A($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X8A);
L_08001524:
    // 0x08001524: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001528: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x0800152C: jalr        $t9
    // 0x08001530: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001530: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_12:
    // 0x08001534: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001538: lhu         $v0, 0x8A($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X8A);
L_0800153C:
    // 0x0800153C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_08001540:
    // 0x08001540: bne         $at, $zero, L_08001A68
    if (ctx->r1 != 0) {
        // 0x08001544: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001A68;
    }
    // 0x08001544: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001548: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800154C: jalr        $t9
    // 0x08001550: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001550: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_13:
    // 0x08001554: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001558: bne         $v0, $at, L_08001A68
    if (ctx->r2 != ctx->r1) {
        // 0x0800155C: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_08001A68;
    }
    // 0x0800155C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08001560: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x08001564: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001568: lui         $t3, 0x8002
    ctx->r11 = S32(0X8002 << 16);
    // 0x0800156C: lwc1        $f10, 0x10($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X10);
    // 0x08001570: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x08001574: addiu       $t3, $t3, 0x40DC
    ctx->r11 = ADD32(ctx->r11, 0X40DC);
    // 0x08001578: addiu       $v0, $v0, 0x410
    ctx->r2 = ADD32(ctx->r2, 0X410);
    // 0x0800157C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x08001580: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x08001584: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x08001588: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x0800158C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001590: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x08001594: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08001598: jalr        $v0
    // 0x0800159C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x0800159C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x080015A0: beq         $v0, $zero, L_080015C8
    if (ctx->r2 == 0) {
        // 0x080015A4: addiu       $t4, $zero, 0x3E
        ctx->r12 = ADD32(0, 0X3E);
            goto L_080015C8;
    }
    // 0x080015A4: addiu       $t4, $zero, 0x3E
    ctx->r12 = ADD32(0, 0X3E);
    // 0x080015A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015AC: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x080015B0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080015B4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080015B8: jalr        $t9
    // 0x080015BC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080015BC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_15:
    // 0x080015C0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080015C4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080015C8:
    // 0x080015C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080015CC: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080015D0: jalr        $t9
    // 0x080015D4: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080015D4: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    after_16:
    // 0x080015D8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x080015DC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080015E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1FB4) << 16);
    // 0x080015E4: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x080015E8: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x080015EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080015F0: addiu       $a1, $a1, 0x1FB4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1FB4));
    // 0x080015F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x080015F8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x080015FC: jalr        $t9
    // 0x08001600: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001600: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_17:
    // 0x08001604: beq         $v0, $zero, L_0800162C
    if (ctx->r2 == 0) {
        // 0x08001608: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_0800162C;
    }
    // 0x08001608: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0800160C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001610: addiu       $t6, $zero, 0x3E
    ctx->r14 = ADD32(0, 0X3E);
    // 0x08001614: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001618: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800161C: jalr        $t9
    // 0x08001620: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001620: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_18:
    // 0x08001624: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x08001628: sw          $v0, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r2;
L_0800162C:
    // 0x0800162C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001630: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    // 0x08001634: jalr        $t9
    // 0x08001638: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001638: nop

    after_19:
    // 0x0800163C: beq         $v0, $zero, L_08001658
    if (ctx->r2 == 0) {
        // 0x08001640: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001658;
    }
    // 0x08001640: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001644: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001648: jalr        $t9
    // 0x0800164C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800164C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x08001650: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x08001654: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08001658:
    // 0x08001658: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800165C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x08001660: jalr        $t9
    // 0x08001664: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001664: nop

    after_21:
    // 0x08001668: beq         $v0, $zero, L_080016F8
    if (ctx->r2 == 0) {
        // 0x0800166C: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_080016F8;
    }
    // 0x0800166C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001670: jalr        $t9
    // 0x08001674: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001674: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_22:
    // 0x08001678: bne         $v0, $zero, L_080016F8
    if (ctx->r2 != 0) {
        // 0x0800167C: lui         $a1, 0x4120
        ctx->r5 = S32(0X4120 << 16);
            goto L_080016F8;
    }
    // 0x0800167C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x08001680: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001684: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001688: jalr        $t9
    // 0x0800168C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800168C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_23:
    // 0x08001690: lui         $at, 0xC28A
    ctx->r1 = S32(0XC28A << 16);
    // 0x08001694: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001698: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800169C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080016A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x080016A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080016A8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080016AC: jalr        $t9
    // 0x080016B0: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080016B0: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    after_24:
    // 0x080016B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016B8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080016BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080016C0: lui         $a1, 0xC2F4
    ctx->r5 = S32(0XC2F4 << 16);
    // 0x080016C4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x080016C8: jalr        $t9
    // 0x080016CC: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080016CC: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    after_25:
    // 0x080016D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016D4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080016D8: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x080016DC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080016E0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080016E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080016E8: jalr        $t9
    // 0x080016EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080016EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x080016F0: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x080016F4: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_080016F8:
    // 0x080016F8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080016FC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x08001700: jalr        $t9
    // 0x08001704: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001704: nop

    after_27:
    // 0x08001708: beq         $v0, $zero, L_08001770
    if (ctx->r2 == 0) {
        // 0x0800170C: lui         $a1, 0x4120
        ctx->r5 = S32(0X4120 << 16);
            goto L_08001770;
    }
    // 0x0800170C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x08001710: lui         $t2, 0x8001
    ctx->r10 = S32(0X8001 << 16);
    // 0x08001714: lui         $t3, 0x8001
    ctx->r11 = S32(0X8001 << 16);
    // 0x08001718: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800171C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001720: addiu       $t3, $t3, 0x2628
    ctx->r11 = ADD32(ctx->r11, 0X2628);
    // 0x08001724: addiu       $t2, $t2, 0x2518
    ctx->r10 = ADD32(ctx->r10, 0X2518);
    // 0x08001728: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x0800172C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x08001730: jalr        $t9
    // 0x08001734: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001734: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_28:
    // 0x08001738: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800173C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001740: lui         $a1, 0xC28A
    ctx->r5 = S32(0XC28A << 16);
    // 0x08001744: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x08001748: jalr        $t9
    // 0x0800174C: lui         $a3, 0xC28A
    ctx->r7 = S32(0XC28A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x0800174C: lui         $a3, 0xC28A
    ctx->r7 = S32(0XC28A << 16);
    after_29:
    // 0x08001750: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001754: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001758: lui         $a1, 0xC2F4
    ctx->r5 = S32(0XC2F4 << 16);
    // 0x0800175C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x08001760: jalr        $t9
    // 0x08001764: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001764: lui         $a3, 0xC230
    ctx->r7 = S32(0XC230 << 16);
    after_30:
    // 0x08001768: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x0800176C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08001770:
    // 0x08001770: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001774: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001778: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    // 0x0800177C: jalr        $t9
    // 0x08001780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x08001784: b           L_08001A6C
    // 0x08001788: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_08001A6C;
    // 0x08001788: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_0800178C:
    // 0x0800178C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x08001790: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08001794: addiu       $v0, $v0, 0x3DF0
    ctx->r2 = ADD32(ctx->r2, 0X3DF0);
    // 0x08001798: lbu         $t6, 0x7C($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X7C);
    // 0x0800179C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x080017A0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080017A4: beql        $t7, $zero, L_08001A6C
    if (ctx->r15 == 0) {
        // 0x080017A8: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_08001A6C;
    }
    goto skip_2;
    // 0x080017A8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_2:
    // 0x080017AC: jalr        $v0
    // 0x080017B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_32;
    // 0x080017B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_32:
    // 0x080017B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080017BC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080017C0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080017C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080017C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080017CC: jalr        $t9
    // 0x080017D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080017D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_33:
    // 0x080017D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080017D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080017DC: jalr        $t9
    // 0x080017E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x080017E0: nop

    after_34:
    // 0x080017E4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080017E8: b           L_08001A68
    // 0x080017EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08001A68;
    // 0x080017EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080017F0:
    // 0x080017F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080017F4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080017F8: jalr        $t9
    // 0x080017FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080017FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x08001800: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x08001804: b           L_08001A68
    // 0x08001808: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_08001A68;
    // 0x08001808: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_0800180C:
    // 0x0800180C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001810: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08001814: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08001818: jalr        $t9
    // 0x0800181C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x0800181C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x08001820: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001824: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001828: jalr        $t9
    // 0x0800182C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x0800182C: nop

    after_37:
    // 0x08001830: bne         $v0, $zero, L_08001A68
    if (ctx->r2 != 0) {
        // 0x08001834: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001A68;
    }
    // 0x08001834: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001838: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x0800183C: jalr        $t9
    // 0x08001840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_38:
    // 0x08001844: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001848: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x0800184C: jalr        $t9
    // 0x08001850: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001850: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_39:
    // 0x08001854: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x08001858: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x0800185C: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    // 0x08001860: b           L_08001A68
    // 0x08001864: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08001A68;
    // 0x08001864: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08001868:
    // 0x08001868: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x0800186C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001870: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001874: lhu         $t4, 0x8A($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X8A);
    // 0x08001878: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800187C: bne         $t4, $at, L_08001944
    if (ctx->r12 != ctx->r1) {
        // 0x08001880: nop
    
            goto L_08001944;
    }
    // 0x08001880: nop

    // 0x08001884: jalr        $t9
    // 0x08001888: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001888: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_40:
    // 0x0800188C: beq         $v0, $zero, L_080018C0
    if (ctx->r2 == 0) {
        // 0x08001890: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080018C0;
    }
    // 0x08001890: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001894: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001898: jalr        $t9
    // 0x0800189C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x0800189C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_41:
    // 0x080018A0: bne         $v0, $zero, L_080018C0
    if (ctx->r2 != 0) {
        // 0x080018A4: addiu       $a1, $zero, 0x6D
        ctx->r5 = ADD32(0, 0X6D);
            goto L_080018C0;
    }
    // 0x080018A4: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    // 0x080018A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018AC: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080018B0: jalr        $t9
    // 0x080018B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x080018B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_42:
    // 0x080018B8: b           L_080018D8
    // 0x080018BC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_080018D8;
    // 0x080018BC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_080018C0:
    // 0x080018C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018C4: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080018C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080018CC: jalr        $t9
    // 0x080018D0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x080018D0: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_43:
    // 0x080018D4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_080018D8:
    // 0x080018D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018DC: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080018E0: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080018E4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(53, 0X1D50) << 16);
    // 0x080018E8: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x080018EC: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x080018F0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x080018F4: addiu       $a1, $a1, 0x1D50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(53, 0X1D50));
    // 0x080018F8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x080018FC: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08001900: jalr        $t9
    // 0x08001904: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08001904: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_44:
    // 0x08001908: beq         $v0, $zero, L_08001930
    if (ctx->r2 == 0) {
        // 0x0800190C: addiu       $t6, $zero, 0x3E
        ctx->r14 = ADD32(0, 0X3E);
            goto L_08001930;
    }
    // 0x0800190C: addiu       $t6, $zero, 0x3E
    ctx->r14 = ADD32(0, 0X3E);
    // 0x08001910: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001914: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08001918: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800191C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001920: jalr        $t9
    // 0x08001924: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001924: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_45:
    // 0x08001928: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0800192C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001930:
    // 0x08001930: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001934: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001938: jalr        $t9
    // 0x0800193C: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x0800193C: addiu       $a0, $zero, 0x297
    ctx->r4 = ADD32(0, 0X297);
    after_46:
    // 0x08001940: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
L_08001944:
    // 0x08001944: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001948: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800194C: jalr        $t9
    // 0x08001950: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08001950: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_47:
    // 0x08001954: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001958: bne         $v0, $at, L_08001A68
    if (ctx->r2 != ctx->r1) {
        // 0x0800195C: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001A68;
    }
    // 0x0800195C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001960: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001964: jalr        $t9
    // 0x08001968: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08001968: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_48:
    // 0x0800196C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x08001970: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x08001974: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x08001978: sh          $zero, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = 0;
    // 0x0800197C: b           L_08001A68
    // 0x08001980: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08001A68;
    // 0x08001980: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08001984:
    // 0x08001984: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800198C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001990: lhu         $t1, 0x8A($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8A);
    // 0x08001994: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001998: bne         $t1, $at, L_08001A40
    if (ctx->r9 != ctx->r1) {
        // 0x0800199C: nop
    
            goto L_08001A40;
    }
    // 0x0800199C: nop

    // 0x080019A0: jalr        $t9
    // 0x080019A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x080019A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_49:
    // 0x080019A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019AC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080019B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080019B4: jalr        $t9
    // 0x080019B8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x080019B8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_50:
    // 0x080019BC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x080019C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019C4: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080019C8: lhu         $t3, 0xEC($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XEC);
    // 0x080019CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080019D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080019D4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x080019D8: bgez        $t3, L_080019EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x080019DC: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_080019EC;
    }
    // 0x080019DC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080019E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080019E4: nop

    // 0x080019E8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_080019EC:
    // 0x080019EC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080019F0: jalr        $t9
    // 0x080019F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x080019F4: nop

    after_51:
    // 0x080019F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019FC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001A00: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001A04: lui         $a1, 0xC130
    ctx->r5 = S32(0XC130 << 16);
    // 0x08001A08: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x08001A0C: jalr        $t9
    // 0x08001A10: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001A10: lui         $a3, 0xC254
    ctx->r7 = S32(0XC254 << 16);
    after_52:
    // 0x08001A14: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A18: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001A1C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001A20: lui         $a1, 0xC26C
    ctx->r5 = S32(0XC26C << 16);
    // 0x08001A24: lui         $a2, 0x41D0
    ctx->r6 = S32(0X41D0 << 16);
    // 0x08001A28: jalr        $t9
    // 0x08001A2C: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001A2C: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    after_53:
    // 0x08001A30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A34: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001A38: jalr        $t9
    // 0x08001A3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001A3C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_54:
L_08001A40:
    // 0x08001A40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A44: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001A48: jalr        $t9
    // 0x08001A4C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08001A4C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_55:
    // 0x08001A50: bne         $v0, $zero, L_08001A68
    if (ctx->r2 != 0) {
        // 0x08001A54: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(53, 0X1AA8) << 16);
            goto L_08001A68;
    }
    // 0x08001A54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X1AA8) << 16);
    // 0x08001A58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A5C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A60: jalr        $t9
    // 0x08001A64: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1AA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08001A64: addiu       $a0, $a0, 0x1AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X1AA8));
    after_56:
L_08001A68:
    // 0x08001A68: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_08001A6C:
    // 0x08001A6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A70: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001A74: beql        $a0, $zero, L_08001A88
    if (ctx->r4 == 0) {
        // 0x08001A78: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_08001A88;
    }
    goto skip_3;
    // 0x08001A78: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    skip_3:
    // 0x08001A7C: jalr        $t9
    // 0x08001A80: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08001A80: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_57:
    // 0x08001A84: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_08001A88:
    // 0x08001A88: lhu         $t5, 0x8A($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8A);
    // 0x08001A8C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08001A90: sh          $t6, 0x8A($t4)
    MEM_H(0X8A, ctx->r12) = ctx->r14;
    // 0x08001A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001A98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001AA0: jr          $ra
    // 0x08001AA4: nop

    TRACE_RETURN()
    return;
    // 0x08001AA4: nop

;}
RECOMP_FUNC void func_08001D00_723320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D04: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001D10: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001D14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001D18: jalr        $t9
    // 0x08001D1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08001D20: beq         $v0, $zero, L_08001D40
    if (ctx->r2 == 0) {
        // 0x08001D24: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001D40;
    }
    // 0x08001D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001D28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D2C: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08001D30: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x08001D34: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08001D38: jalr        $t9
    // 0x08001D3C: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D3C: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_1:
L_08001D40:
    // 0x08001D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D48: jr          $ra
    // 0x08001D4C: nop

    TRACE_RETURN()
    return;
    // 0x08001D4C: nop

;}
RECOMP_FUNC void func_08001E54_723474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001E5C: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001E60: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x08001E64: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x08001E68: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08001E6C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08001E70: bgez        $t6, L_08001E8C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08001E74: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_08001E8C;
    }
    // 0x08001E74: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x08001E78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001E7C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001E80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001E84: nop

    // 0x08001E88: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_08001E8C:
    // 0x08001E8C: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x08001E90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E94: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2E98) << 16);
    // 0x08001E98: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001E9C: bc1fl       L_08001F14
    if (!c1cs) {
        // 0x08001EA0: c.lt.d      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
            goto L_08001F14;
    }
    goto skip_0;
    // 0x08001EA0: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
    skip_0:
    // 0x08001EA4: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001EA8: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001EAC: ldc1        $f2, 0x2E98($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2E98));
    // 0x08001EB0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001EB4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001EB8: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x08001EBC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EA0) << 16);
    // 0x08001EC0: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x08001EC4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001EC8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001ECC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001ED0: swc1        $f18, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x08001ED4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001ED8: swc1        $f10, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f10.u32l;
    // 0x08001EDC: ldc1        $f4, 0x2EA0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EA0));
    // 0x08001EE0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001EE4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x08001EE8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001EEC: swc1        $f8, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f8.u32l;
    // 0x08001EF0: lhu         $t7, 0x8A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001EF4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x08001EF8: bgez        $t7, L_08001F10
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08001EFC: cvt.d.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
            goto L_08001F10;
    }
    // 0x08001EFC: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x08001F00: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001F04: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001F08: nop

    // 0x08001F0C: add.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f0.d + ctx->f16.d;
L_08001F10:
    // 0x08001F10: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
L_08001F14:
    // 0x08001F14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EA8) << 16);
    // 0x08001F18: ldc1        $f2, 0x2EA8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EA8));
    // 0x08001F1C: bc1fl       L_08001F6C
    if (!c1cs) {
        // 0x08001F20: lwc1        $f6, 0x20($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
            goto L_08001F6C;
    }
    goto skip_1;
    // 0x08001F20: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    skip_1:
    // 0x08001F24: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001F28: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001F2C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(53, 0X2EB0) << 16);
    // 0x08001F30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001F34: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001F38: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x08001F3C: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x08001F40: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001F44: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001F48: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001F4C: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    // 0x08001F50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001F54: swc1        $f4, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f4.u32l;
    // 0x08001F58: ldc1        $f10, 0x2EB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(53, 0X2EB0));
    // 0x08001F5C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x08001F60: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001F64: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x08001F68: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
L_08001F6C:
    // 0x08001F6C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x08001F70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001F74: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001F78: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x08001F7C: nop

    // 0x08001F80: bc1fl       L_08001F9C
    if (!c1cs) {
        // 0x08001F84: lhu         $t8, 0x8A($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X8A);
            goto L_08001F9C;
    }
    goto skip_2;
    // 0x08001F84: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
    skip_2:
    // 0x08001F88: jalr        $t9
    // 0x08001F8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F8C: nop

    after_0:
    // 0x08001F90: b           L_08001FA8
    // 0x08001F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001FA8;
    // 0x08001F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F98: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
L_08001F9C:
    // 0x08001F9C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001FA0: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x08001FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001FA8:
    // 0x08001FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001FAC: jr          $ra
    // 0x08001FB0: nop

    TRACE_RETURN()
    return;
    // 0x08001FB0: nop

;}
RECOMP_FUNC void func_08001BD8_7231F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001BE8: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(53, 0X16C) << 16);
    // 0x08001BEC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08001BF0: addiu       $t7, $t7, 0x16C
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(53, 0X16C));
    // 0x08001BF4: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x08001BF8: sw          $t7, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r15;
    // 0x08001BFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C00: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C04: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X293C) << 16);
    // 0x08001C08: jalr        $t9
    // 0x08001C0C: addiu       $a0, $a0, 0x293C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X293C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C0C: addiu       $a0, $a0, 0x293C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X293C));
    after_0:
    // 0x08001C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C18: jr          $ra
    // 0x08001C1C: nop

    TRACE_RETURN()
    return;
    // 0x08001C1C: nop

;}
RECOMP_FUNC void func_080027AC_723DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080027B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080027B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080027B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080027BC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080027C0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080027C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080027C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080027CC: addiu       $a1, $a1, 0x514
    ctx->r5 = ADD32(ctx->r5, 0X514);
    // 0x080027D0: jalr        $t9
    // 0x080027D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x080027D8: beq         $v0, $zero, L_080028B4
    if (ctx->r2 == 0) {
        // 0x080027DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080028B4;
    }
    // 0x080027DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080027E0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080027E4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080027E8: jalr        $t9
    // 0x080027EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080027EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x080027F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027F4: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x080027F8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080027FC: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08002800: jalr        $t9
    // 0x08002804: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002804: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_2:
    // 0x08002808: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800280C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08002810: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002814: lbu         $t7, 0xD8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XD8);
    // 0x08002818: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800281C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002820: sb          $t7, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r15;
    // 0x08002824: lbu         $t8, 0xD8($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XD8);
    // 0x08002828: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800282C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002830: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08002834: sb          $t0, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r8;
    // 0x08002838: jalr        $t9
    // 0x0800283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002840: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002844: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002848: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800284C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002850: jalr        $t9
    // 0x08002854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08002858: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x0800285C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002860: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x08002864: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x08002868: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800286C: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x08002870: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x08002874: lui         $at, 0xC2CC
    ctx->r1 = S32(0XC2CC << 16);
    // 0x08002878: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800287C: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    // 0x08002880: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x08002884: lui         $t4, 0xEE
    ctx->r12 = S32(0XEE << 16);
    // 0x08002888: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800288C: swc1        $f8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f8.u32l;
    // 0x08002890: sw          $t4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r12;
    // 0x08002894: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x08002898: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800289C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X28D8) << 16);
    // 0x080028A0: addiu       $a0, $a0, 0x28D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X28D8));
    // 0x080028A4: jalr        $t9
    // 0x080028A8: sw          $s0, 0xEC($t5)
    MEM_W(0XEC, ctx->r13) = ctx->r16;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080028A8: sw          $s0, 0xEC($t5)
    MEM_W(0XEC, ctx->r13) = ctx->r16;
    after_5:
    // 0x080028AC: b           L_080028C8
    // 0x080028B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080028C8;
    // 0x080028B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080028B4:
    // 0x080028B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080028B8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080028BC: jalr        $t9
    // 0x080028C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080028C0: nop

    after_6:
    // 0x080028C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080028C8:
    // 0x080028C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080028CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080028D0: jr          $ra
    // 0x080028D4: nop

    TRACE_RETURN()
    return;
    // 0x080028D4: nop

;}
RECOMP_FUNC void func_08001AA8_7230C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001AB0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001AB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001AB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001ABC: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08001AC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AC4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001AC8: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08001ACC: jalr        $t9
    // 0x08001AD0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AD0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_0:
    // 0x08001AD4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001AD8: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08001ADC: jalr        $t9
    // 0x08001AE0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AE0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x08001AE4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08001AE8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08001AEC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x08001AF0: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    // 0x08001AF4: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08001AF8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001AFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B00: sh          $zero, 0x14($t7)
    MEM_H(0X14, ctx->r15) = 0;
    // 0x08001B04: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08001B08: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001B0C: sh          $zero, 0x18($t8)
    MEM_H(0X18, ctx->r24) = 0;
    // 0x08001B10: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x08001B14: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x08001B18: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x08001B1C: sh          $t1, 0x94($t2)
    MEM_H(0X94, ctx->r10) = ctx->r9;
    // 0x08001B20: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x08001B24: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x08001B28: jalr        $t9
    // 0x08001B2C: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B2C: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    after_2:
    // 0x08001B30: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08001B34: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x08001B38: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001B3C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x08001B40: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x08001B44: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x08001B48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B4C: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08001B50: sb          $t5, 0xD0($t6)
    MEM_B(0XD0, ctx->r14) = ctx->r13;
    // 0x08001B54: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001B58: beql        $a0, $zero, L_08001B70
    if (ctx->r4 == 0) {
        // 0x08001B5C: lw          $a0, 0x10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X10);
            goto L_08001B70;
    }
    goto skip_0;
    // 0x08001B5C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x08001B60: jalr        $t9
    // 0x08001B64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B64: nop

    after_3:
    // 0x08001B68: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x08001B6C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08001B70:
    // 0x08001B70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B74: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001B78: beq         $a0, $zero, L_08001B8C
    if (ctx->r4 == 0) {
        // 0x08001B7C: nop
    
            goto L_08001B8C;
    }
    // 0x08001B7C: nop

    // 0x08001B80: jalr        $t9
    // 0x08001B84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001B84: nop

    after_4:
    // 0x08001B88: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
L_08001B8C:
    // 0x08001B8C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001B90: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001B94: jalr        $t9
    // 0x08001B98: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B98: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_5:
    // 0x08001B9C: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(53, 0X1BD8) << 16);
    // 0x08001BA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BA4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08001BA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BAC: addiu       $t8, $t8, 0x1BD8
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(53, 0X1BD8));
    // 0x08001BB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(53, 0X29AC) << 16);
    // 0x08001BB4: sw          $t7, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r15;
    // 0x08001BB8: addiu       $a0, $a0, 0x29AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(53, 0X29AC));
    // 0x08001BBC: jalr        $t9
    // 0x08001BC0: sw          $t8, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001BC0: sw          $t8, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r24;
    after_6:
    // 0x08001BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001BC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001BCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001BD0: jr          $ra
    // 0x08001BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080000E4_7245E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000E4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080000E8: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080000F8: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x080000FC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000100: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000104: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000108: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800010C: sw          $t8, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r24;
    // 0x08000110: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000118: jalr        $t9
    // 0x0800011C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800011C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000120: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000124: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000128: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x0800012C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000130: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08000134: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x08000138: jalr        $t9
    // 0x0800013C: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800013C: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    after_1:
    // 0x08000140: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000144: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x08000148: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800014C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000150: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x08000154: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x08000158: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800015C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(54, 0X17C) << 16);
    // 0x08000160: addiu       $a0, $a0, 0x17C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0X17C));
    // 0x08000164: jalr        $t9
    // 0x08000168: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000168: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    after_2:
    // 0x0800016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000174: jr          $ra
    // 0x08000178: nop

    TRACE_RETURN()
    return;
    // 0x08000178: nop

;}
RECOMP_FUNC void func_08000508_724A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000508: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800050C: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08000510: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000514: lui         $at, 0xC069
    ctx->r1 = S32(0XC069 << 16);
    // 0x08000518: lw          $v1, 0xDC($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XDC);
    // 0x0800051C: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x08000520: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x08000524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000528: beql        $v1, $zero, L_0800061C
    if (ctx->r3 == 0) {
        // 0x0800052C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_0800061C;
    }
    goto skip_0;
    // 0x0800052C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x08000530: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000534: lui         $at, 0xC02E
    ctx->r1 = S32(0XC02E << 16);
    // 0x08000538: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x0800053C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08000540: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x08000544: lui         $at, 0xC032
    ctx->r1 = S32(0XC032 << 16);
    // 0x08000548: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x0800054C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000550: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x08000554: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000558: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x0800055C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x08000560: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08000564: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08000568: lhu         $t7, 0x20($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X20);
L_0800056C:
    // 0x0800056C: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x08000570: beql        $at, $zero, L_0800061C
    if (ctx->r1 == 0) {
        // 0x08000574: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_0800061C;
    }
    goto skip_1;
    // 0x08000574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x08000578: lbu         $t8, 0x64($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X64);
    // 0x0800057C: bnel        $a2, $t8, L_08000610
    if (ctx->r6 != ctx->r24) {
        // 0x08000580: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_08000610;
    }
    goto skip_2;
    // 0x08000580: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x08000584: lw          $t9, 0xAC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XAC);
    // 0x08000588: beql        $v1, $t9, L_0800060C
    if (ctx->r3 == ctx->r25) {
        // 0x0800058C: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_3;
    // 0x0800058C: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_3:
    // 0x08000590: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x08000594: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000598: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x0800059C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x080005A0: nop

    // 0x080005A4: bc1fl       L_0800060C
    if (!c1cs) {
        // 0x080005A8: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_4;
    // 0x080005A8: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_4:
    // 0x080005AC: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x080005B0: nop

    // 0x080005B4: bc1fl       L_0800060C
    if (!c1cs) {
        // 0x080005B8: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_5;
    // 0x080005B8: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_5:
    // 0x080005BC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080005C0: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x080005C4: c.lt.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d < ctx->f0.d;
    // 0x080005C8: nop

    // 0x080005CC: bc1fl       L_0800060C
    if (!c1cs) {
        // 0x080005D0: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_6;
    // 0x080005D0: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_6:
    // 0x080005D4: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x080005D8: nop

    // 0x080005DC: bc1fl       L_0800060C
    if (!c1cs) {
        // 0x080005E0: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_7;
    // 0x080005E0: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_7:
    // 0x080005E4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080005E8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080005EC: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x080005F0: nop

    // 0x080005F4: bc1fl       L_0800060C
    if (!c1cs) {
        // 0x080005F8: sw          $zero, 0xAC($a1)
        MEM_W(0XAC, ctx->r5) = 0;
            goto L_0800060C;
    }
    goto skip_8;
    // 0x080005F8: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
    skip_8:
    // 0x080005FC: sw          $v1, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->r3;
    // 0x08000600: jr          $ra
    // 0x08000604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x08000604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08000608: sw          $zero, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = 0;
L_0800060C:
    // 0x0800060C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_08000610:
    // 0x08000610: bnel        $v1, $zero, L_0800056C
    if (ctx->r3 != 0) {
        // 0x08000614: lhu         $t7, 0x20($v1)
        ctx->r15 = MEM_HU(ctx->r3, 0X20);
            goto L_0800056C;
    }
    goto skip_9;
    // 0x08000614: lhu         $t7, 0x20($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X20);
    skip_9:
    // 0x08000618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800061C:
    // 0x0800061C: jr          $ra
    // 0x08000620: nop

    TRACE_RETURN()
    return;
    // 0x08000620: nop

;}
RECOMP_FUNC void func_0800017C_72467C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800017C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000188: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800018C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000190: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000194: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000198: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x0800019C: beq         $at, $zero, L_08000428
    if (ctx->r1 == 0) {
        // 0x080001A0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08000428;
    }
    // 0x080001A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080001A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(54, 0X6F4) << 16);
    // 0x080001A8: addu        $at, $at, $t6
    gpr jr_addend_080001B0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080001AC: lw          $t6, 0x6F4($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(54, 0X6F4));
    // 0x080001B0: jr          $t6
    // 0x080001B4: nop

    switch (jr_addend_080001B0 >> 2) {
        case 0: goto L_080001B8; break;
        case 1: goto L_0800025C; break;
        case 2: goto L_0800031C; break;
        case 3: goto L_08000378; break;
        case 4: goto L_080003EC; break;
        default: switch_error(__func__, 0x080001B0, 0x080006F4);
    }
    // 0x080001B4: nop

L_080001B8:
    // 0x080001B8: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080001BC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x080001C0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x080001C4: bne         $v0, $at, L_0800022C
    if (ctx->r2 != ctx->r1) {
        // 0x080001C8: lui         $a1, 0x41C8
        ctx->r5 = S32(0X41C8 << 16);
            goto L_0800022C;
    }
    // 0x080001C8: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    // 0x080001CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001D0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080001D4: jalr        $t9
    // 0x080001D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x080001DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001E0: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080001E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080001E8: jalr        $t9
    // 0x080001EC: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001EC: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    after_1:
    // 0x080001F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001F4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080001F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080001FC: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000200: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x08000204: jalr        $t9
    // 0x08000208: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000208: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    after_2:
    // 0x0800020C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000210: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000214: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000218: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x0800021C: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x08000220: jalr        $t9
    // 0x08000224: lui         $a3, 0xC33E
    ctx->r7 = S32(0XC33E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000224: lui         $a3, 0xC33E
    ctx->r7 = S32(0XC33E << 16);
    after_3:
    // 0x08000228: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_0800022C:
    // 0x0800022C: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x08000230: bne         $at, $zero, L_08000428
    if (ctx->r1 != 0) {
        // 0x08000234: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_08000428;
    }
    // 0x08000234: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000238: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800023C: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000240: jalr        $t9
    // 0x08000244: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000244: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_4:
    // 0x08000248: bne         $v0, $zero, L_08000428
    if (ctx->r2 != 0) {
        // 0x0800024C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_08000428;
    }
    // 0x0800024C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000250: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000254: b           L_08000428
    // 0x08000258: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08000428;
    // 0x08000258: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_0800025C:
    // 0x0800025C: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000264: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000268: bne         $t8, $at, L_080002E0
    if (ctx->r24 != ctx->r1) {
        // 0x0800026C: lui         $a1, 0x4316
        ctx->r5 = S32(0X4316 << 16);
            goto L_080002E0;
    }
    // 0x0800026C: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x08000270: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000274: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000278: jalr        $t9
    // 0x0800027C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800027C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_5:
    // 0x08000280: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000284: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000288: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800028C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000290: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    // 0x08000294: jalr        $t9
    // 0x08000298: lui         $a3, 0xC25C
    ctx->r7 = S32(0XC25C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000298: lui         $a3, 0xC25C
    ctx->r7 = S32(0XC25C << 16);
    after_6:
    // 0x0800029C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002A0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080002A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080002A8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080002AC: lui         $a2, 0x4224
    ctx->r6 = S32(0X4224 << 16);
    // 0x080002B0: jalr        $t9
    // 0x080002B4: lui         $a3, 0xC33A
    ctx->r7 = S32(0XC33A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080002B4: lui         $a3, 0xC33A
    ctx->r7 = S32(0XC33A << 16);
    after_7:
    // 0x080002B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002BC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080002C0: jalr        $t9
    // 0x080002C4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080002C4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_8:
    // 0x080002C8: bne         $v0, $zero, L_080002E0
    if (ctx->r2 != 0) {
        // 0x080002CC: addiu       $a0, $zero, 0x1ED
        ctx->r4 = ADD32(0, 0X1ED);
            goto L_080002E0;
    }
    // 0x080002CC: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    // 0x080002D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002D4: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080002D8: jalr        $t9
    // 0x080002DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080002DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_080002E0:
    // 0x080002E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002E4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080002E8: jalr        $t9
    // 0x080002EC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080002EC: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    after_10:
    // 0x080002F0: beq         $v0, $zero, L_0800030C
    if (ctx->r2 == 0) {
        // 0x080002F4: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800030C;
    }
    // 0x080002F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002F8: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080002FC: jalr        $t9
    // 0x08000300: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000300: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_11:
    // 0x08000304: bnel        $v0, $zero, L_0800042C
    if (ctx->r2 != 0) {
        // 0x08000308: lhu         $t7, 0x8A($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X8A);
            goto L_0800042C;
    }
    goto skip_0;
    // 0x08000308: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    skip_0:
L_0800030C:
    // 0x0800030C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000310: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08000314: b           L_08000428
    // 0x08000318: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_08000428;
    // 0x08000318: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_0800031C:
    // 0x0800031C: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000320: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000328: bne         $t1, $at, L_08000354
    if (ctx->r9 != ctx->r1) {
        // 0x0800032C: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_08000354;
    }
    // 0x0800032C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000330: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000334: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08000338: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800033C: jalr        $t9
    // 0x08000340: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000340: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_12:
    // 0x08000344: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000348: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800034C: jalr        $t9
    // 0x08000350: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000350: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_13:
L_08000354:
    // 0x08000354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000358: addiu       $t9, $t9, 0x1F0
    ctx->r25 = ADD32(ctx->r25, 0X1F0);
    // 0x0800035C: jalr        $t9
    // 0x08000360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x08000364: bne         $v0, $zero, L_08000428
    if (ctx->r2 != 0) {
        // 0x08000368: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_08000428;
    }
    // 0x08000368: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x0800036C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000370: b           L_08000428
    // 0x08000374: sb          $t2, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r10;
        goto L_08000428;
    // 0x08000374: sb          $t2, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r10;
L_08000378:
    // 0x08000378: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800037C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000380: addiu       $t9, $t9, 0x148
    ctx->r25 = ADD32(ctx->r25, 0X148);
    // 0x08000384: slti        $at, $t3, 0x32
    ctx->r1 = SIGNED(ctx->r11) < 0X32 ? 1 : 0;
    // 0x08000388: bnel        $at, $zero, L_0800042C
    if (ctx->r1 != 0) {
        // 0x0800038C: lhu         $t7, 0x8A($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X8A);
            goto L_0800042C;
    }
    goto skip_1;
    // 0x0800038C: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    skip_1:
    // 0x08000390: jalr        $t9
    // 0x08000394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x08000398: bne         $v0, $zero, L_08000428
    if (ctx->r2 != 0) {
        // 0x0800039C: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_08000428;
    }
    // 0x0800039C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x080003A0: lw          $t4, -0x3924($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3924);
    // 0x080003A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080003A8: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x080003AC: bne         $t4, $at, L_080003D0
    if (ctx->r12 != ctx->r1) {
        // 0x080003B0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080003D0;
    }
    // 0x080003B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003B8: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080003BC: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    // 0x080003C0: jalr        $t9
    // 0x080003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x080003C8: b           L_080003E0
    // 0x080003CC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
        goto L_080003E0;
    // 0x080003CC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
L_080003D0:
    // 0x080003D0: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080003D4: jalr        $t9
    // 0x080003D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080003D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x080003DC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
L_080003E0:
    // 0x080003E0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080003E4: b           L_08000428
    // 0x080003E8: sb          $t5, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r13;
        goto L_08000428;
    // 0x080003E8: sb          $t5, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r13;
L_080003EC:
    // 0x080003EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003F0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080003F4: jalr        $t9
    // 0x080003F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080003F8: nop

    after_18:
    // 0x080003FC: bnel        $v0, $zero, L_0800042C
    if (ctx->r2 != 0) {
        // 0x08000400: lhu         $t7, 0x8A($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X8A);
            goto L_0800042C;
    }
    goto skip_2;
    // 0x08000400: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    skip_2:
    // 0x08000404: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000408: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(54, 0X448) << 16);
    // 0x0800040C: addiu       $a0, $a0, 0x448
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0X448));
    // 0x08000410: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x08000414: bne         $at, $zero, L_08000428
    if (ctx->r1 != 0) {
        // 0x08000418: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000428;
    }
    // 0x08000418: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800041C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000420: jalr        $t9
    // 0x08000424: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000424: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    after_19:
L_08000428:
    // 0x08000428: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
L_0800042C:
    // 0x0800042C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000430: sh          $t8, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r24;
    // 0x08000434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000438: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x0800043C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000440: jr          $ra
    // 0x08000444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08000000_724500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800000C: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000010: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08000014: ori         $at, $at, 0x2
    ctx->r1 = ctx->r1 | 0X2;
    // 0x08000018: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800001C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08000020: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000024: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000028: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x0800002C: sb          $t8, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r24;
    // 0x08000030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000038: jalr        $t9
    // 0x0800003C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800003C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000040: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000044: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000048: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(54, 0X64) << 16);
    // 0x0800004C: jalr        $t9
    // 0x08000050: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0X64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000050: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0X64));
    after_1:
    // 0x08000054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800005C: jr          $ra
    // 0x08000060: nop

    TRACE_RETURN()
    return;
    // 0x08000060: nop

;}
RECOMP_FUNC void func_08000064_724564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800006C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000074: jal         0x08000508
    // 0x08000078: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08000508_724A08(rdram, ctx);
        goto after_0;
    // 0x08000078: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800007C: beq         $v0, $zero, L_080000D0
    if (ctx->r2 == 0) {
        // 0x08000080: addiu       $a0, $zero, 0x23C
        ctx->r4 = ADD32(0, 0X23C);
            goto L_080000D0;
    }
    // 0x08000080: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    // 0x08000084: lbu         $t6, 0xDC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XDC);
    // 0x08000088: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800008C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000090: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000094: jalr        $t9
    // 0x08000098: sb          $t7, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000098: sb          $t7, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r15;
    after_1:
    // 0x0800009C: lbu         $t8, 0xDC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDC);
    // 0x080000A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000A4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080000A8: bgtzl       $t8, L_080000D4
    if (SIGNED(ctx->r24) > 0) {
        // 0x080000AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080000D4;
    }
    goto skip_0;
    // 0x080000AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080000B0: jalr        $t9
    // 0x080000B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000B4: nop

    after_2:
    // 0x080000B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(54, 0XE4) << 16);
    // 0x080000C4: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x080000C8: jalr        $t9
    // 0x080000CC: addiu       $a0, $a0, 0xE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0XE4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000CC: addiu       $a0, $a0, 0xE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0XE4));
    after_3:
L_080000D0:
    // 0x080000D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000D4:
    // 0x080000D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080000D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000DC: jr          $ra
    // 0x080000E0: nop

    TRACE_RETURN()
    return;
    // 0x080000E0: nop

;}
RECOMP_FUNC void func_08000448_724948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800044C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000450: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000454: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000458: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800045C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000460: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000464: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08000468: lw          $t9, -0x39DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39DC);
    // 0x0800046C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08000470: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000474: sb          $t8, 0xD0($t9)
    MEM_B(0XD0, ctx->r25) = ctx->r24;
    // 0x08000478: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800047C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000480: lw          $a1, 0xD8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XD8);
    // 0x08000484: lw          $a0, 0xD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD4);
    // 0x08000488: jalr        $t9
    // 0x0800048C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800048C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000490: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000494: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000498: jalr        $t9
    // 0x0800049C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800049C: nop

    after_1:
    // 0x080004A0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x080004A4: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080004A8: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x080004AC: addiu       $v0, $a2, 0xD0
    ctx->r2 = ADD32(ctx->r6, 0XD0);
    // 0x080004B0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x080004B4: sb          $zero, 0x64($t0)
    MEM_B(0X64, ctx->r8) = 0;
    // 0x080004B8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x080004BC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x080004C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004C4: sb          $t1, 0xDC($a2)
    MEM_B(0XDC, ctx->r6) = ctx->r9;
    // 0x080004C8: sb          $t2, 0x8D($a2)
    MEM_B(0X8D, ctx->r6) = ctx->r10;
    // 0x080004CC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x080004D0: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080004D4: jalr        $t9
    // 0x080004D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x080004DC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080004E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(54, 0X64) << 16);
    // 0x080004EC: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(54, 0X64));
    // 0x080004F0: jalr        $t9
    // 0x080004F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    after_3:
    // 0x080004F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000500: jr          $ra
    // 0x08000504: nop

    TRACE_RETURN()
    return;
    // 0x08000504: nop

;}
RECOMP_FUNC void func_0800037C_724F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800037C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000384: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000388: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800038C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000390: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000394: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000398: bne         $v0, $zero, L_0800041C
    if (ctx->r2 != 0) {
        // 0x0800039C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800041C;
    }
    // 0x0800039C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080003A0: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080003A4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080003A8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080003AC: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x080003B0: addiu       $v1, $a0, 0xD0
    ctx->r3 = ADD32(ctx->r4, 0XD0);
    // 0x080003B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003B8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080003BC: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x080003C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003C4: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080003C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x080003CC: jalr        $t9
    // 0x080003D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x080003D4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080003D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003DC: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080003E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080003E4: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x080003E8: jalr        $t9
    // 0x080003EC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003EC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_1:
    // 0x080003F0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080003F4: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080003F8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x080003FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000400: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000404: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000408: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0X42C) << 16);
    // 0x0800040C: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x08000410: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X42C));
    // 0x08000414: jalr        $t9
    // 0x08000418: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000418: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    after_2:
L_0800041C:
    // 0x0800041C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000420: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000424: jr          $ra
    // 0x08000428: nop

    TRACE_RETURN()
    return;
    // 0x08000428: nop

;}
RECOMP_FUNC void func_080001BC_724DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080001C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080001C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080001C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080001CC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080001D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x080001D8: beql        $t7, $zero, L_0800032C
    if (ctx->r15 == 0) {
        // 0x080001DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800032C;
    }
    goto skip_0;
    // 0x080001DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080001E0: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x080001E4: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080001E8: sb          $t8, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r24;
    // 0x080001EC: beql        $v1, $zero, L_0800032C
    if (ctx->r3 == 0) {
        // 0x080001F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800032C;
    }
    goto skip_1;
    // 0x080001F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x080001F4: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
    // 0x080001F8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x080001FC: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x08000200: beq         $v0, $at, L_08000224
    if (ctx->r2 == ctx->r1) {
        // 0x08000204: addiu       $a3, $a3, -0x39F8
        ctx->r7 = ADD32(ctx->r7, -0X39F8);
            goto L_08000224;
    }
    // 0x08000204: addiu       $a3, $a3, -0x39F8
    ctx->r7 = ADD32(ctx->r7, -0X39F8);
    // 0x08000208: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x0800020C: beq         $v0, $at, L_08000224
    if (ctx->r2 == ctx->r1) {
        // 0x08000210: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_08000224;
    }
    // 0x08000210: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x08000214: beq         $v0, $at, L_08000224
    if (ctx->r2 == ctx->r1) {
        // 0x08000218: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_08000224;
    }
    // 0x08000218: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x0800021C: bne         $v0, $at, L_080002EC
    if (ctx->r2 != ctx->r1) {
        // 0x08000220: nop
    
            goto L_080002EC;
    }
    // 0x08000220: nop

L_08000224:
    // 0x08000224: lw          $v0, 0xA4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XA4);
    // 0x08000228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0800022C: beq         $a2, $v0, L_08000274
    if (ctx->r6 == ctx->r2) {
        // 0x08000230: nop
    
            goto L_08000274;
    }
    // 0x08000230: nop

    // 0x08000234: lw          $v1, 0xA8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XA8);
    // 0x08000238: beq         $a2, $v1, L_08000274
    if (ctx->r6 == ctx->r3) {
        // 0x0800023C: nop
    
            goto L_08000274;
    }
    // 0x0800023C: nop

    // 0x08000240: lw          $a0, 0xAC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XAC);
    // 0x08000244: beq         $a2, $a0, L_08000274
    if (ctx->r6 == ctx->r4) {
        // 0x08000248: nop
    
            goto L_08000274;
    }
    // 0x08000248: nop

    // 0x0800024C: lw          $a1, 0xB0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XB0);
    // 0x08000250: beq         $a2, $a1, L_08000274
    if (ctx->r6 == ctx->r5) {
        // 0x08000254: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_08000274;
    }
    // 0x08000254: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08000258: beq         $a2, $v0, L_08000274
    if (ctx->r6 == ctx->r2) {
        // 0x0800025C: nop
    
            goto L_08000274;
    }
    // 0x0800025C: nop

    // 0x08000260: beq         $a2, $v1, L_08000274
    if (ctx->r6 == ctx->r3) {
        // 0x08000264: nop
    
            goto L_08000274;
    }
    // 0x08000264: nop

    // 0x08000268: beq         $a2, $a0, L_08000274
    if (ctx->r6 == ctx->r4) {
        // 0x0800026C: nop
    
            goto L_08000274;
    }
    // 0x0800026C: nop

    // 0x08000270: bne         $a2, $a1, L_080002EC
    if (ctx->r6 != ctx->r5) {
        // 0x08000274: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_080002EC;
    }
L_08000274:
    // 0x08000274: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08000278: addiu       $v0, $v0, -0x7438
    ctx->r2 = ADD32(ctx->r2, -0X7438);
    // 0x0800027C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000280: jalr        $v0
    // 0x08000284: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000284: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    after_0:
    // 0x08000288: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800028C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    // 0x08000290: jalr        $v0
    // 0x08000294: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000294: nop

    after_1:
    // 0x08000298: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800029C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080002A0: jalr        $t9
    // 0x080002A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002A4: nop

    after_2:
    // 0x080002A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002AC: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x080002B0: jalr        $t9
    // 0x080002B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002B4: nop

    after_3:
    // 0x080002B8: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x080002BC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080002C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002C4: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x080002C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0X37C) << 16);
    // 0x080002D0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x080002D4: sw          $t1, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r9;
    // 0x080002D8: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080002DC: jalr        $t9
    // 0x080002E0: addiu       $a0, $a0, 0x37C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X37C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002E0: addiu       $a0, $a0, 0x37C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X37C));
    after_4:
    // 0x080002E4: b           L_0800032C
    // 0x080002E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800032C;
    // 0x080002E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080002EC:
    // 0x080002EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002F0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080002F4: jalr        $t9
    // 0x080002F8: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080002F8: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    after_5:
    // 0x080002FC: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x08000300: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000304: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000308: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x0800030C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000310: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0X33C) << 16);
    // 0x08000314: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08000318: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    // 0x0800031C: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x08000320: jalr        $t9
    // 0x08000324: addiu       $a0, $a0, 0x33C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X33C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000324: addiu       $a0, $a0, 0x33C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X33C));
    after_6:
    // 0x08000328: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800032C:
    // 0x0800032C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000334: jr          $ra
    // 0x08000338: nop

    TRACE_RETURN()
    return;
    // 0x08000338: nop

;}
RECOMP_FUNC void func_08000C18_725828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C18: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08000C1C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x08000C20: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x08000C24: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x08000C28: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x08000C2C: addiu       $s6, $s6, 0x71A8
    ctx->r22 = ADD32(ctx->r22, 0X71A8);
    // 0x08000C30: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000C34: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x08000C38: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x08000C3C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x08000C40: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x08000C44: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x08000C48: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x08000C4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08000C50: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000C54: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08000C58: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000C5C: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x08000C60: jalr        $s6
    // 0x08000C64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_0;
    // 0x08000C64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08000C68: beq         $v0, $zero, L_08000DA8
    if (ctx->r2 == 0) {
        // 0x08000C6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08000DA8;
    }
    // 0x08000C6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000C70: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x08000C74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000C78: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08000C7C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000C80: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x08000C84: sh          $t8, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r24;
    // 0x08000C88: addiu       $s4, $s4, -0x61F8
    ctx->r20 = ADD32(ctx->r20, -0X61F8);
    // 0x08000C8C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x08000C90: jalr        $s4
    // 0x08000C94: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x08000C94: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    after_1:
    // 0x08000C98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000C9C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08000CA0: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x08000CA4: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08000CA8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08000CAC: addiu       $s5, $s5, 0x2088
    ctx->r21 = ADD32(ctx->r21, 0X2088);
    // 0x08000CB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000CB4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_08000CB8:
    // 0x08000CB8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x08000CBC: jalr        $s6
    // 0x08000CC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_2;
    // 0x08000CC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08000CC4: beq         $v0, $zero, L_08000D1C
    if (ctx->r2 == 0) {
        // 0x08000CC8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000D1C;
    }
    // 0x08000CC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000CCC: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x08000CD0: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000CD4: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x08000CD8: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000CDC: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000CE0: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000CE4: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000CE8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x08000CEC: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x08000CF0: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x08000CF4: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    // 0x08000CF8: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x08000CFC: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x08000D00: jalr        $s4
    // 0x08000D04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_3;
    // 0x08000D04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x08000D08: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x08000D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D10: addiu       $a2, $zero, 0x3F0
    ctx->r6 = ADD32(0, 0X3F0);
    // 0x08000D14: jalr        $s3
    // 0x08000D18: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_4;
    // 0x08000D18: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    after_4:
L_08000D1C:
    // 0x08000D1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000D20: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x08000D24: bnel        $at, $zero, L_08000CB8
    if (ctx->r1 != 0) {
        // 0x08000D28: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_08000CB8;
    }
    goto skip_0;
    // 0x08000D28: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_0:
    // 0x08000D2C: lui         $fp, 0x8021
    ctx->r30 = S32(0X8021 << 16);
    // 0x08000D30: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x08000D34: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x08000D38: addiu       $fp, $fp, 0x242C
    ctx->r30 = ADD32(ctx->r30, 0X242C);
    // 0x08000D3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000D40: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x08000D44: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x08000D48: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
    // 0x08000D4C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_08000D50:
    // 0x08000D50: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x08000D54: jalr        $s6
    // 0x08000D58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_5;
    // 0x08000D58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x08000D5C: beq         $v0, $zero, L_08000D94
    if (ctx->r2 == 0) {
        // 0x08000D60: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000D94;
    }
    // 0x08000D60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000D64: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08000D68: lw          $t1, 0x64($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X64);
    // 0x08000D6C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x08000D70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000D74: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x08000D78: sw          $t2, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r10;
    // 0x08000D7C: addiu       $a2, $zero, 0x301
    ctx->r6 = ADD32(0, 0X301);
    // 0x08000D80: mflo        $a3
    ctx->r7 = lo;
    // 0x08000D84: andi        $t3, $a3, 0xFFFF
    ctx->r11 = ctx->r7 & 0XFFFF;
    // 0x08000D88: jalr        $s3
    // 0x08000D8C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_6;
    // 0x08000D8C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    after_6:
    // 0x08000D90: sh          $s4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r20;
L_08000D94:
    // 0x08000D94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000D98: bnel        $s1, $s5, L_08000D50
    if (ctx->r17 != ctx->r21) {
        // 0x08000D9C: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_08000D50;
    }
    goto skip_1;
    // 0x08000D9C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_1:
    // 0x08000DA0: b           L_08000DAC
    // 0x08000DA4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
        goto L_08000DAC;
    // 0x08000DA4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
L_08000DA8:
    // 0x08000DA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000DAC:
    // 0x08000DAC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x08000DB0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000DB4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08000DB8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000DBC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x08000DC0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08000DC4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08000DC8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x08000DCC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x08000DD0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x08000DD4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x08000DD8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x08000DDC: jr          $ra
    // 0x08000DE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08000DE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000DE4_7259F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DE4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000DE8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08000DEC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08000DF0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08000DF4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x08000DF8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x08000DFC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x08000E00: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000E04: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000E08: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x08000E0C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x08000E10: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08000E14: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x08000E18: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08000E1C: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x08000E20: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08000E24: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x08000E28: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x08000E2C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x08000E30: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x08000E34: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000E38: addiu       $s7, $s7, -0x61F8
    ctx->r23 = ADD32(ctx->r23, -0X61F8);
    // 0x08000E3C: addiu       $s5, $s5, 0x71A8
    ctx->r21 = ADD32(ctx->r21, 0X71A8);
    // 0x08000E40: addiu       $s4, $s4, 0x2088
    ctx->r20 = ADD32(ctx->r20, 0X2088);
    // 0x08000E44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000E48: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x08000E4C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_08000E50:
    // 0x08000E50: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x08000E54: jalr        $s5
    // 0x08000E58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x08000E58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x08000E5C: beq         $v0, $zero, L_08000EB4
    if (ctx->r2 == 0) {
        // 0x08000E60: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000EB4;
    }
    // 0x08000E60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000E64: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x08000E68: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000E6C: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x08000E70: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000E74: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000E78: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x08000E7C: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x08000E80: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x08000E84: lui         $s3, 0x8022
    ctx->r19 = S32(0X8022 << 16);
    // 0x08000E88: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000E8C: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x08000E90: addiu       $s3, $s3, -0xEAC
    ctx->r19 = ADD32(ctx->r19, -0XEAC);
    // 0x08000E94: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x08000E98: jalr        $s7
    // 0x08000E9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_1;
    // 0x08000E9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x08000EA0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x08000EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EA8: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x08000EAC: jalr        $s3
    // 0x08000EB0: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x08000EB0: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    after_2:
L_08000EB4:
    // 0x08000EB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000EB8: bnel        $s1, $fp, L_08000E50
    if (ctx->r17 != ctx->r30) {
        // 0x08000EBC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_08000E50;
    }
    goto skip_0;
    // 0x08000EBC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x08000EC0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x08000EC4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000EC8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000ECC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000ED0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08000ED4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x08000ED8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x08000EDC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08000EE0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x08000EE4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x08000EE8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x08000EEC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x08000EF0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x08000EF4: jr          $ra
    // 0x08000EF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000EF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08000C0C_72581C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_0800033C_724F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800033C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000344: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000348: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800034C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000350: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000354: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000358: bne         $v0, $zero, L_0800036C
    if (ctx->r2 != 0) {
        // 0x0800035C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800036C;
    }
    // 0x0800035C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000360: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0X1BC) << 16);
    // 0x08000364: jalr        $t9
    // 0x08000368: addiu       $a0, $a0, 0x1BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X1BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000368: addiu       $a0, $a0, 0x1BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X1BC));
    after_0:
L_0800036C:
    // 0x0800036C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000374: jr          $ra
    // 0x08000378: nop

    TRACE_RETURN()
    return;
    // 0x08000378: nop

;}
RECOMP_FUNC void func_08000AD8_7256E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000ADC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000AE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000AEC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08000AF0: jalr        $t9
    // 0x08000AF4: lw          $a0, 0xD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AF4: lw          $a0, 0xD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD8);
    after_0:
    // 0x08000AF8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000AFC: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000B00: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000B04: jalr        $t9
    // 0x08000B08: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B08: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_1:
    // 0x08000B0C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08000B10: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08000B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000B18: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x08000B1C: addiu       $a1, $a1, 0xD0
    ctx->r5 = ADD32(ctx->r5, 0XD0);
    // 0x08000B20: sw          $t7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r15;
    // 0x08000B24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_08000B28:
    // 0x08000B28: bnel        $v0, $v1, L_08000B28
    if (ctx->r2 != ctx->r3) {
        // 0x08000B2C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_08000B28;
    }
    goto skip_0;
    // 0x08000B2C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x08000B30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B34: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000B38: jalr        $t9
    // 0x08000B3C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B3C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x08000B40: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000B44: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x08000B48: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000B4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B50: sb          $zero, 0x64($t8)
    MEM_B(0X64, ctx->r24) = 0;
    // 0x08000B54: lw          $t1, -0x39DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39DC);
    // 0x08000B58: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08000B5C: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x08000B60: jalr        $t9
    // 0x08000B64: sb          $t0, 0xD0($t1)
    MEM_B(0XD0, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B64: sb          $t0, 0xD0($t1)
    MEM_B(0XD0, ctx->r9) = ctx->r8;
    after_3:
    // 0x08000B68: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000B6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B70: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08000B74: jalr        $t9
    // 0x08000B78: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000B78: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    after_4:
    // 0x08000B7C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B80: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000B84: jalr        $t9
    // 0x08000B88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000B88: nop

    after_5:
    // 0x08000B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000B94: jr          $ra
    // 0x08000B98: nop

    TRACE_RETURN()
    return;
    // 0x08000B98: nop

;}
RECOMP_FUNC void func_08000B9C_7257AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BA4: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000BA8: addiu       $t8, $zero, 0x24F
    ctx->r24 = ADD32(0, 0X24F);
    // 0x08000BAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BB0: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000BB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000BB8: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000BBC: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08000BC0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000BC4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000BC8: jalr        $t9
    // 0x08000BCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08000BD0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(55, 0X1018) << 16);
    // 0x08000BD4: lwc1        $f0, 0x1018($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0X1018));
    // 0x08000BD8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BE0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0XC0C) << 16);
    // 0x08000BE8: addiu       $a0, $a0, 0xC0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0XC0C));
    // 0x08000BEC: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08000BF0: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08000BF4: jalr        $t9
    // 0x08000BF8: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BF8: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08000BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C04: jr          $ra
    // 0x08000C08: nop

    TRACE_RETURN()
    return;
    // 0x08000C08: nop

;}
RECOMP_FUNC void func_08000000_724C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000004: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000008: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000010: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000018: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800001C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000020: jalr        $t9
    // 0x08000024: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000024: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_0:
    // 0x08000028: beq         $v0, $zero, L_08000048
    if (ctx->r2 == 0) {
        // 0x0800002C: lui         $t6, 0x82A0
        ctx->r14 = S32(0X82A0 << 16);
            goto L_08000048;
    }
    // 0x0800002C: lui         $t6, 0x82A0
    ctx->r14 = S32(0X82A0 << 16);
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
    // 0x08000040: b           L_080001AC
    // 0x08000044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080001AC;
    // 0x08000044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000048:
    // 0x08000048: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x0800004C: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08000050: addiu       $t7, $zero, 0x24F
    ctx->r15 = ADD32(0, 0X24F);
    // 0x08000054: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000058: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x0800005C: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08000060: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000064: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000068: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
    // 0x0800006C: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    // 0x08000070: sb          $t2, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r10;
    // 0x08000074: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(55, 0XFF8) << 16);
    // 0x08000078: lwc1        $f4, 0xFF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0XFF8));
    // 0x0800007C: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x08000080: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000084: lui         $at, 0xC244
    ctx->r1 = S32(0XC244 << 16);
    // 0x08000088: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800008C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000090: addiu       $t3, $zero, 0x2CF
    ctx->r11 = ADD32(0, 0X2CF);
    // 0x08000094: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000098: sh          $t3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r11;
    // 0x0800009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080000A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080000AC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080000B0: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x080000B4: jalr        $t9
    // 0x080000B8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000B8: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_2:
    // 0x080000BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000C8: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    // 0x080000CC: addiu       $a2, $zero, 0x258
    ctx->r6 = ADD32(0, 0X258);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080000D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000E4: jalr        $t9
    // 0x080000E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x080000EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000F0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080000FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(55, 0XFFC) << 16);
    // 0x08000100: lwc1        $f0, 0xFFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0XFFC));
    // 0x08000104: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000108: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x0800010C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x08000110: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000114: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000118: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0800011C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08000120: lhu         $t4, 0x16($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X16);
    // 0x08000124: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000128: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x0800012C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(55, 0XB9C) << 16);
    // 0x08000130: addiu       $a1, $a1, 0xB9C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(55, 0XB9C));
    // 0x08000134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000138: jalr        $t9
    // 0x0800013C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800013C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_6:
    // 0x08000140: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000144: beq         $v0, $zero, L_08000174
    if (ctx->r2 == 0) {
        // 0x08000148: sw          $v0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r2;
            goto L_08000174;
    }
    // 0x08000148: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x0800014C: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x08000150: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000154: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000158: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800015C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08000160: jalr        $t9
    // 0x08000164: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000164: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_7:
    // 0x08000168: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800016C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x08000170: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
L_08000174:
    // 0x08000174: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x08000178: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800017C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000180: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08000184: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000188: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0X1BC) << 16);
    // 0x0800018C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x08000190: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000194: addiu       $a0, $a0, 0x1BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0X1BC));
    // 0x08000198: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x0800019C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001A4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    after_8:
    // 0x080001A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080001AC:
    // 0x080001AC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080001B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080001B4: jr          $ra
    // 0x080001B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080001B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0800042C_72503C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800042C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000430: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000434: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08000438: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0800043C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000440: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000444: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x08000448: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x0800044C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x08000450: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08000454: beq         $at, $zero, L_08000A9C
    if (ctx->r1 == 0) {
        // 0x08000458: lw          $t0, 0x18($t6)
        ctx->r8 = MEM_W(ctx->r14, 0X18);
            goto L_08000A9C;
    }
    // 0x08000458: lw          $t0, 0x18($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X18);
    // 0x0800045C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08000460: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(55, 0X1000) << 16);
    // 0x08000464: addu        $at, $at, $t7
    gpr jr_addend_0800046C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000468: lw          $t7, 0x1000($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(55, 0X1000));
    // 0x0800046C: jr          $t7
    // 0x08000470: nop

    switch (jr_addend_0800046C >> 2) {
        case 0: goto L_08000474; break;
        case 1: goto L_0800067C; break;
        case 2: goto L_08000520; break;
        case 3: goto L_08000774; break;
        case 4: goto L_080009F4; break;
        default: switch_error(__func__, 0x0800046C, 0x08001000);
    }
    // 0x08000470: nop

L_08000474:
    // 0x08000474: lhu         $t8, 0x8A($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000478: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800047C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000480: bne         $t8, $zero, L_080004F8
    if (ctx->r24 != 0) {
        // 0x08000484: nop
    
            goto L_080004F8;
    }
    // 0x08000484: nop

    // 0x08000488: jalr        $t9
    // 0x0800048C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800048C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08000490: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000494: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000498: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x0800049C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080004A0: jalr        $t9
    // 0x080004A4: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004A4: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    after_1:
    // 0x080004A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004AC: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080004B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080004B4: jalr        $t9
    // 0x080004B8: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004B8: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    after_2:
    // 0x080004BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004C0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080004C4: lui         $a1, 0xC432
    ctx->r5 = S32(0XC432 << 16);
    // 0x080004C8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080004CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080004D0: lui         $a2, 0xC2F2
    ctx->r6 = S32(0XC2F2 << 16);
    // 0x080004D4: jalr        $t9
    // 0x080004D8: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004D8: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    after_3:
    // 0x080004DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004E0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080004E4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080004E8: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x080004EC: lui         $a2, 0xC315
    ctx->r6 = S32(0XC315 << 16);
    // 0x080004F0: jalr        $t9
    // 0x080004F4: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004F4: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    after_4:
L_080004F8:
    // 0x080004F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004FC: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000500: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08000504: jalr        $t9
    // 0x08000508: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000508: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_5:
    // 0x0800050C: bne         $v0, $zero, L_08000A9C
    if (ctx->r2 != 0) {
        // 0x08000510: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_08000A9C;
    }
    // 0x08000510: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08000514: sh          $zero, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = 0;
    // 0x08000518: b           L_08000A9C
    // 0x0800051C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_08000A9C;
    // 0x0800051C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_08000520:
    // 0x08000520: lw          $t2, 0x60($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X60);
    // 0x08000524: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000528: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x0800052C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000530: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x08000534: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08000538: bne         $s0, $v1, L_0800055C
    if (ctx->r16 != ctx->r3) {
        // 0x0800053C: sw          $t3, 0x60($s2)
        MEM_W(0X60, ctx->r18) = ctx->r11;
            goto L_0800055C;
    }
    // 0x0800053C: sw          $t3, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r11;
    // 0x08000540: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000544: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000548: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    // 0x0800054C: jalr        $t9
    // 0x08000550: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000550: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_6:
    // 0x08000554: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x08000558: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
L_0800055C:
    // 0x0800055C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x08000560: beq         $v0, $zero, L_0800058C
    if (ctx->r2 == 0) {
        // 0x08000564: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_0800058C;
    }
    // 0x08000564: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000568: beq         $v0, $s0, L_08000650
    if (ctx->r2 == ctx->r16) {
        // 0x0800056C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08000650;
    }
    // 0x0800056C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000570: beq         $v0, $at, L_080005F0
    if (ctx->r2 == ctx->r1) {
        // 0x08000574: addiu       $s0, $s2, 0xD0
        ctx->r16 = ADD32(ctx->r18, 0XD0);
            goto L_080005F0;
    }
    // 0x08000574: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08000578: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800057C: beql        $v0, $at, L_08000654
    if (ctx->r2 == ctx->r1) {
        // 0x08000580: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_08000654;
    }
    goto skip_0;
    // 0x08000580: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    skip_0:
    // 0x08000584: b           L_08000654
    // 0x08000588: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
        goto L_08000654;
    // 0x08000588: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_0800058C:
    // 0x0800058C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000590: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000594: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000598: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800059C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080005A0: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x080005A4: lui         $a2, 0xC314
    ctx->r6 = S32(0XC314 << 16);
    // 0x080005A8: ori         $a2, $a2, 0xB333
    ctx->r6 = ctx->r6 | 0XB333;
    // 0x080005AC: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x080005B0: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x080005B4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080005B8: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x080005BC: jalr        $t9
    // 0x080005C0: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080005C0: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    after_7:
    // 0x080005C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005C8: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080005CC: lui         $a1, 0xC432
    ctx->r5 = S32(0XC432 << 16);
    // 0x080005D0: lui         $a2, 0xC2F1
    ctx->r6 = S32(0XC2F1 << 16);
    // 0x080005D4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x080005D8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080005DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080005E0: jalr        $t9
    // 0x080005E4: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080005E4: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    after_8:
    // 0x080005E8: b           L_08000650
    // 0x080005EC: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
        goto L_08000650;
    // 0x080005EC: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
L_080005F0:
    // 0x080005F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080005F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080005F8: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080005FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000600: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000604: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000608: lui         $a2, 0xC315
    ctx->r6 = S32(0XC315 << 16);
    // 0x0800060C: ori         $a2, $a2, 0x4CCD
    ctx->r6 = ctx->r6 | 0X4CCD;
    // 0x08000610: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x08000614: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x08000618: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x0800061C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000620: jalr        $t9
    // 0x08000624: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000624: lui         $a3, 0x421C
    ctx->r7 = S32(0X421C << 16);
    after_9:
    // 0x08000628: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800062C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000630: lui         $a1, 0xC432
    ctx->r5 = S32(0XC432 << 16);
    // 0x08000634: lui         $a2, 0xC2F2
    ctx->r6 = S32(0XC2F2 << 16);
    // 0x08000638: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x0800063C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000640: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000644: jalr        $t9
    // 0x08000648: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000648: lui         $a3, 0x4317
    ctx->r7 = S32(0X4317 << 16);
    after_10:
    // 0x0800064C: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
L_08000650:
    // 0x08000650: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_08000654:
    // 0x08000654: bne         $v1, $at, L_08000A9C
    if (ctx->r3 != ctx->r1) {
        // 0x08000658: ori         $a0, $zero, 0x8251
        ctx->r4 = 0 | 0X8251;
            goto L_08000A9C;
    }
    // 0x08000658: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    // 0x0800065C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000660: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000664: jalr        $t9
    // 0x08000668: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000668: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    after_11:
    // 0x0800066C: sh          $zero, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = 0;
    // 0x08000670: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08000674: b           L_08000A9C
    // 0x08000678: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08000A9C;
    // 0x08000678: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_0800067C:
    // 0x0800067C: lhu         $t5, 0x8A($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000680: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x08000684: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08000688: bne         $s0, $t5, L_080006E8
    if (ctx->r16 != ctx->r13) {
        // 0x0800068C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_080006E8;
    }
    // 0x0800068C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000690: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000694: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000698: jalr        $t9
    // 0x0800069C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800069C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_12:
    // 0x080006A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(55, 0X1014) << 16);
    // 0x080006A4: lwc1        $f0, 0x1014($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(55, 0X1014));
    // 0x080006A8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(55, 0XDE4) << 16);
    // 0x080006AC: addiu       $t9, $t9, 0xDE4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(55, 0XDE4));
    // 0x080006B0: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x080006B4: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x080006B8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x080006BC: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x080006C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080006C4: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x080006C8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x080006CC: jalr        $t9
    // 0x080006D0: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080006D0: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    after_13:
    // 0x080006D4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006D8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080006DC: jalr        $t9
    // 0x080006E0: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080006E0: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    after_14:
    // 0x080006E4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
L_080006E8:
    // 0x080006E8: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x080006EC: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080006F0: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x080006F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080006F8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080006FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000700: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08000704: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000708: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800070C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000710: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x08000714: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08000718: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x0800071C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x08000720: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x08000724: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x08000728: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x0800072C: sh          $t1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r9;
    // 0x08000730: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000734: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
    // 0x08000738: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800073C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000740: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x08000744: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x08000748: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800074C: jalr        $t9
    // 0x08000750: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000750: nop

    after_15:
    // 0x08000754: lhu         $t2, 0x8A($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000758: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x0800075C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08000760: bne         $t2, $at, L_08000A9C
    if (ctx->r10 != ctx->r1) {
        // 0x08000764: nop
    
            goto L_08000A9C;
    }
    // 0x08000764: nop

    // 0x08000768: sh          $zero, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = 0;
    // 0x0800076C: b           L_08000A9C
    // 0x08000770: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08000A9C;
    // 0x08000770: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08000774:
    // 0x08000774: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000778: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x0800077C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08000780: bnel        $v1, $at, L_080007F0
    if (ctx->r3 != ctx->r1) {
        // 0x08000784: slti        $at, $v1, 0x14
        ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
            goto L_080007F0;
    }
    goto skip_1;
    // 0x08000784: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    skip_1:
    // 0x08000788: jal         0x08000C18
    // 0x0800078C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_08000C18_725828(rdram, ctx);
        goto after_16;
    // 0x0800078C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_16:
    // 0x08000790: beq         $v0, $zero, L_08000A9C
    if (ctx->r2 == 0) {
        // 0x08000794: lw          $t0, 0x44($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X44);
            goto L_08000A9C;
    }
    // 0x08000794: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x08000798: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x0800079C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080007A0: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x080007A4: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080007A8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080007AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080007B0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080007B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080007B8: sub.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d - ctx->f2.d;
    // 0x080007BC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007C0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080007C4: sub.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d - ctx->f2.d;
    // 0x080007C8: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x080007CC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080007D0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080007D4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x080007D8: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x080007DC: jalr        $t9
    // 0x080007E0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080007E0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_17:
    // 0x080007E4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x080007E8: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
    // 0x080007EC: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_080007F0:
    // 0x080007F0: bne         $at, $zero, L_080008EC
    if (ctx->r1 != 0) {
        // 0x080007F4: slti        $at, $v1, 0x1F
        ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_080008EC;
    }
    // 0x080007F4: slti        $at, $v1, 0x1F
    ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x080007F8: beq         $at, $zero, L_080008EC
    if (ctx->r1 == 0) {
        // 0x080007FC: lui         $s0, 0x8000
        ctx->r16 = S32(0X8000 << 16);
            goto L_080008EC;
    }
    // 0x080007FC: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x08000800: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08000804: addiu       $s0, $s0, 0x3E10
    ctx->r16 = ADD32(ctx->r16, 0X3E10);
    // 0x08000808: jalr        $s0
    // 0x0800080C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_18;
    // 0x0800080C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_18:
    // 0x08000810: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08000814: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000818: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800081C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08000820: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000824: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08000828: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800082C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000830: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08000834: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08000838: add.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d + ctx->f8.d;
    // 0x0800083C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000840: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x08000844: jalr        $v0
    // 0x08000848: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_19;
    // 0x08000848: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_19:
    // 0x0800084C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08000850: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000854: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000858: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x0800085C: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000860: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x08000864: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x08000868: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x0800086C: add.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d + ctx->f16.d;
    // 0x08000870: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000874: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x08000878: jalr        $s0
    // 0x0800087C: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_20;
    // 0x0800087C: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    after_20:
    // 0x08000880: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08000884: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000888: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800088C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x08000890: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x08000894: mul.d       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x08000898: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x0800089C: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    // 0x080008A0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x080008A4: sub.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d - ctx->f18.d;
    // 0x080008A8: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x080008AC: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x080008B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080008B4: jalr        $t9
    // 0x080008B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080008B8: nop

    after_21:
    // 0x080008BC: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x080008C0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080008C4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080008C8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080008CC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x080008D0: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x080008D4: lwc1        $f18, 0x10($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X10);
    // 0x080008D8: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x080008DC: sub.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d - ctx->f4.d;
    // 0x080008E0: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x080008E4: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x080008E8: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
L_080008EC:
    // 0x080008EC: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x080008F0: bne         $at, $zero, L_080009DC
    if (ctx->r1 != 0) {
        // 0x080008F4: lui         $s0, 0x8000
        ctx->r16 = S32(0X8000 << 16);
            goto L_080009DC;
    }
    // 0x080008F4: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x080008F8: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x080008FC: addiu       $t4, $t4, 0x3EA0
    ctx->r12 = ADD32(ctx->r12, 0X3EA0);
    // 0x08000900: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08000904: addiu       $s0, $s0, 0x3E10
    ctx->r16 = ADD32(ctx->r16, 0X3E10);
    // 0x08000908: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x0800090C: jalr        $s0
    // 0x08000910: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_22;
    // 0x08000910: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    after_22:
    // 0x08000914: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08000918: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800091C: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x08000920: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08000924: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000928: add.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d + ctx->f6.d;
    // 0x0800092C: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x08000930: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x08000934: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000938: jalr        $t9
    // 0x0800093C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800093C: nop

    after_23:
    // 0x08000940: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08000944: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000948: add.d       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f2.d + ctx->f2.d;
    // 0x0800094C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x08000950: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08000954: add.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d + ctx->f18.d;
    // 0x08000958: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x0800095C: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x08000960: jalr        $s0
    // 0x08000964: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_24;
    // 0x08000964: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    after_24:
    // 0x08000968: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x0800096C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08000970: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08000974: add.d       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f2.d + ctx->f2.d;
    // 0x08000978: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    // 0x0800097C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x08000980: sub.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d - ctx->f16.d;
    // 0x08000984: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x08000988: swc1        $f6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f6.u32l;
    // 0x0800098C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000990: jalr        $t9
    // 0x08000994: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000994: nop

    after_25:
    // 0x08000998: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x0800099C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x080009A0: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x080009A4: add.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f2.d + ctx->f2.d;
    // 0x080009A8: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x080009AC: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x080009B0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080009B4: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
    // 0x080009B8: lhu         $t5, 0x18($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X18);
    // 0x080009BC: addiu       $t6, $t5, 0x5
    ctx->r14 = ADD32(ctx->r13, 0X5);
    // 0x080009C0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080009C4: sh          $t7, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r15;
    // 0x080009C8: lhu         $t8, 0x18($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X18);
    // 0x080009CC: addiu       $t1, $t8, -0x5
    ctx->r9 = ADD32(ctx->r24, -0X5);
    // 0x080009D0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080009D4: sh          $t2, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r10;
    // 0x080009D8: lhu         $v1, 0x8A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8A);
L_080009DC:
    // 0x080009DC: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x080009E0: bne         $v1, $at, L_08000A9C
    if (ctx->r3 != ctx->r1) {
        // 0x080009E4: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_08000A9C;
    }
    // 0x080009E4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x080009E8: sh          $zero, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = 0;
    // 0x080009EC: b           L_08000A9C
    // 0x080009F0: sb          $t3, 0xD0($s2)
    MEM_B(0XD0, ctx->r18) = ctx->r11;
        goto L_08000A9C;
    // 0x080009F0: sb          $t3, 0xD0($s2)
    MEM_B(0XD0, ctx->r18) = ctx->r11;
L_080009F4:
    // 0x080009F4: lhu         $t4, 0x8A($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X8A);
    // 0x080009F8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x080009FC: lui         $a1, 0x42FA
    ctx->r5 = S32(0X42FA << 16);
    // 0x08000A00: bne         $s0, $t4, L_08000A64
    if (ctx->r16 != ctx->r12) {
        // 0x08000A04: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000A64;
    }
    // 0x08000A04: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A08: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08000A0C: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000A10: jalr        $t9
    // 0x08000A14: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000A14: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_26:
    // 0x08000A18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A1C: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08000A20: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000A24: jalr        $t9
    // 0x08000A28: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000A28: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    after_27:
    // 0x08000A2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A30: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000A34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000A38: lui         $a1, 0xC3F3
    ctx->r5 = S32(0XC3F3 << 16);
    // 0x08000A3C: lui         $a2, 0xC34E
    ctx->r6 = S32(0XC34E << 16);
    // 0x08000A40: jalr        $t9
    // 0x08000A44: lui         $a3, 0x42BE
    ctx->r7 = S32(0X42BE << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000A44: lui         $a3, 0x42BE
    ctx->r7 = S32(0X42BE << 16);
    after_28:
    // 0x08000A48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A4C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000A50: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000A54: lui         $a1, 0xC3F7
    ctx->r5 = S32(0XC3F7 << 16);
    // 0x08000A58: lui         $a2, 0xC34E
    ctx->r6 = S32(0XC34E << 16);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: lui         $a3, 0xC110
    ctx->r7 = S32(0XC110 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000A60: lui         $a3, 0xC110
    ctx->r7 = S32(0XC110 << 16);
    after_29:
L_08000A64:
    // 0x08000A64: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A68: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000A6C: jalr        $t9
    // 0x08000A70: lw          $a0, 0xD8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000A70: lw          $a0, 0xD8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD8);
    after_30:
    // 0x08000A74: bne         $v0, $zero, L_08000A9C
    if (ctx->r2 != 0) {
        // 0x08000A78: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000A9C;
    }
    // 0x08000A78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A7C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000A80: jalr        $t9
    // 0x08000A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_31:
    // 0x08000A88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(55, 0XAD8) << 16);
    // 0x08000A94: jalr        $t9
    // 0x08000A98: addiu       $a0, $a0, 0xAD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0XAD8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000A98: addiu       $a0, $a0, 0xAD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(55, 0XAD8));
    after_32:
L_08000A9C:
    // 0x08000A9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AA0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000AA4: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x08000AA8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000AAC: jalr        $t9
    // 0x08000AB0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08000AB0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    after_33:
    // 0x08000AB4: lhu         $t5, 0x8A($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X8A);
    // 0x08000AB8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000ABC: sh          $t6, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r14;
    // 0x08000AC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000AC4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000AC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08000ACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000AD0: jr          $ra
    // 0x08000AD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000AD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_0800040C_72603C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800040C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000410: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000414: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x08000418: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800041C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x08000420: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000424: jr          $ra
    // 0x08000428: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x08000428: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_0800042C_72605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800042C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08000430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000434: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000438: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x0800043C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08000440: lbu         $v0, 0xD2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD2);
    // 0x08000444: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(56, 0X22C) << 16);
    // 0x08000448: addiu       $a1, $a1, 0x22C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(56, 0X22C));
    // 0x0800044C: beq         $v0, $zero, L_08000478
    if (ctx->r2 == 0) {
        // 0x08000450: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_08000478;
    }
    // 0x08000450: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000454: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000458: beq         $v0, $at, L_080004C8
    if (ctx->r2 == ctx->r1) {
        // 0x0800045C: lw          $s0, 0x58($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X58);
            goto L_080004C8;
    }
    // 0x0800045C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x08000460: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000464: beq         $v0, $at, L_080006D4
    if (ctx->r2 == ctx->r1) {
        // 0x08000468: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080006D4;
    }
    // 0x08000468: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800046C: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
    // 0x08000470: b           L_080007D4
    // 0x08000474: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_080007D4;
    // 0x08000474: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_08000478:
    // 0x08000478: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(56, 0X0) << 16);
    // 0x0800047C: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(56, 0X0));
    // 0x08000480: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x08000484: jalr        $t9
    // 0x08000488: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000488: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    after_0:
    // 0x0800048C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x08000490: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000494: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000498: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x0800049C: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080004A0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080004A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080004A8: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x080004AC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080004B0: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x080004B4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(56, 0X860) << 16);
    // 0x080004B8: sw          $t0, 0x860($at)
    MEM_W((int16_t)RELOC_LO16(56, 0X860), ctx->r1) = ctx->r8;
    // 0x080004BC: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
    // 0x080004C0: b           L_080007D4
    // 0x080004C4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_080007D4;
    // 0x080004C4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_080004C8:
    // 0x080004C8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(56, 0X40C) << 16);
    // 0x080004CC: addiu       $t9, $t9, 0x40C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(56, 0X40C));
    // 0x080004D0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080004D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080004D8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x080004DC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x080004E0: jalr        $t9
    // 0x080004E4: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004E4: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x080004E8: lui         $at, 0xC258
    ctx->r1 = S32(0XC258 << 16);
    // 0x080004EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080004F0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x080004F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004F8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080004FC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08000500: nop

    // 0x08000504: bc1fl       L_08000578
    if (!c1cs) {
        // 0x08000508: lui         $at, 0xC31B
        ctx->r1 = S32(0XC31B << 16);
            goto L_08000578;
    }
    goto skip_0;
    // 0x08000508: lui         $at, 0xC31B
    ctx->r1 = S32(0XC31B << 16);
    skip_0:
    // 0x0800050C: jalr        $t9
    // 0x08000510: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000510: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_2:
    // 0x08000514: bne         $v0, $zero, L_08000574
    if (ctx->r2 != 0) {
        // 0x08000518: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000574;
    }
    // 0x08000518: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800051C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000520: jalr        $t9
    // 0x08000524: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000524: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_3:
    // 0x08000528: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800052C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000530: jalr        $t9
    // 0x08000534: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000534: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_4:
    // 0x08000538: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800053C: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08000540: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x08000544: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x08000548: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x0800054C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x08000550: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x08000554: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08000558: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    // 0x0800055C: addiu       $a1, $zero, -0x96
    ctx->r5 = ADD32(0, -0X96);
    // 0x08000560: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x08000564: jalr        $t9
    // 0x08000568: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000568: addiu       $a3, $zero, -0xA
    ctx->r7 = ADD32(0, -0XA);
    after_5:
    // 0x0800056C: b           L_080006CC
    // 0x08000570: nop

        goto L_080006CC;
    // 0x08000570: nop

L_08000574:
    // 0x08000574: lui         $at, 0xC31B
    ctx->r1 = S32(0XC31B << 16);
L_08000578:
    // 0x08000578: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800057C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08000580: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000584: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000588: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x0800058C: nop

    // 0x08000590: bc1fl       L_08000604
    if (!c1cs) {
        // 0x08000594: lui         $at, 0x43C5
        ctx->r1 = S32(0X43C5 << 16);
            goto L_08000604;
    }
    goto skip_1;
    // 0x08000594: lui         $at, 0x43C5
    ctx->r1 = S32(0X43C5 << 16);
    skip_1:
    // 0x08000598: jalr        $t9
    // 0x0800059C: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800059C: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    after_6:
    // 0x080005A0: bne         $v0, $zero, L_08000600
    if (ctx->r2 != 0) {
        // 0x080005A4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000600;
    }
    // 0x080005A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005A8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080005AC: jalr        $t9
    // 0x080005B0: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080005B0: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    after_7:
    // 0x080005B4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(56, 0X0) << 16);
    // 0x080005B8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(56, 0X0));
    // 0x080005BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(56, 0X60) << 16);
    // 0x080005C0: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(56, 0X60));
    // 0x080005C4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x080005C8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x080005CC: jalr        $t9
    // 0x080005D0: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080005D0: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    after_8:
    // 0x080005D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(56, 0X850) << 16);
    // 0x080005D8: lwc1        $f16, 0x850($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(56, 0X850));
    // 0x080005DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x080005E0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080005E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080005E8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x080005EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080005F0: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x080005F4: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x080005F8: b           L_080006CC
    // 0x080005FC: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
        goto L_080006CC;
    // 0x080005FC: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
L_08000600:
    // 0x08000600: lui         $at, 0x43C5
    ctx->r1 = S32(0X43C5 << 16);
L_08000604:
    // 0x08000604: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000608: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0800060C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000610: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000614: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08000618: nop

    // 0x0800061C: bc1fl       L_08000690
    if (!c1cs) {
        // 0x08000620: lui         $at, 0x43F8
        ctx->r1 = S32(0X43F8 << 16);
            goto L_08000690;
    }
    goto skip_2;
    // 0x08000620: lui         $at, 0x43F8
    ctx->r1 = S32(0X43F8 << 16);
    skip_2:
    // 0x08000624: jalr        $t9
    // 0x08000628: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000628: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_9:
    // 0x0800062C: bne         $v0, $zero, L_0800068C
    if (ctx->r2 != 0) {
        // 0x08000630: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800068C;
    }
    // 0x08000630: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000634: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000638: jalr        $t9
    // 0x0800063C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800063C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_10:
    // 0x08000640: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000644: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000648: jalr        $t9
    // 0x0800064C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800064C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_11:
    // 0x08000650: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000654: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08000658: addiu       $t5, $zero, 0x300
    ctx->r13 = ADD32(0, 0X300);
    // 0x0800065C: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x08000660: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08000664: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x08000668: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x0800066C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08000670: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    // 0x08000674: addiu       $a1, $zero, 0x123
    ctx->r5 = ADD32(0, 0X123);
    // 0x08000678: addiu       $a2, $zero, -0x21
    ctx->r6 = ADD32(0, -0X21);
    // 0x0800067C: jalr        $t9
    // 0x08000680: addiu       $a3, $zero, -0x21D
    ctx->r7 = ADD32(0, -0X21D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000680: addiu       $a3, $zero, -0x21D
    ctx->r7 = ADD32(0, -0X21D);
    after_12:
    // 0x08000684: b           L_080006CC
    // 0x08000688: nop

        goto L_080006CC;
    // 0x08000688: nop

L_0800068C:
    // 0x0800068C: lui         $at, 0x43F8
    ctx->r1 = S32(0X43F8 << 16);
L_08000690:
    // 0x08000690: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000694: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08000698: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800069C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080006A0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x080006A4: nop

    // 0x080006A8: bc1f        L_080006CC
    if (!c1cs) {
        // 0x080006AC: nop
    
            goto L_080006CC;
    }
    // 0x080006AC: nop

    // 0x080006B0: jalr        $t9
    // 0x080006B4: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080006B4: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    after_13:
    // 0x080006B8: bne         $v0, $zero, L_080006CC
    if (ctx->r2 != 0) {
        // 0x080006BC: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_080006CC;
    }
    // 0x080006BC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080006C0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x080006C4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x080006C8: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
L_080006CC:
    // 0x080006CC: b           L_080007D4
    // 0x080006D0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_080007D4;
    // 0x080006D0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_080006D4:
    // 0x080006D4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080006D8: jalr        $t9
    // 0x080006DC: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080006DC: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    after_14:
    // 0x080006E0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x080006E4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080006E8: lh          $t0, 0xD0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XD0);
    // 0x080006EC: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x080006F0: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x080006F4: mfhi        $t1
    ctx->r9 = hi;
    // 0x080006F8: bnel        $t1, $zero, L_080007D4
    if (ctx->r9 != 0) {
        // 0x080006FC: lh          $v1, 0x0($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X0);
            goto L_080007D4;
    }
    goto skip_3;
    // 0x080006FC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    skip_3:
    // 0x08000700: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x08000704: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000708: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800070C: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x08000710: beq         $at, $zero, L_08000720
    if (ctx->r1 == 0) {
        // 0x08000714: nop
    
            goto L_08000720;
    }
    // 0x08000714: nop

    // 0x08000718: jalr        $t9
    // 0x0800071C: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800071C: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    after_15:
L_08000720:
    // 0x08000720: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(56, 0X0) << 16);
    // 0x08000724: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(56, 0X0));
    // 0x08000728: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800072C: addiu       $a1, $a1, 0x4314
    ctx->r5 = ADD32(ctx->r5, 0X4314);
    // 0x08000730: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x08000734: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000738: jalr        $t9
    // 0x0800073C: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800073C: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
    after_16:
    // 0x08000740: bnel        $v0, $zero, L_08000754
    if (ctx->r2 != 0) {
        // 0x08000744: lw          $v1, 0x18($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X18);
            goto L_08000754;
    }
    goto skip_4;
    // 0x08000744: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    skip_4:
    // 0x08000748: b           L_080007D4
    // 0x0800074C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_080007D4;
    // 0x0800074C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x08000750: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
L_08000754:
    // 0x08000754: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08000758: bnel        $v1, $zero, L_0800076C
    if (ctx->r3 != 0) {
        // 0x0800075C: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_0800076C;
    }
    goto skip_5;
    // 0x0800075C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_5:
    // 0x08000760: b           L_080007D4
    // 0x08000764: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
        goto L_080007D4;
    // 0x08000764: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x08000768: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_0800076C:
    // 0x0800076C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08000770: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000774: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08000778: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800077C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x08000780: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x08000784: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x08000788: lbu         $t3, 0x3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3);
    // 0x0800078C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000790: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000794: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x08000798: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x0800079C: sll         $t4, $t4, 7
    ctx->r12 = S32(ctx->r12 << 7);
    // 0x080007A0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x080007A4: sh          $t5, 0x88($v0)
    MEM_H(0X88, ctx->r2) = ctx->r13;
    // 0x080007A8: swc1        $f0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f0.u32l;
    // 0x080007AC: swc1        $f0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f0.u32l;
    // 0x080007B0: swc1        $f0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f0.u32l;
    // 0x080007B4: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x080007B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080007BC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x080007C0: slti        $at, $t8, 0x15
    ctx->r1 = SIGNED(ctx->r24) < 0X15 ? 1 : 0;
    // 0x080007C4: bne         $at, $zero, L_080007D0
    if (ctx->r1 != 0) {
        // 0x080007C8: sb          $t7, 0x3($s0)
        MEM_B(0X3, ctx->r16) = ctx->r15;
            goto L_080007D0;
    }
    // 0x080007C8: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
    // 0x080007CC: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
L_080007D0:
    // 0x080007D0: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
L_080007D4:
    // 0x080007D4: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x080007D8: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x080007DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080007E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080007E4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x080007E8: jr          $ra
    // 0x080007EC: nop

    TRACE_RETURN()
    return;
    // 0x080007EC: nop

;}
RECOMP_FUNC void func_08000060_725C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000060: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000068: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800006C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000070: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000078: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800007C: beq         $v0, $zero, L_080000A4
    if (ctx->r2 == 0) {
        // 0x08000080: lui         $t8, 0x2C0
        ctx->r24 = S32(0X2C0 << 16);
            goto L_080000A4;
    }
    // 0x08000080: lui         $t8, 0x2C0
    ctx->r24 = S32(0X2C0 << 16);
    // 0x08000084: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000088: beq         $v0, $at, L_08000120
    if (ctx->r2 == ctx->r1) {
        // 0x0800008C: addiu       $t1, $s0, 0xD0
        ctx->r9 = ADD32(ctx->r16, 0XD0);
            goto L_08000120;
    }
    // 0x0800008C: addiu       $t1, $s0, 0xD0
    ctx->r9 = ADD32(ctx->r16, 0XD0);
    // 0x08000090: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000094: beq         $v0, $at, L_080001E8
    if (ctx->r2 == ctx->r1) {
        // 0x08000098: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080001E8;
    }
    // 0x08000098: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800009C: b           L_0800021C
    // 0x080000A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_0800021C;
    // 0x080000A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080000A4:
    // 0x080000A4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x080000A8: sb          $t9, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r25;
    // 0x080000AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000B0: ori         $t8, $t8, 0x7E0
    ctx->r24 = ctx->r24 | 0X7E0;
    // 0x080000B4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080000B8: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x080000BC: sh          $t7, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r15;
    // 0x080000C0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000C8: jalr        $t9
    // 0x080000CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x080000D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000D4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000DC: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080000E0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080000E4: jalr        $t9
    // 0x080000E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080000EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000F0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080000FC: jalr        $t9
    // 0x08000100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000104: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000108: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x0800010C: jalr        $t9
    // 0x08000110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08000114: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000118: b           L_08000218
    // 0x0800011C: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
        goto L_08000218;
    // 0x0800011C: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
L_08000120:
    // 0x08000120: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08000124: lbu         $t3, 0x1($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X1);
    // 0x08000128: bnel        $t3, $zero, L_08000184
    if (ctx->r11 != 0) {
        // 0x0800012C: lw          $t0, 0x68($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X68);
            goto L_08000184;
    }
    goto skip_0;
    // 0x0800012C: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08000130: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x08000134: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    // 0x08000138: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(56, 0X860) << 16);
    // 0x0800013C: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x08000140: bne         $t5, $zero, L_08000180
    if (ctx->r13 != 0) {
        // 0x08000144: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_08000180;
    }
    // 0x08000144: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x08000148: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x0800014C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000150: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08000154: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000158: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x0800015C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x08000160: lw          $a3, 0xC($t6)
    ctx->r7 = MEM_W(ctx->r14, 0XC);
    // 0x08000164: lw          $a1, 0x860($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(56, 0X860));
    // 0x08000168: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x0800016C: jalr        $t9
    // 0x08000170: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000170: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x08000174: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000178: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800017C: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
L_08000180:
    // 0x08000180: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
L_08000184:
    // 0x08000184: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000188: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800018C: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x08000190: beql        $t1, $zero, L_0800021C
    if (ctx->r9 == 0) {
        // 0x08000194: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_0800021C;
    }
    goto skip_1;
    // 0x08000194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08000198: jalr        $t9
    // 0x0800019C: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800019C: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    after_5:
    // 0x080001A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001A4: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x080001A8: jalr        $t9
    // 0x080001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x080001B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001B4: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001BC: jalr        $t9
    // 0x080001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x080001C4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080001CC: jalr        $t9
    // 0x080001D0: addiu       $a0, $zero, 0xE0
    ctx->r4 = ADD32(0, 0XE0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001D0: addiu       $a0, $zero, 0xE0
    ctx->r4 = ADD32(0, 0XE0);
    after_8:
    // 0x080001D4: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x080001D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x080001DC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080001E0: b           L_08000218
    // 0x080001E4: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_08000218;
    // 0x080001E4: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_080001E8:
    // 0x080001E8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001F0: nop

    after_9:
    // 0x080001F4: bne         $v0, $zero, L_08000218
    if (ctx->r2 != 0) {
        // 0x080001F8: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000218;
    }
    // 0x080001F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001FC: addiu       $t9, $t9, -0x47DC
    ctx->r25 = ADD32(ctx->r25, -0X47DC);
    // 0x08000200: jalr        $t9
    // 0x08000204: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000204: nop

    after_10:
    // 0x08000208: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800020C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000210: jalr        $t9
    // 0x08000214: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000214: nop

    after_11:
L_08000218:
    // 0x08000218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800021C:
    // 0x0800021C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000220: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000224: jr          $ra
    // 0x08000228: nop

    TRACE_RETURN()
    return;
    // 0x08000228: nop

;}
RECOMP_FUNC void func_0800022C_725E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800022C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000230: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000234: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000238: lb          $v0, 0xD0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD0);
    // 0x0800023C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000240: addiu       $t6, $zero, 0x329
    ctx->r14 = ADD32(0, 0X329);
    // 0x08000244: beq         $v0, $zero, L_0800026C
    if (ctx->r2 == 0) {
        // 0x08000248: addiu       $t7, $zero, 0x24F
        ctx->r15 = ADD32(0, 0X24F);
            goto L_0800026C;
    }
    // 0x08000248: addiu       $t7, $zero, 0x24F
    ctx->r15 = ADD32(0, 0X24F);
    // 0x0800024C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000250: beq         $v0, $a1, L_080002EC
    if (ctx->r2 == ctx->r5) {
        // 0x08000254: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080002EC;
    }
    // 0x08000254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000258: beq         $v0, $at, L_0800031C
    if (ctx->r2 == ctx->r1) {
        // 0x0800025C: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_0800031C;
    }
    // 0x0800025C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000260: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x08000264: b           L_080003DC
    // 0x08000268: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
        goto L_080003DC;
    // 0x08000268: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_0800026C:
    // 0x0800026C: lui         $t8, 0x8280
    ctx->r24 = S32(0X8280 << 16);
    // 0x08000270: ori         $t8, $t8, 0x321
    ctx->r24 = ctx->r24 | 0X321;
    // 0x08000274: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000278: sh          $t6, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r14;
    // 0x0800027C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000280: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000284: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000288: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800028C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08000290: jalr        $t9
    // 0x08000294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000298: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(56, 0X84C) << 16);
    // 0x0800029C: lwc1        $f2, 0x84C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(56, 0X84C));
    // 0x080002A0: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x080002A4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x080002A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080002AC: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x080002B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080002B4: lui         $at, 0xC2D2
    ctx->r1 = S32(0XC2D2 << 16);
    // 0x080002B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080002BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080002C0: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x080002C4: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x080002C8: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x080002CC: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080002D0: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x080002D4: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x080002D8: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x080002DC: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x080002E0: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080002E4: b           L_080003DC
    // 0x080002E8: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
        goto L_080003DC;
    // 0x080002E8: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_080002EC:
    // 0x080002EC: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x080002F0: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x080002F4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080002F8: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x080002FC: bgezl       $t1, L_08000310
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000300: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_08000310;
    }
    goto skip_0;
    // 0x08000300: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    skip_0:
    // 0x08000304: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x08000308: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x0800030C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
L_08000310:
    // 0x08000310: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x08000314: b           L_080003DC
    // 0x08000318: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
        goto L_080003DC;
    // 0x08000318: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_0800031C:
    // 0x0800031C: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    // 0x08000320: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000324: sll         $t4, $t3, 15
    ctx->r12 = S32(ctx->r11 << 15);
    // 0x08000328: bltzl       $t4, L_0800033C
    if (SIGNED(ctx->r12) < 0) {
        // 0x0800032C: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_0800033C;
    }
    goto skip_1;
    // 0x0800032C: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    skip_1:
    // 0x08000330: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x08000334: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x08000338: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
L_0800033C:
    // 0x0800033C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x08000340: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x08000344: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x08000348: mfhi        $t5
    ctx->r13 = hi;
    // 0x0800034C: bnel        $a1, $t5, L_080003DC
    if (ctx->r5 != ctx->r13) {
        // 0x08000350: lwc1        $f0, 0x8($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
            goto L_080003DC;
    }
    goto skip_2;
    // 0x08000350: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x08000354: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000358: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x0800035C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000360: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08000364: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x08000368: addiu       $a0, $zero, 0x270
    ctx->r4 = ADD32(0, 0X270);
    // 0x0800036C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(56, 0X860) << 16);
    // 0x08000370: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08000374: bc1fl       L_080003B0
    if (!c1cs) {
        // 0x08000378: lwc1        $f8, 0x10($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
            goto L_080003B0;
    }
    goto skip_3;
    // 0x08000378: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x0800037C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000380: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000384: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x08000388: nop

    // 0x0800038C: bc1fl       L_080003B0
    if (!c1cs) {
        // 0x08000390: lwc1        $f8, 0x10($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
            goto L_080003B0;
    }
    goto skip_4;
    // 0x08000390: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    skip_4:
    // 0x08000394: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000398: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800039C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x080003A0: nop

    // 0x080003A4: bc1tl       L_080003DC
    if (c1cs) {
        // 0x080003A8: lwc1        $f0, 0x8($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
            goto L_080003DC;
    }
    goto skip_5;
    // 0x080003A8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    skip_5:
    // 0x080003AC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
L_080003B0:
    // 0x080003B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080003B4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x080003B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080003BC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080003C0: lw          $a1, 0x860($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(56, 0X860));
    // 0x080003C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x080003C8: jalr        $t9
    // 0x080003CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x080003D0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080003D4: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x080003D8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_080003DC:
    // 0x080003DC: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x080003E0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080003E4: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x080003E8: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x080003EC: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080003F0: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x080003F4: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x080003F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080003FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000400: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08000404: jr          $ra
    // 0x08000408: nop

    TRACE_RETURN()
    return;
    // 0x08000408: nop

;}
RECOMP_FUNC void func_08000000_725C30(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_0800220C_72869C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800220C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002214: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08002218: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800221C: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08002220: addiu       $t9, $zero, 0x3C3
    ctx->r25 = ADD32(0, 0X3C3);
    // 0x08002224: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08002228: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x0800222C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002230: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002234: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002238: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800223C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08002240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002244: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002248: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x0800224C: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08002250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002254: jalr        $t9
    // 0x08002258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800225C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002260: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002268: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x0800226C: jalr        $t9
    // 0x08002270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08002274: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002278: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800227C: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08002280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002284: jalr        $t9
    // 0x08002288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0800228C: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x08002290: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x08002294: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002298: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800229C: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x080022A0: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x080022A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080022A8: jalr        $t9
    // 0x080022AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080022AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x080022B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022B4: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080022B8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080022BC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080022C0: jalr        $t9
    // 0x080022C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080022C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080022C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022CC: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080022D0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080022D4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080022D8: jalr        $t9
    // 0x080022DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080022DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080022E0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080022E4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080022E8: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x080022EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30FC) << 16);
    // 0x080022F0: lwc1        $f0, 0x30FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30FC));
    // 0x080022F4: sb          $t2, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r10;
    // 0x080022F8: lbu         $t3, 0xD8($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XD8);
    // 0x080022FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002300: addiu       $t5, $zero, 0x3D8
    ctx->r13 = ADD32(0, 0X3D8);
    // 0x08002304: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08002308: sb          $t4, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r12;
    // 0x0800230C: addiu       $t6, $zero, 0x24F
    ctx->r14 = ADD32(0, 0X24F);
    // 0x08002310: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002314: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X234C) << 16);
    // 0x08002318: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
    // 0x0800231C: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x08002320: sh          $t5, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r13;
    // 0x08002324: addiu       $a0, $a0, 0x234C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X234C));
    // 0x08002328: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0800232C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002330: jalr        $t9
    // 0x08002334: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002334: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    after_6:
    // 0x08002338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800233C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08002340: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002344: jr          $ra
    // 0x08002348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08002348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800057C_726A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800057C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000584: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000588: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800058C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000590: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000594: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000598: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x0800059C: bne         $t6, $zero, L_080005F0
    if (ctx->r14 != 0) {
        // 0x080005A0: lui         $a1, 0x4248
        ctx->r5 = S32(0X4248 << 16);
            goto L_080005F0;
    }
    // 0x080005A0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x080005A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005A8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080005AC: jalr        $t9
    // 0x080005B0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005B0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_0:
    // 0x080005B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005B8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080005BC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080005C0: lui         $a1, 0xC110
    ctx->r5 = S32(0XC110 << 16);
    // 0x080005C4: lui         $a2, 0x43A2
    ctx->r6 = S32(0X43A2 << 16);
    // 0x080005C8: jalr        $t9
    // 0x080005CC: lui         $a3, 0x4377
    ctx->r7 = S32(0X4377 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005CC: lui         $a3, 0x4377
    ctx->r7 = S32(0X4377 << 16);
    after_1:
    // 0x080005D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005D4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080005D8: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x080005DC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080005E0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080005E4: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x080005E8: jalr        $t9
    // 0x080005EC: lui         $a3, 0x43A1
    ctx->r7 = S32(0X43A1 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080005EC: lui         $a3, 0x43A1
    ctx->r7 = S32(0X43A1 << 16);
    after_2:
L_080005F0:
    // 0x080005F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005F4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080005F8: jalr        $t9
    // 0x080005FC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005FC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_3:
    // 0x08000600: bne         $v0, $zero, L_08000624
    if (ctx->r2 != 0) {
        // 0x08000604: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(57, 0X644) << 16);
            goto L_08000624;
    }
    // 0x08000604: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X644) << 16);
    // 0x08000608: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800060C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000610: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000614: jalr        $t9
    // 0x08000618: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X644));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000618: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X644));
    after_4:
    // 0x0800061C: b           L_08000634
    // 0x08000620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000634;
    // 0x08000620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000624:
    // 0x08000624: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000628: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x0800062C: sh          $t8, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r24;
    // 0x08000630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000634:
    // 0x08000634: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000638: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x0800063C: jr          $ra
    // 0x08000640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08002B30_728FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B30: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(57, 0X2C70) << 16);
    // 0x08002B34: addiu       $v1, $v1, 0x2C70
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(57, 0X2C70));
    // 0x08002B38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08002B3C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x08002B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002B44: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002B48: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x08002B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B50: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x08002B54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002B58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B5C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002B60: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002B64: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002B68: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002B6C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08002B70: jalr        $t9
    // 0x08002B74: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B74: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_0:
    // 0x08002B78: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08002B7C: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08002B80: addiu       $t1, $v0, 0x50
    ctx->r9 = ADD32(ctx->r2, 0X50);
    // 0x08002B84: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08002B88: lhu         $a0, 0x94($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X94);
    // 0x08002B8C: addiu       $t4, $v0, -0x50
    ctx->r12 = ADD32(ctx->r2, -0X50);
    // 0x08002B90: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08002B94: slt         $at, $a0, $t2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x08002B98: bne         $at, $zero, L_08002BAC
    if (ctx->r1 != 0) {
        // 0x08002B9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002BAC;
    }
    // 0x08002B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002BA0: slt         $at, $t5, $a0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x08002BA4: beq         $at, $zero, L_08002BB4
    if (ctx->r1 == 0) {
        // 0x08002BA8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08002BB4;
    }
    // 0x08002BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08002BAC:
    // 0x08002BAC: b           L_08002BB4
    // 0x08002BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08002BB4;
    // 0x08002BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08002BB4:
    // 0x08002BB4: jr          $ra
    // 0x08002BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x08002BB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_08002C5C_7290EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002C60: jr          $ra
    // 0x08002C64: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002C64: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080002C8_726758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080002CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080002D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080002D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080002DC: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080002E0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080002E4: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x080002E8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080002EC: bne         $v1, $zero, L_08000568
    if (ctx->r3 != 0) {
        // 0x080002F0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000568;
    }
    // 0x080002F0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080002F4: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080002F8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080002FC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000300: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08000304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000308: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x0800030C: sw          $t9, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r25;
    // 0x08000310: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000314: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000318: jalr        $t9
    // 0x0800031C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800031C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000320: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000324: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x08000328: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x0800032C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000330: jalr        $t9
    // 0x08000334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000338: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x0800033C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x08000340: addiu       $v1, $v1, 0x27B8
    ctx->r3 = ADD32(ctx->r3, 0X27B8);
    // 0x08000344: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000348: lui         $a3, 0xC423
    ctx->r7 = S32(0XC423 << 16);
    // 0x0800034C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000350: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x08000354: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000358: jalr        $v1
    // 0x0800035C: lui         $a2, 0x4359
    ctx->r6 = S32(0X4359 << 16);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x0800035C: lui         $a2, 0x4359
    ctx->r6 = S32(0X4359 << 16);
    after_2:
    // 0x08000360: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000364: addiu       $v0, $v0, 0x2818
    ctx->r2 = ADD32(ctx->r2, 0X2818);
    // 0x08000368: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x0800036C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000370: lui         $a1, 0xC110
    ctx->r5 = S32(0XC110 << 16);
    // 0x08000374: lui         $a2, 0x432F
    ctx->r6 = S32(0X432F << 16);
    // 0x08000378: jalr        $v0
    // 0x0800037C: lui         $a3, 0xC3EA
    ctx->r7 = S32(0XC3EA << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0800037C: lui         $a3, 0xC3EA
    ctx->r7 = S32(0XC3EA << 16);
    after_3:
    // 0x08000380: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000384: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x08000388: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800038C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000390: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08000394: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x08000398: jalr        $t9
    // 0x0800039C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800039C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_4:
    // 0x080003A0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080003A4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080003A8: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x080003AC: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x080003B0: addiu       $t4, $zero, 0x138
    ctx->r12 = ADD32(0, 0X138);
    // 0x080003B4: addiu       $t5, $zero, 0xE0
    ctx->r13 = ADD32(0, 0XE0);
    // 0x080003B8: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x080003BC: sh          $t2, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r10;
    // 0x080003C0: sh          $t3, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r11;
    // 0x080003C4: sh          $t4, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r12;
    // 0x080003C8: jalr        $t9
    // 0x080003CC: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003CC: sh          $t5, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r13;
    after_5:
    // 0x080003D0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x080003D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080003D8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080003DC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x080003E0: jalr        $t9
    // 0x080003E4: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080003E4: sh          $zero, 0x8A($t6)
    MEM_H(0X8A, ctx->r14) = 0;
    after_6:
    // 0x080003E8: bne         $v0, $zero, L_080004AC
    if (ctx->r2 != 0) {
        // 0x080003EC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_080004AC;
    }
    // 0x080003EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080003F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F4: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080003F8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080003FC: jalr        $t9
    // 0x08000400: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000400: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_7:
    // 0x08000404: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000408: lui         $a3, 0xC423
    ctx->r7 = S32(0XC423 << 16);
    // 0x0800040C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000410: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000414: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x08000418: jalr        $t9
    // 0x0800041C: lui         $a2, 0x4359
    ctx->r6 = S32(0X4359 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800041C: lui         $a2, 0x4359
    ctx->r6 = S32(0X4359 << 16);
    after_8:
    // 0x08000420: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000424: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000428: lui         $a1, 0xC110
    ctx->r5 = S32(0XC110 << 16);
    // 0x0800042C: lui         $a2, 0x432F
    ctx->r6 = S32(0X432F << 16);
    // 0x08000430: jalr        $t9
    // 0x08000434: lui         $a3, 0xC3EA
    ctx->r7 = S32(0XC3EA << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000434: lui         $a3, 0xC3EA
    ctx->r7 = S32(0XC3EA << 16);
    after_9:
    // 0x08000438: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800043C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000440: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08000444: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000448: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800044C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000450: jalr        $t9
    // 0x08000454: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000454: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_10:
    // 0x08000458: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800045C: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000460: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000464: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000468: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800046C: jalr        $t9
    // 0x08000470: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000470: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_11:
    // 0x08000474: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000478: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x0800047C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000480: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08000484: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x08000488: jalr        $t9
    // 0x0800048C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800048C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_12:
    // 0x08000490: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000494: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000498: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X57C) << 16);
    // 0x0800049C: jalr        $t9
    // 0x080004A0: addiu       $a0, $a0, 0x57C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X57C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080004A0: addiu       $a0, $a0, 0x57C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X57C));
    after_13:
    // 0x080004A4: b           L_0800056C
    // 0x080004A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800056C;
    // 0x080004A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080004AC:
    // 0x080004AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080004B0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x080004B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004B8: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080004BC: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x080004C0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080004C4: jalr        $t9
    // 0x080004C8: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080004C8: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_14:
    // 0x080004CC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080004D0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080004D4: lui         $a1, 0x42C2
    ctx->r5 = S32(0X42C2 << 16);
    // 0x080004D8: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x080004DC: jalr        $t9
    // 0x080004E0: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080004E0: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    after_15:
    // 0x080004E4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080004E8: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x080004EC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x080004F0: lui         $a2, 0xC1E0
    ctx->r6 = S32(0XC1E0 << 16);
    // 0x080004F4: jalr        $t9
    // 0x080004F8: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080004F8: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    after_16:
    // 0x080004FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000500: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08000508: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0800050C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000510: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000514: jalr        $t9
    // 0x08000518: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000518: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_17:
    // 0x0800051C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000520: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08000524: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000528: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800052C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08000530: jalr        $t9
    // 0x08000534: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000534: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_18:
    // 0x08000538: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800053C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08000540: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08000544: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08000548: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x0800054C: jalr        $t9
    // 0x08000550: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000550: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_19:
    // 0x08000554: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000558: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800055C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0XAC0) << 16);
    // 0x08000560: jalr        $t9
    // 0x08000564: addiu       $a0, $a0, 0xAC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0XAC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000564: addiu       $a0, $a0, 0xAC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0XAC0));
    after_20:
L_08000568:
    // 0x08000568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800056C:
    // 0x0800056C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000574: jr          $ra
    // 0x08000578: nop

    TRACE_RETURN()
    return;
    // 0x08000578: nop

;}
RECOMP_FUNC void func_08002958_728DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800295C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002960: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002964: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800296C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002970: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002974: jalr        $t9
    // 0x08002978: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002978: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x0800297C: beq         $v0, $zero, L_0800299C
    if (ctx->r2 == 0) {
        // 0x08002980: lui         $t6, 0x40
        ctx->r14 = S32(0X40 << 16);
            goto L_0800299C;
    }
    // 0x08002980: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08002984: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002988: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800298C: jalr        $t9
    // 0x08002990: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002990: nop

    after_1:
    // 0x08002994: b           L_08002A70
    // 0x08002998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002A70;
    // 0x08002998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800299C:
    // 0x0800299C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029A0: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x080029A4: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x080029A8: addiu       $t8, $zero, 0x3C3
    ctx->r24 = ADD32(0, 0X3C3);
    // 0x080029AC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080029B0: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x080029B4: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x080029B8: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x080029BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029C0: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x080029C4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x080029C8: jalr        $t9
    // 0x080029CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080029CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080029D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029D4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080029D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029DC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x080029E0: jalr        $t9
    // 0x080029E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080029E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080029E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029EC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080029F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029F4: jalr        $t9
    // 0x080029F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080029F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x080029FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A00: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002A04: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x08002A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002A0C: jalr        $t9
    // 0x08002A10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002A10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x08002A14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A18: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002A1C: jalr        $t9
    // 0x08002A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08002A24: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X3104) << 16);
    // 0x08002A28: lwc1        $f0, 0x3104($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X3104));
    // 0x08002A2C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08002A30: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002A34: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002A38: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08002A3C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08002A40: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08002A44: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002A48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A50: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08002A54: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002A58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2A80) << 16);
    // 0x08002A5C: addiu       $a0, $a0, 0x2A80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2A80));
    // 0x08002A60: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002A64: jalr        $t9
    // 0x08002A68: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002A68: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    after_7:
    // 0x08002A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002A70:
    // 0x08002A70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002A74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002A78: jr          $ra
    // 0x08002A7C: nop

    TRACE_RETURN()
    return;
    // 0x08002A7C: nop

;}
RECOMP_FUNC void func_080027A0_728C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080027A4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080027A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080027AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080027B0: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080027B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080027B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027BC: addiu       $t9, $t9, -0x61C0
    ctx->r25 = ADD32(ctx->r25, -0X61C0);
    // 0x080027C0: lui         $a1, 0xBA9D
    ctx->r5 = S32(0XBA9D << 16);
    // 0x080027C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080027C8: ori         $a1, $a1, 0x4952
    ctx->r5 = ctx->r5 | 0X4952;
    // 0x080027CC: jalr        $t9
    // 0x080027D0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027D0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x080027D4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x080027D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x080027E0: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x080027E4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x080027E8: beq         $at, $zero, L_080027F4
    if (ctx->r1 == 0) {
        // 0x080027EC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080027F4;
    }
    // 0x080027EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_080027F4:
    // 0x080027F4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x080027F8: sb          $v0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r2;
    // 0x080027FC: subu        $t7, $t6, $a1
    ctx->r15 = SUB32(ctx->r14, ctx->r5);
    // 0x08002800: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002804: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002808: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800280C: jalr        $t9
    // 0x08002810: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002810: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_1:
    // 0x08002814: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x08002818: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x0800281C: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x08002820: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08002824: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08002828: jalr        $v1
    // 0x0800282C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x0800282C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x08002830: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002834: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08002838: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x0800283C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002840: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08002844: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x08002848: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x0800284C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08002850: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002854: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08002858: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800285C: div.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f2.d);
    // 0x08002860: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002868: add.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f0.d + ctx->f18.d;
    // 0x0800286C: sub.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d - ctx->f4.d;
    // 0x08002870: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002874: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x08002878: lbu         $a0, 0xD4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD4);
    // 0x0800287C: bnel        $a0, $at, L_080028D4
    if (ctx->r4 != ctx->r1) {
        // 0x08002880: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080028D4;
    }
    goto skip_0;
    // 0x08002880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x08002884: jalr        $v1
    // 0x08002888: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x08002888: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x0800288C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08002890: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08002894: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08002898: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800289C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x080028A0: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x080028A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080028A8: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080028AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080028B0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x080028B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080028B8: div.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f2.d);
    // 0x080028BC: add.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f0.d + ctx->f10.d;
    // 0x080028C0: sub.d       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f18.d - ctx->f16.d;
    // 0x080028C4: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x080028C8: b           L_08002924
    // 0x080028CC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
        goto L_08002924;
    // 0x080028CC: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x080028D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_080028D4:
    // 0x080028D4: bnel        $a0, $at, L_08002928
    if (ctx->r4 != ctx->r1) {
        // 0x080028D8: lbu         $t0, 0xD0($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0XD0);
            goto L_08002928;
    }
    goto skip_1;
    // 0x080028D8: lbu         $t0, 0xD0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD0);
    skip_1:
    // 0x080028DC: jalr        $v1
    // 0x080028E0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x080028E0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x080028E4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x080028E8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080028EC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x080028F0: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080028F4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x080028F8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x080028FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002900: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002904: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002908: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x0800290C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002910: div.d       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x08002914: add.d       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f0.d + ctx->f4.d;
    // 0x08002918: add.d       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f10.d + ctx->f8.d;
    // 0x0800291C: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x08002920: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
L_08002924:
    // 0x08002924: lbu         $t0, 0xD0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD0);
L_08002928:
    // 0x08002928: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800292C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002930: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x08002934: beql        $at, $zero, L_08002948
    if (ctx->r1 == 0) {
        // 0x08002938: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08002948;
    }
    goto skip_2;
    // 0x08002938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x0800293C: jalr        $t9
    // 0x08002940: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002940: nop

    after_5:
    // 0x08002944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002948:
    // 0x08002948: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0800294C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002950: jr          $ra
    // 0x08002954: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08002954: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_0800234C_7287DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800234C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002350: jr          $ra
    // 0x08002354: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002354: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000644_726AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000644: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000648: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800064C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000650: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08000654: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000658: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X220C) << 16);
    // 0x0800065C: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000660: bne         $t6, $zero, L_08000780
    if (ctx->r14 != 0) {
        // 0x08000664: addiu       $a1, $a1, 0x220C
        ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X220C));
            goto L_08000780;
    }
    // 0x08000664: addiu       $a1, $a1, 0x220C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X220C));
    // 0x08000668: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X306C) << 16);
    // 0x0800066C: lwc1        $f4, 0x306C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X306C));
    // 0x08000670: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000674: addiu       $v0, $v0, 0x410
    ctx->r2 = ADD32(ctx->r2, 0X410);
    // 0x08000678: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x0800067C: addiu       $t7, $zero, 0x1CF
    ctx->r15 = ADD32(0, 0X1CF);
    // 0x08000680: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x08000684: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000688: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800068C: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    // 0x08000690: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000694: jalr        $v0
    // 0x08000698: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000698: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x0800069C: beq         $v0, $zero, L_080006C4
    if (ctx->r2 == 0) {
        // 0x080006A0: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_080006C4;
    }
    // 0x080006A0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x080006A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006A8: addiu       $t8, $zero, 0x42
    ctx->r24 = ADD32(0, 0X42);
    // 0x080006AC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080006B0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080006B4: jalr        $t9
    // 0x080006B8: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006B8: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_1:
    // 0x080006BC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x080006C0: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_080006C4:
    // 0x080006C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080006C8: lui         $at, 0xC326
    ctx->r1 = S32(0XC326 << 16);
    // 0x080006CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080006D0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X2358) << 16);
    // 0x080006D4: addiu       $a1, $a1, 0x2358
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X2358));
    // 0x080006D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080006DC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x080006E0: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    // 0x080006E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080006E8: jalr        $t9
    // 0x080006EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x080006F0: beq         $v0, $zero, L_08000718
    if (ctx->r2 == 0) {
        // 0x080006F4: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_08000718;
    }
    // 0x080006F4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080006F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006FC: addiu       $t1, $zero, 0x42
    ctx->r9 = ADD32(0, 0X42);
    // 0x08000700: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000704: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000708: jalr        $t9
    // 0x0800070C: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800070C: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_3:
    // 0x08000710: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x08000714: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
L_08000718:
    // 0x08000718: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800071C: lui         $at, 0xC326
    ctx->r1 = S32(0XC326 << 16);
    // 0x08000720: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000724: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X2428) << 16);
    // 0x08000728: addiu       $a1, $a1, 0x2428
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X2428));
    // 0x0800072C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000730: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x08000734: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    // 0x08000738: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0800073C: jalr        $t9
    // 0x08000740: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000740: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x08000744: beq         $v0, $zero, L_0800076C
    if (ctx->r2 == 0) {
        // 0x08000748: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_0800076C;
    }
    // 0x08000748: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0800074C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000750: addiu       $t4, $zero, 0x42
    ctx->r12 = ADD32(0, 0X42);
    // 0x08000754: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000758: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x0800075C: jalr        $t9
    // 0x08000760: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000760: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_5:
    // 0x08000764: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000768: sw          $v0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r2;
L_0800076C:
    // 0x0800076C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000770: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000774: jalr        $t9
    // 0x08000778: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000778: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_6:
    // 0x0800077C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_08000780:
    // 0x08000780: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08000784: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08000788: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x0800078C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000790: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x08000794: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x08000798: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x0800079C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080007A0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x080007A4: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x080007A8: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x080007AC: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080007B0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x080007B4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x080007B8: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x080007BC: lhu         $t2, 0x14($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14);
    // 0x080007C0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x080007C4: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x080007C8: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x080007CC: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x080007D0: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080007D4: lhu         $t5, 0x16($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X16);
    // 0x080007D8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080007DC: andi        $t9, $t6, 0x3FF
    ctx->r25 = ctx->r14 & 0X3FF;
    // 0x080007E0: sh          $t9, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r25;
    // 0x080007E4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x080007E8: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x080007EC: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x080007F0: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x080007F4: sh          $t0, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r8;
    // 0x080007F8: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x080007FC: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x08000800: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000804: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000808: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x0800080C: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x08000810: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x08000814: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08000818: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0800081C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000820: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000824: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x08000828: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x0800082C: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x08000830: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000834: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000838: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x0800083C: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x08000840: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000844: bne         $v1, $at, L_080008E0
    if (ctx->r3 != ctx->r1) {
        // 0x08000848: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_080008E0;
    }
    // 0x08000848: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x0800084C: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x08000850: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000854: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x08000858: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x0800085C: beql        $t5, $zero, L_08000888
    if (ctx->r13 == 0) {
        // 0x08000860: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_08000888;
    }
    goto skip_0;
    // 0x08000860: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x08000864: lw          $t9, -0x39DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39DC);
    // 0x08000868: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x0800086C: sb          $t6, 0xD0($t9)
    MEM_B(0XD0, ctx->r25) = ctx->r14;
    // 0x08000870: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000874: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08000878: jalr        $t9
    // 0x0800087C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800087C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_7:
    // 0x08000880: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x08000884: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_08000888:
    // 0x08000888: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800088C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000890: beq         $a0, $zero, L_080008A4
    if (ctx->r4 == 0) {
        // 0x08000894: nop
    
            goto L_080008A4;
    }
    // 0x08000894: nop

    // 0x08000898: jalr        $t9
    // 0x0800089C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800089C: nop

    after_8:
    // 0x080008A0: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_080008A4:
    // 0x080008A4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080008A8: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080008AC: jalr        $t9
    // 0x080008B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080008B0: nop

    after_9:
    // 0x080008B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008B8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080008BC: jalr        $t9
    // 0x080008C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080008C0: nop

    after_10:
    // 0x080008C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X8F8) << 16);
    // 0x080008D0: jalr        $t9
    // 0x080008D4: addiu       $a0, $a0, 0x8F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X8F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080008D4: addiu       $a0, $a0, 0x8F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X8F8));
    after_11:
    // 0x080008D8: b           L_080008E8
    // 0x080008DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080008E8;
    // 0x080008DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080008E0:
    // 0x080008E0: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080008E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080008E8:
    // 0x080008E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080008EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080008F0: jr          $ra
    // 0x080008F4: nop

    TRACE_RETURN()
    return;
    // 0x080008F4: nop

;}
RECOMP_FUNC void func_08002C20_7290B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C2C: addiu       $t9, $t9, 0x3C90
    ctx->r25 = ADD32(ctx->r25, 0X3C90);
    // 0x08002C30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2C80) << 16);
    // 0x08002C34: addiu       $a0, $a0, 0x2C80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2C80));
    // 0x08002C38: jalr        $t9
    // 0x08002C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08002C40: bne         $v0, $zero, L_08002C50
    if (ctx->r2 != 0) {
        // 0x08002C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002C50;
    }
    // 0x08002C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C48: b           L_08002C54
    // 0x08002C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08002C54;
    // 0x08002C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08002C50:
    // 0x08002C50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08002C54:
    // 0x08002C54: jr          $ra
    // 0x08002C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x08002C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_08002AD8_728F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002ADC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002AE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002AE8: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08002AEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002AF0: jalr        $t9
    // 0x08002AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002AF8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08002AFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002B04: lw          $v0, 0xDC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XDC);
    // 0x08002B08: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002B0C: beq         $v0, $zero, L_08002B18
    if (ctx->r2 == 0) {
        // 0x08002B10: nop
    
            goto L_08002B18;
    }
    // 0x08002B10: nop

    // 0x08002B14: sb          $t7, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r15;
L_08002B18:
    // 0x08002B18: jalr        $t9
    // 0x08002B1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B1C: nop

    after_1:
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
