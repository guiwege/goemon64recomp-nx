#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_0800044C_70623C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800044C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08000450: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000454: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000458: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800045C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000460: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x08000464: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000468: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(38, 0X2B4) << 16);
    // 0x0800046C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000470: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x08000474: addiu       $a1, $a1, 0x2B4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(38, 0X2B4));
    // 0x08000478: jalr        $t9
    // 0x0800047C: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800047C: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    after_0:
    // 0x08000480: bne         $v0, $zero, L_08000490
    if (ctx->r2 != 0) {
        // 0x08000484: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08000490;
    }
    // 0x08000484: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000488: b           L_080006E4
    // 0x0800048C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006E4;
    // 0x0800048C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000490:
    // 0x08000490: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000494: addiu       $t9, $t9, 0x1610
    ctx->r25 = ADD32(ctx->r25, 0X1610);
    // 0x08000498: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800049C: jalr        $t9
    // 0x080004A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080004A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004A8: addiu       $t9, $t9, 0x15F8
    ctx->r25 = ADD32(ctx->r25, 0X15F8);
    // 0x080004AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080004B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x080004B4: jalr        $t9
    // 0x080004B8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004B8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x080004BC: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(38, 0X3A8) << 16);
    // 0x080004C0: addiu       $v0, $v0, 0x3A8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(38, 0X3A8));
    // 0x080004C4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x080004C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004CC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x080004D0: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x080004D4: jalr        $t9
    // 0x080004D8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004D8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x080004DC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(38, 0X8C) << 16);
    // 0x080004E0: addiu       $t9, $t9, 0x8C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(38, 0X8C));
    // 0x080004E4: jalr        $t9
    // 0x080004E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004E8: nop

    after_4:
    // 0x080004EC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x080004F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080004F4: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x080004F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080004FC: jalr        $t9
    // 0x08000500: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000500: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_5:
    // 0x08000504: bne         $v0, $zero, L_08000524
    if (ctx->r2 != 0) {
        // 0x08000508: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_08000524;
    }
    // 0x08000508: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x0800050C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000510: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000514: jalr        $t9
    // 0x08000518: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000518: nop

    after_6:
    // 0x0800051C: b           L_080006E4
    // 0x08000520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006E4;
    // 0x08000520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000524:
    // 0x08000524: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000528: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800052C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000530: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000534: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000538: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800053C: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08000540: jalr        $t9
    // 0x08000544: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000544: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x08000548: bne         $v0, $zero, L_08000568
    if (ctx->r2 != 0) {
        // 0x0800054C: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_08000568;
    }
    // 0x0800054C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x08000550: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000554: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000558: jalr        $t9
    // 0x0800055C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800055C: nop

    after_8:
    // 0x08000560: b           L_080006E4
    // 0x08000564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006E4;
    // 0x08000564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000568:
    // 0x08000568: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x0800056C: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x08000570: addiu       $a3, $a3, 0x3DC
    ctx->r7 = ADD32(ctx->r7, 0X3DC);
    // 0x08000574: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08000578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800057C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000580: jalr        $a3
    // 0x08000584: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_9;
    // 0x08000584: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_9:
    // 0x08000588: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x0800058C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000590: bne         $v0, $at, L_080005B0
    if (ctx->r2 != ctx->r1) {
        // 0x08000594: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_080005B0;
    }
    // 0x08000594: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000598: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x0800059C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080005A0: jalr        $t9
    // 0x080005A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080005A4: nop

    after_10:
    // 0x080005A8: b           L_080006E4
    // 0x080005AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006E4;
    // 0x080005AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080005B0:
    // 0x080005B0: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x080005B4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x080005B8: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x080005BC: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x080005C0: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x080005C4: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x080005C8: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x080005CC: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x080005D0: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x080005D4: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x080005D8: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x080005DC: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x080005E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080005E4: jalr        $a3
    // 0x080005E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_11;
    // 0x080005E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x080005EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080005F0: bne         $v0, $at, L_08000610
    if (ctx->r2 != ctx->r1) {
        // 0x080005F4: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_08000610;
    }
    // 0x080005F4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x080005F8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080005FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000600: jalr        $t9
    // 0x08000604: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000604: nop

    after_12:
    // 0x08000608: b           L_080006E4
    // 0x0800060C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080006E4;
    // 0x0800060C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000610:
    // 0x08000610: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000614: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(38, 0X1C54) << 16);
    // 0x08000618: lw          $t2, 0x1C54($t2)
    ctx->r10 = MEM_W(ctx->r10, (int16_t)RELOC_LO16(38, 0X1C54));
    // 0x0800061C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000620: addiu       $v0, $v0, 0x6F0
    ctx->r2 = ADD32(ctx->r2, 0X6F0);
    // 0x08000624: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x08000628: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x0800062C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x08000630: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08000634: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08000638: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x0800063C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x08000640: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x08000644: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000648: jalr        $v0
    // 0x0800064C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x0800064C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_13:
    // 0x08000650: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000654: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000658: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(38, 0X1C54) << 16);
    // 0x0800065C: lw          $t5, 0x1C54($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(38, 0X1C54));
    // 0x08000660: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x08000664: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08000668: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x0800066C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000670: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000674: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x08000678: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x0800067C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x08000680: jalr        $t9
    // 0x08000684: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000684: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_14:
    // 0x08000688: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x0800068C: addiu       $v1, $v1, 0x5AC
    ctx->r3 = ADD32(ctx->r3, 0X5AC);
    // 0x08000690: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000694: jalr        $v1
    // 0x08000698: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x08000698: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_15:
    // 0x0800069C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080006A0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x080006A4: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(38, 0X1C50) << 16);
    // 0x080006A8: lw          $t8, 0x1C50($t8)
    ctx->r24 = MEM_W(ctx->r24, (int16_t)RELOC_LO16(38, 0X1C50));
    // 0x080006AC: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x080006B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080006B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080006B8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080006BC: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x080006C0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x080006C4: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x080006C8: jalr        $t9
    // 0x080006CC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080006CC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_16:
    // 0x080006D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080006D4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x080006D8: jalr        $t9
    // 0x080006DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080006DC: nop

    after_17:
    // 0x080006E0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_080006E4:
    // 0x080006E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080006E8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080006EC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080006F0: jr          $ra
    // 0x080006F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080006F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000230_706020(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r4 = S32(RELOC_HI16(38, 0X1C50) << 16);
    // 0x08000248: jalr        $s0
    // 0x0800024C: lw          $a0, 0x1C50($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C50));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800024C: lw          $a0, 0x1C50($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C50));
    after_0:
    // 0x08000250: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C54) << 16);
    // 0x08000254: jalr        $s0
    // 0x08000258: lw          $a0, 0x1C54($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C54));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08000258: lw          $a0, 0x1C54($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C54));
    after_1:
    // 0x0800025C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C58) << 16);
    // 0x08000260: jalr        $s0
    // 0x08000264: lw          $a0, 0x1C58($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C58));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08000264: lw          $a0, 0x1C58($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C58));
    after_2:
    // 0x08000268: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C5C) << 16);
    // 0x0800026C: jalr        $s0
    // 0x08000270: lw          $a0, 0x1C5C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C5C));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08000270: lw          $a0, 0x1C5C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C5C));
    after_3:
    // 0x08000274: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C60) << 16);
    // 0x08000278: jalr        $s0
    // 0x0800027C: lw          $a0, 0x1C60($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C60));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800027C: lw          $a0, 0x1C60($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C60));
    after_4:
    // 0x08000280: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C64) << 16);
    // 0x08000284: jalr        $s0
    // 0x08000288: lw          $a0, 0x1C64($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C64));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000288: lw          $a0, 0x1C64($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C64));
    after_5:
    // 0x0800028C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(38, 0X1C68) << 16);
    // 0x08000290: jalr        $s0
    // 0x08000294: lw          $a0, 0x1C68($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C68));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08000294: lw          $a0, 0x1C68($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(38, 0X1C68));
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
RECOMP_FUNC void func_0800008C_705E7C(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C50) << 16);
    // 0x080000D0: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x080000D4: addiu       $t9, $zero, 0x4D4
    ctx->r25 = ADD32(0, 0X4D4);
    // 0x080000D8: sw          $v0, 0x1C50($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C50), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C54) << 16);
    // 0x08000100: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x08000104: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x08000108: sw          $v0, 0x1C54($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C54), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C58) << 16);
    // 0x08000130: addiu       $t2, $t2, 0x1000
    ctx->r10 = ADD32(ctx->r10, 0X1000);
    // 0x08000134: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x08000138: sw          $v0, 0x1C58($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C58), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C5C) << 16);
    // 0x08000160: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x08000164: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x08000168: sw          $v0, 0x1C5C($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C5C), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C60) << 16);
    // 0x08000190: addiu       $t6, $t6, 0x3000
    ctx->r14 = ADD32(ctx->r14, 0X3000);
    // 0x08000194: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x08000198: sw          $v0, 0x1C60($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C60), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C64) << 16);
    // 0x080001C0: addiu       $t8, $t8, 0x4000
    ctx->r24 = ADD32(ctx->r24, 0X4000);
    // 0x080001C4: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x080001C8: sw          $v0, 0x1C64($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C64), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C68) << 16);
    // 0x080001F0: addiu       $t0, $t0, 0x5000
    ctx->r8 = ADD32(ctx->r8, 0X5000);
    // 0x080001F4: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x080001F8: sw          $v0, 0x1C68($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C68), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(38, 0X1C6C) << 16);
    // 0x08000220: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000224: sw          $v0, 0x1C6C($at)
    MEM_W((int16_t)RELOC_LO16(38, 0X1C6C), ctx->r1) = ctx->r2;
    // 0x08000228: jr          $ra
    // 0x0800022C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800022C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000ACC_7068BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ACC: jr          $ra
    // 0x08000AD0: nop

    TRACE_RETURN()
    return;
    // 0x08000AD0: nop

;}
RECOMP_FUNC void func_08000938_706728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000938: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x0800093C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08000940: sh          $a2, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r6;
    // 0x08000944: swc1        $f12, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f12.u32l;
    // 0x08000948: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x0800094C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x08000950: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08000954: swc1        $f14, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f14.u32l;
    // 0x08000958: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x0800095C: nop

    // 0x08000960: sh          $t8, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r24;
    // 0x08000964: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x08000968: swc1        $f8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f8.u32l;
    // 0x0800096C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x08000970: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x08000974: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x08000978: jr          $ra
    // 0x0800097C: sh          $t0, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x0800097C: sh          $t0, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_080003A8_706198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080003AC: beq         $a0, $zero, L_08000410
    if (ctx->r4 == 0) {
        // 0x080003B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_08000410;
    }
    // 0x080003B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003B4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(38, 0X230) << 16);
    // 0x080003B8: addiu       $t9, $t9, 0x230
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(38, 0X230));
    // 0x080003BC: jalr        $t9
    // 0x080003C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x080003C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x080003C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003CC: addiu       $t9, $t9, 0x374
    ctx->r25 = ADD32(ctx->r25, 0X374);
    // 0x080003D0: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x080003D4: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x080003D8: jalr        $t9
    // 0x080003DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x080003E0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080003E4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080003E8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080003EC: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x080003F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080003F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F8: beql        $a1, $zero, L_08000414
    if (ctx->r5 == 0) {
        // 0x080003FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000414;
    }
    goto skip_0;
    // 0x080003FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000400: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000404: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000408: jalr        $t9
    // 0x0800040C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800040C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_08000410:
    // 0x08000410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000414:
    // 0x08000414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000418: jr          $ra
    // 0x0800041C: nop

    TRACE_RETURN()
    return;
    // 0x0800041C: nop

;}
RECOMP_FUNC void func_08000000_705DF0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x08000028: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x0800002C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000030: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000034: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000038: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800003C: jalr        $t9
    // 0x08000040: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000040: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
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
RECOMP_FUNC void func_080002B4_7060A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080002B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080002C0: addiu       $t9, $t9, 0x136C
    ctx->r25 = ADD32(ctx->r25, 0X136C);
    // 0x080002C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080002C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080002CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x080002D0: jalr        $t9
    // 0x080002D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080002D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x080002DC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080002E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002E4: lw          $t6, 0x64($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X64);
    // 0x080002E8: addiu       $t9, $t9, 0x9A4
    ctx->r25 = ADD32(ctx->r25, 0X9A4);
    // 0x080002EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080002F0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x080002F4: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x080002F8: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x080002FC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08000300: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x08000304: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x08000308: or          $t8, $s1, $at
    ctx->r24 = ctx->r17 | ctx->r1;
    // 0x0800030C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000310: jalr        $t9
    // 0x08000314: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000314: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    after_1:
    // 0x08000318: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800031C: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x08000320: jalr        $t9
    // 0x08000324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x08000328: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800032C: addiu       $t9, $t9, 0x980
    ctx->r25 = ADD32(ctx->r25, 0X980);
    // 0x08000330: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000334: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x08000338: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800033C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000340: jalr        $t9
    // 0x08000344: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000344: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_3:
    // 0x08000348: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x0800034C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08000350: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000354: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x08000358: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x0800035C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000360: addiu       $t9, $t9, 0x110C
    ctx->r25 = ADD32(ctx->r25, 0X110C);
    // 0x08000364: mflo        $a3
    ctx->r7 = lo;
    // 0x08000368: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0800036C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08000370: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000374: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    // 0x08000378: jalr        $t9
    // 0x0800037C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800037C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    after_4:
    // 0x08000380: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x08000384: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x08000388: bgez        $t4, L_08000394
    if (SIGNED(ctx->r12) >= 0) {
        // 0x0800038C: sw          $t4, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r12;
            goto L_08000394;
    }
    // 0x0800038C: sw          $t4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r12;
    // 0x08000390: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_08000394:
    // 0x08000394: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000398: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0800039C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080003A0: jr          $ra
    // 0x080003A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x080003A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08000060_705E50(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r4 = S32(RELOC_HI16(38, 0X1A90) << 16);
    // 0x08000074: jalr        $t9
    // 0x08000078: addiu       $a0, $a0, 0x1A90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(38, 0X1A90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000078: addiu       $a0, $a0, 0x1A90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(38, 0X1A90));
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
RECOMP_FUNC void func_08000420_706210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000420: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x08000424: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x08000428: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x0800042C: jr          $ra
    // 0x08000430: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x08000430: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_08000AAC_70689C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AAC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x08000AB0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000AB4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000AB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000ABC: sh          $a2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r6;
    // 0x08000AC0: sh          $a3, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r7;
    // 0x08000AC4: jr          $ra
    // 0x08000AC8: swc1        $f12, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x08000AC8: swc1        $f12, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_08000980_706770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000988: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800098C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000990: addiu       $t7, $zero, 0x1B2
    ctx->r15 = ADD32(0, 0X1B2);
    // 0x08000994: beq         $v0, $zero, L_080009B0
    if (ctx->r2 == 0) {
        // 0x08000998: lui         $t8, 0x8000
        ctx->r24 = S32(0X8000 << 16);
            goto L_080009B0;
    }
    // 0x08000998: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x0800099C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080009A0: beql        $v0, $at, L_08000A14
    if (ctx->r2 == ctx->r1) {
        // 0x080009A4: addiu       $v0, $a0, 0xD0
        ctx->r2 = ADD32(ctx->r4, 0XD0);
            goto L_08000A14;
    }
    goto skip_0;
    // 0x080009A4: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    skip_0:
    // 0x080009A8: b           L_08000AA0
    // 0x080009AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000AA0;
    // 0x080009AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080009B0:
    // 0x080009B0: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x080009B4: ori         $t8, $t8, 0x20
    ctx->r24 = ctx->r24 | 0X20;
    // 0x080009B8: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080009BC: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x080009C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009C4: sh          $t7, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r15;
    // 0x080009C8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080009CC: sw          $t0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r8;
    // 0x080009D0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080009D4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080009D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080009DC: jalr        $t9
    // 0x080009E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x080009E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1C14) << 16);
    // 0x080009E8: lwc1        $f0, 0x1C14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(38, 0X1C14));
    // 0x080009EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080009F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080009F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x080009F8: sb          $v0, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r2;
    // 0x080009FC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08000A00: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08000A04: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08000A08: b           L_08000A9C
    // 0x08000A0C: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
        goto L_08000A9C;
    // 0x08000A0C: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
    // 0x08000A10: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
L_08000A14:
    // 0x08000A14: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x08000A18: lhu         $t1, 0x16($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X16);
    // 0x08000A1C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000A20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000A24: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x08000A28: sh          $t3, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r11;
    // 0x08000A2C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x08000A30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000A34: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x08000A38: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x08000A3C: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08000A40: lwc1        $f0, 0xC($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0XC);
    // 0x08000A44: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000A48: nop

    // 0x08000A4C: bc1fl       L_08000A64
    if (!c1cs) {
        // 0x08000A50: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08000A64;
    }
    goto skip_1;
    // 0x08000A50: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
    // 0x08000A54: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000A58: b           L_08000A64
    // 0x08000A5C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08000A64;
    // 0x08000A5C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08000A60: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08000A64:
    // 0x08000A64: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x08000A68: nop

    // 0x08000A6C: bc1fl       L_08000A8C
    if (!c1cs) {
        // 0x08000A70: lw          $t7, 0x60($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X60);
            goto L_08000A8C;
    }
    goto skip_2;
    // 0x08000A70: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    skip_2:
    // 0x08000A74: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x08000A78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000A7C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08000A80: b           L_08000A9C
    // 0x08000A84: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
        goto L_08000A9C;
    // 0x08000A84: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000A88: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
L_08000A8C:
    // 0x08000A8C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08000A90: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000A94: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000A98: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
L_08000A9C:
    // 0x08000A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000AA0:
    // 0x08000AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AA4: jr          $ra
    // 0x08000AA8: nop

    TRACE_RETURN()
    return;
    // 0x08000AA8: nop

;}
RECOMP_FUNC void func_08000AD4_7068C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AD4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x08000AD8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000ADC: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08000AE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000AE4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000AE8: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x08000AEC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x08000AF0: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08000AF4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000AF8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000AFC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000B00: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08000B04: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08000B08: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08000B0C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08000B10: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x08000B14: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08000B18: lh          $v1, 0x307E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X307E);
    // 0x08000B1C: lhu         $a1, 0x307A($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X307A);
    // 0x08000B20: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x08000B24: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x08000B28: beq         $at, $zero, L_08000B38
    if (ctx->r1 == 0) {
        // 0x08000B2C: ori         $t9, $a1, 0x200
        ctx->r25 = ctx->r5 | 0X200;
            goto L_08000B38;
    }
    // 0x08000B2C: ori         $t9, $a1, 0x200
    ctx->r25 = ctx->r5 | 0X200;
    // 0x08000B30: b           L_08000B48
    // 0x08000B34: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_08000B48;
    // 0x08000B34: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_08000B38:
    // 0x08000B38: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x08000B3C: bne         $at, $zero, L_08000B48
    if (ctx->r1 != 0) {
        // 0x08000B40: ori         $t0, $a1, 0x100
        ctx->r8 = ctx->r5 | 0X100;
            goto L_08000B48;
    }
    // 0x08000B40: ori         $t0, $a1, 0x100
    ctx->r8 = ctx->r5 | 0X100;
    // 0x08000B44: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_08000B48:
    // 0x08000B48: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x08000B4C: ori         $t1, $a1, 0x400
    ctx->r9 = ctx->r5 | 0X400;
    // 0x08000B50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000B54: slti        $at, $v1, -0x28
    ctx->r1 = SIGNED(ctx->r3) < -0X28 ? 1 : 0;
    // 0x08000B58: beq         $at, $zero, L_08000B68
    if (ctx->r1 == 0) {
        // 0x08000B5C: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_08000B68;
    }
    // 0x08000B5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000B60: b           L_08000B78
    // 0x08000B64: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
        goto L_08000B78;
    // 0x08000B64: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
L_08000B68:
    // 0x08000B68: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x08000B6C: bne         $at, $zero, L_08000B78
    if (ctx->r1 != 0) {
        // 0x08000B70: ori         $t2, $a1, 0x800
        ctx->r10 = ctx->r5 | 0X800;
            goto L_08000B78;
    }
    // 0x08000B70: ori         $t2, $a1, 0x800
    ctx->r10 = ctx->r5 | 0X800;
    // 0x08000B74: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_08000B78:
    // 0x08000B78: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x08000B7C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08000B80: bnel        $a1, $t3, L_08000B9C
    if (ctx->r5 != ctx->r11) {
        // 0x08000B84: sh          $t6, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r14;
            goto L_08000B9C;
    }
    goto skip_0;
    // 0x08000B84: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
    skip_0:
    // 0x08000B88: lhu         $t4, 0x6($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X6);
    // 0x08000B8C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x08000B90: b           L_08000B9C
    // 0x08000B94: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
        goto L_08000B9C;
    // 0x08000B94: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
    // 0x08000B98: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
L_08000B9C:
    // 0x08000B9C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000BA0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000BA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BA8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000BAC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000BB0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000BB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000BB8: addiu       $t9, $t9, 0x40A8
    ctx->r25 = ADD32(ctx->r25, 0X40A8);
    // 0x08000BBC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x08000BC0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000BC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08000BC8: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x08000BCC: jalr        $t9
    // 0x08000BD0: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BD0: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x08000BD4: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x08000BD8: lwc1        $f2, 0x7C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x08000BDC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000BE0: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000BE4: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08000BE8: sh          $v0, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r2;
    // 0x08000BEC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000BF0: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000BF4: jalr        $t9
    // 0x08000BF8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BF8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x08000BFC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x08000C00: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x08000C04: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x08000C08: beq         $at, $zero, L_0800192C
    if (ctx->r1 == 0) {
        // 0x08000C0C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_0800192C;
    }
    // 0x08000C0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08000C10: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1C18) << 16);
    // 0x08000C14: addu        $at, $at, $t7
    gpr jr_addend_08000C1C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000C18: lw          $t7, 0x1C18($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(38, 0X1C18));
    // 0x08000C1C: jr          $t7
    // 0x08000C20: nop

    switch (jr_addend_08000C1C >> 2) {
        case 0: goto L_08000C24; break;
        case 1: goto L_08001440; break;
        case 2: goto L_0800146C; break;
        case 3: goto L_080014D4; break;
        case 4: goto L_08001A74; break;
        case 5: goto L_080016F0; break;
        case 6: goto L_080017C0; break;
        case 7: goto L_08001848; break;
        default: switch_error(__func__, 0x08000C1C, 0x08001C18);
    }
    // 0x08000C20: nop

L_08000C24:
    // 0x08000C24: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x08000C28: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000C2C: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000C30: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x08000C34: bne         $at, $zero, L_0800192C
    if (ctx->r1 != 0) {
        // 0x08000C38: nop
    
            goto L_0800192C;
    }
    // 0x08000C38: nop

    // 0x08000C3C: jalr        $t9
    // 0x08000C40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C40: nop

    after_2:
    // 0x08000C44: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(38, 0X60) << 16);
    // 0x08000C48: addiu       $t9, $t9, 0x60
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(38, 0X60));
    // 0x08000C4C: jalr        $t9
    // 0x08000C50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C50: nop

    after_3:
    // 0x08000C54: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000C58: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000C5C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000C60: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x08000C64: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000C68: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08000C6C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08000C70: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08000C74: sb          $t0, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r8;
    // 0x08000C78: addiu       $t2, $t2, -0x3994
    ctx->r10 = ADD32(ctx->r10, -0X3994);
    // 0x08000C7C: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x08000C80: addiu       $t4, $v0, 0x30
    ctx->r12 = ADD32(ctx->r2, 0X30);
