#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8020D7E8_6771C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D7E8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D7EC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D7F0: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x8020D7F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020D7F8: lw          $v0, -0x708($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X708);
    // 0x8020D7FC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8020D800: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x8020D804: beq         $v1, $zero, L_8020D810
    if (ctx->r3 == 0) {
        // 0x8020D808: nop
    
            goto L_8020D810;
    }
    // 0x8020D808: nop

    // 0x8020D80C: sb          $zero, 0x64($v1)
    MEM_B(0X64, ctx->r3) = 0;
L_8020D810:
    // 0x8020D810: jr          $ra
    // 0x8020D814: nop

    TRACE_RETURN()
    return;
    // 0x8020D814: nop

;}
RECOMP_FUNC void func_8020D6B4_677094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D6B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020D6B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020D6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D6C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8020D6C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D6C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8020D6CC: addiu       $a1, $a1, -0x2A5C
    ctx->r5 = ADD32(ctx->r5, -0X2A5C);
    // 0x8020D6D0: jal         0x80034E08
    // 0x8020D6D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020D6D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020D6D8: bne         $v0, $zero, L_8020D6E8
    if (ctx->r2 != 0) {
        // 0x8020D6DC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020D6E8;
    }
    // 0x8020D6DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D6E0: b           L_8020D71C
    // 0x8020D6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020D71C;
    // 0x8020D6E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020D6E8:
    // 0x8020D6E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8020D6EC: jal         0x800119D4
    // 0x8020D6F0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800119D4_125D4(rdram, ctx);
        goto after_1;
    // 0x8020D6F0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8020D6F4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020D6F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8020D6FC: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8020D700: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x8020D704: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8020D708: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x8020D70C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8020D710: sh          $t8, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r24;
    // 0x8020D714: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8020D718: sh          $t9, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r25;
L_8020D71C:
    // 0x8020D71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020D724: jr          $ra
    // 0x8020D728: nop

    TRACE_RETURN()
    return;
    // 0x8020D728: nop

;}
RECOMP_FUNC void func_80224394_68DD74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224394: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224398: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8022439C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802243A0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802243A4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802243A8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x802243AC: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    // 0x802243B0: bc1fl       L_802243D4
    if (!c1cs) {
        // 0x802243B4: lwc1        $f10, 0x10($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
            goto L_802243D4;
    }
    goto skip_0;
    // 0x802243B4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x802243B8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802243BC: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802243C0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802243C4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802243C8: b           L_802243DC
    // 0x802243CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802243DC;
    // 0x802243CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802243D0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
L_802243D4:
    // 0x802243D4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802243D8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_802243DC:
    // 0x802243DC: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802243E0: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802243E4: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802243E8: div.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802243EC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802243F0: nop

    // 0x802243F4: bc1f        L_80224408
    if (!c1cs) {
        // 0x802243F8: swc1        $f18, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
            goto L_80224408;
    }
    // 0x802243F8: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x802243FC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80224400: b           L_8022440C
    // 0x80224404: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022440C;
    // 0x80224404: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80224408:
    // 0x80224408: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8022440C:
    // 0x8022440C: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80224410: jr          $ra
    // 0x80224414: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80224414: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80211D7C_67B75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211D7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211D80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211D84: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211D88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80211D8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80211D90: addiu       $a1, $a1, -0x2668
    ctx->r5 = ADD32(ctx->r5, -0X2668);
    // 0x80211D94: jal         0x80034E08
    // 0x80211D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80211D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80211D9C: bne         $v0, $zero, L_80211DAC
    if (ctx->r2 != 0) {
        // 0x80211DA0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80211DAC;
    }
    // 0x80211DA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80211DA4: b           L_80211E8C
    // 0x80211DA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211E8C;
    // 0x80211DA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211DAC:
    // 0x80211DAC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80211DB0: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x80211DB4: jal         0x80034DD8
    // 0x80211DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80211DB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80211DBC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80211DC0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80211DC4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80211DC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211DCC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80211DD0: jal         0x8020D2E0
    // 0x80211DD4: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    func_8020D2E0_676CC0(rdram, ctx);
        goto after_2;
    // 0x80211DD4: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    after_2:
    // 0x80211DD8: jal         0x801DC630
    // 0x80211DDC: nop

    func_801DC630_598540(rdram, ctx);
        goto after_3;
    // 0x80211DDC: nop

    after_3:
    // 0x80211DE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80211DE4: jal         0x8001381C
    // 0x80211DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001381C_1441C(rdram, ctx);
        goto after_4;
    // 0x80211DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80211DEC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80211DF0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80211DF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80211DF8: jal         0x80012940
    // 0x80211DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_5;
    // 0x80211DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80211E00: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80211E04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80211E08: jal         0x80012500
    // 0x80211E0C: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_6;
    // 0x80211E0C: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_6:
    // 0x80211E10: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80211E14: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80211E18: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80211E1C: jal         0x80012818
    // 0x80211E20: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_7;
    // 0x80211E20: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    after_7:
    // 0x80211E24: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80211E28: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80211E2C: lui         $a2, 0x438C
    ctx->r6 = S32(0X438C << 16);
    // 0x80211E30: jal         0x800127B8
    // 0x80211E34: lui         $a3, 0xC37A
    ctx->r7 = S32(0XC37A << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_8;
    // 0x80211E34: lui         $a3, 0xC37A
    ctx->r7 = S32(0XC37A << 16);
    after_8:
    // 0x80211E38: jal         0x80012938
    // 0x80211E3C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_9;
    // 0x80211E3C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_9:
    // 0x80211E40: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80211E44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80211E48: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80211E4C: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x80211E50: addiu       $t0, $zero, 0xBE
    ctx->r8 = ADD32(0, 0XBE);
    // 0x80211E54: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x80211E58: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x80211E5C: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    // 0x80211E60: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x80211E64: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80211E68: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x80211E6C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x80211E70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80211E74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80211E78: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80211E7C: jal         0x8020D540
    // 0x80211E80: sw          $v0, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r2;
    func_8020D540_676F20(rdram, ctx);
        goto after_10;
    // 0x80211E80: sw          $v0, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r2;
    after_10:
    // 0x80211E84: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80211E88: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80211E8C:
    // 0x80211E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211E90: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80211E94: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80211E98: jr          $ra
    // 0x80211E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80211E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227994_691374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227998: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022799C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802279A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279A4: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802279A8: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802279AC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802279B0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802279B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802279B8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802279BC: jal         0x800040A8
    // 0x802279C0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802279C0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x802279C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802279C8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x802279CC: sh          $t6, 0x8C($a0)
    MEM_H(0X8C, ctx->r4) = ctx->r14;
    // 0x802279D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802279D8: jr          $ra
    // 0x802279DC: nop

    TRACE_RETURN()
    return;
    // 0x802279DC: nop

;}
RECOMP_FUNC void func_8021A690_684070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A690: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021A694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A698: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8021A69C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021A6A0: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x8021A6A4: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021A6A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021A6AC: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021A6B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A6B4: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x8021A6B8: lw          $a0, 0xB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB0);
    // 0x8021A6BC: jal         0x8001B5AC
    // 0x8021A6C0: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021A6C0: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021A6C4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8021A6C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021A6CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021A6D0: addiu       $a2, $a1, 0x5C
    ctx->r6 = ADD32(ctx->r5, 0X5C);
    // 0x8021A6D4: lw          $v0, 0x54($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X54);
    // 0x8021A6D8: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021A6DC: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021A6E0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8021A6E4: nop

    // 0x8021A6E8: bc1fl       L_8021A714
    if (!c1cs) {
        // 0x8021A6EC: lw          $v0, 0x58($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X58);
            goto L_8021A714;
    }
    goto skip_0;
    // 0x8021A6EC: lw          $v0, 0x58($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X58);
    skip_0:
    // 0x8021A6F0: lbu         $t6, 0x1($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1);
    // 0x8021A6F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021A6F8: bnel        $t6, $at, L_8021A710
    if (ctx->r14 != ctx->r1) {
        // 0x8021A6FC: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_8021A710;
    }
    goto skip_1;
    // 0x8021A6FC: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_1:
    // 0x8021A700: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021A704: b           L_8021A710
    // 0x8021A708: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_8021A710;
    // 0x8021A708: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x8021A70C: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
L_8021A710:
    // 0x8021A710: lw          $v0, 0x58($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X58);
L_8021A714:
    // 0x8021A714: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8021A718: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021A71C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021A720: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x8021A724: lw          $a0, 0x58($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X58);
    // 0x8021A728: jal         0x8001B5AC
    // 0x8021A72C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x8021A72C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x8021A730: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8021A734: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021A738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021A73C: lw          $v0, 0x58($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X58);
    // 0x8021A740: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021A744: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8021A748: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021A74C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8021A750: nop

    // 0x8021A754: bc1fl       L_8021A77C
    if (!c1cs) {
        // 0x8021A758: lwc1        $f14, 0x18($a2)
        ctx->f14.u32l = MEM_W(ctx->r6, 0X18);
            goto L_8021A77C;
    }
    goto skip_2;
    // 0x8021A758: lwc1        $f14, 0x18($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X18);
    skip_2:
    // 0x8021A75C: lbu         $t7, 0x1($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X1);
    // 0x8021A760: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021A764: bnel        $t7, $at, L_8021A778
    if (ctx->r15 != ctx->r1) {
        // 0x8021A768: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_8021A778;
    }
    goto skip_3;
    // 0x8021A768: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_3:
    // 0x8021A76C: b           L_8021A778
    // 0x8021A770: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_8021A778;
    // 0x8021A770: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x8021A774: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
L_8021A778:
    // 0x8021A778: lwc1        $f14, 0x18($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X18);
L_8021A77C:
    // 0x8021A77C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021A780: ldc1        $f16, -0x5360($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5360);
    // 0x8021A784: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021A788: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8021A78C: nop

    // 0x8021A790: bc1fl       L_8021A804
    if (!c1cs) {
        // 0x8021A794: lwc1        $f14, 0x24($a2)
        ctx->f14.u32l = MEM_W(ctx->r6, 0X24);
            goto L_8021A804;
    }
    goto skip_4;
    // 0x8021A794: lwc1        $f14, 0x24($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X24);
    skip_4:
    // 0x8021A798: lwc1        $f12, 0x14($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8021A79C: lwc1        $f2, 0x10($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8021A7A0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021A7A4: nop

    // 0x8021A7A8: bc1fl       L_8021A7C0
    if (!c1cs) {
        // 0x8021A7AC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021A7C0;
    }
    goto skip_5;
    // 0x8021A7AC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x8021A7B0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021A7B4: b           L_8021A7C0
    // 0x8021A7B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021A7C0;
    // 0x8021A7B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021A7BC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021A7C0:
    // 0x8021A7C0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021A7C4: nop

    // 0x8021A7C8: bc1fl       L_8021A7E0
    if (!c1cs) {
        // 0x8021A7CC: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021A7E0;
    }
    goto skip_6;
    // 0x8021A7CC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x8021A7D0: swc1        $f12, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f12.u32l;
    // 0x8021A7D4: b           L_8021A800
    // 0x8021A7D8: swc1        $f18, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f18.u32l;
        goto L_8021A800;
    // 0x8021A7D8: swc1        $f18, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f18.u32l;
    // 0x8021A7DC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021A7E0:
    // 0x8021A7E0: nop

    // 0x8021A7E4: bc1fl       L_8021A7FC
    if (!c1cs) {
        // 0x8021A7E8: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021A7FC;
    }
    goto skip_7;
    // 0x8021A7E8: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x8021A7EC: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021A7F0: b           L_8021A800
    // 0x8021A7F4: swc1        $f10, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f10.u32l;
        goto L_8021A800;
    // 0x8021A7F4: swc1        $f10, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f10.u32l;
    // 0x8021A7F8: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_8021A7FC:
    // 0x8021A7FC: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
L_8021A800:
    // 0x8021A800: lwc1        $f14, 0x24($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X24);
