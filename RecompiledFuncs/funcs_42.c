#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80213D78_5CF248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213D80: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80213D84: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80213D88: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80213D8C: bne         $v1, $zero, L_80213DBC
    if (ctx->r3 != 0) {
        // 0x80213D90: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80213DBC;
    }
    // 0x80213D90: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80213D94: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80213D98: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80213D9C: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x80213DA0: jal         0x80029E08
    // 0x80213DA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x80213DA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80213DA8: bne         $v0, $zero, L_80213DBC
    if (ctx->r2 != 0) {
        // 0x80213DAC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80213DBC;
    }
    // 0x80213DAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80213DB0: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x80213DB4: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80213DB8: beq         $t8, $zero, L_80213E24
    if (ctx->r24 == 0) {
        // 0x80213DBC: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_80213E24;
    }
L_80213DBC:
    // 0x80213DBC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213DC0: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x80213DC4: jal         0x802171A8
    // 0x80213DC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_1;
    // 0x80213DC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80213DCC: beq         $v0, $zero, L_80213E1C
    if (ctx->r2 == 0) {
        // 0x80213DD0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80213E1C;
    }
    // 0x80213DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80213DD4: jal         0x802192B4
    // 0x80213DD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x80213DD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80213DDC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80213DE0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80213DE4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80213DE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80213DEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80213DF0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80213DF4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80213DF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80213DFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80213E00: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80213E04: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80213E08: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80213E0C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80213E10: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80213E14: jal         0x80219E08
    // 0x80213E18: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_3;
    // 0x80213E18: nop

    after_3:
L_80213E1C:
    // 0x80213E1C: jal         0x80034ED4
    // 0x80213E20: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x80213E20: nop

    after_4:
L_80213E24:
    // 0x80213E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213E2C: jr          $ra
    // 0x80213E30: nop

    TRACE_RETURN()
    return;
    // 0x80213E30: nop

;}
RECOMP_FUNC void func_8021183C_5CCD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021183C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211844: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211848: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021184C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80211850: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211858: jal         0x8021A26C
    // 0x8021185C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x8021185C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80211860: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211864: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80211868: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x8021186C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80211870: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211874: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80211878: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x8021187C: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x80211880: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x80211884: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211888: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8021188C: addiu       $a0, $a0, 0x18AC
    ctx->r4 = ADD32(ctx->r4, 0X18AC);
    // 0x80211890: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80211894: jal         0x8003521C
    // 0x80211898: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211898: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x8021189C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802118A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802118A4: jr          $ra
    // 0x802118A8: nop

    TRACE_RETURN()
    return;
    // 0x802118A8: nop

;}
RECOMP_FUNC void func_802100B4_5CB584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802100B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802100B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802100BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802100C0: jal         0x80013AC4
    // 0x802100C4: addiu       $a0, $a0, -0x2374
    ctx->r4 = ADD32(ctx->r4, -0X2374);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802100C4: addiu       $a0, $a0, -0x2374
    ctx->r4 = ADD32(ctx->r4, -0X2374);
    after_0:
    // 0x802100C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802100CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802100D0: jr          $ra
    // 0x802100D4: nop

    TRACE_RETURN()
    return;
    // 0x802100D4: nop

;}
RECOMP_FUNC void func_80223D10_5DF1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223D18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80223D1C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80223D20: lw          $a1, 0x7740($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7740);
    // 0x80223D24: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x80223D28: jal         0x80223E9C
    // 0x80223D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80223E9C_5DF36C(rdram, ctx);
        goto after_0;
    // 0x80223D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80223D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223D38: jr          $ra
    // 0x80223D3C: nop

    TRACE_RETURN()
    return;
    // 0x80223D3C: nop

;}
RECOMP_FUNC void func_80221FD4_5DD4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221FD4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80221FD8: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x80221FDC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80221FE0: lh          $t6, 0x7742($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7742);
    // 0x80221FE4: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x80221FE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80221FEC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80221FF0: bgez        $v0, L_80222004
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80221FF4: slti        $at, $v0, 0x2710
        ctx->r1 = SIGNED(ctx->r2) < 0X2710 ? 1 : 0;
            goto L_80222004;
    }
    // 0x80221FF4: slti        $at, $v0, 0x2710
    ctx->r1 = SIGNED(ctx->r2) < 0X2710 ? 1 : 0;
    // 0x80221FF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80221FFC: jr          $ra
    // 0x80222000: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80222000: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
L_80222004:
    // 0x80222004: bne         $at, $zero, L_80222024
    if (ctx->r1 != 0) {
        // 0x80222008: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_80222024;
    }
    // 0x80222008: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x8022200C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80222010: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222014: sw          $t0, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r8;
    // 0x80222018: addiu       $t1, $zero, 0x270F
    ctx->r9 = ADD32(0, 0X270F);
    // 0x8022201C: jr          $ra
    // 0x80222020: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80222020: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
L_80222024:
    // 0x80222024: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222028: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
    // 0x8022202C: jr          $ra
    // 0x80222030: nop

    TRACE_RETURN()
    return;
    // 0x80222030: nop

;}
RECOMP_FUNC void func_802171A8_5D2678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802171A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802171AC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802171B0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802171B4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802171B8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802171BC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802171C0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x802171C4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802171C8: beq         $v1, $zero, L_8021729C
    if (ctx->r3 == 0) {
        // 0x802171CC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_8021729C;
    }
    // 0x802171CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802171D0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x802171D4: jal         0x80219CA0
    // 0x802171D8: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80219CA0_5D5170(rdram, ctx);
        goto after_0;
    // 0x802171D8: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802171DC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x802171E0: beq         $v0, $zero, L_80217294
    if (ctx->r2 == 0) {
        // 0x802171E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217294;
    }
    // 0x802171E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802171E8: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802171EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802171F0: lwc1        $f0, -0x5AE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AE0);
    // 0x802171F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802171F8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802171FC: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80217200: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x80217204: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80217208: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021720C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217210: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x80217214: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80217218: lhu         $t8, 0x14($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X14);
    // 0x8021721C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80217220: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80217224: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80217228: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x8021722C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80217230: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80217234: lhu         $t0, 0x18($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X18);
    // 0x80217238: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8021723C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80217240: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80217244: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80217248: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021724C: jal         0x800358E8
    // 0x80217250: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x80217250: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x80217254: beq         $v0, $zero, L_80217294
    if (ctx->r2 == 0) {
        // 0x80217258: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80217294;
    }
    // 0x80217258: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8021725C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217260: jal         0x80218C28
    // 0x80217264: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_80218C28_5D40F8(rdram, ctx);
        goto after_2;
    // 0x80217264: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_2:
    // 0x80217268: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x8021726C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80217270: ori         $t1, $zero, 0xFFFE
    ctx->r9 = 0 | 0XFFFE;
    // 0x80217274: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80217278: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x8021727C: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x80217280: sw          $t2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r10;
    // 0x80217284: lw          $t3, 0xC4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC4);
    // 0x80217288: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8021728C: b           L_8021734C
    // 0x80217290: sw          $t4, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r12;
        goto L_8021734C;
    // 0x80217290: sw          $t4, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r12;