L_08000C84:
    // 0x08000C84: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x08000C88: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x08000C8C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x08000C90: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x08000C94: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x08000C98: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x08000C9C: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x08000CA0: bne         $t5, $t4, L_08000C84
    if (ctx->r13 != ctx->r12) {
        // 0x08000CA4: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_08000C84;
    }
    // 0x08000CA4: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x08000CA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08000CB0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x08000CB4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08000CB8: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x08000CBC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x08000CC0: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x08000CC4: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x08000CC8: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x08000CCC: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x08000CD0: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x08000CD4: jalr        $t9
    // 0x08000CD8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CD8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    after_4:
    // 0x08000CDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CE0: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000CE4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08000CE8: jalr        $t9
    // 0x08000CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08000CF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CF4: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000CF8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x08000CFC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x08000D00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000D04: jalr        $t9
    // 0x08000D08: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D08: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    after_6:
    // 0x08000D0C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D10: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000D14: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000D1C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_7:
    // 0x08000D20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D24: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000D28: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000D2C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x08000D30: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x08000D34: jalr        $t9
    // 0x08000D38: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D38: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_8:
    // 0x08000D3C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D40: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000D44: jalr        $t9
    // 0x08000D48: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000D48: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    after_9:
    // 0x08000D4C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D50: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000D54: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x08000D58: jalr        $t9
    // 0x08000D5C: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000D5C: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    after_10:
    // 0x08000D60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000D64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000D68: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08000D6C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x08000D70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000D74: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000D78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000D7C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x08000D80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D84: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08000D88: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08000D8C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000D90: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08000D94: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000D98: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08000D9C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08000DA0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08000DA4: jalr        $t9
    // 0x08000DA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000DA8: nop

    after_11:
    // 0x08000DAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DB0: addiu       $t9, $t9, 0x1C04
    ctx->r25 = ADD32(ctx->r25, 0X1C04);
    // 0x08000DB4: jalr        $t9
    // 0x08000DB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000DB8: nop

    after_12:
    // 0x08000DBC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DC0: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08000DC4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08000DC8: jalr        $t9
    // 0x08000DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x08000DD0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DD4: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08000DD8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08000DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000DE0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x08000DE4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x08000DE8: jalr        $t9
    // 0x08000DEC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000DEC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_14:
    // 0x08000DF0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(38, 0X6F8) << 16);
    // 0x08000DF4: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(38, 0X0) << 16);
    // 0x08000DF8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(38, 0X0));
    // 0x08000DFC: addiu       $a1, $a1, 0x6F8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(38, 0X6F8));
    // 0x08000E00: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000E04: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000E08: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08000E0C: jalr        $v0
    // 0x08000E10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x08000E10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_15:
    // 0x08000E14: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000E18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x08000E20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000E24: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000E28: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(38, 0X938) << 16);
    // 0x08000E2C: addiu       $v1, $v1, 0x938
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(38, 0X938));
    // 0x08000E30: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08000E34: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x08000E38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000E3C: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x08000E40: addiu       $a2, $zero, 0x255
    ctx->r6 = ADD32(0, 0X255);
    // 0x08000E44: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08000E48: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x08000E4C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x08000E50: jalr        $v1
    // 0x08000E54: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_16;
    // 0x08000E54: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x08000E58: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x08000E5C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08000E60: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08000E64: bnel        $t0, $zero, L_08000E78
    if (ctx->r8 != 0) {
        // 0x08000E68: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08000E78;
    }
    goto skip_1;
    // 0x08000E68: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_1:
    // 0x08000E6C: b           L_0800192C
    // 0x08000E70: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_0800192C;
    // 0x08000E70: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x08000E74: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08000E78:
    // 0x08000E78: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_17:
    // 0x08000E84: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000E88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000E8C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x08000E90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000E94: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08000E98: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x08000E9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000EA0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08000EA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000EA8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x08000EAC: addiu       $a2, $zero, 0x3AA
    ctx->r6 = ADD32(0, 0X3AA);
    // 0x08000EB0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08000EB4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08000EB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x08000EBC: jalr        $t9
    // 0x08000EC0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000EC0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x08000EC4: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x08000EC8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08000ECC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08000ED0: bnel        $t3, $zero, L_08000EE4
    if (ctx->r11 != 0) {
        // 0x08000ED4: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08000EE4;
    }
    goto skip_2;
    // 0x08000ED4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_2:
    // 0x08000ED8: b           L_0800192C
    // 0x08000EDC: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_0800192C;
    // 0x08000EDC: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x08000EE0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08000EE4:
    // 0x08000EE4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08000EE8: jalr        $t9
    // 0x08000EEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000EEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_19:
    // 0x08000EF0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000EF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000EF8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08000EFC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x08000F00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000F04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000F08: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08000F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000F10: lui         $a1, 0x4311
    ctx->r5 = S32(0X4311 << 16);
    // 0x08000F14: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x08000F18: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08000F1C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x08000F20: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x08000F24: jalr        $t9
    // 0x08000F28: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000F28: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x08000F2C: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x08000F30: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x08000F34: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08000F38: bnel        $t5, $zero, L_08000F4C
    if (ctx->r13 != 0) {
        // 0x08000F3C: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08000F4C;
    }
    goto skip_3;
    // 0x08000F3C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_3:
    // 0x08000F40: b           L_0800192C
    // 0x08000F44: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_0800192C;
    // 0x08000F44: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x08000F48: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08000F4C:
    // 0x08000F4C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08000F50: jalr        $t9
    // 0x08000F54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000F54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_21:
    // 0x08000F58: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000F5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F60: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08000F64: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x08000F68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000F6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000F70: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08000F74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000F78: lui         $a1, 0x4343
    ctx->r5 = S32(0X4343 << 16);
    // 0x08000F7C: addiu       $a2, $zero, 0x1AA
    ctx->r6 = ADD32(0, 0X1AA);
    // 0x08000F80: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08000F84: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08000F88: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x08000F8C: jalr        $t9
    // 0x08000F90: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000F90: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_22:
    // 0x08000F94: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x08000F98: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08000F9C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08000FA0: bne         $t6, $zero, L_08000FB0
    if (ctx->r14 != 0) {
        // 0x08000FA4: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(38, 0X980) << 16);
            goto L_08000FB0;
    }
    // 0x08000FA4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(38, 0X980) << 16);
    // 0x08000FA8: b           L_0800192C
    // 0x08000FAC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_0800192C;
    // 0x08000FAC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000FB0:
    // 0x08000FB0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08000FB4: addiu       $a1, $a1, 0x980
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(38, 0X980));
    // 0x08000FB8: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x08000FBC: jalr        $t9
    // 0x08000FC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000FC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_23:
    // 0x08000FC4: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(38, 0XAAC) << 16);
    // 0x08000FC8: addiu       $v1, $v1, 0xAAC
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(38, 0XAAC));
    // 0x08000FCC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08000FD0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x08000FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000FD8: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    // 0x08000FDC: addiu       $a2, $zero, 0x1AA
    ctx->r6 = ADD32(0, 0X1AA);
    // 0x08000FE0: jalr        $v1
    // 0x08000FE4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_24;
    // 0x08000FE4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_24:
    // 0x08000FE8: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x08000FEC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08000FF0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08000FF4: bnel        $t8, $zero, L_08001008
    if (ctx->r24 != 0) {
        // 0x08000FF8: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001008;
    }
    goto skip_4;
    // 0x08000FF8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_4:
    // 0x08000FFC: b           L_0800192C
    // 0x08001000: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_0800192C;
    // 0x08001000: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x08001004: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001008:
    // 0x08001008: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x0800100C: jalr        $t9
    // 0x08001010: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001010: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_25:
    // 0x08001014: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001018: lui         $a1, 0x438E
    ctx->r5 = S32(0X438E << 16);
    // 0x0800101C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08001020: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001028: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x0800102C: jalr        $t9
    // 0x08001030: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001030: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    after_26:
    // 0x08001034: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x08001038: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x0800103C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001040: bnel        $t1, $zero, L_08001054
    if (ctx->r9 != 0) {
        // 0x08001044: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001054;
    }
    goto skip_5;
    // 0x08001044: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_5:
    // 0x08001048: b           L_0800192C
    // 0x0800104C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_0800192C;
    // 0x0800104C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x08001050: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001054:
    // 0x08001054: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08001058: jalr        $t9
    // 0x0800105C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x0800105C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_27:
    // 0x08001060: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001064: lui         $a1, 0x439A
    ctx->r5 = S32(0X439A << 16);
    // 0x08001068: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0800106C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001074: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x08001078: jalr        $t9
    // 0x0800107C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800107C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_28:
    // 0x08001080: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x08001084: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x08001088: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x0800108C: bnel        $t4, $zero, L_080010A0
    if (ctx->r12 != 0) {
        // 0x08001090: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_080010A0;
    }
    goto skip_6;
    // 0x08001090: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_6:
    // 0x08001094: b           L_0800192C
    // 0x08001098: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800192C;
    // 0x08001098: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x0800109C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_080010A0:
    // 0x080010A0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x080010A4: jalr        $t9
    // 0x080010A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x080010A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_29:
    // 0x080010AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080010B0: lui         $a1, 0x43A7
    ctx->r5 = S32(0X43A7 << 16);
    // 0x080010B4: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x080010B8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080010BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080010C0: addiu       $a2, $zero, 0x1AA
    ctx->r6 = ADD32(0, 0X1AA);
    // 0x080010C4: jalr        $t9
    // 0x080010C8: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080010C8: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    after_30:
    // 0x080010CC: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x080010D0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x080010D4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080010D8: bnel        $t2, $zero, L_080010EC
    if (ctx->r10 != 0) {
        // 0x080010DC: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_080010EC;
    }
    goto skip_7;
    // 0x080010DC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_7:
    // 0x080010E0: b           L_0800192C
    // 0x080010E4: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_0800192C;
    // 0x080010E4: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x080010E8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_080010EC:
    // 0x080010EC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x080010F0: jalr        $t9
    // 0x080010F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080010F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_31:
    // 0x080010F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080010FC: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08001100: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001104: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    // 0x08001108: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x0800110C: jalr        $t9
    // 0x08001110: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001110: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_32:
    // 0x08001114: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x08001118: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x0800111C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001120: bnel        $t7, $zero, L_08001134
    if (ctx->r15 != 0) {
        // 0x08001124: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001134;
    }
    goto skip_8;
    // 0x08001124: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_8:
    // 0x08001128: b           L_0800192C
    // 0x0800112C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_0800192C;
    // 0x0800112C: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x08001130: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001134:
    // 0x08001134: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08001138: jalr        $t9
    // 0x0800113C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x0800113C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_33:
    // 0x08001140: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001144: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001148: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x0800114C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x08001150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001154: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001158: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0800115C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001160: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    // 0x08001164: addiu       $a2, $zero, 0x3AA
    ctx->r6 = ADD32(0, 0X3AA);
    // 0x08001168: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x0800116C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x08001170: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x08001174: jalr        $t9
    // 0x08001178: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001178: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_34:
    // 0x0800117C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x08001180: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08001184: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001188: bnel        $t0, $zero, L_0800119C
    if (ctx->r8 != 0) {
        // 0x0800118C: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_0800119C;
    }
    goto skip_9;
    // 0x0800118C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_9:
    // 0x08001190: b           L_0800192C
    // 0x08001194: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_0800192C;
    // 0x08001194: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x08001198: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_0800119C:
    // 0x0800119C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x080011A0: jalr        $t9
    // 0x080011A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x080011A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_35:
    // 0x080011A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080011AC: lui         $a1, 0x43EE
    ctx->r5 = S32(0X43EE << 16);
    // 0x080011B0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x080011B4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080011B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080011BC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x080011C0: jalr        $t9
    // 0x080011C4: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x080011C4: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    after_36:
    // 0x080011C8: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x080011CC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x080011D0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080011D4: bnel        $t3, $zero, L_080011E8
    if (ctx->r11 != 0) {
        // 0x080011D8: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_080011E8;
    }
    goto skip_10;
    // 0x080011D8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_10:
    // 0x080011DC: b           L_0800192C
    // 0x080011E0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_0800192C;
    // 0x080011E0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x080011E4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_080011E8:
    // 0x080011E8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080011EC: jalr        $t9
    // 0x080011F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x080011F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_37:
    // 0x080011F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080011F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080011FC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08001200: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x08001204: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800120C: lui         $a1, 0x43F7
    ctx->r5 = S32(0X43F7 << 16);
    // 0x08001210: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08001214: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800121C: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x08001220: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x08001224: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08001228: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x0800122C: jalr        $t9
    // 0x08001230: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001230: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_38:
    // 0x08001234: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x08001238: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x0800123C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001240: bnel        $t5, $zero, L_08001254
    if (ctx->r13 != 0) {
        // 0x08001244: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001254;
    }
    goto skip_11;
    // 0x08001244: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_11:
    // 0x08001248: b           L_0800192C
    // 0x0800124C: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_0800192C;
    // 0x0800124C: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x08001250: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001254:
    // 0x08001254: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08001258: jalr        $t9
    // 0x0800125C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x0800125C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_39:
    // 0x08001260: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001264: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x08001268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800126C: lui         $a1, 0x4402
    ctx->r5 = S32(0X4402 << 16);
    // 0x08001270: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x08001274: jalr        $t9
    // 0x08001278: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001278: ori         $a3, $zero, 0xFFFE
    ctx->r7 = 0 | 0XFFFE;
    after_40:
    // 0x0800127C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x08001280: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08001284: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001288: bnel        $t6, $zero, L_0800129C
    if (ctx->r14 != 0) {
        // 0x0800128C: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_0800129C;
    }
    goto skip_12;
    // 0x0800128C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_12:
    // 0x08001290: b           L_0800192C
    // 0x08001294: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_0800192C;
    // 0x08001294: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x08001298: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_0800129C:
    // 0x0800129C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080012A0: jalr        $t9
    // 0x080012A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080012A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_41:
    // 0x080012A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080012AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080012B0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x080012B4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x080012B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080012BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080012C0: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x080012C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080012C8: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    // 0x080012CC: addiu       $a2, $zero, 0x255
    ctx->r6 = ADD32(0, 0X255);
    // 0x080012D0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x080012D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x080012D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x080012DC: jalr        $t9
    // 0x080012E0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x080012E0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_42:
    // 0x080012E4: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x080012E8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x080012EC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080012F0: bnel        $t8, $zero, L_08001304
    if (ctx->r24 != 0) {
        // 0x080012F4: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001304;
    }
    goto skip_13;
    // 0x080012F4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_13:
    // 0x080012F8: b           L_0800192C
    // 0x080012FC: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_0800192C;
    // 0x080012FC: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x08001300: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001304:
    // 0x08001304: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08001308: jalr        $t9
    // 0x0800130C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800130C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_43:
    // 0x08001310: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001314: lui         $a1, 0x440E
    ctx->r5 = S32(0X440E << 16);
    // 0x08001318: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0800131C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08001320: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001324: addiu       $a2, $zero, 0x1AA
    ctx->r6 = ADD32(0, 0X1AA);
    // 0x08001328: jalr        $t9
    // 0x0800132C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x0800132C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_44:
    // 0x08001330: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x08001334: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08001338: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x0800133C: bnel        $t1, $zero, L_08001350
    if (ctx->r9 != 0) {
        // 0x08001340: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_08001350;
    }
    goto skip_14;
    // 0x08001340: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_14:
    // 0x08001344: b           L_0800192C
    // 0x08001348: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_0800192C;
    // 0x08001348: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x0800134C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_08001350:
    // 0x08001350: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08001354: jalr        $t9
    // 0x08001358: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001358: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_45:
    // 0x0800135C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001360: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001364: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08001368: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x0800136C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001370: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001374: lui         $a1, 0x4414
    ctx->r5 = S32(0X4414 << 16);
    // 0x08001378: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x0800137C: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x08001380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001384: addiu       $a2, $zero, 0x3AA
    ctx->r6 = ADD32(0, 0X3AA);
    // 0x08001388: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x0800138C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08001390: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x08001394: jalr        $t9
    // 0x08001398: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001398: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_46:
    // 0x0800139C: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x080013A0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x080013A4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080013A8: bnel        $t4, $zero, L_080013BC
    if (ctx->r12 != 0) {
        // 0x080013AC: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_080013BC;
    }
    goto skip_15;
    // 0x080013AC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    skip_15:
    // 0x080013B0: b           L_0800192C
    // 0x080013B4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800192C;
    // 0x080013B4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x080013B8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
L_080013BC:
    // 0x080013BC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080013C0: jalr        $t9
    // 0x080013C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x080013C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_47:
    // 0x080013C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080013CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080013D0: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x080013D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080013D8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x080013DC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x080013E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080013E4: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x080013E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080013EC: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    // 0x080013F0: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x080013F4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x080013F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x080013FC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x08001400: jalr        $t9
    // 0x08001404: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08001404: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_48:
    // 0x08001408: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x0800140C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08001410: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001414: bne         $t2, $zero, L_08001424
    if (ctx->r10 != 0) {
        // 0x08001418: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_08001424;
    }
    // 0x08001418: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x0800141C: b           L_0800192C
    // 0x08001420: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_0800192C;
    // 0x08001420: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001424:
    // 0x08001424: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x08001428: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x0800142C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001430: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08001434: sb          $t7, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r15;
    // 0x08001438: b           L_0800192C
    // 0x0800143C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_0800192C;
    // 0x0800143C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_08001440:
    // 0x08001440: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x08001444: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001448: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800144C: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x08001450: bne         $at, $zero, L_0800192C
    if (ctx->r1 != 0) {
        // 0x08001454: nop
    
            goto L_0800192C;
    }
    // 0x08001454: nop

    // 0x08001458: jalr        $t9
    // 0x0800145C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x0800145C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    after_49:
    // 0x08001460: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x08001464: b           L_0800192C
    // 0x08001468: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_0800192C;
    // 0x08001468: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_0800146C:
    // 0x0800146C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001470: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001474: jalr        $t9
    // 0x08001478: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08001478: nop

    after_50:
    // 0x0800147C: bne         $v0, $zero, L_0800192C
    if (ctx->r2 != 0) {
        // 0x08001480: lw          $a0, 0x98($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X98);
            goto L_0800192C;
    }
    // 0x08001480: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08001484: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(38, 0X44C) << 16);
    // 0x08001488: addiu       $t9, $t9, 0x44C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(38, 0X44C));
    // 0x0800148C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001494: jalr        $t9
    // 0x08001498: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001498: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_51:
    // 0x0800149C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(38, 0X420) << 16);
    // 0x080014A0: addiu       $t9, $t9, 0x420
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(38, 0X420));
    // 0x080014A4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x080014A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080014AC: jalr        $t9
    // 0x080014B0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x080014B0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_52:
    // 0x080014B4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x080014B8: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x080014BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080014C0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x080014C4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x080014C8: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    // 0x080014CC: b           L_0800192C
    // 0x080014D0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800192C;
    // 0x080014D0: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_080014D4:
    // 0x080014D4: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x080014D8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    // 0x080014DC: andi        $t2, $a2, 0x8
    ctx->r10 = ctx->r6 & 0X8;
    // 0x080014E0: beq         $t2, $zero, L_08001514
    if (ctx->r10 == 0) {
        // 0x080014E4: andi        $t1, $a2, 0x4
        ctx->r9 = ctx->r6 & 0X4;
            goto L_08001514;
    }
    // 0x080014E4: andi        $t1, $a2, 0x4
    ctx->r9 = ctx->r6 & 0X4;
    // 0x080014E8: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x080014EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080014F0: bne         $t6, $at, L_08001514
    if (ctx->r14 != ctx->r1) {
        // 0x080014F4: nop
    
            goto L_08001514;
    }
    // 0x080014F4: nop

    // 0x080014F8: lb          $t7, 0x1($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1);
    // 0x080014FC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08001500: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
    // 0x08001504: lb          $t0, 0x1($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X1);
    // 0x08001508: bgez        $t0, L_08001514
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800150C: nop
    
            goto L_08001514;
    }
    // 0x0800150C: nop

    // 0x08001510: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_08001514:
    // 0x08001514: beq         $t1, $zero, L_08001550
    if (ctx->r9 == 0) {
        // 0x08001518: lb          $v0, 0x1($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1);
            goto L_08001550;
    }
    // 0x08001518: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
    // 0x0800151C: lhu         $t3, 0x6($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X6);
    // 0x08001520: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001524: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x08001528: bnel        $t3, $at, L_08001554
    if (ctx->r11 != ctx->r1) {
        // 0x0800152C: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_08001554;
    }
    goto skip_16;
    // 0x0800152C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    skip_16:
    // 0x08001530: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x08001534: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
    // 0x08001538: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x0800153C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x08001540: bnel        $at, $zero, L_08001554
    if (ctx->r1 != 0) {
        // 0x08001544: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_08001554;
    }
    goto skip_17;
    // 0x08001544: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    skip_17:
    // 0x08001548: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x0800154C: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
L_08001550:
    // 0x08001550: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
L_08001554:
    // 0x08001554: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1A9C) << 16);
    // 0x08001558: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x0800155C: lwc1        $f16, 0x1A9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(38, 0X1A9C));
    // 0x08001560: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08001564: addiu       $v1, $v1, 0x24A0
    ctx->r3 = ADD32(ctx->r3, 0X24A0);
    // 0x08001568: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x0800156C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001570: jalr        $v1
    // 0x08001574: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_53;
    // 0x08001574: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_53:
    // 0x08001578: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800157C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001580: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001584: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x08001588: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x0800158C: jalr        $t9
    // 0x08001590: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001590: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_54:
    // 0x08001594: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x08001598: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800159C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x080015A0: jalr        $t9
    // 0x080015A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x080015A4: nop

    after_55:
    // 0x080015A8: lui         $at, 0x442A
    ctx->r1 = S32(0X442A << 16);
    // 0x080015AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080015B0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x080015B4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1C38) << 16);
    // 0x080015B8: ldc1        $f18, 0x1C38($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(38, 0X1C38));
    // 0x080015BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080015C0: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x080015C4: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x080015C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080015CC: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080015D0: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x080015D4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080015D8: add.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x080015DC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x080015E0: nop

    // 0x080015E4: bc1fl       L_080015F4
    if (!c1cs) {
        // 0x080015E8: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_080015F4;
    }
    goto skip_18;
    // 0x080015E8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    skip_18:
    // 0x080015EC: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x080015F0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_080015F4:
    // 0x080015F4: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x080015F8: jalr        $v0
    // 0x080015FC: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_56;
    // 0x080015FC: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    after_56:
    // 0x08001600: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001604: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08001608: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x0800160C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x08001610: jalr        $v0
    // 0x08001614: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_57;
    // 0x08001614: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    after_57:
    // 0x08001618: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0800161C: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08001620: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x08001624: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x08001628: add.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x0800162C: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x08001630: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001634: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001638: add.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x0800163C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x08001640: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08001644: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08001648: nop

    // 0x0800164C: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08001650: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08001654: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08001658: jalr        $t9
    // 0x0800165C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x0800165C: nop

    after_58:
    // 0x08001660: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001664: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001668: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800166C: jalr        $t9
    // 0x08001670: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08001670: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    after_59:
    // 0x08001674: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x08001678: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x0800167C: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    // 0x08001680: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x08001684: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x08001688: jalr        $t9
    // 0x0800168C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x0800168C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    after_60:
    // 0x08001690: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08001694: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x08001698: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x0800169C: jalr        $t9
    // 0x080016A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x080016A0: nop

    after_61:
    // 0x080016A4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x080016A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080016AC: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x080016B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x080016B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080016B8: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x080016BC: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x080016C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016C4: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x080016C8: addiu       $t9, $t9, 0x351C
    ctx->r25 = ADD32(ctx->r25, 0X351C);
    // 0x080016CC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x080016D0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080016D4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080016D8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080016DC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x080016E0: jalr        $t9
    // 0x080016E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x080016E4: nop

    after_62:
    // 0x080016E8: b           L_0800192C
    // 0x080016EC: nop

        goto L_0800192C;
    // 0x080016EC: nop

L_080016F0:
    // 0x080016F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080016F4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080016F8: jalr        $t9
    // 0x080016FC: addiu       $a0, $zero, 0x62
    ctx->r4 = ADD32(0, 0X62);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x080016FC: addiu       $a0, $zero, 0x62
    ctx->r4 = ADD32(0, 0X62);
    after_63:
    // 0x08001700: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x08001704: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001708: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800170C: bne         $v1, $at, L_0800177C
    if (ctx->r3 != ctx->r1) {
        // 0x08001710: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_0800177C;
    }
    // 0x08001710: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001714: jalr        $t9
    // 0x08001718: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08001718: nop

    after_64:
    // 0x0800171C: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x08001720: addiu       $t9, $t9, -0x71DC
    ctx->r25 = ADD32(ctx->r25, -0X71DC);
    // 0x08001724: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001728: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800172C: jalr        $t9
    // 0x08001730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08001730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_65:
    // 0x08001734: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001738: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800173C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001740: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001744: jalr        $t9
    // 0x08001748: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08001748: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_66:
    // 0x0800174C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001750: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001754: jalr        $t9
    // 0x08001758: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08001758: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
    after_67:
    // 0x0800175C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001760: addiu       $t9, $t9, -0x2920
    ctx->r25 = ADD32(ctx->r25, -0X2920);
    // 0x08001764: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001768: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800176C: jalr        $t9
    // 0x08001770: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x08001770: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_68:
    // 0x08001774: b           L_080017B4
    // 0x08001778: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
        goto L_080017B4;
    // 0x08001778: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_0800177C:
    // 0x0800177C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x08001780: bne         $v1, $at, L_0800179C
    if (ctx->r3 != ctx->r1) {
        // 0x08001784: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800179C;
    }
    // 0x08001784: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001788: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800178C: jalr        $t9
    // 0x08001790: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08001790: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_69:
    // 0x08001794: b           L_080017B4
    // 0x08001798: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
        goto L_080017B4;
    // 0x08001798: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_0800179C:
    // 0x0800179C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x080017A0: bne         $v1, $at, L_080017B4
    if (ctx->r3 != ctx->r1) {
        // 0x080017A4: addiu       $t6, $zero, 0x7
        ctx->r14 = ADD32(0, 0X7);
            goto L_080017B4;
    }
    // 0x080017A4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x080017A8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x080017AC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x080017B0: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_080017B4:
    // 0x080017B4: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x080017B8: b           L_08001A74
    // 0x080017BC: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
        goto L_08001A74;
    // 0x080017BC: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
L_080017C0:
    // 0x080017C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080017C4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080017C8: jalr        $t9
    // 0x080017CC: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x080017CC: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    after_70:
    // 0x080017D0: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x080017D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080017D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017DC: bne         $v1, $at, L_08001824
    if (ctx->r3 != ctx->r1) {
        // 0x080017E0: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08001824;
    }
    // 0x080017E0: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080017E4: jalr        $t9
    // 0x080017E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x080017E8: nop

    after_71:
    // 0x080017EC: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x080017F0: addiu       $t9, $t9, -0x71DC
    ctx->r25 = ADD32(ctx->r25, -0X71DC);
    // 0x080017F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080017F8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080017FC: jalr        $t9
    // 0x08001800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08001800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_72:
    // 0x08001804: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001808: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800180C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001810: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001814: jalr        $t9
    // 0x08001818: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08001818: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    after_73:
    // 0x0800181C: b           L_0800183C
    // 0x08001820: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
        goto L_0800183C;
    // 0x08001820: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_08001824:
    // 0x08001824: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x08001828: bne         $v1, $at, L_0800183C
    if (ctx->r3 != ctx->r1) {
        // 0x0800182C: addiu       $t8, $zero, 0x7
        ctx->r24 = ADD32(0, 0X7);
            goto L_0800183C;
    }
    // 0x0800182C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x08001830: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001834: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x08001838: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_0800183C:
    // 0x0800183C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x08001840: b           L_08001A74
    // 0x08001844: sh          $t0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r8;
        goto L_08001A74;
    // 0x08001844: sh          $t0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r8;
L_08001848:
    // 0x08001848: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x0800184C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001850: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x08001854: bne         $v1, $at, L_08001880
    if (ctx->r3 != ctx->r1) {
        // 0x08001858: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001880;
    }
    // 0x08001858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800185C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001860: addiu       $t9, $t9, 0x6CB4
    ctx->r25 = ADD32(ctx->r25, 0X6CB4);
    // 0x08001864: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x08001868: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0800186C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001870: jalr        $t9
    // 0x08001874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x08001874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_74:
    // 0x08001878: b           L_08001920
    // 0x0800187C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
        goto L_08001920;
    // 0x0800187C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_08001880:
    // 0x08001880: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08001884: bne         $v1, $at, L_08001920
    if (ctx->r3 != ctx->r1) {
        // 0x08001888: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001920;
    }
    // 0x08001888: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800188C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001890: jalr        $t9
    // 0x08001894: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08001894: nop

    after_75:
    // 0x08001898: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800189C: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x080018A0: jalr        $t9
    // 0x080018A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x080018A4: nop

    after_76:
    // 0x080018A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080018AC: addiu       $t9, $t9, 0x1C58
    ctx->r25 = ADD32(ctx->r25, 0X1C58);
    // 0x080018B0: jalr        $t9
    // 0x080018B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x080018B4: nop

    after_77:
    // 0x080018B8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x080018BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080018C0: addiu       $t3, $t3, -0x3994
    ctx->r11 = ADD32(ctx->r11, -0X3994);
    // 0x080018C4: addiu       $t2, $v0, -0x3A28
    ctx->r10 = ADD32(ctx->r2, -0X3A28);
    // 0x080018C8: addiu       $t5, $t3, 0x30
    ctx->r13 = ADD32(ctx->r11, 0X30);
L_080018CC:
    // 0x080018CC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x080018D0: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x080018D4: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x080018D8: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x080018DC: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x080018E0: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x080018E4: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x080018E8: bne         $t3, $t5, L_080018CC
    if (ctx->r11 != ctx->r13) {
        // 0x080018EC: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_080018CC;
    }
    // 0x080018EC: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x080018F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080018F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080018F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080018FC: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001900: sb          $t6, 0x7AF8($at)
    MEM_B(0X7AF8, ctx->r1) = ctx->r14;
    // 0x08001904: jalr        $t9
    // 0x08001908: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08001908: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_78:
    // 0x0800190C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001910: addiu       $t9, $t9, -0x591C
    ctx->r25 = ADD32(ctx->r25, -0X591C);
    // 0x08001914: jalr        $t9
    // 0x08001918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x08001918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_79:
    // 0x0800191C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
