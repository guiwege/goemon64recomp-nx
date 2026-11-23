#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080023A4_6E6384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080023A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080023B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080023B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080023B8: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x080023BC: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x080023C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080023C4: jalr        $t9
    // 0x080023C8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023C8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_0:
    // 0x080023CC: lw          $t1, 0xD0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD0);
    // 0x080023D0: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x080023D4: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(29, 0X2D68) << 16);
    // 0x080023D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023DC: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x080023E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x080023E4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080023E8: addiu       $t2, $zero, 0xE1
    ctx->r10 = ADD32(0, 0XE1);
    // 0x080023EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080023F0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x080023F4: addiu       $t5, $t5, 0x2D68
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(29, 0X2D68));
    // 0x080023F8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080023FC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08002400: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08002404: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08002408: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x0800240C: sb          $t3, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r11;
    // 0x08002410: sb          $t4, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r12;
    // 0x08002414: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
    // 0x08002418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800241C: jalr        $t9
    // 0x08002420: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002420: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    after_1:
    // 0x08002424: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002428: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800242C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002430: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800243C: jalr        $t9
    // 0x08002440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08002444: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002448: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002450: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08002454: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08002458: jalr        $t9
    // 0x0800245C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800245C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08002460: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002464: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08002468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800246C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002470: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08002474: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x08002478: jalr        $t9
    // 0x0800247C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800247C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08002480: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002484: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800248C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x08002490: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x08002494: jalr        $t9
    // 0x08002498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x0800249C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024A0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080024A4: jalr        $t9
    // 0x080024A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080024A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x080024AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024B0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080024B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024B8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080024BC: jalr        $t9
    // 0x080024C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080024C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080024C4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080024C8: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x080024CC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080024D0: addiu       $a1, $a1, 0x3D10
    ctx->r5 = ADD32(ctx->r5, 0X3D10);
    // 0x080024D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080024D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024DC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080024E0: jalr        $v0
    // 0x080024E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x080024E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x080024E8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080024EC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080024F0: addiu       $a1, $a1, 0x5D10
    ctx->r5 = ADD32(ctx->r5, 0X5D10);
    // 0x080024F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x080024FC: jalr        $v0
    // 0x08002500: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08002500: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08002504: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002508: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x0800250C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X3150) << 16);
    // 0x08002510: addiu       $a1, $a1, 0x3150
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X3150));
    // 0x08002514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002518: jalr        $t9
    // 0x0800251C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800251C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x08002520: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002524: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800252C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002530: jalr        $t9
    // 0x08002534: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002534: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x08002538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800253C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002540: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002544: jr          $ra
    // 0x08002548: nop

    TRACE_RETURN()
    return;
    // 0x08002548: nop

;}
RECOMP_FUNC void func_080012EC_6E52CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080012F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080012F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080012F8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080012FC: lbu         $v0, 0xED($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XED);
    // 0x08001300: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x08001304: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001308: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800130C: bne         $v0, $zero, L_08001344
    if (ctx->r2 != 0) {
        // 0x08001310: sb          $t6, 0xEC($a0)
        MEM_B(0XEC, ctx->r4) = ctx->r14;
            goto L_08001344;
    }
    // 0x08001310: sb          $t6, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r14;
    // 0x08001314: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001318: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800131C: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x08001320: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x08001324: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08001328: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800132C: jalr        $t9
    // 0x08001330: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001330: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08001334: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001338: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x0800133C: b           L_0800138C
    // 0x08001340: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
        goto L_0800138C;
    // 0x08001340: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
L_08001344:
    // 0x08001344: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001348: bne         $v0, $at, L_0800138C
    if (ctx->r2 != ctx->r1) {
        // 0x0800134C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800138C;
    }
    // 0x0800134C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001350: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x08001354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001358: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800135C: bgez        $a1, L_0800136C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x08001360: sra         $t0, $a1, 1
        ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
            goto L_0800136C;
    }
    // 0x08001360: sra         $t0, $a1, 1
    ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
    // 0x08001364: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x08001368: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_0800136C:
    // 0x0800136C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x08001370: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001374: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001378: jalr        $t9
    // 0x0800137C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800137C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_1:
    // 0x08001380: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001384: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08001388: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
L_0800138C:
    // 0x0800138C: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x08001390: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001394: addiu       $t2, $zero, 0x10D
    ctx->r10 = ADD32(0, 0X10D);
    // 0x08001398: ori         $t3, $t3, 0x6E1
    ctx->r11 = ctx->r11 | 0X6E1;
    // 0x0800139C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080013A0: sh          $t2, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r10;
    // 0x080013A4: sw          $t3, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r11;
    // 0x080013A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080013AC: jalr        $t9
    // 0x080013B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x080013B4: lbu         $v0, 0xED($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XED);
    // 0x080013B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X143C) << 16);
    // 0x080013BC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x080013C0: bne         $v0, $zero, L_080013E8
    if (ctx->r2 != 0) {
        // 0x080013C4: addiu       $a0, $a0, 0x143C
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X143C));
            goto L_080013E8;
    }
    // 0x080013C4: addiu       $a0, $a0, 0x143C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X143C));
    // 0x080013C8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32AC) << 16);
    // 0x080013CC: lwc1        $f0, 0x32AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X32AC));
    // 0x080013D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080013D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080013D8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080013DC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080013E0: b           L_0800140C
    // 0x080013E4: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_0800140C;
    // 0x080013E4: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_080013E8:
    // 0x080013E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080013EC: bne         $v0, $at, L_0800140C
    if (ctx->r2 != ctx->r1) {
        // 0x080013F0: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(29, 0X32B0) << 16);
            goto L_0800140C;
    }
    // 0x080013F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32B0) << 16);
    // 0x080013F4: lwc1        $f0, 0x32B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X32B0));
    // 0x080013F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080013FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001400: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08001404: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001408: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
L_0800140C:
    // 0x0800140C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001410: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x08001414: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x08001418: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x0800141C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001420: jalr        $t9
    // 0x08001424: sb          $t4, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001424: sb          $t4, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r12;
    after_3:
    // 0x08001428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800142C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001430: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001434: jr          $ra
    // 0x08001438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08002A84_6E6A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002A94: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002A98: jalr        $t9
    // 0x08002A9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08002AA0: bne         $v0, $zero, L_08002AB8
    if (ctx->r2 != 0) {
        // 0x08002AA4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X2AC8) << 16);
            goto L_08002AB8;
    }
    // 0x08002AA4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2AC8) << 16);
    // 0x08002AA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002AAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002AB0: jalr        $t9
    // 0x08002AB4: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2AC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AB4: addiu       $a0, $a0, 0x2AC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2AC8));
    after_1:
L_08002AB8:
    // 0x08002AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AC0: jr          $ra
    // 0x08002AC4: nop

    TRACE_RETURN()
    return;
    // 0x08002AC4: nop

;}
RECOMP_FUNC void func_0800266C_6E664C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800266C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002670: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002678: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800267C: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08002680: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08002684: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08002688: jalr        $t9
    // 0x0800268C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800268C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002690: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002694: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002698: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800269C: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x080026A0: jalr        $t9
    // 0x080026A4: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026A4: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    after_1:
    // 0x080026A8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080026AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32E0) << 16);
    // 0x080026B0: ldc1        $f0, 0x32E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32E0));
    // 0x080026B4: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080026B8: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x080026BC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080026C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080026C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080026C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080026CC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080026D0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080026D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2734) << 16);
    // 0x080026D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32E8) << 16);
    // 0x080026DC: sub.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d - ctx->f0.d;
    // 0x080026E0: addiu       $a0, $a0, 0x2734
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2734));
    // 0x080026E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026E8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080026EC: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x080026F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080026F4: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x080026F8: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x080026FC: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x08002700: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08002704: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x08002708: nop

    // 0x0800270C: bc1fl       L_08002728
    if (!c1cs) {
        // 0x08002710: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002728;
    }
    goto skip_0;
    // 0x08002710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002714: lwc1        $f18, 0x32E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X32E8));
    // 0x08002718: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800271C: jalr        $t9
    // 0x08002720: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002720: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    after_2:
    // 0x08002724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002728:
    // 0x08002728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800272C: jr          $ra
    // 0x08002730: nop

    TRACE_RETURN()
    return;
    // 0x08002730: nop