L_8021A804:
    // 0x8021A804: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8021A808: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8021A80C: nop

    // 0x8021A810: bc1fl       L_8021A884
    if (!c1cs) {
        // 0x8021A814: lwc1        $f14, 0x30($a2)
        ctx->f14.u32l = MEM_W(ctx->r6, 0X30);
            goto L_8021A884;
    }
    goto skip_8;
    // 0x8021A814: lwc1        $f14, 0x30($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X30);
    skip_8:
    // 0x8021A818: lwc1        $f12, 0x20($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021A81C: lwc1        $f2, 0x1C($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8021A820: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021A824: nop

    // 0x8021A828: bc1fl       L_8021A840
    if (!c1cs) {
        // 0x8021A82C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021A840;
    }
    goto skip_9;
    // 0x8021A82C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x8021A830: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021A834: b           L_8021A840
    // 0x8021A838: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021A840;
    // 0x8021A838: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021A83C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021A840:
    // 0x8021A840: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021A844: nop

    // 0x8021A848: bc1fl       L_8021A860
    if (!c1cs) {
        // 0x8021A84C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021A860;
    }
    goto skip_10;
    // 0x8021A84C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x8021A850: swc1        $f12, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f12.u32l;
    // 0x8021A854: b           L_8021A880
    // 0x8021A858: swc1        $f18, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f18.u32l;
        goto L_8021A880;
    // 0x8021A858: swc1        $f18, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f18.u32l;
    // 0x8021A85C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021A860:
    // 0x8021A860: nop

    // 0x8021A864: bc1fl       L_8021A87C
    if (!c1cs) {
        // 0x8021A868: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021A87C;
    }
    goto skip_11;
    // 0x8021A868: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x8021A86C: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021A870: b           L_8021A880
    // 0x8021A874: swc1        $f8, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f8.u32l;
        goto L_8021A880;
    // 0x8021A874: swc1        $f8, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f8.u32l;
    // 0x8021A878: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_8021A87C:
    // 0x8021A87C: swc1        $f10, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f10.u32l;
L_8021A880:
    // 0x8021A880: lwc1        $f14, 0x30($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X30);
L_8021A884:
    // 0x8021A884: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021A888: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021A88C: nop

    // 0x8021A890: bc1fl       L_8021A904
    if (!c1cs) {
        // 0x8021A894: lhu         $t8, 0x4($a2)
        ctx->r24 = MEM_HU(ctx->r6, 0X4);
            goto L_8021A904;
    }
    goto skip_12;
    // 0x8021A894: lhu         $t8, 0x4($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X4);
    skip_12:
    // 0x8021A898: lwc1        $f12, 0x2C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x8021A89C: lwc1        $f2, 0x28($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8021A8A0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021A8A4: nop

    // 0x8021A8A8: bc1fl       L_8021A8C0
    if (!c1cs) {
        // 0x8021A8AC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021A8C0;
    }
    goto skip_13;
    // 0x8021A8AC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x8021A8B0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021A8B4: b           L_8021A8C0
    // 0x8021A8B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021A8C0;
    // 0x8021A8B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021A8BC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021A8C0:
    // 0x8021A8C0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021A8C4: nop

    // 0x8021A8C8: bc1fl       L_8021A8E0
    if (!c1cs) {
        // 0x8021A8CC: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021A8E0;
    }
    goto skip_14;
    // 0x8021A8CC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x8021A8D0: swc1        $f12, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f12.u32l;
    // 0x8021A8D4: b           L_8021A900
    // 0x8021A8D8: swc1        $f18, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f18.u32l;
        goto L_8021A900;
    // 0x8021A8D8: swc1        $f18, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f18.u32l;
    // 0x8021A8DC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021A8E0:
    // 0x8021A8E0: nop

    // 0x8021A8E4: bc1fl       L_8021A8FC
    if (!c1cs) {
        // 0x8021A8E8: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021A8FC;
    }
    goto skip_15;
    // 0x8021A8E8: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x8021A8EC: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021A8F0: b           L_8021A900
    // 0x8021A8F4: swc1        $f6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f6.u32l;
        goto L_8021A900;
    // 0x8021A8F4: swc1        $f6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f6.u32l;
    // 0x8021A8F8: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_8021A8FC:
    // 0x8021A8FC: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
L_8021A900:
    // 0x8021A900: lhu         $t8, 0x4($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X4);
L_8021A904:
    // 0x8021A904: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x8021A908: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021A90C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021A910: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x8021A914: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8021A918: lw          $t5, 0x54($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X54);
    // 0x8021A91C: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021A920: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x8021A924: lwc1        $f4, 0x1C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8021A928: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x8021A92C: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    // 0x8021A930: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8021A934: lw          $t7, 0x54($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X54);
    // 0x8021A938: swc1        $f6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f6.u32l;
    // 0x8021A93C: lw          $t9, 0x58($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X58);
    // 0x8021A940: lhu         $t8, 0x4($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X4);
    // 0x8021A944: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x8021A948: lw          $t5, 0x58($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X58);
    // 0x8021A94C: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8021A950: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x8021A954: lw          $t6, 0x58($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X58);
    // 0x8021A958: lwc1        $f10, 0x1C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8021A95C: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x8021A960: lw          $t7, 0x58($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X58);
    // 0x8021A964: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8021A968: swc1        $f4, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f4.u32l;
    // 0x8021A96C: lwc1        $f14, 0x50($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X50);
    // 0x8021A970: ldc1        $f6, -0x5358($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5358);
    // 0x8021A974: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021A978: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8021A97C: nop

    // 0x8021A980: bc1fl       L_8021A9F8
    if (!c1cs) {
        // 0x8021A984: lw          $v0, 0x54($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X54);
            goto L_8021A9F8;
    }
    goto skip_16;
    // 0x8021A984: lw          $v0, 0x54($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X54);
    skip_16:
    // 0x8021A988: lw          $v0, 0x54($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X54);
    // 0x8021A98C: lwc1        $f12, 0x4C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X4C);
    // 0x8021A990: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021A994: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021A998: nop

    // 0x8021A99C: bc1fl       L_8021A9B4
    if (!c1cs) {
        // 0x8021A9A0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021A9B4;
    }
    goto skip_17;
    // 0x8021A9A0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_17:
    // 0x8021A9A4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021A9A8: b           L_8021A9B4
    // 0x8021A9AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021A9B4;
    // 0x8021A9AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021A9B0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021A9B4:
    // 0x8021A9B4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021A9B8: nop

    // 0x8021A9BC: bc1fl       L_8021A9D4
    if (!c1cs) {
        // 0x8021A9C0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021A9D4;
    }
    goto skip_18;
    // 0x8021A9C0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_18:
    // 0x8021A9C4: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8021A9C8: b           L_8021A9F4
    // 0x8021A9CC: swc1        $f18, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f18.u32l;
        goto L_8021A9F4;
    // 0x8021A9CC: swc1        $f18, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f18.u32l;
    // 0x8021A9D0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021A9D4:
    // 0x8021A9D4: nop

    // 0x8021A9D8: bc1fl       L_8021A9F0
    if (!c1cs) {
        // 0x8021A9DC: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021A9F0;
    }
    goto skip_19;
    // 0x8021A9DC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_19:
    // 0x8021A9E0: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021A9E4: b           L_8021A9F4
    // 0x8021A9E8: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
        goto L_8021A9F4;
    // 0x8021A9E8: swc1        $f10, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f10.u32l;
    // 0x8021A9EC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_8021A9F0:
    // 0x8021A9F0: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
L_8021A9F4:
    // 0x8021A9F4: lw          $v0, 0x54($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X54);
L_8021A9F8:
    // 0x8021A9F8: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021A9FC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021AA00: lw          $t8, 0x54($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X54);
    // 0x8021AA04: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x8021AA08: lw          $t9, 0x58($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X58);
    // 0x8021AA0C: swc1        $f0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f0.u32l;
    // 0x8021AA10: lw          $t5, 0x58($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X58);
    // 0x8021AA14: swc1        $f0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f0.u32l;
    // 0x8021AA18: lw          $t6, 0x58($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X58);
    // 0x8021AA1C: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x8021AA20: lwc1        $f14, 0x3C($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x8021AA24: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8021AA28: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8021AA2C: nop

    // 0x8021AA30: bc1fl       L_8021AACC
    if (!c1cs) {
        // 0x8021AA34: lwc1        $f14, 0x48($a2)
        ctx->f14.u32l = MEM_W(ctx->r6, 0X48);
            goto L_8021AACC;
    }
    goto skip_20;
    // 0x8021AA34: lwc1        $f14, 0x48($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X48);
    skip_20:
    // 0x8021AA38: lwc1        $f12, 0x38($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X38);
    // 0x8021AA3C: lwc1        $f2, 0x34($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8021AA40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021AA44: nop

    // 0x8021AA48: bc1fl       L_8021AA60
    if (!c1cs) {
        // 0x8021AA4C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021AA60;
    }
    goto skip_21;
    // 0x8021AA4C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_21:
    // 0x8021AA50: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021AA54: b           L_8021AA60
    // 0x8021AA58: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021AA60;
    // 0x8021AA58: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021AA5C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021AA60:
    // 0x8021AA60: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021AA64: nop

    // 0x8021AA68: bc1fl       L_8021AA80
    if (!c1cs) {
        // 0x8021AA6C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021AA80;
    }
    goto skip_22;
    // 0x8021AA6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_22:
    // 0x8021AA70: swc1        $f12, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f12.u32l;
    // 0x8021AA74: b           L_8021AAA0
    // 0x8021AA78: swc1        $f18, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f18.u32l;
        goto L_8021AAA0;
    // 0x8021AA78: swc1        $f18, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f18.u32l;
    // 0x8021AA7C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021AA80:
    // 0x8021AA80: nop

    // 0x8021AA84: bc1fl       L_8021AA9C
    if (!c1cs) {
        // 0x8021AA88: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021AA9C;
    }
    goto skip_23;
    // 0x8021AA88: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_23:
    // 0x8021AA8C: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021AA90: b           L_8021AAA0
    // 0x8021AA94: swc1        $f8, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f8.u32l;
        goto L_8021AAA0;
    // 0x8021AA94: swc1        $f8, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f8.u32l;
    // 0x8021AA98: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_8021AA9C:
    // 0x8021AA9C: swc1        $f10, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f10.u32l;
L_8021AAA0:
    // 0x8021AAA0: lwc1        $f4, 0x34($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8021AAA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021AAA8: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x8021AAAC: nop

    // 0x8021AAB0: bc1fl       L_8021AACC
    if (!c1cs) {
        // 0x8021AAB4: lwc1        $f14, 0x48($a2)
        ctx->f14.u32l = MEM_W(ctx->r6, 0X48);
            goto L_8021AACC;
    }
    goto skip_24;
    // 0x8021AAB4: lwc1        $f14, 0x48($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X48);
    skip_24:
    // 0x8021AAB8: jal         0x80034ED4
    // 0x8021AABC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x8021AABC: nop

    after_2:
    // 0x8021AAC0: b           L_8021AF00
    // 0x8021AAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021AF00;
    // 0x8021AAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021AAC8: lwc1        $f14, 0x48($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X48);
L_8021AACC:
    // 0x8021AACC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021AAD0: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8021AAD4: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021AAD8: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8021AADC: nop

    // 0x8021AAE0: bc1fl       L_8021AB54
    if (!c1cs) {
        // 0x8021AAE4: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_8021AB54;
    }
    goto skip_25;
    // 0x8021AAE4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_25:
    // 0x8021AAE8: lwc1        $f12, 0x44($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X44);
    // 0x8021AAEC: lwc1        $f2, 0x40($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X40);
    // 0x8021AAF0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021AAF4: nop

    // 0x8021AAF8: bc1fl       L_8021AB10
    if (!c1cs) {
        // 0x8021AAFC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021AB10;
    }
    goto skip_26;
    // 0x8021AAFC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_26:
    // 0x8021AB00: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021AB04: b           L_8021AB10
    // 0x8021AB08: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021AB10;
    // 0x8021AB08: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021AB0C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021AB10:
    // 0x8021AB10: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021AB14: nop

    // 0x8021AB18: bc1fl       L_8021AB30
    if (!c1cs) {
        // 0x8021AB1C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021AB30;
    }
    goto skip_27;
    // 0x8021AB1C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_27:
    // 0x8021AB20: swc1        $f12, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f12.u32l;
    // 0x8021AB24: b           L_8021AB50
    // 0x8021AB28: swc1        $f18, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f18.u32l;
        goto L_8021AB50;
    // 0x8021AB28: swc1        $f18, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f18.u32l;
    // 0x8021AB2C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021AB30:
    // 0x8021AB30: nop

    // 0x8021AB34: bc1fl       L_8021AB4C
    if (!c1cs) {
        // 0x8021AB38: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021AB4C;
    }
    goto skip_28;
    // 0x8021AB38: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_28:
    // 0x8021AB3C: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021AB40: b           L_8021AB50
    // 0x8021AB44: swc1        $f10, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f10.u32l;
        goto L_8021AB50;
    // 0x8021AB44: swc1        $f10, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f10.u32l;
    // 0x8021AB48: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_8021AB4C:
    // 0x8021AB4C: swc1        $f4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f4.u32l;
