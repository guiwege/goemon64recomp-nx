#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000B8C_71B09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B8C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000B90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000B94: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000B98: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000B9C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000BA0: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08000BA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000BAC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08000BB0: jalr        $t9
    // 0x08000BB4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BB4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_0:
    // 0x08000BB8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000BBC: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08000BC0: lw          $v1, 0x188($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X188);
    // 0x08000BC4: lw          $t7, 0x19C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X19C);
    // 0x08000BC8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x08000BCC: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x08000BD0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x08000BD4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x08000BD8: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x08000BDC: sltiu       $at, $t8, 0xD
    ctx->r1 = ctx->r24 < 0XD ? 1 : 0;
    // 0x08000BE0: beq         $at, $zero, L_0800118C
    if (ctx->r1 == 0) {
        // 0x08000BE4: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_0800118C;
    }
    // 0x08000BE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x08000BE8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1514) << 16);
    // 0x08000BEC: addu        $at, $at, $t8
    gpr jr_addend_08000BF4 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08000BF0: lw          $t8, 0x1514($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(49, 0X1514));
    // 0x08000BF4: jr          $t8
    // 0x08000BF8: nop

    switch (jr_addend_08000BF4 >> 2) {
        case 0: goto L_08000BFC; break;
        case 1: goto L_0800118C; break;
        case 2: goto L_0800118C; break;
        case 3: goto L_0800118C; break;
        case 4: goto L_0800118C; break;
        case 5: goto L_0800118C; break;
        case 6: goto L_0800118C; break;
        case 7: goto L_0800118C; break;
        case 8: goto L_0800118C; break;
        case 9: goto L_08000E5C; break;
        case 10: goto L_08000D30; break;
        case 11: goto L_08000EDC; break;
        case 12: goto L_08001060; break;
        default: switch_error(__func__, 0x08000BF4, 0x08001514);
    }
    // 0x08000BF8: nop

L_08000BFC:
    // 0x08000BFC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000C00: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x08000C04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000C08: bne         $v0, $zero, L_08000C20
    if (ctx->r2 != 0) {
        // 0x08000C0C: addiu       $a1, $zero, 0x1400
        ctx->r5 = ADD32(0, 0X1400);
            goto L_08000C20;
    }
    // 0x08000C0C: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000C10: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x08000C14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000C18: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x08000C1C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_08000C20:
    // 0x08000C20: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000C24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C28: bgez        $v0, L_08000C40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000C2C: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_08000C40;
    }
    // 0x08000C2C: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000C30: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08000C34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000C38: nop

    // 0x08000C3C: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_08000C40:
    // 0x08000C40: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1548) << 16);
    // 0x08000C44: ldc1        $f8, 0x1548($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(49, 0X1548));
    // 0x08000C48: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000C4C: c.eq.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d == ctx->f0.d;
    // 0x08000C50: nop

    // 0x08000C54: bc1f        L_08000D08
    if (!c1cs) {
        // 0x08000C58: nop
    
            goto L_08000D08;
    }
    // 0x08000C58: nop

    // 0x08000C5C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000C60: jalr        $t9
    // 0x08000C64: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C64: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_1:
    // 0x08000C68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C6C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000C70: lui         $a3, 0x4483
    ctx->r7 = S32(0X4483 << 16);
    // 0x08000C74: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x08000C78: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000C7C: lui         $a1, 0xC300
    ctx->r5 = S32(0XC300 << 16);
    // 0x08000C80: jalr        $t9
    // 0x08000C84: lui         $a2, 0x438E
    ctx->r6 = S32(0X438E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C84: lui         $a2, 0x438E
    ctx->r6 = S32(0X438E << 16);
    after_2:
    // 0x08000C88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C8C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000C90: lui         $a3, 0x443E
    ctx->r7 = S32(0X443E << 16);
    // 0x08000C94: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000C98: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000C9C: lui         $a1, 0x422C
    ctx->r5 = S32(0X422C << 16);
    // 0x08000CA0: jalr        $t9
    // 0x08000CA4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CA4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_3:
    // 0x08000CA8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08000CAC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x08000CB0: addiu       $t4, $zero, 0x26
    ctx->r12 = ADD32(0, 0X26);
    // 0x08000CB4: addiu       $t5, $zero, 0x138
    ctx->r13 = ADD32(0, 0X138);
    // 0x08000CB8: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x08000CBC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x08000CC0: sh          $t3, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r11;
    // 0x08000CC4: sh          $t4, 0x4A($t0)
    MEM_H(0X4A, ctx->r8) = ctx->r12;
    // 0x08000CC8: sh          $t5, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r13;
    // 0x08000CCC: sh          $t6, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r14;
    // 0x08000CD0: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x08000CD4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000CD8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000CDC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08000CE0: sb          $t7, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r15;
    // 0x08000CE4: lhu         $t1, 0x8A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000CE8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000CEC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x08000CF0: bgez        $t1, L_08000D08
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000CF4: cvt.d.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
            goto L_08000D08;
    }
    // 0x08000CF4: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x08000CF8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000CFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000D00: nop

    // 0x08000D04: add.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f0.d + ctx->f16.d;
L_08000D08:
    // 0x08000D08: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1550) << 16);
    // 0x08000D0C: ldc1        $f18, 0x1550($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(49, 0X1550));
    // 0x08000D10: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x08000D14: c.eq.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d == ctx->f0.d;
    // 0x08000D18: nop

    // 0x08000D1C: bc1fl       L_08001190
    if (!c1cs) {
        // 0x08000D20: lhu         $t8, 0x8A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8A);
            goto L_08001190;
    }
    goto skip_0;
    // 0x08000D20: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    skip_0:
    // 0x08000D24: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08000D28: b           L_0800118C
    // 0x08000D2C: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
        goto L_0800118C;
    // 0x08000D2C: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
L_08000D30:
    // 0x08000D30: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000D34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000D38: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x08000D3C: bne         $v0, $at, L_08000D94
    if (ctx->r2 != ctx->r1) {
        // 0x08000D40: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000D94;
    }
    // 0x08000D40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D44: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000D48: jalr        $t9
    // 0x08000D4C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D4C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x08000D50: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D54: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000D58: lui         $a3, 0x4495
    ctx->r7 = S32(0X4495 << 16);
    // 0x08000D5C: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x08000D60: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000D64: lui         $a1, 0xC3CC
    ctx->r5 = S32(0XC3CC << 16);
    // 0x08000D68: jalr        $t9
    // 0x08000D6C: lui         $a2, 0x4330
    ctx->r6 = S32(0X4330 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D6C: lui         $a2, 0x4330
    ctx->r6 = S32(0X4330 << 16);
    after_5:
    // 0x08000D70: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D74: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000D78: lui         $a3, 0x4480
    ctx->r7 = S32(0X4480 << 16);
    // 0x08000D7C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x08000D80: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000D84: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x08000D88: jalr        $t9
    // 0x08000D8C: lui         $a2, 0x4363
    ctx->r6 = S32(0X4363 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D8C: lui         $a2, 0x4363
    ctx->r6 = S32(0X4363 << 16);
    after_6:
    // 0x08000D90: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_08000D94:
    // 0x08000D94: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000D98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000D9C: bgez        $v0, L_08000DB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000DA0: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_08000DB8;
    }
    // 0x08000DA0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08000DA4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000DA8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000DAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000DB0: nop

    // 0x08000DB4: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_08000DB8:
    // 0x08000DB8: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x08000DBC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000DC0: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x08000DC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DC8: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x08000DCC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000DD0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x08000DD4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000DD8: bc1f        L_08000DF8
    if (!c1cs) {
        // 0x08000DDC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000DF8;
    }
    // 0x08000DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000DE0: jalr        $t9
    // 0x08000DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08000DE8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DEC: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000DF0: jalr        $t9
    // 0x08000DF4: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000DF4: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    after_8:
L_08000DF8:
    // 0x08000DF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DFC: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000E00: jalr        $t9
    // 0x08000E04: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E04: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_9:
    // 0x08000E08: bnel        $v0, $zero, L_08001190
    if (ctx->r2 != 0) {
        // 0x08000E0C: lhu         $t8, 0x8A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8A);
            goto L_08001190;
    }
    goto skip_1;
    // 0x08000E0C: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    skip_1:
    // 0x08000E10: lhu         $t3, 0x8A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000E14: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000E18: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x08000E1C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x08000E20: bgez        $t3, L_08000E38
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08000E24: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_08000E38;
    }
    // 0x08000E24: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x08000E28: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000E2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000E30: nop

    // 0x08000E34: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_08000E38:
    // 0x08000E38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1558) << 16);
    // 0x08000E3C: ldc1        $f8, 0x1558($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(49, 0X1558));
    // 0x08000E40: c.le.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d <= ctx->f18.d;
    // 0x08000E44: nop

    // 0x08000E48: bc1fl       L_08001190
    if (!c1cs) {
        // 0x08000E4C: lhu         $t8, 0x8A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8A);
            goto L_08001190;
    }
    goto skip_2;
    // 0x08000E4C: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    skip_2:
    // 0x08000E50: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08000E54: b           L_0800118C
    // 0x08000E58: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
        goto L_0800118C;
    // 0x08000E58: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