;}
RECOMP_FUNC void func_08000AA4_6E4A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AB0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000AB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ABC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AC0: bne         $v0, $zero, L_08000AD4
    if (ctx->r2 != 0) {
        // 0x08000AC4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000AD4;
    }
    // 0x08000AC4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000AC8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000ACC: jalr        $t9
    // 0x08000AD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08000AD4:
    // 0x08000AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000ADC: jr          $ra
    // 0x08000AE0: nop

    TRACE_RETURN()
    return;
    // 0x08000AE0: nop

;}
RECOMP_FUNC void func_08000724_6E4704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000728: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800072C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000730: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000734: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800073C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000740: jalr        $t9
    // 0x08000744: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000744: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08000748: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800074C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000750: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000754: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000758: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800075C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000760: jalr        $t9
    // 0x08000764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000768: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800076C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000770: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000774: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08000778: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x0800077C: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08000780: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000788: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x0800078C: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08000790: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08000794: jalr        $t9
    // 0x08000798: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000798: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x0800079C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X7C0) << 16);
    // 0x080007A8: jalr        $t9
    // 0x080007AC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X7C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007AC: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X7C0));
    after_3:
    // 0x080007B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080007B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080007B8: jr          $ra
    // 0x080007BC: nop

    TRACE_RETURN()
    return;
    // 0x080007BC: nop

;}
RECOMP_FUNC void func_08001F78_6E5F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F88: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001F8C: jalr        $t9
    // 0x08001F90: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F90: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08001F94: bne         $v0, $zero, L_08001FAC
    if (ctx->r2 != 0) {
        // 0x08001F98: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X1FBC) << 16);
            goto L_08001FAC;
    }
    // 0x08001F98: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1FBC) << 16);
    // 0x08001F9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FA4: jalr        $t9
    // 0x08001FA8: addiu       $a0, $a0, 0x1FBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1FBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FA8: addiu       $a0, $a0, 0x1FBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1FBC));
    after_1:
L_08001FAC:
    // 0x08001FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001FB4: jr          $ra
    // 0x08001FB8: nop

    TRACE_RETURN()
    return;
    // 0x08001FB8: nop

;}
RECOMP_FUNC void func_0800254C_6E652C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800254C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800255C: sb          $zero, 0x75($a0)
    MEM_B(0X75, ctx->r4) = 0;
    // 0x08002560: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002564: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002568: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2584) << 16);
    // 0x0800256C: jalr        $t9
    // 0x08002570: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2584));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002570: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2584));
    after_0:
    // 0x08002574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800257C: jr          $ra
    // 0x08002580: nop

    TRACE_RETURN()
    return;
    // 0x08002580: nop

;}
RECOMP_FUNC void func_08001ED8_6E5EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001EE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001EE4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001EEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001EF0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001EF4: bne         $v0, $zero, L_08001F14
    if (ctx->r2 != 0) {
        // 0x08001EF8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001F14;
    }
    // 0x08001EF8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001EFC: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08001F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F04: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001F08: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08001F0C: jalr        $t9
    // 0x08001F10: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F10: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_0:
L_08001F14:
    // 0x08001F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F1C: jr          $ra
    // 0x08001F20: nop

    TRACE_RETURN()
    return;
    // 0x08001F20: nop

;}
RECOMP_FUNC void func_08000E10_6E4DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000E1C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000E20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E24: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000E28: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000E2C: bne         $v0, $zero, L_08000E54
    if (ctx->r2 != 0) {
        // 0x08000E30: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000E54;
    }
    // 0x08000E30: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000E34: jalr        $t9
    // 0x08000E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000E3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E40: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E4C: jalr        $t9
    // 0x08000E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000E54:
    // 0x08000E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E5C: jr          $ra
    // 0x08000E60: nop

    TRACE_RETURN()
    return;
    // 0x08000E60: nop

;}
RECOMP_FUNC void func_08001144_6E5124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001150: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001154: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001158: lui         $t8, 0x2A0
    ctx->r24 = S32(0X2A0 << 16);
    // 0x0800115C: ori         $t8, $t8, 0x7C1
    ctx->r24 = ctx->r24 | 0X7C1;
    // 0x08001160: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08001164: bne         $t7, $zero, L_08001190
    if (ctx->r15 != 0) {
        // 0x08001168: addiu       $t9, $zero, 0x28
        ctx->r25 = ADD32(0, 0X28);
            goto L_08001190;
    }
    // 0x08001168: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x0800116C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001170: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08001174: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08001178: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800117C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08001180: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X11A0) << 16);
    // 0x08001184: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001188: jalr        $t9
    // 0x0800118C: addiu       $a0, $a0, 0x11A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X11A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800118C: addiu       $a0, $a0, 0x11A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X11A0));
    after_0:
L_08001190:
    // 0x08001190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001198: jr          $ra
    // 0x0800119C: nop

    TRACE_RETURN()
    return;
    // 0x0800119C: nop

;}
RECOMP_FUNC void func_08000C64_6E4C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000C6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000C74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C7C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000C80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08000C88: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000C8C: jalr        $t9
    // 0x08000C90: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C90: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08000C94: bne         $v0, $zero, L_08000CD4
    if (ctx->r2 != 0) {
        // 0x08000C98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000CD4;
    }
    // 0x08000C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CA0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000CA4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000CA8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000CB0: jalr        $t9
    // 0x08000CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000CB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CBC: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x08000CC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XCE8) << 16);
    // 0x08000CC8: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08000CCC: jalr        $t9
    // 0x08000CD0: addiu       $a0, $a0, 0xCE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XCE8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000CD0: addiu       $a0, $a0, 0xCE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XCE8));
    after_2:
L_08000CD4:
    // 0x08000CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CE0: jr          $ra
    // 0x08000CE4: nop

    TRACE_RETURN()
    return;
    // 0x08000CE4: nop

;}
RECOMP_FUNC void func_08002888_6E6868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800288C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002894: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08002898: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800289C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080028A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080028A4: jalr        $t9
    // 0x080028A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080028AC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080028B0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3300) << 16);
    // 0x080028B4: ldc1        $f0, 0x3300($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X3300));
    // 0x080028B8: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x080028BC: lwc1        $f16, 0x20($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X20);
    // 0x080028C0: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
    // 0x080028C4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080028C8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080028CC: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x080028D0: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x080028D4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080028D8: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x080028DC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3308) << 16);
    // 0x080028E0: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
    // 0x080028E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080028E8: lwc1        $f8, 0x24($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X24);
    // 0x080028EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X295C) << 16);
    // 0x080028F0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080028F4: swc1        $f10, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f10.u32l;
    // 0x080028F8: addiu       $a0, $a0, 0x295C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X295C));
    // 0x080028FC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002900: swc1        $f6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f6.u32l;
    // 0x08002904: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002908: lwc1        $f6, 0x1C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x0800290C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002910: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002914: swc1        $f18, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f18.u32l;
    // 0x08002918: ldc1        $f4, 0x3308($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X3308));
    // 0x0800291C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3310) << 16);
    // 0x08002920: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08002924: nop

    // 0x08002928: bc1fl       L_08002950
    if (!c1cs) {
        // 0x0800292C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002950;
    }
    goto skip_0;
    // 0x0800292C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002930: lwc1        $f0, 0x3310($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X3310));
    // 0x08002934: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002938: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800293C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08002940: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002944: jalr        $t9
    // 0x08002948: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002948: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x0800294C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002950:
    // 0x08002950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002954: jr          $ra
    // 0x08002958: nop

    TRACE_RETURN()
    return;
    // 0x08002958: nop