L_08001920:
    // 0x08001920: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x08001924: b           L_08001A74
    // 0x08001928: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
        goto L_08001A74;
    // 0x08001928: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
L_0800192C:
    // 0x0800192C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001930: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x08001934: lui         $at, 0x441B
    ctx->r1 = S32(0X441B << 16);
    // 0x08001938: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800193C: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08001940: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1C40) << 16);
    // 0x08001944: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08001948: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x0800194C: nop

    // 0x08001950: bc1fl       L_0800199C
    if (!c1cs) {
        // 0x08001954: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_0800199C;
    }
    goto skip_19;
    // 0x08001954: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_19:
    // 0x08001958: lwc1        $f18, 0x1C40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(38, 0X1C40));
    // 0x0800195C: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x08001960: nop

    // 0x08001964: bc1fl       L_0800199C
    if (!c1cs) {
        // 0x08001968: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_0800199C;
    }
    goto skip_20;
    // 0x08001968: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_20:
    // 0x0800196C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x08001970: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001974: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001978: beql        $a0, $zero, L_08001990
    if (ctx->r4 == 0) {
        // 0x0800197C: addiu       $t0, $zero, 0x6
        ctx->r8 = ADD32(0, 0X6);
            goto L_08001990;
    }
    goto skip_21;
    // 0x0800197C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    skip_21:
    // 0x08001980: jalr        $t9
    // 0x08001984: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x08001984: nop

    after_80:
    // 0x08001988: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x0800198C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
L_08001990:
    // 0x08001990: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001994: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x08001998: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_0800199C:
    // 0x0800199C: beql        $a0, $zero, L_08001A64
    if (ctx->r4 == 0) {
        // 0x080019A0: lh          $t8, 0x4($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X4);
            goto L_08001A64;
    }
    goto skip_22;
    // 0x080019A0: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    skip_22:
    // 0x080019A4: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
    // 0x080019A8: lui         $t4, 0x800
    ctx->r12 = S32(RELOC_HI16(38, 0X434) << 16);
    // 0x080019AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080019B0: beq         $v0, $zero, L_080019CC
    if (ctx->r2 == 0) {
        // 0x080019B4: addiu       $t4, $t4, 0x434
        ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(38, 0X434));
            goto L_080019CC;
    }
    // 0x080019B4: addiu       $t4, $t4, 0x434
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(38, 0X434));
    // 0x080019B8: beq         $v0, $at, L_08001A00
    if (ctx->r2 == ctx->r1) {
        // 0x080019BC: lui         $t1, 0x800
        ctx->r9 = S32(RELOC_HI16(38, 0X434) << 16);
            goto L_08001A00;
    }
    // 0x080019BC: lui         $t1, 0x800
    ctx->r9 = S32(RELOC_HI16(38, 0X434) << 16);
    // 0x080019C0: addiu       $t1, $t1, 0x434
    ctx->r9 = ADD32(ctx->r9, (int16_t)RELOC_LO16(38, 0X434));
    // 0x080019C4: b           L_08001A38
    // 0x080019C8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
        goto L_08001A38;
    // 0x080019C8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
L_080019CC:
    // 0x080019CC: jalr        $t4
    // 0x080019D0: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r12)(rdram, ctx);
        goto after_81;
    // 0x080019D0: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    after_81:
    // 0x080019D4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x080019D8: bne         $v0, $at, L_080019F8
    if (ctx->r2 != ctx->r1) {
        // 0x080019DC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080019F8;
    }
    // 0x080019DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080019E0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080019E4: jalr        $t9
    // 0x080019E8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080019E8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_82:
    // 0x080019EC: lb          $t5, 0x2($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2);
    // 0x080019F0: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x080019F4: sb          $t3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r11;
L_080019F8:
    // 0x080019F8: b           L_08001A38
    // 0x080019FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_08001A38;
    // 0x080019FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_08001A00:
    // 0x08001A00: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(38, 0X434) << 16);
    // 0x08001A04: addiu       $v0, $v0, 0x434
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(38, 0X434));
    // 0x08001A08: jalr        $v0
    // 0x08001A0C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_83;
    // 0x08001A0C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_83:
    // 0x08001A10: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001A14: bne         $v0, $at, L_08001A34
    if (ctx->r2 != ctx->r1) {
        // 0x08001A18: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001A34;
    }
    // 0x08001A18: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A1C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001A20: jalr        $t9
    // 0x08001A24: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x08001A24: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_84:
    // 0x08001A28: lb          $t2, 0x2($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2);
    // 0x08001A2C: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x08001A30: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
L_08001A34:
    // 0x08001A34: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_08001A38:
    // 0x08001A38: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x08001A3C: jalr        $t9
    // 0x08001A40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08001A40: nop

    after_85:
    // 0x08001A44: bgtz        $v0, L_08001A60
    if (SIGNED(ctx->r2) > 0) {
        // 0x08001A48: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_08001A60;
    }
    // 0x08001A48: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x08001A4C: jalr        $t9
    // 0x08001A50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08001A50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_86:
    // 0x08001A54: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x08001A58: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x08001A5C: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08001A60:
    // 0x08001A60: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
L_08001A64:
    // 0x08001A64: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08001A68: sh          $t0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r8;
    // 0x08001A6C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x08001A70: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
L_08001A74:
    // 0x08001A74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001A78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001A7C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x08001A80: jr          $ra
    // 0x08001A84: nop

    TRACE_RETURN()
    return;
    // 0x08001A84: nop

;}
RECOMP_FUNC void func_080006F8_7064E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080006FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000700: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08000704: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08000708: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800070C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000710: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000714: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x08000718: beq         $v0, $zero, L_08000730
    if (ctx->r2 == 0) {
        // 0x0800071C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08000730;
    }
    // 0x0800071C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000720: beq         $v0, $at, L_0800078C
    if (ctx->r2 == ctx->r1) {
        // 0x08000724: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_0800078C;
    }
    // 0x08000724: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08000728: b           L_08000924
    // 0x0800072C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000924;
    // 0x0800072C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000730:
    // 0x08000730: lw          $t9, 0x64($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64);
    // 0x08000734: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x08000738: addiu       $t7, $zero, 0x1B2
    ctx->r15 = ADD32(0, 0X1B2);
    // 0x0800073C: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x08000740: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000744: ori         $t8, $t8, 0x20
    ctx->r24 = ctx->r24 | 0X20;
    // 0x08000748: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800074C: sh          $t7, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r15;
    // 0x08000750: sh          $t7, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = ctx->r15;
    // 0x08000754: sw          $t8, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r24;
    // 0x08000758: sw          $t0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r8;
    // 0x0800075C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000760: jalr        $t9
    // 0x08000764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000768: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(38, 0X1C10) << 16);
    // 0x0800076C: lwc1        $f0, 0x1C10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(38, 0X1C10));
    // 0x08000770: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08000774: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000778: swc1        $f0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f0.u32l;
    // 0x0800077C: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x08000780: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x08000784: b           L_08000920
    // 0x08000788: sb          $t1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r9;
        goto L_08000920;
    // 0x08000788: sb          $t1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r9;
L_0800078C:
    // 0x0800078C: lh          $t2, 0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X6);
    // 0x08000790: lh          $t3, 0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4);
    // 0x08000794: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08000798: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x0800079C: bne         $t3, $zero, L_080007A8
    if (ctx->r11 != 0) {
        // 0x080007A0: nop
    
            goto L_080007A8;
    }
    // 0x080007A0: nop

    // 0x080007A4: break       7
    do_break(134219684);
L_080007A8:
    // 0x080007A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080007AC: bne         $t3, $at, L_080007C0
    if (ctx->r11 != ctx->r1) {
        // 0x080007B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080007C0;
    }
    // 0x080007B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080007B4: bne         $t2, $at, L_080007C0
    if (ctx->r10 != ctx->r1) {
        // 0x080007B8: nop
    
            goto L_080007C0;
    }
    // 0x080007B8: nop

    // 0x080007BC: break       6
    do_break(134219708);
L_080007C0:
    // 0x080007C0: mfhi        $t4
    ctx->r12 = hi;
    // 0x080007C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080007C8: bnel        $t4, $zero, L_080007EC
    if (ctx->r12 != 0) {
        // 0x080007CC: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_080007EC;
    }
    goto skip_0;
    // 0x080007CC: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_0:
    // 0x080007D0: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x080007D4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x080007D8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080007DC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x080007E0: b           L_080007F4
    // 0x080007E4: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
        goto L_080007F4;
    // 0x080007E4: sw          $t6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r14;
    // 0x080007E8: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_080007EC:
    // 0x080007EC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080007F0: sw          $t8, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r24;
L_080007F4:
    // 0x080007F4: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x080007F8: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x080007FC: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08000800: sll         $t9, $t0, 10
    ctx->r25 = S32(ctx->r8 << 10);
    // 0x08000804: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x08000808: mflo        $a0
    ctx->r4 = lo;
    // 0x0800080C: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x08000810: bne         $t1, $zero, L_0800081C
    if (ctx->r9 != 0) {
        // 0x08000814: nop
    
            goto L_0800081C;
    }
    // 0x08000814: nop

    // 0x08000818: break       7
    do_break(134219800);
L_0800081C:
    // 0x0800081C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000820: bne         $t1, $at, L_08000834
    if (ctx->r9 != ctx->r1) {
        // 0x08000824: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08000834;
    }
    // 0x08000824: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000828: bne         $t9, $at, L_08000834
    if (ctx->r25 != ctx->r1) {
        // 0x0800082C: nop
    
            goto L_08000834;
    }
    // 0x0800082C: nop

    // 0x08000830: break       6
    do_break(134219824);
L_08000834:
    // 0x08000834: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x08000838: jalr        $v0
    // 0x0800083C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x0800083C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000840: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000844: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000848: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800084C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08000850: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000854: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000858: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x0800085C: lhu         $t3, 0x2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2);
    // 0x08000860: addiu       $t4, $t3, -0x100
    ctx->r12 = ADD32(ctx->r11, -0X100);
    // 0x08000864: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x08000868: sh          $t5, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r13;
    // 0x0800086C: jalr        $t9
    // 0x08000870: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000870: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    after_2:
    // 0x08000874: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08000878: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x0800087C: swc1        $f18, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f18.u32l;
    // 0x08000880: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000884: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x08000888: jalr        $t9
    // 0x0800088C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800088C: nop

    after_3:
    // 0x08000890: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08000894: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000898: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800089C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080008A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080008A4: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x080008A8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080008AC: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x080008B0: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x080008B4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080008B8: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x080008BC: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x080008C0: lwc1        $f12, 0xC($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XC);
    // 0x080008C4: lwc1        $f2, 0xC($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080008C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x080008CC: nop

    // 0x080008D0: bc1fl       L_080008E8
    if (!c1cs) {
        // 0x080008D4: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_080008E8;
    }
    goto skip_1;
    // 0x080008D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x080008D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x080008DC: b           L_080008E8
    // 0x080008E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_080008E8;
    // 0x080008E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x080008E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_080008E8:
    // 0x080008E8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x080008EC: nop

    // 0x080008F0: bc1fl       L_08000910
    if (!c1cs) {
        // 0x080008F4: lw          $t2, 0x60($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X60);
            goto L_08000910;
    }
    goto skip_2;
    // 0x080008F4: lw          $t2, 0x60($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X60);
    skip_2:
    // 0x080008F8: lw          $t0, 0x60($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X60);
    // 0x080008FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000900: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08000904: b           L_08000920
    // 0x08000908: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
        goto L_08000920;
    // 0x08000908: sw          $t1, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r9;
    // 0x0800090C: lw          $t2, 0x60($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X60);
L_08000910:
    // 0x08000910: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08000914: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000918: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x0800091C: sw          $t3, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r11;
L_08000920:
    // 0x08000920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000924:
    // 0x08000924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000928: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x0800092C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000930: jr          $ra
    // 0x08000934: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08000934: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08000434_706224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000434: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x08000438: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x0800043C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x08000440: mflo        $v0
    ctx->r2 = lo;
    // 0x08000444: jr          $ra
    // 0x08000448: nop

    TRACE_RETURN()
    return;
    // 0x08000448: nop

;}
RECOMP_FUNC void func_0800185C_70929C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800185C: jr          $ra
    // 0x08001860: sb          $a1, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001860: sb          $a1, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_080023A4_709DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080023A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080023AC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080023B0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080023B4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080023B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080023C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080023C4: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080023C8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080023CC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x080023D0: jalr        $t9
    // 0x080023D4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023D4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080023D8: beq         $v0, $zero, L_0800240C
    if (ctx->r2 == 0) {
        // 0x080023DC: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_0800240C;
    }
    // 0x080023DC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080023E0: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x080023E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x080023E8: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x080023EC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_080023F0:
    // 0x080023F0: bnel        $v0, $v1, L_080023F0
    if (ctx->r2 != ctx->r3) {
        // 0x080023F4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_080023F0;
    }
    goto skip_0;
    // 0x080023F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x080023F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002400: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X18E8) << 16);
    // 0x08002404: jalr        $t9
    // 0x08002408: addiu       $a0, $a0, 0x18E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0X18E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002408: addiu       $a0, $a0, 0x18E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0X18E8));
    after_1:
L_0800240C:
    // 0x0800240C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002414: jr          $ra
    // 0x08002418: nop

    TRACE_RETURN()
    return;
    // 0x08002418: nop

;}
RECOMP_FUNC void func_080018E8_709328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018E8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x080018EC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080018F0: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080018F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x080018F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x080018FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x08001900: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x08001904: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x08001908: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0800190C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08001910: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001914: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x08001918: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x0800191C: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08001920: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001924: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08001928: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800192C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08001930: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001934: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08001938: lw          $s6, 0xD0($a0)
    ctx->r22 = MEM_W(ctx->r4, 0XD0);
    // 0x0800193C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08001940: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x08001944: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08001948: lhu         $t0, 0x307A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X307A);
    // 0x0800194C: lh          $s4, 0x307E($v0)
    ctx->r20 = MEM_H(ctx->r2, 0X307E);
    // 0x08001950: lui         $s2, 0x8003
    ctx->r18 = S32(0X8003 << 16);
    // 0x08001954: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x08001958: lw          $t2, 0x8($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X8);
    // 0x0800195C: addiu       $s2, $s2, 0x4EF8
    ctx->r18 = ADD32(ctx->r18, 0X4EF8);
    // 0x08001960: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001964: bne         $t0, $t2, L_0800197C
    if (ctx->r8 != ctx->r10) {
        // 0x08001968: or          $s3, $s6, $zero
        ctx->r19 = ctx->r22 | 0;
            goto L_0800197C;
    }
    // 0x08001968: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x0800196C: lhu         $t3, 0x6($s6)
    ctx->r11 = MEM_HU(ctx->r22, 0X6);
    // 0x08001970: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08001974: b           L_08001984
    // 0x08001978: sh          $t4, 0x6($s6)
    MEM_H(0X6, ctx->r22) = ctx->r12;
        goto L_08001984;
    // 0x08001978: sh          $t4, 0x6($s6)
    MEM_H(0X6, ctx->r22) = ctx->r12;
L_0800197C:
    // 0x0800197C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08001980: sh          $t5, 0x6($s6)
    MEM_H(0X6, ctx->r22) = ctx->r13;
L_08001984:
    // 0x08001984: lui         $s1, 0x800
    ctx->r17 = S32(RELOC_HI16(39, 0XFA0) << 16);
    // 0x08001988: addiu       $s1, $s1, 0xFA0
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(39, 0XFA0));
L_0800198C:
    // 0x0800198C: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    // 0x08001990: beql        $a0, $zero, L_080019B8
    if (ctx->r4 == 0) {
        // 0x08001994: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_080019B8;
    }
    goto skip_0;
    // 0x08001994: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x08001998: jalr        $s1
    // 0x0800199C: nop

    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x0800199C: nop

    after_0:
    // 0x080019A0: bnel        $v0, $zero, L_080019B8
    if (ctx->r2 != 0) {
        // 0x080019A4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_080019B8;
    }
    goto skip_1;
    // 0x080019A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x080019A8: jalr        $s2
    // 0x080019AC: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x080019AC: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    after_1:
    // 0x080019B0: sw          $zero, 0x30($s3)
    MEM_W(0X30, ctx->r19) = 0;
    // 0x080019B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_080019B8:
    // 0x080019B8: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x080019BC: bne         $at, $zero, L_0800198C
    if (ctx->r1 != 0) {
        // 0x080019C0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_0800198C;
    }
    // 0x080019C0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x080019C4: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x080019C8: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x080019CC: beq         $at, $zero, L_08002118
    if (ctx->r1 == 0) {
        // 0x080019D0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002118;
    }
    // 0x080019D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x080019D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25D0) << 16);
    // 0x080019D8: addu        $at, $at, $t6
    gpr jr_addend_080019E0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x080019DC: lw          $t6, 0x25D0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(39, 0X25D0));
    // 0x080019E0: jr          $t6
    // 0x080019E4: nop

    switch (jr_addend_080019E0 >> 2) {
        case 0: goto L_080019E8; break;
        case 1: goto L_08001C68; break;
        case 2: goto L_08001D90; break;
        case 3: goto L_08001B84; break;
        case 4: goto L_08001BB0; break;
        case 5: goto L_08001E64; break;
        case 6: goto L_08001F3C; break;
        case 7: goto L_0800204C; break;
        default: switch_error(__func__, 0x080019E0, 0x080025D0);
    }
    // 0x080019E4: nop

L_080019E8:
    // 0x080019E8: lh          $t7, 0x4($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X4);
    // 0x080019EC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080019F0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x080019F4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x080019F8: bne         $at, $zero, L_08002118
    if (ctx->r1 != 0) {
        // 0x080019FC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08002118;
    }
    // 0x080019FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001A00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A04: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A08: jalr        $t9
    // 0x08001A0C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A0C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_2:
    // 0x08001A10: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x08001A14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25F0) << 16);
    // 0x08001A18: lwc1        $f0, 0x25F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(39, 0X25F0));
    // 0x08001A1C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08001A20: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X60) << 16);
    // 0x08001A24: addiu       $t9, $t9, 0x60
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X60));
    // 0x08001A28: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x08001A2C: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x08001A30: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x08001A34: swc1        $f2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f2.u32l;
    // 0x08001A38: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x08001A3C: jalr        $t9
    // 0x08001A40: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A40: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    after_3:
    // 0x08001A44: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001A48: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001A4C: jalr        $t9
    // 0x08001A50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001A50: nop

    after_4:
    // 0x08001A54: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08001A58: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08001A5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001A60: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A64: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001A68: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x08001A6C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001A70: jalr        $t9
    // 0x08001A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08001A78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A7C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08001A80: sw          $v0, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r2;
    // 0x08001A84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001A88: jalr        $t9
    // 0x08001A8C: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001A8C: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    after_6:
    // 0x08001A90: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A94: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001A98: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x08001A9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001AA0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001AA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x08001AAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AB0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001AB4: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x08001AB8: jalr        $t9
    // 0x08001ABC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001ABC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_8:
    // 0x08001AC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AC4: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08001AC8: jalr        $t9
    // 0x08001ACC: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001ACC: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    after_9:
    // 0x08001AD0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001AD4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x08001AD8: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08001ADC: sw          $v0, 0x2600($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2600), ctx->r1) = ctx->r2;
    // 0x08001AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x08001AE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001AE8: jalr        $t9
    // 0x08001AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x08001AF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AF4: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08001AF8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001AFC: jalr        $t9
    // 0x08001B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x08001B04: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B08: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08001B0C: sw          $v0, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r2;
    // 0x08001B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001B14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x08001B18: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x08001B1C: jalr        $t9
    // 0x08001B20: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001B20: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_12:
    // 0x08001B24: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x08001B28: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x08001B2C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08001B34: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x08001B38: sb          $v0, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r2;
    // 0x08001B3C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x08001B40: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x08001B44: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001B48: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001B4C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x08001B50: sb          $v0, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r2;
    // 0x08001B54: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001B58: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001B5C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001B60: jalr        $t9
    // 0x08001B64: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001B64: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_13:
    // 0x08001B68: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x08001B6C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001B70: sw          $t5, -0x3320($at)
    MEM_W(-0X3320, ctx->r1) = ctx->r13;
    // 0x08001B74: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08001B78: sh          $zero, 0x4($s6)
    MEM_H(0X4, ctx->r22) = 0;
    // 0x08001B7C: b           L_08002118
    // 0x08001B80: sb          $t6, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r14;
        goto L_08002118;
    // 0x08001B80: sb          $t6, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r14;
L_08001B84:
    // 0x08001B84: lh          $t7, 0x4($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X4);
    // 0x08001B88: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001B8C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001B90: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x08001B94: bnel        $at, $zero, L_0800211C
    if (ctx->r1 != 0) {
        // 0x08001B98: lw          $a0, 0x14($s6)
        ctx->r4 = MEM_W(ctx->r22, 0X14);
            goto L_0800211C;
    }
    goto skip_2;
    // 0x08001B98: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    skip_2:
    // 0x08001B9C: jalr        $t9
    // 0x08001BA0: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001BA0: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_14:
    // 0x08001BA4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08001BA8: b           L_08002118
    // 0x08001BAC: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
        goto L_08002118;
    // 0x08001BAC: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
L_08001BB0:
    // 0x08001BB0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001BB4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001BB8: jalr        $t9
    // 0x08001BBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001BBC: nop

    after_15:
    // 0x08001BC0: bne         $v0, $zero, L_08002118
    if (ctx->r2 != 0) {
        // 0x08001BC4: lw          $a0, 0x68($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X68);
            goto L_08002118;
    }
    // 0x08001BC4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001BC8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X7C4) << 16);
    // 0x08001BCC: addiu       $t9, $t9, 0x7C4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X7C4));
    // 0x08001BD0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001BD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001BD8: jalr        $t9
    // 0x08001BDC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001BDC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_16:
    // 0x08001BE0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X790) << 16);
    // 0x08001BE4: addiu       $t9, $t9, 0x790
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X790));
    // 0x08001BE8: sw          $v0, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->r2;
    // 0x08001BEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001BF0: jalr        $t9
    // 0x08001BF4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001BF4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_17:
    // 0x08001BF8: lui         $s0, 0x800
    ctx->r16 = S32(RELOC_HI16(39, 0X127C) << 16);
    // 0x08001BFC: lui         $s1, 0x800
    ctx->r17 = S32(RELOC_HI16(39, 0X0) << 16);
    // 0x08001C00: lui         $s2, 0x800
    ctx->r18 = S32(RELOC_HI16(39, 0X1874) << 16);
    // 0x08001C04: addiu       $s2, $s2, 0x1874
    ctx->r18 = ADD32(ctx->r18, (int16_t)RELOC_LO16(39, 0X1874));
    // 0x08001C08: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(39, 0X0));
    // 0x08001C0C: addiu       $s0, $s0, 0x127C
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(39, 0X127C));
    // 0x08001C10: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x08001C14: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x08001C18: addiu       $s5, $zero, 0x1800
    ctx->r21 = ADD32(0, 0X1800);
L_08001C1C:
    // 0x08001C1C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08001C24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001C28: jalr        $s1
    // 0x08001C2C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_18;
    // 0x08001C2C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_18:
    // 0x08001C30: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001C34: div         $zero, $s4, $at
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r1)));
    // 0x08001C38: mflo        $a1
    ctx->r5 = lo;
    // 0x08001C3C: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x08001C40: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x08001C44: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x08001C48: jalr        $s2
    // 0x08001C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_19;
    // 0x08001C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x08001C50: addiu       $s4, $s4, 0x400
    ctx->r20 = ADD32(ctx->r20, 0X400);
    // 0x08001C54: bne         $s4, $s5, L_08001C1C
    if (ctx->r20 != ctx->r21) {
        // 0x08001C58: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_08001C1C;
    }
    // 0x08001C58: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x08001C5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001C60: b           L_08002118
    // 0x08001C64: sb          $t1, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r9;
        goto L_08002118;
    // 0x08001C64: sb          $t1, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r9;
L_08001C68:
    // 0x08001C68: lhu         $t2, 0x2($s6)
    ctx->r10 = MEM_HU(ctx->r22, 0X2);
    // 0x08001C6C: bgez        $s4, L_08001C7C
    if (SIGNED(ctx->r20) >= 0) {
        // 0x08001C70: sra         $t3, $s4, 3
        ctx->r11 = S32(SIGNED(ctx->r20) >> 3);
            goto L_08001C7C;
    }
    // 0x08001C70: sra         $t3, $s4, 3
    ctx->r11 = S32(SIGNED(ctx->r20) >> 3);
    // 0x08001C74: addiu       $at, $s4, 0x7
    ctx->r1 = ADD32(ctx->r20, 0X7);
    // 0x08001C78: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_08001C7C:
    // 0x08001C7C: subu        $t5, $t2, $t3
    ctx->r13 = SUB32(ctx->r10, ctx->r11);
    // 0x08001C80: sh          $t5, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r13;
    // 0x08001C84: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08001C88: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x08001C8C: sh          $t6, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r14;
    // 0x08001C90: addiu       $s1, $s1, 0x5720
    ctx->r17 = ADD32(ctx->r17, 0X5720);
    // 0x08001C94: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C98: jalr        $s1
    // 0x08001C9C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_20;
    // 0x08001C9C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_20:
    // 0x08001CA0: bne         $v0, $zero, L_08001D3C
    if (ctx->r2 != 0) {
        // 0x08001CA4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_08001D3C;
    }
    // 0x08001CA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001CA8: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x08001CAC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_08001CB0:
    // 0x08001CB0: lw          $t7, 0x30($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X30);
    // 0x08001CB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x08001CB8: bne         $t7, $zero, L_08001D34
    if (ctx->r15 != 0) {
        // 0x08001CBC: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(39, 0X0) << 16);
            goto L_08001D34;
    }
    // 0x08001CBC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X0) << 16);
    // 0x08001CC0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X0));
    // 0x08001CC4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0XCC8) << 16);
    // 0x08001CC8: addiu       $a1, $a1, 0xCC8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0XCC8));
    // 0x08001CCC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001CD0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001CD4: jalr        $t9
    // 0x08001CD8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001CD8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_21:
    // 0x08001CDC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0XFA8) << 16);
    // 0x08001CE0: addiu       $t9, $t9, 0xFA8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0XFA8));
    // 0x08001CE4: sw          $v0, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r2;
    // 0x08001CE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001CEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08001CF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08001CF4: jalr        $t9
    // 0x08001CF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001CF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_22:
    // 0x08001CFC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001D00: addiu       $t9, $t9, 0x54A8
    ctx->r25 = ADD32(ctx->r25, 0X54A8);
    // 0x08001D04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D08: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001D0C: jalr        $t9
    // 0x08001D10: lw          $a1, 0x30($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001D10: lw          $a1, 0x30($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X30);
    after_23:
    // 0x08001D14: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001D18: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001D1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D20: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001D24: jalr        $t9
    // 0x08001D28: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001D28: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    after_24:
    // 0x08001D2C: b           L_08001D40
    // 0x08001D30: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
        goto L_08001D40;
    // 0x08001D30: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_08001D34:
    // 0x08001D34: bne         $s0, $v0, L_08001CB0
    if (ctx->r16 != ctx->r2) {
        // 0x08001D38: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_08001CB0;
    }
    // 0x08001D38: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_08001D3C:
    // 0x08001D3C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_08001D40:
    // 0x08001D40: andi        $t0, $t8, 0x4000
    ctx->r8 = ctx->r24 & 0X4000;
    // 0x08001D44: beql        $t0, $zero, L_0800211C
    if (ctx->r8 == 0) {
        // 0x08001D48: lw          $a0, 0x14($s6)
        ctx->r4 = MEM_W(ctx->r22, 0X14);
            goto L_0800211C;
    }
    goto skip_3;
    // 0x08001D48: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    skip_3:
    // 0x08001D4C: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
    // 0x08001D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001D54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D58: bnel        $t1, $at, L_0800211C
    if (ctx->r9 != ctx->r1) {
        // 0x08001D5C: lw          $a0, 0x14($s6)
        ctx->r4 = MEM_W(ctx->r22, 0X14);
            goto L_0800211C;
    }
    goto skip_4;
    // 0x08001D5C: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    skip_4:
    // 0x08001D60: jalr        $s1
    // 0x08001D64: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_25;
    // 0x08001D64: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_25:
    // 0x08001D68: beq         $v0, $zero, L_08002118
    if (ctx->r2 == 0) {
        // 0x08001D6C: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08002118;
    }
    // 0x08001D6C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D70: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001D74: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001D78: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001D7C: jalr        $t9
    // 0x08001D80: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001D80: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    after_26:
    // 0x08001D84: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08001D88: b           L_08002118
    // 0x08001D8C: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
        goto L_08002118;
    // 0x08001D8C: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