L_8021AB50:
    // 0x8021AB50: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_8021AB54:
    // 0x8021AB54: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x8021AB58: lui         $t3, 0x2000
    ctx->r11 = S32(0X2000 << 16);
    // 0x8021AB5C: or          $t8, $t7, $t3
    ctx->r24 = ctx->r15 | ctx->r11;
    // 0x8021AB60: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x8021AB64: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8021AB68: lw          $t7, 0x58($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X58);
    // 0x8021AB6C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021AB70: or          $t6, $t5, $t3
    ctx->r14 = ctx->r13 | ctx->r11;
    // 0x8021AB74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021AB78: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x8021AB7C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021AB80: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8021AB84: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8021AB88: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021AB8C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021AB90: nop

    // 0x8021AB94: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021AB98: beql        $t9, $zero, L_8021ABE8
    if (ctx->r25 == 0) {
        // 0x8021AB9C: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8021ABE8;
    }
    goto skip_29;
    // 0x8021AB9C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_29:
    // 0x8021ABA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021ABA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021ABA8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021ABAC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021ABB0: nop

    // 0x8021ABB4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021ABB8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021ABBC: nop

    // 0x8021ABC0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021ABC4: bne         $t9, $zero, L_8021ABDC
    if (ctx->r25 != 0) {
        // 0x8021ABC8: nop
    
            goto L_8021ABDC;
    }
    // 0x8021ABC8: nop

    // 0x8021ABCC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8021ABD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021ABD4: b           L_8021ABF4
    // 0x8021ABD8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021ABF4;
    // 0x8021ABD8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021ABDC:
    // 0x8021ABDC: b           L_8021ABF4
    // 0x8021ABE0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021ABF4;
    // 0x8021ABE0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021ABE4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8021ABE8:
    // 0x8021ABE8: nop

    // 0x8021ABEC: bltz        $t9, L_8021ABDC
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021ABF0: nop
    
            goto L_8021ABDC;
    }
    // 0x8021ABF0: nop

L_8021ABF4:
    // 0x8021ABF4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021ABF8: sltiu       $at, $t9, 0xFF
    ctx->r1 = ctx->r25 < 0XFF ? 1 : 0;
    // 0x8021ABFC: bnel        $at, $zero, L_8021AC28
    if (ctx->r1 != 0) {
        // 0x8021AC00: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_8021AC28;
    }
    goto skip_30;
    // 0x8021AC00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_30:
    // 0x8021AC04: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021AC08: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8021AC0C: addiu       $t6, $t6, -0x26E0
    ctx->r14 = ADD32(ctx->r14, -0X26E0);
    // 0x8021AC10: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8021AC14: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8021AC18: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021AC1C: b           L_8021AC40
    // 0x8021AC20: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8021AC40;
    // 0x8021AC20: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8021AC24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8021AC28:
    // 0x8021AC28: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021AC2C: addiu       $t8, $t8, -0x6050
    ctx->r24 = ADD32(ctx->r24, -0X6050);
    // 0x8021AC30: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021AC34: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021AC38: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021AC3C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8021AC40:
    // 0x8021AC40: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8021AC44: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x8021AC48: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021AC4C: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x8021AC50: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021AC54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021AC58: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x8021AC5C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021AC60: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8021AC64: lui         $t2, 0x8FFF
    ctx->r10 = S32(0X8FFF << 16);
    // 0x8021AC68: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8021AC6C: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021AC70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021AC74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021AC78: nop

    // 0x8021AC7C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021AC80: beql        $t7, $zero, L_8021ACD0
    if (ctx->r15 == 0) {
        // 0x8021AC84: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_8021ACD0;
    }
    goto skip_31;
    // 0x8021AC84: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_31:
    // 0x8021AC88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021AC8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021AC90: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8021AC94: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021AC98: nop

    // 0x8021AC9C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021ACA0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021ACA4: nop

    // 0x8021ACA8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021ACAC: bne         $t7, $zero, L_8021ACC4
    if (ctx->r15 != 0) {
        // 0x8021ACB0: nop
    
            goto L_8021ACC4;
    }
    // 0x8021ACB0: nop

    // 0x8021ACB4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8021ACB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021ACBC: b           L_8021ACDC
    // 0x8021ACC0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021ACDC;
    // 0x8021ACC0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8021ACC4:
    // 0x8021ACC4: b           L_8021ACDC
    // 0x8021ACC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021ACDC;
    // 0x8021ACC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021ACCC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_8021ACD0:
    // 0x8021ACD0: nop

    // 0x8021ACD4: bltz        $t7, L_8021ACC4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8021ACD8: nop
    
            goto L_8021ACC4;
    }
    // 0x8021ACD8: nop

L_8021ACDC:
    // 0x8021ACDC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8021ACE0: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8021ACE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021ACE8: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8021ACEC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021ACF0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021ACF4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021ACF8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021ACFC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8021AD00: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x8021AD04: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8021AD08: lw          $t1, 0x30($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X30);
    // 0x8021AD0C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8021AD10: subu        $t8, $t2, $t1
    ctx->r24 = SUB32(ctx->r10, ctx->r9);
    // 0x8021AD14: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x8021AD18: and         $a1, $t9, $t2
    ctx->r5 = ctx->r25 & ctx->r10;
    // 0x8021AD1C: jal         0x80040620
    // 0x8021AD20: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x8021AD20: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    after_3:
    // 0x8021AD24: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8021AD28: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021AD2C: lui         $t2, 0x8FFF
    ctx->r10 = S32(0X8FFF << 16);
    // 0x8021AD30: lb          $t5, 0x2($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X2);
    // 0x8021AD34: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8021AD38: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021AD3C: lui         $t3, 0x2000
    ctx->r11 = S32(0X2000 << 16);
    // 0x8021AD40: beq         $t5, $zero, L_8021AEFC
    if (ctx->r13 == 0) {
        // 0x8021AD44: lui         $t4, 0x600
        ctx->r12 = S32(0X600 << 16);
            goto L_8021AEFC;
    }
    // 0x8021AD44: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8021AD48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8021AD4C: lw          $t8, 0x58($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X58);
    // 0x8021AD50: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021AD54: or          $t7, $t6, $t3
    ctx->r15 = ctx->r14 | ctx->r11;
    // 0x8021AD58: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021AD5C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x8021AD60: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021AD64: lwc1        $f6, 0x40($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X40);
    // 0x8021AD68: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021AD6C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021AD70: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021AD74: nop

    // 0x8021AD78: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021AD7C: beql        $t5, $zero, L_8021ADCC
    if (ctx->r13 == 0) {
        // 0x8021AD80: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8021ADCC;
    }
    goto skip_32;
    // 0x8021AD80: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_32:
    // 0x8021AD84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021AD88: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021AD8C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021AD90: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021AD94: nop

    // 0x8021AD98: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021AD9C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021ADA0: nop

    // 0x8021ADA4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021ADA8: bne         $t5, $zero, L_8021ADC0
    if (ctx->r13 != 0) {
        // 0x8021ADAC: nop
    
            goto L_8021ADC0;
    }
    // 0x8021ADAC: nop

    // 0x8021ADB0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8021ADB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021ADB8: b           L_8021ADD8
    // 0x8021ADBC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021ADD8;
    // 0x8021ADBC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8021ADC0:
    // 0x8021ADC0: b           L_8021ADD8
    // 0x8021ADC4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021ADD8;
    // 0x8021ADC4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021ADC8: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8021ADCC:
    // 0x8021ADCC: nop

    // 0x8021ADD0: bltz        $t5, L_8021ADC0
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021ADD4: nop
    
            goto L_8021ADC0;
    }
    // 0x8021ADD4: nop

L_8021ADD8:
    // 0x8021ADD8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021ADDC: sltiu       $at, $t5, 0xFF
    ctx->r1 = ctx->r13 < 0XFF ? 1 : 0;
    // 0x8021ADE0: bnel        $at, $zero, L_8021AE0C
    if (ctx->r1 != 0) {
        // 0x8021ADE4: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_8021AE0C;
    }
    goto skip_33;
    // 0x8021ADE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_33:
    // 0x8021ADE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021ADEC: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x8021ADF0: addiu       $t7, $t7, -0x5D00
    ctx->r15 = ADD32(ctx->r15, -0X5D00);
    // 0x8021ADF4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021ADF8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021ADFC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021AE00: b           L_8021AE24
    // 0x8021AE04: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8021AE24;
    // 0x8021AE04: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8021AE08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8021AE0C:
    // 0x8021AE0C: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021AE10: addiu       $t9, $t9, -0x6050
    ctx->r25 = ADD32(ctx->r25, -0X6050);
    // 0x8021AE14: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021AE18: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021AE1C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021AE20: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_8021AE24:
    // 0x8021AE24: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8021AE28: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x8021AE2C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021AE30: addiu       $t5, $a3, 0x8
    ctx->r13 = ADD32(ctx->r7, 0X8);
    // 0x8021AE34: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8021AE38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021AE3C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021AE40: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021AE44: lwc1        $f10, 0x40($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X40);
    // 0x8021AE48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021AE4C: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021AE50: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021AE54: nop

    // 0x8021AE58: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021AE5C: beql        $t8, $zero, L_8021AEAC
    if (ctx->r24 == 0) {
        // 0x8021AE60: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_8021AEAC;
    }
    goto skip_34;
    // 0x8021AE60: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_34:
    // 0x8021AE64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021AE68: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021AE6C: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8021AE70: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021AE74: nop

    // 0x8021AE78: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021AE7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021AE80: nop

    // 0x8021AE84: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021AE88: bne         $t8, $zero, L_8021AEA0
    if (ctx->r24 != 0) {
        // 0x8021AE8C: nop
    
            goto L_8021AEA0;
    }
    // 0x8021AE8C: nop

    // 0x8021AE90: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8021AE94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021AE98: b           L_8021AEB8
    // 0x8021AE9C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8021AEB8;
    // 0x8021AE9C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8021AEA0:
    // 0x8021AEA0: b           L_8021AEB8
    // 0x8021AEA4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8021AEB8;
    // 0x8021AEA4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8021AEA8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_8021AEAC:
    // 0x8021AEAC: nop

    // 0x8021AEB0: bltz        $t8, L_8021AEA0
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021AEB4: nop
    
            goto L_8021AEA0;
    }
    // 0x8021AEB4: nop

L_8021AEB8:
    // 0x8021AEB8: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8021AEBC: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8021AEC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021AEC4: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8021AEC8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021AECC: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8021AED0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8021AED4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021AED8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021AEDC: lw          $t7, 0x54($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X54);
    // 0x8021AEE0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021AEE4: lw          $t1, 0x30($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X30);
    // 0x8021AEE8: subu        $t9, $t2, $t1
    ctx->r25 = SUB32(ctx->r10, ctx->r9);
    // 0x8021AEEC: and         $t5, $t8, $t9
    ctx->r13 = ctx->r24 & ctx->r25;
    // 0x8021AEF0: and         $a1, $t5, $t2
    ctx->r5 = ctx->r13 & ctx->r10;
    // 0x8021AEF4: jal         0x80040620
    // 0x8021AEF8: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x8021AEF8: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    after_4:
L_8021AEFC:
    // 0x8021AEFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021AF00:
    // 0x8021AF00: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021AF04: jr          $ra
    // 0x8021AF08: nop

    TRACE_RETURN()
    return;
    // 0x8021AF08: nop

;}
RECOMP_FUNC void func_8021F35C_688D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F35C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021F360: jr          $ra
    // 0x8021F364: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021F364: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80217D0C_6816EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217D14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80217D18: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217D1C: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80217D20: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80217D24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80217D28: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80217D2C: jal         0x8001B5AC
    // 0x80217D30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80217D30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80217D34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217D38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80217D3C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80217D40: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80217D44: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80217D48: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217D4C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80217D50: nop

    // 0x80217D54: bc1fl       L_80217D80
    if (!c1cs) {
        // 0x80217D58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80217D80;
    }
    goto skip_0;
    // 0x80217D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80217D5C: lbu         $t8, 0x5D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5D);
    // 0x80217D60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217D64: bnel        $t8, $at, L_80217D7C
    if (ctx->r24 != ctx->r1) {
        // 0x80217D68: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80217D7C;
    }
    goto skip_1;
    // 0x80217D68: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x80217D6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80217D70: b           L_80217D7C
    // 0x80217D74: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
        goto L_80217D7C;
    // 0x80217D74: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x80217D78: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80217D7C:
    // 0x80217D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217D80:
    // 0x80217D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80217D84: jr          $ra
    // 0x80217D88: nop

    TRACE_RETURN()
    return;
    // 0x80217D88: nop