L_08000E5C:
    // 0x08000E5C: lhu         $t5, 0x8A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000E60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E64: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000E68: bne         $t5, $at, L_08000EBC
    if (ctx->r13 != ctx->r1) {
        // 0x08000E6C: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000EBC;
    }
    // 0x08000E6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E70: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000E74: jalr        $t9
    // 0x08000E78: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000E78: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_10:
    // 0x08000E7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E80: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000E84: lui         $a3, 0x4495
    ctx->r7 = S32(0X4495 << 16);
    // 0x08000E88: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x08000E8C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000E90: lui         $a1, 0xC3CC
    ctx->r5 = S32(0XC3CC << 16);
    // 0x08000E94: jalr        $t9
    // 0x08000E98: lui         $a2, 0x4330
    ctx->r6 = S32(0X4330 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E98: lui         $a2, 0x4330
    ctx->r6 = S32(0X4330 << 16);
    after_11:
    // 0x08000E9C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EA0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000EA4: lui         $a3, 0x4480
    ctx->r7 = S32(0X4480 << 16);
    // 0x08000EA8: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x08000EAC: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000EB0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x08000EB4: jalr        $t9
    // 0x08000EB8: lui         $a2, 0x4363
    ctx->r6 = S32(0X4363 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000EB8: lui         $a2, 0x4363
    ctx->r6 = S32(0X4363 << 16);
    after_12:
L_08000EBC:
    // 0x08000EBC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EC0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000EC4: jalr        $t9
    // 0x08000EC8: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000EC8: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    after_13:
    // 0x08000ECC: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08000ED0: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x08000ED4: b           L_0800118C
    // 0x08000ED8: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
        goto L_0800118C;
    // 0x08000ED8: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
L_08000EDC:
    // 0x08000EDC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000EE4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x08000EE8: bne         $v0, $at, L_08000F4C
    if (ctx->r2 != ctx->r1) {
        // 0x08000EEC: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000F4C;
    }
    // 0x08000EEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000EF0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000EF4: jalr        $t9
    // 0x08000EF8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000EF8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_14:
    // 0x08000EFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F00: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000F04: lui         $a3, 0x4472
    ctx->r7 = S32(0X4472 << 16);
    // 0x08000F08: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x08000F0C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000F10: lui         $a1, 0xC1E8
    ctx->r5 = S32(0XC1E8 << 16);
    // 0x08000F14: jalr        $t9
    // 0x08000F18: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000F18: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    after_15:
    // 0x08000F1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F20: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000F24: lui         $a3, 0x4473
    ctx->r7 = S32(0X4473 << 16);
    // 0x08000F28: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000F2C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000F30: lui         $a1, 0x4204
    ctx->r5 = S32(0X4204 << 16);
    // 0x08000F34: jalr        $t9
    // 0x08000F38: lui         $a2, 0x43AA
    ctx->r6 = S32(0X43AA << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000F38: lui         $a2, 0x43AA
    ctx->r6 = S32(0X43AA << 16);
    after_16:
    // 0x08000F3C: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x08000F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000F44: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000F48: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
L_08000F4C:
    // 0x08000F4C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08000F50: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1560) << 16);
    // 0x08000F54: ldc1        $f10, 0x1560($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(49, 0X1560));
    // 0x08000F58: bgez        $v0, L_08000F74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000F5C: cvt.d.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
            goto L_08000F74;
    }
    // 0x08000F5C: cvt.d.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
    // 0x08000F60: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000F64: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000F68: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000F6C: nop

    // 0x08000F70: add.d       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f4.d + ctx->f18.d;
L_08000F74:
    // 0x08000F74: c.eq.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d == ctx->f4.d;
    // 0x08000F78: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x08000F7C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x08000F80: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x08000F84: bc1f        L_08000FAC
    if (!c1cs) {
        // 0x08000F88: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000FAC;
    }
    // 0x08000F88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000F8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F90: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F94: jalr        $t9
    // 0x08000F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x08000F9C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000FA0: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000FA4: jalr        $t9
    // 0x08000FA8: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000FA8: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    after_18:
L_08000FAC:
    // 0x08000FAC: lwc1        $f8, 0xE0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x08000FB0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X1568) << 16);
    // 0x08000FB4: ldc1        $f16, 0x1568($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(49, 0X1568));
    // 0x08000FB8: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x08000FBC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FC0: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x08000FC4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08000FC8: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x08000FCC: swc1        $f10, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f10.u32l;
    // 0x08000FD0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x08000FD4: lwc1        $f8, 0xE0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x08000FD8: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08000FDC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x08000FE0: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x08000FE4: jalr        $t9
    // 0x08000FE8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000FE8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_19:
    // 0x08000FEC: bne         $v0, $zero, L_08001030
    if (ctx->r2 != 0) {
        // 0x08000FF0: lui         $at, 0x4004
        ctx->r1 = S32(0X4004 << 16);
            goto L_08001030;
    }
    // 0x08000FF0: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08000FF4: lwc1        $f16, 0xE8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x08000FF8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000FFC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001000: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001004: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001008: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x0800100C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001010: lui         $a3, 0x4472
    ctx->r7 = S32(0X4472 << 16);
    // 0x08001014: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x08001018: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x0800101C: lui         $a1, 0xC1E8
    ctx->r5 = S32(0XC1E8 << 16);
    // 0x08001020: swc1        $f8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f8.u32l;
    // 0x08001024: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    // 0x08001028: jalr        $t9
    // 0x0800102C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800102C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_20:
L_08001030:
    // 0x08001030: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x08001034: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08001038: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800103C: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08001040: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x08001044: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x08001048: nop

    // 0x0800104C: bc1fl       L_08001190
    if (!c1cs) {
        // 0x08001050: lhu         $t8, 0x8A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8A);
            goto L_08001190;
    }
    goto skip_3;
    // 0x08001050: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    skip_3:
    // 0x08001054: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08001058: b           L_0800118C
    // 0x0800105C: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
        goto L_0800118C;
    // 0x0800105C: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
L_08001060:
    // 0x08001060: lhu         $t2, 0x8A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8A);
    // 0x08001064: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800106C: bne         $t2, $at, L_08001098
    if (ctx->r10 != ctx->r1) {
        // 0x08001070: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001098;
    }
    // 0x08001070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001074: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001078: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x0800107C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001080: jalr        $t9
    // 0x08001084: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001084: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x08001088: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800108C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001090: jalr        $t9
    // 0x08001094: ori         $a0, $zero, 0x811D
    ctx->r4 = 0 | 0X811D;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001094: ori         $a0, $zero, 0x811D
    ctx->r4 = 0 | 0X811D;
    after_22:
L_08001098:
    // 0x08001098: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800109C: addiu       $t9, $t9, 0x1F0
    ctx->r25 = ADD32(ctx->r25, 0X1F0);
    // 0x080010A0: jalr        $t9
    // 0x080010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x080010A8: bne         $v0, $zero, L_0800118C
    if (ctx->r2 != 0) {
        // 0x080010AC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_0800118C;
    }
    // 0x080010AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080010B0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080010B8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080010BC: sh          $t3, 0x7A76($at)
    MEM_H(0X7A76, ctx->r1) = ctx->r11;
    // 0x080010C0: jalr        $t9
    // 0x080010C4: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080010C4: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    after_24:
    // 0x080010C8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080010CC: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080010D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080010D4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080010D8: jalr        $t9
    // 0x080010DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080010DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x080010E0: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x080010E4: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x080010E8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x080010EC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080010F0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080010F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x080010F8: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x080010FC: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08001100: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x08001104: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x08001108: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x0800110C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08001110: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001114: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    // 0x08001118: addiu       $a1, $zero, -0x2D
    ctx->r5 = ADD32(0, -0X2D);
    // 0x0800111C: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x08001120: jalr        $t9
    // 0x08001124: addiu       $a3, $zero, 0x12E
    ctx->r7 = ADD32(0, 0X12E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001124: addiu       $a3, $zero, 0x12E
    ctx->r7 = ADD32(0, 0X12E);
    after_26:
    // 0x08001128: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x0800112C: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08001130: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001134: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08001138: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    // 0x0800113C: jalr        $t9
    // 0x08001140: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001140: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_27:
    // 0x08001144: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001148: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800114C: jalr        $t9
    // 0x08001150: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001150: nop

    after_28:
    // 0x08001154: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08001158: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800115C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001160: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08001164: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001168: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x0800116C: jalr        $t9
    // 0x08001170: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001170: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_29:
    // 0x08001174: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001178: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800117C: jalr        $t9
    // 0x08001180: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001180: nop

    after_30:
    // 0x08001184: b           L_080011D8
    // 0x08001188: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_080011D8;
    // 0x08001188: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800118C:
    // 0x0800118C: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
L_08001190:
    // 0x08001190: lui         $at, 0x423C
    ctx->r1 = S32(0X423C << 16);
    // 0x08001194: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08001198: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x0800119C: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x080011A0: beql        $t2, $zero, L_080011D8
    if (ctx->r10 == 0) {
        // 0x080011A4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_080011D8;
    }
    goto skip_4;
    // 0x080011A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x080011A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080011AC: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x080011B0: lui         $at, 0x4351
    ctx->r1 = S32(0X4351 << 16);
    // 0x080011B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080011B8: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x080011BC: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x080011C0: lui         $at, 0x42FC
    ctx->r1 = S32(0X42FC << 16);
    // 0x080011C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080011C8: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x080011CC: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x080011D0: swc1        $f4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f4.u32l;
    // 0x080011D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_080011D8:
    // 0x080011D8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080011DC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080011E0: jr          $ra
    // 0x080011E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080011E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08000000_71A510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800000C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000010: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000018: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800001C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000020: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000024: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000028: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800002C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000030: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000034: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000038: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x0800003C: jalr        $t9
    // 0x08000040: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000040: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000044: bne         $v0, $zero, L_08000064
    if (ctx->r2 != 0) {
        // 0x08000048: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_08000064;
    }
    // 0x08000048: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x0800004C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000050: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000054: jalr        $t9
    // 0x08000058: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000058: nop

    after_1:
    // 0x0800005C: b           L_08000230
    // 0x08000060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000230;
    // 0x08000060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000064:
    // 0x08000064: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000068: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x0800006C: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x08000070: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08000074: lw          $t0, 0x2C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X2C);
    // 0x08000078: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800007C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000080: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000084: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000088: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
    // 0x0800008C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08000090: jalr        $t9
    // 0x08000094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x08000098: beq         $v0, $zero, L_080000D8
    if (ctx->r2 == 0) {
        // 0x0800009C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_080000D8;
    }
    // 0x0800009C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x080000A0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080000A4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080000A8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080000AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000B0: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x080000B4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080000B8: jalr        $t9
    // 0x080000BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000BC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x080000C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000C4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000C8: jalr        $t9
    // 0x080000CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000CC: nop

    after_4:
    // 0x080000D0: b           L_08000230
    // 0x080000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000230;
    // 0x080000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080000D8:
    // 0x080000D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x3FB8
    ctx->r25 = ADD32(ctx->r25, 0X3FB8);
    // 0x080000E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080000E4: jalr        $t9
    // 0x080000E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_5:
    // 0x080000EC: beq         $v0, $zero, L_080001C0
    if (ctx->r2 == 0) {
        // 0x080000F0: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_080001C0;
    }
    // 0x080000F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x080000F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000F8: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080000FC: jalr        $t9
    // 0x08000100: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000100: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_6:
    // 0x08000104: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000108: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800010C: lwc1        $f4, 0x194($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X194);
    // 0x08000110: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x08000114: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08000118: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x0800011C: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x08000120: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x08000124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000128: addiu       $t5, $zero, 0x1400
    ctx->r13 = ADD32(0, 0X1400);
    // 0x0800012C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x08000130: swc1        $f6, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f6.u32l;
    // 0x08000134: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x08000138: lwc1        $f8, 0x198($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X198);
    // 0x0800013C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000140: lui         $at, 0x4372
    ctx->r1 = S32(0X4372 << 16);
    // 0x08000144: swc1        $f8, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f8.u32l;
    // 0x08000148: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x0800014C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000150: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X14D0) << 16);
    // 0x08000154: sh          $t5, 0x1A($t6)
    MEM_H(0X1A, ctx->r14) = ctx->r13;
    // 0x08000158: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x0800015C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X42C) << 16);
    // 0x08000160: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X42C));
    // 0x08000164: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x08000168: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x0800016C: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
    // 0x08000170: lwc1        $f18, 0x14D0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X14D0));
    // 0x08000174: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x08000178: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x0800017C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000180: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x08000184: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x08000188: lui         $at, 0x436B
    ctx->r1 = S32(0X436B << 16);
    // 0x0800018C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000190: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x08000194: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x08000198: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X14D4) << 16);
    // 0x0800019C: swc1        $f6, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f6.u32l;
    // 0x080001A0: lwc1        $f8, 0x14D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X14D4));
    // 0x080001A4: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x080001A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001B0: jalr        $t9
    // 0x080001B4: swc1        $f8, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001B4: swc1        $f8, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f8.u32l;
    after_7:
    // 0x080001B8: b           L_08000230
    // 0x080001BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000230;
    // 0x080001BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001C0:
    // 0x080001C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001C4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080001C8: jalr        $t9
    // 0x080001CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001CC: nop

    after_8:
    // 0x080001D0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x080001D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080001D8: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x080001DC: lui         $at, 0x4356
    ctx->r1 = S32(0X4356 << 16);
    // 0x080001E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080001E4: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x080001E8: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x080001EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X14D8) << 16);
    // 0x080001F0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080001F4: swc1        $f16, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f16.u32l;
    // 0x080001F8: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x080001FC: lwc1        $f18, 0x14D8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(49, 0X14D8));
    // 0x08000200: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000204: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000208: swc1        $f18, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f18.u32l;
    // 0x0800020C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08000210: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08000214: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000218: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X240) << 16);
    // 0x0800021C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000220: sb          $t6, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r14;
    // 0x08000224: jalr        $t9
    // 0x08000228: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000228: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X240));
    after_9:
    // 0x0800022C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000230:
    // 0x08000230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000238: jr          $ra
    // 0x0800023C: nop

    TRACE_RETURN()
    return;
    // 0x0800023C: nop

;}
RECOMP_FUNC void func_080004F8_71AA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004F8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080004FC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000500: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08000504: lw          $t6, 0x19C($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X19C);
    // 0x08000508: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800050C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000510: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000514: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08000518: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x0800051C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x08000520: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000524: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08000528: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x0800052C: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08000530: beql        $a2, $zero, L_08000550
    if (ctx->r6 == 0) {
        // 0x08000534: lbu         $t7, 0x0($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X0);
            goto L_08000550;
    }
    goto skip_0;
    // 0x08000534: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    skip_0:
    // 0x08000538: jalr        $t9
    // 0x0800053C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800053C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x08000540: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000544: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08000548: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x0800054C: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
L_08000550:
    // 0x08000550: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08000554: sltiu       $at, $t7, 0xE
    ctx->r1 = ctx->r15 < 0XE ? 1 : 0;
    // 0x08000558: beq         $at, $zero, L_08000B50
    if (ctx->r1 == 0) {
        // 0x0800055C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08000B50;
    }
    // 0x0800055C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08000560: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(49, 0X14DC) << 16);
    // 0x08000564: addu        $at, $at, $t7
    gpr jr_addend_0800056C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000568: lw          $t7, 0x14DC($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(49, 0X14DC));
    // 0x0800056C: jr          $t7
    // 0x08000570: nop

    switch (jr_addend_0800056C >> 2) {
        case 0: goto L_08000574; break;
        case 1: goto L_08000598; break;
        case 2: goto L_080005B8; break;
        case 3: goto L_08000B50; break;
        case 4: goto L_08000B50; break;
        case 5: goto L_08000B50; break;
        case 6: goto L_08000AFC; break;
        case 7: goto L_08000A68; break;
        case 8: goto L_08000A24; break;
        case 9: goto L_08000B50; break;
        case 10: goto L_08000B50; break;
        case 11: goto L_08000B50; break;
        case 12: goto L_080008D0; break;
        case 13: goto L_08000964; break;
        default: switch_error(__func__, 0x0800056C, 0x080014DC);
    }
    // 0x08000570: nop

L_08000574:
    // 0x08000574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000578: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800057C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x08000580: jalr        $t9
    // 0x08000584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x08000588: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x0800058C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000590: b           L_08000B50
    // 0x08000594: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08000B50;
    // 0x08000594: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08000598:
    // 0x08000598: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800059C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x080005A0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x080005A4: bnel        $t1, $at, L_08000B54
    if (ctx->r9 != ctx->r1) {
        // 0x080005A8: lhu         $t2, 0x8A($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B54;
    }
    goto skip_1;
    // 0x080005A8: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    skip_1:
    // 0x080005AC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080005B0: b           L_08000B50
    // 0x080005B4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08000B50;
    // 0x080005B4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080005B8:
    // 0x080005B8: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080005BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080005C0: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080005C4: bnel        $v0, $at, L_08000640
    if (ctx->r2 != ctx->r1) {
        // 0x080005C8: mtc1        $v0, $f6
        ctx->f6.u32l = ctx->r2;
            goto L_08000640;
    }
    goto skip_2;
    // 0x080005C8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    skip_2:
    // 0x080005CC: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080005D0: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080005D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080005D8: jalr        $v0
    // 0x080005DC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080005DC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_2:
    // 0x080005E0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080005E4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080005E8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080005EC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x080005F0: lui         $a2, 0x4337
    ctx->r6 = S32(0X4337 << 16);
    // 0x080005F4: jalr        $t9
    // 0x080005F8: lui         $a3, 0x4483
    ctx->r7 = S32(0X4483 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005F8: lui         $a3, 0x4483
    ctx->r7 = S32(0X4483 << 16);
    after_3:
    // 0x080005FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08000600: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000604: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000608: jalr        $t9
    // 0x0800060C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800060C: nop

    after_4:
    // 0x08000610: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000614: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x08000618: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x0800061C: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(49, 0X11F0) << 16);
    // 0x08000620: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x08000624: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x08000628: addiu       $a2, $a2, 0x11F0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(49, 0X11F0));
    // 0x0800062C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000630: jalr        $t9
    // 0x08000634: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000634: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x08000638: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x0800063C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
L_08000640:
    // 0x08000640: lui         $at, 0x4038
    ctx->r1 = S32(0X4038 << 16);
    // 0x08000644: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000648: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800064C: bgez        $v0, L_08000668
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000650: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_08000668;
    }
    // 0x08000650: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x08000654: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000658: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800065C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000660: nop

    // 0x08000664: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_08000668:
    // 0x08000668: c.eq.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d == ctx->f8.d;
    // 0x0800066C: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x08000670: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x08000674: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000678: bc1f        L_080006A0
    if (!c1cs) {
        // 0x0800067C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_080006A0;
    }
    // 0x0800067C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000680: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000684: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000688: jalr        $t9
    // 0x0800068C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800068C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000690: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000694: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000698: jalr        $t9
    // 0x0800069C: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800069C: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    after_7:
L_080006A0:
    // 0x080006A0: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080006A4: addiu       $v0, $v0, 0x2380
    ctx->r2 = ADD32(ctx->r2, 0X2380);
    // 0x080006A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080006AC: jalr        $v0
    // 0x080006B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x080006B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_8:
    // 0x080006B4: bnel        $v0, $zero, L_0800072C
    if (ctx->r2 != 0) {
        // 0x080006B8: lbu         $t7, 0x1($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X1);
            goto L_0800072C;
    }
    goto skip_3;
    // 0x080006B8: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    skip_3:
    // 0x080006BC: lbu         $t4, 0x1($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1);
    // 0x080006C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x080006C4: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x080006C8: bne         $t4, $zero, L_08000728
    if (ctx->r12 != 0) {
        // 0x080006CC: lui         $t6, 0x8001
        ctx->r14 = S32(0X8001 << 16);
            goto L_08000728;
    }
    // 0x080006CC: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x080006D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006D4: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
    // 0x080006D8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080006DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080006E0: addiu       $t6, $t6, 0x2628
    ctx->r14 = ADD32(ctx->r14, 0X2628);
    // 0x080006E4: jalr        $t9
    // 0x080006E8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080006E8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_9:
    // 0x080006EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006F0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080006F4: lui         $a1, 0x4380
    ctx->r5 = S32(0X4380 << 16);
    // 0x080006F8: lui         $a3, 0xC4AF
    ctx->r7 = S32(0XC4AF << 16);
    // 0x080006FC: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x08000700: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000704: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000708: jalr        $t9
    // 0x0800070C: lui         $a2, 0x4286
    ctx->r6 = S32(0X4286 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800070C: lui         $a2, 0x4286
    ctx->r6 = S32(0X4286 << 16);
    after_10:
    // 0x08000710: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000714: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000718: lui         $a1, 0x430A
    ctx->r5 = S32(0X430A << 16);
    // 0x0800071C: lui         $a2, 0x4312
    ctx->r6 = S32(0X4312 << 16);
    // 0x08000720: jalr        $t9
    // 0x08000724: lui         $a3, 0xC4BF
    ctx->r7 = S32(0XC4BF << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000724: lui         $a3, 0xC4BF
    ctx->r7 = S32(0XC4BF << 16);
    after_11:
L_08000728:
    // 0x08000728: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
L_0800072C:
    // 0x0800072C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000730: bnel        $t7, $at, L_08000784
    if (ctx->r15 != ctx->r1) {
        // 0x08000734: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_08000784;
    }
    goto skip_4;
    // 0x08000734: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x08000738: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800073C: lwc1        $f18, 0xE4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XE4);
    // 0x08000740: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000744: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x08000748: nop

    // 0x0800074C: bc1fl       L_08000784
    if (!c1cs) {
        // 0x08000750: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_08000784;
    }
    goto skip_5;
    // 0x08000750: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_5:
    // 0x08000754: lhu         $v0, -0x3242($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3242);
    // 0x08000758: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x0800075C: addiu       $v0, $v0, 0x101
    ctx->r2 = ADD32(ctx->r2, 0X101);
    // 0x08000760: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x08000764: bne         $at, $zero, L_08000778
    if (ctx->r1 != 0) {
        // 0x08000768: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_08000778;
    }
    // 0x08000768: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800076C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000770: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x08000774: swc1        $f6, 0xE4($s1)
    MEM_W(0XE4, ctx->r17) = ctx->f6.u32l;
L_08000778:
    // 0x08000778: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800077C: sh          $v0, -0x3242($at)
    MEM_H(-0X3242, ctx->r1) = ctx->r2;
    // 0x08000780: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08000784:
    // 0x08000784: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000788: jalr        $t9
    // 0x0800078C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800078C: nop

    after_12:
    // 0x08000790: bnel        $v0, $zero, L_08000834
    if (ctx->r2 != 0) {
        // 0x08000794: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_08000834;
    }
    goto skip_6;
    // 0x08000794: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x08000798: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x0800079C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080007A0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x080007A4: bne         $t8, $at, L_08000830
    if (ctx->r24 != ctx->r1) {
        // 0x080007A8: lui         $a1, 0x4270
        ctx->r5 = S32(0X4270 << 16);
            goto L_08000830;
    }
    // 0x080007A8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x080007AC: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x080007B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080007B4: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080007B8: lui         $t2, 0x8001
    ctx->r10 = S32(0X8001 << 16);
    // 0x080007BC: lui         $t3, 0x8001
    ctx->r11 = S32(0X8001 << 16);
    // 0x080007C0: addiu       $t3, $t3, 0x25F0
    ctx->r11 = ADD32(ctx->r11, 0X25F0);
    // 0x080007C4: addiu       $t2, $t2, 0x2628
    ctx->r10 = ADD32(ctx->r10, 0X2628);
    // 0x080007C8: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080007CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080007D0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x080007D4: jalr        $v0
    // 0x080007D8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x080007D8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    after_13:
    // 0x080007DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080007E0: lui         $a3, 0xC4D0
    ctx->r7 = S32(0XC4D0 << 16);
    // 0x080007E4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x080007E8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080007EC: lui         $a1, 0x422C
    ctx->r5 = S32(0X422C << 16);
    // 0x080007F0: jalr        $t9
    // 0x080007F4: lui         $a2, 0x4356
    ctx->r6 = S32(0X4356 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080007F4: lui         $a2, 0x4356
    ctx->r6 = S32(0X4356 << 16);
    after_14:
    // 0x080007F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x080007FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000800: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000804: jalr        $t9
    // 0x08000808: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000808: nop

    after_15:
    // 0x0800080C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000810: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000814: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(49, 0X1220) << 16);
    // 0x08000818: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x0800081C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000820: addiu       $a2, $a2, 0x1220
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(49, 0X1220));
    // 0x08000824: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000828: jalr        $t9
    // 0x0800082C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800082C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_16:
L_08000830:
    // 0x08000830: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08000834:
    // 0x08000834: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08000838: jalr        $t9
    // 0x0800083C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800083C: nop

    after_17:
    // 0x08000840: bne         $v0, $zero, L_0800087C
    if (ctx->r2 != 0) {
        // 0x08000844: nop
    
            goto L_0800087C;
    }
    // 0x08000844: nop

    // 0x08000848: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x0800084C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000850: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08000854: bne         $t5, $at, L_0800087C
    if (ctx->r13 != ctx->r1) {
        // 0x08000858: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_0800087C;
    }
    // 0x08000858: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x0800085C: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
    // 0x08000860: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08000864: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000868: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x0800086C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000870: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08000874: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000878: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_0800087C:
    // 0x0800087C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08000880: lwc1        $f10, -0x323C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X323C);
    // 0x08000884: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000888: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800088C: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x08000890: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000894: lwc1        $f4, -0x3238($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3238);
    // 0x08000898: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800089C: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    // 0x080008A0: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
    // 0x080008A4: bne         $t3, $at, L_080008BC
    if (ctx->r11 != ctx->r1) {
        // 0x080008A8: lui         $at, 0x438C
        ctx->r1 = S32(0X438C << 16);
            goto L_080008BC;
    }
    // 0x080008A8: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x080008AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080008B0: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080008B4: b           L_08000B50
    // 0x080008B8: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
        goto L_08000B50;
    // 0x080008B8: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
L_080008BC:
    // 0x080008BC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x080008C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080008C4: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x080008C8: b           L_08000B50
    // 0x080008CC: swc1        $f16, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f16.u32l;
        goto L_08000B50;
    // 0x080008CC: swc1        $f16, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f16.u32l;
L_080008D0:
    // 0x080008D0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x080008D4: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x080008D8: lhu         $v0, 0x98($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X98);
    // 0x080008DC: bne         $v0, $zero, L_08000908
    if (ctx->r2 != 0) {
        // 0x080008E0: nop
    
            goto L_08000908;
    }
    // 0x080008E0: nop

    // 0x080008E4: lwc1        $f18, 0x194($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X194);
    // 0x080008E8: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x080008EC: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x080008F0: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x080008F4: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x080008F8: lwc1        $f6, 0x198($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X198);
    // 0x080008FC: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x08000900: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08000904: lhu         $v0, 0x98($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X98);
L_08000908:
    // 0x08000908: beql        $v0, $zero, L_08000B54
    if (ctx->r2 == 0) {
        // 0x0800090C: lhu         $t2, 0x8A($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B54;
    }
    goto skip_7;
    // 0x0800090C: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    skip_7:
    // 0x08000910: lhu         $t1, 0x8A($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000914: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000918: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800091C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x08000920: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x08000924: bgez        $t1, L_0800093C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000928: cvt.d.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
            goto L_0800093C;
    }
    // 0x08000928: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x0800092C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000930: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000934: nop

    // 0x08000938: add.d       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f4.d + ctx->f8.d;
L_0800093C:
    // 0x0800093C: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x08000940: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000944: nop

    // 0x08000948: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x0800094C: nop

    // 0x08000950: bc1fl       L_08000B54
    if (!c1cs) {
        // 0x08000954: lhu         $t2, 0x8A($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B54;
    }
    goto skip_8;
    // 0x08000954: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    skip_8:
    // 0x08000958: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x0800095C: b           L_08000B50
    // 0x08000960: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08000B50;
    // 0x08000960: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08000964:
    // 0x08000964: lwc1        $f18, 0x194($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X194);
    // 0x08000968: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x0800096C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000970: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08000974: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x08000978: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x0800097C: lwc1        $f6, 0x198($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X198);
    // 0x08000980: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000984: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x08000988: lh          $t9, 0x4A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4A);
    // 0x0800098C: lh          $t6, 0x4E($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4E);
    // 0x08000990: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x08000994: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08000998: sh          $t5, 0x4A($v1)
    MEM_H(0X4A, ctx->r3) = ctx->r13;
    // 0x0800099C: sh          $t7, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r15;
    // 0x080009A0: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x080009A4: slti        $at, $t8, 0x16
    ctx->r1 = SIGNED(ctx->r24) < 0X16 ? 1 : 0;
    // 0x080009A8: bnel        $at, $zero, L_08000B54
    if (ctx->r1 != 0) {
        // 0x080009AC: lhu         $t2, 0x8A($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X8A);
            goto L_08000B54;
    }
    goto skip_9;
    // 0x080009AC: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    skip_9:
    // 0x080009B0: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x080009B4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009B8: addiu       $t9, $t9, 0x3F14
    ctx->r25 = ADD32(ctx->r25, 0X3F14);
    // 0x080009BC: sb          $zero, 0x64($t1)
    MEM_B(0X64, ctx->r9) = 0;
    // 0x080009C0: lw          $t3, -0x39DC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39DC);
    // 0x080009C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080009C8: jalr        $t9
    // 0x080009CC: sb          $t2, 0xD0($t3)
    MEM_B(0XD0, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080009CC: sb          $t2, 0xD0($t3)
    MEM_B(0XD0, ctx->r11) = ctx->r10;
    after_18:
    // 0x080009D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009D4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080009D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x080009DC: jalr        $t9
    // 0x080009E0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080009E0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_19:
    // 0x080009E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009E8: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080009EC: jalr        $t9
    // 0x080009F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080009F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_20:
    // 0x080009F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080009FC: jalr        $t9
    // 0x08000A00: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000A00: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_21:
    // 0x08000A04: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A08: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000A0C: jalr        $t9
    // 0x08000A10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000A10: nop

    after_22:
    // 0x08000A14: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A18: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x08000A1C: b           L_08000B50
    // 0x08000A20: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08000B50;
    // 0x08000A20: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08000A24:
    // 0x08000A24: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A28: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000A2C: jalr        $t9
    // 0x08000A30: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000A30: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_23:
    // 0x08000A34: beq         $v0, $zero, L_08000B50
    if (ctx->r2 == 0) {
        // 0x08000A38: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000B50;
    }
    // 0x08000A38: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A3C: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000A40: jalr        $t9
    // 0x08000A44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000A44: nop

    after_24:
    // 0x08000A48: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A4C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000A50: jalr        $t9
    // 0x08000A54: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08000A54: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_25:
    // 0x08000A58: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000A5C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x08000A60: b           L_08000B50
    // 0x08000A64: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08000B50;
    // 0x08000A64: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08000A68:
    // 0x08000A68: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000A6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000A70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A74: bne         $t6, $at, L_08000AA8
    if (ctx->r14 != ctx->r1) {
        // 0x08000A78: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08000AA8;
    }
    // 0x08000A78: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000A7C: jalr        $t9
    // 0x08000A80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000A80: nop

    after_26:
    // 0x08000A84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A88: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x08000A8C: jalr        $t9
    // 0x08000A90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000A90: nop

    after_27:
    // 0x08000A94: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A98: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000A9C: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x08000AA0: jalr        $t9
    // 0x08000AA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000AA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
L_08000AA8:
    // 0x08000AA8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000AAC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000AB4: nop

    after_29:
    // 0x08000AB8: bne         $v0, $zero, L_08000B50
    if (ctx->r2 != 0) {
        // 0x08000ABC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000B50;
    }
    // 0x08000ABC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AC0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000AC4: jalr        $t9
    // 0x08000AC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000AC8: nop

    after_30:
    // 0x08000ACC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AD0: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x08000AD4: jalr        $t9
    // 0x08000AD8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000AD8: nop

    after_31:
    // 0x08000ADC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000AE0: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000AE4: jalr        $t9
    // 0x08000AE8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08000AE8: nop

    after_32:
    // 0x08000AEC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000AF0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08000AF4: b           L_08000B50
    // 0x08000AF8: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08000B50;
    // 0x08000AF8: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000AFC:
    // 0x08000AFC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B00: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000B04: jalr        $t9
    // 0x08000B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08000B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_33:
    // 0x08000B0C: beq         $v0, $zero, L_08000B50
    if (ctx->r2 == 0) {
        // 0x08000B10: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_08000B50;
    }
    // 0x08000B10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08000B14: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000B18: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000B1C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000B20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B24: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000B28: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08000B2C: jalr        $t9
    // 0x08000B30: sb          $t8, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08000B30: sb          $t8, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r24;
    after_34:
    // 0x08000B34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B38: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000B3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X240) << 16);
    // 0x08000B44: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x08000B48: jalr        $t9
    // 0x08000B4C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08000B4C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X240));
    after_35:
L_08000B50:
    // 0x08000B50: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
L_08000B54:
    // 0x08000B54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B58: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000B5C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000B60: sh          $t3, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r11;
    // 0x08000B64: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x08000B68: beq         $a2, $zero, L_08000B78
    if (ctx->r6 == 0) {
        // 0x08000B6C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_08000B78;
    }
    // 0x08000B6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000B70: jalr        $t9
    // 0x08000B74: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08000B74: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_36:
L_08000B78:
    // 0x08000B78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000B7C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B80: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000B84: jr          $ra
    // 0x08000B88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08000B88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08001A4C_71D4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A58: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001A5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001A60: jalr        $t9
    // 0x08001A64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001A68: bne         $v0, $zero, L_08001A90
    if (ctx->r2 != 0) {
        // 0x08001A6C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001A90;
    }
    // 0x08001A6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A70: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001A74: jalr        $t9
    // 0x08001A78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001A7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A80: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001A84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001A88: jalr        $t9
    // 0x08001A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_08001A90:
    // 0x08001A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A98: jr          $ra
    // 0x08001A9C: nop

    TRACE_RETURN()
    return;
    // 0x08001A9C: nop

;}
RECOMP_FUNC void func_080014DC_71CF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080014E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080014E8: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x080014EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080014F0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080014F4: bne         $t6, $at, L_08001514
    if (ctx->r14 != ctx->r1) {
        // 0x080014F8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001514;
    }
    // 0x080014F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014FC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08001500: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x08001504: ori         $at, $zero, 0xC00F
    ctx->r1 = 0 | 0XC00F;
    // 0x08001508: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x0800150C: lhu         $t8, -0x4F86($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X4F86);
    // 0x08001510: bne         $t8, $at, L_0800155C
    if (ctx->r24 != ctx->r1) {
        // 0x08001514: addiu       $t9, $t9, 0x1B48
        ctx->r25 = ADD32(ctx->r25, 0X1B48);
            goto L_0800155C;
    }
L_08001514:
    // 0x08001514: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08001518: jalr        $t9
    // 0x0800151C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800151C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001520: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001524: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08001528: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800152C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001530: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08001534: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001538: addiu       $a3, $a3, 0x38B0
    ctx->r7 = ADD32(ctx->r7, 0X38B0);
    // 0x0800153C: addiu       $a2, $a2, 0x18B0
    ctx->r6 = ADD32(ctx->r6, 0X18B0);
    // 0x08001540: jalr        $t9
    // 0x08001544: addiu       $a1, $a1, 0x28B0
    ctx->r5 = ADD32(ctx->r5, 0X28B0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001544: addiu       $a1, $a1, 0x28B0
    ctx->r5 = ADD32(ctx->r5, 0X28B0);
    after_1:
    // 0x08001548: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800154C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001550: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X156C) << 16);
    // 0x08001554: jalr        $t9
    // 0x08001558: addiu       $a0, $a0, 0x156C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X156C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001558: addiu       $a0, $a0, 0x156C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X156C));
    after_2:
L_0800155C:
    // 0x0800155C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001564: jr          $ra
    // 0x08001568: nop

    TRACE_RETURN()
    return;
    // 0x08001568: nop

;}
RECOMP_FUNC void func_08000230_71BCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000234: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800023C: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000240: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000244: jalr        $t9
    // 0x08000248: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000248: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800024C: bne         $v0, $zero, L_08000274
    if (ctx->r2 != 0) {
        // 0x08000250: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000274;
    }
    // 0x08000250: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000254: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000258: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x0800025C: jalr        $t9
    // 0x08000260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x08000264: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000268: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800026C: jalr        $t9
    // 0x08000270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_08000274:
    // 0x08000274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800027C: jr          $ra
    // 0x08000280: nop

    TRACE_RETURN()
    return;
    // 0x08000280: nop

;}
RECOMP_FUNC void func_08001B28_71D5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B34: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001B38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B3C: jalr        $t9
    // 0x08001B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001B44: bne         $v0, $zero, L_08001B6C
    if (ctx->r2 != 0) {
        // 0x08001B48: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001B6C;
    }
    // 0x08001B48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B4C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001B50: jalr        $t9
    // 0x08001B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001B58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B5C: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001B60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001B64: jalr        $t9
    // 0x08001B68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_08001B6C:
    // 0x08001B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B74: jr          $ra
    // 0x08001B78: nop

    TRACE_RETURN()
    return;
    // 0x08001B78: nop

;}
RECOMP_FUNC void func_08001398_71CE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800139C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080013A4: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080013A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080013AC: jalr        $t9
    // 0x080013B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080013B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013B8: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080013BC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080013C0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080013C4: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x080013C8: addiu       $a3, $a3, 0x4090
    ctx->r7 = ADD32(ctx->r7, 0X4090);
    // 0x080013CC: addiu       $a2, $a2, 0x3090
    ctx->r6 = ADD32(ctx->r6, 0X3090);
    // 0x080013D0: addiu       $a1, $a1, 0x2090
    ctx->r5 = ADD32(ctx->r5, 0X2090);
    // 0x080013D4: jalr        $t9
    // 0x080013D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080013DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1400) << 16);
    // 0x080013E8: jalr        $t9
    // 0x080013EC: addiu       $a0, $a0, 0x1400
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1400));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080013EC: addiu       $a0, $a0, 0x1400
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1400));
    after_2:
    // 0x080013F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013F8: jr          $ra
    // 0x080013FC: nop

    TRACE_RETURN()
    return;
    // 0x080013FC: nop