L_08001D90:
    // 0x08001D90: lhu         $t3, 0x2($s6)
    ctx->r11 = MEM_HU(ctx->r22, 0X2);
    // 0x08001D94: bgez        $s4, L_08001DA4
    if (SIGNED(ctx->r20) >= 0) {
        // 0x08001D98: sra         $t4, $s4, 3
        ctx->r12 = S32(SIGNED(ctx->r20) >> 3);
            goto L_08001DA4;
    }
    // 0x08001D98: sra         $t4, $s4, 3
    ctx->r12 = S32(SIGNED(ctx->r20) >> 3);
    // 0x08001D9C: addiu       $at, $s4, 0x7
    ctx->r1 = ADD32(ctx->r20, 0X7);
    // 0x08001DA0: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_08001DA4:
    // 0x08001DA4: subu        $t6, $t3, $t4
    ctx->r14 = SUB32(ctx->r11, ctx->r12);
    // 0x08001DA8: sh          $t6, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r14;
    // 0x08001DAC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08001DB0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001DB4: sh          $t7, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r15;
    // 0x08001DB8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08001DBC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001DC0: jalr        $t9
    // 0x08001DC4: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001DC4: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    after_27:
    // 0x08001DC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001DCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001DD0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001DD4: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x08001DD8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x08001DDC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001DE0: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x08001DE4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001DE8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x08001DEC: nop

    // 0x08001DF0: bc1fl       L_0800211C
    if (!c1cs) {
        // 0x08001DF4: lw          $a0, 0x14($s6)
        ctx->r4 = MEM_W(ctx->r22, 0X14);
            goto L_0800211C;
    }
    goto skip_5;
    // 0x08001DF4: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    skip_5:
    // 0x08001DF8: jalr        $t9
    // 0x08001DFC: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001DFC: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    after_28:
    // 0x08001E00: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001E04: addiu       $t9, $t9, -0x27D0
    ctx->r25 = ADD32(ctx->r25, -0X27D0);
    // 0x08001E08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001E0C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001E10: jalr        $t9
    // 0x08001E14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001E14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_29:
    // 0x08001E18: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001E1C: addiu       $t9, $t9, 0x55D4
    ctx->r25 = ADD32(ctx->r25, 0X55D4);
    // 0x08001E20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001E24: lui         $a2, 0x408C
    ctx->r6 = S32(0X408C << 16);
    // 0x08001E28: lui         $a3, 0x3FE6
    ctx->r7 = S32(0X3FE6 << 16);
    // 0x08001E2C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x08001E30: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001E34: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001E38: jalr        $t9
    // 0x08001E3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001E3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_30:
    // 0x08001E40: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001E44: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001E48: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001E4C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001E50: jalr        $t9
    // 0x08001E54: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001E54: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_31:
    // 0x08001E58: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001E5C: b           L_08002118
    // 0x08001E60: sb          $t0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r8;
        goto L_08002118;
    // 0x08001E60: sb          $t0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r8;
L_08001E64:
    // 0x08001E64: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    // 0x08001E68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001E6C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001E70: bne         $v1, $at, L_08001F18
    if (ctx->r3 != ctx->r1) {
        // 0x08001E74: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_08001F18;
    }
    // 0x08001E74: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001E78: jalr        $t9
    // 0x08001E7C: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001E7C: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    after_32:
    // 0x08001E80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001E84: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x08001E88: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
L_08001E8C:
    // 0x08001E8C: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    // 0x08001E90: beql        $a0, $zero, L_08001EA8
    if (ctx->r4 == 0) {
        // 0x08001E94: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_08001EA8;
    }
    goto skip_6;
    // 0x08001E94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_6:
    // 0x08001E98: jalr        $s2
    // 0x08001E9C: nop

    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_33;
    // 0x08001E9C: nop

    after_33:
    // 0x08001EA0: sw          $zero, 0x30($s3)
    MEM_W(0X30, ctx->r19) = 0;
    // 0x08001EA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001EA8:
    // 0x08001EA8: bne         $s0, $s1, L_08001E8C
    if (ctx->r16 != ctx->r17) {
        // 0x08001EAC: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_08001E8C;
    }
    // 0x08001EAC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x08001EB0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001EB4: addiu       $t9, $t9, 0x54A8
    ctx->r25 = ADD32(ctx->r25, 0X54A8);
    // 0x08001EB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001EBC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001EC0: jalr        $t9
    // 0x08001EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x08001EC8: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    // 0x08001ECC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001ED0: addiu       $t9, $t9, 0x16AC
    ctx->r25 = ADD32(ctx->r25, 0X16AC);
    // 0x08001ED4: beq         $a0, $zero, L_08001EE8
    if (ctx->r4 == 0) {
        // 0x08001ED8: nop
    
            goto L_08001EE8;
    }
    // 0x08001ED8: nop

    // 0x08001EDC: jalr        $t9
    // 0x08001EE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001EE0: nop

    after_35:
    // 0x08001EE4: sw          $v0, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->r2;
L_08001EE8:
    // 0x08001EE8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001EEC: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001EF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001EF4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001EF8: jalr        $t9
    // 0x08001EFC: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08001EFC: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    after_36:
    // 0x08001F00: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08001F04: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x08001F08: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x08001F0C: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
    // 0x08001F10: b           L_08001F30
    // 0x08001F14: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
        goto L_08001F30;
    // 0x08001F14: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
L_08001F18:
    // 0x08001F18: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x08001F1C: bne         $v1, $at, L_08001F30
    if (ctx->r3 != ctx->r1) {
        // 0x08001F20: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_08001F30;
    }
    // 0x08001F20: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x08001F24: sh          $zero, 0x4($s6)
    MEM_H(0X4, ctx->r22) = 0;
    // 0x08001F28: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    // 0x08001F2C: sb          $t3, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r11;
L_08001F30:
    // 0x08001F30: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x08001F34: b           L_0800237C
    // 0x08001F38: sh          $t4, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r12;
        goto L_0800237C;
    // 0x08001F38: sh          $t4, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r12;
L_08001F3C:
    // 0x08001F3C: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    // 0x08001F40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001F44: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001F48: bne         $v1, $at, L_08002008
    if (ctx->r3 != ctx->r1) {
        // 0x08001F4C: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_08002008;
    }
    // 0x08001F4C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001F50: jalr        $t9
    // 0x08001F54: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08001F54: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_37:
    // 0x08001F58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001F5C: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x08001F60: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
L_08001F64:
    // 0x08001F64: lw          $a0, 0x30($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X30);
    // 0x08001F68: beql        $a0, $zero, L_08001F80
    if (ctx->r4 == 0) {
        // 0x08001F6C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_08001F80;
    }
    goto skip_7;
    // 0x08001F6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_7:
    // 0x08001F70: jalr        $s2
    // 0x08001F74: nop

    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_38;
    // 0x08001F74: nop

    after_38:
    // 0x08001F78: sw          $zero, 0x30($s3)
    MEM_W(0X30, ctx->r19) = 0;
    // 0x08001F7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001F80:
    // 0x08001F80: bne         $s0, $s1, L_08001F64
    if (ctx->r16 != ctx->r17) {
        // 0x08001F84: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_08001F64;
    }
    // 0x08001F84: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x08001F88: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001F8C: addiu       $t9, $t9, 0x54A8
    ctx->r25 = ADD32(ctx->r25, 0X54A8);
    // 0x08001F90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001F94: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001F98: jalr        $t9
    // 0x08001F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_39:
    // 0x08001FA0: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    // 0x08001FA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001FA8: addiu       $t9, $t9, 0x16AC
    ctx->r25 = ADD32(ctx->r25, 0X16AC);
    // 0x08001FAC: beq         $a0, $zero, L_08001FC0
    if (ctx->r4 == 0) {
        // 0x08001FB0: nop
    
            goto L_08001FC0;
    }
    // 0x08001FB0: nop

    // 0x08001FB4: jalr        $t9
    // 0x08001FB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001FB8: nop

    after_40:
    // 0x08001FBC: sw          $v0, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->r2;
L_08001FC0:
    // 0x08001FC0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001FC4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001FC8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001FCC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001FD0: jalr        $t9
    // 0x08001FD4: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001FD4: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_41:
    // 0x08001FD8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001FDC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001FE0: jalr        $t9
    // 0x08001FE4: addiu       $a0, $zero, 0x157
    ctx->r4 = ADD32(0, 0X157);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08001FE4: addiu       $a0, $zero, 0x157
    ctx->r4 = ADD32(0, 0X157);
    after_42:
    // 0x08001FE8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001FEC: addiu       $t9, $t9, -0x2920
    ctx->r25 = ADD32(ctx->r25, -0X2920);
    // 0x08001FF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001FF4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001FF8: jalr        $t9
    // 0x08001FFC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08001FFC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_43:
    // 0x08002000: b           L_08002040
    // 0x08002004: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
        goto L_08002040;
    // 0x08002004: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
L_08002008:
    // 0x08002008: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x0800200C: bne         $v1, $at, L_08002028
    if (ctx->r3 != ctx->r1) {
        // 0x08002010: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002028;
    }
    // 0x08002010: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002014: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002018: jalr        $t9
    // 0x0800201C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x0800201C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_44:
    // 0x08002020: b           L_08002040
    // 0x08002024: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
        goto L_08002040;
    // 0x08002024: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
L_08002028:
    // 0x08002028: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x0800202C: bne         $v1, $at, L_08002040
    if (ctx->r3 != ctx->r1) {
        // 0x08002030: addiu       $t5, $zero, 0x7
        ctx->r13 = ADD32(0, 0X7);
            goto L_08002040;
    }
    // 0x08002030: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x08002034: sh          $zero, 0x4($s6)
    MEM_H(0X4, ctx->r22) = 0;
    // 0x08002038: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    // 0x0800203C: sb          $t5, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r13;
L_08002040:
    // 0x08002040: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x08002044: b           L_0800237C
    // 0x08002048: sh          $t6, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r14;
        goto L_0800237C;
    // 0x08002048: sh          $t6, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r14;
L_0800204C:
    // 0x0800204C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08002050: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08002054: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002058: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800205C: lbu         $t7, 0xCC($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XCC);
    // 0x08002060: bnel        $t7, $zero, L_08002074
    if (ctx->r15 != 0) {
        // 0x08002064: lh          $v1, 0x4($s6)
        ctx->r3 = MEM_H(ctx->r22, 0X4);
            goto L_08002074;
    }
    goto skip_8;
    // 0x08002064: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    skip_8:
    // 0x08002068: jalr        $t9
    // 0x0800206C: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x0800206C: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_45:
    // 0x08002070: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
L_08002074:
    // 0x08002074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002078: bnel        $v1, $at, L_080020B0
    if (ctx->r3 != ctx->r1) {
        // 0x0800207C: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_080020B0;
    }
    goto skip_9;
    // 0x0800207C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_9:
    // 0x08002080: jal         0x080004F8
    // 0x08002084: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    func_080004F8_707F38(rdram, ctx);
        goto after_46;
    // 0x08002084: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_46:
    // 0x08002088: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800208C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08002090: jal         0x08000490
    // 0x08002094: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_08000490_707ED0(rdram, ctx);
        goto after_47;
    // 0x08002094: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_47:
    // 0x08002098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800209C: jal         0x080004A4
    // 0x080020A0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_080004A4_707EE4(rdram, ctx);
        goto after_48;
    // 0x080020A0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_48:
    // 0x080020A4: b           L_0800210C
    // 0x080020A8: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
        goto L_0800210C;
    // 0x080020A8: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
    // 0x080020AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_080020B0:
    // 0x080020B0: bne         $v1, $at, L_0800210C
    if (ctx->r3 != ctx->r1) {
        // 0x080020B4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800210C;
    }
    // 0x080020B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020B8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080020BC: jalr        $t9
    // 0x080020C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x080020C0: nop

    after_49:
    // 0x080020C4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080020C8: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x080020CC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x080020D0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080020D4: jalr        $t9
    // 0x080020D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x080020D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_50:
    // 0x080020DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080020E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080020E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080020E8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080020EC: sb          $t8, 0x7AF8($at)
    MEM_B(0X7AF8, ctx->r1) = ctx->r24;
    // 0x080020F0: jalr        $t9
    // 0x080020F4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x080020F4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_51:
    // 0x080020F8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080020FC: addiu       $t9, $t9, -0x591C
    ctx->r25 = ADD32(ctx->r25, -0X591C);
    // 0x08002100: jalr        $t9
    // 0x08002104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08002104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_52:
    // 0x08002108: lh          $v1, 0x4($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X4);
L_0800210C:
    // 0x0800210C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x08002110: b           L_0800237C
    // 0x08002114: sh          $t0, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r8;
        goto L_0800237C;
    // 0x08002114: sh          $t0, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r8;
L_08002118:
    // 0x08002118: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
L_0800211C:
    // 0x0800211C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X7A4) << 16);
    // 0x08002120: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x08002124: beq         $a0, $zero, L_08002144
    if (ctx->r4 == 0) {
        // 0x08002128: addiu       $t9, $t9, 0x7A4
        ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X7A4));
            goto L_08002144;
    }
    // 0x08002128: addiu       $t9, $t9, 0x7A4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X7A4));
    // 0x0800212C: jalr        $t9
    // 0x08002130: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08002130: nop

    after_53:
    // 0x08002134: bne         $v0, $zero, L_08002144
    if (ctx->r2 != 0) {
        // 0x08002138: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_08002144;
    }
    // 0x08002138: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x0800213C: sh          $zero, 0x4($s6)
    MEM_H(0X4, ctx->r22) = 0;
    // 0x08002140: sb          $t1, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r9;
L_08002144:
    // 0x08002144: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x08002148: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
L_0800214C:
    // 0x0800214C: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x08002150: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X1854) << 16);
    // 0x08002154: addiu       $t9, $t9, 0x1854
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X1854));
    // 0x08002158: beql        $a0, $zero, L_080021C4
    if (ctx->r4 == 0) {
        // 0x0800215C: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_080021C4;
    }
    goto skip_10;
    // 0x0800215C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_10:
    // 0x08002160: jalr        $t9
    // 0x08002164: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08002164: nop

    after_54:
    // 0x08002168: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800216C: bne         $v0, $at, L_080021C0
    if (ctx->r2 != ctx->r1) {
        // 0x08002170: sll         $s4, $s5, 10
        ctx->r20 = S32(ctx->r21 << 10);
            goto L_080021C0;
    }
    // 0x08002170: sll         $s4, $s5, 10
    ctx->r20 = S32(ctx->r21 << 10);
    // 0x08002174: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08002178: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
L_0800217C:
    // 0x0800217C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x08002180: jal         0x0800185C
    // 0x08002184: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_0800185C_70929C(rdram, ctx);
        goto after_55;
    // 0x08002184: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_55:
    // 0x08002188: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x0800218C: bne         $s0, $s2, L_0800217C
    if (ctx->r16 != ctx->r18) {
        // 0x08002190: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_0800217C;
    }
    // 0x08002190: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x08002194: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x08002198: jal         0x0800185C
    // 0x0800219C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_0800185C_70929C(rdram, ctx);
        goto after_56;
    // 0x0800219C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_56:
    // 0x080021A0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080021A4: div         $zero, $s4, $at
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r1)));
    // 0x080021A8: mflo        $t3
    ctx->r11 = lo;
    // 0x080021AC: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x080021B0: addiu       $t4, $t3, 0x200
    ctx->r12 = ADD32(ctx->r11, 0X200);
    // 0x080021B4: sh          $zero, 0x4($s6)
    MEM_H(0X4, ctx->r22) = 0;
    // 0x080021B8: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
    // 0x080021BC: sh          $t4, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r12;
L_080021C0:
    // 0x080021C0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_080021C4:
    // 0x080021C4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080021C8: bne         $s5, $at, L_0800214C
    if (ctx->r21 != ctx->r1) {
        // 0x080021CC: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_0800214C;
    }
    // 0x080021CC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x080021D0: lw          $t5, 0x10($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X10);
    // 0x080021D4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080021D8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080021DC: beql        $t5, $zero, L_08002238
    if (ctx->r13 == 0) {
        // 0x080021E0: lw          $t6, 0xC($s6)
        ctx->r14 = MEM_W(ctx->r22, 0XC);
            goto L_08002238;
    }
    goto skip_11;
    // 0x080021E0: lw          $t6, 0xC($s6)
    ctx->r14 = MEM_W(ctx->r22, 0XC);
    skip_11:
    // 0x080021E4: jalr        $t9
    // 0x080021E8: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x080021E8: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    after_57:
    // 0x080021EC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080021F0: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080021F4: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x080021F8: jalr        $t9
    // 0x080021FC: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x080021FC: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    after_58:
    // 0x08002200: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002204: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08002208: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0800220C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002210: addiu       $t9, $t9, 0x351C
    ctx->r25 = ADD32(ctx->r25, 0X351C);
    // 0x08002214: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x08002218: lw          $a0, 0x10($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X10);
    // 0x0800221C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x08002220: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08002224: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08002228: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x0800222C: jalr        $t9
    // 0x08002230: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08002230: nop

    after_59:
    // 0x08002234: lw          $t6, 0xC($s6)
    ctx->r14 = MEM_W(ctx->r22, 0XC);
L_08002238:
    // 0x08002238: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x0800223C: addiu       $s0, $s0, 0x3EA0
    ctx->r16 = ADD32(ctx->r16, 0X3EA0);
    // 0x08002240: beq         $t6, $zero, L_080022AC
    if (ctx->r14 == 0) {
        // 0x08002244: lui         $t9, 0x8000
        ctx->r25 = S32(0X8000 << 16);
            goto L_080022AC;
    }
    // 0x08002244: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002248: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800224C: jalr        $t9
    // 0x08002250: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08002250: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    after_60:
    // 0x08002254: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x08002258: jalr        $s0
    // 0x0800225C: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_61;
    // 0x0800225C: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    after_61:
    // 0x08002260: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002264: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002268: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x0800226C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002270: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002274: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x08002278: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800227C: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x08002280: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08002284: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x08002288: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x0800228C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08002290: jalr        $t9
    // 0x08002294: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08002294: nop

    after_62:
    // 0x08002298: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800229C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080022A0: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x080022A4: jalr        $t9
    // 0x080022A8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x080022A8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_63:
L_080022AC:
    // 0x080022AC: lhu         $t7, 0x2($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0X2);
    // 0x080022B0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x080022B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x080022B8: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x080022BC: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x080022C0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x080022C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080022C8: addiu       $a0, $a0, -0x39F4
    ctx->r4 = ADD32(ctx->r4, -0X39F4);
    // 0x080022CC: lw          $t1, 0x5C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X5C);
    // 0x080022D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x080022D4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x080022D8: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x080022DC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x080022E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080022E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080022E8: lw          $t3, 0x5C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X5C);
    // 0x080022EC: addiu       $v0, $v0, -0x39E4
    ctx->r2 = ADD32(ctx->r2, -0X39E4);
    // 0x080022F0: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x080022F4: lhu         $t4, 0x2($s6)
    ctx->r12 = MEM_HU(ctx->r22, 0X2);
    // 0x080022F8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x080022FC: addiu       $t5, $t4, 0x200
    ctx->r13 = ADD32(ctx->r12, 0X200);
    // 0x08002300: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08002304: sh          $t6, 0x94($t9)
    MEM_H(0X94, ctx->r25) = ctx->r14;
    // 0x08002308: lhu         $t7, 0x2($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0X2);
    // 0x0800230C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x08002310: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x08002314: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x08002318: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x0800231C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x08002320: swc1        $f2, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f2.u32l;
    // 0x08002324: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x08002328: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x0800232C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x08002330: swc1        $f2, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f2.u32l;
    // 0x08002334: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08002338: swc1        $f2, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f2.u32l;
    // 0x0800233C: lhu         $t6, 0x2($s6)
    ctx->r14 = MEM_HU(ctx->r22, 0X2);
    // 0x08002340: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08002344: addiu       $t9, $t6, 0x200
    ctx->r25 = ADD32(ctx->r14, 0X200);
    // 0x08002348: andi        $t7, $t9, 0x3FF
    ctx->r15 = ctx->r25 & 0X3FF;
    // 0x0800234C: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x08002350: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08002354: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    // 0x08002358: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x0800235C: swc1        $f0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f0.u32l;
    // 0x08002360: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08002364: swc1        $f2, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f2.u32l;
    // 0x08002368: lh          $t3, 0x4($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X4);
    // 0x0800236C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08002370: sh          $t4, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r12;
    // 0x08002374: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x08002378: sw          $t5, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r13;
L_0800237C:
    // 0x0800237C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x08002380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002384: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08002388: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0800238C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x08002390: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08002394: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x08002398: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x0800239C: jr          $ra
    // 0x080023A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x080023A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_0800127C_708CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800127C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08001280: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001284: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001288: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x0800128C: lwc1        $f6, 0xE4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08001290: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2588) << 16);
    // 0x08001294: ldc1        $f4, 0x2588($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X2588));
    // 0x08001298: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800129C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x080012A0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x080012A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080012A8: addiu       $v1, $t6, 0xD0
    ctx->r3 = ADD32(ctx->r14, 0XD0);
    // 0x080012AC: bc1fl       L_08001328
    if (!c1cs) {
        // 0x080012B0: lw          $v1, 0x50($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X50);
            goto L_08001328;
    }
    goto skip_0;
    // 0x080012B0: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x080012B4: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080012B8: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080012BC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x080012C0: nop

    // 0x080012C4: bc1fl       L_080012DC
    if (!c1cs) {
        // 0x080012C8: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_080012DC;
    }
    goto skip_1;
    // 0x080012C8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x080012CC: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x080012D0: b           L_080012DC
    // 0x080012D4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_080012DC;
    // 0x080012D4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x080012D8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_080012DC:
    // 0x080012DC: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x080012E0: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x080012E4: nop

    // 0x080012E8: bc1fl       L_08001304
    if (!c1cs) {
        // 0x080012EC: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_08001304;
    }
    goto skip_2;
    // 0x080012EC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x080012F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080012F4: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    // 0x080012F8: b           L_08001324
    // 0x080012FC: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
        goto L_08001324;
    // 0x080012FC: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x08001300: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_08001304:
    // 0x08001304: nop

    // 0x08001308: bc1fl       L_08001320
    if (!c1cs) {
        // 0x0800130C: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_08001320;
    }
    goto skip_3;
    // 0x0800130C: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x08001310: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x08001314: b           L_08001324
    // 0x08001318: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
        goto L_08001324;
    // 0x08001318: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x0800131C: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_08001320:
    // 0x08001320: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
L_08001324:
    // 0x08001324: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
L_08001328:
    // 0x08001328: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800132C: lb          $v0, 0xD1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XD1);
    // 0x08001330: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08001334: beq         $v0, $at, L_0800134C
    if (ctx->r2 == ctx->r1) {
        // 0x08001338: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_0800134C;
    }
    // 0x08001338: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800133C: beql        $v0, $at, L_0800135C
    if (ctx->r2 == ctx->r1) {
        // 0x08001340: lw          $a0, 0x18($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X18);
            goto L_0800135C;
    }
    goto skip_4;
    // 0x08001340: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    skip_4:
    // 0x08001344: b           L_08001374
    // 0x08001348: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
        goto L_08001374;
    // 0x08001348: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
L_0800134C:
    // 0x0800134C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x08001350: b           L_08001370
    // 0x08001354: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_08001370;
    // 0x08001354: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x08001358: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
L_0800135C:
    // 0x0800135C: jal         0x0800126C
    // 0x08001360: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_0800126C_708CAC(rdram, ctx);
        goto after_0;
    // 0x08001360: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08001364: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001368: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x0800136C: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_08001370:
    // 0x08001370: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
L_08001374:
    // 0x08001374: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x08001378: beq         $at, $zero, L_08001808
    if (ctx->r1 == 0) {
        // 0x0800137C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_08001808;
    }
    // 0x0800137C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x08001380: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2590) << 16);
    // 0x08001384: addu        $at, $at, $t9
    gpr jr_addend_0800138C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08001388: lw          $t9, 0x2590($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(39, 0X2590));
    // 0x0800138C: jr          $t9
    // 0x08001390: nop

    switch (jr_addend_0800138C >> 2) {
        case 0: goto L_08001394; break;
        case 1: goto L_08001438; break;
        case 2: goto L_08001808; break;
        case 3: goto L_08001574; break;
        case 4: goto L_080016C8; break;
        case 5: goto L_08001808; break;
        case 6: goto L_08001808; break;
        case 7: goto L_08001808; break;
        default: switch_error(__func__, 0x0800138C, 0x08002590);
    }
    // 0x08001390: nop