;}
RECOMP_FUNC void func_08002B44_6E6B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002B48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002B50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002B54: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002B60: jalr        $t9
    // 0x08002B64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08002B68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B6C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002B70: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002B78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B80: jalr        $t9
    // 0x08002B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002B88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002B8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08002B90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B94: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08002B98: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08002B9C: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08002BA0: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08002BA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08002BA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002BAC: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08002BB0: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08002BB4: jalr        $t9
    // 0x08002BB8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002BB8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x08002BBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2BE0) << 16);
    // 0x08002BC8: jalr        $t9
    // 0x08002BCC: addiu       $a0, $a0, 0x2BE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2BE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002BCC: addiu       $a0, $a0, 0x2BE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2BE0));
    after_3:
    // 0x08002BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002BD8: jr          $ra
    // 0x08002BDC: nop

    TRACE_RETURN()
    return;
    // 0x08002BDC: nop

;}
RECOMP_FUNC void func_08002CF8_6E6CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002D04: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08002D08: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08002D0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D10: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002D14: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002D18: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002D1C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002D24: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x08002D28: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002D2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002D30: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002D34: jalr        $t9
    // 0x08002D38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D38: nop

    after_0:
    // 0x08002D3C: bne         $v0, $zero, L_08002D58
    if (ctx->r2 != 0) {
        // 0x08002D40: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002D58;
    }
    // 0x08002D40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002D44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D48: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002D50: jalr        $t9
    // 0x08002D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08002D58:
    // 0x08002D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D60: jr          $ra
    // 0x08002D64: nop

    TRACE_RETURN()
    return;
    // 0x08002D64: nop

;}
RECOMP_FUNC void func_08000CE8_6E4CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000CEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000CF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08000CF4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000CF8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000CFC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000D00: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08000D04: bne         $v0, $zero, L_08000D9C
    if (ctx->r2 != 0) {
        // 0x08000D08: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000D9C;
    }
    // 0x08000D08: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000D0C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D10: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000D14: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08000D18: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000D1C: jalr        $t9
    // 0x08000D20: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D20: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000D24: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08000D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000D2C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000D30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000D34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D38: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000D3C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0XFA8) << 16);
    // 0x08000D40: addiu       $a1, $a1, 0xFA8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0XFA8));
    // 0x08000D44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000D48: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000D4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000D50: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000D54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000D58: jalr        $t9
    // 0x08000D5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08000D60: beq         $v0, $zero, L_08000D88
    if (ctx->r2 == 0) {
        // 0x08000D64: addiu       $t8, $zero, 0x26
        ctx->r24 = ADD32(0, 0X26);
            goto L_08000D88;
    }
    // 0x08000D64: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x08000D68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D6C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000D70: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000D74: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000D78: jalr        $t9
    // 0x08000D7C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D7C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_2:
    // 0x08000D80: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000D84: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000D88:
    // 0x08000D88: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XDAC) << 16);
    // 0x08000D94: jalr        $t9
    // 0x08000D98: addiu       $a0, $a0, 0xDAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XDAC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D98: addiu       $a0, $a0, 0xDAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XDAC));
    after_3:
L_08000D9C:
    // 0x08000D9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000DA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000DA4: jr          $ra
    // 0x08000DA8: nop

    TRACE_RETURN()
    return;
    // 0x08000DA8: nop

;}
RECOMP_FUNC void func_08003058_6E7038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003058: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800305C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08003060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003064: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x08003068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800306C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08003074: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08003078: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x0800307C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003080: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08003084: mfhi        $t8
    ctx->r24 = hi;
    // 0x08003088: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800308C: bne         $t8, $zero, L_080030DC
    if (ctx->r24 != 0) {
        // 0x08003090: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080030DC;
    }
    // 0x08003090: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003094: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003098: jalr        $t9
    // 0x0800309C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800309C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080030A0: beq         $v0, $zero, L_080030DC
    if (ctx->r2 == 0) {
        // 0x080030A4: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(29, 0X3328) << 16);
            goto L_080030DC;
    }
    // 0x080030A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3328) << 16);
    // 0x080030A8: lwc1        $f0, 0x3328($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X3328));
    // 0x080030AC: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080030B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080030B4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080030B8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080030BC: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080030C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x080030C4: bne         $t0, $at, L_080030DC
    if (ctx->r8 != ctx->r1) {
        // 0x080030C8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_080030DC;
    }
    // 0x080030C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080030CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080030D0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080030D4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080030D8: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
L_080030DC:
    // 0x080030DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080030E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080030E4: jr          $ra
    // 0x080030E8: nop

    TRACE_RETURN()
    return;
    // 0x080030E8: nop

;}
RECOMP_FUNC void func_08001F24_6E5F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F38: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001F40: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001F44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001F48: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001F4C: jalr        $t9
    // 0x08001F50: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F50: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08001F54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1F78) << 16);
    // 0x08001F60: jalr        $t9
    // 0x08001F64: addiu       $a0, $a0, 0x1F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1F78));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F64: addiu       $a0, $a0, 0x1F78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1F78));
    after_1:
    // 0x08001F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F70: jr          $ra
    // 0x08001F74: nop

    TRACE_RETURN()
    return;
    // 0x08001F74: nop

;}
RECOMP_FUNC void func_080001A8_6E4188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080001BC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080001C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001C4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080001C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080001CC: jalr        $t9
    // 0x080001D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080001D4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080001D8: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x080001DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001E0: ori         $t6, $t6, 0x16E1
    ctx->r14 = ctx->r14 | 0X16E1;
    // 0x080001E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X208) << 16);
    // 0x080001EC: addiu       $a0, $a0, 0x208
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X208));
    // 0x080001F0: jalr        $t9
    // 0x080001F4: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001F4: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    after_1:
    // 0x080001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000200: jr          $ra
    // 0x08000204: nop

    TRACE_RETURN()
    return;
    // 0x08000204: nop

;}
RECOMP_FUNC void func_0800034C_6E432C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800034C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000350: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08000354: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000358: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x0800035C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000360: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000364: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x0800036C: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08000370: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000378: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x0800037C: mfhi        $t8
    ctx->r24 = hi;
    // 0x08000380: addiu       $a0, $zero, 0x264
    ctx->r4 = ADD32(0, 0X264);
    // 0x08000384: bne         $t8, $zero, L_080003A4
    if (ctx->r24 != 0) {
        // 0x08000388: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_080003A4;
    }
    // 0x08000388: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800038C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000390: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000394: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000398: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0800039C: jalr        $t9
    // 0x080003A0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003A0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