;}
RECOMP_FUNC void func_80224380_68DD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224380: jr          $ra
    // 0x80224384: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80224384: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_802286A4_692084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802286A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802286AC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802286B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802286B4: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802286B8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802286BC: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x802286C0: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x802286C4: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x802286C8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802286CC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802286D0: bc1f        L_802286F0
    if (!c1cs) {
        // 0x802286D4: swc1        $f4, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
            goto L_802286F0;
    }
    // 0x802286D4: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x802286D8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802286DC: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802286E0: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802286E4: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802286E8: b           L_802286FC
    // 0x802286EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802286FC;
    // 0x802286EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802286F0:
    // 0x802286F0: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802286F4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802286F8: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_802286FC:
    // 0x802286FC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80228700: lwc1        $f2, 0x18($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80228704: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80228708: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8022870C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228710: nop

    // 0x80228714: bc1f        L_80228728
    if (!c1cs) {
        // 0x80228718: swc1        $f6, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
            goto L_80228728;
    }
    // 0x80228718: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8022871C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228720: b           L_8022872C
    // 0x80228724: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022872C;
    // 0x80228724: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80228728:
    // 0x80228728: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8022872C:
    // 0x8022872C: div.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80228730: lwc1        $f2, 0x24($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80228734: lwc1        $f12, 0x20($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80228738: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8022873C: nop

    // 0x80228740: bc1f        L_80228754
    if (!c1cs) {
        // 0x80228744: swc1        $f8, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
            goto L_80228754;
    }
    // 0x80228744: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x80228748: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022874C: b           L_8022875C
    // 0x80228750: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8022875C;
    // 0x80228750: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80228754:
    // 0x80228754: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228758: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8022875C:
    // 0x8022875C: div.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80228760: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80228764: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80228768: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8022876C: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x80228770: jal         0x800040A8
    // 0x80228774: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80228774: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80228778: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022877C: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80228780: sh          $t6, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r14;
    // 0x80228784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228788: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022878C: jr          $ra
    // 0x80228790: nop

    TRACE_RETURN()
    return;
    // 0x80228790: nop

;}
RECOMP_FUNC void func_80214540_67DF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214540: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80214544: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80214548: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021454C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80214550: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214554: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80214558: addiu       $a1, $a1, 0x40B8
    ctx->r5 = ADD32(ctx->r5, 0X40B8);
    // 0x8021455C: jal         0x80034E08
    // 0x80214560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80214560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214564: bne         $v0, $zero, L_80214574
    if (ctx->r2 != 0) {
        // 0x80214568: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80214574;
    }
    // 0x80214568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021456C: b           L_8021466C
    // 0x80214570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021466C;
    // 0x80214570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214574:
    // 0x80214574: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214578: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021457C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80214580: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80214584: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214588: addiu       $a1, $a1, 0x4260
    ctx->r5 = ADD32(ctx->r5, 0X4260);
    // 0x8021458C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80214590: addiu       $t6, $zero, 0x4DD
    ctx->r14 = ADD32(0, 0X4DD);
    // 0x80214594: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80214598: addiu       $a2, $a2, -0x6180
    ctx->r6 = ADD32(ctx->r6, -0X6180);
    // 0x8021459C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802145A0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802145A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802145A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802145AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802145B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802145B4: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x802145B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802145BC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802145C0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802145C4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802145C8: jal         0x8000DBF0
    // 0x802145CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802145CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802145D0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802145D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802145D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802145DC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802145E0: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x802145E4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802145E8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802145EC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802145F0: addiu       $a1, $a1, 0x51A0
    ctx->r5 = ADD32(ctx->r5, 0X51A0);
    // 0x802145F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802145F8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802145FC: addiu       $t7, $zero, 0x4DD
    ctx->r15 = ADD32(0, 0X4DD);
    // 0x80214600: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80214604: addiu       $a2, $a2, -0x6008
    ctx->r6 = ADD32(ctx->r6, -0X6008);
    // 0x80214608: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021460C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80214610: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80214614: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80214618: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021461C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214620: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80214624: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80214628: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021462C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80214630: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214634: jal         0x8000DBF0
    // 0x80214638: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80214638: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8021463C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80214640: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80214644: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214648: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8021464C: sb          $t8, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r24;
    // 0x80214650: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80214654: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80214658: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x8021465C: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80214660: swc1        $f18, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f18.u32l;
    // 0x80214664: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80214668: swc1        $f4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f4.u32l;
L_8021466C:
    // 0x8021466C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80214670: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80214674: jr          $ra
    // 0x80214678: nop

    TRACE_RETURN()
    return;
    // 0x80214678: nop

;}
RECOMP_FUNC void func_80211D5C_67B73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211D64: jal         0x80034EF8
    // 0x80211D68: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80211D68: nop

    after_0:
    // 0x80211D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211D74: jr          $ra
    // 0x80211D78: nop

    TRACE_RETURN()
    return;
    // 0x80211D78: nop

;}
RECOMP_FUNC void func_80212CBC_67C69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212CBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212CC4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212CC8: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80212CCC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212CD0: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212CD4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80212CD8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80212CDC: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x80212CE0: bc1fl       L_80212D04
    if (!c1cs) {
        // 0x80212CE4: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_80212D04;
    }
    goto skip_0;
    // 0x80212CE4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x80212CE8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212CEC: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80212CF0: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212CF4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80212CF8: b           L_80212D0C
    // 0x80212CFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212D0C;
    // 0x80212CFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212D00: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_80212D04:
    // 0x80212D04: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212D08: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_80212D0C:
    // 0x80212D0C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80212D10: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80212D14: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80212D18: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80212D1C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80212D20: nop

    // 0x80212D24: bc1f        L_80212D38
    if (!c1cs) {
        // 0x80212D28: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_80212D38;
    }
    // 0x80212D28: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x80212D2C: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80212D30: b           L_80212D40
    // 0x80212D34: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80212D40;
    // 0x80212D34: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80212D38:
    // 0x80212D38: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80212D3C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80212D40:
    // 0x80212D40: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80212D44: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80212D48: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212D4C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80212D50: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x80212D54: jal         0x800040A8
    // 0x80212D58: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212D58: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80212D5C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80212D60: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80212D64: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x80212D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212D6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212D70: jr          $ra
    // 0x80212D74: nop

    TRACE_RETURN()
    return;
    // 0x80212D74: nop

;}
RECOMP_FUNC void func_8021D13C_686B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D13C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021D140: jr          $ra
    // 0x8021D144: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D144: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802289C0_6923A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802289C4: jr          $ra
    // 0x802289C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802289C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80214988_67E368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214988: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021498C: jr          $ra
    // 0x80214990: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80214990: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021E154_687B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E154: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021E158: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021E15C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021E160: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021E164: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021E168: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021E16C: addiu       $a1, $a1, -0x1EC8
    ctx->r5 = ADD32(ctx->r5, -0X1EC8);
    // 0x8021E170: jal         0x80034E08
    // 0x8021E174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021E174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021E178: bne         $v0, $zero, L_8021E188
    if (ctx->r2 != 0) {
        // 0x8021E17C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021E188;
    }
    // 0x8021E17C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E180: b           L_8021E1F0
    // 0x8021E184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E1F0;
    // 0x8021E184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021E188:
    // 0x8021E188: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E18C: lwc1        $f0, -0x52C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52C8);
    // 0x8021E190: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021E194: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021E198: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021E19C: addiu       $a1, $a1, 0x75A0
    ctx->r5 = ADD32(ctx->r5, 0X75A0);
    // 0x8021E1A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021E1A4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021E1A8: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x8021E1AC: addiu       $t7, $zero, 0x4E1
    ctx->r15 = ADD32(0, 0X4E1);
    // 0x8021E1B0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8021E1B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8021E1B8: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8021E1BC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021E1C0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E1C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E1C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E1CC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021E1D0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021E1D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E1D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E1DC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E1E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021E1E4: jal         0x8000DBF0
    // 0x8021E1E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021E1E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021E1EC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_8021E1F0:
    // 0x8021E1F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E1F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021E1F8: jr          $ra
    // 0x8021E1FC: nop

    TRACE_RETURN()
    return;
    // 0x8021E1FC: nop

;}
RECOMP_FUNC void func_80228914_6922F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228914: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228918: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8022891C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228920: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80228924: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228928: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8022892C: addiu       $a1, $a1, -0x76F8
    ctx->r5 = ADD32(ctx->r5, -0X76F8);
    // 0x80228930: jal         0x80034E08
    // 0x80228934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80228934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80228938: bne         $v0, $zero, L_80228948
    if (ctx->r2 != 0) {
        // 0x8022893C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80228948;
    }
    // 0x8022893C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80228940: b           L_802289B0
    // 0x80228944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802289B0;
    // 0x80228944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80228948:
    // 0x80228948: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022894C: lwc1        $f0, -0x4D9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D9C);
    // 0x80228950: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80228954: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80228958: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8022895C: addiu       $a1, $a1, 0x4A70
    ctx->r5 = ADD32(ctx->r5, 0X4A70);
    // 0x80228960: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80228964: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80228968: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x8022896C: addiu       $t7, $zero, 0x4E3
    ctx->r15 = ADD32(0, 0X4E3);
    // 0x80228970: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80228974: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80228978: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8022897C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80228980: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80228984: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80228988: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022898C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80228990: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80228994: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80228998: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8022899C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802289A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802289A4: jal         0x8000DBF0
    // 0x802289A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802289A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802289AC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802289B0:
    // 0x802289B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802289B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802289B8: jr          $ra
    // 0x802289BC: nop

    TRACE_RETURN()
    return;
    // 0x802289BC: nop

;}
RECOMP_FUNC void func_8021D9B8_687398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D9B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021D9BC: jr          $ra
    // 0x8021D9C0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D9C0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021BE38_685818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BE38: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021BE3C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BE40: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BE44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021BE48: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021BE4C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BE50: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8021BE54: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BE58: nop

    // 0x8021BE5C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BE60: beql        $t7, $zero, L_8021BEB0
    if (ctx->r15 == 0) {
        // 0x8021BE64: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_8021BEB0;
    }
    goto skip_0;
    // 0x8021BE64: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x8021BE68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021BE6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BE70: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021BE74: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BE78: nop

    // 0x8021BE7C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021BE80: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BE84: nop

    // 0x8021BE88: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BE8C: bne         $t7, $zero, L_8021BEA4
    if (ctx->r15 != 0) {
        // 0x8021BE90: nop
    
            goto L_8021BEA4;
    }
    // 0x8021BE90: nop

    // 0x8021BE94: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8021BE98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BE9C: b           L_8021BEBC
    // 0x8021BEA0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021BEBC;
    // 0x8021BEA0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8021BEA4:
    // 0x8021BEA4: b           L_8021BEBC
    // 0x8021BEA8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021BEBC;
    // 0x8021BEA8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021BEAC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_8021BEB0:
    // 0x8021BEB0: nop

    // 0x8021BEB4: bltz        $t7, L_8021BEA4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8021BEB8: nop
    
            goto L_8021BEA4;
    }
    // 0x8021BEB8: nop

L_8021BEBC:
    // 0x8021BEBC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021BEC0: jr          $ra
    // 0x8021BEC4: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8021BEC4: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8022999C_69337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022999C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802299A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802299A4: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x802299A8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802299AC: swc1        $f12, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f12.u32l;
    // 0x802299B0: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x802299B4: swc1        $f14, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f14.u32l;
    // 0x802299B8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802299BC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802299C0: bc1f        L_802299E0
    if (!c1cs) {
        // 0x802299C4: swc1        $f4, 0xB0($a0)
        MEM_W(0XB0, ctx->r4) = ctx->f4.u32l;
            goto L_802299E0;
    }
    // 0x802299C4: swc1        $f4, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f4.u32l;
    // 0x802299C8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802299CC: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802299D0: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802299D4: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802299D8: b           L_802299EC
    // 0x802299DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802299EC;
    // 0x802299DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802299E0:
    // 0x802299E0: lwc1        $f16, 0x3C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802299E4: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802299E8: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_802299EC:
    // 0x802299EC: lwc1        $f14, 0x34($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802299F0: lwc1        $f2, 0x48($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802299F4: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802299F8: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802299FC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80229A00: nop

    // 0x80229A04: bc1f        L_80229A18
    if (!c1cs) {
        // 0x80229A08: swc1        $f4, 0x40($v0)
        MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
            goto L_80229A18;
    }
    // 0x80229A08: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x80229A0C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80229A10: b           L_80229A1C
    // 0x80229A14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80229A1C;
    // 0x80229A14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80229A18:
    // 0x80229A18: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80229A1C:
    // 0x80229A1C: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80229A20: lwc1        $f2, 0x54($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80229A24: lwc1        $f12, 0x50($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80229A28: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80229A2C: nop

    // 0x80229A30: bc1f        L_80229A44
    if (!c1cs) {
        // 0x80229A34: swc1        $f6, 0x4C($v0)
        MEM_W(0X4C, ctx->r2) = ctx->f6.u32l;
            goto L_80229A44;
    }
    // 0x80229A34: swc1        $f6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f6.u32l;
    // 0x80229A38: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80229A3C: b           L_80229A48
    // 0x80229A40: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80229A48;
    // 0x80229A40: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80229A44:
    // 0x80229A44: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80229A48:
    // 0x80229A48: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80229A4C: jr          $ra
    // 0x80229A50: swc1        $f8, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80229A50: swc1        $f8, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80225980_68F360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225980: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80225984: jr          $ra
    // 0x80225988: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80225988: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80227130_690B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227130: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x80227134: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80227138: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x8022713C: beq         $at, $zero, L_80227240
    if (ctx->r1 == 0) {
        // 0x80227140: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80227240;
    }
    // 0x80227140: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80227144: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80227148: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022714C: addu        $at, $at, $t6
    gpr jr_addend_80227154 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80227150: lw          $t6, -0x4E78($at)
    ctx->r14 = ADD32(ctx->r1, -0X4E78);
    // 0x80227154: jr          $t6
    // 0x80227158: nop

    switch (jr_addend_80227154 >> 2) {
        case 0: goto L_80227188; break;
        case 1: goto L_802271B8; break;
        case 2: goto L_80227240; break;
        case 3: goto L_802271E8; break;
        case 4: goto L_80227240; break;
        case 5: goto L_80227218; break;
        case 6: goto L_8022715C; break;
        default: switch_error(__func__, 0x80227154, 0x8022B188);
    }
    // 0x80227158: nop