L_80217294:
    // 0x80217294: b           L_8021734C
    // 0x80217298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021734C;
    // 0x80217298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021729C:
    // 0x8021729C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802172A0: jal         0x80219CA0
    // 0x802172A4: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_80219CA0_5D5170(rdram, ctx);
        goto after_3;
    // 0x802172A4: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_3:
    // 0x802172A8: beq         $v0, $zero, L_80217348
    if (ctx->r2 == 0) {
        // 0x802172AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217348;
    }
    // 0x802172AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802172B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802172B4: lwc1        $f0, -0x5ADC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5ADC);
    // 0x802172B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802172BC: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x802172C0: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x802172C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802172C8: or          $t5, $a3, $at
    ctx->r13 = ctx->r7 | ctx->r1;
    // 0x802172CC: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x802172D0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x802172D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802172D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802172DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802172E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802172E4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802172E8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802172EC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802172F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802172F4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802172F8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x802172FC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80217300: jal         0x800358E8
    // 0x80217304: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_4;
    // 0x80217304: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x80217308: beq         $v0, $zero, L_80217348
    if (ctx->r2 == 0) {
        // 0x8021730C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80217348;
    }
    // 0x8021730C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80217310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217314: jal         0x80218C28
    // 0x80217318: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_80218C28_5D40F8(rdram, ctx);
        goto after_5;
    // 0x80217318: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_5:
    // 0x8021731C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80217320: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80217324: ori         $t6, $zero, 0xFFFE
    ctx->r14 = 0 | 0XFFFE;
    // 0x80217328: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021732C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80217330: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x80217334: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x80217338: lw          $t8, 0xC4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC4);
    // 0x8021733C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80217340: b           L_8021734C
    // 0x80217344: sw          $t9, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r25;
        goto L_8021734C;
    // 0x80217344: sw          $t9, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r25;
L_80217348:
    // 0x80217348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021734C:
    // 0x8021734C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80217350: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80217354: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80217358: jr          $ra
    // 0x8021735C: nop

    TRACE_RETURN()
    return;
    // 0x8021735C: nop

;}
RECOMP_FUNC void func_8021DA1C_5D8EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DA1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021DA20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021DA24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021DA28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021DA2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021DA30: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021DA34: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8021DA38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021DA3C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8021DA40: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021DA44: jal         0x8021ADD0
    // 0x8021DA48: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021DA48: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    after_0:
    // 0x8021DA4C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8021DA50: jal         0x80003E10
    // 0x8021DA54: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8021DA54: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x8021DA58: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021DA5C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x8021DA60: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021DA64: jal         0x80003EA0
    // 0x8021DA68: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x8021DA68: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8021DA6C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021DA70: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021DA74: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021DA78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021DA7C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021DA80: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8021DA84: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021DA88: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8021DA8C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021DA90: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021DA94: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8021DA98: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8021DA9C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8021DAA0: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x8021DAA4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021DAA8: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8021DAAC: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021DAB0: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x8021DAB4: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8021DAB8: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021DABC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8021DAC0: jal         0x80029E08
    // 0x8021DAC4: nop

    func_80029E08_2AA08(rdram, ctx);
        goto after_3;
    // 0x8021DAC4: nop

    after_3:
    // 0x8021DAC8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8021DACC: bnel        $v0, $at, L_8021DAF0
    if (ctx->r2 != ctx->r1) {
        // 0x8021DAD0: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_8021DAF0;
    }
    goto skip_0;
    // 0x8021DAD0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x8021DAD4: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8021DAD8: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x8021DADC: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x8021DAE0: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x8021DAE4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x8021DAE8: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x8021DAEC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_8021DAF0:
    // 0x8021DAF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021DAF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021DAF8: bne         $t6, $at, L_8021DC00
    if (ctx->r14 != ctx->r1) {
        // 0x8021DAFC: nop
    
            goto L_8021DC00;
    }
    // 0x8021DAFC: nop

    // 0x8021DB00: lwc1        $f2, 0x7C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8021DB04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021DB08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021DB0C: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x8021DB10: nop

    // 0x8021DB14: bc1f        L_8021DBF8
    if (!c1cs) {
        // 0x8021DB18: nop
    
            goto L_8021DBF8;
    }
    // 0x8021DB18: nop

    // 0x8021DB1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021DB20: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8021DB24: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x8021DB28: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8021DB2C: mul.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021DB30: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8021DB34: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021DB38: nop

    // 0x8021DB3C: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021DB40: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8021DB44: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8021DB48: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021DB4C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8021DB50: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8021DB54: jal         0x80029E08
    // 0x8021DB58: nop

    func_80029E08_2AA08(rdram, ctx);
        goto after_4;
    // 0x8021DB58: nop

    after_4:
    // 0x8021DB5C: beq         $v0, $zero, L_8021DBF8
    if (ctx->r2 == 0) {
        // 0x8021DB60: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8021DBF8;
    }
    // 0x8021DB60: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021DB64: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8021DB68: lhu         $t7, 0x136($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X136);
    // 0x8021DB6C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8021DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021DB74: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8021DB78: sh          $t8, 0x136($v0)
    MEM_H(0X136, ctx->r2) = ctx->r24;
    // 0x8021DB7C: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x8021DB80: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8021DB84: jal         0x8021C744
    // 0x8021DB88: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    func_8021C744_5D7C14(rdram, ctx);
        goto after_5;
    // 0x8021DB88: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    after_5:
    // 0x8021DB8C: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8021DB90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021DB94: ldc1        $f10, -0x58C0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X58C0);
    // 0x8021DB98: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8021DB9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021DBA0: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8021DBA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021DBA8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021DBAC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x8021DBB0: ori         $at, $at, 0xFDFF
    ctx->r1 = ctx->r1 | 0XFDFF;
    // 0x8021DBB4: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x8021DBB8: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x8021DBBC: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x8021DBC0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8021DBC4: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x8021DBC8: nop

    // 0x8021DBCC: bc1f        L_8021DBF0
    if (!c1cs) {
        // 0x8021DBD0: nop
    
            goto L_8021DBF0;
    }
    // 0x8021DBD0: nop

    // 0x8021DBD4: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x8021DBD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021DBDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8021DBE0: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x8021DBE4: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x8021DBE8: b           L_8021DC00
    // 0x8021DBEC: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
        goto L_8021DC00;
    // 0x8021DBEC: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
L_8021DBF0:
    // 0x8021DBF0: b           L_8021DC00
    // 0x8021DBF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021DC00;
    // 0x8021DBF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021DBF8:
    // 0x8021DBF8: b           L_8021DC00
    // 0x8021DBFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021DC00;
    // 0x8021DBFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021DC00:
    // 0x8021DC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DC04: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021DC08: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021DC0C: jr          $ra
    // 0x8021DC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8021DC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802102D0_5CB7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802102D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802102D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802102D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802102DC: jal         0x80013AC4
    // 0x802102E0: addiu       $a0, $a0, -0x2164
    ctx->r4 = ADD32(ctx->r4, -0X2164);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802102E0: addiu       $a0, $a0, -0x2164
    ctx->r4 = ADD32(ctx->r4, -0X2164);
    after_0:
    // 0x802102E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802102E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802102EC: jr          $ra
    // 0x802102F0: nop

    TRACE_RETURN()
    return;
    // 0x802102F0: nop