;}
RECOMP_FUNC void func_080001C8_71BC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001D4: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001DC: jalr        $t9
    // 0x080001E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080001E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001E8: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080001EC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080001F0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080001F4: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x080001F8: addiu       $a3, $a3, 0x35B0
    ctx->r7 = ADD32(ctx->r7, 0X35B0);
    // 0x080001FC: addiu       $a2, $a2, 0x45B0
    ctx->r6 = ADD32(ctx->r6, 0X45B0);
    // 0x08000200: addiu       $a1, $a1, 0x25B0
    ctx->r5 = ADD32(ctx->r5, 0X25B0);
    // 0x08000204: jalr        $t9
    // 0x08000208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800020C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000210: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000214: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X230) << 16);
    // 0x08000218: jalr        $t9
    // 0x0800021C: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X230));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800021C: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X230));
    after_2:
    // 0x08000220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000228: jr          $ra
    // 0x0800022C: nop

    TRACE_RETURN()
    return;
    // 0x0800022C: nop

;}
RECOMP_FUNC void func_08000E44_71C8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000E50: jal         0x08000860
    // 0x08000E54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_08000860_71C2E0(rdram, ctx);
        goto after_0;
    // 0x08000E54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000E58: bne         $v0, $zero, L_08000ED0
    if (ctx->r2 != 0) {
        // 0x08000E5C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000ED0;
    }
    // 0x08000E5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000E60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E64: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000E68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000E6C: jalr        $t9
    // 0x08000E70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08000E74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000E78: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08000E7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E80: lh          $t6, 0xD8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD8);
    // 0x08000E84: lh          $t8, 0xDA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XDA);
    // 0x08000E88: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08000E8C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000E90: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08000E94: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x08000E98: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000E9C: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x08000EA0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000EA4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000EA8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000EAC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08000EB0: jalr        $t9
    // 0x08000EB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000EB4: nop

    after_2:
    // 0x08000EB8: bne         $v0, $zero, L_08000ED0
    if (ctx->r2 != 0) {
        // 0x08000EBC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(50, 0XEE0) << 16);
            goto L_08000ED0;
    }
    // 0x08000EBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XEE0) << 16);
    // 0x08000EC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EC8: jalr        $t9
    // 0x08000ECC: addiu       $a0, $a0, 0xEE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XEE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000ECC: addiu       $a0, $a0, 0xEE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XEE0));
    after_3:
L_08000ED0:
    // 0x08000ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000ED8: jr          $ra
    // 0x08000EDC: nop

    TRACE_RETURN()
    return;
    // 0x08000EDC: nop

;}
RECOMP_FUNC void func_080003A8_71BE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003B4: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x080003B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080003BC: jalr        $t9
    // 0x080003C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080003C4: bne         $v0, $zero, L_080003EC
    if (ctx->r2 != 0) {
        // 0x080003C8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080003EC;
    }
    // 0x080003C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080003CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003D0: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080003D4: jalr        $t9
    // 0x080003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x080003DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003E0: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080003E4: jalr        $t9
    // 0x080003E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_080003EC:
    // 0x080003EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003F4: jr          $ra
    // 0x080003F8: nop

    TRACE_RETURN()
    return;
    // 0x080003F8: nop

;}
RECOMP_FUNC void func_080000C0_71BB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000CC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080000D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080000DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080000E0: jr          $ra
    // 0x080000E4: nop

    TRACE_RETURN()
    return;
    // 0x080000E4: nop

;}
RECOMP_FUNC void func_08001908_71D388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800190C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001914: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08001918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800191C: jalr        $t9
    // 0x08001920: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001920: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001924: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001928: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x0800192C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001930: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001934: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08001938: addiu       $a3, $a3, 0x6B10
    ctx->r7 = ADD32(ctx->r7, 0X6B10);
    // 0x0800193C: addiu       $a2, $a2, 0x5B10
    ctx->r6 = ADD32(ctx->r6, 0X5B10);
    // 0x08001940: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x08001944: jalr        $t9
    // 0x08001948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800194C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001950: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001954: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1970) << 16);
    // 0x08001958: jalr        $t9
    // 0x0800195C: addiu       $a0, $a0, 0x1970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1970));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800195C: addiu       $a0, $a0, 0x1970
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1970));
    after_2:
    // 0x08001960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001968: jr          $ra
    // 0x0800196C: nop

    TRACE_RETURN()
    return;
    // 0x0800196C: nop

;}
RECOMP_FUNC void func_08001B7C_71D5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B88: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08001B8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B90: jalr        $t9
    // 0x08001B94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001B98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B9C: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08001BA0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001BA4: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001BA8: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08001BAC: addiu       $a3, $a3, 0x31F0
    ctx->r7 = ADD32(ctx->r7, 0X31F0);
    // 0x08001BB0: addiu       $a2, $a2, 0x41F0
    ctx->r6 = ADD32(ctx->r6, 0X41F0);
    // 0x08001BB4: addiu       $a1, $a1, 0x21F0
    ctx->r5 = ADD32(ctx->r5, 0X21F0);
    // 0x08001BB8: jalr        $t9
    // 0x08001BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001BC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X18B4) << 16);
    // 0x08001BCC: jalr        $t9
    // 0x08001BD0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X18B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BD0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X18B4));
    after_2:
    // 0x08001BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BDC: jr          $ra
    // 0x08001BE0: nop

    TRACE_RETURN()
    return;
    // 0x08001BE0: nop