L_8022715C:
    // 0x8022715C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80227160: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80227164: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227168: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8022716C: addiu       $t7, $t7, 0x2CD8
    ctx->r15 = ADD32(ctx->r15, 0X2CD8);
    // 0x80227170: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227174: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80227178: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8022717C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80227180: b           L_80227240
    // 0x80227184: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
        goto L_80227240;
    // 0x80227184: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80227188:
    // 0x80227188: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8022718C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80227190: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227194: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80227198: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022719C: addiu       $t0, $t0, 0x1D18
    ctx->r8 = ADD32(ctx->r8, 0X1D18);
    // 0x802271A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802271A4: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
    // 0x802271A8: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802271AC: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x802271B0: b           L_80227240
    // 0x802271B4: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_80227240;
    // 0x802271B4: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_802271B8:
    // 0x802271B8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802271BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802271C0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802271C4: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x802271C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802271CC: addiu       $t3, $t3, 0x1D18
    ctx->r11 = ADD32(ctx->r11, 0X1D18);
    // 0x802271D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802271D4: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x802271D8: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x802271DC: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x802271E0: b           L_80227240
    // 0x802271E4: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
        goto L_80227240;
    // 0x802271E4: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
L_802271E8:
    // 0x802271E8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802271EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802271F0: sb          $t5, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r13;
    // 0x802271F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802271F8: lwc1        $f10, -0x4E5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4E5C);
    // 0x802271FC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80227200: addiu       $t6, $t6, 0x758
    ctx->r14 = ADD32(ctx->r14, 0X758);
    // 0x80227204: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227208: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8022720C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80227210: b           L_80227240
    // 0x80227214: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
        goto L_80227240;
    // 0x80227214: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
L_80227218:
    // 0x80227218: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022721C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80227220: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227224: lwc1        $f16, -0x4E58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E58);
    // 0x80227228: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8022722C: addiu       $t8, $t8, 0x2040
    ctx->r24 = ADD32(ctx->r24, 0X2040);
    // 0x80227230: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227234: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80227238: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x8022723C: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_80227240:
    // 0x80227240: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80227244: swc1        $f12, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f12.u32l;
    // 0x80227248: jr          $ra
    // 0x8022724C: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8022724C: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80229984_693364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229984: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80229988: nop

    // 0x8022998C: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x80229990: swc1        $f0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f0.u32l;
    // 0x80229994: jr          $ra
    // 0x80229998: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80229998: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8021D250_686C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D250: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021D254: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021D258: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021D25C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021D260: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D264: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021D268: addiu       $a1, $a1, -0x3200
    ctx->r5 = ADD32(ctx->r5, -0X3200);
    // 0x8021D26C: jal         0x80034E08
    // 0x8021D270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021D270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021D274: bne         $v0, $zero, L_8021D284
    if (ctx->r2 != 0) {
        // 0x8021D278: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021D284;
    }
    // 0x8021D278: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021D27C: b           L_8021D2FC
    // 0x8021D280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021D2FC;
    // 0x8021D280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021D284:
    // 0x8021D284: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021D288: lwc1        $f0, -0x52F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52F0);
    // 0x8021D28C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021D290: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021D294: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021D298: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021D29C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021D2A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021D2A4: addiu       $a1, $a1, 0x6970
    ctx->r5 = ADD32(ctx->r5, 0X6970);
    // 0x8021D2A8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021D2AC: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8021D2B0: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8021D2B4: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8021D2B8: addiu       $t9, $zero, 0x4E1
    ctx->r25 = ADD32(0, 0X4E1);
    // 0x8021D2BC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8021D2C0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8021D2C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8021D2C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8021D2CC: addiu       $a2, $a2, -0x6050
    ctx->r6 = ADD32(ctx->r6, -0X6050);
    // 0x8021D2D0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021D2D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8021D2D8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021D2DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021D2E0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021D2E4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021D2E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021D2EC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021D2F0: jal         0x8000DBF0
    // 0x8021D2F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021D2F4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8021D2F8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_8021D2FC:
    // 0x8021D2FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D300: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021D304: jr          $ra
    // 0x8021D308: nop

    TRACE_RETURN()
    return;
    // 0x8021D308: nop

;}
RECOMP_FUNC void func_8021526C_67EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021526C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80215270: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80215274: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    // 0x80215278: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021527C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215280: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80215284: nop

    // 0x80215288: bc1fl       L_802152A8
    if (!c1cs) {
        // 0x8021528C: lwc1        $f6, 0x1C($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_802152A8;
    }
    goto skip_0;
    // 0x8021528C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x80215290: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215294: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80215298: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8021529C: b           L_802152AC
    // 0x802152A0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802152AC;
    // 0x802152A0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802152A4: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
L_802152A8:
    // 0x802152A8: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_802152AC:
    // 0x802152AC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802152B0: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802152B4: jr          $ra
    // 0x802152B8: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x802152B8: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80212A04_67C3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212A04: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80212A08: sltiu       $at, $a1, 0x9
    ctx->r1 = ctx->r5 < 0X9 ? 1 : 0;
    // 0x80212A0C: beq         $at, $zero, L_80212B9C
    if (ctx->r1 == 0) {
        // 0x80212A10: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80212B9C;
    }
    // 0x80212A10: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80212A14: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80212A18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212A1C: addu        $at, $at, $t6
    gpr jr_addend_80212A24 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80212A20: lw          $t6, -0x5790($at)
    ctx->r14 = ADD32(ctx->r1, -0X5790);
    // 0x80212A24: jr          $t6
    // 0x80212A28: nop

    switch (jr_addend_80212A24 >> 2) {
        case 0: goto L_80212A2C; break;
        case 1: goto L_80212A5C; break;
        case 2: goto L_80212A88; break;
        case 3: goto L_80212AB4; break;
        case 4: goto L_80212AE4; break;
        case 5: goto L_80212B9C; break;
        case 6: goto L_80212B14; break;
        case 7: goto L_80212B40; break;
        case 8: goto L_80212B70; break;
        default: switch_error(__func__, 0x80212A24, 0x8022A870);
    }
    // 0x80212A28: nop

L_80212A2C:
    // 0x80212A2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80212A30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80212A34: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212A38: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80212A3C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212A40: addiu       $t8, $t8, 0xB0C
    ctx->r24 = ADD32(ctx->r24, 0XB0C);
    // 0x80212A44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212A48: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x80212A4C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80212A50: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80212A54: b           L_80212B9C
    // 0x80212A58: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
        goto L_80212B9C;
    // 0x80212A58: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_80212A5C:
    // 0x80212A5C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212A60: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80212A64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212A68: lwc1        $f6, -0x576C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X576C);
    // 0x80212A6C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80212A70: addiu       $t0, $t0, 0x1108
    ctx->r8 = ADD32(ctx->r8, 0X1108);
    // 0x80212A74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212A78: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80212A7C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80212A80: b           L_80212B9C
    // 0x80212A84: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_80212B9C;
    // 0x80212A84: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_80212A88:
    // 0x80212A88: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212A8C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80212A90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212A94: lwc1        $f8, -0x5768($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5768);
    // 0x80212A98: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x80212A9C: addiu       $t2, $t2, 0x1B10
    ctx->r10 = ADD32(ctx->r10, 0X1B10);
    // 0x80212AA0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212AA4: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80212AA8: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80212AAC: b           L_80212B9C
    // 0x80212AB0: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
        goto L_80212B9C;
    // 0x80212AB0: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
L_80212AB4:
    // 0x80212AB4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80212AB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212ABC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212AC0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x80212AC4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80212AC8: addiu       $t5, $t5, 0x1F50
    ctx->r13 = ADD32(ctx->r13, 0X1F50);
    // 0x80212ACC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212AD0: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x80212AD4: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80212AD8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80212ADC: b           L_80212B9C
    // 0x80212AE0: sw          $t6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r14;
        goto L_80212B9C;
    // 0x80212AE0: sw          $t6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r14;
L_80212AE4:
    // 0x80212AE4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80212AE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80212AEC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212AF0: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80212AF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212AF8: addiu       $t8, $t8, 0x22C4
    ctx->r24 = ADD32(ctx->r24, 0X22C4);
    // 0x80212AFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212B00: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x80212B04: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80212B08: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80212B0C: b           L_80212B9C
    // 0x80212B10: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
        goto L_80212B9C;
    // 0x80212B10: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_80212B14:
    // 0x80212B14: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212B18: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80212B1C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212B20: lwc1        $f18, -0x5764($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5764);
    // 0x80212B24: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80212B28: addiu       $t0, $t0, 0x26F0
    ctx->r8 = ADD32(ctx->r8, 0X26F0);
    // 0x80212B2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212B30: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80212B34: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80212B38: b           L_80212B9C
    // 0x80212B3C: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_80212B9C;
    // 0x80212B3C: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_80212B40:
    // 0x80212B40: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212B44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80212B48: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x80212B4C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212B50: lwc1        $f4, -0x5760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5760);
    // 0x80212B54: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x80212B58: addiu       $t3, $t3, 0x4B0
    ctx->r11 = ADD32(ctx->r11, 0X4B0);
    // 0x80212B5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212B60: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80212B64: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80212B68: b           L_80212B9C
    // 0x80212B6C: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
        goto L_80212B9C;
    // 0x80212B6C: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
L_80212B70:
    // 0x80212B70: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212B74: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80212B78: sb          $t5, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r13;
    // 0x80212B7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212B80: lwc1        $f6, -0x575C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X575C);
    // 0x80212B84: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80212B88: addiu       $t6, $t6, 0x2BB4
    ctx->r14 = ADD32(ctx->r14, 0X2BB4);
    // 0x80212B8C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212B90: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80212B94: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80212B98: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
L_80212B9C:
    // 0x80212B9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80212BA0: swc1        $f12, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f12.u32l;
    // 0x80212BA4: jr          $ra
    // 0x80212BA8: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80212BA8: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80226888_690268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226888: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8022688C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80226890: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80226894: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80226898: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8022689C: lui         $t5, 0x8024
    ctx->r13 = S32(0X8024 << 16);
    // 0x802268A0: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x802268A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802268A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802268AC: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x802268B0: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x802268B4: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x802268B8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x802268BC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x802268C0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x802268C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x802268C8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x802268CC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x802268D0: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x802268D4: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x802268D8: lw          $t5, -0x2B90($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X2B90);
    // 0x802268DC: addiu       $t6, $t6, -0x5B00
    ctx->r14 = ADD32(ctx->r14, -0X5B00);
    // 0x802268E0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802268E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802268E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802268EC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802268F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802268F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802268F8: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x802268FC: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80226900: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80226904: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80226908: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8022690C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80226910: sll         $t9, $a1, 24
    ctx->r25 = S32(ctx->r5 << 24);
    // 0x80226914: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80226918: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8022691C: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80226920: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80226924: ori         $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 | 0XFF;
    // 0x80226928: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022692C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80226930: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80226934: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80226938: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8022693C: lbu         $t7, 0xBB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XBB);
    // 0x80226940: lbu         $t9, 0xBF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226944: lui         $s5, 0x708
    ctx->r21 = S32(0X708 << 16);
    // 0x80226948: sll         $t6, $t7, 24
    ctx->r14 = S32(ctx->r15 << 24);
    // 0x8022694C: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80226950: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80226954: lbu         $t6, 0xC3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XC3);
    // 0x80226958: lui         $ra, 0xF580
    ctx->r31 = S32(0XF580 << 16);
    // 0x8022695C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226960: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80226964: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80226968: lbu         $t8, 0xC7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XC7);
    // 0x8022696C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80226970: ori         $ra, $ra, 0x400
    ctx->r31 = ctx->r31 | 0X400;
    // 0x80226974: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80226978: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8022697C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80226980: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80226984: ori         $s5, $s5, 0x200
    ctx->r21 = ctx->r21 | 0X200;
    // 0x80226988: lui         $s0, 0xE700
    ctx->r16 = S32(0XE700 << 16);
    // 0x8022698C: lui         $s3, 0xFD90
    ctx->r19 = S32(0XFD90 << 16);
    // 0x80226990: lui         $s4, 0xF590
    ctx->r20 = S32(0XF590 << 16);
    // 0x80226994: lui         $s6, 0xE600
    ctx->r22 = S32(0XE600 << 16);
    // 0x80226998: lui         $s7, 0xF300
    ctx->r23 = S32(0XF300 << 16);
    // 0x8022699C: lui         $fp, 0x700
    ctx->r30 = S32(0X700 << 16);