;}
RECOMP_FUNC void func_8020DE64_5C9334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DE64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DE68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DE6C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DE70: jal         0x80013AC4
    // 0x8020DE74: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DE74: addiu       $a0, $a0, -0x3D9C
    ctx->r4 = ADD32(ctx->r4, -0X3D9C);
    after_0:
    // 0x8020DE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DE7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DE80: jr          $ra
    // 0x8020DE84: nop

    TRACE_RETURN()
    return;
    // 0x8020DE84: nop

;}
RECOMP_FUNC void func_80213C44_5CF114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213C48: jr          $ra
    // 0x80213C4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213C4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210DA4_5CC274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210DAC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210DB0: jal         0x80013AC4
    // 0x80210DB4: addiu       $a0, $a0, -0x18E0
    ctx->r4 = ADD32(ctx->r4, -0X18E0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210DB4: addiu       $a0, $a0, -0x18E0
    ctx->r4 = ADD32(ctx->r4, -0X18E0);
    after_0:
    // 0x80210DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210DC0: jr          $ra
    // 0x80210DC4: nop

    TRACE_RETURN()
    return;
    // 0x80210DC4: nop

;}
RECOMP_FUNC void func_8020F7FC_5CACCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F7FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F804: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F808: jal         0x80013AC4
    // 0x8020F80C: addiu       $a0, $a0, -0x2C50
    ctx->r4 = ADD32(ctx->r4, -0X2C50);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F80C: addiu       $a0, $a0, -0x2C50
    ctx->r4 = ADD32(ctx->r4, -0X2C50);
    after_0:
    // 0x8020F810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F818: jr          $ra
    // 0x8020F81C: nop

    TRACE_RETURN()
    return;
    // 0x8020F81C: nop

;}
RECOMP_FUNC void func_80223AE8_5DEFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223AE8: lhu         $v1, 0xD0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XD0);
    // 0x80223AEC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80223AF0: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x80223AF4: sra         $a1, $v1, 1
    ctx->r5 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80223AF8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80223AFC: and         $v0, $v1, $t6
    ctx->r2 = ctx->r3 & ctx->r14;
    // 0x80223B00: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80223B04: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80223B08: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80223B0C: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x80223B10: bne         $at, $zero, L_80223C00
    if (ctx->r1 != 0) {
        // 0x80223B14: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_80223C00;
    }
    // 0x80223B14: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80223B18: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80223B1C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80223B20: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80223B24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80223B28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80223B2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80223B30: bgez        $t7, L_80223B48
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80223B34: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80223B48;
    }
    // 0x80223B34: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80223B38: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80223B3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80223B40: nop

    // 0x80223B44: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80223B48:
    // 0x80223B48: lh          $t0, 0xD8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XD8);
    // 0x80223B4C: lh          $t9, 0xC8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC8);
    // 0x80223B50: lh          $t2, 0xDA($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XDA);
    // 0x80223B54: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80223B58: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80223B5C: lh          $t1, 0xCA($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XCA);
    // 0x80223B60: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80223B64: lh          $t4, 0xDC($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XDC);
    // 0x80223B68: lh          $t3, 0xCC($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XCC);
    // 0x80223B6C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80223B70: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80223B74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80223B78: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80223B7C: div.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x80223B80: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x80223B84: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80223B88: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80223B8C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80223B90: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80223B94: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80223B98: div.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80223B9C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80223BA0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80223BA4: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x80223BA8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80223BAC: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80223BB0: div.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x80223BB4: sub.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d - ctx->f8.d;
    // 0x80223BB8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80223BBC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80223BC0: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x80223BC4: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80223BC8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80223BCC: div.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80223BD0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80223BD4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80223BD8: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x80223BDC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80223BE0: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80223BE4: div.d       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f16.d, ctx->f2.d);
    // 0x80223BE8: sub.d       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f18.d - ctx->f8.d;
    // 0x80223BEC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80223BF0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80223BF4: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80223BF8: jr          $ra
    // 0x80223BFC: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80223BFC: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
L_80223C00:
    // 0x80223C00: lh          $t7, 0xD8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD8);
    // 0x80223C04: subu        $t5, $v1, $a2
    ctx->r13 = SUB32(ctx->r3, ctx->r6);
    // 0x80223C08: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80223C0C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80223C10: lh          $t6, 0xC8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC8);
    // 0x80223C14: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80223C18: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80223C1C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80223C20: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80223C24: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80223C28: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80223C2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80223C30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80223C34: lh          $t9, 0xDA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XDA);
    // 0x80223C38: lh          $t8, 0xCA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XCA);
    // 0x80223C3C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80223C40: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80223C44: lh          $t1, 0xDC($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XDC);
    // 0x80223C48: lh          $t0, 0xCC($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XCC);
    // 0x80223C4C: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x80223C50: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80223C54: div.d       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f2.d);
    // 0x80223C58: sub.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d - ctx->f4.d;
    // 0x80223C5C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80223C60: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80223C64: cvt.d.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.d = CVT_D_W(ctx->f4.u32l);
    // 0x80223C68: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80223C6C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80223C70: div.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80223C74: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80223C78: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80223C7C: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x80223C80: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80223C84: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80223C88: div.d       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x80223C8C: sub.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d - ctx->f4.d;
    // 0x80223C90: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80223C94: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80223C98: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x80223C9C: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80223CA0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80223CA4: div.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80223CA8: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80223CAC: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80223CB0: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x80223CB4: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80223CB8: lwc1        $f6, 0x10($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80223CBC: div.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x80223CC0: sub.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d - ctx->f4.d;
    // 0x80223CC4: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x80223CC8: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80223CCC: div.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80223CD0: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
    // 0x80223CD4: jr          $ra
    // 0x80223CD8: nop

    TRACE_RETURN()
    return;
    // 0x80223CD8: nop