L_080003A4:
    // 0x080003A4: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080003A8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080003AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003B0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080003B4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x080003B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080003BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080003C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C4: addiu       $t9, $t9, -0x4010
    ctx->r25 = ADD32(ctx->r25, -0X4010);
    // 0x080003C8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080003CC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080003D0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003D8: jalr        $t9
    // 0x080003DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x080003E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003E4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080003E8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080003EC: jalr        $t9
    // 0x080003F0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003F0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x080003F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x080003F8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x080003FC: addiu       $t9, $t9, 0x3058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x08000400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000408: jalr        $t9
    // 0x0800040C: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800040C: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    after_3:
    // 0x08000410: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000414: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800041C: jalr        $t9
    // 0x08000420: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000420: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_4:
    // 0x08000424: beq         $v0, $zero, L_08000460
    if (ctx->r2 == 0) {
        // 0x08000428: lui         $t4, 0x2A0
        ctx->r12 = S32(0X2A0 << 16);
            goto L_08000460;
    }
    // 0x08000428: lui         $t4, 0x2A0
    ctx->r12 = S32(0X2A0 << 16);
    // 0x0800042C: lbu         $t2, 0x98($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X98);
    // 0x08000430: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000434: ori         $t4, $t4, 0xFE1
    ctx->r12 = ctx->r12 | 0XFE1;
    // 0x08000438: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x0800043C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000440: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X474) << 16);
    // 0x08000444: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x08000448: sb          $t3, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = ctx->r11;
    // 0x0800044C: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08000450: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x08000454: addiu       $a0, $a0, 0x474
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X474));
    // 0x08000458: jalr        $t9
    // 0x0800045C: sb          $t2, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800045C: sb          $t2, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r10;
    after_5:
L_08000460:
    // 0x08000460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000464: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800046C: jr          $ra
    // 0x08000470: nop

    TRACE_RETURN()
    return;
    // 0x08000470: nop

;}
RECOMP_FUNC void func_08002328_6E6308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002328: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800232C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002330: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002334: lbu         $t8, 0xED($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XED);
    // 0x08002338: lbu         $t6, 0xEC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEC);
    // 0x0800233C: addiu       $t9, $t8, 0xA
    ctx->r25 = ADD32(ctx->r24, 0XA);
    // 0x08002340: sb          $t9, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r25;
    // 0x08002344: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    // 0x08002348: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800234C: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x08002350: sb          $t7, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r15;
    // 0x08002354: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x08002358: addiu       $t0, $a2, 0x46
    ctx->r8 = ADD32(ctx->r6, 0X46);
    // 0x0800235C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08002360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002364: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08002368: jalr        $t9
    // 0x0800236C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800236C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    after_0:
    // 0x08002370: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002374: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002378: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800237C: lbu         $t1, 0xEC($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XEC);
    // 0x08002380: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x08002384: beql        $at, $zero, L_08002398
    if (ctx->r1 == 0) {
        // 0x08002388: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08002398;
    }
    goto skip_0;
    // 0x08002388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800238C: jalr        $t9
    // 0x08002390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002390: nop

    after_1:
    // 0x08002394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002398:
    // 0x08002398: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800239C: jr          $ra
    // 0x080023A0: nop

    TRACE_RETURN()
    return;
    // 0x080023A0: nop

;}
RECOMP_FUNC void func_08000974_6E4954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000978: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x0800097C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000980: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000984: addiu       $t9, $t9, 0x3058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x08000988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800098C: jalr        $t9
    // 0x08000990: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000990: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000994: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000998: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800099C: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080009A0: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x080009A4: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x080009A8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x080009AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080009B0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080009B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080009B8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080009BC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080009C0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080009C4: jalr        $t9
    // 0x080009C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009C8: nop

    after_1:
    // 0x080009CC: bne         $v0, $zero, L_08000A20
    if (ctx->r2 != 0) {
        // 0x080009D0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000A20;
    }
    // 0x080009D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080009D4: lui         $t8, 0x2A0
    ctx->r24 = S32(0X2A0 << 16);
    // 0x080009D8: ori         $t8, $t8, 0xFE1
    ctx->r24 = ctx->r24 | 0XFE1;
    // 0x080009DC: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x080009E0: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080009E4: sb          $t0, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r8;
    // 0x080009E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x080009EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F0: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080009F4: sh          $zero, 0x14($t1)
    MEM_H(0X14, ctx->r9) = 0;
    // 0x080009F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080009FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000A00: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000A04: jalr        $t9
    // 0x08000A08: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A08: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_2:
    // 0x08000A0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XA30) << 16);
    // 0x08000A18: jalr        $t9
    // 0x08000A1C: addiu       $a0, $a0, 0xA30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XA30));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A1C: addiu       $a0, $a0, 0xA30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XA30));
    after_3:
L_08000A20:
    // 0x08000A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A28: jr          $ra
    // 0x08000A2C: nop

    TRACE_RETURN()
    return;
    // 0x08000A2C: nop

;}
RECOMP_FUNC void func_08000474_6E4454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000480: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000484: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32A0) << 16);
    // 0x08000488: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x0800048C: bnel        $t7, $zero, L_08000518
    if (ctx->r15 != 0) {
        // 0x08000490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000518;
    }
    goto skip_0;
    // 0x08000490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000494: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08000498: ldc1        $f0, 0x32A0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32A0));
    // 0x0800049C: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    // 0x080004A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080004A4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080004A8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x080004AC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080004B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080004B4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x080004B8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x080004BC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080004C0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080004C4: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x080004C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080004CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080004D0: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x080004D4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080004D8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080004DC: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x080004E0: bne         $v0, $zero, L_08000514
    if (ctx->r2 != 0) {
        // 0x080004E4: swc1        $f8, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
            goto L_08000514;
    }
    // 0x080004E4: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x080004E8: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x080004EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080004F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004F4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080004F8: jalr        $t9
    // 0x080004FC: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004FC: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    after_0:
    // 0x08000500: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000508: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X524) << 16);
    // 0x0800050C: jalr        $t9
    // 0x08000510: addiu       $a0, $a0, 0x524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X524));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000510: addiu       $a0, $a0, 0x524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X524));
    after_1:
L_08000514:
    // 0x08000514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000518:
    // 0x08000518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800051C: jr          $ra
    // 0x08000520: nop

    TRACE_RETURN()
    return;
    // 0x08000520: nop

;}
RECOMP_FUNC void func_08001708_6E56E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001708: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800170C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800171C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001720: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001728: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800172C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001730: jalr        $t9
    // 0x08001734: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001734: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08001738: bne         $v0, $zero, L_08001778
    if (ctx->r2 != 0) {
        // 0x0800173C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001778;
    }
    // 0x0800173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001740: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001744: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001748: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0800174C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001754: jalr        $t9
    // 0x08001758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800175C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001760: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x08001764: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001768: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X178C) << 16);
    // 0x0800176C: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08001770: jalr        $t9
    // 0x08001774: addiu       $a0, $a0, 0x178C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X178C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001774: addiu       $a0, $a0, 0x178C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X178C));
    after_2:
L_08001778:
    // 0x08001778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800177C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001784: jr          $ra
    // 0x08001788: nop

    TRACE_RETURN()
    return;
    // 0x08001788: nop

;}
RECOMP_FUNC void func_080029A0_6E6980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080029A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080029A8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080029AC: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x080029B0: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x080029B4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080029B8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x080029BC: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x080029C0: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x080029C4: bne         $t0, $zero, L_080029E0
    if (ctx->r8 != 0) {
        // 0x080029C8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080029E0;
    }
    // 0x080029C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029CC: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x080029D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X29F0) << 16);
    // 0x080029D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029D8: jalr        $t9
    // 0x080029DC: addiu       $a0, $a0, 0x29F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X29F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080029DC: addiu       $a0, $a0, 0x29F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X29F0));
    after_0:
L_080029E0:
    // 0x080029E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080029E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080029E8: jr          $ra
    // 0x080029EC: nop

    TRACE_RETURN()
    return;
    // 0x080029EC: nop