;}
RECOMP_FUNC void func_08000EE0_71C960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000EE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000EEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000EF0: jal         0x08000860
    // 0x08000EF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08000860_71C2E0(rdram, ctx);
        goto after_0;
    // 0x08000EF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000EF8: bne         $v0, $zero, L_08000F80
    if (ctx->r2 != 0) {
        // 0x08000EFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000F80;
    }
    // 0x08000EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F00: lhu         $t6, 0x94($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X94);
    // 0x08000F04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000F0C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08000F10: beq         $t7, $zero, L_08000F24
    if (ctx->r15 == 0) {
        // 0x08000F14: addiu       $t9, $t9, 0x4D50
        ctx->r25 = ADD32(ctx->r25, 0X4D50);
            goto L_08000F24;
    }
    // 0x08000F14: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000F18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F1C: nop

    // 0x08000F20: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_08000F24:
    // 0x08000F24: jalr        $t9
    // 0x08000F28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x08000F2C: lh          $t8, 0xD8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD8);
    // 0x08000F30: lh          $t0, 0xDA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XDA);
    // 0x08000F34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08000F3C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08000F40: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08000F44: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F4C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x08000F50: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000F54: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000F58: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F60: nop

    after_2:
    // 0x08000F64: bne         $v0, $zero, L_08000F80
    if (ctx->r2 != 0) {
        // 0x08000F68: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(50, 0XAB0) << 16);
            goto L_08000F80;
    }
    // 0x08000F68: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XAB0) << 16);
    // 0x08000F6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F74: jalr        $t9
    // 0x08000F78: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XAB0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F78: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XAB0));
    after_3:
    // 0x08000F7C: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_08000F80:
    // 0x08000F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000F88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F8C: jr          $ra
    // 0x08000F90: nop

    TRACE_RETURN()
    return;
    // 0x08000F90: nop

;}
RECOMP_FUNC void func_08001BE4_71D664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BF0: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BF8: jalr        $t9
    // 0x08001BFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001C00: bne         $v0, $zero, L_08001C28
    if (ctx->r2 != 0) {
        // 0x08001C04: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001C28;
    }
    // 0x08001C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C08: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001C0C: jalr        $t9
    // 0x08001C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001C14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C18: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001C1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001C20: jalr        $t9
    // 0x08001C24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_08001C28:
    // 0x08001C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C30: jr          $ra
    // 0x08001C34: nop

    TRACE_RETURN()
    return;
    // 0x08001C34: nop

;}
RECOMP_FUNC void func_08000150_71BBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000158: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800015C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x08000160: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000164: beq         $v0, $zero, L_08000190
    if (ctx->r2 == 0) {
        // 0x08000168: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_08000190;
    }
    // 0x08000168: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x0800016C: bne         $t6, $at, L_08000190
    if (ctx->r14 != ctx->r1) {
        // 0x08000170: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_08000190;
    }
    // 0x08000170: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x08000174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000178: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x0800017C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08000180: jalr        $t9
    // 0x08000184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000188: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800018C: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
L_08000190:
    // 0x08000190: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000194: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000198: jalr        $t9
    // 0x0800019C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800019C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x080001A0: bne         $v0, $zero, L_080001B8
    if (ctx->r2 != 0) {
        // 0x080001A4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080001B8;
    }
    // 0x080001A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080001A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001AC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080001B0: jalr        $t9
    // 0x080001B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001B4: nop

    after_2:
L_080001B8:
    // 0x080001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001C0: jr          $ra
    // 0x080001C4: nop

    TRACE_RETURN()
    return;
    // 0x080001C4: nop

;}
RECOMP_FUNC void func_08000AB0_71C530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000AB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000ABC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000AC0: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x08000AC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AC8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000ACC: beq         $v0, $zero, L_08000B40
    if (ctx->r2 == 0) {
        // 0x08000AD0: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_08000B40;
    }
    // 0x08000AD0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08000AD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000AD8: bne         $t6, $at, L_08000B14
    if (ctx->r14 != ctx->r1) {
        // 0x08000ADC: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_08000B14;
    }
    // 0x08000ADC: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x08000AE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AE4: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08000AE8: jalr        $t9
    // 0x08000AEC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AEC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x08000AF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AF4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000AF8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000AFC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000B00: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x08000B04: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B0C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08000B10: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_08000B14:
    // 0x08000B14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B18: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000B1C: jalr        $t9
    // 0x08000B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000B24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B28: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B30: jalr        $t9
    // 0x08000B34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x08000B38: b           L_08000C14
    // 0x08000B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000C14;
    // 0x08000B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000B40:
    // 0x08000B40: jal         0x08000860
    // 0x08000B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000860_71C2E0(rdram, ctx);
        goto after_4;
    // 0x08000B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000B48: bne         $v0, $zero, L_08000C10
    if (ctx->r2 != 0) {
        // 0x08000B4C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000C10;
    }
    // 0x08000B4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B50: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000B54: jalr        $t9
    // 0x08000B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x08000B5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B60: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B68: jalr        $t9
    // 0x08000B6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000B6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x08000B70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000B74: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000B78: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000B7C: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000B80: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000B84: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000B88: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(50, 0X1D4C) << 16);
    // 0x08000B8C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000B90: lwc1        $f16, 0x1D4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(50, 0X1D4C));
    // 0x08000B94: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x08000B98: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000B9C: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000BA0: nop

    // 0x08000BA4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000BA8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000BAC: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x08000BB0: nop

    // 0x08000BB4: bc1f        L_08000C10
    if (!c1cs) {
        // 0x08000BB8: nop
    
            goto L_08000C10;
    }
    // 0x08000BB8: nop

    // 0x08000BBC: sh          $t8, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r24;
    // 0x08000BC0: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000BC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BC8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000BCC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08000BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000BD8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000BDC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x08000BE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000BE4: sh          $t1, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r9;
    // 0x08000BE8: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000BEC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x08000BF0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x08000BF4: jalr        $t9
    // 0x08000BF8: sh          $t3, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000BF8: sh          $t3, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r11;
    after_7:
    // 0x08000BFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C00: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C04: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XC24) << 16);
    // 0x08000C08: jalr        $t9
    // 0x08000C0C: addiu       $a0, $a0, 0xC24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XC24));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000C0C: addiu       $a0, $a0, 0xC24
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XC24));
    after_8:
L_08000C10:
    // 0x08000C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000C14:
    // 0x08000C14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000C18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000C1C: jr          $ra
    // 0x08000C20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000C20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08001AA0_71D520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001AA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001AAC: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08001AB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001AB4: jalr        $t9
    // 0x08001AB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001ABC: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x08001AC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AC4: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08001AC8: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x08001ACC: lui         $a2, 0x900
    ctx->r6 = S32(0X900 << 16);
    // 0x08001AD0: lui         $a3, 0x900
    ctx->r7 = S32(0X900 << 16);
    // 0x08001AD4: addiu       $a3, $a3, 0x3000
    ctx->r7 = ADD32(ctx->r7, 0X3000);
    // 0x08001AD8: addiu       $a2, $a2, 0x2000
    ctx->r6 = ADD32(ctx->r6, 0X2000);
    // 0x08001ADC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001AE0: jalr        $t9
    // 0x08001AE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x08001AE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AEC: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08001AF0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001AF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001AF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001AFC: jalr        $t9
    // 0x08001B00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001B04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B08: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1B28) << 16);
    // 0x08001B10: jalr        $t9
    // 0x08001B14: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1B28));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B14: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1B28));
    after_3:
    // 0x08001B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001B1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001B20: jr          $ra
    // 0x08001B24: nop

    TRACE_RETURN()
    return;
    // 0x08001B24: nop

;}
RECOMP_FUNC void func_080017F8_71D278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001804: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
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
    // 0x08001814: bne         $v0, $zero, L_0800183C
    if (ctx->r2 != 0) {
        // 0x08001818: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800183C;
    }
    // 0x08001818: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800181C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001820: jalr        $t9
    // 0x08001824: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001824: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001828: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800182C: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001834: jalr        $t9
    // 0x08001838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_0800183C:
    // 0x0800183C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001844: jr          $ra
    // 0x08001848: nop

    TRACE_RETURN()
    return;
    // 0x08001848: nop

;}
RECOMP_FUNC void func_08000860_71C2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000860: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800086C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x08000870: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000874: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000878: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x0800087C: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000880: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000884: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000888: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x0800088C: beq         $t8, $zero, L_080009B0
    if (ctx->r24 == 0) {
        // 0x08000890: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_080009B0;
    }
    // 0x08000890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x08000894: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000898: jalr        $t9
    // 0x0800089C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800089C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080008A0: beq         $v0, $zero, L_08000900
    if (ctx->r2 == 0) {
        // 0x080008A4: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08000900;
    }
    // 0x080008A4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x080008A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008AC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080008B0: jalr        $t9
    // 0x080008B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x080008B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080008BC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080008C0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080008C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080008C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080008CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080008D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080008D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080008D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008DC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080008E0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080008E4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080008E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x080008EC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080008F0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080008F4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080008F8: jalr        $t9
    // 0x080008FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008FC: nop

    after_2:
L_08000900:
    // 0x08000900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000904: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800090C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000910: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000914: sh          $t0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r8;
    // 0x08000918: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x0800091C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000920: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08000924: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x08000928: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x0800092C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000930: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08000934: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000938: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x0800093C: jalr        $v0
    // 0x08000940: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000940: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
    // 0x08000944: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08000948: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800094C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000950: addiu       $a0, $zero, 0x358
    ctx->r4 = ADD32(0, 0X358);
    // 0x08000954: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08000958: jalr        $v0
    // 0x0800095C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0800095C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
    // 0x08000960: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000964: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800096C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000970: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x08000974: jalr        $t9
    // 0x08000978: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000978: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x0800097C: jal         0x0800064C
    // 0x08000980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_0800064C_71C0CC(rdram, ctx);
        goto after_6;
    // 0x08000980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08000984: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000988: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800098C: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x08000990: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000994: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XF94) << 16);
    // 0x08000998: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x0800099C: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080009A0: jalr        $t9
    // 0x080009A4: addiu       $a0, $a0, 0xF94
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XF94));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080009A4: addiu       $a0, $a0, 0xF94
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XF94));
    after_7:
    // 0x080009A8: b           L_080009B0
    // 0x080009AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_080009B0;
    // 0x080009AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_080009B0:
    // 0x080009B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080009B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080009B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080009BC: jr          $ra
    // 0x080009C0: nop

    TRACE_RETURN()
    return;
    // 0x080009C0: nop

;}
RECOMP_FUNC void func_080002EC_71BD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002F8: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x080002FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000300: jalr        $t9
    // 0x08000304: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000304: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000308: bne         $v0, $zero, L_08000330
    if (ctx->r2 != 0) {
        // 0x0800030C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000330;
    }
    // 0x0800030C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000310: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000314: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000318: jalr        $t9
    // 0x0800031C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800031C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x08000320: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000324: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000328: jalr        $t9
    // 0x0800032C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800032C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_08000330:
    // 0x08000330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000338: jr          $ra
    // 0x0800033C: nop

    TRACE_RETURN()
    return;
    // 0x0800033C: nop

;}
RECOMP_FUNC void func_080004B8_71BF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080004C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004C8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080004CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080004D0: jalr        $t9
    // 0x080004D4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004D4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x080004D8: beq         $v0, $zero, L_08000508
    if (ctx->r2 == 0) {
        // 0x080004DC: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000508;
    }
    // 0x080004DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080004E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004E8: addiu       $t6, $zero, 0x2C1
    ctx->r14 = ADD32(0, 0X2C1);
    // 0x080004EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X3FC) << 16);
    // 0x080004F4: addiu       $a0, $a0, 0x3FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X3FC));
    // 0x080004F8: jalr        $t9
    // 0x080004FC: sh          $t6, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004FC: sh          $t6, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r14;
    after_1:
    // 0x08000500: b           L_08000518
    // 0x08000504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000518;
    // 0x08000504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000508:
    // 0x08000508: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800050C: jalr        $t9
    // 0x08000510: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000510: nop

    after_2:
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
RECOMP_FUNC void func_080009C4_71C444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080009C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080009CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080009D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080009D4: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x080009D8: lui         $t1, 0x2E0
    ctx->r9 = S32(0X2E0 << 16);
    // 0x080009DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009E0: bne         $t6, $zero, L_080009F8
    if (ctx->r14 != 0) {
        // 0x080009E4: ori         $t1, $t1, 0x761
        ctx->r9 = ctx->r9 | 0X761;
            goto L_080009F8;
    }
    // 0x080009E4: ori         $t1, $t1, 0x761
    ctx->r9 = ctx->r9 | 0X761;
    // 0x080009E8: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(50, 0X1C78) << 16);
    // 0x080009EC: addiu       $t7, $t7, 0x1C78
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(50, 0X1C78));
    // 0x080009F0: b           L_08000A24
    // 0x080009F4: sw          $t7, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r15;
        goto L_08000A24;
    // 0x080009F4: sw          $t7, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r15;
L_080009F8:
    // 0x080009F8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080009FC: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x08000A00: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x08000A04: ori         $at, $zero, 0xC00F
    ctx->r1 = 0 | 0XC00F;
    // 0x08000A08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x08000A0C: lhu         $t9, -0x4F86($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4F86);
    // 0x08000A10: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(50, 0X1C50) << 16);
    // 0x08000A14: addiu       $t0, $t0, 0x1C50
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(50, 0X1C50));
    // 0x08000A18: bnel        $t9, $at, L_08000AA0
    if (ctx->r25 != ctx->r1) {
        // 0x08000A1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000AA0;
    }
    goto skip_0;
    // 0x08000A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000A20: sw          $t0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r8;
L_08000A24:
    // 0x08000A24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A28: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000A2C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000A30: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08000A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000A3C: jalr        $t9
    // 0x08000A40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000A44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A48: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A50: jalr        $t9
    // 0x08000A54: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A54: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_1:
    // 0x08000A58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A5C: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08000A60: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000A64: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08000A68: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08000A6C: addiu       $a3, $a3, 0x4E70
    ctx->r7 = ADD32(ctx->r7, 0X4E70);
    // 0x08000A70: addiu       $a2, $a2, 0x2E70
    ctx->r6 = ADD32(ctx->r6, 0X2E70);
    // 0x08000A74: addiu       $a1, $a1, 0x3E70
    ctx->r5 = ADD32(ctx->r5, 0X3E70);
    // 0x08000A78: jalr        $t9
    // 0x08000A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000A80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A84: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x08000A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XAB0) << 16);
    // 0x08000A90: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x08000A94: jalr        $t9
    // 0x08000A98: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XAB0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A98: addiu       $a0, $a0, 0xAB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XAB0));
    after_3:
    // 0x08000A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000AA0:
    // 0x08000AA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000AA8: jr          $ra
    // 0x08000AAC: nop

    TRACE_RETURN()
    return;
    // 0x08000AAC: nop