;}
RECOMP_FUNC void func_8020EC08_5CA0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EC08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EC0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EC10: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EC14: jal         0x80013AC4
    // 0x8020EC18: addiu       $a0, $a0, -0x34CC
    ctx->r4 = ADD32(ctx->r4, -0X34CC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EC18: addiu       $a0, $a0, -0x34CC
    ctx->r4 = ADD32(ctx->r4, -0X34CC);
    after_0:
    // 0x8020EC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EC24: jr          $ra
    // 0x8020EC28: nop

    TRACE_RETURN()
    return;
    // 0x8020EC28: nop

;}
RECOMP_FUNC void func_80213CAC_5CF17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213CAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213CB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213CB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80213CB8: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x80213CBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213CC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213CC4: beq         $t6, $at, L_80213CF0
    if (ctx->r14 == ctx->r1) {
        // 0x80213CC8: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80213CF0;
    }
    // 0x80213CC8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80213CCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80213CD0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x80213CD4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213CD8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x80213CDC: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x80213CE0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x80213CE4: jalr        $t9
    // 0x80213CE8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80213CE8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x80213CEC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_80213CF0:
    // 0x80213CF0: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x80213CF4: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x80213CF8: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x80213CFC: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x80213D00: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x80213D04: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80213D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213D0C: jal         0x80216E1C
    // 0x80213D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x80213D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x80213D14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80213D18: lwc1        $f0, -0x60A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X60A0);
    // 0x80213D1C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80213D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213D24: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x80213D28: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x80213D2C: jal         0x8021A310
    // 0x80213D30: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_2;
    // 0x80213D30: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_2:
    // 0x80213D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213D38: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80213D3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80213D40: jal         0x80218DA8
    // 0x80213D44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80218DA8_5D4278(rdram, ctx);
        goto after_3;
    // 0x80213D44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80213D48: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80213D4C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80213D50: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213D54: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x80213D58: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x80213D5C: jal         0x8003521C
    // 0x80213D60: addiu       $a0, $a0, 0x3D78
    ctx->r4 = ADD32(ctx->r4, 0X3D78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80213D60: addiu       $a0, $a0, 0x3D78
    ctx->r4 = ADD32(ctx->r4, 0X3D78);
    after_4:
    // 0x80213D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213D68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80213D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213D70: jr          $ra
    // 0x80213D74: nop

    TRACE_RETURN()
    return;
    // 0x80213D74: nop

;}
RECOMP_FUNC void func_80211DAC_5CD27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211DB4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80211DB8: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x80211DBC: addiu       $t8, $zero, 0x220
    ctx->r24 = ADD32(0, 0X220);
    // 0x80211DC0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80211DC4: bne         $v0, $zero, L_80211E40
    if (ctx->r2 != 0) {
        // 0x80211DC8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80211E40;
    }
    // 0x80211DC8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80211DCC: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x80211DD0: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x80211DD4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80211DD8: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x80211DDC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80211DE0: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211DE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80211DE8: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x80211DEC: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x80211DF0: bne         $t9, $zero, L_80211E10
    if (ctx->r25 != 0) {
        // 0x80211DF4: addiu       $t2, $zero, 0xFA
        ctx->r10 = ADD32(0, 0XFA);
            goto L_80211E10;
    }
    // 0x80211DF4: addiu       $t2, $zero, 0xFA
    ctx->r10 = ADD32(0, 0XFA);
    // 0x80211DF8: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80211DFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211E00: nop

    // 0x80211E04: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80211E08: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x80211E0C: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
L_80211E10:
    // 0x80211E10: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x80211E14: beq         $t0, $zero, L_80211E20
    if (ctx->r8 == 0) {
        // 0x80211E18: lui         $at, 0x8024
        ctx->r1 = S32(0X8024 << 16);
            goto L_80211E20;
    }
    // 0x80211E18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211E1C: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
L_80211E20:
    // 0x80211E20: sb          $t2, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r10;
    // 0x80211E24: lwc1        $f10, -0x6108($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6108);
    // 0x80211E28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80211E2C: jal         0x80216DF8
    // 0x80211E30: swc1        $f10, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f10.u32l;
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_0;
    // 0x80211E30: swc1        $f10, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f10.u32l;
    after_0:
    // 0x80211E34: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211E38: jal         0x8003521C
    // 0x80211E3C: addiu       $a0, $a0, 0x1E50
    ctx->r4 = ADD32(ctx->r4, 0X1E50);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211E3C: addiu       $a0, $a0, 0x1E50
    ctx->r4 = ADD32(ctx->r4, 0X1E50);
    after_1:
L_80211E40:
    // 0x80211E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211E48: jr          $ra
    // 0x80211E4C: nop

    TRACE_RETURN()
    return;
    // 0x80211E4C: nop

;}
RECOMP_FUNC void func_8020DD78_5C9248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DD78: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020DD7C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8020DD80: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8020DD84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DD88: lw          $t6, 0xC4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC4);
    // 0x8020DD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DD90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020DD94: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020DD98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020DD9C: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    // 0x8020DDA0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8020DDA4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8020DDA8: jal         0x802192B4
    // 0x8020DDAC: sw          $t6, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->r14;
    func_802192B4_5D4784(rdram, ctx);
        goto after_0;
    // 0x8020DDAC: sw          $t6, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->r14;
    after_0:
    // 0x8020DDB0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8020DDB4: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x8020DDB8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020DDBC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8020DDC0: beq         $v1, $zero, L_8020DDD4
    if (ctx->r3 == 0) {
        // 0x8020DDC4: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_8020DDD4;
    }
    // 0x8020DDC4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x8020DDC8: sw          $v1, 0x130($v0)
    MEM_W(0X130, ctx->r2) = ctx->r3;
    // 0x8020DDCC: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x8020DDD0: sw          $t9, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->r25;
L_8020DDD4:
    // 0x8020DDD4: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x8020DDD8: beql        $t0, $zero, L_8020DDEC
    if (ctx->r8 == 0) {
        // 0x8020DDDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020DDEC;
    }
    goto skip_0;
    // 0x8020DDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020DDE0: jal         0x8020D2A0
    // 0x8020DDE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020D2A0_5C8770(rdram, ctx);
        goto after_1;
    // 0x8020DDE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8020DDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020DDEC:
    // 0x8020DDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DDF0: jr          $ra
    // 0x8020DDF4: nop

    TRACE_RETURN()
    return;
    // 0x8020DDF4: nop

;}
RECOMP_FUNC void func_8020F9AC_5CAE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F9B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F9B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F9B8: jal         0x80013AC4
    // 0x8020F9BC: addiu       $a0, $a0, -0x2AB4
    ctx->r4 = ADD32(ctx->r4, -0X2AB4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F9BC: addiu       $a0, $a0, -0x2AB4
    ctx->r4 = ADD32(ctx->r4, -0X2AB4);
    after_0:
    // 0x8020F9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F9C8: jr          $ra
    // 0x8020F9CC: nop

    TRACE_RETURN()
    return;
    // 0x8020F9CC: nop

;}
RECOMP_FUNC void func_8020E788_5C9C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E78C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E790: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E794: jal         0x80013AC4
    // 0x8020E798: addiu       $a0, $a0, -0x37A8
    ctx->r4 = ADD32(ctx->r4, -0X37A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E798: addiu       $a0, $a0, -0x37A8
    ctx->r4 = ADD32(ctx->r4, -0X37A8);
    after_0:
    // 0x8020E79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E7A4: jr          $ra
    // 0x8020E7A8: nop

    TRACE_RETURN()
    return;
    // 0x8020E7A8: nop

;}
RECOMP_FUNC void func_8020EA7C_5C9F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EA7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EA80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EA84: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EA88: jal         0x80013AC4
    // 0x8020EA8C: addiu       $a0, $a0, -0x3618
    ctx->r4 = ADD32(ctx->r4, -0X3618);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EA8C: addiu       $a0, $a0, -0x3618
    ctx->r4 = ADD32(ctx->r4, -0X3618);
    after_0:
    // 0x8020EA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EA98: jr          $ra
    // 0x8020EA9C: nop

    TRACE_RETURN()
    return;
    // 0x8020EA9C: nop