;}
RECOMP_FUNC void func_08000838_6E4818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800083C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000848: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800084C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000854: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800085C: jalr        $t9
    // 0x08000860: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000860: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000864: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000868: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x0800086C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000870: ori         $t6, $t6, 0x16E1
    ctx->r14 = ctx->r14 | 0X16E1;
    // 0x08000874: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000878: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X898) << 16);
    // 0x0800087C: addiu       $a0, $a0, 0x898
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X898));
    // 0x08000880: jalr        $t9
    // 0x08000884: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000884: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    after_1:
    // 0x08000888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800088C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000890: jr          $ra
    // 0x08000894: nop

    TRACE_RETURN()
    return;
    // 0x08000894: nop

;}
RECOMP_FUNC void func_08000A30_6E4A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000A34: lui         $v0, 0x800
    ctx->r2 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x08000A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000A40: addiu       $v0, $v0, 0x3058
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x08000A44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000A48: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08000A4C: jalr        $v0
    // 0x08000A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000A54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000A58: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A5C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000A60: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08000A64: bnel        $t7, $zero, L_08000A98
    if (ctx->r15 != 0) {
        // 0x08000A68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000A98;
    }
    goto skip_0;
    // 0x08000A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000A6C: jalr        $v0
    // 0x08000A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000A74: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08000A78: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08000A7C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XAA4) << 16);
    // 0x08000A80: sh          $t8, 0x8A($t9)
    MEM_H(0X8A, ctx->r25) = ctx->r24;
    // 0x08000A84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A8C: jalr        $t9
    // 0x08000A90: addiu       $a0, $a0, 0xAA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XAA4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A90: addiu       $a0, $a0, 0xAA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XAA4));
    after_2:
    // 0x08000A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000A98:
    // 0x08000A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A9C: jr          $ra
    // 0x08000AA0: nop

    TRACE_RETURN()
    return;
    // 0x08000AA0: nop

;}
RECOMP_FUNC void func_08002ED4_6E6EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002ED4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08002ED8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08002EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002EE0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x08002EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002EE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x08002EF0: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x08002EF4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08002EF8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002EFC: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08002F00: mfhi        $t8
    ctx->r24 = hi;
    // 0x08002F04: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08002F08: bne         $t8, $zero, L_08002F70
    if (ctx->r24 != 0) {
        // 0x08002F0C: addiu       $a1, $a1, 0x2088
        ctx->r5 = ADD32(ctx->r5, 0X2088);
            goto L_08002F70;
    }
    // 0x08002F0C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08002F10: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F14: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002F18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08002F1C: jalr        $t9
    // 0x08002F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F20: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x08002F24: beq         $v0, $zero, L_08002F70
    if (ctx->r2 == 0) {
        // 0x08002F28: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_08002F70;
    }
    // 0x08002F28: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08002F2C: lhu         $a0, 0x5C($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X5C);
    // 0x08002F30: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x08002F34: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08002F38: beq         $a0, $at, L_08002F44
    if (ctx->r4 == ctx->r1) {
        // 0x08002F3C: addiu       $at, $zero, 0x10A
        ctx->r1 = ADD32(0, 0X10A);
            goto L_08002F44;
    }
    // 0x08002F3C: addiu       $at, $zero, 0x10A
    ctx->r1 = ADD32(0, 0X10A);
    // 0x08002F40: bne         $a0, $at, L_08002F5C
    if (ctx->r4 != ctx->r1) {
        // 0x08002F44: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(29, 0X3314) << 16);
            goto L_08002F5C;
    }
L_08002F44:
    // 0x08002F44: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3314) << 16);
    // 0x08002F48: lwc1        $f0, 0x3314($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X3314));
    // 0x08002F4C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08002F50: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08002F54: b           L_08002F70
    // 0x08002F58: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
        goto L_08002F70;
    // 0x08002F58: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08002F5C:
    // 0x08002F5C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3318) << 16);
    // 0x08002F60: lwc1        $f0, 0x3318($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X3318));
    // 0x08002F64: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08002F68: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08002F6C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08002F70:
    // 0x08002F70: lwc1        $f4, 0x78($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X78);
    // 0x08002F74: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X3320) << 16);
    // 0x08002F78: ldc1        $f0, 0x3320($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X3320));
    // 0x08002F7C: lwc1        $f16, 0x80($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X80);
    // 0x08002F80: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002F84: lhu         $v0, 0x8A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X8A);
    // 0x08002F88: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08002F8C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002F90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2FE4) << 16);
    // 0x08002F94: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08002F98: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08002F9C: sh          $t0, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r8;
    // 0x08002FA0: addiu       $a0, $a0, 0x2FE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2FE4));
    // 0x08002FA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002FA8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002FAC: swc1        $f10, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f10.u32l;
    // 0x08002FB0: bne         $v0, $zero, L_08002FD4
    if (ctx->r2 != 0) {
        // 0x08002FB4: swc1        $f6, 0x80($a3)
        MEM_W(0X80, ctx->r7) = ctx->f6.u32l;
            goto L_08002FD4;
    }
    // 0x08002FB4: swc1        $f6, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f6.u32l;
    // 0x08002FB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002FBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FC4: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    // 0x08002FC8: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x08002FCC: jalr        $t9
    // 0x08002FD0: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FD0: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    after_1:
L_08002FD4:
    // 0x08002FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002FD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002FDC: jr          $ra
    // 0x08002FE0: nop

    TRACE_RETURN()
    return;
    // 0x08002FE0: nop

;}
RECOMP_FUNC void func_08000F78_6E4F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000F88: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F90: jalr        $t9
    // 0x08000F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x08000F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000FA0: jr          $ra
    // 0x08000FA4: nop

    TRACE_RETURN()
    return;
    // 0x08000FA4: nop

;}
RECOMP_FUNC void func_08001E5C_6E5E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001E64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001E68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001E6C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08001E70: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32C8) << 16);
    // 0x08001E74: ldc1        $f0, 0x32C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32C8));
    // 0x08001E78: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08001E7C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001E80: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001E84: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08001E88: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001E8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E90: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001E94: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08001E98: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001E9C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08001EA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001EA4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001EA8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001EAC: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x08001EB0: bne         $v0, $zero, L_08001EC8
    if (ctx->r2 != 0) {
        // 0x08001EB4: swc1        $f6, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
            goto L_08001EC8;
    }
    // 0x08001EB4: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08001EB8: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001EBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1ED8) << 16);
    // 0x08001EC0: jalr        $t9
    // 0x08001EC4: addiu       $a0, $a0, 0x1ED8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1ED8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EC4: addiu       $a0, $a0, 0x1ED8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1ED8));
    after_0:
L_08001EC8:
    // 0x08001EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001ED0: jr          $ra
    // 0x08001ED4: nop

    TRACE_RETURN()
    return;
    // 0x08001ED4: nop