;}
RECOMP_FUNC void func_080018B4_71D334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018C0: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x080018C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080018C8: jalr        $t9
    // 0x080018CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080018D0: bne         $v0, $zero, L_080018F8
    if (ctx->r2 != 0) {
        // 0x080018D4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080018F8;
    }
    // 0x080018D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018D8: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080018DC: jalr        $t9
    // 0x080018E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080018E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018E8: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080018EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080018F0: jalr        $t9
    // 0x080018F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_080018F8:
    // 0x080018F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001900: jr          $ra
    // 0x08001904: nop

    TRACE_RETURN()
    return;
    // 0x08001904: nop

;}
RECOMP_FUNC void func_08000340_71BDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000344: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800034C: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08000350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000354: jalr        $t9
    // 0x08000358: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000358: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800035C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000360: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08000364: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000368: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x0800036C: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08000370: addiu       $a3, $a3, 0x1B10
    ctx->r7 = ADD32(ctx->r7, 0X1B10);
    // 0x08000374: addiu       $a2, $a2, 0x2B10
    ctx->r6 = ADD32(ctx->r6, 0X2B10);
    // 0x08000378: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x0800037C: jalr        $t9
    // 0x08000380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000384: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000388: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800038C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X3A8) << 16);
    // 0x08000390: jalr        $t9
    // 0x08000394: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X3A8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000394: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X3A8));
    after_2:
    // 0x08000398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800039C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003A0: jr          $ra
    // 0x080003A4: nop

    TRACE_RETURN()
    return;
    // 0x080003A4: nop

;}
RECOMP_FUNC void func_0800184C_71D2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800184C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001858: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x0800185C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001860: jalr        $t9
    // 0x08001864: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001864: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001868: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800186C: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08001870: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001874: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001878: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x0800187C: addiu       $a3, $a3, 0x29A0
    ctx->r7 = ADD32(ctx->r7, 0X29A0);
    // 0x08001880: addiu       $a2, $a2, 0x39A0
    ctx->r6 = ADD32(ctx->r6, 0X39A0);
    // 0x08001884: addiu       $a1, $a1, 0x19A0
    ctx->r5 = ADD32(ctx->r5, 0X19A0);
    // 0x08001888: jalr        $t9
    // 0x0800188C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800188C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001890: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X18B4) << 16);
    // 0x0800189C: jalr        $t9
    // 0x080018A0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X18B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018A0: addiu       $a0, $a0, 0x18B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X18B4));
    after_2:
    // 0x080018A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018AC: jr          $ra
    // 0x080018B0: nop

    TRACE_RETURN()
    return;
    // 0x080018B0: nop

;}
RECOMP_FUNC void func_08000284_71BD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000288: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800028C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000290: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08000294: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000298: jalr        $t9
    // 0x0800029C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800029C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080002A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002A4: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080002A8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080002AC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080002B0: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x080002B4: addiu       $a3, $a3, 0x3DB0
    ctx->r7 = ADD32(ctx->r7, 0X3DB0);
    // 0x080002B8: addiu       $a2, $a2, 0x2DB0
    ctx->r6 = ADD32(ctx->r6, 0X2DB0);
    // 0x080002BC: addiu       $a1, $a1, 0x1DB0
    ctx->r5 = ADD32(ctx->r5, 0X1DB0);
    // 0x080002C0: jalr        $t9
    // 0x080002C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080002C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X2EC) << 16);
    // 0x080002D4: jalr        $t9
    // 0x080002D8: addiu       $a0, $a0, 0x2EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X2EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002D8: addiu       $a0, $a0, 0x2EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X2EC));
    after_2:
    // 0x080002DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002E4: jr          $ra
    // 0x080002E8: nop

    TRACE_RETURN()
    return;
    // 0x080002E8: nop

;}
RECOMP_FUNC void func_08000590_71C010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000594: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800059C: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080005A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080005A4: jalr        $t9
    // 0x080005A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080005AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005B0: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080005B4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080005B8: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080005BC: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x080005C0: addiu       $a3, $a3, 0x3D40
    ctx->r7 = ADD32(ctx->r7, 0X3D40);
    // 0x080005C4: addiu       $a2, $a2, 0x2D40
    ctx->r6 = ADD32(ctx->r6, 0X2D40);
    // 0x080005C8: addiu       $a1, $a1, 0x1D40
    ctx->r5 = ADD32(ctx->r5, 0X1D40);
    // 0x080005CC: jalr        $t9
    // 0x080005D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080005D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X5F8) << 16);
    // 0x080005E0: jalr        $t9
    // 0x080005E4: addiu       $a0, $a0, 0x5F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X5F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080005E4: addiu       $a0, $a0, 0x5F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X5F8));
    after_2:
    // 0x080005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005F0: jr          $ra
    // 0x080005F4: nop

    TRACE_RETURN()
    return;
    // 0x080005F4: nop

;}
RECOMP_FUNC void func_08000C24_71C6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000C28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000C2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000C30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C34: jal         0x08000860
    // 0x08000C38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_08000860_71C2E0(rdram, ctx);
        goto after_0;
    // 0x08000C38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000C3C: bnel        $v0, $zero, L_08000E34
    if (ctx->r2 != 0) {
        // 0x08000C40: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000E34;
    }
    goto skip_0;
    // 0x08000C40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x08000C44: lhu         $v0, 0xDC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XDC);
    // 0x08000C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C50: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000C54: beq         $v0, $zero, L_08000DE4
    if (ctx->r2 == 0) {
        // 0x08000C58: sh          $t6, 0xDC($s0)
        MEM_H(0XDC, ctx->r16) = ctx->r14;
            goto L_08000DE4;
    }
    // 0x08000C58: sh          $t6, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r14;
    // 0x08000C5C: lhu         $t7, 0x94($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X94);
    // 0x08000C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000C68: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x08000C6C: beq         $t8, $zero, L_08000C84
    if (ctx->r24 == 0) {
        // 0x08000C70: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_08000C84;
    }
    // 0x08000C70: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000C74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000C78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000C7C: nop

    // 0x08000C80: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_08000C84:
    // 0x08000C84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000C88: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000C8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C90: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08000C94: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000C98: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x08000C9C: jalr        $t9
    // 0x08000CA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08000CA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CA8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000CAC: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000CB0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08000CB4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08000CB8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000CBC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000CC0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000CC4: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000CC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000CCC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000CD0: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08000CD4: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000CD8: nop

    // 0x08000CDC: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000CE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08000CE4: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x08000CE8: nop

    // 0x08000CEC: bc1f        L_08000E30
    if (!c1cs) {
        // 0x08000CF0: nop
    
            goto L_08000E30;
    }
    // 0x08000CF0: nop

    // 0x08000CF4: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08000CF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000CFC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000D00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D04: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08000D08: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D14: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x08000D18: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x08000D1C: bc1fl       L_08000E34
    if (!c1cs) {
        // 0x08000D20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000E34;
    }
    goto skip_1;
    // 0x08000D20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08000D24: jalr        $t9
    // 0x08000D28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000D2C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000D30: lw          $t0, -0x3A18($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A18);
    // 0x08000D34: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000D38: addiu       $t9, $t9, -0x3310
    ctx->r25 = ADD32(ctx->r25, -0X3310);
    // 0x08000D3C: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x08000D40: jalr        $t9
    // 0x08000D44: sh          $t0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D44: sh          $t0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r8;
    after_3:
    // 0x08000D48: jal         0x0800064C
    // 0x08000D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_0800064C_71C0CC(rdram, ctx);
        goto after_4;
    // 0x08000D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000D50: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x08000D54: lui         $at, 0x60
    ctx->r1 = S32(0X60 << 16);
    // 0x08000D58: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08000D5C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D60: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08000D64: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08000D68: sh          $t3, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r11;
    // 0x08000D6C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000D70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000D74: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000D78: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08000D7C: addiu       $a0, $zero, 0x2B2
    ctx->r4 = ADD32(0, 0X2B2);
    // 0x08000D80: jalr        $t9
    // 0x08000D84: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D84: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_5:
    // 0x08000D88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D8C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000D90: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(50, 0X1298) << 16);
    // 0x08000D94: addiu       $a1, $a1, 0x1298
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(50, 0X1298));
    // 0x08000D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D9C: jalr        $t9
    // 0x08000DA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000DA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x08000DA4: beq         $v0, $zero, L_08000DC8
    if (ctx->r2 == 0) {
        // 0x08000DA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000DC8;
    }
    // 0x08000DA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000DAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DB0: addiu       $t4, $zero, 0x3B
    ctx->r12 = ADD32(0, 0X3B);
    // 0x08000DB4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000DB8: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08000DBC: jalr        $t9
    // 0x08000DC0: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000DC0: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    after_7:
    // 0x08000DC4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_08000DC8:
    // 0x08000DC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000DD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XFD4) << 16);
    // 0x08000DD4: jalr        $t9
    // 0x08000DD8: addiu       $a0, $a0, 0xFD4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XFD4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000DD8: addiu       $a0, $a0, 0xFD4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XFD4));
    after_8:
    // 0x08000DDC: b           L_08000E34
    // 0x08000DE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000E34;
    // 0x08000DE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000DE4:
    // 0x08000DE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000DE8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DEC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000DF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000DF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000DF8: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08000DFC: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08000E00: jalr        $t9
    // 0x08000E04: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E04: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_9:
    // 0x08000E08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E0C: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E14: jalr        $t9
    // 0x08000E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x08000E1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XE44) << 16);
    // 0x08000E28: jalr        $t9
    // 0x08000E2C: addiu       $a0, $a0, 0xE44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XE44));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E2C: addiu       $a0, $a0, 0xE44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XE44));
    after_11:
L_08000E30:
    // 0x08000E30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000E34:
    // 0x08000E34: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000E38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000E3C: jr          $ra
    // 0x08000E40: nop

    TRACE_RETURN()
    return;
    // 0x08000E40: nop

;}
RECOMP_FUNC void func_08001400_71CE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001404: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800140C: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001410: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001414: jalr        $t9
    // 0x08001418: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001418: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800141C: bne         $v0, $zero, L_08001444
    if (ctx->r2 != 0) {
        // 0x08001420: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001444;
    }
    // 0x08001420: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001424: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001428: jalr        $t9
    // 0x0800142C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800142C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001430: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001434: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800143C: jalr        $t9
    // 0x08001440: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001440: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_08001444:
    // 0x08001444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800144C: jr          $ra
    // 0x08001450: nop

    TRACE_RETURN()
    return;
    // 0x08001450: nop

;}
RECOMP_FUNC void func_08000524_71BFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000528: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800052C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000534: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800053C: jalr        $t9
    // 0x08000540: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000540: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x08000544: beq         $v0, $zero, L_08000574
    if (ctx->r2 == 0) {
        // 0x08000548: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000574;
    }
    // 0x08000548: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800054C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000550: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000554: addiu       $t6, $zero, 0x2BF
    ctx->r14 = ADD32(0, 0X2BF);
    // 0x08000558: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800055C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X284) << 16);
    // 0x08000560: addiu       $a0, $a0, 0x284
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X284));
    // 0x08000564: jalr        $t9
    // 0x08000568: sh          $t6, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000568: sh          $t6, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r14;
    after_1:
    // 0x0800056C: b           L_08000584
    // 0x08000570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000584;
    // 0x08000570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000574:
    // 0x08000574: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000578: jalr        $t9
    // 0x0800057C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800057C: nop

    after_2:
    // 0x08000580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000584:
    // 0x08000584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000588: jr          $ra
    // 0x0800058C: nop

    TRACE_RETURN()
    return;
    // 0x0800058C: nop

;}
RECOMP_FUNC void func_08001618_71D098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800161C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001624: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08001628: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800162C: jalr        $t9
    // 0x08001630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001634: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001638: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x0800163C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001640: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001644: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08001648: addiu       $a3, $a3, 0x4090
    ctx->r7 = ADD32(ctx->r7, 0X4090);
    // 0x0800164C: addiu       $a2, $a2, 0x3090
    ctx->r6 = ADD32(ctx->r6, 0X3090);
    // 0x08001650: addiu       $a1, $a1, 0x2090
    ctx->r5 = ADD32(ctx->r5, 0X2090);
    // 0x08001654: jalr        $t9
    // 0x08001658: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001658: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800165C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001660: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001664: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1680) << 16);
    // 0x08001668: jalr        $t9
    // 0x0800166C: addiu       $a0, $a0, 0x1680
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1680));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800166C: addiu       $a0, $a0, 0x1680
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1680));
    after_2:
    // 0x08001670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001678: jr          $ra
    // 0x0800167C: nop

    TRACE_RETURN()
    return;
    // 0x0800167C: nop