;}
RECOMP_FUNC void func_8021893C_5D3E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021893C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80218940: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80218944: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80218948: bgez        $t7, L_80218988
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021894C: nop
    
            goto L_80218988;
    }
    // 0x8021894C: nop

    // 0x80218950: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80218954: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80218958: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x8021895C: swc1        $f4, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f4.u32l;
    // 0x80218960: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80218964: swc1        $f6, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->f6.u32l;
    // 0x80218968: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021896C: swc1        $f8, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f8.u32l;
    // 0x80218970: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80218974: swc1        $f10, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f10.u32l;
    // 0x80218978: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021897C: swc1        $f16, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f16.u32l;
    // 0x80218980: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80218984: swc1        $f18, 0x88($v1)
    MEM_W(0X88, ctx->r3) = ctx->f18.u32l;
L_80218988:
    // 0x80218988: jr          $ra
    // 0x8021898C: nop

    TRACE_RETURN()
    return;
    // 0x8021898C: nop

;}
RECOMP_FUNC void func_802112E0_5CC7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802112E4: jr          $ra
    // 0x802112E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802112E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021DEC4_5D9394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DEC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DECC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021DED0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021DED4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021DED8: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x8021DEDC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8021DEE0: addiu       $t9, $t9, -0x7A78
    ctx->r25 = ADD32(ctx->r25, -0X7A78);
    // 0x8021DEE4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021DEE8: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021DEEC: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021DEF0: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021DEF4: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021DEF8: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021DEFC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021DF00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DF04: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021DF08: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021DF0C: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021DF10: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021DF14: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021DF18: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021DF1C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DF20: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021DF24: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021DF28: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021DF2C: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021DF30: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021DF34: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021DF38: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021DF3C: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021DF40: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021DF44: jal         0x80040620
    // 0x8021DF48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021DF48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021DF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DF50: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021DF54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021DF58: jr          $ra
    // 0x8021DF5C: nop

    TRACE_RETURN()
    return;
    // 0x8021DF5C: nop

;}
RECOMP_FUNC void func_80210EC4_5CC394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210ECC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210ED0: jal         0x80013AC4
    // 0x80210ED4: addiu       $a0, $a0, -0x1834
    ctx->r4 = ADD32(ctx->r4, -0X1834);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210ED4: addiu       $a0, $a0, -0x1834
    ctx->r4 = ADD32(ctx->r4, -0X1834);
    after_0:
    // 0x80210ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210EE0: jr          $ra
    // 0x80210EE4: nop

    TRACE_RETURN()
    return;
    // 0x80210EE4: nop

;}
RECOMP_FUNC void func_80216ED0_5D23A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216ED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80216ED4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80216ED8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80216EDC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80216EE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80216EE4: lwc1        $f0, -0x5AE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AE8);
    // 0x80216EE8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80216EEC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80216EF0: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x80216EF4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80216EF8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x80216EFC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x80216F00: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x80216F04: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80216F08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216F0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80216F10: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80216F14: lw          $t9, -0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X4);
    // 0x80216F18: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80216F1C: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80216F20: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80216F24: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80216F28: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80216F2C: sw          $t4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r12;
    // 0x80216F30: lw          $t5, 0xD0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XD0);
    // 0x80216F34: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80216F38: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80216F3C: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80216F40: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80216F44: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80216F48: sh          $t0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r8;
    // 0x80216F4C: jal         0x800141C4
    // 0x80216F50: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80216F50: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x80216F54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216F58: bnel        $v0, $at, L_80216F78
    if (ctx->r2 != ctx->r1) {
        // 0x80216F5C: lw          $t1, 0xD0($s1)
        ctx->r9 = MEM_W(ctx->r17, 0XD0);
            goto L_80216F78;
    }
    goto skip_0;
    // 0x80216F5C: lw          $t1, 0xD0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XD0);
    skip_0:
    // 0x80216F60: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x80216F64: jal         0x80216640
    // 0x80216F68: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_1;
    // 0x80216F68: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x80216F6C: jal         0x80013B14
    // 0x80216F70: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80216F70: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_2:
    // 0x80216F74: lw          $t1, 0xD0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XD0);
L_80216F78:
    // 0x80216F78: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x80216F7C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80216F80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80216F84: lw          $t3, 0x6984($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6984);
    // 0x80216F88: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80216F8C: lhu         $t5, 0x2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2);
    // 0x80216F90: sh          $t5, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r13;
    // 0x80216F94: jal         0x800141C4
    // 0x80216F98: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x80216F98: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    after_3:
    // 0x80216F9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216FA0: bnel        $v0, $at, L_80216FC0
    if (ctx->r2 != ctx->r1) {
        // 0x80216FA4: lhu         $v0, 0x34($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X34);
            goto L_80216FC0;
    }
    goto skip_1;
    // 0x80216FA4: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    skip_1:
    // 0x80216FA8: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x80216FAC: jal         0x80216640
    // 0x80216FB0: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_4;
    // 0x80216FB0: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_4:
    // 0x80216FB4: jal         0x80013B14
    // 0x80216FB8: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_5;
    // 0x80216FB8: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_5:
    // 0x80216FBC: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
L_80216FC0:
    // 0x80216FC0: lhu         $t7, 0x3C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X3C);
    // 0x80216FC4: addiu       $t6, $zero, 0x152
    ctx->r14 = ADD32(0, 0X152);
    // 0x80216FC8: sh          $t6, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r14;
    // 0x80216FCC: beq         $v0, $t7, L_80216FDC
    if (ctx->r2 == ctx->r15) {
        // 0x80216FD0: andi        $t8, $t6, 0xFFFF
        ctx->r24 = ctx->r14 & 0XFFFF;
            goto L_80216FDC;
    }
    // 0x80216FD0: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80216FD4: bne         $v0, $t8, L_80216FE0
    if (ctx->r2 != ctx->r24) {
        // 0x80216FD8: nop
    
            goto L_80216FE0;
    }
    // 0x80216FD8: nop

L_80216FDC:
    // 0x80216FDC: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
L_80216FE0:
    // 0x80216FE0: jal         0x80014218
    // 0x80216FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x80216FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80216FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80216FEC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80216FF0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80216FF4: jr          $ra
    // 0x80216FF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80216FF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8020F628_5CAAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F630: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F634: jal         0x80013AC4
    // 0x8020F638: addiu       $a0, $a0, -0x2E14
    ctx->r4 = ADD32(ctx->r4, -0X2E14);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F638: addiu       $a0, $a0, -0x2E14
    ctx->r4 = ADD32(ctx->r4, -0X2E14);
    after_0:
    // 0x8020F63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F644: jr          $ra
    // 0x8020F648: nop

    TRACE_RETURN()
    return;
    // 0x8020F648: nop