;}
RECOMP_FUNC void func_08002DA4_6E6D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002DA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002DAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002DB0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08002DB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08002DB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DBC: addiu       $t9, $t9, -0x4B04
    ctx->r25 = ADD32(ctx->r25, -0X4B04);
    // 0x08002DC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002DC4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002DC8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002DCC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002DD0: jalr        $t9
    // 0x08002DD4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DD4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002DD8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002DDC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002DE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002DE8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002DEC: jalr        $t9
    // 0x08002DF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002DF4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08002DF8: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08002DFC: addiu       $t8, $zero, 0x1E1
    ctx->r24 = ADD32(0, 0X1E1);
    // 0x08002E00: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08002E04: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08002E08: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08002E0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002E10: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08002E14: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08002E18: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002E1C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002E20: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002E24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E28: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002E2C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002E30: jalr        $t9
    // 0x08002E34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002E34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_2:
    // 0x08002E38: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002E3C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002E40: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x08002E44: jalr        $t9
    // 0x08002E48: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E48: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_3:
    // 0x08002E4C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08002E50: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002E54: neg.d       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = -ctx->f16.d;
    // 0x08002E58: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002E5C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08002E60: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08002E64: jalr        $t9
    // 0x08002E68: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002E68: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x08002E6C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08002E70: addiu       $t0, $zero, 0x3C9
    ctx->r8 = ADD32(0, 0X3C9);
    // 0x08002E74: neg.d       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = -ctx->f6.d;
    // 0x08002E78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E7C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002E80: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x08002E84: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002E88: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002E8C: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08002E90: sh          $t0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r8;
    // 0x08002E94: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08002E98: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002E9C: addiu       $a0, $zero, 0x265
    ctx->r4 = ADD32(0, 0X265);
    // 0x08002EA0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08002EA4: jalr        $t9
    // 0x08002EA8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002EA8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_5:
    // 0x08002EAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002EB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2ED4) << 16);
    // 0x08002EB8: jalr        $t9
    // 0x08002EBC: addiu       $a0, $a0, 0x2ED4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2ED4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002EBC: addiu       $a0, $a0, 0x2ED4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2ED4));
    after_6:
    // 0x08002EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002EC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08002EC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002ECC: jr          $ra
    // 0x08002ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08002ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800143C_6E541C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800143C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001444: lbu         $t6, 0xEC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEC);
    // 0x08001448: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32B8) << 16);
    // 0x0800144C: ldc1        $f0, 0x32B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32B8));
    // 0x08001450: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x08001454: sb          $t7, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r15;
    // 0x08001458: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0800145C: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08001460: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32C0) << 16);
    // 0x08001464: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001468: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800146C: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x08001470: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08001474: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001478: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800147C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001480: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08001484: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001488: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x0800148C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001490: ldc1        $f4, 0x32C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32C0));
    // 0x08001494: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001498: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x0800149C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080014A0: swc1        $f8, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f8.u32l;
    // 0x080014A4: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x080014A8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x080014AC: nop

    // 0x080014B0: bc1fl       L_080014C0
    if (!c1cs) {
        // 0x080014B4: lwc1        $f16, 0x24($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
            goto L_080014C0;
    }
    goto skip_0;
    // 0x080014B4: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x080014B8: swc1        $f2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f2.u32l;
    // 0x080014BC: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
L_080014C0:
    // 0x080014C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080014C4: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x080014C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080014CC: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x080014D0: lbu         $v0, 0xED($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XED);
    // 0x080014D4: bne         $v0, $zero, L_080014F4
    if (ctx->r2 != 0) {
        // 0x080014D8: nop
    
            goto L_080014F4;
    }
    // 0x080014D8: nop

    // 0x080014DC: lbu         $a1, 0xEC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XEC);
    // 0x080014E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080014E4: jalr        $t9
    // 0x080014E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x080014EC: b           L_08001530
    // 0x080014F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_08001530;
    // 0x080014F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_080014F4:
    // 0x080014F4: bne         $v0, $at, L_08001530
    if (ctx->r2 != ctx->r1) {
        // 0x080014F8: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_08001530;
    }
    // 0x080014F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080014FC: lbu         $a1, 0xEC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XEC);
    // 0x08001500: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001504: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001508: bgez        $a1, L_08001518
    if (SIGNED(ctx->r5) >= 0) {
        // 0x0800150C: sra         $t0, $a1, 1
        ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
            goto L_08001518;
    }
    // 0x0800150C: sra         $t0, $a1, 1
    ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
    // 0x08001510: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x08001514: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_08001518:
    // 0x08001518: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x0800151C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001520: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001524: jalr        $t9
    // 0x08001528: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001528: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_1:
    // 0x0800152C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08001530:
    // 0x08001530: lbu         $t1, 0xEC($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XEC);
    // 0x08001534: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001538: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800153C: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x08001540: beql        $at, $zero, L_08001554
    if (ctx->r1 == 0) {
        // 0x08001544: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001554;
    }
    goto skip_1;
    // 0x08001544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08001548: jalr        $t9
    // 0x0800154C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800154C: nop

    after_2:
    // 0x08001550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001554:
    // 0x08001554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001558: jr          $ra
    // 0x0800155C: nop

    TRACE_RETURN()
    return;
    // 0x0800155C: nop

;}
RECOMP_FUNC void func_08002C58_6E6C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002C64: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08002C68: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08002C6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002C70: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002C74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C7C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002C80: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08002C84: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08002C88: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002C8C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002C90: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002C94: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002C98: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002C9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08002CA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002CA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08002CA8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002CAC: jalr        $t9
    // 0x08002CB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CB0: nop

    after_0:
    // 0x08002CB4: bne         $v0, $zero, L_08002CE8
    if (ctx->r2 != 0) {
        // 0x08002CB8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08002CE8;
    }
    // 0x08002CB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002CBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002CC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002CC8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002CCC: jalr        $t9
    // 0x08002CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002CD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2CF8) << 16);
    // 0x08002CE0: jalr        $t9
    // 0x08002CE4: addiu       $a0, $a0, 0x2CF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2CF8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002CE4: addiu       $a0, $a0, 0x2CF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2CF8));
    after_2:
L_08002CE8:
    // 0x08002CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002CF0: jr          $ra
    // 0x08002CF4: nop

    TRACE_RETURN()
    return;
    // 0x08002CF4: nop

;}
RECOMP_FUNC void func_08000524_6E4504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000528: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800052C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000530: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000534: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08000538: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800053C: addiu       $t7, $t6, -0xC
    ctx->r15 = ADD32(ctx->r14, -0XC);
    // 0x08000540: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000544: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x08000548: bgez        $t9, L_08000554
    if (SIGNED(ctx->r25) >= 0) {
        // 0x0800054C: sh          $t8, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r24;
            goto L_08000554;
    }
    // 0x0800054C: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08000550: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
L_08000554:
    // 0x08000554: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x08000558: addiu       $t9, $t9, 0x3058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x0800055C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000560: jalr        $t9
    // 0x08000564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000568: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800056C: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000570: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000574: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000578: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800057C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x08000580: jalr        $t9
    // 0x08000584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08000588: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x0800058C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X5CC) << 16);
    // 0x08000590: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000594: lw          $t0, 0x68($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X68);
    // 0x08000598: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x0800059C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005A0: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x080005A4: bne         $t1, $zero, L_080005B8
    if (ctx->r9 != 0) {
        // 0x080005A8: addiu       $a0, $a0, 0x5CC
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X5CC));
            goto L_080005B8;
    }
    // 0x080005A8: addiu       $a0, $a0, 0x5CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X5CC));
    // 0x080005AC: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x080005B0: jalr        $t9
    // 0x080005B4: sh          $t2, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080005B4: sh          $t2, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r10;
    after_2:
L_080005B8:
    // 0x080005B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080005BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080005C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080005C4: jr          $ra
    // 0x080005C8: nop

    TRACE_RETURN()
    return;
    // 0x080005C8: nop

;}
RECOMP_FUNC void func_0800214C_6E612C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800214C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002150: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002158: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800215C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002160: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002168: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800216C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002170: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002174: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002178: jalr        $t9
    // 0x0800217C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800217C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002180: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002184: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002188: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X21A4) << 16);
    // 0x0800218C: jalr        $t9
    // 0x08002190: addiu       $a0, $a0, 0x21A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X21A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002190: addiu       $a0, $a0, 0x21A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X21A4));
    after_1:
    // 0x08002194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800219C: jr          $ra
    // 0x080021A0: nop

    TRACE_RETURN()
    return;
    // 0x080021A0: nop

;}
RECOMP_FUNC void func_08002AC8_6E6AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002AC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002ACC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002AD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002ADC: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08002AE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002AE4: jalr        $t9
    // 0x08002AE8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AE8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08002AEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AF0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002AF4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002AF8: jalr        $t9
    // 0x08002AFC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AFC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08002B00: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002B04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B08: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B10: jalr        $t9
    // 0x08002B14: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002B14: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08002B18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B1C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B28: jalr        $t9
    // 0x08002B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002B34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002B38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002B3C: jr          $ra
    // 0x08002B40: nop

    TRACE_RETURN()
    return;
    // 0x08002B40: nop