L_08001394:
    // 0x08001394: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08001398: lui         $t3, 0x60
    ctx->r11 = S32(0X60 << 16);
    // 0x0800139C: addiu       $t0, $zero, 0x1BC
    ctx->r8 = ADD32(0, 0X1BC);
    // 0x080013A0: addiu       $t2, $zero, 0x1BC
    ctx->r10 = ADD32(0, 0X1BC);
    // 0x080013A4: ori         $t3, $t3, 0xA0
    ctx->r11 = ctx->r11 | 0XA0;
    // 0x080013A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013AC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080013B0: sh          $t2, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r10;
    // 0x080013B4: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x080013B8: sw          $t3, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r11;
    // 0x080013BC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x080013C0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x080013C4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x080013C8: jalr        $t9
    // 0x080013CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080013D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080013D4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080013D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x080013DC: jalr        $t9
    // 0x080013E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x080013E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080013E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080013EC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X0) << 16);
    // 0x080013F0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X0));
    // 0x080013F4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0XFCC) << 16);
    // 0x080013F8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080013FC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001400: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001404: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x08001408: addiu       $a1, $a1, 0xFCC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0XFCC));
    // 0x0800140C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001410: jalr        $t9
    // 0x08001414: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001414: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_3:
    // 0x08001418: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800141C: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x08001420: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001424: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08001428: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x0800142C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x08001430: b           L_08001808
    // 0x08001434: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_08001808;
    // 0x08001434: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
L_08001438:
    // 0x08001438: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x0800143C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08001440: lw          $t6, 0x68($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X68);
    // 0x08001444: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08001448: beql        $t7, $zero, L_080014D4
    if (ctx->r15 == 0) {
        // 0x0800144C: lh          $a0, 0x8($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X8);
            goto L_080014D4;
    }
    goto skip_5;
    // 0x0800144C: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    skip_5:
    // 0x08001450: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001458: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x0800145C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001460: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x08001464: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08001468: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x0800146C: addiu       $a0, $zero, 0x13B
    ctx->r4 = ADD32(0, 0X13B);
    // 0x08001470: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08001474: lw          $a1, 0x2600($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(39, 0X2600));
    // 0x08001478: beql        $a1, $zero, L_080014A8
    if (ctx->r5 == 0) {
        // 0x0800147C: lui         $at, 0xC302
        ctx->r1 = S32(0XC302 << 16);
            goto L_080014A8;
    }
    goto skip_6;
    // 0x0800147C: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    skip_6:
    // 0x08001480: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001484: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001488: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x0800148C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x08001490: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001494: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08001498: jalr        $t9
    // 0x0800149C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800149C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x080014A0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080014A4: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
L_080014A8:
    // 0x080014A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080014AC: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080014B0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080014B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x080014B8: nop

    // 0x080014BC: bc1fl       L_080014CC
    if (!c1cs) {
        // 0x080014C0: sh          $zero, 0x6($v1)
        MEM_H(0X6, ctx->r3) = 0;
            goto L_080014CC;
    }
    goto skip_7;
    // 0x080014C0: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    skip_7:
    // 0x080014C4: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x080014C8: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
L_080014CC:
    // 0x080014CC: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x080014D0: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
L_080014D4:
    // 0x080014D4: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    // 0x080014D8: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x080014DC: beql        $at, $zero, L_08001558
    if (ctx->r1 == 0) {
        // 0x080014E0: lwc1        $f18, 0xC($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
            goto L_08001558;
    }
    goto skip_8;
    // 0x080014E0: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    skip_8:
    // 0x080014E4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080014E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25B0) << 16);
    // 0x080014EC: ldc1        $f8, 0x25B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X25B0));
    // 0x080014F0: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x080014F4: lh          $t0, 0xA($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XA);
    // 0x080014F8: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x080014FC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08001500: addu        $t2, $a0, $t0
    ctx->r10 = ADD32(ctx->r4, ctx->r8);
    // 0x08001504: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x08001508: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800150C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x08001510: addiu       $a1, $a1, -0x6D4C
    ctx->r5 = ADD32(ctx->r5, -0X6D4C);
    // 0x08001514: beq         $at, $zero, L_08001808
    if (ctx->r1 == 0) {
        // 0x08001518: swc1        $f16, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
            goto L_08001808;
    }
    // 0x08001518: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x0800151C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001520: jalr        $a1
    // 0x08001524: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_5;
    // 0x08001524: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_5:
    // 0x08001528: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800152C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001530: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x08001534: lh          $t3, 0x6($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X6);
    // 0x08001538: addu        $t1, $v0, $t3
    ctx->r9 = ADD32(ctx->r2, ctx->r11);
    // 0x0800153C: jalr        $a1
    // 0x08001540: sh          $t1, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r9;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_6;
    // 0x08001540: sh          $t1, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r9;
    after_6:
    // 0x08001544: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001548: addiu       $t4, $v0, 0xA
    ctx->r12 = ADD32(ctx->r2, 0XA);
    // 0x0800154C: b           L_08001808
    // 0x08001550: sh          $t4, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r12;
        goto L_08001808;
    // 0x08001550: sh          $t4, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r12;
    // 0x08001554: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
L_08001558:
    // 0x08001558: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25B8) << 16);
    // 0x0800155C: ldc1        $f4, 0x25B8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X25B8));
    // 0x08001560: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x08001564: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x08001568: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800156C: b           L_08001808
    // 0x08001570: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
        goto L_08001808;
    // 0x08001570: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
L_08001574:
    // 0x08001574: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x08001578: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x0800157C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08001580: lw          $t6, 0x68($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X68);
    // 0x08001584: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08001588: beql        $t7, $zero, L_080015F4
    if (ctx->r15 == 0) {
        // 0x0800158C: lh          $v0, 0x6($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X6);
            goto L_080015F4;
    }
    goto skip_9;
    // 0x0800158C: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    skip_9:
    // 0x08001590: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001594: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001598: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x0800159C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x080015A0: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080015A4: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x080015A8: lw          $a1, 0x2600($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(39, 0X2600));
    // 0x080015AC: beql        $a1, $zero, L_080015E8
    if (ctx->r5 == 0) {
        // 0x080015B0: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_080015E8;
    }
    goto skip_10;
    // 0x080015B0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    skip_10:
    // 0x080015B4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080015B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080015BC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x080015C0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x080015C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015C8: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x080015CC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x080015D0: addiu       $a0, $zero, 0x13B
    ctx->r4 = ADD32(0, 0X13B);
    // 0x080015D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080015D8: jalr        $t9
    // 0x080015DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080015DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x080015E0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080015E4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
L_080015E8:
    // 0x080015E8: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x080015EC: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x080015F0: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
L_080015F4:
    // 0x080015F4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x080015F8: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x080015FC: beq         $at, $zero, L_080016B4
    if (ctx->r1 == 0) {
        // 0x08001600: sll         $t0, $v0, 4
        ctx->r8 = S32(ctx->r2 << 4);
            goto L_080016B4;
    }
    // 0x08001600: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x08001604: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x08001608: sll         $t0, $t0, 10
    ctx->r8 = S32(ctx->r8 << 10);
    // 0x0800160C: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x08001610: subu        $t2, $a2, $v0
    ctx->r10 = SUB32(ctx->r6, ctx->r2);
    // 0x08001614: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x08001618: bne         $a2, $zero, L_08001624
    if (ctx->r6 != 0) {
        // 0x0800161C: nop
    
            goto L_08001624;
    }
    // 0x0800161C: nop

    // 0x08001620: break       7
    do_break(134223392);
L_08001624:
    // 0x08001624: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08001628: bne         $a2, $at, L_0800163C
    if (ctx->r6 != ctx->r1) {
        // 0x0800162C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_0800163C;
    }
    // 0x0800162C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001630: bne         $t0, $at, L_0800163C
    if (ctx->r8 != ctx->r1) {
        // 0x08001634: nop
    
            goto L_0800163C;
    }
    // 0x08001634: nop

    // 0x08001638: break       6
    do_break(134223416);
L_0800163C:
    // 0x0800163C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001640: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08001644: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001648: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800164C: mflo        $a1
    ctx->r5 = lo;
    // 0x08001650: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001654: div.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x08001658: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x0800165C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001660: jalr        $t9
    // 0x08001664: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001664: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x08001668: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25C0) << 16);
    // 0x0800166C: ldc1        $f10, 0x25C0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X25C0));
    // 0x08001670: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08001674: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08001678: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x0800167C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001680: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x08001684: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001688: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800168C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001690: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x08001694: nop

    // 0x08001698: mul.d       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x0800169C: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x080016A0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x080016A4: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x080016A8: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x080016AC: swc1        $f12, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f12.u32l;
    // 0x080016B0: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
L_080016B4:
    // 0x080016B4: slti        $at, $v0, 0x3D
    ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x080016B8: bne         $at, $zero, L_08001808
    if (ctx->r1 != 0) {
        // 0x080016BC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_08001808;
    }
    // 0x080016BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080016C0: b           L_08001808
    // 0x080016C4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
        goto L_08001808;
    // 0x080016C4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_080016C8:
    // 0x080016C8: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x080016CC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x080016D0: lw          $t4, 0x68($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X68);
    // 0x080016D4: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x080016D8: beql        $t5, $zero, L_08001738
    if (ctx->r13 == 0) {
        // 0x080016DC: lh          $v0, 0x6($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X6);
            goto L_08001738;
    }
    goto skip_11;
    // 0x080016DC: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    skip_11:
    // 0x080016E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x080016E4: lw          $a1, 0x2600($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(39, 0X2600));
    // 0x080016E8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x080016EC: beql        $a1, $zero, L_08001728
    if (ctx->r5 == 0) {
        // 0x080016F0: lui         $at, 0xC302
        ctx->r1 = S32(0XC302 << 16);
            goto L_08001728;
    }
    goto skip_12;
    // 0x080016F0: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    skip_12:
    // 0x080016F4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080016F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080016FC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x08001700: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x08001704: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001708: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x0800170C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001710: addiu       $a0, $zero, 0x13B
    ctx->r4 = ADD32(0, 0X13B);
    // 0x08001714: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08001718: jalr        $t9
    // 0x0800171C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800171C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x08001720: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001724: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
L_08001728:
    // 0x08001728: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800172C: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x08001730: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x08001734: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
L_08001738:
    // 0x08001738: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x0800173C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x08001740: beq         $at, $zero, L_080017F8
    if (ctx->r1 == 0) {
        // 0x08001744: sll         $t6, $v0, 4
        ctx->r14 = S32(ctx->r2 << 4);
            goto L_080017F8;
    }
    // 0x08001744: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x08001748: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x0800174C: sll         $t6, $t6, 10
    ctx->r14 = S32(ctx->r14 << 10);
    // 0x08001750: div         $zero, $t6, $a2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r6)));
    // 0x08001754: subu        $t7, $a2, $v0
    ctx->r15 = SUB32(ctx->r6, ctx->r2);
    // 0x08001758: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x0800175C: bne         $a2, $zero, L_08001768
    if (ctx->r6 != 0) {
        // 0x08001760: nop
    
            goto L_08001768;
    }
    // 0x08001760: nop

    // 0x08001764: break       7
    do_break(134223716);
L_08001768:
    // 0x08001768: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x0800176C: bne         $a2, $at, L_08001780
    if (ctx->r6 != ctx->r1) {
        // 0x08001770: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_08001780;
    }
    // 0x08001770: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001774: bne         $t6, $at, L_08001780
    if (ctx->r14 != ctx->r1) {
        // 0x08001778: nop
    
            goto L_08001780;
    }
    // 0x08001778: nop

    // 0x0800177C: break       6
    do_break(134223740);
L_08001780:
    // 0x08001780: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001784: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x08001788: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800178C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001790: mflo        $a1
    ctx->r5 = lo;
    // 0x08001794: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001798: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x0800179C: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x080017A0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x080017A4: jalr        $t9
    // 0x080017A8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080017A8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x080017AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X25C8) << 16);
    // 0x080017B0: ldc1        $f18, 0x25C8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X25C8));
    // 0x080017B4: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x080017B8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x080017BC: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x080017C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080017C4: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x080017C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080017CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080017D0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080017D4: mul.d       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x080017D8: nop

    // 0x080017DC: mul.d       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x080017E0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x080017E4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x080017E8: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x080017EC: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x080017F0: swc1        $f12, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f12.u32l;
    // 0x080017F4: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
L_080017F8:
    // 0x080017F8: slti        $at, $v0, 0x3D
    ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x080017FC: bne         $at, $zero, L_08001808
    if (ctx->r1 != 0) {
        // 0x08001800: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_08001808;
    }
    // 0x08001800: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001804: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_08001808:
    // 0x08001808: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x0800180C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001810: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001814: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001818: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x0800181C: nop

    // 0x08001820: bc1fl       L_08001834
    if (!c1cs) {
        // 0x08001824: swc1        $f0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
            goto L_08001834;
    }
    goto skip_13;
    // 0x08001824: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    skip_13:
    // 0x08001828: sb          $t0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r8;
    // 0x0800182C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001830: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_08001834:
    // 0x08001834: lh          $t2, 0x6($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6);
    // 0x08001838: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x0800183C: sh          $t3, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r11;
    // 0x08001840: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001844: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001848: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x0800184C: jr          $ra
    // 0x08001850: nop

    TRACE_RETURN()
    return;
    // 0x08001850: nop

;}
RECOMP_FUNC void func_08000260_707CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000264: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000268: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x0800026C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000270: addiu       $s0, $s0, 0x2E0
    ctx->r16 = ADD32(ctx->r16, 0X2E0);
    // 0x08000274: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2604) << 16);
    // 0x08000278: jalr        $s0
    // 0x0800027C: lw          $a0, 0x2604($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2604));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800027C: lw          $a0, 0x2604($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2604));
    after_0:
    // 0x08000280: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2608) << 16);
    // 0x08000284: jalr        $s0
    // 0x08000288: lw          $a0, 0x2608($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2608));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08000288: lw          $a0, 0x2608($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2608));
    after_1:
    // 0x0800028C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X260C) << 16);
    // 0x08000290: jalr        $s0
    // 0x08000294: lw          $a0, 0x260C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X260C));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08000294: lw          $a0, 0x260C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X260C));
    after_2:
    // 0x08000298: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2610) << 16);
    // 0x0800029C: jalr        $s0
    // 0x080002A0: lw          $a0, 0x2610($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2610));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x080002A0: lw          $a0, 0x2610($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2610));
    after_3:
    // 0x080002A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2614) << 16);
    // 0x080002A8: jalr        $s0
    // 0x080002AC: lw          $a0, 0x2614($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2614));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x080002AC: lw          $a0, 0x2614($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2614));
    after_4:
    // 0x080002B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2618) << 16);
    // 0x080002B4: jalr        $s0
    // 0x080002B8: lw          $a0, 0x2618($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2618));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x080002B8: lw          $a0, 0x2618($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2618));
    after_5:
    // 0x080002BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X261C) << 16);
    // 0x080002C0: jalr        $s0
    // 0x080002C4: lw          $a0, 0x261C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X261C));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x080002C4: lw          $a0, 0x261C($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X261C));
    after_6:
    // 0x080002C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0X2620) << 16);
    // 0x080002CC: jalr        $s0
    // 0x080002D0: lw          $a0, 0x2620($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2620));
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x080002D0: lw          $a0, 0x2620($a0)
    ctx->r4 = MEM_W(ctx->r4, (int16_t)RELOC_LO16(39, 0X2620));
    after_7:
    // 0x080002D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080002D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080002DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080002E0: jr          $ra
    // 0x080002E4: nop

    TRACE_RETURN()
    return;
    // 0x080002E4: nop

;}
RECOMP_FUNC void func_0800008C_707ACC(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r1 = S32(RELOC_HI16(39, 0X2604) << 16);
    // 0x080000D0: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x080000D4: addiu       $t9, $zero, 0x4D4
    ctx->r25 = ADD32(0, 0X4D4);
    // 0x080000D8: sw          $v0, 0x2604($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2604), ctx->r1) = ctx->r2;
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
    // 0x080000F8: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x080000FC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2608) << 16);
    // 0x08000100: addiu       $t0, $t0, 0x2000
    ctx->r8 = ADD32(ctx->r8, 0X2000);
    // 0x08000104: addiu       $t1, $zero, 0x4D4
    ctx->r9 = ADD32(0, 0X4D4);
    // 0x08000108: sw          $v0, 0x2608($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2608), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(39, 0X260C) << 16);
    // 0x08000130: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x08000134: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x08000138: sw          $v0, 0x260C($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X260C), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(39, 0X2610) << 16);
    // 0x08000160: addiu       $t4, $t4, 0x1000
    ctx->r12 = ADD32(ctx->r12, 0X1000);
    // 0x08000164: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x08000168: sw          $v0, 0x2610($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2610), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(39, 0X2614) << 16);
    // 0x08000190: addiu       $t6, $t6, 0x2000
    ctx->r14 = ADD32(ctx->r14, 0X2000);
    // 0x08000194: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x08000198: sw          $v0, 0x2614($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2614), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(39, 0X2618) << 16);
    // 0x080001C0: addiu       $t8, $t8, 0x3000
    ctx->r24 = ADD32(ctx->r24, 0X3000);
    // 0x080001C4: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x080001C8: sw          $v0, 0x2618($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2618), ctx->r1) = ctx->r2;
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
    ctx->r1 = S32(RELOC_HI16(39, 0X261C) << 16);
    // 0x080001F0: addiu       $t0, $t0, 0x4000
    ctx->r8 = ADD32(ctx->r8, 0X4000);
    // 0x080001F4: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x080001F8: sw          $v0, 0x261C($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X261C), ctx->r1) = ctx->r2;
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
    // 0x08000218: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x0800021C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2620) << 16);
    // 0x08000220: addiu       $t2, $t2, 0x5000
    ctx->r10 = ADD32(ctx->r10, 0X5000);
    // 0x08000224: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x08000228: sw          $v0, 0x2620($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2620), ctx->r1) = ctx->r2;
    // 0x0800022C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x08000230: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08000234: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x08000238: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800023C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08000240: jalr        $s0
    // 0x08000244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x08000244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x08000248: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800024C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2624) << 16);
    // 0x08000250: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000254: sw          $v0, 0x2624($at)
    MEM_W((int16_t)RELOC_LO16(39, 0X2624), ctx->r1) = ctx->r2;
    // 0x08000258: jr          $ra
    // 0x0800025C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800025C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000BB8_7085F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000BC4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000BC8: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08000BCC: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x08000BD0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000BD4: bne         $v0, $zero, L_08000C44
    if (ctx->r2 != 0) {
        // 0x08000BD8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000C44;
    }
    // 0x08000BD8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000BDC: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x08000BE0: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x08000BE4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BE8: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000BEC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000BF0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08000C00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C04: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000C08: jalr        $t9
    // 0x08000C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000C10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C14: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000C18: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x08000C1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000C20: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x08000C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C28: jalr        $t9
    // 0x08000C2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000C30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0XA70) << 16);
    // 0x08000C3C: jalr        $t9
    // 0x08000C40: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0XA70));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C40: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0XA70));
    after_3:
L_08000C44:
    // 0x08000C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C4C: jr          $ra
    // 0x08000C50: nop

    TRACE_RETURN()
    return;
    // 0x08000C50: nop

;}
RECOMP_FUNC void func_08001854_709294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001854: jr          $ra
    // 0x08001858: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
    TRACE_RETURN()
    return;
    // 0x08001858: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
;}
RECOMP_FUNC void func_08001864_7092A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001864: jr          $ra
    // 0x08001868: nop

    TRACE_RETURN()
    return;
    // 0x08001868: nop

    // 0x0800186C: jr          $ra
    // 0x08001870: nop

    TRACE_RETURN()
    return;
    // 0x08001870: nop

;}
RECOMP_FUNC void func_080004F8_707F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080004FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000504: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000508: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2E8) << 16);
    // 0x0800050C: addiu       $a1, $a1, 0x2E8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0X2E8));
    // 0x08000510: jalr        $t9
    // 0x08000514: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000514: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_0:
    // 0x08000518: bne         $v0, $zero, L_08000528
    if (ctx->r2 != 0) {
        // 0x0800051C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_08000528;
    }
    // 0x0800051C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x08000520: b           L_080005B8
    // 0x08000524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080005B8;
    // 0x08000524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000528:
    // 0x08000528: sh          $zero, 0x22($a2)
    MEM_H(0X22, ctx->r6) = 0;
    // 0x0800052C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000530: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000534: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000538: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800053C: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000540: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000544: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08000548: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x0800054C: jalr        $t9
    // 0x08000550: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000550: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08000554: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08000558: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x0800055C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000560: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    // 0x08000564: bne         $v0, $zero, L_08000584
    if (ctx->r2 != 0) {
        // 0x08000568: sw          $v0, 0x18($v1)
        MEM_W(0X18, ctx->r3) = ctx->r2;
            goto L_08000584;
    }
    // 0x08000568: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x0800056C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X424) << 16);
    // 0x08000570: addiu       $t9, $t9, 0x424
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X424));
    // 0x08000574: jalr        $t9
    // 0x08000578: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000578: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x0800057C: b           L_080005B8
    // 0x08000580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080005B8;
    // 0x08000580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000584:
    // 0x08000584: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x08000588: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x0800058C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08000590: jalr        $t9
    // 0x08000594: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000594: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x08000598: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x0800059C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080005A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080005A4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x080005A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080005AC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080005B0: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x080005B4: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_080005B8:
    // 0x080005B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080005C0: jr          $ra
    // 0x080005C4: nop

    TRACE_RETURN()
    return;
    // 0x080005C4: nop

    // 0x080005C8: jr          $ra
    // 0x080005CC: nop

    TRACE_RETURN()
    return;
    // 0x080005CC: nop

;}
RECOMP_FUNC void func_08000000_707A40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_08000FCC_708A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FCC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000FD0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x08000FD4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x08000FD8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x08000FDC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x08000FE0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x08000FE4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x08000FE8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x08000FEC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x08000FF0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x08000FF4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08000FF8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08000FFC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08001000: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001004: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001008: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x0800100C: beq         $v0, $zero, L_08001030
    if (ctx->r2 == 0) {
        // 0x08001010: addiu       $t6, $zero, 0x20
        ctx->r14 = ADD32(0, 0X20);
            goto L_08001030;
    }
    // 0x08001010: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x08001014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001018: beq         $v0, $at, L_08001234
    if (ctx->r2 == ctx->r1) {
        // 0x0800101C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08001234;
    }
    // 0x0800101C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001020: beq         $v0, $at, L_08001090
    if (ctx->r2 == ctx->r1) {
        // 0x08001024: addiu       $a0, $zero, 0x291
        ctx->r4 = ADD32(0, 0X291);
            goto L_08001090;
    }
    // 0x08001024: addiu       $a0, $zero, 0x291
    ctx->r4 = ADD32(0, 0X291);
    // 0x08001028: b           L_08001238
    // 0x0800102C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_08001238;
    // 0x0800102C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_08001030:
    // 0x08001030: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001034: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001038: sw          $t6, 0x60($s6)
    MEM_W(0X60, ctx->r22) = ctx->r14;
    // 0x0800103C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x08001040: jalr        $t9
    // 0x08001044: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001044: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x08001048: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800104C: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001050: jalr        $t9
    // 0x08001054: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001054: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x08001058: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x0800105C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001060: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x08001064: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001068: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x0800106C: addiu       $t7, $t7, -0x26E0
    ctx->r15 = ADD32(ctx->r15, -0X26E0);
    // 0x08001070: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x08001074: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08001078: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x0800107C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001080: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001084: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x08001088: b           L_08001234
    // 0x0800108C: sb          $t8, 0xD0($s6)
    MEM_B(0XD0, ctx->r22) = ctx->r24;
        goto L_08001234;
    // 0x0800108C: sb          $t8, 0xD0($s6)
    MEM_B(0XD0, ctx->r22) = ctx->r24;
L_08001090:
    // 0x08001090: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08001094: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001098: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800109C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010A0: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x080010A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x080010A8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x080010AC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x080010B0: lw          $a1, 0x2600($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(39, 0X2600));
    // 0x080010B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x080010B8: jalr        $t9
    // 0x080010BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x080010C0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X0) << 16);
    // 0x080010C4: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X0));
    // 0x080010C8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0XC54) << 16);
    // 0x080010CC: addiu       $a1, $a1, 0xC54
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0XC54));
    // 0x080010D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x080010D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080010D8: jalr        $t9
    // 0x080010DC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010DC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_3:
    // 0x080010E0: beq         $v0, $zero, L_08001224
    if (ctx->r2 == 0) {
        // 0x080010E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08001224;
    }
    // 0x080010E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080010E8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080010EC: addiu       $v0, $v0, -0x61F8
    ctx->r2 = ADD32(ctx->r2, -0X61F8);
    // 0x080010F0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x080010F4: jalr        $v0
    // 0x080010F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x080010F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x080010FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001100: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x08001104: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001108: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x0800110C: lui         $fp, 0x8021
    ctx->r30 = S32(0X8021 << 16);
    // 0x08001110: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08001114: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08001118: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0800111C: addiu       $fp, $fp, 0x71A8
    ctx->r30 = ADD32(ctx->r30, 0X71A8);
    // 0x08001120: addiu       $s7, $s7, 0x2088
    ctx->r23 = ADD32(ctx->r23, 0X2088);
    // 0x08001124: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x08001128: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x0800112C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_08001130:
    // 0x08001130: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x08001134: jalr        $fp
    // 0x08001138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_5;
    // 0x08001138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x0800113C: beq         $v0, $zero, L_080011F4
    if (ctx->r2 == 0) {
        // 0x08001140: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_080011F4;
    }
    // 0x08001140: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x08001144: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08001148: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x0800114C: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08001150: addiu       $s4, $s4, -0xEAC
    ctx->r20 = ADD32(ctx->r20, -0XEAC);
    // 0x08001154: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08001158: jalr        $s1
    // 0x0800115C: sll         $s3, $s0, 10
    ctx->r19 = S32(ctx->r16 << 10);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x0800115C: sll         $s3, $s0, 10
    ctx->r19 = S32(ctx->r16 << 10);
    after_6:
    // 0x08001160: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08001164: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x08001168: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x0800116C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08001170: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001174: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x08001178: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x0800117C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001180: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08001184: jalr        $t9
    // 0x08001188: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001188: nop

    after_7:
    // 0x0800118C: jalr        $s1
    // 0x08001190: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08001190: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x08001194: div         $zero, $s3, $s5
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r21)));
    // 0x08001198: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x0800119C: mflo        $a3
    ctx->r7 = lo;
    // 0x080011A0: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x080011A4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080011A8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x080011AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080011B0: addiu       $a2, $zero, 0x3F0
    ctx->r6 = ADD32(0, 0X3F0);
    // 0x080011B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080011B8: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x080011BC: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x080011C0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080011C4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x080011C8: bne         $s5, $zero, L_080011D4
    if (ctx->r21 != 0) {
        // 0x080011CC: nop
    
            goto L_080011D4;
    }
    // 0x080011CC: nop

    // 0x080011D0: break       7
    do_break(134222288);