;}
RECOMP_FUNC void func_080019C4_71D444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080019C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019D0: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080019D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080019D8: jalr        $t9
    // 0x080019DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080019E0: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x080019E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019E8: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080019EC: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x080019F0: lui         $a2, 0x900
    ctx->r6 = S32(0X900 << 16);
    // 0x080019F4: lui         $a3, 0x900
    ctx->r7 = S32(0X900 << 16);
    // 0x080019F8: addiu       $a3, $a3, 0x3000
    ctx->r7 = ADD32(ctx->r7, 0X3000);
    // 0x080019FC: addiu       $a2, $a2, 0x2000
    ctx->r6 = ADD32(ctx->r6, 0X2000);
    // 0x08001A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001A04: jalr        $t9
    // 0x08001A08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x08001A0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A10: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08001A14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08001A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001A1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001A20: jalr        $t9
    // 0x08001A24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001A28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X1A4C) << 16);
    // 0x08001A34: jalr        $t9
    // 0x08001A38: addiu       $a0, $a0, 0x1A4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1A4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A38: addiu       $a0, $a0, 0x1A4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X1A4C));
    after_3:
    // 0x08001A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001A44: jr          $ra
    // 0x08001A48: nop

    TRACE_RETURN()
    return;
    // 0x08001A48: nop

;}
RECOMP_FUNC void func_080016D4_71D154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016E0: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080016E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080016E8: jalr        $t9
    // 0x080016EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080016F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016F4: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080016F8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080016FC: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08001700: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x08001704: addiu       $a3, $a3, 0x3E00
    ctx->r7 = ADD32(ctx->r7, 0X3E00);
    // 0x08001708: addiu       $a2, $a2, 0x2E00
    ctx->r6 = ADD32(ctx->r6, 0X2E00);
    // 0x0800170C: addiu       $a1, $a1, 0x1E00
    ctx->r5 = ADD32(ctx->r5, 0X1E00);
    // 0x08001710: jalr        $t9
    // 0x08001714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001718: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800171C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001720: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X173C) << 16);
    // 0x08001724: jalr        $t9
    // 0x08001728: addiu       $a0, $a0, 0x173C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X173C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001728: addiu       $a0, $a0, 0x173C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X173C));
    after_2:
    // 0x0800172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001734: jr          $ra
    // 0x08001738: nop

    TRACE_RETURN()
    return;
    // 0x08001738: nop

;}
RECOMP_FUNC void func_08000464_71BEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000468: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800046C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000470: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000478: jalr        $t9
    // 0x0800047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000480: bne         $v0, $zero, L_080004A8
    if (ctx->r2 != 0) {
        // 0x08000484: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080004A8;
    }
    // 0x08000484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000488: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800048C: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000490: jalr        $t9
    // 0x08000494: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000494: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x08000498: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800049C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080004A0: jalr        $t9
    // 0x080004A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_080004A8:
    // 0x080004A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004B0: jr          $ra
    // 0x080004B4: nop

    TRACE_RETURN()
    return;
    // 0x080004B4: nop

;}
RECOMP_FUNC void func_0800173C_71D1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800173C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001740: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001748: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x0800174C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001750: jalr        $t9
    // 0x08001754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001758: bne         $v0, $zero, L_08001780
    if (ctx->r2 != 0) {
        // 0x0800175C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001780;
    }
    // 0x0800175C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001760: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001764: jalr        $t9
    // 0x08001768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800176C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001770: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08001774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001778: jalr        $t9
    // 0x0800177C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800177C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_08001780:
    // 0x08001780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001788: jr          $ra
    // 0x0800178C: nop

    TRACE_RETURN()
    return;
    // 0x0800178C: nop

;}
RECOMP_FUNC void func_0800134C_71CDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800134C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001358: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800135C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001360: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001364: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001368: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800136C: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08001370: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001374: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001378: bne         $v0, $zero, L_08001388
    if (ctx->r2 != 0) {
        // 0x0800137C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001388;
    }
    // 0x0800137C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001380: jalr        $t9
    // 0x08001384: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001384: nop

    after_0:
L_08001388:
    // 0x08001388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800138C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001390: jr          $ra
    // 0x08001394: nop

    TRACE_RETURN()
    return;
    // 0x08001394: nop

;}
RECOMP_FUNC void func_08001970_71D3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001974: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800197C: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001984: jalr        $t9
    // 0x08001988: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001988: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800198C: bne         $v0, $zero, L_080019B4
    if (ctx->r2 != 0) {
        // 0x08001990: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080019B4;
    }
    // 0x08001990: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001994: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001998: jalr        $t9
    // 0x0800199C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800199C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080019A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019A4: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080019A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080019AC: jalr        $t9
    // 0x080019B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080019B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_080019B4:
    // 0x080019B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080019B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080019BC: jr          $ra
    // 0x080019C0: nop

    TRACE_RETURN()
    return;
    // 0x080019C0: nop

;}
RECOMP_FUNC void func_080000E8_71BB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080000F4: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x080000F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080000FC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08000100: bne         $t6, $at, L_08000120
    if (ctx->r14 != ctx->r1) {
        // 0x08000104: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000120;
    }
    // 0x08000104: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000108: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x0800010C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x08000110: ori         $at, $zero, 0xC00F
    ctx->r1 = 0 | 0XC00F;
    // 0x08000114: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x08000118: lhu         $t8, -0x4F86($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X4F86);
    // 0x0800011C: bne         $t8, $at, L_08000140
    if (ctx->r24 != ctx->r1) {
        // 0x08000120: addiu       $t9, $t9, 0x1B48
        ctx->r25 = ADD32(ctx->r25, 0X1B48);
            goto L_08000140;
    }
L_08000120:
    // 0x08000120: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x08000124: jalr        $t9
    // 0x08000128: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000128: nop

    after_0:
    // 0x0800012C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000130: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000134: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X150) << 16);
    // 0x08000138: jalr        $t9
    // 0x0800013C: addiu       $a0, $a0, 0x150
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X150));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800013C: addiu       $a0, $a0, 0x150
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X150));
    after_1:
L_08000140:
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
RECOMP_FUNC void func_08001790_71D210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001794: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800179C: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x080017A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080017A4: jalr        $t9
    // 0x080017A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080017AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017B0: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x080017B4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080017B8: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080017BC: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x080017C0: addiu       $a3, $a3, 0x3010
    ctx->r7 = ADD32(ctx->r7, 0X3010);
    // 0x080017C4: addiu       $a2, $a2, 0x4010
    ctx->r6 = ADD32(ctx->r6, 0X4010);
    // 0x080017C8: addiu       $a1, $a1, 0x2010
    ctx->r5 = ADD32(ctx->r5, 0X2010);
    // 0x080017CC: jalr        $t9
    // 0x080017D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080017D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X17F8) << 16);
    // 0x080017E0: jalr        $t9
    // 0x080017E4: addiu       $a0, $a0, 0x17F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X17F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080017E4: addiu       $a0, $a0, 0x17F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X17F8));
    after_2:
    // 0x080017E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017F0: jr          $ra
    // 0x080017F4: nop

    TRACE_RETURN()
    return;
    // 0x080017F4: nop

;}
RECOMP_FUNC void func_08000FD4_71CA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FD4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000FD8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x08000FDC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x08000FE0: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x08000FE4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x08000FE8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x08000FEC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08000FF0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08000FF4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000FF8: lhu         $t6, 0xE8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE8);
    // 0x08000FFC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08001000: bnel        $t6, $zero, L_08001170
    if (ctx->r14 != 0) {
        // 0x08001004: lhu         $v1, 0xE4($s3)
        ctx->r3 = MEM_HU(ctx->r19, 0XE4);
            goto L_08001170;
    }
    goto skip_0;
    // 0x08001004: lhu         $v1, 0xE4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XE4);
    skip_0:
    // 0x08001008: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x0800100C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001010: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001014: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x08001018: beq         $t8, $zero, L_0800116C
    if (ctx->r24 == 0) {
        // 0x0800101C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_0800116C;
    }
    // 0x0800101C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001020: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001024: jalr        $t9
    // 0x08001028: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001028: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x0800102C: beq         $v0, $zero, L_0800108C
    if (ctx->r2 == 0) {
        // 0x08001030: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800108C;
    }
    // 0x08001030: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001034: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001038: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800103C: jalr        $t9
    // 0x08001040: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001040: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x08001044: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001048: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800104C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001050: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001054: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001058: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800105C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001060: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001064: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001068: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800106C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001070: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08001074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001078: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x0800107C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001080: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001084: jalr        $t9
    // 0x08001088: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001088: nop

    after_2:
L_0800108C:
    // 0x0800108C: lhu         $v0, 0xEA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XEA);
    // 0x08001090: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08001094: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x08001098: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x0800109C: mflo        $v0
    ctx->r2 = lo;
    // 0x080010A0: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x080010A4: bne         $at, $zero, L_080010B0
    if (ctx->r1 != 0) {
        // 0x080010A8: addiu       $s1, $s1, 0x4314
        ctx->r17 = ADD32(ctx->r17, 0X4314);
            goto L_080010B0;
    }
    // 0x080010A8: addiu       $s1, $s1, 0x4314
    ctx->r17 = ADD32(ctx->r17, 0X4314);
    // 0x080010AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_080010B0:
    // 0x080010B0: beq         $v0, $zero, L_08001118
    if (ctx->r2 == 0) {
        // 0x080010B4: sll         $s0, $v0, 2
        ctx->r16 = S32(ctx->r2 << 2);
            goto L_08001118;
    }
    // 0x080010B4: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x080010B8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x080010BC: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x080010C0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x080010C4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x080010C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080010CC: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x080010D0: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x080010D4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x080010D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x080010DC: addiu       $s2, $s2, -0x2218
    ctx->r18 = ADD32(ctx->r18, -0X2218);
    // 0x080010E0: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x080010E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
L_080010E8:
    // 0x080010E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080010EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x080010F0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x080010F4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x080010F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x080010FC: jalr        $s2
    // 0x08001100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_3;
    // 0x08001100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_3:
    // 0x08001104: beq         $v0, $zero, L_08001110
    if (ctx->r2 == 0) {
        // 0x08001108: nop
    
            goto L_08001110;
    }
    // 0x08001108: nop

    // 0x0800110C: addiu       $s0, $s0, -0xCC
    ctx->r16 = ADD32(ctx->r16, -0XCC);
L_08001110:
    // 0x08001110: bnel        $s0, $zero, L_080010E8
    if (ctx->r16 != 0) {
        // 0x08001114: mfc1        $a3, $f20
        ctx->r7 = (int32_t)ctx->f20.u32l;
            goto L_080010E8;
    }
    goto skip_1;
    // 0x08001114: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    skip_1:
L_08001118:
    // 0x08001118: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x0800111C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08001120: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001124: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001128: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x0800112C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08001130: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08001134: addiu       $s1, $s1, -0x3410
    ctx->r17 = ADD32(ctx->r17, -0X3410);
    // 0x08001138: sh          $t2, 0xE8($s3)
    MEM_H(0XE8, ctx->r19) = ctx->r10;
    // 0x0800113C: addiu       $s0, $s0, -0xBE0
    ctx->r16 = ADD32(ctx->r16, -0XBE0);
    // 0x08001140: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08001144: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    // 0x08001148: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0800114C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08001150: jalr        $s0
    // 0x08001154: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08001154: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    after_4:
    // 0x08001158: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x0800115C: addiu       $a0, $zero, 0x358
    ctx->r4 = ADD32(0, 0X358);
    // 0x08001160: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08001164: jalr        $s0
    // 0x08001168: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08001168: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_5:
L_0800116C:
    // 0x0800116C: lhu         $v1, 0xE4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0XE4);
L_08001170:
    // 0x08001170: lw          $s0, 0xE0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XE0);
    // 0x08001174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001178: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x0800117C: addu        $v0, $s0, $t3
    ctx->r2 = ADD32(ctx->r16, ctx->r11);
    // 0x08001180: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x08001184: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x08001188: addiu       $t9, $t9, -0x4AA4
    ctx->r25 = ADD32(ctx->r25, -0X4AA4);
    // 0x0800118C: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x08001190: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08001194: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x08001198: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x0800119C: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080011A0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x080011A4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x080011A8: jalr        $t9
    // 0x080011AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080011AC: nop

    after_6:
    // 0x080011B0: lhu         $t4, 0xE8($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0XE8);
    // 0x080011B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080011B8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080011BC: beq         $t4, $zero, L_080011EC
    if (ctx->r12 == 0) {
        // 0x080011C0: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_080011EC;
    }
    // 0x080011C0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080011C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011C8: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x080011CC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080011D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x080011D4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x080011D8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x080011DC: jalr        $t9
    // 0x080011E0: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080011E0: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_7:
    // 0x080011E4: b           L_08001204
    // 0x080011E8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
        goto L_08001204;
    // 0x080011E8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
L_080011EC:
    // 0x080011EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011F0: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x080011F4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080011F8: jalr        $t9
    // 0x080011FC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080011FC: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_8:
    // 0x08001200: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
L_08001204:
    // 0x08001204: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08001208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800120C: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08001210: lwc1        $f4, 0x10($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08001214: sub.s       $f0, $f18, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x08001218: sub.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x0800121C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08001220: nop

    // 0x08001224: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001228: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x0800122C: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x08001230: nop

    // 0x08001234: bc1f        L_08001274
    if (!c1cs) {
        // 0x08001238: nop
    
            goto L_08001274;
    }
    // 0x08001238: nop

    // 0x0800123C: lhu         $t6, 0xE4($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0XE4);
    // 0x08001240: lhu         $t7, 0xE6($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0XE6);
    // 0x08001244: addiu       $at, $zero, 0x270F
    ctx->r1 = ADD32(0, 0X270F);
    // 0x08001248: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x0800124C: andi        $t1, $t8, 0xFFFF
    ctx->r9 = ctx->r24 & 0XFFFF;
    // 0x08001250: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x08001254: sh          $t8, 0xE4($s3)
    MEM_H(0XE4, ctx->r19) = ctx->r24;
    // 0x08001258: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x0800125C: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x08001260: bnel        $t4, $at, L_08001278
    if (ctx->r12 != ctx->r1) {
        // 0x08001264: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_08001278;
    }
    goto skip_2;
    // 0x08001264: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x08001268: lw          $t9, 0x68($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X68);
    // 0x0800126C: ori         $t5, $t9, 0x2
    ctx->r13 = ctx->r25 | 0X2;
    // 0x08001270: sw          $t5, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->r13;