;}
RECOMP_FUNC void func_80210750_5CBC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210758: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021075C: jal         0x80013AC4
    // 0x80210760: addiu       $a0, $a0, -0x1D0C
    ctx->r4 = ADD32(ctx->r4, -0X1D0C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210760: addiu       $a0, $a0, -0x1D0C
    ctx->r4 = ADD32(ctx->r4, -0X1D0C);
    after_0:
    // 0x80210764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021076C: jr          $ra
    // 0x80210770: nop

    TRACE_RETURN()
    return;
    // 0x80210770: nop

;}
RECOMP_FUNC void func_802100D8_5CB5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802100D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802100DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802100E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802100E4: jal         0x80013AC4
    // 0x802100E8: addiu       $a0, $a0, -0x2358
    ctx->r4 = ADD32(ctx->r4, -0X2358);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802100E8: addiu       $a0, $a0, -0x2358
    ctx->r4 = ADD32(ctx->r4, -0X2358);
    after_0:
    // 0x802100EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802100F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802100F4: jr          $ra
    // 0x802100F8: nop

    TRACE_RETURN()
    return;
    // 0x802100F8: nop

;}
RECOMP_FUNC void func_80210A68_5CBF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A70: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210A74: jal         0x80013AC4
    // 0x80210A78: addiu       $a0, $a0, -0x1AD4
    ctx->r4 = ADD32(ctx->r4, -0X1AD4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210A78: addiu       $a0, $a0, -0x1AD4
    ctx->r4 = ADD32(ctx->r4, -0X1AD4);
    after_0:
    // 0x80210A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210A84: jr          $ra
    // 0x80210A88: nop

    TRACE_RETURN()
    return;
    // 0x80210A88: nop

;}
RECOMP_FUNC void func_8021A7E8_5D5CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A7E8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A7EC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A7F0: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A7F4: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8021A7F8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021A7FC: nop

    // 0x8021A800: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021A804: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8021A808: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8021A80C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021A810: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A814: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021A818: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A81C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021A820: nop

    // 0x8021A824: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8021A828: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8021A82C: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x8021A830: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021A834: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8021A838: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021A83C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021A840: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8021A844: nop

    // 0x8021A848: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8021A84C: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021A850: jr          $ra
    // 0x8021A854: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x8021A854: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80210D14_5CC1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210D1C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210D20: jal         0x80013AC4
    // 0x80210D24: addiu       $a0, $a0, -0x1940
    ctx->r4 = ADD32(ctx->r4, -0X1940);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210D24: addiu       $a0, $a0, -0x1940
    ctx->r4 = ADD32(ctx->r4, -0X1940);
    after_0:
    // 0x80210D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210D30: jr          $ra
    // 0x80210D34: nop

    TRACE_RETURN()
    return;
    // 0x80210D34: nop

;}
RECOMP_FUNC void func_8020E110_5C95E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E118: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E11C: jal         0x80013AC4
    // 0x8020E120: addiu       $a0, $a0, -0x3B5C
    ctx->r4 = ADD32(ctx->r4, -0X3B5C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E120: addiu       $a0, $a0, -0x3B5C
    ctx->r4 = ADD32(ctx->r4, -0X3B5C);
    after_0:
    // 0x8020E124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E12C: jr          $ra
    // 0x8020E130: nop

    TRACE_RETURN()
    return;
    // 0x8020E130: nop

;}
RECOMP_FUNC void func_80219810_5D4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219810: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80219814: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80219818: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021981C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80219820: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x80219824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219828: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021982C: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80219830: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219834: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80219838: sub.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x8021983C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80219840: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80219844: sub.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80219848: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021984C: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x80219850: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80219854: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80219858: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8021985C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80219860: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80219864: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80219868: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021986C: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    // 0x80219870: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80219874: nop

    // 0x80219878: bc1fl       L_8021988C
    if (!c1cs) {
        // 0x8021987C: div.s       $f10, $f16, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
            goto L_8021988C;
    }
    goto skip_0;
    // 0x8021987C: div.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    skip_0:
    // 0x80219880: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80219884: nop

    // 0x80219888: div.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
L_8021988C:
    // 0x8021988C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80219890: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80219894: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x80219898: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021989C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802198A0: sub.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x802198A4: div.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802198A8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802198AC: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x802198B0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802198B4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802198B8: sub.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x802198BC: div.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802198C0: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802198C4: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
    // 0x802198C8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802198CC: jr          $ra
    // 0x802198D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802198D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802104A4_5CB974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802104A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802104A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802104AC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802104B0: jal         0x80013AC4
    // 0x802104B4: addiu       $a0, $a0, -0x1F84
    ctx->r4 = ADD32(ctx->r4, -0X1F84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802104B4: addiu       $a0, $a0, -0x1F84
    ctx->r4 = ADD32(ctx->r4, -0X1F84);
    after_0:
    // 0x802104B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802104BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802104C0: jr          $ra
    // 0x802104C4: nop

    TRACE_RETURN()
    return;
    // 0x802104C4: nop

;}
RECOMP_FUNC void func_8020F4E4_5CA9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F4E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F4EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F4F0: jal         0x80013AC4
    // 0x8020F4F4: addiu       $a0, $a0, -0x2E84
    ctx->r4 = ADD32(ctx->r4, -0X2E84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F4F4: addiu       $a0, $a0, -0x2E84
    ctx->r4 = ADD32(ctx->r4, -0X2E84);
    after_0:
    // 0x8020F4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F500: jr          $ra
    // 0x8020F504: nop

    TRACE_RETURN()
    return;
    // 0x8020F504: nop

;}
RECOMP_FUNC void func_80211290_5CC760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211298: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021129C: jal         0x80013AC4
    // 0x802112A0: addiu       $a0, $a0, -0x160C
    ctx->r4 = ADD32(ctx->r4, -0X160C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802112A0: addiu       $a0, $a0, -0x160C
    ctx->r4 = ADD32(ctx->r4, -0X160C);
    after_0:
    // 0x802112A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802112A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802112AC: jr          $ra
    // 0x802112B0: nop

    TRACE_RETURN()
    return;
    // 0x802112B0: nop

;}
RECOMP_FUNC void func_80213C50_5CF120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C50: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213C54: jr          $ra
    // 0x80213C58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213C58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802221D4_5DD6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802221D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802221D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802221DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802221E0: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x802221E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802221E8: beql        $t6, $zero, L_80222214
    if (ctx->r14 == 0) {
        // 0x802221EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80222214;
    }
    goto skip_0;
    // 0x802221EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802221F0: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    // 0x802221F4: jal         0x8003521C
    // 0x802221F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802221F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802221FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80222200: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80222204: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80222208: jalr        $t9
    // 0x8022220C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8022220C: nop

    after_1:
    // 0x80222210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80222214:
    // 0x80222214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222218: jr          $ra
    // 0x8022221C: nop

    TRACE_RETURN()
    return;
    // 0x8022221C: nop

;}
RECOMP_FUNC void func_8020EA34_5C9F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EA34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EA3C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EA40: jal         0x80013AC4
    // 0x8020EA44: addiu       $a0, $a0, -0x3654
    ctx->r4 = ADD32(ctx->r4, -0X3654);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EA44: addiu       $a0, $a0, -0x3654
    ctx->r4 = ADD32(ctx->r4, -0X3654);
    after_0:
    // 0x8020EA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EA4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EA50: jr          $ra
    // 0x8020EA54: nop

    TRACE_RETURN()
    return;
    // 0x8020EA54: nop