;}
RECOMP_FUNC void func_080029F0_6E69D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080029F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080029F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080029FC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002A04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A08: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002A0C: bne         $v0, $zero, L_08002A20
    if (ctx->r2 != 0) {
        // 0x08002A10: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002A20;
    }
    // 0x08002A10: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002A14: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002A18: jalr        $t9
    // 0x08002A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08002A20:
    // 0x08002A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A28: jr          $ra
    // 0x08002A2C: nop

    TRACE_RETURN()
    return;
    // 0x08002A2C: nop

;}
RECOMP_FUNC void func_08000260_6E4240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000260: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000268: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800026C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000270: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000274: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000278: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800027C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000280: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000284: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000288: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800028C: jalr        $t9
    // 0x08000290: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000290: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08000294: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x08000298: addiu       $t9, $t9, 0x3058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x0800029C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080002A0: jalr        $t9
    // 0x080002A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080002A8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080002AC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x080002B0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x080002B4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080002B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x080002BC: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x080002C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080002C4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080002C8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x080002CC: mfhi        $t8
    ctx->r24 = hi;
    // 0x080002D0: addiu       $a0, $zero, 0x264
    ctx->r4 = ADD32(0, 0X264);
    // 0x080002D4: bne         $t8, $zero, L_080002EC
    if (ctx->r24 != 0) {
        // 0x080002D8: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_080002EC;
    }
    // 0x080002D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x080002DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002E0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080002E4: jalr        $t9
    // 0x080002E8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002E8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
L_080002EC:
    // 0x080002EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080002F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080002F4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080002F8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x080002FC: addiu       $t3, $zero, 0x120
    ctx->r11 = ADD32(0, 0X120);
    // 0x08000300: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000304: slti        $at, $v0, 0x120
    ctx->r1 = SIGNED(ctx->r2) < 0X120 ? 1 : 0;
    // 0x08000308: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X34C) << 16);
    // 0x0800030C: beq         $at, $zero, L_08000324
    if (ctx->r1 == 0) {
        // 0x08000310: swc1        $f8, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
            goto L_08000324;
    }
    // 0x08000310: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x08000314: addiu       $t1, $v0, 0x6
    ctx->r9 = ADD32(ctx->r2, 0X6);
    // 0x08000318: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x0800031C: b           L_08000338
    // 0x08000320: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
        goto L_08000338;
    // 0x08000320: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
L_08000324:
    // 0x08000324: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000328: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800032C: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x08000330: jalr        $t9
    // 0x08000334: addiu       $a0, $a0, 0x34C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X34C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000334: addiu       $a0, $a0, 0x34C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X34C));
    after_3:
L_08000338:
    // 0x08000338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800033C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000344: jr          $ra
    // 0x08000348: nop

    TRACE_RETURN()
    return;
    // 0x08000348: nop

;}
RECOMP_FUNC void func_08000898_6E4878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800089C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080008A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080008A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080008A8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080008AC: lh          $t7, 0xA2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA2);
    // 0x080008B0: lh          $t6, 0xA0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA0);
    // 0x080008B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080008B8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080008BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080008C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080008C8: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080008CC: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x080008D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080008D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080008D8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080008DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x080008E0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080008E4: jalr        $t9
    // 0x080008E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008E8: nop

    after_0:
    // 0x080008EC: bne         $v0, $zero, L_08000960
    if (ctx->r2 != 0) {
        // 0x080008F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000960;
    }
    // 0x080008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008F4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(29, 0X3058) << 16);
    // 0x080008F8: addiu       $t9, $t9, 0x3058
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(29, 0X3058));
    // 0x080008FC: jalr        $t9
    // 0x08000900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000904: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000908: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800090C: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08000910: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x08000914: addiu       $t3, $zero, 0x120
    ctx->r11 = ADD32(0, 0X120);
    // 0x08000918: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x0800091C: slti        $at, $v0, 0x120
    ctx->r1 = SIGNED(ctx->r2) < 0X120 ? 1 : 0;
    // 0x08000920: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X974) << 16);
    // 0x08000924: beq         $at, $zero, L_0800093C
    if (ctx->r1 == 0) {
        // 0x08000928: swc1        $f16, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
            goto L_0800093C;
    }
    // 0x08000928: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x0800092C: addiu       $t1, $v0, 0x6
    ctx->r9 = ADD32(ctx->r2, 0X6);
    // 0x08000930: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08000934: b           L_08000960
    // 0x08000938: sh          $t2, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r10;
        goto L_08000960;
    // 0x08000938: sh          $t2, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r10;
L_0800093C:
    // 0x0800093C: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    // 0x08000940: lbu         $t5, 0x98($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X98);
    // 0x08000944: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000948: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800094C: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x08000950: sb          $t6, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = ctx->r14;
    // 0x08000954: addiu       $a0, $a0, 0x974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X974));
    // 0x08000958: jalr        $t9
    // 0x0800095C: sb          $t5, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800095C: sb          $t5, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r13;
    after_2:
L_08000960:
    // 0x08000960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000964: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000968: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800096C: jr          $ra
    // 0x08000970: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000970: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08002BE0_6E6BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002BE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002BF0: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08002BF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002BF8: jalr        $t9
    // 0x08002BFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002C00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C04: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002C08: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002C0C: jalr        $t9
    // 0x08002C10: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C10: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08002C14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002C18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C1C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C24: jalr        $t9
    // 0x08002C28: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C28: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08002C2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C30: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C3C: jalr        $t9
    // 0x08002C40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002C40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002C4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C50: jr          $ra
    // 0x08002C54: nop

    TRACE_RETURN()
    return;
    // 0x08002C54: nop

;}
RECOMP_FUNC void func_08000DAC_6E4D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000DB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000DB8: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000DBC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000DC0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000DC4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000DC8: beq         $t7, $zero, L_08000E00
    if (ctx->r15 == 0) {
        // 0x08000DCC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08000E00;
    }
    // 0x08000DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000DD0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DD4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000DD8: jalr        $t9
    // 0x08000DDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000DE0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x08000DE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DE8: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08000DEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000DF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XE10) << 16);
    // 0x08000DF4: addiu       $a0, $a0, 0xE10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XE10));
    // 0x08000DF8: jalr        $t9
    // 0x08000DFC: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DFC: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    after_1:
L_08000E00:
    // 0x08000E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000E08: jr          $ra
    // 0x08000E0C: nop

    TRACE_RETURN()
    return;
    // 0x08000E0C: nop

;}
RECOMP_FUNC void func_08002290_6E6270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002298: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800229C: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x080022A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022A4: sb          $t6, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r14;
    // 0x080022A8: sb          $zero, 0xED($a0)
    MEM_B(0XED, ctx->r4) = 0;
    // 0x080022AC: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x080022B0: addiu       $t7, $zero, 0x46
    ctx->r15 = ADD32(0, 0X46);
    // 0x080022B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080022B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080022BC: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x080022C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080022C4: jalr        $t9
    // 0x080022C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080022CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080022D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080022D4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080022D8: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x080022DC: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x080022E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080022E4: addiu       $t1, $zero, 0x10E
    ctx->r9 = ADD32(0, 0X10E);
    // 0x080022E8: ori         $t2, $t2, 0x6E1
    ctx->r10 = ctx->r10 | 0X6E1;
    // 0x080022EC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080022F0: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    // 0x080022F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080022F8: sh          $t1, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r9;
    // 0x080022FC: jalr        $t9
    // 0x08002300: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002300: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    after_1:
    // 0x08002304: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002308: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800230C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2328) << 16);
    // 0x08002310: jalr        $t9
    // 0x08002314: addiu       $a0, $a0, 0x2328
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2328));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002314: addiu       $a0, $a0, 0x2328
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2328));
    after_2:
    // 0x08002318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800231C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002320: jr          $ra
    // 0x08002324: nop

    TRACE_RETURN()
    return;
    // 0x08002324: nop