L_08001274:
    // 0x08001274: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_08001278:
    // 0x08001278: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0800127C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08001280: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x08001284: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x08001288: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x0800128C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x08001290: jr          $ra
    // 0x08001294: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08001294: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08001680_71D100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001684: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800168C: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08001690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001694: jalr        $t9
    // 0x08001698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800169C: bne         $v0, $zero, L_080016C4
    if (ctx->r2 != 0) {
        // 0x080016A0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080016C4;
    }
    // 0x080016A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016A4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080016A8: jalr        $t9
    // 0x080016AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080016B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016B4: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080016B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080016BC: jalr        $t9
    // 0x080016C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080016C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_080016C4:
    // 0x080016C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080016C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080016CC: jr          $ra
    // 0x080016D0: nop

    TRACE_RETURN()
    return;
    // 0x080016D0: nop

;}
RECOMP_FUNC void func_0800156C_71CFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800156C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001574: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001578: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800157C: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x08001580: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001584: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001588: beq         $v0, $zero, L_080015CC
    if (ctx->r2 == 0) {
        // 0x0800158C: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_080015CC;
    }
    // 0x0800158C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08001590: bne         $t6, $at, L_080015CC
    if (ctx->r14 != ctx->r1) {
        // 0x08001594: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_080015CC;
    }
    // 0x08001594: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x08001598: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800159C: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x080015A0: jalr        $t9
    // 0x080015A4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015A4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x080015A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015AC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080015B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080015B4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080015B8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x080015BC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080015C0: jalr        $t9
    // 0x080015C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x080015C8: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_080015CC:
    // 0x080015CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015D0: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x080015D4: jalr        $t9
    // 0x080015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080015DC: bne         $v0, $zero, L_08001604
    if (ctx->r2 != 0) {
        // 0x080015E0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001604;
    }
    // 0x080015E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015E4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080015E8: jalr        $t9
    // 0x080015EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080015F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015F4: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x080015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015FC: jalr        $t9
    // 0x08001600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_08001604:
    // 0x08001604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800160C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001610: jr          $ra
    // 0x08001614: nop

    TRACE_RETURN()
    return;
    // 0x08001614: nop

;}
RECOMP_FUNC void func_0800064C_71C0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800064C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x08000650: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x08000654: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x08000658: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x0800065C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x08000660: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x08000664: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x08000668: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x0800066C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x08000670: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x08000674: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x08000678: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x0800067C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x08000680: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08000684: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000688: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x0800068C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(50, 0X1D48) << 16);
    // 0x08000690: lwc1        $f22, 0x1D48($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(50, 0X1D48));
    // 0x08000694: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x08000698: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x0800069C: addiu       $s7, $zero, 0x270F
    ctx->r23 = ADD32(0, 0X270F);
    // 0x080006A0: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x080006A4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x080006A8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x080006AC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x080006B0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x080006B4: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x080006B8: beq         $s7, $t6, L_080007C8
    if (ctx->r23 == ctx->r14) {
        // 0x080006BC: mov.s       $f24, $f26
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
            goto L_080007C8;
    }
    // 0x080006BC: mov.s       $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
    // 0x080006C0: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x080006C4: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x080006C8: addiu       $s4, $s4, -0x39F4
    ctx->r20 = ADD32(ctx->r20, -0X39F4);
    // 0x080006CC: addiu       $s3, $s3, 0x17E0
    ctx->r19 = ADD32(ctx->r19, 0X17E0);
    // 0x080006D0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x080006D4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x080006D8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_080006DC:
    // 0x080006DC: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x080006E0: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080006E4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080006E8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080006EC: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080006F0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x080006F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x080006F8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080006FC: sub.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x08000700: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08000704: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000708: nop

    // 0x0800070C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000710: jalr        $s3
    // 0x08000714: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x08000714: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_0:
    // 0x08000718: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x0800071C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x08000720: bc1fl       L_08000774
    if (!c1cs) {
        // 0x08000724: c.lt.s      $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
            goto L_08000774;
    }
    goto skip_0;
    // 0x08000724: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    skip_0:
    // 0x08000728: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x0800072C: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000730: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000734: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000738: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800073C: or          $s6, $s5, $zero
    ctx->r22 = ctx->r21 | 0;
    // 0x08000740: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000744: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x08000748: mov.s       $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    ctx->f26.fl = ctx->f24.fl;
    // 0x0800074C: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x08000750: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000754: or          $s5, $s2, $zero
    ctx->r21 = ctx->r18 | 0;
    // 0x08000758: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x0800075C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000760: jalr        $s3
    // 0x08000764: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x08000764: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x08000768: b           L_080007BC
    // 0x0800076C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
        goto L_080007BC;
    // 0x0800076C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x08000770: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
L_08000774:
    // 0x08000774: nop

    // 0x08000778: bc1fl       L_080007C0
    if (!c1cs) {
        // 0x0800077C: lh          $v0, 0x0($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X0);
            goto L_080007C0;
    }
    goto skip_1;
    // 0x0800077C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    skip_1:
    // 0x08000780: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x08000784: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000788: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800078C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000790: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000794: or          $s6, $s2, $zero
    ctx->r22 = ctx->r18 | 0;
    // 0x08000798: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x0800079C: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x080007A0: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x080007A4: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080007A8: nop

    // 0x080007AC: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080007B0: jalr        $s3
    // 0x080007B4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x080007B4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x080007B8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
L_080007BC:
    // 0x080007BC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_080007C0:
    // 0x080007C0: bnel        $s7, $v0, L_080006DC
    if (ctx->r23 != ctx->r2) {
        // 0x080007C4: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_080006DC;
    }
    goto skip_2;
    // 0x080007C4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_2:
L_080007C8:
    // 0x080007C8: c.lt.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl < ctx->f24.fl;
    // 0x080007CC: addiu       $t8, $s5, -0x2
    ctx->r24 = ADD32(ctx->r21, -0X2);
    // 0x080007D0: addiu       $t1, $s6, -0x2
    ctx->r9 = ADD32(ctx->r22, -0X2);
    // 0x080007D4: slt         $at, $s5, $s6
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x080007D8: bc1f        L_08000804
    if (!c1cs) {
        // 0x080007DC: nop
    
            goto L_08000804;
    }
    // 0x080007DC: nop

    // 0x080007E0: slt         $at, $s6, $s5
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x080007E4: beq         $at, $zero, L_080007F8
    if (ctx->r1 == 0) {
        // 0x080007E8: sh          $t8, 0xE4($fp)
        MEM_H(0XE4, ctx->r30) = ctx->r24;
            goto L_080007F8;
    }
    // 0x080007E8: sh          $t8, 0xE4($fp)
    MEM_H(0XE4, ctx->r30) = ctx->r24;
    // 0x080007EC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x080007F0: b           L_08000820
    // 0x080007F4: sh          $t9, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r25;
        goto L_08000820;
    // 0x080007F4: sh          $t9, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r25;
L_080007F8:
    // 0x080007F8: ori         $t0, $zero, 0xFFFE
    ctx->r8 = 0 | 0XFFFE;
    // 0x080007FC: b           L_08000820
    // 0x08000800: sh          $t0, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r8;
        goto L_08000820;
    // 0x08000800: sh          $t0, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r8;
L_08000804:
    // 0x08000804: beq         $at, $zero, L_08000818
    if (ctx->r1 == 0) {
        // 0x08000808: sh          $t1, 0xE4($fp)
        MEM_H(0XE4, ctx->r30) = ctx->r9;
            goto L_08000818;
    }
    // 0x08000808: sh          $t1, 0xE4($fp)
    MEM_H(0XE4, ctx->r30) = ctx->r9;
    // 0x0800080C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08000810: b           L_08000820
    // 0x08000814: sh          $t2, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r10;
        goto L_08000820;
    // 0x08000814: sh          $t2, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r10;
L_08000818:
    // 0x08000818: ori         $t3, $zero, 0xFFFE
    ctx->r11 = 0 | 0XFFFE;
    // 0x0800081C: sh          $t3, 0xE6($fp)
    MEM_H(0XE6, ctx->r30) = ctx->r11;
L_08000820:
    // 0x08000820: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x08000824: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000828: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x0800082C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x08000830: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x08000834: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x08000838: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x0800083C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x08000840: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x08000844: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x08000848: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x0800084C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x08000850: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x08000854: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x08000858: jr          $ra
    // 0x0800085C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x0800085C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_08000068_71BAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000070: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000074: addiu       $t6, $zero, 0x2C2
    ctx->r14 = ADD32(0, 0X2C2);
    // 0x08000078: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800007C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000080: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000084: lhu         $a1, 0xD2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XD2);
    // 0x08000088: jalr        $t9
    // 0x0800008C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800008C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000090: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000094: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000098: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x0800009C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XC0) << 16);
    // 0x080000A4: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XC0));
    // 0x080000A8: jalr        $t9
    // 0x080000AC: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000AC: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    after_1:
    // 0x080000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080000B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080000B8: jr          $ra
    // 0x080000BC: nop

    TRACE_RETURN()
    return;
    // 0x080000BC: nop

;}
RECOMP_FUNC void func_08000F94_71CA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000FA0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000FA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FAC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000FB0: bne         $v0, $zero, L_08000FC4
    if (ctx->r2 != 0) {
        // 0x08000FB4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000FC4;
    }
    // 0x08000FB4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000FB8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0XFD4) << 16);
    // 0x08000FBC: jalr        $t9
    // 0x08000FC0: addiu       $a0, $a0, 0xFD4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XFD4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FC0: addiu       $a0, $a0, 0xFD4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0XFD4));
    after_0:
L_08000FC4:
    // 0x08000FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000FCC: jr          $ra
    // 0x08000FD0: nop

    TRACE_RETURN()
    return;
    // 0x08000FD0: nop

;}
RECOMP_FUNC void func_080003FC_71BE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000400: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000408: addiu       $t9, $t9, 0x1B48
    ctx->r25 = ADD32(ctx->r25, 0X1B48);
    // 0x0800040C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000410: jalr        $t9
    // 0x08000414: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000414: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000418: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800041C: addiu       $t9, $t9, 0x4CE0
    ctx->r25 = ADD32(ctx->r25, 0X4CE0);
    // 0x08000420: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000424: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x08000428: lui         $a3, 0x800
    ctx->r7 = S32(0X800 << 16);
    // 0x0800042C: addiu       $a3, $a3, 0x3710
    ctx->r7 = ADD32(ctx->r7, 0X3710);
    // 0x08000430: addiu       $a2, $a2, 0x2710
    ctx->r6 = ADD32(ctx->r6, 0X2710);
    // 0x08000434: addiu       $a1, $a1, 0x1710
    ctx->r5 = ADD32(ctx->r5, 0X1710);
    // 0x08000438: jalr        $t9
    // 0x0800043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000440: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000444: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000448: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X464) << 16);
    // 0x0800044C: jalr        $t9
    // 0x08000450: addiu       $a0, $a0, 0x464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X464));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000450: addiu       $a0, $a0, 0x464
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X464));
    after_2:
    // 0x08000454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800045C: jr          $ra
    // 0x08000460: nop

    TRACE_RETURN()
    return;
    // 0x08000460: nop

;}
RECOMP_FUNC void func_080005F8_71C078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000604: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x08000608: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800060C: jalr        $t9
    // 0x08000610: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000610: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000614: bne         $v0, $zero, L_0800063C
    if (ctx->r2 != 0) {
        // 0x08000618: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_0800063C;
    }
    // 0x08000618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800061C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000620: addiu       $t9, $t9, 0x4D50
    ctx->r25 = ADD32(ctx->r25, 0X4D50);
    // 0x08000624: jalr        $t9
    // 0x08000628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x0800062C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000630: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000634: jalr        $t9
    // 0x08000638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_0800063C:
    // 0x0800063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000644: jr          $ra
    // 0x08000648: nop

    TRACE_RETURN()
    return;
    // 0x08000648: nop

;}
RECOMP_FUNC void func_08001298_71CD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800129C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080012A4: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x080012A8: addiu       $t7, $zero, 0x2C4
    ctx->r15 = ADD32(0, 0X2C4);
    // 0x080012AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080012B0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080012B4: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080012B8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080012BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080012C0: jalr        $t9
    // 0x080012C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x080012C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080012CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012D0: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x080012D4: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080012D8: jalr        $t9
    // 0x080012DC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080012DC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    after_1:
    // 0x080012E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080012E4: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x080012E8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x080012EC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080012F0: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080012F4: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x080012F8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080012FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001300: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08001304: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08001308: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800130C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001310: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08001314: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(50, 0X134C) << 16);
    // 0x08001318: addiu       $a0, $a0, 0x134C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(50, 0X134C));
    // 0x0800131C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001320: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08001324: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001328: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x0800132C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08001330: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08001334: jalr        $t9
    // 0x08001338: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001338: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    after_2:
    // 0x0800133C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001344: jr          $ra
    // 0x08001348: nop

    TRACE_RETURN()
    return;
    // 0x08001348: nop

;}