L_080011D4:
    // 0x080011D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080011D8: bne         $s5, $at, L_080011EC
    if (ctx->r21 != ctx->r1) {
        // 0x080011DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080011EC;
    }
    // 0x080011DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080011E0: bne         $s3, $at, L_080011EC
    if (ctx->r19 != ctx->r1) {
        // 0x080011E4: nop
    
            goto L_080011EC;
    }
    // 0x080011E4: nop

    // 0x080011E8: break       6
    do_break(134222312);
L_080011EC:
    // 0x080011EC: jalr        $s4
    // 0x080011F0: nop

    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x080011F0: nop

    after_9:
L_080011F4:
    // 0x080011F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x080011F8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x080011FC: bnel        $at, $zero, L_08001130
    if (ctx->r1 != 0) {
        // 0x08001200: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_08001130;
    }
    goto skip_0;
    // 0x08001200: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_0:
    // 0x08001204: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08001208: addiu       $s1, $s1, -0x7F70
    ctx->r17 = ADD32(ctx->r17, -0X7F70);
    // 0x0800120C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_08001210:
    // 0x08001210: jalr        $s1
    // 0x08001214: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_10;
    // 0x08001214: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_10:
    // 0x08001218: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x0800121C: bne         $s0, $s5, L_08001210
    if (ctx->r16 != ctx->r21) {
        // 0x08001220: nop
    
            goto L_08001210;
    }
    // 0x08001220: nop

L_08001224:
    // 0x08001224: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001228: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800122C: jalr        $t9
    // 0x08001230: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001230: nop

    after_11:
L_08001234:
    // 0x08001234: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_08001238:
    // 0x08001238: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0800123C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08001240: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08001244: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x08001248: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x0800124C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x08001250: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x08001254: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x08001258: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x0800125C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x08001260: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x08001264: jr          $ra
    // 0x08001268: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08001268: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08000FA8_7089E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FA8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000FAC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000FB0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000FB4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000FB8: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08000FBC: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08000FC0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000FC4: jr          $ra
    // 0x08000FC8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000FC8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000CC8_708708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CC8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x08000CCC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x08000CD0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x08000CD4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x08000CD8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x08000CDC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x08000CE0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x08000CE4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x08000CE8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x08000CEC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x08000CF0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08000CF4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08000CF8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08000CFC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000D00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000D04: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x08000D08: beq         $v0, $zero, L_08000D24
    if (ctx->r2 == 0) {
        // 0x08000D0C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_08000D24;
    }
    // 0x08000D0C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x08000D10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000D14: beql        $v0, $at, L_08000DA0
    if (ctx->r2 == ctx->r1) {
        // 0x08000D18: lw          $v0, 0x68($s7)
        ctx->r2 = MEM_W(ctx->r23, 0X68);
            goto L_08000DA0;
    }
    goto skip_0;
    // 0x08000D18: lw          $v0, 0x68($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X68);
    skip_0:
    // 0x08000D1C: b           L_08000F6C
    // 0x08000D20: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_08000F6C;
    // 0x08000D20: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_08000D24:
    // 0x08000D24: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2580) << 16);
    // 0x08000D28: lwc1        $f0, 0x2580($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(39, 0X2580));
    // 0x08000D2C: addiu       $t7, $zero, 0x1BC
    ctx->r15 = ADD32(0, 0X1BC);
    // 0x08000D30: lui         $t8, 0x2C0
    ctx->r24 = S32(0X2C0 << 16);
    // 0x08000D34: ori         $t8, $t8, 0x7E0
    ctx->r24 = ctx->r24 | 0X7E0;
    // 0x08000D38: sh          $t7, 0x5E($s7)
    MEM_H(0X5E, ctx->r23) = ctx->r15;
    // 0x08000D3C: sh          $t7, 0x5C($s7)
    MEM_H(0X5C, ctx->r23) = ctx->r15;
    // 0x08000D40: sw          $t8, 0x60($s7)
    MEM_W(0X60, ctx->r23) = ctx->r24;
    // 0x08000D44: sb          $zero, 0x75($s7)
    MEM_B(0X75, ctx->r23) = 0;
    // 0x08000D48: sb          $s1, 0x4C($s7)
    MEM_B(0X4C, ctx->r23) = ctx->r17;
    // 0x08000D4C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D50: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000D54: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08000D58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000D5C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000D60: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000D64: jalr        $t9
    // 0x08000D68: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D68: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x08000D6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D70: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000D74: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08000D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000D80: jalr        $t9
    // 0x08000D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000D88: addiu       $v0, $s7, 0xD0
    ctx->r2 = ADD32(ctx->r23, 0XD0);
    // 0x08000D8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000D90: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x08000D94: b           L_08000F68
    // 0x08000D98: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
        goto L_08000F68;
    // 0x08000D98: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x08000D9C: lw          $v0, 0x68($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X68);
L_08000DA0:
    // 0x08000DA0: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x08000DA4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08000DA8: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x08000DAC: bne         $t1, $zero, L_08000DD8
    if (ctx->r9 != 0) {
        // 0x08000DB0: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_08000DD8;
    }
    // 0x08000DB0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000DB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DB8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000DBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000DC4: jalr        $t9
    // 0x08000DC8: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000DC8: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    after_2:
    // 0x08000DCC: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08000DD0: sb          $t2, 0x75($s7)
    MEM_B(0X75, ctx->r23) = ctx->r10;
    // 0x08000DD4: lw          $v0, 0x68($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X68);
L_08000DD8:
    // 0x08000DD8: andi        $t3, $v0, 0x3200
    ctx->r11 = ctx->r2 & 0X3200;
    // 0x08000DDC: beq         $t3, $zero, L_08000F48
    if (ctx->r11 == 0) {
        // 0x08000DE0: lw          $s0, 0x7C($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X7C);
            goto L_08000F48;
    }
    // 0x08000DE0: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x08000DE4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x08000DE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000DEC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000DF0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x08000DF4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x08000DF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DFC: addiu       $t9, $t9, -0xA08
    ctx->r25 = ADD32(ctx->r25, -0XA08);
    // 0x08000E00: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X2600) << 16);
    // 0x08000E04: lw          $a1, 0x2600($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(39, 0X2600));
    // 0x08000E08: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x08000E0C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08000E10: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08000E14: jalr        $t9
    // 0x08000E18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x08000E1C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X0) << 16);
    // 0x08000E20: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X0));
    // 0x08000E24: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0XC54) << 16);
    // 0x08000E28: addiu       $a1, $a1, 0xC54
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0XC54));
    // 0x08000E2C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x08000E30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08000E34: jalr        $t9
    // 0x08000E38: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E38: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_4:
    // 0x08000E3C: beq         $v0, $zero, L_08000F40
    if (ctx->r2 == 0) {
        // 0x08000E40: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08000F40;
    }
    // 0x08000E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000E44: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000E48: addiu       $v0, $v0, -0x61F8
    ctx->r2 = ADD32(ctx->r2, -0X61F8);
    // 0x08000E4C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x08000E50: jalr        $v0
    // 0x08000E54: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000E54: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_5:
    // 0x08000E58: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000E5C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x08000E60: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000E64: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x08000E68: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x08000E6C: lui         $fp, 0x8022
    ctx->r30 = S32(0X8022 << 16);
    // 0x08000E70: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08000E74: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x08000E78: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08000E7C: addiu       $fp, $fp, -0x6D4C
    ctx->r30 = ADD32(ctx->r30, -0X6D4C);
    // 0x08000E80: addiu       $s6, $s6, 0x71A8
    ctx->r22 = ADD32(ctx->r22, 0X71A8);
    // 0x08000E84: addiu       $s5, $s5, 0x2088
    ctx->r21 = ADD32(ctx->r21, 0X2088);
    // 0x08000E88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x08000E8C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_08000E90:
    // 0x08000E90: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x08000E94: jalr        $s6
    // 0x08000E98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_6;
    // 0x08000E98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x08000E9C: beq         $v0, $zero, L_08000F30
    if (ctx->r2 == 0) {
        // 0x08000EA0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_08000F30;
    }
    // 0x08000EA0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x08000EA4: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08000EA8: addiu       $s4, $s4, -0xEAC
    ctx->r20 = ADD32(ctx->r20, -0XEAC);
    // 0x08000EAC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08000EB0: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x08000EB4: jalr        $fp
    // 0x08000EB8: sll         $s3, $s1, 10
    ctx->r19 = S32(ctx->r17 << 10);
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_7;
    // 0x08000EB8: sll         $s3, $s1, 10
    ctx->r19 = S32(ctx->r17 << 10);
    after_7:
    // 0x08000EBC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08000EC0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x08000EC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08000EC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000ECC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000ED0: div.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f20.d);
    // 0x08000ED4: add.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f18.d + ctx->f22.d;
    // 0x08000ED8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000EDC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000EE4: nop

    after_8:
    // 0x08000EE8: jalr        $s0
    // 0x08000EEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x08000EEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x08000EF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000EF4: div         $zero, $s3, $at
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r1)));
    // 0x08000EF8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08000EFC: mflo        $a3
    ctx->r7 = lo;
    // 0x08000F00: andi        $t4, $a3, 0xFFFF
    ctx->r12 = ctx->r7 & 0XFFFF;
    // 0x08000F04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000F08: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x08000F0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08000F10: addiu       $a2, $zero, 0x3F0
    ctx->r6 = ADD32(0, 0X3F0);
    // 0x08000F14: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000F18: div.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f20.d);
    // 0x08000F1C: add.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f18.d + ctx->f22.d;
    // 0x08000F20: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000F24: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000F28: jalr        $s4
    // 0x08000F2C: nop

    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x08000F2C: nop

    after_10:
L_08000F30:
    // 0x08000F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x08000F34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000F38: bnel        $s1, $at, L_08000E90
    if (ctx->r17 != ctx->r1) {
        // 0x08000F3C: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_08000E90;
    }
    goto skip_1;
    // 0x08000F3C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_1:
L_08000F40:
    // 0x08000F40: sb          $zero, 0xD1($s7)
    MEM_B(0XD1, ctx->r23) = 0;
    // 0x08000F44: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
L_08000F48:
    // 0x08000F48: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000F4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000F50: nop

    // 0x08000F54: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08000F58: nop

    // 0x08000F5C: bc1fl       L_08000F6C
    if (!c1cs) {
        // 0x08000F60: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_08000F6C;
    }
    goto skip_2;
    // 0x08000F60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x08000F64: sb          $zero, 0xD1($s7)
    MEM_B(0XD1, ctx->r23) = 0;
L_08000F68:
    // 0x08000F68: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_08000F6C:
    // 0x08000F6C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x08000F70: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08000F74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08000F78: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x08000F7C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x08000F80: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x08000F84: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x08000F88: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x08000F8C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x08000F90: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x08000F94: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x08000F98: jr          $ra
    // 0x08000F9C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x08000F9C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_0800049C_707EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800049C: jr          $ra
    // 0x080004A0: nop

    TRACE_RETURN()
    return;
    // 0x080004A0: nop

;}
RECOMP_FUNC void func_08000424_707E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800042C: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x08000430: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000434: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000438: beq         $t6, $zero, L_08000464
    if (ctx->r14 == 0) {
        // 0x0800043C: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_08000464;
    }
    // 0x0800043C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000440: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000444: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000448: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x0800044C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000450: lw          $a1, 0x74($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X74);
    // 0x08000454: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08000458: jalr        $t9
    // 0x0800045C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800045C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000460: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08000464:
    // 0x08000464: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000468: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800046C: jalr        $t9
    // 0x08000470: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000470: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x08000474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800047C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000480: jr          $ra
    // 0x08000484: nop

    TRACE_RETURN()
    return;
    // 0x08000484: nop

    // 0x08000488: jr          $ra
    // 0x0800048C: nop

    TRACE_RETURN()
    return;
    // 0x0800048C: nop

;}
RECOMP_FUNC void func_080007A4_7081E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007A4: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x080007A8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080007AC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080007B0: mflo        $v0
    ctx->r2 = lo;
    // 0x080007B4: jr          $ra
    // 0x080007B8: nop

    TRACE_RETURN()
    return;
    // 0x080007B8: nop

    // 0x080007BC: jr          $ra
    // 0x080007C0: nop

    TRACE_RETURN()
    return;
    // 0x080007C0: nop

;}
RECOMP_FUNC void func_08001874_7092B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800187C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001880: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x08001884: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001888: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800188C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x08001890: jalr        $t9
    // 0x08001894: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001894: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x08001898: lui         $at, 0x4339
    ctx->r1 = S32(0X4339 << 16);
    // 0x0800189C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080018A0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080018A4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080018A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080018AC: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080018B0: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x080018B4: jalr        $t9
    // 0x080018B8: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018B8: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_1:
    // 0x080018BC: lui         $at, 0x4339
    ctx->r1 = S32(0X4339 << 16);
    // 0x080018C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080018C4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x080018C8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x080018CC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x080018D0: lhu         $t8, 0x26($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X26);
    // 0x080018D4: sh          $t8, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r24;
    // 0x080018D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080018E0: jr          $ra
    // 0x080018E4: nop

    TRACE_RETURN()
    return;
    // 0x080018E4: nop

;}
RECOMP_FUNC void func_080007C4_708204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x080007C8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080007CC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080007D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080007D8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x080007DC: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x080007E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(39, 0X5D0) << 16);
    // 0x080007E4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080007E8: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x080007EC: addiu       $a1, $a1, 0x5D0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(39, 0X5D0));
    // 0x080007F0: jalr        $t9
    // 0x080007F4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007F4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_0:
    // 0x080007F8: bne         $v0, $zero, L_08000808
    if (ctx->r2 != 0) {
        // 0x080007FC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08000808;
    }
    // 0x080007FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000800: b           L_08000A5C
    // 0x08000804: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x08000804: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000808:
    // 0x08000808: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800080C: addiu       $t9, $t9, 0x1610
    ctx->r25 = ADD32(ctx->r25, 0X1610);
    // 0x08000810: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000814: jalr        $t9
    // 0x08000818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800081C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000820: addiu       $t9, $t9, 0x15F8
    ctx->r25 = ADD32(ctx->r25, 0X15F8);
    // 0x08000824: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000828: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x0800082C: jalr        $t9
    // 0x08000830: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000830: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x08000834: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(39, 0X718) << 16);
    // 0x08000838: addiu       $v0, $v0, 0x718
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(39, 0X718));
    // 0x0800083C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x08000840: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000844: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x08000848: addiu       $t9, $t9, 0x1AC
    ctx->r25 = ADD32(ctx->r25, 0X1AC);
    // 0x0800084C: jalr        $t9
    // 0x08000850: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000850: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x08000854: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X8C) << 16);
    // 0x08000858: addiu       $t9, $t9, 0x8C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X8C));
    // 0x0800085C: jalr        $t9
    // 0x08000860: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000860: nop

    after_4:
    // 0x08000864: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x08000868: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800086C: addiu       $t9, $t9, 0x19D4
    ctx->r25 = ADD32(ctx->r25, 0X19D4);
    // 0x08000870: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000874: jalr        $t9
    // 0x08000878: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000878: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_5:
    // 0x0800087C: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x08000880: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_0800089C;
    }
    // 0x08000880: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x08000884: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800088C: jalr        $t9
    // 0x08000890: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000890: nop

    after_6:
    // 0x08000894: b           L_08000A5C
    // 0x08000898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x08000898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_0800089C:
    // 0x0800089C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080008A0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080008A4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080008A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008AC: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080008B0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080008B4: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080008B8: jalr        $t9
    // 0x080008BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080008BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x080008C0: bne         $v0, $zero, L_080008E0
    if (ctx->r2 != 0) {
        // 0x080008C4: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_080008E0;
    }
    // 0x080008C4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x080008C8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080008CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008D0: jalr        $t9
    // 0x080008D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080008D4: nop

    after_8:
    // 0x080008D8: b           L_08000A5C
    // 0x080008DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x080008DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080008E0:
    // 0x080008E0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x080008E4: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x080008E8: addiu       $a3, $a3, 0x3DC
    ctx->r7 = ADD32(ctx->r7, 0X3DC);
    // 0x080008EC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x080008F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080008F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080008F8: jalr        $a3
    // 0x080008FC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_9;
    // 0x080008FC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_9:
    // 0x08000900: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08000904: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000908: bne         $v0, $at, L_08000928
    if (ctx->r2 != ctx->r1) {
        // 0x0800090C: sw          $v0, 0x30($s0)
        MEM_W(0X30, ctx->r16) = ctx->r2;
            goto L_08000928;
    }
    // 0x0800090C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x08000910: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000918: jalr        $t9
    // 0x0800091C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800091C: nop

    after_10:
    // 0x08000920: b           L_08000A5C
    // 0x08000924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x08000924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000928:
    // 0x08000928: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x0800092C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x08000930: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x08000934: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x08000938: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x0800093C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x08000940: andi        $t7, $t6, 0xFF1F
    ctx->r15 = ctx->r14 & 0XFF1F;
    // 0x08000944: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x08000948: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    // 0x0800094C: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x08000950: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x08000954: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x08000958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800095C: jalr        $a3
    // 0x08000960: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_11;
    // 0x08000960: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_11:
    // 0x08000964: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08000968: bne         $v0, $at, L_08000988
    if (ctx->r2 != ctx->r1) {
        // 0x0800096C: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_08000988;
    }
    // 0x0800096C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000970: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000978: jalr        $t9
    // 0x0800097C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800097C: nop

    after_12:
    // 0x08000980: b           L_08000A5C
    // 0x08000984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000A5C;
    // 0x08000984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000988:
    // 0x08000988: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x0800098C: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(39, 0X2608) << 16);
    // 0x08000990: lw          $t2, 0x2608($t2)
    ctx->r10 = MEM_W(ctx->r10, (int16_t)RELOC_LO16(39, 0X2608));
    // 0x08000994: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000998: addiu       $v0, $v0, 0x6F0
    ctx->r2 = ADD32(ctx->r2, 0X6F0);
    // 0x0800099C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x080009A0: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x080009A4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x080009A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x080009AC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x080009B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080009B4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x080009B8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x080009BC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x080009C0: jalr        $v0
    // 0x080009C4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x080009C4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_13:
    // 0x080009C8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080009CC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x080009D0: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(39, 0X2608) << 16);
    // 0x080009D4: lw          $t5, 0x2608($t5)
    ctx->r13 = MEM_W(ctx->r13, (int16_t)RELOC_LO16(39, 0X2608));
    // 0x080009D8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x080009DC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x080009E0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x080009E4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080009E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080009EC: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x080009F0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x080009F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x080009F8: jalr        $t9
    // 0x080009FC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080009FC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_14:
    // 0x08000A00: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x08000A04: addiu       $v1, $v1, 0x5AC
    ctx->r3 = ADD32(ctx->r3, 0X5AC);
    // 0x08000A08: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x08000A0C: jalr        $v1
    // 0x08000A10: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x08000A10: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_15:
    // 0x08000A14: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08000A18: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000A1C: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(39, 0X2604) << 16);
    // 0x08000A20: lw          $t8, 0x2604($t8)
    ctx->r24 = MEM_W(ctx->r24, (int16_t)RELOC_LO16(39, 0X2604));
    // 0x08000A24: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000A28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000A2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000A30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000A34: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x08000A38: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000A3C: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x08000A40: jalr        $t9
    // 0x08000A44: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000A44: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_16:
    // 0x08000A48: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08000A4C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08000A50: jalr        $t9
    // 0x08000A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000A54: nop

    after_17:
    // 0x08000A58: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_08000A5C:
    // 0x08000A5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A60: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08000A64: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000A68: jr          $ra
    // 0x08000A6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08000A6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000490_707ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000494: jr          $ra
    // 0x08000498: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x08000498: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_080005D0_708010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080005D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080005DC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080005E0: addiu       $t9, $t9, 0x136C
    ctx->r25 = ADD32(ctx->r25, 0X136C);
    // 0x080005E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080005E8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080005EC: jalr        $t9
    // 0x080005F0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005F0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x080005F4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x080005F8: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x080005FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000600: addiu       $t9, $t9, 0x358
    ctx->r25 = ADD32(ctx->r25, 0X358);
    // 0x08000604: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x08000608: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x0800060C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x08000610: jalr        $t9
    // 0x08000614: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000614: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x08000618: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x0800061C: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(39, 0X2604) << 16);
    // 0x08000620: lw          $t0, 0x2604($t0)
    ctx->r8 = MEM_W(ctx->r8, (int16_t)RELOC_LO16(39, 0X2604));
    // 0x08000624: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000628: addiu       $t9, $t9, 0x6F0
    ctx->r25 = ADD32(ctx->r25, 0X6F0);
    // 0x0800062C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08000630: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000634: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08000638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800063C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x08000640: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000644: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x08000648: jalr        $t9
    // 0x0800064C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800064C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x08000650: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000654: addiu       $t9, $t9, 0x5AC
    ctx->r25 = ADD32(ctx->r25, 0X5AC);
    // 0x08000658: jalr        $t9
    // 0x0800065C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800065C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_3:
    // 0x08000660: lw          $s1, 0x1C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1C);
    // 0x08000664: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x08000668: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800066C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000670: addiu       $t9, $t9, 0x9A4
    ctx->r25 = ADD32(ctx->r25, 0X9A4);
    // 0x08000674: or          $t1, $s1, $at
    ctx->r9 = ctx->r17 | ctx->r1;
    // 0x08000678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0800067C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000680: jalr        $t9
    // 0x08000684: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000684: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_4:
    // 0x08000688: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800068C: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x08000690: jalr        $t9
    // 0x08000694: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000694: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x08000698: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800069C: addiu       $t9, $t9, 0x980
    ctx->r25 = ADD32(ctx->r25, 0X980);
    // 0x080006A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x080006A4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x080006A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080006AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080006B0: jalr        $t9
    // 0x080006B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080006B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x080006B8: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    // 0x080006BC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080006C0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x080006C4: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x080006C8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x080006CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006D0: addiu       $t9, $t9, 0x110C
    ctx->r25 = ADD32(ctx->r25, 0X110C);
    // 0x080006D4: mflo        $a3
    ctx->r7 = lo;
    // 0x080006D8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x080006DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080006E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080006E4: addiu       $a1, $a1, 0x84
    ctx->r5 = ADD32(ctx->r5, 0X84);
    // 0x080006E8: jalr        $t9
    // 0x080006EC: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080006EC: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    after_7:
    // 0x080006F0: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x080006F4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x080006F8: bgez        $t6, L_08000704
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080006FC: sw          $t6, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r14;
            goto L_08000704;
    }
    // 0x080006FC: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    // 0x08000700: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_08000704:
    // 0x08000704: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08000708: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x0800070C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x08000710: jr          $ra
    // 0x08000714: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08000714: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08000060_707AA0(uint8_t* rdram, recomp_context* ctx) {
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
    ctx->r4 = S32(RELOC_HI16(39, 0X2420) << 16);
    // 0x08000074: jalr        $t9
    // 0x08000078: addiu       $a0, $a0, 0x2420
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0X2420));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000078: addiu       $a0, $a0, 0x2420
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0X2420));
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
RECOMP_FUNC void func_08000C54_708694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000C64: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000C68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000C6C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08000C70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000C78: jalr        $t9
    // 0x08000C7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000C80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000C84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000C88: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000C8C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000C90: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000C94: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08000C98: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x08000C9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CA0: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x08000CA4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CA8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(39, 0XBB8) << 16);
    // 0x08000CAC: addiu       $a0, $a0, 0xBB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(39, 0XBB8));
    // 0x08000CB0: jalr        $t9
    // 0x08000CB4: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CB4: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    after_1:
    // 0x08000CB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CC0: jr          $ra
    // 0x08000CC4: nop

    TRACE_RETURN()
    return;
    // 0x08000CC4: nop

;}
RECOMP_FUNC void func_08000718_708158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000718: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800071C: beq         $a0, $zero, L_08000780
    if (ctx->r4 == 0) {
        // 0x08000720: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_08000780;
    }
    // 0x08000720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000724: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(39, 0X260) << 16);
    // 0x08000728: addiu       $t9, $t9, 0x260
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(39, 0X260));
    // 0x0800072C: jalr        $t9
    // 0x08000730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000734: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08000738: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800073C: addiu       $t9, $t9, 0x374
    ctx->r25 = ADD32(ctx->r25, 0X374);
    // 0x08000740: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x08000744: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x08000748: jalr        $t9
    // 0x0800074C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800074C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x08000750: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000754: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000758: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800075C: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x08000760: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000764: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000768: beql        $a1, $zero, L_08000784
    if (ctx->r5 == 0) {
        // 0x0800076C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000784;
    }
    goto skip_0;
    // 0x0800076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000770: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000774: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000778: jalr        $t9
    // 0x0800077C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800077C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_08000780:
    // 0x08000780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000784:
    // 0x08000784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000788: jr          $ra
    // 0x0800078C: nop

    TRACE_RETURN()
    return;
    // 0x0800078C: nop

;}
RECOMP_FUNC void func_08000A70_7084B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000A74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000A78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000A7C: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000A88: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000A8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A90: bgez        $t6, L_08000AAC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08000A94: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_08000AAC;
    }
    // 0x08000A94: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000A98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000A9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000AA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000AA4: nop

    // 0x08000AA8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_08000AAC:
    // 0x08000AAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2570) << 16);
    // 0x08000AB0: ldc1        $f10, 0x2570($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X2570));
    // 0x08000AB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000AB8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08000ABC: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x08000AC0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000AC4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08000AC8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08000ACC: nop

    // 0x08000AD0: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x08000AD4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08000AD8: nop

    // 0x08000ADC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x08000AE0: beql        $t8, $zero, L_08000B34
    if (ctx->r24 == 0) {
        // 0x08000AE4: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_08000B34;
    }
    goto skip_0;
    // 0x08000AE4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x08000AE8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000AEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000AF0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000AF4: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x08000AF8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08000AFC: nop

    // 0x08000B00: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x08000B04: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08000B08: nop

    // 0x08000B0C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x08000B10: bne         $t8, $zero, L_08000B28
    if (ctx->r24 != 0) {
        // 0x08000B14: nop
    
            goto L_08000B28;
    }
    // 0x08000B14: nop

    // 0x08000B18: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x08000B1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000B20: b           L_08000B40
    // 0x08000B24: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_08000B40;
    // 0x08000B24: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_08000B28:
    // 0x08000B28: b           L_08000B40
    // 0x08000B2C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_08000B40;
    // 0x08000B2C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x08000B30: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_08000B34:
    // 0x08000B34: nop

    // 0x08000B38: bltz        $t8, L_08000B28
    if (SIGNED(ctx->r24) < 0) {
        // 0x08000B3C: nop
    
            goto L_08000B28;
    }
    // 0x08000B3C: nop