L_802269A0:
    // 0x802269A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802269A4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802269A8: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x802269AC: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x802269B0: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x802269B4: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x802269B8: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x802269BC: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802269C0: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x802269C4: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
L_802269C8:
    // 0x802269C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802269CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802269D0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802269D4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802269D8: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x802269DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802269E0: addiu       $t9, $t1, 0x7FF
    ctx->r25 = ADD32(ctx->r9, 0X7FF);
    // 0x802269E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802269E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802269EC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x802269F0: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    // 0x802269F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802269F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802269FC: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    // 0x80226A00: sw          $s4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r20;
    // 0x80226A04: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80226A08: sw          $s6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r22;
    // 0x80226A0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226A10: div         $zero, $t9, $a2
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r6)));
    // 0x80226A14: mflo        $t8
    ctx->r24 = lo;
    // 0x80226A18: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80226A1C: addiu       $t0, $zero, 0x1DF
    ctx->r8 = ADD32(0, 0X1DF);
    // 0x80226A20: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226A24: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x80226A28: or          $t6, $t7, $fp
    ctx->r14 = ctx->r15 | ctx->r30;
    // 0x80226A2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226A30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80226A34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226A38: sw          $s7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r23;
    // 0x80226A3C: bne         $a2, $zero, L_80226A48
    if (ctx->r6 != 0) {
        // 0x80226A40: nop
    
            goto L_80226A48;
    }
    // 0x80226A40: nop

    // 0x80226A44: break       7
    do_break(2149739076);
L_80226A48:
    // 0x80226A48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226A4C: bne         $a2, $at, L_80226A60
    if (ctx->r6 != ctx->r1) {
        // 0x80226A50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80226A60;
    }
    // 0x80226A50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226A54: bne         $t9, $at, L_80226A60
    if (ctx->r25 != ctx->r1) {
        // 0x80226A58: nop
    
            goto L_80226A60;
    }
    // 0x80226A58: nop

    // 0x80226A5C: break       6
    do_break(2149739100);
L_80226A60:
    // 0x80226A60: andi        $t9, $t0, 0xFFF
    ctx->r25 = ctx->r8 & 0XFFF;
    // 0x80226A64: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80226A68: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x80226A6C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80226A70: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x80226A74: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80226A78: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80226A7C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80226A80: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80226A84: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80226A88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226A8C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80226A90: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x80226A94: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x80226A98: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x80226A9C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80226AA0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80226AA4: ori         $t8, $t8, 0xC0EC
    ctx->r24 = ctx->r24 | 0XC0EC;
    // 0x80226AA8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80226AAC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80226AB0: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80226AB4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80226AB8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226ABC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80226AC0: or          $t7, $t8, $s1
    ctx->r15 = ctx->r24 | ctx->r17;
    // 0x80226AC4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80226AC8: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80226ACC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80226AD0: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80226AD4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80226AD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226ADC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80226AE0: or          $t7, $t8, $s2
    ctx->r15 = ctx->r24 | ctx->r18;
    // 0x80226AE4: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80226AE8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226AEC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80226AF0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80226AF4: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x80226AF8: addiu       $at, $zero, 0x160
    ctx->r1 = ADD32(0, 0X160);
    // 0x80226AFC: addiu       $t2, $t2, 0x20
    ctx->r10 = ADD32(ctx->r10, 0X20);
    // 0x80226B00: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80226B04: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80226B08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80226B0C: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x80226B10: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
    // 0x80226B14: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80226B18: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80226B1C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80226B20: bne         $t2, $at, L_802269C8
    if (ctx->r10 != ctx->r1) {
        // 0x80226B24: addiu       $t5, $t5, 0x3C0
        ctx->r13 = ADD32(ctx->r13, 0X3C0);
            goto L_802269C8;
    }
    // 0x80226B24: addiu       $t5, $t5, 0x3C0
    ctx->r13 = ADD32(ctx->r13, 0X3C0);
    // 0x80226B28: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80226B2C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80226B30: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x80226B34: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x80226B38: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x80226B3C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80226B40: bne         $v0, $at, L_802269A0
    if (ctx->r2 != ctx->r1) {
        // 0x80226B44: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_802269A0;
    }
    // 0x80226B44: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80226B48: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x80226B4C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80226B50: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80226B54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80226B58: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80226B5C: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x80226B60: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x80226B64: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B68: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x80226B6C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x80226B70: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80226B74: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80226B78: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80226B7C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80226B80: jr          $ra
    // 0x80226B84: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x80226B84: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8022725C_690C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022725C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80227260: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80227264: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80227268: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8022726C: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80227270: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80227274: jr          $ra
    // 0x80227278: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80227278: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80228368_691D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228368: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022836C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80228370: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228374: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80228378: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8022837C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80228380: addiu       $a1, $a1, 0x7CB8
    ctx->r5 = ADD32(ctx->r5, 0X7CB8);
    // 0x80228384: jal         0x80034E08
    // 0x80228388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80228388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8022838C: bne         $v0, $zero, L_8022839C
    if (ctx->r2 != 0) {
        // 0x80228390: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8022839C;
    }
    // 0x80228390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80228394: b           L_80228444
    // 0x80228398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80228444;
    // 0x80228398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022839C:
    // 0x8022839C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802283A0: lwc1        $f0, -0x4DB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4DB8);
    // 0x802283A4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802283A8: addiu       $a1, $a1, 0x4B4
    ctx->r5 = ADD32(ctx->r5, 0X4B4);
    // 0x802283AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802283B0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802283B4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802283B8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802283BC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802283C0: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x802283C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802283C8: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x802283CC: addiu       $t7, $zero, 0x286
    ctx->r15 = ADD32(0, 0X286);
    // 0x802283D0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x802283D4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802283D8: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802283DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802283E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802283E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802283E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802283EC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x802283F0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802283F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802283F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802283FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80228400: jal         0x8000DBF0
    // 0x80228404: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80228404: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80228408: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8022840C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80228410: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80228414: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80228418: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8022841C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80228420: swc1        $f10, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f10.u32l;
    // 0x80228424: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80228428: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x8022842C: jal         0x80011A38
    // 0x80228430: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x80228430: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_2:
    // 0x80228434: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80228438: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8022843C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x80228440: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80228444:
    // 0x80228444: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228448: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8022844C: jr          $ra
    // 0x80228450: nop

    TRACE_RETURN()
    return;
    // 0x80228450: nop

;}
RECOMP_FUNC void func_80229260_692C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229260: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80229264: nop

    // 0x80229268: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x8022926C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80229270: jr          $ra
    // 0x80229274: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80229274: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80213C90_67D670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80213C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213C98: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80213C9C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80213CA0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80213CA4: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80213CA8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80213CAC: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80213CB0: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x80213CB4: bc1fl       L_80213CD8
    if (!c1cs) {
        // 0x80213CB8: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_80213CD8;
    }
    goto skip_0;
    // 0x80213CB8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x80213CBC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80213CC0: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80213CC4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80213CC8: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80213CCC: b           L_80213CE0
    // 0x80213CD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80213CE0;
    // 0x80213CD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80213CD4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_80213CD8:
    // 0x80213CD8: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80213CDC: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_80213CE0:
    // 0x80213CE0: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80213CE4: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80213CE8: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80213CEC: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80213CF0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80213CF4: nop

    // 0x80213CF8: bc1f        L_80213D0C
    if (!c1cs) {
        // 0x80213CFC: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_80213D0C;
    }
    // 0x80213CFC: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x80213D00: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80213D04: b           L_80213D14
    // 0x80213D08: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80213D14;
    // 0x80213D08: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80213D0C:
    // 0x80213D0C: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80213D10: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80213D14:
    // 0x80213D14: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80213D18: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80213D1C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80213D20: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80213D24: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x80213D28: jal         0x800040A8
    // 0x80213D2C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80213D2C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80213D30: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80213D34: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80213D38: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x80213D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213D44: jr          $ra
    // 0x80213D48: nop

    TRACE_RETURN()
    return;
    // 0x80213D48: nop

;}
RECOMP_FUNC void func_80215D54_67F734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215D54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80215D58: jr          $ra
    // 0x80215D5C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80215D5C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802148E4_67E2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802148E4: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802148E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802148EC: ldc1        $f4, -0x5688($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5688);
    // 0x802148F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802148F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802148F8: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x802148FC: nop

    // 0x80214900: bc1fl       L_8021497C
    if (!c1cs) {
        // 0x80214904: lwc1        $f2, 0x24($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
            goto L_8021497C;
    }
    goto skip_0;
    // 0x80214904: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x80214908: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021490C: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80214910: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80214914: nop

    // 0x80214918: bc1fl       L_80214930
    if (!c1cs) {
        // 0x8021491C: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80214930;
    }
    goto skip_1;
    // 0x8021491C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x80214920: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80214924: b           L_80214930
    // 0x80214928: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80214930;
    // 0x80214928: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021492C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80214930:
    // 0x80214930: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80214934: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80214938: nop

    // 0x8021493C: bc1fl       L_80214958
    if (!c1cs) {
        // 0x80214940: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80214958;
    }
    goto skip_2;
    // 0x80214940: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x80214944: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80214948: swc1        $f12, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f12.u32l;
    // 0x8021494C: b           L_80214978
    // 0x80214950: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
        goto L_80214978;
    // 0x80214950: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80214954: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80214958:
    // 0x80214958: nop

    // 0x8021495C: bc1fl       L_80214974
    if (!c1cs) {
        // 0x80214960: add.s       $f18, $f0, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80214974;
    }
    goto skip_3;
    // 0x80214960: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
    skip_3:
    // 0x80214964: sub.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80214968: b           L_80214978
    // 0x8021496C: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
        goto L_80214978;
    // 0x8021496C: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
    // 0x80214970: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
L_80214974:
    // 0x80214974: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
L_80214978:
    // 0x80214978: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
L_8021497C:
    // 0x8021497C: swc1        $f2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f2.u32l;
    // 0x80214980: jr          $ra
    // 0x80214984: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x80214984: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_80214450_67DE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80214454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214458: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8021445C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214460: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80214464: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80214468: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8021446C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80214470: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80214474: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80214478: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021447C: bc1f        L_8021449C
    if (!c1cs) {
        // 0x80214480: swc1        $f4, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
            goto L_8021449C;
    }
    // 0x80214480: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x80214484: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80214488: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021448C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80214490: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80214494: b           L_802144A8
    // 0x80214498: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802144A8;
    // 0x80214498: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021449C:
    // 0x8021449C: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802144A0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802144A4: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_802144A8:
    // 0x802144A8: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802144AC: lwc1        $f2, 0x18($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X18);
    // 0x802144B0: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x802144B4: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802144B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802144BC: nop

    // 0x802144C0: bc1f        L_802144D4
    if (!c1cs) {
        // 0x802144C4: swc1        $f6, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
            goto L_802144D4;
    }
    // 0x802144C4: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x802144C8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802144CC: b           L_802144D8
    // 0x802144D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802144D8;
    // 0x802144D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802144D4:
    // 0x802144D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802144D8:
    // 0x802144D8: div.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802144DC: lwc1        $f2, 0x24($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802144E0: lwc1        $f12, 0x20($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802144E4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802144E8: nop

    // 0x802144EC: bc1f        L_80214500
    if (!c1cs) {
        // 0x802144F0: swc1        $f8, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
            goto L_80214500;
    }
    // 0x802144F0: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x802144F4: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802144F8: b           L_80214508
    // 0x802144FC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80214508;
    // 0x802144FC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80214500:
    // 0x80214500: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214504: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80214508:
    // 0x80214508: div.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021450C: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80214510: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80214514: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80214518: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x8021451C: jal         0x800040A8
    // 0x80214520: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80214520: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80214524: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80214528: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021452C: sh          $t6, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r14;
    // 0x80214530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214534: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80214538: jr          $ra
    // 0x8021453C: nop

    TRACE_RETURN()
    return;
    // 0x8021453C: nop