;}
RECOMP_FUNC void func_08001A1C_6E59FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001A20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001A28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001A2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001A30: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08001A34: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08001A38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001A3C: jalr        $t9
    // 0x08001A40: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A40: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_0:
    // 0x08001A44: lw          $t1, 0xD0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD0);
    // 0x08001A48: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x08001A4C: lui         $t3, 0x800
    ctx->r11 = S32(RELOC_HI16(29, 0X2D68) << 16);
    // 0x08001A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x08001A58: ori         $t7, $t7, 0x27E1
    ctx->r15 = ctx->r15 | 0X27E1;
    // 0x08001A5C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08001A60: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08001A64: addiu       $t2, $zero, 0xF3
    ctx->r10 = ADD32(0, 0XF3);
    // 0x08001A68: addiu       $t3, $t3, 0x2D68
    ctx->r11 = ADD32(ctx->r11, (int16_t)RELOC_LO16(29, 0X2D68));
    // 0x08001A6C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001A70: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08001A74: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08001A78: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08001A7C: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x08001A80: sb          $v0, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r2;
    // 0x08001A84: sb          $v0, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r2;
    // 0x08001A88: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x08001A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A90: jalr        $t9
    // 0x08001A94: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A94: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    after_1:
    // 0x08001A98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001AA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001AAC: jalr        $t9
    // 0x08001AB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001AB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001AB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AB8: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AC0: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08001AC4: addiu       $a2, $zero, 0x10E
    ctx->r6 = ADD32(0, 0X10E);
    // 0x08001AC8: jalr        $t9
    // 0x08001ACC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001ACC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001AD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AD4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08001AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001ADC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08001AE0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08001AE4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x08001AE8: jalr        $t9
    // 0x08001AEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001AEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08001AF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AF4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AFC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x08001B00: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08001B04: jalr        $t9
    // 0x08001B08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08001B0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B10: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08001B14: jalr        $t9
    // 0x08001B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08001B1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B20: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B28: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x08001B2C: jalr        $t9
    // 0x08001B30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001B30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08001B34: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001B38: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08001B3C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001B40: addiu       $a1, $a1, 0x4B10
    ctx->r5 = ADD32(ctx->r5, 0X4B10);
    // 0x08001B44: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001B50: jalr        $v0
    // 0x08001B54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08001B54: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x08001B58: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001B5C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001B60: addiu       $a1, $a1, 0x6B10
    ctx->r5 = ADD32(ctx->r5, 0X6B10);
    // 0x08001B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B68: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001B6C: jalr        $v0
    // 0x08001B70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08001B70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08001B74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B78: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08001B7C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X3130) << 16);
    // 0x08001B80: addiu       $a1, $a1, 0x3130
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X3130));
    // 0x08001B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B88: jalr        $t9
    // 0x08001B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x08001B90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B94: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001BA0: jalr        $t9
    // 0x08001BA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001BA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x08001BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001BAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001BB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001BB4: jr          $ra
    // 0x08001BB8: nop

    TRACE_RETURN()
    return;
    // 0x08001BB8: nop

;}
RECOMP_FUNC void func_08000664_6E4644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000668: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800066C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000670: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000674: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000678: jalr        $t9
    // 0x0800067C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800067C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000680: bne         $v0, $zero, L_08000698
    if (ctx->r2 != 0) {
        // 0x08000684: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X6A8) << 16);
            goto L_08000698;
    }
    // 0x08000684: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X6A8) << 16);
    // 0x08000688: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800068C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000690: jalr        $t9
    // 0x08000694: addiu       $a0, $a0, 0x6A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X6A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000694: addiu       $a0, $a0, 0x6A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X6A8));
    after_1:
L_08000698:
    // 0x08000698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800069C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006A0: jr          $ra
    // 0x080006A4: nop

    TRACE_RETURN()
    return;
    // 0x080006A4: nop

;}
RECOMP_FUNC void func_080005CC_6E45AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080005D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080005DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080005E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005E4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080005E8: bne         $v0, $zero, L_080005FC
    if (ctx->r2 != 0) {
        // 0x080005EC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080005FC;
    }
    // 0x080005EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080005F0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080005F4: jalr        $t9
    // 0x080005F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_080005FC:
    // 0x080005FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000604: jr          $ra
    // 0x08000608: nop

    TRACE_RETURN()
    return;
    // 0x08000608: nop

;}
RECOMP_FUNC void func_08001CD4_6E5CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001CD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001CE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001CE4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001CE8: jalr        $t9
    // 0x08001CEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001CEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08001CF0: bne         $v0, $zero, L_08001D28
    if (ctx->r2 != 0) {
        // 0x08001CF4: addiu       $a0, $zero, 0x261
        ctx->r4 = ADD32(0, 0X261);
            goto L_08001D28;
    }
    // 0x08001CF4: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x08001CF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CFC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001D00: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001D04: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001D08: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001D0C: jalr        $t9
    // 0x08001D10: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D10: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08001D14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1D38) << 16);
    // 0x08001D20: jalr        $t9
    // 0x08001D24: addiu       $a0, $a0, 0x1D38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1D38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D24: addiu       $a0, $a0, 0x1D38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1D38));
    after_2:
L_08001D28:
    // 0x08001D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D30: jr          $ra
    // 0x08001D34: nop

    TRACE_RETURN()
    return;
    // 0x08001D34: nop

;}
RECOMP_FUNC void func_080020D4_6E60B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080020D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080020E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080020E4: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x080020E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080020EC: jalr        $t9
    // 0x080020F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080020F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020F8: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080020FC: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002100: jalr        $t9
    // 0x08002104: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002104: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08002108: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x0800210C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002110: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002118: jalr        $t9
    // 0x0800211C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800211C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08002120: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002124: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800212C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002130: jalr        $t9
    // 0x08002134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800213C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002144: jr          $ra
    // 0x08002148: nop

    TRACE_RETURN()
    return;
    // 0x08002148: nop

;}
RECOMP_FUNC void func_08002D68_6E6D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D74: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x08002D78: jalr        $t9
    // 0x08002D7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002D80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2DA4) << 16);
    // 0x08002D8C: jalr        $t9
    // 0x08002D90: addiu       $a0, $a0, 0x2DA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2DA4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D90: addiu       $a0, $a0, 0x2DA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2DA4));
    after_1:
    // 0x08002D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D9C: jr          $ra
    // 0x08002DA0: nop

    TRACE_RETURN()
    return;
    // 0x08002DA0: nop

;}
RECOMP_FUNC void func_08002A30_6E6A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002A40: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A44: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002A4C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002A50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002A54: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002A58: jalr        $t9
    // 0x08002A5C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A5C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002A60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A64: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A68: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2A84) << 16);
    // 0x08002A6C: jalr        $t9
    // 0x08002A70: addiu       $a0, $a0, 0x2A84
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2A84));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A70: addiu       $a0, $a0, 0x2A84
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2A84));
    after_1:
    // 0x08002A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A7C: jr          $ra
    // 0x08002A80: nop

    TRACE_RETURN()
    return;
    // 0x08002A80: nop

;}
RECOMP_FUNC void func_080012E0_6E52C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080012E4: jr          $ra
    // 0x080012E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080012E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