L_08000B40:
    // 0x08000B40: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08000B44: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x08000B48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000B4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000B50: jalr        $t9
    // 0x08000B54: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B54: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x08000B58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000B5C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B60: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000B64: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000B68: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000B6C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08000B70: bgez        $t0, L_08000B88
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000B74: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_08000B88;
    }
    // 0x08000B74: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000B78: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000B7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000B80: nop

    // 0x08000B84: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_08000B88:
    // 0x08000B88: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2578) << 16);
    // 0x08000B8C: ldc1        $f10, 0x2578($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X2578));
    // 0x08000B90: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x08000B94: nop

    // 0x08000B98: bc1fl       L_08000BAC
    if (!c1cs) {
        // 0x08000B9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000BAC;
    }
    goto skip_1;
    // 0x08000B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000BA0: jalr        $t9
    // 0x08000BA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BA4: nop

    after_1:
    // 0x08000BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000BAC:
    // 0x08000BAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000BB0: jr          $ra
    // 0x08000BB4: nop

    TRACE_RETURN()
    return;
    // 0x08000BB4: nop

;}
RECOMP_FUNC void func_080002E8_707D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080002EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080002F0: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x080002F4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(39, 0X2568) << 16);
    // 0x080002F8: ldc1        $f4, 0x2568($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(39, 0X2568));
    // 0x080002FC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000300: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000304: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08000308: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x0800030C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000310: bc1fl       L_0800038C
    if (!c1cs) {
        // 0x08000314: addiu       $v1, $a2, 0x5C
        ctx->r3 = ADD32(ctx->r6, 0X5C);
            goto L_0800038C;
    }
    goto skip_0;
    // 0x08000314: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x08000318: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800031C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000320: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000324: nop

    // 0x08000328: bc1fl       L_08000340
    if (!c1cs) {
        // 0x0800032C: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_08000340;
    }
    goto skip_1;
    // 0x0800032C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x08000330: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x08000334: b           L_08000340
    // 0x08000338: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_08000340;
    // 0x08000338: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x0800033C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_08000340:
    // 0x08000340: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08000344: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x08000348: nop

    // 0x0800034C: bc1fl       L_08000368
    if (!c1cs) {
        // 0x08000350: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_08000368;
    }
    goto skip_2;
    // 0x08000350: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x08000354: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000358: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x0800035C: b           L_08000388
    // 0x08000360: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_08000388;
    // 0x08000360: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x08000364: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_08000368:
    // 0x08000368: nop

    // 0x0800036C: bc1fl       L_08000384
    if (!c1cs) {
        // 0x08000370: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_08000384;
    }
    goto skip_3;
    // 0x08000370: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x08000374: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x08000378: b           L_08000388
    // 0x0800037C: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_08000388;
    // 0x0800037C: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x08000380: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_08000384:
    // 0x08000384: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_08000388:
    // 0x08000388: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
L_0800038C:
    // 0x0800038C: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x08000390: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000394: addiu       $t9, $t9, 0x8BC
    ctx->r25 = ADD32(ctx->r25, 0X8BC);
    // 0x08000398: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x0800039C: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    // 0x080003A0: jalr        $t9
    // 0x080003A4: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003A4: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x080003A8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080003AC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080003B0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080003B4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080003B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080003BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080003C0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080003C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003C8: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x080003CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080003D0: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x080003D4: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x080003D8: bc1fl       L_08000418
    if (!c1cs) {
        // 0x080003DC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08000418;
    }
    goto skip_4;
    // 0x080003DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x080003E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080003E4: lbu         $t8, 0x14($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X14);
    // 0x080003E8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x080003EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x080003F4: lbu         $t0, 0x15($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X15);
    // 0x080003F8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x080003FC: addiu       $t9, $t9, 0x8E4
    ctx->r25 = ADD32(ctx->r25, 0X8E4);
    // 0x08000400: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x08000404: lbu         $t1, 0x16($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X16);
    // 0x08000408: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x0800040C: jalr        $t9
    // 0x08000410: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000410: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x08000414: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000418:
    // 0x08000418: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x0800041C: jr          $ra
    // 0x08000420: nop

    TRACE_RETURN()
    return;
    // 0x08000420: nop

;}
RECOMP_FUNC void func_0800126C_708CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800126C: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001270: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08001274: jr          $ra
    // 0x08001278: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x08001278: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_08000790_7081D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000790: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x08000794: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x08000798: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x0800079C: jr          $ra
    // 0x080007A0: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080007A0: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_08000FA0_7089E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FA0: jr          $ra
    // 0x08000FA4: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
    TRACE_RETURN()
    return;
    // 0x08000FA4: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
;}
RECOMP_FUNC void func_080004A4_707EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004A4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080004A8: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x080004AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080004B0: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x080004B4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x080004B8: nop

    // 0x080004BC: bc1fl       L_080004E0
    if (!c1cs) {
        // 0x080004C0: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_080004E0;
    }
    goto skip_0;
    // 0x080004C0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x080004C4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x080004C8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080004CC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080004D0: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080004D4: b           L_080004E8
    // 0x080004D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_080004E8;
    // 0x080004D8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x080004DC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_080004E0:
    // 0x080004E0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080004E4: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_080004E8:
    // 0x080004E8: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080004EC: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x080004F0: jr          $ra
    // 0x080004F4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x080004F4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000764_70A7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000768: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800076C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000770: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x08000774: jalr        $t9
    // 0x08000778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000784: jr          $ra
    // 0x08000788: nop

    TRACE_RETURN()
    return;
    // 0x08000788: nop

;}
RECOMP_FUNC void func_080009DC_70AA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009DC: jr          $ra
    // 0x080009E0: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
    TRACE_RETURN()
    return;
    // 0x080009E0: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
;}
RECOMP_FUNC void func_08000AA4_70AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AAC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000AB0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000AB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000AB8: beq         $v0, $zero, L_08000AD4
    if (ctx->r2 == 0) {
        // 0x08000ABC: addiu       $a0, $zero, 0x24D
        ctx->r4 = ADD32(0, 0X24D);
            goto L_08000AD4;
    }
    // 0x08000ABC: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    // 0x08000AC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000AC4: beql        $v0, $at, L_08000B38
    if (ctx->r2 == ctx->r1) {
        // 0x08000AC8: lwc1        $f4, 0x24($a2)
        ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
            goto L_08000B38;
    }
    goto skip_0;
    // 0x08000AC8: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    skip_0:
    // 0x08000ACC: b           L_08000B8C
    // 0x08000AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000B8C;
    // 0x08000AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000AD4:
    // 0x08000AD4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AD8: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x08000ADC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000AE0: jalr        $t9
    // 0x08000AE4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AE4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000AEC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AF0: addiu       $t6, $zero, 0x3C3
    ctx->r14 = ADD32(0, 0X3C3);
    // 0x08000AF4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000AF8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B00: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000B04: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B0C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    after_1:
    // 0x08000B10: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000B18: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000B1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000B20: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08000B24: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08000B28: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08000B2C: b           L_08000B88
    // 0x08000B30: sb          $t8, 0xD0($a3)
    MEM_B(0XD0, ctx->r7) = ctx->r24;
        goto L_08000B88;
    // 0x08000B30: sb          $t8, 0xD0($a3)
    MEM_B(0XD0, ctx->r7) = ctx->r24;
    // 0x08000B34: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
L_08000B38:
    // 0x08000B38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X2738) << 16);
    // 0x08000B3C: ldc1        $f8, 0x2738($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(40, 0X2738));
    // 0x08000B40: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000B44: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X2740) << 16);
    // 0x08000B48: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08000B4C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000B50: swc1        $f16, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f16.u32l;
    // 0x08000B54: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x08000B58: ldc1        $f18, 0x2740($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(40, 0X2740));
    // 0x08000B5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X2748) << 16);
    // 0x08000B60: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x08000B64: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x08000B68: nop

    // 0x08000B6C: bc1fl       L_08000B84
    if (!c1cs) {
        // 0x08000B70: swc1        $f2, 0x20($a2)
        MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
            goto L_08000B84;
    }
    goto skip_1;
    // 0x08000B70: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
    skip_1:
    // 0x08000B74: lwc1        $f6, 0x2748($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(40, 0X2748));
    // 0x08000B78: swc1        $f6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f6.u32l;
    // 0x08000B7C: lwc1        $f2, 0x24($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X24);
    // 0x08000B80: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
L_08000B84:
    // 0x08000B84: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
L_08000B88:
    // 0x08000B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000B8C:
    // 0x08000B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B90: jr          $ra
    // 0x08000B94: nop

    TRACE_RETURN()
    return;
    // 0x08000B94: nop

;}
RECOMP_FUNC void func_08001454_70B494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001454: jr          $ra
    // 0x08001458: sb          $a1, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001458: sb          $a1, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_08001464_70B4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001464: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08001468: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x0800146C: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08001470: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001478: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x0800147C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x08001480: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x08001484: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08001488: addiu       $a2, $a2, -0x39F4
    ctx->r6 = ADD32(ctx->r6, -0X39F4);
    // 0x0800148C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001490: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x08001494: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08001498: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x0800149C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080014A0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x080014A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080014A8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080014AC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x080014B0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x080014B4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080014B8: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x080014BC: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x080014C0: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x080014C4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080014C8: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x080014CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080014D0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x080014D4: lhu         $t2, 0x307A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X307A);
    // 0x080014D8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080014DC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x080014E0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x080014E4: bnel        $t2, $t4, L_08001500
    if (ctx->r10 != ctx->r12) {
        // 0x080014E8: sh          $t7, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r15;
            goto L_08001500;
    }
    goto skip_0;
    // 0x080014E8: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    skip_0:
    // 0x080014EC: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
    // 0x080014F0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080014F4: b           L_08001500
    // 0x080014F8: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
        goto L_08001500;
    // 0x080014F8: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
    // 0x080014FC: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
L_08001500:
    // 0x08001500: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x08001504: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x08001508: lhu         $t0, 0x3092($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X3092);
    // 0x0800150C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001510: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001514: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x08001518: beql        $t1, $zero, L_08001534
    if (ctx->r9 == 0) {
        // 0x0800151C: lbu         $t2, 0x8($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X8);
            goto L_08001534;
    }
    goto skip_1;
    // 0x0800151C: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
    skip_1:
    // 0x08001520: jalr        $t9
    // 0x08001524: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001524: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_0:
    // 0x08001528: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x0800152C: addiu       $a2, $a2, -0x39F4
    ctx->r6 = ADD32(ctx->r6, -0X39F4);
    // 0x08001530: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
L_08001534:
    // 0x08001534: sltiu       $at, $t2, 0x14
    ctx->r1 = ctx->r10 < 0X14 ? 1 : 0;
    // 0x08001538: beq         $at, $zero, L_08002448
    if (ctx->r1 == 0) {
        // 0x0800153C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_08002448;
    }
    // 0x0800153C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x08001540: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X2780) << 16);
    // 0x08001544: addu        $at, $at, $t2
    gpr jr_addend_0800154C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08001548: lw          $t2, 0x2780($at)
    ctx->r10 = ADD32(ctx->r1, (int16_t)RELOC_LO16(40, 0X2780));
    // 0x0800154C: jr          $t2
    // 0x08001550: nop

    switch (jr_addend_0800154C >> 2) {
        case 0: goto L_08001554; break;
        case 1: goto L_08002448; break;
        case 2: goto L_080015E8; break;
        case 3: goto L_080017BC; break;
        case 4: goto L_08001944; break;
        case 5: goto L_08001A74; break;
        case 6: goto L_08001B28; break;
        case 7: goto L_08001CA8; break;
        case 8: goto L_08001D3C; break;
        case 9: goto L_08001E24; break;
        case 10: goto L_08001E6C; break;
        case 11: goto L_08001F2C; break;
        case 12: goto L_08001F58; break;
        case 13: goto L_08001F90; break;
        case 14: goto L_08001FB8; break;
        case 15: goto L_08002448; break;
        case 16: goto L_08002448; break;
        case 17: goto L_08002448; break;
        case 18: goto L_080020E8; break;
        case 19: goto L_08002288; break;
        default: switch_error(__func__, 0x0800154C, 0x08002780);
    }
    // 0x08001550: nop

L_08001554:
    // 0x08001554: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001558: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800155C: jalr        $t9
    // 0x08001560: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001560: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_1:
    // 0x08001564: beq         $v0, $zero, L_080015B8
    if (ctx->r2 == 0) {
        // 0x08001568: lw          $a0, 0x68($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X68);
            goto L_080015B8;
    }
    // 0x08001568: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x0800156C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x08001570: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x08001574: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0X78C) << 16);
    // 0x08001578: addiu       $a1, $a1, 0x78C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0X78C));
    // 0x0800157C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001584: jalr        $t9
    // 0x08001588: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001588: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_2:
    // 0x0800158C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08001590: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x08001594: sw          $t3, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r11;
    // 0x08001598: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x0800159C: addiu       $t4, $zero, 0x30C
    ctx->r12 = ADD32(0, 0X30C);
    // 0x080015A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080015A4: sw          $t4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->r12;
    // 0x080015A8: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x080015AC: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
    // 0x080015B0: b           L_08002448
    // 0x080015B4: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
        goto L_08002448;
    // 0x080015B4: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_080015B8:
    // 0x080015B8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x080015BC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x080015C0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0XB98) << 16);
    // 0x080015C4: addiu       $a1, $a1, 0xB98
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0XB98));
    // 0x080015C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x080015CC: jalr        $t9
    // 0x080015D0: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015D0: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_3:
    // 0x080015D4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080015D8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080015DC: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x080015E0: b           L_08002448
    // 0x080015E4: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
        goto L_08002448;
    // 0x080015E4: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
L_080015E8:
    // 0x080015E8: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x080015EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080015F0: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x080015F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080015F8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x080015FC: nop

    // 0x08001600: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001604: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_2;
    // 0x08001604: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_2:
    // 0x08001608: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800160C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08001610: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08001614: nop

    // 0x08001618: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x0800161C: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_3;
    // 0x0800161C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_3:
    // 0x08001620: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001624: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x08001628: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0800162C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x08001630: nop

    // 0x08001634: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001638: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_4;
    // 0x08001638: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_4:
    // 0x0800163C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001640: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001644: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08001648: nop

    // 0x0800164C: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001650: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_5;
    // 0x08001650: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_5:
    // 0x08001654: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001658: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800165C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x08001660: nop

    // 0x08001664: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001668: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_6;
    // 0x08001668: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_6:
    // 0x0800166C: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x08001670: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001674: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x08001678: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x0800167C: bne         $a0, $zero, L_0800169C
    if (ctx->r4 != 0) {
        // 0x08001680: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800169C;
    }
    // 0x08001680: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001684: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001688: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x0800168C: jalr        $t9
    // 0x08001690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08001694: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x08001698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_0800169C:
    // 0x0800169C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016A0: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080016A4: jalr        $t9
    // 0x080016A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080016A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x080016AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016B0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080016B4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080016B8: jalr        $t9
    // 0x080016BC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080016BC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_6:
    // 0x080016C0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1434) << 16);
    // 0x080016C4: addiu       $t9, $t9, 0x1434
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1434));
    // 0x080016C8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080016CC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x080016D0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x080016D4: jalr        $t9
    // 0x080016D8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080016D8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_7:
    // 0x080016DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080016E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080016E4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080016E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080016EC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080016F0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080016F4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080016F8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x080016FC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x08001700: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08001704: jalr        $t9
    // 0x08001708: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001708: nop

    after_8:
    // 0x0800170C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001710: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001714: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001718: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800171C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08001720: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08001724: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001728: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x0800172C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001730: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001734: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001738: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x0800173C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x08001740: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08001744: jalr        $t9
    // 0x08001748: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001748: nop

    after_9:
    // 0x0800174C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001750: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x08001754: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001758: jalr        $t9
    // 0x0800175C: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800175C: lui         $a1, 0x4530
    ctx->r5 = S32(0X4530 << 16);
    after_10:
    // 0x08001760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001764: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001768: jalr        $t9
    // 0x0800176C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800176C: nop

    after_11:
    // 0x08001770: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001774: addiu       $t9, $t9, 0x307C
    ctx->r25 = ADD32(ctx->r25, 0X307C);
    // 0x08001778: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800177C: jalr        $t9
    // 0x08001780: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001780: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_12:
    // 0x08001784: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001788: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800178C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001790: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001794: jalr        $t9
    // 0x08001798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x0800179C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080017A0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080017A4: jalr        $t9
    // 0x080017A8: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080017A8: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    after_14:
    // 0x080017AC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x080017B0: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x080017B4: b           L_08002448
    // 0x080017B8: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
        goto L_08002448;
    // 0x080017B8: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
L_080017BC:
    // 0x080017BC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080017C0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080017C4: jalr        $t9
    // 0x080017C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080017C8: nop

    after_15:
    // 0x080017CC: bne         $v0, $zero, L_08002448
    if (ctx->r2 != 0) {
        // 0x080017D0: addiu       $a0, $zero, 0x29
        ctx->r4 = ADD32(0, 0X29);
            goto L_08002448;
    }
    // 0x080017D0: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    // 0x080017D4: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x080017D8: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x080017DC: jalr        $v1
    // 0x080017E0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_16;
    // 0x080017E0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_16:
    // 0x080017E4: beq         $v0, $zero, L_080018C8
    if (ctx->r2 == 0) {
        // 0x080017E8: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_080018C8;
    }
    // 0x080017E8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080017EC: jalr        $v1
    // 0x080017F0: addiu       $a0, $zero, 0x7A
    ctx->r4 = ADD32(0, 0X7A);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_17;
    // 0x080017F0: addiu       $a0, $zero, 0x7A
    ctx->r4 = ADD32(0, 0X7A);
    after_17:
    // 0x080017F4: beq         $v0, $zero, L_080018C8
    if (ctx->r2 == 0) {
        // 0x080017F8: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(40, 0X60) << 16);
            goto L_080018C8;
    }
    // 0x080017F8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X60) << 16);
    // 0x080017FC: addiu       $t9, $t9, 0x60
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X60));
    // 0x08001800: jalr        $t9
    // 0x08001804: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001804: nop

    after_18:
    // 0x08001808: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x0800180C: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x08001810: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001814: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001818: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x0800181C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001820: sb          $t3, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r11;
    // 0x08001824: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08001828: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x0800182C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001830: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08001834: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08001838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800183C: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
    // 0x08001840: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08001844: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001848: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x0800184C: swc1        $f6, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f6.u32l;
    // 0x08001850: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08001854: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x08001858: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800185C: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x08001860: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08001864: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001868: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x0800186C: sh          $v0, 0x94($t8)
    MEM_H(0X94, ctx->r24) = ctx->r2;
    // 0x08001870: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08001874: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x08001878: jalr        $t9
    // 0x0800187C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800187C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_19:
    // 0x08001880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001884: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001888: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800188C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001890: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001894: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x08001898: jalr        $t9
    // 0x0800189C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800189C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_20:
    // 0x080018A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080018A4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080018A8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080018AC: lui         $a1, 0x430C
    ctx->r5 = S32(0X430C << 16);
    // 0x080018B0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x080018B4: jalr        $t9
    // 0x080018B8: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080018B8: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_21:
    // 0x080018BC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x080018C0: b           L_08002448
    // 0x080018C4: sb          $t1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r9;
        goto L_08002448;
    // 0x080018C4: sb          $t1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r9;
L_080018C8:
    // 0x080018C8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080018CC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080018D0: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x080018D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080018D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x080018DC: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x080018E0: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x080018E4: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x080018E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080018EC: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080018F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080018F4: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x080018F8: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x080018FC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08001900: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x08001904: swc1        $f0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f0.u32l;
    // 0x08001908: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x0800190C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001910: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001914: sh          $v0, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r2;
    // 0x08001918: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x0800191C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001920: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001924: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x08001928: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x0800192C: jalr        $t9
    // 0x08001930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x08001934: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08001938: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x0800193C: b           L_08002448
    // 0x08001940: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
        goto L_08002448;
    // 0x08001940: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_08001944:
    // 0x08001944: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x08001948: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800194C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x08001950: bne         $v0, $at, L_08001A00
    if (ctx->r2 != ctx->r1) {
        // 0x08001954: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08001A00;
    }
    // 0x08001954: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001958: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x0800195C: jalr        $t9
    // 0x08001960: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001960: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_23:
    // 0x08001964: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1434) << 16);
    // 0x08001968: addiu       $t9, $t9, 0x1434
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1434));
    // 0x0800196C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08001970: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x08001974: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x08001978: jalr        $t9
    // 0x0800197C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x0800197C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_24:
    // 0x08001980: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001984: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001988: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x0800198C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08001990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001994: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08001998: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0800199C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x080019A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019A4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080019A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080019AC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080019B0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080019B4: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x080019B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080019BC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x080019C0: jalr        $t9
    // 0x080019C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080019C4: nop

    after_25:
    // 0x080019C8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080019CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080019D0: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x080019D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080019D8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080019DC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080019E0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080019E4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x080019E8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x080019EC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080019F0: jalr        $t9
    // 0x080019F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080019F4: nop

    after_26:
    // 0x080019F8: b           L_0800244C
    // 0x080019FC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
        goto L_0800244C;
    // 0x080019FC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_08001A00:
    // 0x08001A00: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x08001A04: bne         $v0, $at, L_08002448
    if (ctx->r2 != ctx->r1) {
        // 0x08001A08: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002448;
    }
    // 0x08001A08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A0C: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001A10: jalr        $t9
    // 0x08001A14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001A14: nop

    after_27:
    // 0x08001A18: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001A1C: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08001A20: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08001A24: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001A28: lw          $t0, 0x5C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X5C);
    // 0x08001A2C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08001A30: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A34: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x08001A38: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08001A3C: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08001A40: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08001A44: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08001A48: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08001A4C: sb          $zero, 0x64($t2)
    MEM_B(0X64, ctx->r10) = 0;
    // 0x08001A50: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001A54: beql        $a0, $zero, L_08001A6C
    if (ctx->r4 == 0) {
        // 0x08001A58: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_08001A6C;
    }
    goto skip_7;
    // 0x08001A58: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    skip_7:
    // 0x08001A5C: jalr        $t9
    // 0x08001A60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001A60: nop

    after_28:
    // 0x08001A64: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x08001A68: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
L_08001A6C:
    // 0x08001A6C: b           L_08002448
    // 0x08001A70: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
        goto L_08002448;
    // 0x08001A70: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
L_08001A74:
    // 0x08001A74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A78: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08001A7C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001A80: addiu       $t9, $t9, 0x3B14
    ctx->r25 = ADD32(ctx->r25, 0X3B14);
    // 0x08001A84: sb          $t4, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r12;
    // 0x08001A88: jalr        $t9
    // 0x08001A8C: addiu       $a0, $zero, 0x1F2
    ctx->r4 = ADD32(0, 0X1F2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001A8C: addiu       $a0, $zero, 0x1F2
    ctx->r4 = ADD32(0, 0X1F2);
    after_29:
    // 0x08001A90: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001A94: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001A98: jalr        $t9
    // 0x08001A9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001A9C: nop

    after_30:
    // 0x08001AA0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x08001AA4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x08001AA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001AAC: bne         $a0, $zero, L_08001ACC
    if (ctx->r4 != 0) {
        // 0x08001AB0: addiu       $a3, $zero, 0x9
        ctx->r7 = ADD32(0, 0X9);
            goto L_08001ACC;
    }
    // 0x08001AB0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x08001AB4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X418) << 16);
    // 0x08001AB8: addiu       $t9, $t9, 0x418
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X418));
    // 0x08001ABC: jalr        $t9
    // 0x08001AC0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001AC0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_31:
    // 0x08001AC4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x08001AC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_08001ACC:
    // 0x08001ACC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X3E4) << 16);
    // 0x08001AD0: addiu       $t9, $t9, 0x3E4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X3E4));
    // 0x08001AD4: jalr        $t9
    // 0x08001AD8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001AD8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_32:
    // 0x08001ADC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
    // 0x08001AE0: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1454));
    // 0x08001AE4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08001AE8: jalr        $t9
    // 0x08001AEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001AEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x08001AF0: lw          $t5, 0x34($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X34);
    // 0x08001AF4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0XA08) << 16);
    // 0x08001AF8: addiu       $a1, $a1, 0xA08
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0XA08));
    // 0x08001AFC: bne         $t5, $zero, L_08001B1C
    if (ctx->r13 != 0) {
        // 0x08001B00: lw          $a0, 0x68($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X68);
            goto L_08001B1C;
    }
    // 0x08001B00: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001B04: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x08001B08: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x08001B0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x08001B10: jalr        $t9
    // 0x08001B14: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001B14: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_34:
    // 0x08001B18: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
L_08001B1C:
    // 0x08001B1C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08001B20: b           L_08002448
    // 0x08001B24: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
        goto L_08002448;
    // 0x08001B24: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
L_08001B28:
    // 0x08001B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001B2C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_08001B30:
    // 0x08001B30: lw          $a0, 0x30($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X30);
    // 0x08001B34: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X9DC) << 16);
    // 0x08001B38: addiu       $t9, $t9, 0x9DC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X9DC));
    // 0x08001B3C: beql        $a0, $zero, L_08001B84
    if (ctx->r4 == 0) {
        // 0x08001B40: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_08001B84;
    }
    goto skip_8;
    // 0x08001B40: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_8:
    // 0x08001B44: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001B48: jalr        $t9
    // 0x08001B4C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001B4C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_35:
    // 0x08001B50: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001B54: bne         $v0, $zero, L_08001B80
    if (ctx->r2 != 0) {
        // 0x08001B58: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_08001B80;
    }
    // 0x08001B58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001B5C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B60: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001B64: lw          $a0, 0x30($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X30);
    // 0x08001B68: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x08001B6C: jalr        $t9
    // 0x08001B70: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08001B70: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_36:
    // 0x08001B74: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001B78: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001B7C: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
L_08001B80:
    // 0x08001B80: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_08001B84:
    // 0x08001B84: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x08001B88: bne         $at, $zero, L_08001B30
    if (ctx->r1 != 0) {
        // 0x08001B8C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_08001B30;
    }
    // 0x08001B8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x08001B90: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x08001B94: addiu       $v0, $v0, 0x5720
    ctx->r2 = ADD32(ctx->r2, 0X5720);
    // 0x08001B98: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001B9C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001BA0: jalr        $v0
    // 0x08001BA4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_37;
    // 0x08001BA4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_37:
    // 0x08001BA8: bne         $v0, $zero, L_08001C54
    if (ctx->r2 != 0) {
        // 0x08001BAC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001C54;
    }
    // 0x08001BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001BB0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x08001BB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_08001BB8:
    // 0x08001BB8: lw          $t7, 0x30($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X30);
    // 0x08001BBC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x08001BC0: bne         $t7, $zero, L_08001C4C
    if (ctx->r15 != 0) {
        // 0x08001BC4: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
            goto L_08001C4C;
    }
    // 0x08001BC4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x08001BC8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x08001BCC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0X848) << 16);
    // 0x08001BD0: addiu       $a1, $a1, 0x848
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0X848));
    // 0x08001BD4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x08001BD8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08001BDC: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    // 0x08001BE0: jalr        $t9
    // 0x08001BE4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001BE4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_38:
    // 0x08001BE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001BEC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001BF0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X9E4) << 16);
    // 0x08001BF4: addiu       $t9, $t9, 0x9E4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X9E4));
    // 0x08001BF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08001BFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001C00: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001C04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001C08: jalr        $t9
    // 0x08001C0C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001C0C: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    after_39:
    // 0x08001C10: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001C14: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001C18: addiu       $t9, $t9, 0x54A8
    ctx->r25 = ADD32(ctx->r25, 0X54A8);
    // 0x08001C1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C20: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001C24: jalr        $t9
    // 0x08001C28: lw          $a1, 0x30($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001C28: lw          $a1, 0x30($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X30);
    after_40:
    // 0x08001C2C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001C30: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001C34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C38: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001C3C: jalr        $t9
    // 0x08001C40: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001C40: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    after_41:
    // 0x08001C44: b           L_08001C58
    // 0x08001C48: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
        goto L_08001C58;
    // 0x08001C48: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