;}
RECOMP_FUNC void func_8021BE08_6857E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BE08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021BE0C: jr          $ra
    // 0x8021BE10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021BE10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021BA38_685418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BA38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021BA3C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021BA40: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021BA44: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021BA48: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021BA4C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8021BA50: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021BA54: addiu       $a1, $a1, -0x4B70
    ctx->r5 = ADD32(ctx->r5, -0X4B70);
    // 0x8021BA58: jal         0x80034E08
    // 0x8021BA5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021BA5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021BA60: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021BA64: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021BA68: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021BA6C: bne         $v0, $zero, L_8021BA7C
    if (ctx->r2 != 0) {
        // 0x8021BA70: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8021BA7C;
    }
    // 0x8021BA70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021BA74: b           L_8021BDF4
    // 0x8021BA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021BDF4;
    // 0x8021BA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021BA7C:
    // 0x8021BA7C: swc1        $f2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f2.u32l;
    // 0x8021BA80: swc1        $f12, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f12.u32l;
    // 0x8021BA84: swc1        $f14, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f14.u32l;
    // 0x8021BA88: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x8021BA8C: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x8021BA90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021BA94: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021BA98: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x8021BA9C: bgez        $t6, L_8021BAB4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021BAA0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021BAB4;
    }
    // 0x8021BAA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021BAA4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021BAA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021BAAC: nop

    // 0x8021BAB0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021BAB4:
    // 0x8021BAB4: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x8021BAB8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x8021BABC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x8021BAC0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021BAC4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8021BAC8: addiu       $a1, $a1, 0x90
    ctx->r5 = ADD32(ctx->r5, 0X90);
    // 0x8021BACC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021BAD0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021BAD4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021BAD8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8021BADC: addiu       $t8, $zero, 0x4E0
    ctx->r24 = ADD32(0, 0X4E0);
    // 0x8021BAE0: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x8021BAE4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8021BAE8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021BAEC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021BAF0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021BAF4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021BAF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021BAFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021BB00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021BB04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021BB08: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x8021BB0C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x8021BB10: jal         0x8000DBF0
    // 0x8021BB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021BB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8021BB18: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x8021BB1C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x8021BB20: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8021BB24: bne         $v0, $zero, L_8021BB34
    if (ctx->r2 != 0) {
        // 0x8021BB28: addiu       $t0, $t0, -0x4CDC
        ctx->r8 = ADD32(ctx->r8, -0X4CDC);
            goto L_8021BB34;
    }
    // 0x8021BB28: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x8021BB2C: b           L_8021BDF4
    // 0x8021BB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021BDF4;
    // 0x8021BB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021BB34:
    // 0x8021BB34: lw          $t2, 0x38($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X38);
    // 0x8021BB38: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021BB3C: addiu       $t8, $t8, -0x6098
    ctx->r24 = ADD32(ctx->r24, -0X6098);
    // 0x8021BB40: lbu         $t9, 0x5($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X5);
    // 0x8021BB44: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021BB48: lui         $t4, 0x8FFF
    ctx->r12 = S32(0X8FFF << 16);
    // 0x8021BB4C: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8021BB50: sb          $t5, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r13;
    // 0x8021BB54: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8021BB58: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x8021BB5C: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x8021BB60: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021BB64: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8021BB68: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021BB6C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021BB70: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x8021BB74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BB78: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021BB7C: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x8021BB80: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8021BB84: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x8021BB88: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BB8C: lwc1        $f10, 0x28($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021BB90: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BB94: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021BB98: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BB9C: nop

    // 0x8021BBA0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BBA4: beql        $t7, $zero, L_8021BBF4
    if (ctx->r15 == 0) {
        // 0x8021BBA8: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_8021BBF4;
    }
    goto skip_0;
    // 0x8021BBA8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8021BBAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021BBB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BBB4: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021BBB8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BBBC: nop

    // 0x8021BBC0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8021BBC4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BBC8: nop

    // 0x8021BBCC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BBD0: bne         $t7, $zero, L_8021BBE8
    if (ctx->r15 != 0) {
        // 0x8021BBD4: nop
    
            goto L_8021BBE8;
    }
    // 0x8021BBD4: nop

    // 0x8021BBD8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8021BBDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BBE0: b           L_8021BC00
    // 0x8021BBE4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021BC00;
    // 0x8021BBE4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8021BBE8:
    // 0x8021BBE8: b           L_8021BC00
    // 0x8021BBEC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021BC00;
    // 0x8021BBEC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021BBF0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_8021BBF4:
    // 0x8021BBF4: nop

    // 0x8021BBF8: bltz        $t7, L_8021BBE8
    if (SIGNED(ctx->r15) < 0) {
        // 0x8021BBFC: nop
    
            goto L_8021BBE8;
    }
    // 0x8021BBFC: nop

L_8021BC00:
    // 0x8021BC00: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021BC04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021BC08: lwc1        $f18, 0x2C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x8021BC0C: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x8021BC10: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021BC14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021BC18: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BC1C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021BC20: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021BC24: nop

    // 0x8021BC28: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021BC2C: beql        $t6, $zero, L_8021BC7C
    if (ctx->r14 == 0) {
        // 0x8021BC30: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8021BC7C;
    }
    goto skip_1;
    // 0x8021BC30: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x8021BC34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021BC38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021BC3C: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021BC40: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021BC44: nop

    // 0x8021BC48: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021BC4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021BC50: nop

    // 0x8021BC54: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021BC58: bne         $t6, $zero, L_8021BC70
    if (ctx->r14 != 0) {
        // 0x8021BC5C: nop
    
            goto L_8021BC70;
    }
    // 0x8021BC5C: nop

    // 0x8021BC60: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8021BC64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BC68: b           L_8021BC88
    // 0x8021BC6C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8021BC88;
    // 0x8021BC6C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8021BC70:
    // 0x8021BC70: b           L_8021BC88
    // 0x8021BC74: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8021BC88;
    // 0x8021BC74: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8021BC78: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8021BC7C:
    // 0x8021BC7C: nop

    // 0x8021BC80: bltz        $t6, L_8021BC70
    if (SIGNED(ctx->r14) < 0) {
        // 0x8021BC84: nop
    
            goto L_8021BC70;
    }
    // 0x8021BC84: nop

L_8021BC88:
    // 0x8021BC88: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021BC8C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021BC90: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021BC94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BC98: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021BC9C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BCA0: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x8021BCA4: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8021BCA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BCAC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021BCB0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BCB4: nop

    // 0x8021BCB8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BCBC: beql        $t7, $zero, L_8021BD0C
    if (ctx->r15 == 0) {
        // 0x8021BCC0: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_8021BD0C;
    }
    goto skip_2;
    // 0x8021BCC0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8021BCC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021BCC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021BCCC: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8021BCD0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BCD4: nop

    // 0x8021BCD8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021BCDC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BCE0: nop

    // 0x8021BCE4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021BCE8: bne         $t7, $zero, L_8021BD00
    if (ctx->r15 != 0) {
        // 0x8021BCEC: nop
    
            goto L_8021BD00;
    }
    // 0x8021BCEC: nop

    // 0x8021BCF0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8021BCF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BCF8: b           L_8021BD18
    // 0x8021BCFC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021BD18;
    // 0x8021BCFC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8021BD00:
    // 0x8021BD00: b           L_8021BD18
    // 0x8021BD04: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021BD18;
    // 0x8021BD04: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021BD08: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_8021BD0C:
    // 0x8021BD0C: nop

    // 0x8021BD10: bltz        $t7, L_8021BD00
    if (SIGNED(ctx->r15) < 0) {
        // 0x8021BD14: nop
    
            goto L_8021BD00;
    }
    // 0x8021BD14: nop

L_8021BD18:
    // 0x8021BD18: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021BD1C: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021BD20: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x8021BD24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021BD28: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021BD2C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021BD30: lwc1        $f10, 0x34($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X34);
    // 0x8021BD34: or          $t6, $t5, $t8
    ctx->r14 = ctx->r13 | ctx->r24;
    // 0x8021BD38: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BD3C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021BD40: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021BD44: nop

    // 0x8021BD48: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021BD4C: beql        $t9, $zero, L_8021BD9C
    if (ctx->r25 == 0) {
        // 0x8021BD50: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_8021BD9C;
    }
    goto skip_3;
    // 0x8021BD50: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    skip_3:
    // 0x8021BD54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021BD58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021BD5C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021BD60: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021BD64: nop

    // 0x8021BD68: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8021BD6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021BD70: nop

    // 0x8021BD74: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021BD78: bne         $t9, $zero, L_8021BD90
    if (ctx->r25 != 0) {
        // 0x8021BD7C: nop
    
            goto L_8021BD90;
    }
    // 0x8021BD7C: nop

    // 0x8021BD80: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8021BD84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BD88: b           L_8021BDA8
    // 0x8021BD8C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021BDA8;
    // 0x8021BD8C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021BD90:
    // 0x8021BD90: b           L_8021BDA8
    // 0x8021BD94: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021BDA8;
    // 0x8021BD94: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021BD98: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
L_8021BD9C:
    // 0x8021BD9C: nop

    // 0x8021BDA0: bltz        $t9, L_8021BD90
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021BDA4: nop
    
            goto L_8021BD90;
    }
    // 0x8021BDA4: nop

L_8021BDA8:
    // 0x8021BDA8: andi        $t5, $t9, 0xFF
    ctx->r13 = ctx->r25 & 0XFF;
    // 0x8021BDAC: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x8021BDB0: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8021BDB4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8021BDB8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021BDBC: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x8021BDC0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021BDC4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8021BDC8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021BDCC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021BDD0: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x8021BDD4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x8021BDD8: lw          $t3, 0x30($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X30);
    // 0x8021BDDC: subu        $t8, $t4, $t3
    ctx->r24 = SUB32(ctx->r12, ctx->r11);
    // 0x8021BDE0: and         $t7, $t5, $t8
    ctx->r15 = ctx->r13 & ctx->r24;
    // 0x8021BDE4: and         $a1, $t7, $t4
    ctx->r5 = ctx->r15 & ctx->r12;
    // 0x8021BDE8: jal         0x80040620
    // 0x8021BDEC: and         $a0, $t3, $t4
    ctx->r4 = ctx->r11 & ctx->r12;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8021BDEC: and         $a0, $t3, $t4
    ctx->r4 = ctx->r11 & ctx->r12;
    after_2:
    // 0x8021BDF0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8021BDF4:
    // 0x8021BDF4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021BDF8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021BDFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021BE00: jr          $ra
    // 0x8021BE04: nop

    TRACE_RETURN()
    return;
    // 0x8021BE04: nop

;}
RECOMP_FUNC void func_80214688_67E068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214688: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021468C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214690: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214694: addiu       $a1, $a1, 0x467C
    ctx->r5 = ADD32(ctx->r5, 0X467C);
    // 0x80214698: jal         0x80034E08
    // 0x8021469C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021469C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802146A0: bne         $v0, $zero, L_802146B0
    if (ctx->r2 != 0) {
        // 0x802146A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802146B0;
    }
    // 0x802146A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802146A8: b           L_80214790
    // 0x802146AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214790;
    // 0x802146AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802146B0:
    // 0x802146B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802146B4: lwc1        $f0, -0x5698($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5698);
    // 0x802146B8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802146BC: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    // 0x802146C0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802146C4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802146C8: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x802146CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802146D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802146D4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802146D8: lui         $a3, 0xC38C
    ctx->r7 = S32(0XC38C << 16);
    // 0x802146DC: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x802146E0: addiu       $t7, $zero, 0x1FF
    ctx->r15 = ADD32(0, 0X1FF);
    // 0x802146E4: addiu       $t8, $zero, 0x16F
    ctx->r24 = ADD32(0, 0X16F);
    // 0x802146E8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x802146EC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x802146F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802146F4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802146F8: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x802146FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214700: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80214704: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80214708: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021470C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80214710: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80214714: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80214718: jal         0x8000DBF0
    // 0x8021471C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021471C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80214720: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80214724: lwc1        $f0, -0x5694($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5694);
    // 0x80214728: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021472C: addiu       $a1, $a1, 0x58
    ctx->r5 = ADD32(ctx->r5, 0X58);
    // 0x80214730: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80214734: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80214738: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021473C: lwc1        $f10, -0x5690($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5690);
    // 0x80214740: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80214744: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80214748: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x8021474C: addiu       $t0, $zero, 0x1FA
    ctx->r8 = ADD32(0, 0X1FA);
    // 0x80214750: addiu       $t1, $zero, 0x16F
    ctx->r9 = ADD32(0, 0X16F);
    // 0x80214754: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80214758: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8021475C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80214760: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80214764: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80214768: lui         $a3, 0xC322
    ctx->r7 = S32(0XC322 << 16);
    // 0x8021476C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214770: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80214774: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80214778: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021477C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80214780: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214784: jal         0x8000DBF0
    // 0x80214788: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80214788: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8021478C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80214790:
    // 0x80214790: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80214794: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80214798: jr          $ra
    // 0x8021479C: nop

    TRACE_RETURN()
    return;
    // 0x8021479C: nop