;}
RECOMP_FUNC void func_8020FC10_5CB0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FC18: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FC1C: jal         0x80013AC4
    // 0x8020FC20: addiu       $a0, $a0, -0x28E8
    ctx->r4 = ADD32(ctx->r4, -0X28E8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FC20: addiu       $a0, $a0, -0x28E8
    ctx->r4 = ADD32(ctx->r4, -0X28E8);
    after_0:
    // 0x8020FC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FC2C: jr          $ra
    // 0x8020FC30: nop

    TRACE_RETURN()
    return;
    // 0x8020FC30: nop

;}
RECOMP_FUNC void func_80221ED4_5DD3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221ED4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80221ED8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80221EDC: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x80221EE0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80221EE4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80221EE8: jr          $ra
    // 0x80221EEC: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80221EEC: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80218234_5D3704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80218238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021823C: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x80218240: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218244: addiu       $a1, $a1, 0x2A48
    ctx->r5 = ADD32(ctx->r5, 0X2A48);
    // 0x80218248: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021824C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80218250: jal         0x802171A8
    // 0x80218254: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x80218254: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80218258: beq         $v0, $zero, L_802182A8
    if (ctx->r2 == 0) {
        // 0x8021825C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_802182A8;
    }
    // 0x8021825C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80218260: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80218264: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80218268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021826C: sw          $t6, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->r14;
    // 0x80218270: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x80218274: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80218278: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8021827C: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80218280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218284: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80218288: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x8021828C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80218290: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80218294: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x80218298: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021829C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x802182A0: b           L_802182AC
    // 0x802182A4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
        goto L_802182AC;
    // 0x802182A4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
L_802182A8:
    // 0x802182A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802182AC:
    // 0x802182AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802182B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802182B4: jr          $ra
    // 0x802182B8: nop

    TRACE_RETURN()
    return;
    // 0x802182B8: nop

;}
RECOMP_FUNC void func_80214314_5CF7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214314: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80214318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021431C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80214320: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80214324: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x80214328: lui         $t7, 0x6C0
    ctx->r15 = S32(0X6C0 << 16);
    // 0x8021432C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80214330: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80214334: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80214338: ori         $t7, $t7, 0x7EA
    ctx->r15 = ctx->r15 | 0X7EA;
    // 0x8021433C: addiu       $t8, $zero, 0x1E1
    ctx->r24 = ADD32(0, 0X1E1);
    // 0x80214340: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80214344: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x80214348: addiu       $t3, $zero, 0x10E
    ctx->r11 = ADD32(0, 0X10E);
    // 0x8021434C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x80214350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214354: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x80214358: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x8021435C: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x80214360: sw          $t0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r8;
    // 0x80214364: sb          $t1, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r9;
    // 0x80214368: sb          $t2, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r10;
    // 0x8021436C: sh          $t3, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r11;
    // 0x80214370: jalr        $t9
    // 0x80214374: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214374: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80214378: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021437C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x80214380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80214388: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8021438C: jalr        $t9
    // 0x80214390: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80214390: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80214394: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214398: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x8021439C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802143A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802143A4: jalr        $t9
    // 0x802143A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802143A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802143AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802143B0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x802143B4: jalr        $t9
    // 0x802143B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802143B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802143BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802143C0: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x802143C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802143C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802143CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802143D0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802143D4: jalr        $t9
    // 0x802143D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802143D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x802143DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802143E0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x802143E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802143E8: addiu       $a1, $zero, 0x5DC
    ctx->r5 = ADD32(0, 0X5DC);
    // 0x802143EC: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x802143F0: jalr        $t9
    // 0x802143F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802143F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x802143F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802143FC: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x80214400: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80214404: nop

    // 0x80214408: bc1f        L_80214458
    if (!c1cs) {
        // 0x8021440C: nop
    
            goto L_80214458;
    }
    // 0x8021440C: nop

    // 0x80214410: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80214414: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80214418: nop

    // 0x8021441C: bc1f        L_80214458
    if (!c1cs) {
        // 0x80214420: nop
    
            goto L_80214458;
    }
    // 0x80214420: nop

    // 0x80214424: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x80214428: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021442C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80214430: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80214434: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x80214438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021443C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80214440: bc1f        L_80214458
    if (!c1cs) {
        // 0x80214444: nop
    
            goto L_80214458;
    }
    // 0x80214444: nop

    // 0x80214448: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021444C: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    // 0x80214450: jalr        $t9
    // 0x80214454: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80214454: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    after_6:
L_80214458:
    // 0x80214458: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021445C: lwc1        $f0, -0x608C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X608C);
    // 0x80214460: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80214464: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80214468: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x8021446C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214470: addiu       $a0, $a0, 0x4498
    ctx->r4 = ADD32(ctx->r4, 0X4498);
    // 0x80214474: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80214478: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021447C: jalr        $t9
    // 0x80214480: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80214480: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_7:
    // 0x80214484: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80214488: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021448C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80214490: jr          $ra
    // 0x80214494: nop

    TRACE_RETURN()
    return;
    // 0x80214494: nop

;}
RECOMP_FUNC void func_802214CC_5DC99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802214CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802214D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802214D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802214D8: jal         0x8003F1D8
    // 0x802214DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x802214DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802214E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802214E4: bne         $v0, $zero, L_8022156C
    if (ctx->r2 != 0) {
        // 0x802214E8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_8022156C;
    }
    // 0x802214E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802214EC: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x802214F0: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802214F4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802214F8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802214FC: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80221500: sw          $t7, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r15;
    // 0x80221504: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80221508: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8022150C: sw          $t9, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r25;
    // 0x80221510: lhu         $t0, 0x14E($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14E);
    // 0x80221514: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80221518: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8022151C: sw          $t0, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r8;
    // 0x80221520: lw          $t1, 0x150($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X150);
    // 0x80221524: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x80221528: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x8022152C: sw          $t1, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r9;
    // 0x80221530: lhu         $t2, 0x154($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X154);
    // 0x80221534: addiu       $t5, $t5, 0x1584
    ctx->r13 = ADD32(ctx->r13, 0X1584);
    // 0x80221538: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022153C: sh          $t2, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r10;
    // 0x80221540: lhu         $t3, 0x156($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X156);
    // 0x80221544: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x80221548: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    // 0x8022154C: sb          $t3, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r11;
    // 0x80221550: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x80221554: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80221558: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x8022155C: jal         0x8003521C
    // 0x80221560: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221560: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    after_1:
    // 0x80221564: b           L_80221578
    // 0x80221568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221578;
    // 0x80221568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022156C:
    // 0x8022156C: jal         0x80221CCC
    // 0x80221570: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80221CCC_5DD19C(rdram, ctx);
        goto after_2;
    // 0x80221570: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80221574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221578:
    // 0x80221578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022157C: jr          $ra
    // 0x80221580: nop

    TRACE_RETURN()
    return;
    // 0x80221580: nop