L_08001C4C:
    // 0x08001C4C: bne         $a1, $v0, L_08001BB8
    if (ctx->r5 != ctx->r2) {
        // 0x08001C50: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_08001BB8;
    }
    // 0x08001C50: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_08001C54:
    // 0x08001C54: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
L_08001C58:
    // 0x08001C58: andi        $t0, $t8, 0x4000
    ctx->r8 = ctx->r24 & 0X4000;
    // 0x08001C5C: beql        $t0, $zero, L_0800244C
    if (ctx->r8 == 0) {
        // 0x08001C60: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_9;
    // 0x08001C60: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_9:
    // 0x08001C64: lhu         $t1, 0x4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4);
    // 0x08001C68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001C6C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001C70: bne         $t1, $at, L_08002448
    if (ctx->r9 != ctx->r1) {
        // 0x08001C74: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08002448;
    }
    // 0x08001C74: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C78: jalr        $t9
    // 0x08001C7C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08001C7C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_42:
    // 0x08001C80: beq         $v0, $zero, L_08002448
    if (ctx->r2 == 0) {
        // 0x08001C84: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08002448;
    }
    // 0x08001C84: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001C88: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001C8C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001C90: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001C94: jalr        $t9
    // 0x08001C98: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08001C98: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    after_43:
    // 0x08001C9C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x08001CA0: b           L_08002448
    // 0x08001CA4: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
        goto L_08002448;
    // 0x08001CA4: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
L_08001CA8:
    // 0x08001CA8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001CAC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x08001CB0: jalr        $t9
    // 0x08001CB4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08001CB4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_44:
    // 0x08001CB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001CBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001CC0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08001CC4: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x08001CC8: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x08001CCC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001CD0: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x08001CD4: addiu       $t9, $t9, -0x27D0
    ctx->r25 = ADD32(ctx->r25, -0X27D0);
    // 0x08001CD8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001CDC: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x08001CE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001CE4: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001CE8: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_10;
    // 0x08001CE8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_10:
    // 0x08001CEC: jalr        $t9
    // 0x08001CF0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001CF0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_45:
    // 0x08001CF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001CF8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001CFC: addiu       $t9, $t9, 0x55D4
    ctx->r25 = ADD32(ctx->r25, 0X55D4);
    // 0x08001D00: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D04: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x08001D08: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001D0C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001D10: jalr        $t9
    // 0x08001D14: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001D14: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_46:
    // 0x08001D18: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001D1C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001D20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001D24: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001D28: jalr        $t9
    // 0x08001D2C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08001D2C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_47:
    // 0x08001D30: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x08001D34: b           L_08002448
    // 0x08001D38: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
        goto L_08002448;
    // 0x08001D38: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
L_08001D3C:
    // 0x08001D3C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x08001D40: lui         $t5, 0x8002
    ctx->r13 = S32(0X8002 << 16);
    // 0x08001D44: addiu       $t5, $t5, 0x4038
    ctx->r13 = ADD32(ctx->r13, 0X4038);
    // 0x08001D48: beq         $a0, $zero, L_08001D74
    if (ctx->r4 == 0) {
        // 0x08001D4C: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_08001D74;
    }
    // 0x08001D4C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x08001D50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D54: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001D58: jalr        $t9
    // 0x08001D5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08001D5C: nop

    after_48:
    // 0x08001D60: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001D64: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x08001D68: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x08001D6C: jalr        $t9
    // 0x08001D70: addiu       $a0, $zero, 0x4D4
    ctx->r4 = ADD32(0, 0X4D4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001D70: addiu       $a0, $zero, 0x4D4
    ctx->r4 = ADD32(0, 0X4D4);
    after_49:
L_08001D74:
    // 0x08001D74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001D78: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_08001D7C:
    // 0x08001D7C: lw          $a0, 0x30($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X30);
    // 0x08001D80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D84: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001D88: beql        $a0, $zero, L_08001DAC
    if (ctx->r4 == 0) {
        // 0x08001D8C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_08001DAC;
    }
    goto skip_11;
    // 0x08001D8C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_11:
    // 0x08001D90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001D94: jalr        $t9
    // 0x08001D98: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08001D98: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_50:
    // 0x08001D9C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001DA0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08001DA4: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x08001DA8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_08001DAC:
    // 0x08001DAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08001DB0: bne         $a1, $at, L_08001D7C
    if (ctx->r5 != ctx->r1) {
        // 0x08001DB4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_08001D7C;
    }
    // 0x08001DB4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x08001DB8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001DBC: addiu       $t9, $t9, 0x55A0
    ctx->r25 = ADD32(ctx->r25, 0X55A0);
    // 0x08001DC0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001DC4: jalr        $t9
    // 0x08001DC8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001DC8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_51:
    // 0x08001DCC: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001DD0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001DD4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001DD8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001DDC: jalr        $t9
    // 0x08001DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_52:
    // 0x08001DE4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
    // 0x08001DE8: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1454));
    // 0x08001DEC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x08001DF0: jalr        $t9
    // 0x08001DF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001DF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_53:
    // 0x08001DF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DFC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x08001E00: jalr        $t9
    // 0x08001E04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001E04: nop

    after_54:
    // 0x08001E08: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001E0C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001E10: jalr        $t9
    // 0x08001E14: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08001E14: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    after_55:
    // 0x08001E18: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x08001E1C: b           L_08002448
    // 0x08001E20: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
        goto L_08002448;
    // 0x08001E20: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
L_08001E24:
    // 0x08001E24: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001E28: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001E2C: jalr        $t9
    // 0x08001E30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08001E30: nop

    after_56:
    // 0x08001E34: bne         $v0, $zero, L_08002448
    if (ctx->r2 != 0) {
        // 0x08001E38: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08002448;
    }
    // 0x08001E38: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001E3C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001E40: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001E44: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001E48: jalr        $t9
    // 0x08001E4C: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08001E4C: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    after_57:
    // 0x08001E50: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001E54: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001E58: jalr        $t9
    // 0x08001E5C: addiu       $a0, $zero, 0x30D
    ctx->r4 = ADD32(0, 0X30D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08001E5C: addiu       $a0, $zero, 0x30D
    ctx->r4 = ADD32(0, 0X30D);
    after_58:
    // 0x08001E60: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x08001E64: b           L_08002448
    // 0x08001E68: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
        goto L_08002448;
    // 0x08001E68: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_08001E6C:
    // 0x08001E6C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x08001E70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001E74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001E78: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001E7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001E80: lui         $at, 0xC200
    ctx->r1 = S32(0XC200 << 16);
    // 0x08001E84: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001E88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001E8C: sub.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d - ctx->f6.d;
    // 0x08001E90: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E94: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001E98: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08001E9C: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x08001EA0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08001EA4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x08001EA8: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x08001EAC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08001EB0: nop

    // 0x08001EB4: bc1fl       L_0800244C
    if (!c1cs) {
        // 0x08001EB8: lw          $a0, 0x24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X24);
            goto L_0800244C;
    }
    goto skip_12;
    // 0x08001EB8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    skip_12:
    // 0x08001EBC: jalr        $t9
    // 0x08001EC0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x08001EC0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_59:
    // 0x08001EC4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001EC8: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001ECC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001ED0: lui         $a1, 0xC218
    ctx->r5 = S32(0XC218 << 16);
    // 0x08001ED4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x08001ED8: jalr        $t9
    // 0x08001EDC: lui         $a3, 0x4190
    ctx->r7 = S32(0X4190 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x08001EDC: lui         $a3, 0x4190
    ctx->r7 = S32(0X4190 << 16);
    after_60:
    // 0x08001EE0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001EE4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001EE8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001EEC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001EF0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001EF4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08001EF8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08001EFC: jalr        $t9
    // 0x08001F00: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08001F00: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_61:
    // 0x08001F04: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001F08: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001F0C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001F10: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001F14: jalr        $t9
    // 0x08001F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08001F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_62:
    // 0x08001F1C: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x08001F20: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x08001F24: b           L_08002448
    // 0x08001F28: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
        goto L_08002448;
    // 0x08001F28: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
L_08001F2C:
    // 0x08001F2C: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x08001F30: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08001F34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001F38: bne         $t1, $at, L_08002448
    if (ctx->r9 != ctx->r1) {
        // 0x08001F3C: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
            goto L_08002448;
    }
    // 0x08001F3C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
    // 0x08001F40: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1454));
    // 0x08001F44: jalr        $t9
    // 0x08001F48: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08001F48: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_63:
    // 0x08001F4C: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x08001F50: b           L_08002448
    // 0x08001F54: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
        goto L_08002448;
    // 0x08001F54: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
L_08001F58:
    // 0x08001F58: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001F5C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001F60: jalr        $t9
    // 0x08001F64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08001F64: nop

    after_64:
    // 0x08001F68: bne         $v0, $zero, L_08002448
    if (ctx->r2 != 0) {
        // 0x08001F6C: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_08002448;
    }
    // 0x08001F6C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001F70: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
    // 0x08001F74: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1454));
    // 0x08001F78: jalr        $t9
    // 0x08001F7C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x08001F7C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_65:
    // 0x08001F80: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x08001F84: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x08001F88: b           L_08002448
    // 0x08001F8C: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
        goto L_08002448;
    // 0x08001F8C: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
L_08001F90:
    // 0x08001F90: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x08001F94: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x08001F98: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001F9C: bne         $t4, $at, L_08002448
    if (ctx->r12 != ctx->r1) {
        // 0x08001FA0: addiu       $t9, $t9, -0x2CF0
        ctx->r25 = ADD32(ctx->r25, -0X2CF0);
            goto L_08002448;
    }
    // 0x08001FA0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001FA4: jalr        $t9
    // 0x08001FA8: addiu       $a0, $zero, 0x30E
    ctx->r4 = ADD32(0, 0X30E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x08001FA8: addiu       $a0, $zero, 0x30E
    ctx->r4 = ADD32(0, 0X30E);
    after_66:
    // 0x08001FAC: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x08001FB0: b           L_08002448
    // 0x08001FB4: sb          $t5, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r13;
        goto L_08002448;
    // 0x08001FB4: sb          $t5, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r13;
L_08001FB8:
    // 0x08001FB8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001FBC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001FC0: jalr        $t9
    // 0x08001FC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x08001FC4: nop

    after_67:
    // 0x08001FC8: bne         $v0, $zero, L_08002448
    if (ctx->r2 != 0) {
        // 0x08001FCC: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_08002448;
    }
    // 0x08001FCC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001FD0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x08001FD4: addiu       $v0, $v0, -0x5324
    ctx->r2 = ADD32(ctx->r2, -0X5324);
    // 0x08001FD8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08001FDC: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08001FE0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08001FE4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001FE8: jalr        $v0
    // 0x08001FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_68;
    // 0x08001FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_68:
    // 0x08001FF0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001FF4: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08001FF8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001FFC: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08002000: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x08002004: lw          $t8, -0x39DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39DC);
    // 0x08002008: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800200C: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08002010: sb          $t7, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = ctx->r15;
    // 0x08002014: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08002018: beq         $a0, $zero, L_0800202C
    if (ctx->r4 == 0) {
        // 0x0800201C: nop
    
            goto L_0800202C;
    }
    // 0x0800201C: nop

    // 0x08002020: jalr        $t9
    // 0x08002024: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08002024: nop

    after_69:
    // 0x08002028: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_0800202C:
    // 0x0800202C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002030: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08002034: jalr        $t9
    // 0x08002038: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08002038: nop

    after_70:
    // 0x0800203C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002040: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08002044: jalr        $t9
    // 0x08002048: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08002048: nop

    after_71:
    // 0x0800204C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002050: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x08002054: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08002058: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x0800205C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08002060: lw          $t1, 0x5C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X5C);
    // 0x08002064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002068: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x0800206C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08002070: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08002074: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08002078: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800207C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08002080: jalr        $t9
    // 0x08002084: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08002084: nop

    after_72:
    // 0x08002088: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800208C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08002090: jalr        $t9
    // 0x08002094: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08002094: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_73:
    // 0x08002098: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X0) << 16);
    // 0x0800209C: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x080020A0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X0));
    // 0x080020A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(40, 0X78C) << 16);
    // 0x080020A8: addiu       $a1, $a1, 0x78C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(40, 0X78C));
    // 0x080020AC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x080020B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080020B4: jalr        $t9
    // 0x080020B8: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_74;
    // 0x080020B8: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_74:
    // 0x080020BC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080020C0: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x080020C4: sw          $t3, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r11;
    // 0x080020C8: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x080020CC: addiu       $t4, $zero, 0x30C
    ctx->r12 = ADD32(0, 0X30C);
    // 0x080020D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080020D4: sw          $t4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->r12;
    // 0x080020D8: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x080020DC: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
    // 0x080020E0: b           L_08002448
    // 0x080020E4: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
        goto L_08002448;
    // 0x080020E4: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
L_080020E8:
    // 0x080020E8: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x080020EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080020F0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1410) << 16);
    // 0x080020F4: bne         $t8, $at, L_080021F4
    if (ctx->r24 != ctx->r1) {
        // 0x080020F8: addiu       $t9, $t9, 0x1410
        ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1410));
            goto L_080021F4;
    }
    // 0x080020F8: addiu       $t9, $t9, 0x1410
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1410));
    // 0x080020FC: lui         $t0, 0x8002
    ctx->r8 = S32(0X8002 << 16);
    // 0x08002100: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002104: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002108: addiu       $t0, $t0, 0x4038
    ctx->r8 = ADD32(ctx->r8, 0X4038);
    // 0x0800210C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x08002110: jalr        $t9
    // 0x08002114: addiu       $a0, $zero, 0x2B2
    ctx->r4 = ADD32(0, 0X2B2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_75;
    // 0x08002114: addiu       $a0, $zero, 0x2B2
    ctx->r4 = ADD32(0, 0X2B2);
    after_75:
    // 0x08002118: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800211C: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    // 0x08002120: jalr        $t9
    // 0x08002124: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_76;
    // 0x08002124: nop

    after_76:
    // 0x08002128: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x0800212C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002130: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08002134: beql        $a0, $zero, L_0800215C
    if (ctx->r4 == 0) {
        // 0x08002138: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_0800215C;
    }
    goto skip_13;
    // 0x08002138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    skip_13:
    // 0x0800213C: jalr        $t9
    // 0x08002140: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_77;
    // 0x08002140: nop

    after_77:
    // 0x08002144: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002148: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x0800214C: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x08002150: jalr        $t9
    // 0x08002154: addiu       $a0, $zero, 0x4D4
    ctx->r4 = ADD32(0, 0X4D4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x08002154: addiu       $a0, $zero, 0x4D4
    ctx->r4 = ADD32(0, 0X4D4);
    after_78:
    // 0x08002158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_0800215C:
    // 0x0800215C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_08002160:
    // 0x08002160: lw          $a0, 0x30($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X30);
    // 0x08002164: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002168: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800216C: beql        $a0, $zero, L_08002190
    if (ctx->r4 == 0) {
        // 0x08002170: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_08002190;
    }
    goto skip_14;
    // 0x08002170: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    skip_14:
    // 0x08002174: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08002178: jalr        $t9
    // 0x0800217C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_79;
    // 0x0800217C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_79:
    // 0x08002180: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08002184: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08002188: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x0800218C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_08002190:
    // 0x08002190: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08002194: bne         $a1, $at, L_08002160
    if (ctx->r5 != ctx->r1) {
        // 0x08002198: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_08002160;
    }
    // 0x08002198: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x0800219C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080021A0: addiu       $t9, $t9, 0x55A0
    ctx->r25 = ADD32(ctx->r25, 0X55A0);
    // 0x080021A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080021A8: jalr        $t9
    // 0x080021AC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_80;
    // 0x080021AC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_80:
    // 0x080021B0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080021B4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080021B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080021BC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080021C0: jalr        $t9
    // 0x080021C4: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x080021C4: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_81:
    // 0x080021C8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X1454) << 16);
    // 0x080021CC: addiu       $t9, $t9, 0x1454
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X1454));
    // 0x080021D0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x080021D4: jalr        $t9
    // 0x080021D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_82;
    // 0x080021D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_82:
    // 0x080021DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080021E0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080021E4: jalr        $t9
    // 0x080021E8: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_83;
    // 0x080021E8: addiu       $a0, $zero, 0x30C
    ctx->r4 = ADD32(0, 0X30C);
    after_83:
    // 0x080021EC: b           L_0800244C
    // 0x080021F0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
        goto L_0800244C;
    // 0x080021F0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_080021F4:
    // 0x080021F4: jalr        $t9
    // 0x080021F8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_84;
    // 0x080021F8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_84:
    // 0x080021FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002200: bne         $v0, $at, L_08002448
    if (ctx->r2 != ctx->r1) {
        // 0x08002204: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002448;
    }
    // 0x08002204: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002208: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800220C: jalr        $t9
    // 0x08002210: addiu       $a0, $zero, 0x262
    ctx->r4 = ADD32(0, 0X262);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x08002210: addiu       $a0, $zero, 0x262
    ctx->r4 = ADD32(0, 0X262);
    after_85:
    // 0x08002214: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08002218: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x0800221C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08002220: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08002224: jalr        $t9
    // 0x08002228: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_86;
    // 0x08002228: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    after_86:
    // 0x0800222C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08002230: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x08002234: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x08002238: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x0800223C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002240: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x08002244: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002248: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800224C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x08002250: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08002254: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002258: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x0800225C: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08002260: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x08002264: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x08002268: lwc1        $f10, 0x10($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X10);
    // 0x0800226C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x08002270: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x08002274: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x08002278: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x0800227C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x08002280: b           L_08002448
    // 0x08002284: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
        goto L_08002448;
    // 0x08002284: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
L_08002288:
    // 0x08002288: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800228C: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08002290: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x08002294: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08002298: jalr        $v0
    // 0x0800229C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_87;
    // 0x0800229C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_87:
    // 0x080022A0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080022A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080022A8: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x080022AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022B0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080022B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080022B8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080022BC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x080022C0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x080022C4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080022C8: jalr        $t9
    // 0x080022CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_88;
    // 0x080022CC: nop

    after_88:
    // 0x080022D0: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x080022D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080022D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080022DC: bnel        $t5, $at, L_08002310
    if (ctx->r13 != ctx->r1) {
        // 0x080022E0: lui         $at, 0xC220
        ctx->r1 = S32(0XC220 << 16);
            goto L_08002310;
    }
    goto skip_15;
    // 0x080022E0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    skip_15:
    // 0x080022E4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080022E8: jalr        $t9
    // 0x080022EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_89;
    // 0x080022EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_89:
    // 0x080022F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022F4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080022F8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x080022FC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x08002300: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x08002304: jalr        $t9
    // 0x08002308: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_90;
    // 0x08002308: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_90:
    // 0x0800230C: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
L_08002310:
    // 0x08002310: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002314: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08002318: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X142C) << 16);
    // 0x0800231C: addiu       $t9, $t9, 0x142C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X142C));
    // 0x08002320: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x08002324: nop

    // 0x08002328: bc1f        L_0800237C
    if (!c1cs) {
        // 0x0800232C: nop
    
            goto L_0800237C;
    }
    // 0x0800232C: nop

    // 0x08002330: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08002334: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x08002338: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0800233C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08002340: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002344: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002348: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x0800234C: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x08002350: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x08002354: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(40, 0X27D0) << 16);
    // 0x08002358: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x0800235C: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x08002360: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08002364: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    // 0x08002368: ldc1        $f6, 0x27D0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(40, 0X27D0));
    // 0x0800236C: sub.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d - ctx->f6.d;
    // 0x08002370: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x08002374: b           L_0800241C
    // 0x08002378: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
        goto L_0800241C;
    // 0x08002378: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
L_0800237C:
    // 0x0800237C: jalr        $t9
    // 0x08002380: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x08002380: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_91:
    // 0x08002384: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002388: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x0800238C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002390: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08002394: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x08002398: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x0800239C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023A0: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080023A4: beq         $a0, $zero, L_080023B8
    if (ctx->r4 == 0) {
        // 0x080023A8: nop
    
            goto L_080023B8;
    }
    // 0x080023A8: nop

    // 0x080023AC: jalr        $t9
    // 0x080023B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_92;
    // 0x080023B0: nop

    after_92:
    // 0x080023B4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_080023B8:
    // 0x080023B8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080023BC: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080023C0: jalr        $t9
    // 0x080023C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_93;
    // 0x080023C4: nop

    after_93:
    // 0x080023C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023CC: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080023D0: jalr        $t9
    // 0x080023D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_94;
    // 0x080023D4: nop

    after_94:
    // 0x080023D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080023DC: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x080023E0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080023E4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080023E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080023EC: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x080023F0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080023F4: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080023F8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x080023FC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08002400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002404: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08002408: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x0800240C: jalr        $t9
    // 0x08002410: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_95;
    // 0x08002410: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_95:
    // 0x08002414: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08002418: sb          $t1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r9;
L_0800241C:
    // 0x0800241C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002420: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08002424: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08002428: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800242C: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x08002430: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08002434: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08002438: swc1        $f18, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f18.u32l;
    // 0x0800243C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x08002440: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x08002444: swc1        $f4, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f4.u32l;
L_08002448:
    // 0x08002448: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
L_0800244C:
    // 0x0800244C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002450: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002454: beql        $a0, $zero, L_08002468
    if (ctx->r4 == 0) {
        // 0x08002458: lw          $a0, 0x28($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X28);
            goto L_08002468;
    }
    goto skip_16;
    // 0x08002458: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    skip_16:
    // 0x0800245C: jalr        $t9
    // 0x08002460: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_96;
    // 0x08002460: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_96:
    // 0x08002464: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
L_08002468:
    // 0x08002468: beql        $a0, $zero, L_08002564
    if (ctx->r4 == 0) {
        // 0x0800246C: lh          $t5, 0x6($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X6);
            goto L_08002564;
    }
    goto skip_17;
    // 0x0800246C: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    skip_17:
    // 0x08002470: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x08002474: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(40, 0X3F8) << 16);
    // 0x08002478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800247C: beq         $v0, $zero, L_08002498
    if (ctx->r2 == 0) {
        // 0x08002480: addiu       $t6, $t6, 0x3F8
        ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(40, 0X3F8));
            goto L_08002498;
    }
    // 0x08002480: addiu       $t6, $t6, 0x3F8
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(40, 0X3F8));
    // 0x08002484: beq         $v0, $at, L_080024CC
    if (ctx->r2 == ctx->r1) {
        // 0x08002488: lui         $t5, 0x800
        ctx->r13 = S32(RELOC_HI16(40, 0X3F8) << 16);
            goto L_080024CC;
    }
    // 0x08002488: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(40, 0X3F8) << 16);
    // 0x0800248C: addiu       $t5, $t5, 0x3F8
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(40, 0X3F8));
    // 0x08002490: b           L_08002504
    // 0x08002494: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
        goto L_08002504;
    // 0x08002494: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
L_08002498:
    // 0x08002498: jalr        $t6
    // 0x0800249C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r14)(rdram, ctx);
        goto after_97;
    // 0x0800249C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_97:
    // 0x080024A0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x080024A4: bne         $v0, $at, L_080024C4
    if (ctx->r2 != ctx->r1) {
        // 0x080024A8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080024C4;
    }
    // 0x080024A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080024AC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080024B0: jalr        $t9
    // 0x080024B4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_98;
    // 0x080024B4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_98:
    // 0x080024B8: lb          $t7, 0xA($s0)
    ctx->r15 = MEM_B(ctx->r16, 0XA);
    // 0x080024BC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x080024C0: sb          $t8, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r24;
L_080024C4:
    // 0x080024C4: b           L_08002504
    // 0x080024C8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
        goto L_08002504;
    // 0x080024C8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
L_080024CC:
    // 0x080024CC: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(40, 0X3F8) << 16);
    // 0x080024D0: addiu       $v0, $v0, 0x3F8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(40, 0X3F8));
    // 0x080024D4: jalr        $v0
    // 0x080024D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_99;
    // 0x080024D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_99:
    // 0x080024DC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080024E0: bne         $v0, $at, L_08002500
    if (ctx->r2 != ctx->r1) {
        // 0x080024E4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002500;
    }
    // 0x080024E4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080024E8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080024EC: jalr        $t9
    // 0x080024F0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_100;
    // 0x080024F0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_100:
    // 0x080024F4: lb          $t0, 0xA($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XA);
    // 0x080024F8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x080024FC: sb          $t1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r9;
L_08002500:
    // 0x08002500: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
L_08002504:
    // 0x08002504: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08002508: jalr        $t9
    // 0x0800250C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_101;
    // 0x0800250C: nop

    after_101:
    // 0x08002510: bgtz        $v0, L_08002524
    if (SIGNED(ctx->r2) > 0) {
        // 0x08002514: lui         $t9, 0x800
        ctx->r25 = S32(RELOC_HI16(40, 0X145C) << 16);
            goto L_08002524;
    }
    // 0x08002514: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X145C) << 16);
    // 0x08002518: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x0800251C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x08002520: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
L_08002524:
    // 0x08002524: addiu       $t9, $t9, 0x145C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X145C));
    // 0x08002528: jalr        $t9
    // 0x0800252C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_102;
    // 0x0800252C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_102:
    // 0x08002530: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(40, 0X410) << 16);
    // 0x08002534: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(40, 0X410));
    // 0x08002538: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x0800253C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08002540: jalr        $t9
    // 0x08002544: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_103;
    // 0x08002544: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_103:
    // 0x08002548: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0800254C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x08002550: bgtzl       $a2, L_08002564
    if (SIGNED(ctx->r6) > 0) {
        // 0x08002554: lh          $t5, 0x6($s0)
        ctx->r13 = MEM_H(ctx->r16, 0X6);
            goto L_08002564;
    }
    goto skip_18;
    // 0x08002554: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    skip_18:
    // 0x08002558: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x0800255C: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
    // 0x08002560: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
L_08002564:
    // 0x08002564: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x08002568: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x0800256C: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
    // 0x08002570: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x08002574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002578: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800257C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x08002580: jr          $ra
    // 0x08002584: nop

    TRACE_RETURN()
    return;
    // 0x08002584: nop

;}