;}
RECOMP_FUNC void func_80224750_68E130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224750: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80224754: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80224758: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022475C: bgez        $t6, L_80224774
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80224760: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80224774;
    }
    // 0x80224760: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80224764: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80224768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022476C: nop

    // 0x80224770: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80224774:
    // 0x80224774: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80224778: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8022477C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224780: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80224784: nop

    // 0x80224788: bc1fl       L_802247AC
    if (!c1cs) {
        // 0x8022478C: lwc1        $f18, 0x1C($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_802247AC;
    }
    goto skip_0;
    // 0x8022478C: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x80224790: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224794: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80224798: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8022479C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802247A0: b           L_802247B4
    // 0x802247A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802247B4;
    // 0x802247A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802247A8: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
L_802247AC:
    // 0x802247AC: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802247B0: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_802247B4:
    // 0x802247B4: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802247B8: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802247BC: jr          $ra
    // 0x802247C0: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802247C0: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802179C0_6813A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802179C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802179C4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802179C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802179CC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802179D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802179D4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802179D8: addiu       $a1, $a1, 0x77FC
    ctx->r5 = ADD32(ctx->r5, 0X77FC);
    // 0x802179DC: jal         0x80034E08
    // 0x802179E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802179E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802179E4: bne         $v0, $zero, L_802179F4
    if (ctx->r2 != 0) {
        // 0x802179E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802179F4;
    }
    // 0x802179E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802179EC: b           L_80217A58
    // 0x802179F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217A58;
    // 0x802179F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802179F4:
    // 0x802179F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802179F8: lwc1        $f0, -0x55D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55D0);
    // 0x802179FC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80217A00: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80217A04: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80217A08: addiu       $a1, $a1, 0xF94
    ctx->r5 = ADD32(ctx->r5, 0XF94);
    // 0x80217A0C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217A10: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80217A14: addiu       $t6, $zero, 0x4DC
    ctx->r14 = ADD32(0, 0X4DC);
    // 0x80217A18: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80217A1C: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80217A20: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80217A24: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80217A28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80217A2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80217A30: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80217A34: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80217A38: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80217A3C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80217A40: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80217A44: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80217A48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80217A4C: jal         0x8000DBF0
    // 0x80217A50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80217A50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80217A54: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80217A58:
    // 0x80217A58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80217A5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80217A60: jr          $ra
    // 0x80217A64: nop

    TRACE_RETURN()
    return;
    // 0x80217A64: nop

;}
RECOMP_FUNC void func_8021D224_686C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D224: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021D228: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021D22C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021D230: bgez        $t6, L_8021D248
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021D234: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021D248;
    }
    // 0x8021D234: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021D238: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D23C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021D240: nop

    // 0x8021D244: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021D248:
    // 0x8021D248: jr          $ra
    // 0x8021D24C: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D24C: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802294C0_692EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802294C4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802294C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802294CC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802294D0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802294D4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802294D8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802294DC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802294E0: addiu       $a1, $a1, -0x6C04
    ctx->r5 = ADD32(ctx->r5, -0X6C04);
    // 0x802294E4: jal         0x80034E08
    // 0x802294E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802294E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802294EC: bne         $v0, $zero, L_802294FC
    if (ctx->r2 != 0) {
        // 0x802294F0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802294FC;
    }
    // 0x802294F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802294F4: b           L_802295FC
    // 0x802294F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802295FC;
    // 0x802294F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802294FC:
    // 0x802294FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229500: jal         0x80011968
    // 0x80229504: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x80229504: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x80229508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022950C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80229510: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80229514: jal         0x80011908
    // 0x80229518: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x80229518: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x8022951C: jal         0x80011760
    // 0x80229520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x80229520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80229524: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80229528: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022952C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80229530: beq         $v1, $zero, L_80229548
    if (ctx->r3 == 0) {
        // 0x80229534: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80229548;
    }
    // 0x80229534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229538: beq         $v1, $at, L_80229550
    if (ctx->r3 == ctx->r1) {
        // 0x8022953C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80229550;
    }
    // 0x8022953C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80229540: beq         $v1, $at, L_8022955C
    if (ctx->r3 == ctx->r1) {
        // 0x80229544: nop
    
            goto L_8022955C;
    }
    // 0x80229544: nop

L_80229548:
    // 0x80229548: b           L_80229564
    // 0x8022954C: addiu       $v0, $v0, 0x10C
    ctx->r2 = ADD32(ctx->r2, 0X10C);
        goto L_80229564;
    // 0x8022954C: addiu       $v0, $v0, 0x10C
    ctx->r2 = ADD32(ctx->r2, 0X10C);
L_80229550:
    // 0x80229550: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80229554: b           L_80229564
    // 0x80229558: addiu       $v0, $v0, 0x2D8
    ctx->r2 = ADD32(ctx->r2, 0X2D8);
        goto L_80229564;
    // 0x80229558: addiu       $v0, $v0, 0x2D8
    ctx->r2 = ADD32(ctx->r2, 0X2D8);
L_8022955C:
    // 0x8022955C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80229560: addiu       $v0, $v0, 0x49C
    ctx->r2 = ADD32(ctx->r2, 0X49C);
L_80229564:
    // 0x80229564: beq         $v0, $zero, L_802295EC
    if (ctx->r2 == 0) {
        // 0x80229568: lui         $at, 0x8023
        ctx->r1 = S32(0X8023 << 16);
            goto L_802295EC;
    }
    // 0x80229568: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022956C: lwc1        $f0, -0x4D70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D70);
    // 0x80229570: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80229574: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80229578: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8022957C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80229580: addiu       $t6, $zero, 0x4E4
    ctx->r14 = ADD32(0, 0X4E4);
    // 0x80229584: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80229588: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8022958C: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x80229590: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x80229594: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80229598: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022959C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802295A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802295A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802295A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802295AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802295B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802295B4: jal         0x8000DBF0
    // 0x802295B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x802295B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x802295BC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x802295C0: jal         0x8000DD58
    // 0x802295C4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x802295C4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_5:
    // 0x802295C8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802295CC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802295D0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802295D4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x802295D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802295DC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x802295E0: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x802295E4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802295E8: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_802295EC:
    // 0x802295EC: jal         0x8000DD58
    // 0x802295F0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x802295F0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_6:
    // 0x802295F4: sh          $v0, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r2;
    // 0x802295F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_802295FC:
    // 0x802295FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80229600: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229604: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80229608: jr          $ra
    // 0x8022960C: nop

    TRACE_RETURN()
    return;
    // 0x8022960C: nop

;}
RECOMP_FUNC void func_80227360_690D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80227368: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8022736C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227370: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80227374: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80227378: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8022737C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80227380: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80227384: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80227388: jal         0x800040A8
    // 0x8022738C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8022738C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80227390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80227394: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80227398: sh          $t6, 0x8C($a0)
    MEM_H(0X8C, ctx->r4) = ctx->r14;
    // 0x8022739C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802273A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802273A4: jr          $ra
    // 0x802273A8: nop

    TRACE_RETURN()
    return;
    // 0x802273A8: nop

;}
RECOMP_FUNC void func_80217D8C_68176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217D8C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80217D90: beq         $a1, $at, L_80217DD0
    if (ctx->r5 == ctx->r1) {
        // 0x80217D94: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80217DD0;
    }
    // 0x80217D94: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217D98: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80217D9C: bne         $a1, $at, L_80217DF8
    if (ctx->r5 != ctx->r1) {
        // 0x80217DA0: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80217DF8;
    }
    // 0x80217DA0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217DA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80217DA8: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80217DAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217DB0: lwc1        $f4, -0x55C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55C0);
    // 0x80217DB4: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80217DB8: addiu       $t7, $t7, 0x270
    ctx->r15 = ADD32(ctx->r15, 0X270);
    // 0x80217DBC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217DC0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80217DC4: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80217DC8: b           L_80217DF8
    // 0x80217DCC: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
        goto L_80217DF8;
    // 0x80217DCC: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80217DD0:
    // 0x80217DD0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217DD4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80217DD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217DDC: lwc1        $f6, -0x55BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55BC);
    // 0x80217DE0: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80217DE4: addiu       $t9, $t9, 0x550
    ctx->r25 = ADD32(ctx->r25, 0X550);
    // 0x80217DE8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217DEC: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80217DF0: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80217DF4: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
L_80217DF8:
    // 0x80217DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80217DFC: jr          $ra
    // 0x80217E00: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80217E00: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021B15C_684B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B15C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B160: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x8021B164: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B168: swc1        $f12, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f12.u32l;
    // 0x8021B16C: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x8021B170: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021B174: nop

    // 0x8021B178: bc1fl       L_8021B1A0
    if (!c1cs) {
        // 0x8021B17C: lw          $t8, 0x54($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X54);
            goto L_8021B1A0;
    }
    goto skip_0;
    // 0x8021B17C: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    skip_0:
    // 0x8021B180: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B184: lw          $t7, 0x54($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X54);
    // 0x8021B188: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8021B18C: lwc1        $f8, 0x24($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X24);
    // 0x8021B190: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021B194: b           L_8021B1AC
    // 0x8021B198: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B1AC;
    // 0x8021B198: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021B19C: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
L_8021B1A0:
    // 0x8021B1A0: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8021B1A4: lwc1        $f16, 0x24($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8021B1A8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021B1AC:
    // 0x8021B1AC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B1B0: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021B1B4: jr          $ra
    // 0x8021B1B8: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B1B8: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80212640_67C020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212640: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80212644: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x80212648: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021264C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80212650: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80212654: sb          $v0, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r2;
    // 0x80212658: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x8021265C: jr          $ra
    // 0x80212660: sb          $v0, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80212660: sb          $v0, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r2;
;}
RECOMP_FUNC void func_8021C270_685C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C270: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8021C274: bne         $a1, $at, L_8021C2A4
    if (ctx->r5 != ctx->r1) {
        // 0x8021C278: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021C2A4;
    }
    // 0x8021C278: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C27C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8021C280: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C284: lwc1        $f4, -0x5328($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5328);
    // 0x8021C288: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x8021C28C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021C290: addiu       $t6, $t6, 0x93C
    ctx->r14 = ADD32(ctx->r14, 0X93C);
    // 0x8021C294: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021C298: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8021C29C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8021C2A0: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
L_8021C2A4:
    // 0x8021C2A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021C2A8: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x8021C2AC: jr          $ra
    // 0x8021C2B0: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C2B0: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8020D5A4_676F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D5A4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8020D5A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020D5AC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020D5B0: addiu       $t6, $a0, 0x64
    ctx->r14 = ADD32(ctx->r4, 0X64);
    // 0x8020D5B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8020D5B8: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x8020D5BC: lhu         $v0, 0x5C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5C);
    // 0x8020D5C0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8020D5C4: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x8020D5C8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8020D5CC: sw          $zero, 0x68($a0)
    MEM_W(0X68, ctx->r4) = 0;
    // 0x8020D5D0: lhu         $v1, 0x5E($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X5E);
    // 0x8020D5D4: bgez        $v0, L_8020D5EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8020D5D8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D5EC;
    }
    // 0x8020D5D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D5DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D5E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D5E4: nop

    // 0x8020D5E8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D5EC:
    // 0x8020D5EC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8020D5F0: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x8020D5F4: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x8020D5F8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020D5FC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020D600: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8020D604: nop

    // 0x8020D608: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8020D60C: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8020D610: bgez        $v1, L_8020D628
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8020D614: or          $t3, $t2, $at
        ctx->r11 = ctx->r10 | ctx->r1;
            goto L_8020D628;
    }
    // 0x8020D614: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8020D618: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D61C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D620: nop

    // 0x8020D624: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_8020D628:
    // 0x8020D628: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8020D62C: lhu         $t8, 0x60($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X60);
    // 0x8020D630: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x8020D634: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8020D638: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8020D63C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8020D640: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020D644: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020D648: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020D64C: nop

    // 0x8020D650: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8020D654: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8020D658: lhu         $t3, 0x62($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X62);
    // 0x8020D65C: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
    // 0x8020D660: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020D664: addu        $t6, $v1, $t3
    ctx->r14 = ADD32(ctx->r3, ctx->r11);
    // 0x8020D668: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020D66C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8020D670: nop

    // 0x8020D674: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D678: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020D67C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8020D680: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8020D684: nop

    // 0x8020D688: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x8020D68C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020D690: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8020D694: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8020D698: sw          $t2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r10;
    // 0x8020D69C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020D6A0: nop

    // 0x8020D6A4: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8020D6A8: or          $t1, $t5, $t0
    ctx->r9 = ctx->r13 | ctx->r8;
    // 0x8020D6AC: jr          $ra
    // 0x8020D6B0: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x8020D6B0: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_802171EC_680BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802171EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802171F0: jr          $ra
    // 0x802171F4: swc1        $f12, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802171F4: swc1        $f12, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80228854_692234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228854: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80228858: jr          $ra
    // 0x8022885C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022885C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