;}
RECOMP_FUNC void func_8020F8D4_5CADA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F8DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F8E0: jal         0x80013AC4
    // 0x8020F8E4: addiu       $a0, $a0, -0x2B78
    ctx->r4 = ADD32(ctx->r4, -0X2B78);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F8E4: addiu       $a0, $a0, -0x2B78
    ctx->r4 = ADD32(ctx->r4, -0X2B78);
    after_0:
    // 0x8020F8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F8F0: jr          $ra
    // 0x8020F8F4: nop

    TRACE_RETURN()
    return;
    // 0x8020F8F4: nop

;}
RECOMP_FUNC void func_80220148_5DB618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220150: jal         0x80220168
    // 0x80220154: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80220168_5DB638(rdram, ctx);
        goto after_0;
    // 0x80220154: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80220158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80220160: jr          $ra
    // 0x80220164: nop

    TRACE_RETURN()
    return;
    // 0x80220164: nop

;}
RECOMP_FUNC void func_8021E60C_5D9ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E60C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021E610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021E614: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021E618: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x8021E61C: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x8021E620: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021E624: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8021E628: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021E62C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E630: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021E634: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x8021E638: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8021E63C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x8021E640: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021E644: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E648: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8021E64C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021E650: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021E654: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8021E658: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021E65C: jalr        $t9
    // 0x8021E660: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021E660: nop

    after_0:
    // 0x8021E664: bne         $v0, $zero, L_8021E69C
    if (ctx->r2 != 0) {
        // 0x8021E668: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8021E69C;
    }
    // 0x8021E668: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021E66C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021E670: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x8021E674: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x8021E678: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x8021E67C: lbu         $a1, 0xA8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA8);
    // 0x8021E680: jalr        $t9
    // 0x8021E684: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021E684: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8021E688: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8021E68C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x8021E690: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021E694: jalr        $t9
    // 0x8021E698: addiu       $a0, $a0, -0x1954
    ctx->r4 = ADD32(ctx->r4, -0X1954);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8021E698: addiu       $a0, $a0, -0x1954
    ctx->r4 = ADD32(ctx->r4, -0X1954);
    after_2:
L_8021E69C:
    // 0x8021E69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E6A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021E6A4: jr          $ra
    // 0x8021E6A8: nop

    TRACE_RETURN()
    return;
    // 0x8021E6A8: nop

;}
RECOMP_FUNC void func_80224C00_5E00D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224C00: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80224C04: lhu         $v0, 0x5E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5E);
    // 0x80224C08: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80224C0C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x80224C10: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80224C14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80224C18: lw          $t8, 0x6984($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6984);
    // 0x80224C1C: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x80224C20: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80224C24: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80224C28: sll         $t5, $t6, 3
    ctx->r13 = S32(ctx->r14 << 3);
    // 0x80224C2C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80224C30: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80224C34: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80224C38: andi        $t7, $t1, 0x18
    ctx->r15 = ctx->r9 & 0X18;
    // 0x80224C3C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80224C40: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80224C44: bne         $t7, $at, L_80224C6C
    if (ctx->r15 != ctx->r1) {
        // 0x80224C48: lw          $t0, 0x0($t6)
        ctx->r8 = MEM_W(ctx->r14, 0X0);
            goto L_80224C6C;
    }
    // 0x80224C48: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x80224C4C: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x80224C50: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80224C54: sll         $t3, $a3, 3
    ctx->r11 = S32(ctx->r7 << 3);
    // 0x80224C58: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80224C5C: addu        $t2, $t9, $at
    ctx->r10 = ADD32(ctx->r25, ctx->r1);
    // 0x80224C60: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x80224C64: jr          $ra
    // 0x80224C68: sw          $t2, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x80224C68: sw          $t2, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r10;
L_80224C6C:
    // 0x80224C6C: andi        $t5, $t1, 0x8
    ctx->r13 = ctx->r9 & 0X8;
    // 0x80224C70: beq         $t5, $zero, L_80224C98
    if (ctx->r13 == 0) {
        // 0x80224C74: andi        $t2, $t1, 0x10
        ctx->r10 = ctx->r9 & 0X10;
            goto L_80224C98;
    }
    // 0x80224C74: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x80224C78: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x80224C7C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80224C80: sll         $t9, $a3, 3
    ctx->r25 = S32(ctx->r7 << 3);
    // 0x80224C84: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x80224C88: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80224C8C: addu        $t3, $v1, $t9
    ctx->r11 = ADD32(ctx->r3, ctx->r25);
    // 0x80224C90: jr          $ra
    // 0x80224C94: sw          $t8, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80224C94: sw          $t8, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r24;
L_80224C98:
    // 0x80224C98: beq         $t2, $zero, L_80224CC0
    if (ctx->r10 == 0) {
        // 0x80224C9C: lui         $at, 0xF800
        ctx->r1 = S32(0XF800 << 16);
            goto L_80224CC0;
    }
    // 0x80224C9C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80224CA0: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x80224CA4: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x80224CA8: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x80224CAC: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x80224CB0: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80224CB4: addu        $t9, $v1, $t7
    ctx->r25 = ADD32(ctx->r3, ctx->r15);
    // 0x80224CB8: jr          $ra
    // 0x80224CBC: sw          $t6, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80224CBC: sw          $t6, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r14;
L_80224CC0:
    // 0x80224CC0: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x80224CC4: sll         $t4, $a3, 3
    ctx->r12 = S32(ctx->r7 << 3);
    // 0x80224CC8: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x80224CCC: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x80224CD0: addu        $t2, $t3, $at
    ctx->r10 = ADD32(ctx->r11, ctx->r1);
    // 0x80224CD4: sw          $t2, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r10;
    // 0x80224CD8: jr          $ra
    // 0x80224CDC: nop

    TRACE_RETURN()
    return;
    // 0x80224CDC: nop

;}
RECOMP_FUNC void func_8020E620_5C9AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E628: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E62C: jal         0x80013AC4
    // 0x8020E630: addiu       $a0, $a0, -0x38CC
    ctx->r4 = ADD32(ctx->r4, -0X38CC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E630: addiu       $a0, $a0, -0x38CC
    ctx->r4 = ADD32(ctx->r4, -0X38CC);
    after_0:
    // 0x8020E634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E63C: jr          $ra
    // 0x8020E640: nop

    TRACE_RETURN()
    return;
    // 0x8020E640: nop

;}
RECOMP_FUNC void func_80210FC0_5CC490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210FC8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210FCC: jal         0x80013AC4
    // 0x80210FD0: addiu       $a0, $a0, -0x178C
    ctx->r4 = ADD32(ctx->r4, -0X178C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210FD0: addiu       $a0, $a0, -0x178C
    ctx->r4 = ADD32(ctx->r4, -0X178C);
    after_0:
    // 0x80210FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210FD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210FDC: jr          $ra
    // 0x80210FE0: nop

    TRACE_RETURN()
    return;
    // 0x80210FE0: nop

;}
