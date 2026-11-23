#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8020EE90_5CA360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EE98: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EE9C: jal         0x80013AC4
    // 0x8020EEA0: addiu       $a0, $a0, -0x326C
    ctx->r4 = ADD32(ctx->r4, -0X326C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EEA0: addiu       $a0, $a0, -0x326C
    ctx->r4 = ADD32(ctx->r4, -0X326C);
    after_0:
    // 0x8020EEA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EEA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EEAC: jr          $ra
    // 0x8020EEB0: nop

    TRACE_RETURN()
    return;
    // 0x8020EEB0: nop

;}
RECOMP_FUNC void func_802119A4_5CCE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802119A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802119A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802119AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802119B0: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x802119B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802119B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802119BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802119C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802119C4: bgez        $t6, L_802119DC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802119C8: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802119DC;
    }
    // 0x802119C8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802119CC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802119D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802119D4: nop

    // 0x802119D8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802119DC:
    // 0x802119DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802119E0: ldc1        $f10, -0x6128($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6128);
    // 0x802119E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802119E8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802119EC: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x802119F0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802119F4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802119F8: nop

    // 0x802119FC: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80211A00: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211A04: nop

    // 0x80211A08: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211A0C: beql        $t8, $zero, L_80211A60
    if (ctx->r24 == 0) {
        // 0x80211A10: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_80211A60;
    }
    goto skip_0;
    // 0x80211A10: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x80211A14: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80211A18: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80211A1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211A20: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80211A24: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211A28: nop

    // 0x80211A2C: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80211A30: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211A34: nop

    // 0x80211A38: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211A3C: bne         $t8, $zero, L_80211A54
    if (ctx->r24 != 0) {
        // 0x80211A40: nop
    
            goto L_80211A54;
    }
    // 0x80211A40: nop

    // 0x80211A44: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80211A48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211A4C: b           L_80211A6C
    // 0x80211A50: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80211A6C;
    // 0x80211A50: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80211A54:
    // 0x80211A54: b           L_80211A6C
    // 0x80211A58: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80211A6C;
    // 0x80211A58: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80211A5C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_80211A60:
    // 0x80211A60: nop

    // 0x80211A64: bltz        $t8, L_80211A54
    if (SIGNED(ctx->r24) < 0) {
        // 0x80211A68: nop
    
            goto L_80211A54;
    }
    // 0x80211A68: nop

L_80211A6C:
    // 0x80211A6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80211A70: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x80211A74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211A78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211A7C: jal         0x8021A26C
    // 0x80211A80: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211A80: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x80211A84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80211A88: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80211A8C: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211A90: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80211A94: bgez        $t9, L_80211AAC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211A98: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_80211AAC;
    }
    // 0x80211A98: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x80211A9C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80211AA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80211AA4: nop

    // 0x80211AA8: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_80211AAC:
    // 0x80211AAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211AB0: ldc1        $f10, -0x6120($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6120);
    // 0x80211AB4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80211AB8: nop

    // 0x80211ABC: bc1fl       L_80211AD0
    if (!c1cs) {
        // 0x80211AC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211AD0;
    }
    goto skip_1;
    // 0x80211AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80211AC4: jal         0x80034ED4
    // 0x80211AC8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80211AC8: nop

    after_1:
    // 0x80211ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211AD0:
    // 0x80211AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211AD4: jr          $ra
    // 0x80211AD8: nop

    TRACE_RETURN()
    return;
    // 0x80211AD8: nop

;}
RECOMP_FUNC void func_8021A644_5D5B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021A648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A64C: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8021A650: beql        $v0, $zero, L_8021A670
    if (ctx->r2 == 0) {
        // 0x8021A654: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021A670;
    }
    goto skip_0;
    // 0x8021A654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021A658: lbu         $t6, 0x10($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X10);
    // 0x8021A65C: beql        $t6, $zero, L_8021A670
    if (ctx->r14 == 0) {
        // 0x8021A660: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021A670;
    }
    goto skip_1;
    // 0x8021A660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021A664: jal         0x8021A4E4
    // 0x8021A668: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021A4E4_5D59B4(rdram, ctx);
        goto after_0;
    // 0x8021A668: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x8021A66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021A670:
    // 0x8021A670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021A674: jr          $ra
    // 0x8021A678: nop

    TRACE_RETURN()
    return;
    // 0x8021A678: nop

;}
RECOMP_FUNC void func_80218DA8_5D4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218DA8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80218DAC: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80218DB0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80218DB4: mflo        $t7
    ctx->r15 = lo;
    // 0x80218DB8: sw          $t6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r14;
    // 0x80218DBC: sh          $t7, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r15;
    // 0x80218DC0: sh          $a2, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r6;
    // 0x80218DC4: jr          $ra
    // 0x80218DC8: sh          $a3, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80218DC8: sh          $a3, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_802213A4_5DC874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802213A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802213A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802213AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802213B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802213B4: jal         0x8003F1D8
    // 0x802213B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x802213B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802213BC: bne         $v0, $zero, L_802213E4
    if (ctx->r2 != 0) {
        // 0x802213C0: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_802213E4;
    }
    // 0x802213C0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802213C4: lw          $t6, 0x68($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X68);
    // 0x802213C8: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802213CC: lw          $a0, 0xB4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XB4);
    // 0x802213D0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802213D4: sw          $t7, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r15;
    // 0x802213D8: ori         $t9, $t7, 0x4400
    ctx->r25 = ctx->r15 | 0X4400;
    // 0x802213DC: jal         0x8003521C
    // 0x802213E0: sw          $t9, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802213E0: sw          $t9, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r25;
    after_1:
L_802213E4:
    // 0x802213E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802213E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802213EC: jr          $ra
    // 0x802213F0: nop

    TRACE_RETURN()
    return;
    // 0x802213F0: nop

;}
RECOMP_FUNC void func_8020E20C_5C96DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E20C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E214: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E218: jal         0x80013AC4
    // 0x8020E21C: addiu       $a0, $a0, -0x3AB8
    ctx->r4 = ADD32(ctx->r4, -0X3AB8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E21C: addiu       $a0, $a0, -0x3AB8
    ctx->r4 = ADD32(ctx->r4, -0X3AB8);
    after_0:
    // 0x8020E220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E228: jr          $ra
    // 0x8020E22C: nop

    TRACE_RETURN()
    return;
    // 0x8020E22C: nop

;}
RECOMP_FUNC void func_8020E2C0_5C9790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E2C8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E2CC: jal         0x80013AC4
    // 0x8020E2D0: addiu       $a0, $a0, -0x3A7C
    ctx->r4 = ADD32(ctx->r4, -0X3A7C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E2D0: addiu       $a0, $a0, -0x3A7C
    ctx->r4 = ADD32(ctx->r4, -0X3A7C);
    after_0:
    // 0x8020E2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E2D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E2DC: jr          $ra
    // 0x8020E2E0: nop

    TRACE_RETURN()
    return;
    // 0x8020E2E0: nop

;}
RECOMP_FUNC void func_80210CF0_5CC1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210CF8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210CFC: jal         0x80013AC4
    // 0x80210D00: addiu       $a0, $a0, -0x1948
    ctx->r4 = ADD32(ctx->r4, -0X1948);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210D00: addiu       $a0, $a0, -0x1948
    ctx->r4 = ADD32(ctx->r4, -0X1948);
    after_0:
    // 0x80210D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210D0C: jr          $ra
    // 0x80210D10: nop

    TRACE_RETURN()
    return;
    // 0x80210D10: nop

;}
RECOMP_FUNC void func_8020E4B8_5C9988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E4BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E4C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E4C4: jal         0x80013AC4
    // 0x8020E4C8: addiu       $a0, $a0, -0x39F0
    ctx->r4 = ADD32(ctx->r4, -0X39F0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E4C8: addiu       $a0, $a0, -0x39F0
    ctx->r4 = ADD32(ctx->r4, -0X39F0);
    after_0:
    // 0x8020E4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E4D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E4D4: jr          $ra
    // 0x8020E4D8: nop

    TRACE_RETURN()
    return;
    // 0x8020E4D8: nop

;}
RECOMP_FUNC void func_80212020_5CD4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212020: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80212024: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80212028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021202C: lui         $a1, 0xBA9D
    ctx->r5 = S32(0XBA9D << 16);
    // 0x80212030: ori         $a1, $a1, 0x4952
    ctx->r5 = ctx->r5 | 0X4952;
    // 0x80212034: jal         0x80219E40
    // 0x80212038: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80219E40_5D5310(rdram, ctx);
        goto after_0;
    // 0x80212038: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021203C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80212040: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80212044: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x80212048: addiu       $t7, $t6, -0xC
    ctx->r15 = ADD32(ctx->r14, -0XC);
    // 0x8021204C: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x80212050: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x80212054: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80212058: jal         0x8021A26C
    // 0x8021205C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_1;
    // 0x8021205C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_1:
    // 0x80212060: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80212064: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x80212068: bnel        $t8, $zero, L_8021207C
    if (ctx->r24 != 0) {
        // 0x8021206C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021207C;
    }
    goto skip_0;
    // 0x8021206C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80212070: jal         0x80034ED4
    // 0x80212074: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x80212074: nop

    after_2:
    // 0x80212078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021207C:
    // 0x8021207C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80212080: jr          $ra
    // 0x80212084: nop

    TRACE_RETURN()
    return;
    // 0x80212084: nop

;}
RECOMP_FUNC void func_8020DFA8_5C9478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DFA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DFAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DFB0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DFB4: jal         0x80013AC4
    // 0x8020DFB8: addiu       $a0, $a0, -0x3C84
    ctx->r4 = ADD32(ctx->r4, -0X3C84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DFB8: addiu       $a0, $a0, -0x3C84
    ctx->r4 = ADD32(ctx->r4, -0X3C84);
    after_0:
    // 0x8020DFBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DFC4: jr          $ra
    // 0x8020DFC8: nop

    TRACE_RETURN()
    return;
    // 0x8020DFC8: nop

;}
RECOMP_FUNC void func_802108B8_5CBD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802108BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802108C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802108C4: jal         0x80013AC4
    // 0x802108C8: addiu       $a0, $a0, -0x1C00
    ctx->r4 = ADD32(ctx->r4, -0X1C00);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802108C8: addiu       $a0, $a0, -0x1C00
    ctx->r4 = ADD32(ctx->r4, -0X1C00);
    after_0:
    // 0x802108CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802108D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802108D4: jr          $ra
    // 0x802108D8: nop

    TRACE_RETURN()
    return;
    // 0x802108D8: nop

;}
RECOMP_FUNC void func_802102AC_5CB77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802102AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802102B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802102B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802102B8: jal         0x80013AC4
    // 0x802102BC: addiu       $a0, $a0, -0x2184
    ctx->r4 = ADD32(ctx->r4, -0X2184);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802102BC: addiu       $a0, $a0, -0x2184
    ctx->r4 = ADD32(ctx->r4, -0X2184);
    after_0:
    // 0x802102C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802102C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802102C8: jr          $ra
    // 0x802102CC: nop

    TRACE_RETURN()
    return;
    // 0x802102CC: nop

;}
RECOMP_FUNC void func_80212824_5CDCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212828: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021282C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212830: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80212834: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212838: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021283C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80212840: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80212844: bne         $v0, $zero, L_80212A34
    if (ctx->r2 != 0) {
        // 0x80212848: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80212A34;
    }
    // 0x80212848: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x8021284C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80212850: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80212854: jal         0x8021A26C
    // 0x80212858: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80212858: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8021285C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80212860: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80212864: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80212868: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021286C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80212870: lui         $t0, 0x80
    ctx->r8 = S32(0X80 << 16);
    // 0x80212874: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80212878: ori         $t0, $t0, 0x620
    ctx->r8 = ctx->r8 | 0X620;
    // 0x8021287C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80212880: addiu       $t2, $zero, 0x7E
    ctx->r10 = ADD32(0, 0X7E);
    // 0x80212884: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x80212888: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x8021288C: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x80212890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212894: jal         0x80216E1C
    // 0x80212898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x80212898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8021289C: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x802128A0: sb          $t3, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r11;
    // 0x802128A4: jal         0x802192B4
    // 0x802128A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x802128A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x802128AC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802128B0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802128B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802128B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802128BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802128C0: lbu         $t4, 0xDD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XDD);
    // 0x802128C4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802128C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802128CC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802128D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802128D4: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x802128D8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x802128DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802128E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802128E4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802128E8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x802128EC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x802128F0: mul.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x802128F4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802128F8: jal         0x802192B4
    // 0x802128FC: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_3;
    // 0x802128FC: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    after_3:
    // 0x80212900: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80212904: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80212908: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021290C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80212910: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80212914: lbu         $t7, 0xDD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XDD);
    // 0x80212918: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021291C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80212920: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80212924: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80212928: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8021292C: div.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f4.d);
    // 0x80212930: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80212934: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80212938: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8021293C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80212940: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80212944: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80212948: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8021294C: jal         0x802192B4
    // 0x80212950: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_4;
    // 0x80212950: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    after_4:
    // 0x80212954: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80212958: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8021295C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212960: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80212964: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212968: lbu         $t0, 0xDD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDD);
    // 0x8021296C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80212970: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80212974: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80212978: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021297C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80212980: div.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f18.d);
    // 0x80212984: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80212988: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8021298C: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x80212990: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80212994: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80212998: add.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d + ctx->f10.d;
    // 0x8021299C: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x802129A0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802129A4: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
    // 0x802129A8: lbu         $v1, 0xDD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDD);
    // 0x802129AC: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802129B0: lbu         $t3, 0x75($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X75);
    // 0x802129B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802129B8: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802129BC: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802129C0: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802129C4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802129C8: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802129CC: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x802129D0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802129D4: nop

    // 0x802129D8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802129DC: mflo        $t4
    ctx->r12 = lo;
    // 0x802129E0: sb          $t4, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r12;
    // 0x802129E4: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802129E8: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802129EC: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x802129F0: jal         0x802192B4
    // 0x802129F4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    func_802192B4_5D4784(rdram, ctx);
        goto after_5;
    // 0x802129F4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x802129F8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x802129FC: sh          $t6, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r14;
    // 0x80212A00: jal         0x802192B4
    // 0x80212A04: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_802192B4_5D4784(rdram, ctx);
        goto after_6;
    // 0x80212A04: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x80212A08: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x80212A0C: sh          $t7, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r15;
    // 0x80212A10: jal         0x802192B4
    // 0x80212A14: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_802192B4_5D4784(rdram, ctx);
        goto after_7;
    // 0x80212A14: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_7:
    // 0x80212A18: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80212A1C: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80212A20: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212A24: sh          $t8, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r24;
    // 0x80212A28: addiu       $a0, $a0, 0x267C
    ctx->r4 = ADD32(ctx->r4, 0X267C);
    // 0x80212A2C: jal         0x8003521C
    // 0x80212A30: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x80212A30: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    after_8:
L_80212A34:
    // 0x80212A34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80212A38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212A40: jr          $ra
    // 0x80212A44: nop

    TRACE_RETURN()
    return;
    // 0x80212A44: nop

;}
RECOMP_FUNC void func_8021A308_5D57D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A308: jr          $ra
    // 0x8021A30C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8021A30C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80211ADC_5CCFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211AE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211AE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211AEC: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80211AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211AF8: jal         0x8021A26C
    // 0x80211AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80211B00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211B04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80211B08: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80211B0C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80211B10: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211B14: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80211B18: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x80211B1C: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x80211B20: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x80211B24: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211B28: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80211B2C: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, 0X1B4C);
    // 0x80211B30: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80211B34: jal         0x8003521C
    // 0x80211B38: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211B38: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x80211B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211B40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211B44: jr          $ra
    // 0x80211B48: nop

    TRACE_RETURN()
    return;
    // 0x80211B48: nop

;}
RECOMP_FUNC void func_8020F184_5CA654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F18C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F190: jal         0x80013AC4
    // 0x8020F194: addiu       $a0, $a0, -0x3100
    ctx->r4 = ADD32(ctx->r4, -0X3100);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F194: addiu       $a0, $a0, -0x3100
    ctx->r4 = ADD32(ctx->r4, -0X3100);
    after_0:
    // 0x8020F198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F1A0: jr          $ra
    // 0x8020F1A4: nop

    TRACE_RETURN()
    return;
    // 0x8020F1A4: nop

;}
RECOMP_FUNC void func_8020D2A0_5C8770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D2A4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8020D2A8: lw          $v1, 0x130($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X130);
    // 0x8020D2AC: lw          $t0, 0x1C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1C);
    // 0x8020D2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D2B8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8020D2BC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8020D2C0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8020D2C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020D2C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020D2CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020D2D0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020D2D4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020D2D8: lw          $t1, 0x20($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X20);
    // 0x8020D2DC: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8020D2E0: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
    // 0x8020D2E4: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8020D2E8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8020D2EC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020D2F0: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8020D2F4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020D2F8: sub.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8020D2FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020D300: div.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8020D304: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020D308: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8020D30C: nop

    // 0x8020D310: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D314: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8020D318: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020D31C: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8020D320: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8020D324: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020D328: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8020D32C: trunc.w.s   $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020D330: div.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8020D334: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020D338: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8020D33C: nop

    // 0x8020D340: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D344: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8020D348: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8020D34C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020D350: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8020D354: jal         0x8020D36C
    // 0x8020D358: nop

    func_8020D36C_5C883C(rdram, ctx);
        goto after_0;
    // 0x8020D358: nop

    after_0:
    // 0x8020D35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D364: jr          $ra
    // 0x8020D368: nop

    TRACE_RETURN()
    return;
    // 0x8020D368: nop

;}
RECOMP_FUNC void func_8021F418_5DA8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F41C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F420: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F424: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021F428: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F42C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x8021F430: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021F434: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x8021F438: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021F43C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021F440: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F444: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8021F448: jal         0x8021F2FC
    // 0x8021F44C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8021F2FC_5DA7CC(rdram, ctx);
        goto after_0;
    // 0x8021F44C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8021F450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F458: jr          $ra
    // 0x8021F45C: nop

    TRACE_RETURN()
    return;
    // 0x8021F45C: nop

;}
RECOMP_FUNC void func_80211EF8_5CD3C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80211EFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80211F00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80211F04: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80211F08: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80211F0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211F10: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80211F14: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80211F18: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80211F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211F20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80211F24: jal         0x8021A26C
    // 0x80211F28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211F28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x80211F2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211F30: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80211F34: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x80211F38: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211F3C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80211F40: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x80211F44: lw          $t1, 0x64($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X64);
    // 0x80211F48: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211F4C: addiu       $a0, $a0, 0x1F70
    ctx->r4 = ADD32(ctx->r4, 0X1F70);
    // 0x80211F50: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80211F54: jal         0x8003521C
    // 0x80211F58: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211F58: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    after_1:
    // 0x80211F5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80211F60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80211F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80211F68: jr          $ra
    // 0x80211F6C: nop

    TRACE_RETURN()
    return;
    // 0x80211F6C: nop

;}
RECOMP_FUNC void func_80210240_5CB710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210248: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021024C: jal         0x80013AC4
    // 0x80210250: addiu       $a0, $a0, -0x21D8
    ctx->r4 = ADD32(ctx->r4, -0X21D8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210250: addiu       $a0, $a0, -0x21D8
    ctx->r4 = ADD32(ctx->r4, -0X21D8);
    after_0:
    // 0x80210254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021025C: jr          $ra
    // 0x80210260: nop

    TRACE_RETURN()
    return;
    // 0x80210260: nop

;}
RECOMP_FUNC void func_80222548_5DDA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222548: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8022254C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80222550: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80222554: jr          $ra
    // 0x80222558: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80222558: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_8020FC34_5CB104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FC3C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FC40: jal         0x80013AC4
    // 0x8020FC44: addiu       $a0, $a0, -0x28D0
    ctx->r4 = ADD32(ctx->r4, -0X28D0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FC44: addiu       $a0, $a0, -0x28D0
    ctx->r4 = ADD32(ctx->r4, -0X28D0);
    after_0:
    // 0x8020FC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FC50: jr          $ra
    // 0x8020FC54: nop

    TRACE_RETURN()
    return;
    // 0x8020FC54: nop

;}
RECOMP_FUNC void func_8021FDAC_5DB27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FDAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021FDB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021FDB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021FDB8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021FDBC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8021FDC0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021FDC4: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8021FDC8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8021FDCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021FDD0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8021FDD4: lwc1        $f6, 0xEC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XEC);
    // 0x8021FDD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021FDDC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021FDE0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021FDE4: c.eq.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d == ctx->f8.d;
    // 0x8021FDE8: nop

    // 0x8021FDEC: bc1f        L_8021FECC
    if (!c1cs) {
        // 0x8021FDF0: nop
    
            goto L_8021FECC;
    }
    // 0x8021FDF0: nop

    // 0x8021FDF4: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8021FDF8: lwc1        $f2, 0x8($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8021FDFC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021FE00: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021FE04: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x8021FE08: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8021FE0C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021FE10: sub.s       $f14, $f6, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8021FE14: mul.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021FE18: sub.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8021FE1C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021FE20: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021FE24: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021FE28: jal         0x8021ADD0
    // 0x8021FE2C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021FE2C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x8021FE30: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021FE34: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021FE38: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8021FE3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021FE40: mul.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8021FE44: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FE48: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x8021FE4C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8021FE50: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8021FE54: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021FE58: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021FE5C: jal         0x80003EA0
    // 0x8021FE60: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x8021FE60: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x8021FE64: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021FE68: jal         0x80003E10
    // 0x8021FE6C: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8021FE6C: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    after_2:
    // 0x8021FE70: lwc1        $f6, 0xE8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x8021FE74: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021FE78: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8021FE7C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8021FE80: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021FE84: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8021FE88: nop

    // 0x8021FE8C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021FE90: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021FE94: div.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8021FE98: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x8021FE9C: jal         0x80003EA0
    // 0x8021FEA0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8021FEA0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8021FEA4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021FEA8: jal         0x80003EA0
    // 0x8021FEAC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x8021FEAC: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    after_4:
    // 0x8021FEB0: lwc1        $f8, 0xE8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x8021FEB4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021FEB8: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8021FEBC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021FEC0: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8021FEC4: div.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021FEC8: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
L_8021FECC:
    // 0x8021FECC: jal         0x80003E10
    // 0x8021FED0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_80003E10_4A10(rdram, ctx);
        goto after_5;
    // 0x8021FED0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_5:
    // 0x8021FED4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021FED8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8021FEDC: lwc1        $f10, 0xEC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x8021FEE0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021FEE4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8021FEE8: mul.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8021FEEC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021FEF0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021FEF4: nop

    // 0x8021FEF8: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021FEFC: lwc1        $f6, 0xE8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x8021FF00: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8021FF04: div.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8021FF08: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8021FF0C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021FF10: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FF14: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8021FF18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021FF1C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021FF20: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x8021FF24: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8021FF28: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8021FF2C: nop

    // 0x8021FF30: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8021FF34: lwc1        $f6, 0xEC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x8021FF38: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x8021FF3C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8021FF40: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x8021FF44: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x8021FF48: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
    // 0x8021FF4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FF50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021FF54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8021FF58: jr          $ra
    // 0x8021FF5C: nop

    TRACE_RETURN()
    return;
    // 0x8021FF5C: nop

;}
RECOMP_FUNC void func_80210948_5CBE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021094C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210950: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210954: jal         0x80013AC4
    // 0x80210958: addiu       $a0, $a0, -0x1B7C
    ctx->r4 = ADD32(ctx->r4, -0X1B7C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210958: addiu       $a0, $a0, -0x1B7C
    ctx->r4 = ADD32(ctx->r4, -0X1B7C);
    after_0:
    // 0x8021095C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210964: jr          $ra
    // 0x80210968: nop

    TRACE_RETURN()
    return;
    // 0x80210968: nop

;}
RECOMP_FUNC void func_8021018C_5CB65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210194: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210198: jal         0x80013AC4
    // 0x8021019C: addiu       $a0, $a0, -0x22B4
    ctx->r4 = ADD32(ctx->r4, -0X22B4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021019C: addiu       $a0, $a0, -0x22B4
    ctx->r4 = ADD32(ctx->r4, -0X22B4);
    after_0:
    // 0x802101A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802101A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802101A8: jr          $ra
    // 0x802101AC: nop

    TRACE_RETURN()
    return;
    // 0x802101AC: nop

;}
RECOMP_FUNC void func_80218C28_5D40F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80218C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218C30: lbu         $t6, 0x98($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X98);
    // 0x80218C34: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80218C38: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80218C3C: sb          $t6, 0x98($a1)
    MEM_B(0X98, ctx->r5) = ctx->r14;
    // 0x80218C40: lbu         $t7, 0x99($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X99);
    // 0x80218C44: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80218C48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80218C4C: sb          $t7, 0x99($a1)
    MEM_B(0X99, ctx->r5) = ctx->r15;
    // 0x80218C50: lbu         $t8, 0x9A($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9A);
    // 0x80218C54: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80218C58: sb          $t8, 0x9A($a1)
    MEM_B(0X9A, ctx->r5) = ctx->r24;
    // 0x80218C5C: lb          $t9, 0x9B($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X9B);
    // 0x80218C60: sb          $t9, 0x9B($a1)
    MEM_B(0X9B, ctx->r5) = ctx->r25;
    // 0x80218C64: lbu         $t0, 0x99($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X99);
    // 0x80218C68: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80218C6C: bgez        $t0, L_80218C80
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80218C70: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80218C80;
    }
    // 0x80218C70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80218C74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218C78: nop

    // 0x80218C7C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80218C80:
    // 0x80218C80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80218C84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218C88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80218C8C: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80218C90: swc1        $f16, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f16.u32l;
    // 0x80218C94: lbu         $t1, 0x98($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X98);
    // 0x80218C98: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80218C9C: bgez        $t1, L_80218CB0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80218CA0: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80218CB0;
    }
    // 0x80218CA0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80218CA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218CA8: nop

    // 0x80218CAC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80218CB0:
    // 0x80218CB0: swc1        $f4, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f4.u32l;
    // 0x80218CB4: sb          $t2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r10;
    // 0x80218CB8: lhu         $t3, 0x5C($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X5C);
    // 0x80218CBC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80218CC0: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x80218CC4: sh          $t3, 0x5C($a2)
    MEM_H(0X5C, ctx->r6) = ctx->r11;
    // 0x80218CC8: lhu         $t4, 0x5E($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X5E);
    // 0x80218CCC: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80218CD0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80218CD4: sh          $t4, 0x5E($a2)
    MEM_H(0X5E, ctx->r6) = ctx->r12;
    // 0x80218CD8: lbu         $t5, -0x3300($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3300);
    // 0x80218CDC: sw          $zero, 0x70($a2)
    MEM_W(0X70, ctx->r6) = 0;
    // 0x80218CE0: sb          $t6, 0x75($a2)
    MEM_B(0X75, ctx->r6) = ctx->r14;
    // 0x80218CE4: sb          $t7, 0x76($a2)
    MEM_B(0X76, ctx->r6) = ctx->r15;
    // 0x80218CE8: sb          $t5, 0x77($a2)
    MEM_B(0X77, ctx->r6) = ctx->r13;
    // 0x80218CEC: lbu         $t8, 0x74($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X74);
    // 0x80218CF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80218CF4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x80218CF8: sb          $t8, 0x74($a2)
    MEM_B(0X74, ctx->r6) = ctx->r24;
    // 0x80218CFC: lhu         $t9, 0x96($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X96);
    // 0x80218D00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80218D04: sh          $t9, 0x96($a2)
    MEM_H(0X96, ctx->r6) = ctx->r25;
    // 0x80218D08: lw          $t0, 0x48($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X48);
    // 0x80218D0C: sw          $t0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r8;
    // 0x80218D10: lhu         $t1, 0x4E($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X4E);
    // 0x80218D14: sh          $t1, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r9;
    // 0x80218D18: lh          $t2, 0x50($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X50);
    // 0x80218D1C: sh          $t2, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r10;
    // 0x80218D20: lh          $t3, 0x52($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X52);
    // 0x80218D24: sb          $zero, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = 0;
    // 0x80218D28: sh          $t3, 0x52($a2)
    MEM_H(0X52, ctx->r6) = ctx->r11;
    // 0x80218D2C: lhu         $t4, 0x3C($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X3C);
    // 0x80218D30: sh          $t4, 0x3C($a2)
    MEM_H(0X3C, ctx->r6) = ctx->r12;
    // 0x80218D34: lhu         $t5, 0x3E($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X3E);
    // 0x80218D38: sh          $t5, 0x3E($a2)
    MEM_H(0X3E, ctx->r6) = ctx->r13;
    // 0x80218D3C: lh          $t6, 0x40($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X40);
    // 0x80218D40: sb          $zero, 0x44($a2)
    MEM_B(0X44, ctx->r6) = 0;
    // 0x80218D44: sb          $t7, 0x8D($a2)
    MEM_B(0X8D, ctx->r6) = ctx->r15;
    // 0x80218D48: sh          $t6, 0x40($a2)
    MEM_H(0X40, ctx->r6) = ctx->r14;
    // 0x80218D4C: lw          $t8, 0x84($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X84);
    // 0x80218D50: sw          $t8, 0x84($a2)
    MEM_W(0X84, ctx->r6) = ctx->r24;
    // 0x80218D54: jal         0x80035214
    // 0x80218D58: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80035214_35E14(rdram, ctx);
        goto after_0;
    // 0x80218D58: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80218D5C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80218D60: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80218D64: jal         0x80035244
    // 0x80218D68: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    func_80035244_35E44(rdram, ctx);
        goto after_1;
    // 0x80218D68: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    after_1:
    // 0x80218D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80218D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80218D74: jr          $ra
    // 0x80218D78: nop

    TRACE_RETURN()
    return;
    // 0x80218D78: nop

;}
RECOMP_FUNC void func_8020EC74_5CA144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EC7C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EC80: jal         0x80013AC4
    // 0x8020EC84: addiu       $a0, $a0, -0x3464
    ctx->r4 = ADD32(ctx->r4, -0X3464);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EC84: addiu       $a0, $a0, -0x3464
    ctx->r4 = ADD32(ctx->r4, -0X3464);
    after_0:
    // 0x8020EC88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EC90: jr          $ra
    // 0x8020EC94: nop

    TRACE_RETURN()
    return;
    // 0x8020EC94: nop

;}
RECOMP_FUNC void func_80213F14_5CF3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213F14: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213F18: jr          $ra
    // 0x80213F1C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213F1C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802237A0_5DEC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802237A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802237A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802237A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802237AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802237B0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802237B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802237B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802237BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802237C0: jal         0x80035EEC
    // 0x802237C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x802237C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802237C8: beq         $v0, $zero, L_80223990
    if (ctx->r2 == 0) {
        // 0x802237CC: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80223990;
    }
    // 0x802237CC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802237D0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x802237D4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802237D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802237DC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x802237E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802237E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802237E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802237EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802237F0: beql        $v0, $zero, L_80223810
    if (ctx->r2 == 0) {
        // 0x802237F4: cfc1        $t6, $FpcCsr
        ctx->r14 = get_cop1_cs();
            goto L_80223810;
    }
    goto skip_0;
    // 0x802237F4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    skip_0:
    // 0x802237F8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_802237FC:
    // 0x802237FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80223800: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80223804: bnel        $v0, $zero, L_802237FC
    if (ctx->r2 != 0) {
        // 0x80223808: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_802237FC;
    }
    goto skip_1;
    // 0x80223808: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    skip_1:
    // 0x8022380C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
L_80223810:
    // 0x80223810: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80223814: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80223818: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x8022381C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80223820: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80223824: nop

    // 0x80223828: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8022382C: beql        $t7, $zero, L_8022387C
    if (ctx->r15 == 0) {
        // 0x80223830: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_8022387C;
    }
    goto skip_2;
    // 0x80223830: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x80223834: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80223838: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022383C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80223840: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80223844: nop

    // 0x80223848: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022384C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80223850: nop

    // 0x80223854: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80223858: bne         $t7, $zero, L_80223870
    if (ctx->r15 != 0) {
        // 0x8022385C: nop
    
            goto L_80223870;
    }
    // 0x8022385C: nop

    // 0x80223860: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80223864: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80223868: b           L_80223888
    // 0x8022386C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80223888;
    // 0x8022386C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80223870:
    // 0x80223870: b           L_80223888
    // 0x80223874: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80223888;
    // 0x80223874: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80223878: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_8022387C:
    // 0x8022387C: nop

    // 0x80223880: bltz        $t7, L_80223870
    if (SIGNED(ctx->r15) < 0) {
        // 0x80223884: nop
    
            goto L_80223870;
    }
    // 0x80223884: nop

L_80223888:
    // 0x80223888: sh          $t7, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = ctx->r15;
    // 0x8022388C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80223890: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80223894: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80223898: sb          $t8, 0x7C($a0)
    MEM_B(0X7C, ctx->r4) = ctx->r24;
    // 0x8022389C: lhu         $t9, 0x5E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X5E);
    // 0x802238A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x802238A4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802238A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802238AC: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x802238B0: lw          $t2, -0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, -0X4);
    // 0x802238B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802238B8: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x802238BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802238C0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x802238C4: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x802238C8: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x802238CC: sw          $t8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r24;
    // 0x802238D0: lhu         $t9, 0x5E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X5E);
    // 0x802238D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802238D8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x802238DC: lw          $t2, -0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, -0X4);
    // 0x802238E0: addiu       $t1, $zero, 0x152
    ctx->r9 = ADD32(0, 0X152);
    // 0x802238E4: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x802238E8: lhu         $t3, 0x0($t4)
    ctx->r11 = MEM_HU(ctx->r12, 0X0);
    // 0x802238EC: sh          $t3, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r11;
    // 0x802238F0: lhu         $t5, 0x5E($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X5E);
    // 0x802238F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802238F8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x802238FC: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80223900: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80223904: lhu         $t0, 0x2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X2);
    // 0x80223908: sh          $t1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r9;
    // 0x8022390C: sh          $t0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r8;
    // 0x80223910: lhu         $t2, 0x3C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X3C);
    // 0x80223914: lhu         $a1, 0x34($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X34);
    // 0x80223918: beql        $a1, $t2, L_80223930
    if (ctx->r5 == ctx->r10) {
        // 0x8022391C: sh          $zero, 0x34($v1)
        MEM_H(0X34, ctx->r3) = 0;
            goto L_80223930;
    }
    goto skip_3;
    // 0x8022391C: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
    skip_3:
    // 0x80223920: lhu         $t4, 0x44($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X44);
    // 0x80223924: bnel        $a1, $t4, L_80223934
    if (ctx->r5 != ctx->r12) {
        // 0x80223928: lw          $t3, 0x30($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X30);
            goto L_80223934;
    }
    goto skip_4;
    // 0x80223928: lw          $t3, 0x30($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X30);
    skip_4:
    // 0x8022392C: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
L_80223930:
    // 0x80223930: lw          $t3, 0x30($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X30);
L_80223934:
    // 0x80223934: sw          $t3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r11;
    // 0x80223938: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8022393C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x80223940: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80223944: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80223948: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8022394C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x80223950: lhu         $t5, 0x14($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X14);
    // 0x80223954: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x80223958: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    // 0x8022395C: sh          $t6, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r14;
    // 0x80223960: lhu         $t7, 0x18($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X18);
    // 0x80223964: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x80223968: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8022396C: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x80223970: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80223974: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x80223978: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8022397C: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x80223980: jal         0x80014218
    // 0x80223984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x80223984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x80223988: b           L_80223994
    // 0x8022398C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
        goto L_80223994;
    // 0x8022398C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_80223990:
    // 0x80223990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223994:
    // 0x80223994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022399C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802239A0: jr          $ra
    // 0x802239A4: nop

    TRACE_RETURN()
    return;
    // 0x802239A4: nop

;}
RECOMP_FUNC void func_80210C18_5CC0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210C20: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210C24: jal         0x80013AC4
    // 0x80210C28: addiu       $a0, $a0, -0x19D8
    ctx->r4 = ADD32(ctx->r4, -0X19D8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210C28: addiu       $a0, $a0, -0x19D8
    ctx->r4 = ADD32(ctx->r4, -0X19D8);
    after_0:
    // 0x80210C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210C34: jr          $ra
    // 0x80210C38: nop

    TRACE_RETURN()
    return;
    // 0x80210C38: nop

;}
RECOMP_FUNC void func_80215164_5D0634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80215168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021516C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80215170: jal         0x80221B48
    // 0x80215174: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80221B48_5DD018(rdram, ctx);
        goto after_0;
    // 0x80215174: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80215178: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x8021517C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x80215180: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80215184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80215188: jal         0x80221C0C
    // 0x8021518C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_1;
    // 0x8021518C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80215190: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80215194: lwc1        $f0, -0x5ED8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5ED8);
    // 0x80215198: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021519C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802151A0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x802151A4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x802151A8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x802151AC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x802151B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802151B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802151B8: jalr        $t9
    // 0x802151BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802151BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802151C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802151C4: jal         0x8003521C
    // 0x802151C8: addiu       $a0, $a0, 0x50A0
    ctx->r4 = ADD32(ctx->r4, 0X50A0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802151C8: addiu       $a0, $a0, 0x50A0
    ctx->r4 = ADD32(ctx->r4, 0X50A0);
    after_3:
    // 0x802151CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802151D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802151D4: jr          $ra
    // 0x802151D8: nop

    TRACE_RETURN()
    return;
    // 0x802151D8: nop

;}
RECOMP_FUNC void func_8020D848_5C8D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D848: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8020D84C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8020D850: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x8020D854: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8020D858: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8020D85C: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8020D860: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8020D864: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8020D868: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8020D86C: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8020D870: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8020D874: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8020D878: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8020D87C: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8020D880: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x8020D884: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x8020D888: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8020D88C: bne         $v0, $zero, L_8020D8A0
    if (ctx->r2 != 0) {
        // 0x8020D890: sw          $a1, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r5;
            goto L_8020D8A0;
    }
    // 0x8020D890: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8020D894: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x8020D898: beql        $t6, $zero, L_8020DC44
    if (ctx->r14 == 0) {
        // 0x8020D89C: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DC44;
    }
    goto skip_0;
    // 0x8020D89C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_0:
L_8020D8A0:
    // 0x8020D8A0: beq         $v0, $zero, L_8020D8B4
    if (ctx->r2 == 0) {
        // 0x8020D8A4: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8020D8B4;
    }
    // 0x8020D8A4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8020D8A8: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8020D8AC: addiu       $s3, $s3, -0x33D0
    ctx->r19 = ADD32(ctx->r19, -0X33D0);
    // 0x8020D8B0: sw          $v0, 0x130($s3)
    MEM_W(0X130, ctx->r19) = ctx->r2;
L_8020D8B4:
    // 0x8020D8B4: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8020D8B8: addiu       $s3, $s3, -0x33D0
    ctx->r19 = ADD32(ctx->r19, -0X33D0);
    // 0x8020D8BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D8C0: addiu       $t7, $t7, -0x3340
    ctx->r15 = ADD32(ctx->r15, -0X3340);
    // 0x8020D8C4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8020D8C8: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x8020D8CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8020D8D0: sw          $zero, 0x28($s3)
    MEM_W(0X28, ctx->r19) = 0;
    // 0x8020D8D4: sw          $zero, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = 0;
    // 0x8020D8D8: sw          $zero, 0x30($s3)
    MEM_W(0X30, ctx->r19) = 0;
    // 0x8020D8DC: sw          $zero, 0x34($s3)
    MEM_W(0X34, ctx->r19) = 0;
    // 0x8020D8E0: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x8020D8E4: sw          $zero, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = 0;
    // 0x8020D8E8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8020D8EC: lhu         $t9, -0x520E($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X520E);
    // 0x8020D8F0: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8020D8F4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8020D8F8: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8020D8FC: lw          $s0, 0x1300($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1300);
    // 0x8020D900: beq         $s0, $zero, L_8020DC34
    if (ctx->r16 == 0) {
        // 0x8020D904: nop
    
            goto L_8020DC34;
    }
    // 0x8020D904: nop

    // 0x8020D908: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8020D90C: sw          $t1, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r9;
    // 0x8020D910: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8020D914: sw          $t2, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r10;
    // 0x8020D918: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x8020D91C: sh          $t3, 0x40($s3)
    MEM_H(0X40, ctx->r19) = ctx->r11;
    // 0x8020D920: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8020D924: jal         0x80014840
    // 0x8020D928: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x8020D928: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_0:
    // 0x8020D92C: sw          $v0, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r2;
    // 0x8020D930: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8020D934: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8020D938: jal         0x80014840
    // 0x8020D93C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x8020D93C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x8020D940: sw          $v0, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r2;
    // 0x8020D944: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8020D948: jal         0x80014840
    // 0x8020D94C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x8020D94C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x8020D950: beq         $v0, $zero, L_8020D9F4
    if (ctx->r2 == 0) {
        // 0x8020D954: sw          $v0, 0x38($s3)
        MEM_W(0X38, ctx->r19) = ctx->r2;
            goto L_8020D9F4;
    }
    // 0x8020D954: sw          $v0, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r2;
    // 0x8020D958: lhu         $t5, 0x0($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X0);
    // 0x8020D95C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D960: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8020D964: bgez        $t5, L_8020D978
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D968: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D978;
    }
    // 0x8020D968: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D96C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D970: nop

    // 0x8020D974: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D978:
    // 0x8020D978: swc1        $f6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f6.u32l;
    // 0x8020D97C: lhu         $t6, 0x2($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X2);
    // 0x8020D980: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D984: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020D988: bgez        $t6, L_8020D99C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D98C: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D99C;
    }
    // 0x8020D98C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D990: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020D994: nop

    // 0x8020D998: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8020D99C:
    // 0x8020D99C: swc1        $f16, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f16.u32l;
    // 0x8020D9A0: lhu         $t7, 0x4($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X4);
    // 0x8020D9A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D9A8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020D9AC: bgez        $t7, L_8020D9C0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020D9B0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D9C0;
    }
    // 0x8020D9B0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D9B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D9B8: nop

    // 0x8020D9BC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D9C0:
    // 0x8020D9C0: swc1        $f8, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f8.u32l;
    // 0x8020D9C4: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8020D9C8: swc1        $f10, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f10.u32l;
    // 0x8020D9CC: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8020D9D0: swc1        $f18, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f18.u32l;
    // 0x8020D9D4: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8020D9D8: swc1        $f16, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f16.u32l;
    // 0x8020D9DC: lhu         $t8, 0x14($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X14);
    // 0x8020D9E0: sw          $t8, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r24;
    // 0x8020D9E4: lhu         $t9, 0x16($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X16);
    // 0x8020D9E8: sw          $t9, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r25;
    // 0x8020D9EC: lhu         $t0, 0x18($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X18);
    // 0x8020D9F0: sw          $t0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r8;
L_8020D9F4:
    // 0x8020D9F4: lw          $v1, 0x2C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2C);
    // 0x8020D9F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020D9FC: sw          $t1, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r9;
    // 0x8020DA00: beq         $v1, $zero, L_8020DB18
    if (ctx->r3 == 0) {
        // 0x8020DA04: sw          $zero, 0xD4($s3)
        MEM_W(0XD4, ctx->r19) = 0;
            goto L_8020DB18;
    }
    // 0x8020DA04: sw          $zero, 0xD4($s3)
    MEM_W(0XD4, ctx->r19) = 0;
    // 0x8020DA08: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8020DA0C: addiu       $s1, $s1, -0x4C70
    ctx->r17 = ADD32(ctx->r17, -0X4C70);
    // 0x8020DA10: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8020DA14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8020DA18: lui         $s7, 0x8007
    ctx->r23 = S32(0X8007 << 16);
    // 0x8020DA1C: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8020DA20: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8020DA24: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8020DA28: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8020DA2C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DA30: addiu       $s0, $s0, -0x3220
    ctx->r16 = ADD32(ctx->r16, -0X3220);
    // 0x8020DA34: addiu       $s2, $s2, -0x3224
    ctx->r18 = ADD32(ctx->r18, -0X3224);
    // 0x8020DA38: addiu       $s5, $s5, -0x601C
    ctx->r21 = ADD32(ctx->r21, -0X601C);
    // 0x8020DA3C: addiu       $s6, $s6, -0x7840
    ctx->r22 = ADD32(ctx->r22, -0X7840);
    // 0x8020DA40: addiu       $s7, $s7, -0x26E0
    ctx->r23 = ADD32(ctx->r23, -0X26E0);
    // 0x8020DA44: lwc1        $f22, -0x6508($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6508);
    // 0x8020DA48: lui         $fp, 0x4000
    ctx->r30 = S32(0X4000 << 16);
    // 0x8020DA4C: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
L_8020DA50:
    // 0x8020DA50: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x8020DA54: multu       $t2, $s4
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020DA58: mflo        $t3
    ctx->r11 = lo;
    // 0x8020DA5C: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x8020DA60: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x8020DA64: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8020DA68: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8020DA6C: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x8020DA70: beql        $t6, $zero, L_8020DB1C
    if (ctx->r14 == 0) {
        // 0x8020DA74: lw          $v0, 0x34($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X34);
            goto L_8020DB1C;
    }
    goto skip_1;
    // 0x8020DA74: lw          $v0, 0x34($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X34);
    skip_1:
    // 0x8020DA78: lhu         $t8, 0x0($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X0);
    // 0x8020DA7C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DA80: addu        $t9, $s5, $t8
    ctx->r25 = ADD32(ctx->r21, ctx->r24);
    // 0x8020DA84: jal         0x80219CA0
    // 0x8020DA88: lbu         $a1, -0x1($t9)
    ctx->r5 = MEM_BU(ctx->r25, -0X1);
    func_80219CA0_5D5170(rdram, ctx);
        goto after_3;
    // 0x8020DA88: lbu         $a1, -0x1($t9)
    ctx->r5 = MEM_BU(ctx->r25, -0X1);
    after_3:
    // 0x8020DA8C: beq         $v0, $zero, L_8020DB04
    if (ctx->r2 == 0) {
        // 0x8020DA90: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020DB04;
    }
    // 0x8020DA90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DA94: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8020DA98: lui         $t4, 0x8023
    ctx->r12 = S32(0X8023 << 16);
    // 0x8020DA9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020DAA0: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8020DAA4: or          $a3, $s7, $fp
    ctx->r7 = ctx->r23 | ctx->r30;
    // 0x8020DAA8: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8020DAAC: addu        $t2, $s6, $t1
    ctx->r10 = ADD32(ctx->r22, ctx->r9);
    // 0x8020DAB0: lw          $a1, -0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, -0X4);
    // 0x8020DAB4: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x8020DAB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8020DABC: lhu         $t4, -0x682A($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X682A);
    // 0x8020DAC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020DAC4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020DAC8: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x8020DACC: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020DAD0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020DAD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8020DAD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020DADC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020DAE0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8020DAE4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020DAE8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020DAEC: jal         0x8003555C
    // 0x8020DAF0: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    func_8003555C_3615C(rdram, ctx);
        goto after_4;
    // 0x8020DAF0: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    after_4:
    // 0x8020DAF4: beq         $v0, $zero, L_8020DB04
    if (ctx->r2 == 0) {
        // 0x8020DAF8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020DB04;
    }
    // 0x8020DAF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DAFC: jal         0x80218A54
    // 0x8020DB00: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_80218A54_5D3F24(rdram, ctx);
        goto after_5;
    // 0x8020DB00: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_5:
L_8020DB04:
    // 0x8020DB04: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x8020DB08: lw          $v1, 0x2C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X2C);
    // 0x8020DB0C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020DB10: b           L_8020DA50
    // 0x8020DB14: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
        goto L_8020DA50;
    // 0x8020DB14: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
L_8020DB18:
    // 0x8020DB18: lw          $v0, 0x34($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X34);
L_8020DB1C:
    // 0x8020DB1C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8020DB20: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8020DB24: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8020DB28: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8020DB2C: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8020DB30: lui         $s7, 0x8007
    ctx->r23 = S32(0X8007 << 16);
    // 0x8020DB34: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DB38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8020DB3C: lwc1        $f22, -0x6504($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6504);
    // 0x8020DB40: addiu       $s7, $s7, -0x26E0
    ctx->r23 = ADD32(ctx->r23, -0X26E0);
    // 0x8020DB44: addiu       $s6, $s6, -0x7840
    ctx->r22 = ADD32(ctx->r22, -0X7840);
    // 0x8020DB48: addiu       $s5, $s5, -0x601C
    ctx->r21 = ADD32(ctx->r21, -0X601C);
    // 0x8020DB4C: addiu       $s2, $s2, -0x3224
    ctx->r18 = ADD32(ctx->r18, -0X3224);
    // 0x8020DB50: addiu       $s1, $s1, -0x4C70
    ctx->r17 = ADD32(ctx->r17, -0X4C70);
    // 0x8020DB54: addiu       $s0, $s0, -0x3220
    ctx->r16 = ADD32(ctx->r16, -0X3220);
    // 0x8020DB58: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x8020DB5C: beq         $v0, $zero, L_8020DC34
    if (ctx->r2 == 0) {
        // 0x8020DB60: lui         $fp, 0x4000
        ctx->r30 = S32(0X4000 << 16);
            goto L_8020DC34;
    }
    // 0x8020DB60: lui         $fp, 0x4000
    ctx->r30 = S32(0X4000 << 16);
    // 0x8020DB64: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8020DB68:
    // 0x8020DB68: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x8020DB6C: lhu         $a1, 0x40($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X40);
    // 0x8020DB70: multu       $t7, $s4
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020DB74: mflo        $t8
    ctx->r24 = lo;
    // 0x8020DB78: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8020DB7C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8020DB80: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8020DB84: jal         0x80014840
    // 0x8020DB88: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    func_80014840_15440(rdram, ctx);
        goto after_6;
    // 0x8020DB88: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_6:
    // 0x8020DB8C: beq         $v0, $zero, L_8020DC34
    if (ctx->r2 == 0) {
        // 0x8020DB90: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_8020DC34;
    }
    // 0x8020DB90: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8020DB94: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x8020DB98: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DB9C: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x8020DBA0: jal         0x80219CA0
    // 0x8020DBA4: lbu         $a1, -0x1($t3)
    ctx->r5 = MEM_BU(ctx->r11, -0X1);
    func_80219CA0_5D5170(rdram, ctx);
        goto after_7;
    // 0x8020DBA4: lbu         $a1, -0x1($t3)
    ctx->r5 = MEM_BU(ctx->r11, -0X1);
    after_7:
    // 0x8020DBA8: beq         $v0, $zero, L_8020DC20
    if (ctx->r2 == 0) {
        // 0x8020DBAC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020DC20;
    }
    // 0x8020DBAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DBB0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8020DBB4: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8020DBB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020DBBC: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x8020DBC0: or          $a3, $s7, $fp
    ctx->r7 = ctx->r23 | ctx->r30;
    // 0x8020DBC4: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8020DBC8: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x8020DBCC: lw          $a1, -0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, -0X4);
    // 0x8020DBD0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8020DBD4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8020DBD8: lhu         $t8, -0x682A($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X682A);
    // 0x8020DBDC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020DBE0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020DBE4: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x8020DBE8: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020DBEC: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020DBF0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8020DBF4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020DBF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020DBFC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8020DC00: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020DC04: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020DC08: jal         0x8003555C
    // 0x8020DC0C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    func_8003555C_3615C(rdram, ctx);
        goto after_8;
    // 0x8020DC0C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    after_8:
    // 0x8020DC10: beq         $v0, $zero, L_8020DC20
    if (ctx->r2 == 0) {
        // 0x8020DC14: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020DC20;
    }
    // 0x8020DC14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DC18: jal         0x80218A54
    // 0x8020DC1C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    func_80218A54_5D3F24(rdram, ctx);
        goto after_9;
    // 0x8020DC1C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    after_9:
L_8020DC20:
    // 0x8020DC20: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8020DC24: lw          $v0, 0x34($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X34);
    // 0x8020DC28: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8020DC2C: b           L_8020DB68
    // 0x8020DC30: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
        goto L_8020DB68;
    // 0x8020DC30: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
L_8020DC34:
    // 0x8020DC34: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020DC38: jal         0x8003521C
    // 0x8020DC3C: addiu       $a0, $a0, -0x2288
    ctx->r4 = ADD32(ctx->r4, -0X2288);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x8020DC3C: addiu       $a0, $a0, -0x2288
    ctx->r4 = ADD32(ctx->r4, -0X2288);
    after_10:
    // 0x8020DC40: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_8020DC44:
    // 0x8020DC44: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x8020DC48: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x8020DC4C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8020DC50: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8020DC54: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8020DC58: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8020DC5C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8020DC60: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8020DC64: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8020DC68: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8020DC6C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8020DC70: jr          $ra
    // 0x8020DC74: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8020DC74: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8021A978_5D5E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A978: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8021A97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A980: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x8021A984: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8021A988: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A98C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8021A990: beq         $t7, $zero, L_8021AAD0
    if (ctx->r15 == 0) {
        // 0x8021A994: addiu       $t1, $t1, -0x39FC
        ctx->r9 = ADD32(ctx->r9, -0X39FC);
            goto L_8021AAD0;
    }
    // 0x8021A994: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x8021A998: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8021A99C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8021A9A0: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x8021A9A4: lw          $t9, 0xA0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XA0);
    // 0x8021A9A8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8021A9AC: bnel        $v0, $t9, L_8021AAD4
    if (ctx->r2 != ctx->r25) {
        // 0x8021A9B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021AAD4;
    }
    goto skip_0;
    // 0x8021A9B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021A9B4: lhu         $t2, 0x14($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14);
    // 0x8021A9B8: lhu         $t3, 0x124($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X124);
    // 0x8021A9BC: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x8021A9C0: lhu         $t7, 0x126($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X126);
    // 0x8021A9C4: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8021A9C8: lhu         $t3, 0x128($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X128);
    // 0x8021A9CC: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x8021A9D0: andi        $a1, $t4, 0x3FF
    ctx->r5 = ctx->r12 & 0X3FF;
    // 0x8021A9D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x8021A9D8: addiu       $t9, $t9, -0x1B5C
    ctx->r25 = ADD32(ctx->r25, -0X1B5C);
    // 0x8021A9DC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8021A9E0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8021A9E4: andi        $a2, $t8, 0x3FF
    ctx->r6 = ctx->r24 & 0X3FF;
    // 0x8021A9E8: andi        $a3, $t4, 0x3FF
    ctx->r7 = ctx->r12 & 0X3FF;
    // 0x8021A9EC: jalr        $t9
    // 0x8021A9F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021A9F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021A9F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8021A9F8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8021A9FC: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x8021AA00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021AA04: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021AA08: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021AA0C: addiu       $t9, $t9, -0x57A8
    ctx->r25 = ADD32(ctx->r25, -0X57A8);
    // 0x8021AA10: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8021AA14: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021AA18: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8021AA1C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021AA20: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8021AA24: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021AA28: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021AA2C: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021AA30: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8021AA34: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8021AA38: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021AA3C: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021AA40: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8021AA44: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8021AA48: jalr        $t9
    // 0x8021AA4C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021AA4C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8021AA50: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021AA54: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021AA58: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8021AA5C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8021AA60: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021AA64: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021AA68: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x8021AA6C: lwc1        $f18, 0x118($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X118);
    // 0x8021AA70: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021AA74: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8021AA78: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x8021AA7C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8021AA80: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8021AA84: swc1        $f4, 0xC0($t6)
    MEM_W(0XC0, ctx->r14) = ctx->f4.u32l;
    // 0x8021AA88: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021AA8C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021AA90: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021AA94: lwc1        $f4, 0x11C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X11C);
    // 0x8021AA98: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021AA9C: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8021AAA0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021AAA4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021AAA8: swc1        $f6, 0xC4($t7)
    MEM_W(0XC4, ctx->r15) = ctx->f6.u32l;
    // 0x8021AAAC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021AAB0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021AAB4: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021AAB8: lwc1        $f6, 0x120($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X120);
    // 0x8021AABC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021AAC0: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8021AAC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021AAC8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021AACC: swc1        $f8, 0xC8($t8)
    MEM_W(0XC8, ctx->r24) = ctx->f8.u32l;
L_8021AAD0:
    // 0x8021AAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021AAD4:
    // 0x8021AAD4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8021AAD8: jr          $ra
    // 0x8021AADC: nop

    TRACE_RETURN()
    return;
    // 0x8021AADC: nop

;}
RECOMP_FUNC void func_80210048_5CB518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021004C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210050: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210054: jal         0x80013AC4
    // 0x80210058: addiu       $a0, $a0, -0x23C0
    ctx->r4 = ADD32(ctx->r4, -0X23C0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210058: addiu       $a0, $a0, -0x23C0
    ctx->r4 = ADD32(ctx->r4, -0X23C0);
    after_0:
    // 0x8021005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210064: jr          $ra
    // 0x80210068: nop

    TRACE_RETURN()
    return;
    // 0x80210068: nop

;}
RECOMP_FUNC void func_80210B40_5CC010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210B48: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210B4C: jal         0x80013AC4
    // 0x80210B50: addiu       $a0, $a0, -0x1A64
    ctx->r4 = ADD32(ctx->r4, -0X1A64);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210B50: addiu       $a0, $a0, -0x1A64
    ctx->r4 = ADD32(ctx->r4, -0X1A64);
    after_0:
    // 0x80210B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210B5C: jr          $ra
    // 0x80210B60: nop

    TRACE_RETURN()
    return;
    // 0x80210B60: nop

;}
RECOMP_FUNC void func_80214D58_5D0228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214D58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214D60: jal         0x800232EC
    // 0x80214D64: nop

    func_800232EC_23EEC(rdram, ctx);
        goto after_0;
    // 0x80214D64: nop

    after_0:
    // 0x80214D68: bne         $v0, $zero, L_80214D8C
    if (ctx->r2 != 0) {
        // 0x80214D6C: nop
    
            goto L_80214D8C;
    }
    // 0x80214D6C: nop

    // 0x80214D70: jal         0x80023410
    // 0x80214D74: nop

    func_80023410_24010(rdram, ctx);
        goto after_1;
    // 0x80214D74: nop

    after_1:
    // 0x80214D78: bne         $v0, $zero, L_80214D8C
    if (ctx->r2 != 0) {
        // 0x80214D7C: nop
    
            goto L_80214D8C;
    }
    // 0x80214D7C: nop

    // 0x80214D80: jal         0x80023480
    // 0x80214D84: nop

    func_80023480_24080(rdram, ctx);
        goto after_2;
    // 0x80214D84: nop

    after_2:
    // 0x80214D88: beq         $v0, $zero, L_80214DA8
    if (ctx->r2 == 0) {
        // 0x80214D8C: lui         $t6, 0x8017
        ctx->r14 = S32(0X8017 << 16);
            goto L_80214DA8;
    }
L_80214D8C:
    // 0x80214D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80214D90: lw          $t6, -0x717C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X717C);
    // 0x80214D94: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80214D98: addiu       $a0, $a0, 0x7750
    ctx->r4 = ADD32(ctx->r4, 0X7750);
    // 0x80214D9C: lw          $v0, 0x3FC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3FC);
    // 0x80214DA0: b           L_80214F10
    // 0x80214DA4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_80214F10;
    // 0x80214DA4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_80214DA8:
    // 0x80214DA8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80214DAC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80214DB0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80214DB4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80214DB8: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x80214DBC: jal         0x800148F0
    // 0x80214DC0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_3;
    // 0x80214DC0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x80214DC4: addiu       $t8, $v0, 0x500
    ctx->r24 = ADD32(ctx->r2, 0X500);
    // 0x80214DC8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80214DCC: bne         $v0, $zero, L_80214DDC
    if (ctx->r2 != 0) {
        // 0x80214DD0: sw          $t8, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r24;
            goto L_80214DDC;
    }
    // 0x80214DD0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80214DD4: b           L_80214F10
    // 0x80214DD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80214F10;
    // 0x80214DD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80214DDC:
    // 0x80214DDC: jal         0x8000B718
    // 0x80214DE0: nop

    func_8000B718_C318(rdram, ctx);
        goto after_4;
    // 0x80214DE0: nop

    after_4:
    // 0x80214DE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80214DE8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80214DEC: addiu       $t9, $t9, -0x39F8
    ctx->r25 = ADD32(ctx->r25, -0X39F8);
    // 0x80214DF0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80214DF4: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80214DF8: addiu       $t1, $t9, 0x300
    ctx->r9 = ADD32(ctx->r25, 0X300);
L_80214DFC:
    // 0x80214DFC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80214E00: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80214E04: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80214E08: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80214E0C: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80214E10: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80214E14: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80214E18: bne         $t9, $t1, L_80214DFC
    if (ctx->r25 != ctx->r9) {
        // 0x80214E1C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80214DFC;
    }
    // 0x80214E1C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80214E20: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80214E24: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    // 0x80214E28: jal         0x80023A1C
    // 0x80214E2C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    func_80023A1C_2461C(rdram, ctx);
        goto after_5;
    // 0x80214E2C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    after_5:
    // 0x80214E30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80214E34: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80214E38: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80214E3C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80214E40: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x80214E44: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x80214E48: jal         0x80023610
    // 0x80214E4C: lw          $a1, -0x4FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4FC0);
    func_80023610_24210(rdram, ctx);
        goto after_6;
    // 0x80214E4C: lw          $a1, -0x4FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4FC0);
    after_6:
    // 0x80214E50: bne         $v0, $zero, L_80214ED8
    if (ctx->r2 != 0) {
        // 0x80214E54: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_80214ED8;
    }
    // 0x80214E54: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80214E58: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x80214E5C: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80214E60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80214E64: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x80214E68: jal         0x800234D8
    // 0x80214E6C: lw          $a1, -0x4FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4FC0);
    func_800234D8_240D8(rdram, ctx);
        goto after_7;
    // 0x80214E6C: lw          $a1, -0x4FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4FC0);
    after_7:
    // 0x80214E70: bne         $v0, $zero, L_80214ED8
    if (ctx->r2 != 0) {
        // 0x80214E74: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80214ED8;
    }
    // 0x80214E74: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80214E78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80214E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80214E80: addiu       $a2, $zero, 0xC2
    ctx->r6 = ADD32(0, 0XC2);
    // 0x80214E84: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
L_80214E88:
    // 0x80214E88: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80214E8C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80214E90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80214E94: beq         $t5, $t6, L_80214EB0
    if (ctx->r13 == ctx->r14) {
        // 0x80214E98: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80214EB0;
    }
    // 0x80214E98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80214E9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80214EA0: lw          $t8, -0x717C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X717C);
    // 0x80214EA4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80214EA8: b           L_80214ED8
    // 0x80214EAC: sw          $t7, 0x3FC($t8)
    MEM_W(0X3FC, ctx->r24) = ctx->r15;
        goto L_80214ED8;
    // 0x80214EAC: sw          $t7, 0x3FC($t8)
    MEM_W(0X3FC, ctx->r24) = ctx->r15;
L_80214EB0:
    // 0x80214EB0: bnel        $a1, $a2, L_80214E88
    if (ctx->r5 != ctx->r6) {
        // 0x80214EB4: lw          $t5, 0x0($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X0);
            goto L_80214E88;
    }
    goto skip_0;
    // 0x80214EB4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80214EB8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80214EBC: jal         0x80023698
    // 0x80214EC0: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    func_80023698_24298(rdram, ctx);
        goto after_8;
    // 0x80214EC0: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    after_8:
    // 0x80214EC4: bne         $v0, $zero, L_80214ED8
    if (ctx->r2 != 0) {
        // 0x80214EC8: lui         $t0, 0x8017
        ctx->r8 = S32(0X8017 << 16);
            goto L_80214ED8;
    }
    // 0x80214EC8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80214ECC: lw          $t0, -0x717C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X717C);
    // 0x80214ED0: jal         0x8002338C
    // 0x80214ED4: sw          $zero, 0x3FC($t0)
    MEM_W(0X3FC, ctx->r8) = 0;
    func_8002338C_23F8C(rdram, ctx);
        goto after_9;
    // 0x80214ED4: sw          $zero, 0x3FC($t0)
    MEM_W(0X3FC, ctx->r8) = 0;
    after_9:
L_80214ED8:
    // 0x80214ED8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80214EDC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80214EE0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80214EE4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80214EE8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80214EEC: jal         0x80014B74
    // 0x80214EF0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_10;
    // 0x80214EF0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_10:
    // 0x80214EF4: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80214EF8: lw          $v1, -0x717C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X717C);
    // 0x80214EFC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80214F00: addiu       $a0, $a0, 0x7750
    ctx->r4 = ADD32(ctx->r4, 0X7750);
    // 0x80214F04: lw          $t1, 0x3FC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X3FC);
    // 0x80214F08: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80214F0C: lw          $v0, 0x3FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3FC);
L_80214F10:
    // 0x80214F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80214F18: jr          $ra
    // 0x80214F1C: nop

    TRACE_RETURN()
    return;
    // 0x80214F1C: nop

;}
RECOMP_FUNC void func_8022588C_5E0D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022588C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225894: jal         0x802253A8
    // 0x80225898: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802253A8_5E0878(rdram, ctx);
        goto after_0;
    // 0x80225898: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022589C: beq         $v0, $zero, L_802258AC
    if (ctx->r2 == 0) {
        // 0x802258A0: lui         $a0, 0x8022
        ctx->r4 = S32(0X8022 << 16);
            goto L_802258AC;
    }
    // 0x802258A0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802258A4: jal         0x8003521C
    // 0x802258A8: addiu       $a0, $a0, 0x57B0
    ctx->r4 = ADD32(ctx->r4, 0X57B0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802258A8: addiu       $a0, $a0, 0x57B0
    ctx->r4 = ADD32(ctx->r4, 0X57B0);
    after_1:
L_802258AC:
    // 0x802258AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802258B4: jr          $ra
    // 0x802258B8: nop

    TRACE_RETURN()
    return;
    // 0x802258B8: nop

;}
RECOMP_FUNC void func_8020F7D8_5CACA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F7DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F7E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F7E4: jal         0x80013AC4
    // 0x8020F7E8: addiu       $a0, $a0, -0x2C84
    ctx->r4 = ADD32(ctx->r4, -0X2C84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F7E8: addiu       $a0, $a0, -0x2C84
    ctx->r4 = ADD32(ctx->r4, -0X2C84);
    after_0:
    // 0x8020F7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F7F4: jr          $ra
    // 0x8020F7F8: nop

    TRACE_RETURN()
    return;
    // 0x8020F7F8: nop

;}
RECOMP_FUNC void func_8020DFCC_5C949C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DFCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DFD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DFD4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DFD8: jal         0x80013AC4
    // 0x8020DFDC: addiu       $a0, $a0, -0x3C68
    ctx->r4 = ADD32(ctx->r4, -0X3C68);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DFDC: addiu       $a0, $a0, -0x3C68
    ctx->r4 = ADD32(ctx->r4, -0X3C68);
    after_0:
    // 0x8020DFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DFE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DFE8: jr          $ra
    // 0x8020DFEC: nop

    TRACE_RETURN()
    return;
    // 0x8020DFEC: nop

;}
RECOMP_FUNC void func_80214D50_5D0220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214D50: jr          $ra
    // 0x80214D54: nop

    TRACE_RETURN()
    return;
    // 0x80214D54: nop

;}
RECOMP_FUNC void func_80212C5C_5CE12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212C68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80212C6C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212C70: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80212C74: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80212C78: bne         $v0, $zero, L_80212C90
    if (ctx->r2 != 0) {
        // 0x80212C7C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80212C90;
    }
    // 0x80212C7C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80212C80: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x80212C84: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212C88: jal         0x8003521C
    // 0x80212C8C: addiu       $a0, $a0, 0x2CA0
    ctx->r4 = ADD32(ctx->r4, 0X2CA0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80212C8C: addiu       $a0, $a0, 0x2CA0
    ctx->r4 = ADD32(ctx->r4, 0X2CA0);
    after_0:
L_80212C90:
    // 0x80212C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212C98: jr          $ra
    // 0x80212C9C: nop

    TRACE_RETURN()
    return;
    // 0x80212C9C: nop

;}
RECOMP_FUNC void func_8020F694_5CAB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F69C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F6A0: jal         0x80013AC4
    // 0x8020F6A4: addiu       $a0, $a0, -0x2DC4
    ctx->r4 = ADD32(ctx->r4, -0X2DC4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F6A4: addiu       $a0, $a0, -0x2DC4
    ctx->r4 = ADD32(ctx->r4, -0X2DC4);
    after_0:
    // 0x8020F6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F6B0: jr          $ra
    // 0x8020F6B4: nop

    TRACE_RETURN()
    return;
    // 0x8020F6B4: nop

;}
RECOMP_FUNC void func_8021E260_5D9730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E260: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E264: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021E268: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021E26C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021E270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021E274: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021E278: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x8021E27C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8021E280: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8021E284: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8021E288: beq         $v1, $zero, L_8021E2A0
    if (ctx->r3 == 0) {
        // 0x8021E28C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_8021E2A0;
    }
    // 0x8021E28C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x8021E290: jal         0x80034ED4
    // 0x8021E294: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x8021E294: nop

    after_0:
    // 0x8021E298: b           L_8021E5F8
    // 0x8021E29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8021E5F8;
    // 0x8021E29C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021E2A0:
    // 0x8021E2A0: lbu         $v0, 0xE8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE8);
    // 0x8021E2A4: slti        $v1, $v0, 0xFB
    ctx->r3 = SIGNED(ctx->r2) < 0XFB ? 1 : 0;
    // 0x8021E2A8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x8021E2AC: bne         $v1, $zero, L_8021E5F4
    if (ctx->r3 != 0) {
        // 0x8021E2B0: sb          $t7, 0xE8($s2)
        MEM_B(0XE8, ctx->r18) = ctx->r15;
            goto L_8021E5F4;
    }
    // 0x8021E2B0: sb          $t7, 0xE8($s2)
    MEM_B(0XE8, ctx->r18) = ctx->r15;
    // 0x8021E2B4: jal         0x802192B4
    // 0x8021E2B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x8021E2B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8021E2BC: lbu         $t8, 0xE7($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XE7);
    // 0x8021E2C0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E2C4: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8021E2C8: sb          $t9, 0xE8($s2)
    MEM_B(0XE8, ctx->r18) = ctx->r25;
    // 0x8021E2CC: jal         0x802192B4
    // 0x8021E2D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x8021E2D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_2:
    // 0x8021E2D4: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8021E2D8: beq         $at, $zero, L_8021E43C
    if (ctx->r1 == 0) {
        // 0x8021E2DC: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8021E43C;
    }
    // 0x8021E2DC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8021E2E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E2E4: addu        $at, $at, $t0
    gpr jr_addend_8021E2EC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8021E2E8: lw          $t0, -0x58B8($at)
    ctx->r8 = ADD32(ctx->r1, -0X58B8);
    // 0x8021E2EC: jr          $t0
    // 0x8021E2F0: nop

    switch (jr_addend_8021E2EC >> 2) {
        case 0: goto L_8021E2F4; break;
        case 1: goto L_8021E2F4; break;
        case 2: goto L_8021E2F4; break;
        case 3: goto L_8021E3E8; break;
        case 4: goto L_8021E3E8; break;
        case 5: goto L_8021E3E8; break;
        case 6: goto L_8021E3E8; break;
        case 7: goto L_8021E428; break;
        case 8: goto L_8021E428; break;
        case 9: goto L_8021E428; break;
        default: switch_error(__func__, 0x8021E2EC, 0x8023A748);
    }
    // 0x8021E2F0: nop

L_8021E2F4:
    // 0x8021E2F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021E2F8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x8021E2FC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021E300: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x8021E304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021E308: jalr        $t9
    // 0x8021E30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8021E30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8021E310: beq         $v0, $zero, L_8021E43C
    if (ctx->r2 == 0) {
        // 0x8021E314: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_8021E43C;
    }
    // 0x8021E314: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8021E318: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x8021E31C: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x8021E320: jalr        $s1
    // 0x8021E324: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x8021E324: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x8021E328: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8021E32C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021E330: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8021E334: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E338: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021E33C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021E340: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8021E344: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021E348: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E34C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021E350: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x8021E354: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8021E358: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8021E35C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8021E360: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8021E364: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8021E368: jalr        $t9
    // 0x8021E36C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8021E36C: nop

    after_5:
    // 0x8021E370: jalr        $s1
    // 0x8021E374: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x8021E374: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x8021E378: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021E37C: jalr        $s1
    // 0x8021E380: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x8021E380: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_7:
    // 0x8021E384: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8021E388: jalr        $s1
    // 0x8021E38C: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x8021E38C: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_8:
    // 0x8021E390: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8021E394: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021E398: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8021E39C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021E3A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021E3A4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021E3A8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021E3AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021E3B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E3B4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8021E3B8: addiu       $t9, $t9, -0xEAC
    ctx->r25 = ADD32(ctx->r25, -0XEAC);
    // 0x8021E3BC: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x8021E3C0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8021E3C4: lhu         $a2, 0x2A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X2A);
    // 0x8021E3C8: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x8021E3CC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8021E3D0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8021E3D4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021E3D8: jalr        $t9
    // 0x8021E3DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8021E3DC: nop

    after_9:
    // 0x8021E3E0: b           L_8021E440
    // 0x8021E3E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
        goto L_8021E440;
    // 0x8021E3E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_8021E3E8:
    // 0x8021E3E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021E3EC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x8021E3F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021E3F4: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x8021E3F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021E3FC: jalr        $t9
    // 0x8021E400: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8021E400: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8021E404: beq         $v0, $zero, L_8021E43C
    if (ctx->r2 == 0) {
        // 0x8021E408: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_8021E43C;
    }
    // 0x8021E408: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8021E40C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E410: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x8021E414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E418: jalr        $t9
    // 0x8021E41C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8021E41C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_11:
    // 0x8021E420: b           L_8021E440
    // 0x8021E424: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
        goto L_8021E440;
    // 0x8021E424: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_8021E428:
    // 0x8021E428: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E42C: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x8021E430: jalr        $t9
    // 0x8021E434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x8021E434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_12:
    // 0x8021E438: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_8021E43C:
    // 0x8021E43C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_8021E440:
    // 0x8021E440: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x8021E444: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x8021E448: beq         $t1, $zero, L_8021E5F4
    if (ctx->r9 == 0) {
        // 0x8021E44C: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8021E5F4;
    }
    // 0x8021E44C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E450: jalr        $s1
    // 0x8021E454: lw          $s0, 0x18($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X18);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_13;
    // 0x8021E454: lw          $s0, 0x18($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X18);
    after_13:
    // 0x8021E458: lbu         $v1, 0xE4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XE4);
    // 0x8021E45C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8021E460: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021E464: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021E468: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E46C: mflo        $t2
    ctx->r10 = lo;
    // 0x8021E470: nop

    // 0x8021E474: nop

    // 0x8021E478: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8021E47C: mflo        $t3
    ctx->r11 = lo;
    // 0x8021E480: bgez        $v1, L_8021E490
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8021E484: sra         $t4, $v1, 1
        ctx->r12 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8021E490;
    }
    // 0x8021E484: sra         $t4, $v1, 1
    ctx->r12 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8021E488: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8021E48C: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_8021E490:
    // 0x8021E490: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8021E494: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8021E498: nop

    // 0x8021E49C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021E4A0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8021E4A4: jalr        $s1
    // 0x8021E4A8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_14;
    // 0x8021E4A8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_14:
    // 0x8021E4AC: lbu         $v1, 0xE5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XE5);
    // 0x8021E4B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8021E4B4: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021E4B8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021E4BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E4C0: mflo        $t6
    ctx->r14 = lo;
    // 0x8021E4C4: nop

    // 0x8021E4C8: nop

    // 0x8021E4CC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8021E4D0: mflo        $t7
    ctx->r15 = lo;
    // 0x8021E4D4: bgez        $v1, L_8021E4E4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8021E4D8: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8021E4E4;
    }
    // 0x8021E4D8: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8021E4DC: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8021E4E0: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8021E4E4:
    // 0x8021E4E4: subu        $t0, $t7, $t8
    ctx->r8 = SUB32(ctx->r15, ctx->r24);
    // 0x8021E4E8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8021E4EC: nop

    // 0x8021E4F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021E4F4: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8021E4F8: jalr        $s1
    // 0x8021E4FC: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_15;
    // 0x8021E4FC: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    after_15:
    // 0x8021E500: lbu         $v1, 0xE6($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XE6);
    // 0x8021E504: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8021E508: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021E50C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021E510: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E514: mflo        $t9
    ctx->r25 = lo;
    // 0x8021E518: nop

    // 0x8021E51C: nop

    // 0x8021E520: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8021E524: mflo        $t1
    ctx->r9 = lo;
    // 0x8021E528: bgez        $v1, L_8021E538
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8021E52C: sra         $t2, $v1, 1
        ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8021E538;
    }
    // 0x8021E52C: sra         $t2, $v1, 1
    ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8021E530: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8021E534: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_8021E538:
    // 0x8021E538: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8021E53C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8021E540: nop

    // 0x8021E544: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021E548: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021E54C: jalr        $s1
    // 0x8021E550: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_16;
    // 0x8021E550: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    after_16:
    // 0x8021E554: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8021E558: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E55C: ldc1        $f18, -0x5890($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5890);
    // 0x8021E560: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8021E564: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E568: ldc1        $f6, -0x5888($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5888);
    // 0x8021E56C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E570: mul.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x8021E574: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8021E578: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x8021E57C: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8021E580: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021E584: jalr        $s1
    // 0x8021E588: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_17;
    // 0x8021E588: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    after_17:
    // 0x8021E58C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8021E590: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E594: ldc1        $f16, -0x5880($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5880);
    // 0x8021E598: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8021E59C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E5A0: ldc1        $f10, -0x5878($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5878);
    // 0x8021E5A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021E5A8: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8021E5AC: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8021E5B0: add.d       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f10.d + ctx->f4.d;
    // 0x8021E5B4: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8021E5B8: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021E5BC: jalr        $s1
    // 0x8021E5C0: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_18;
    // 0x8021E5C0: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    after_18:
    // 0x8021E5C4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8021E5C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E5CC: ldc1        $f18, -0x5870($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5870);
    // 0x8021E5D0: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8021E5D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E5D8: ldc1        $f6, -0x5868($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5868);
    // 0x8021E5DC: mul.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x8021E5E0: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8021E5E4: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x8021E5E8: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8021E5EC: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021E5F0: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_8021E5F4:
    // 0x8021E5F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021E5F8:
    // 0x8021E5F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E5FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E600: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E604: jr          $ra
    // 0x8021E608: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021E608: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80210A44_5CBF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A4C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210A50: jal         0x80013AC4
    // 0x80210A54: addiu       $a0, $a0, -0x1AEC
    ctx->r4 = ADD32(ctx->r4, -0X1AEC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210A54: addiu       $a0, $a0, -0x1AEC
    ctx->r4 = ADD32(ctx->r4, -0X1AEC);
    after_0:
    // 0x80210A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210A60: jr          $ra
    // 0x80210A64: nop

    TRACE_RETURN()
    return;
    // 0x80210A64: nop

;}
RECOMP_FUNC void func_8020E398_5C9868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E3A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E3A4: jal         0x80013AC4
    // 0x8020E3A8: addiu       $a0, $a0, -0x3A4C
    ctx->r4 = ADD32(ctx->r4, -0X3A4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E3A8: addiu       $a0, $a0, -0x3A4C
    ctx->r4 = ADD32(ctx->r4, -0X3A4C);
    after_0:
    // 0x8020E3AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E3B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E3B4: jr          $ra
    // 0x8020E3B8: nop

    TRACE_RETURN()
    return;
    // 0x8020E3B8: nop

;}
RECOMP_FUNC void func_80225AB4_5E0F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225AB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80225ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80225AC4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225AC8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x80225ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80225AD0: jal         0x80223E9C
    // 0x80225AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80223E9C_5DF36C(rdram, ctx);
        goto after_0;
    // 0x80225AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80225AD8: bne         $v0, $zero, L_80225AF0
    if (ctx->r2 != 0) {
        // 0x80225ADC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80225AF0;
    }
    // 0x80225ADC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225AE0: jal         0x80034ED4
    // 0x80225AE4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80225AE4: nop

    after_1:
    // 0x80225AE8: b           L_80225B30
    // 0x80225AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80225B30;
    // 0x80225AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80225AF0:
    // 0x80225AF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80225AF4: sh          $t6, 0xEE($a0)
    MEM_H(0XEE, ctx->r4) = ctx->r14;
    // 0x80225AF8: jal         0x80224E20
    // 0x80225AFC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80224E20_5E02F0(rdram, ctx);
        goto after_2;
    // 0x80225AFC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x80225B00: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80225B04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80225B08: lw          $t7, -0x3278($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3278);
    // 0x80225B0C: sw          $t7, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r15;
    // 0x80225B10: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80225B14: sh          $t8, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r24;
    // 0x80225B18: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x80225B1C: sh          $t9, 0xCA($a0)
    MEM_H(0XCA, ctx->r4) = ctx->r25;
    // 0x80225B20: lh          $t0, 0x4($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X4);
    // 0x80225B24: jal         0x80035020
    // 0x80225B28: sh          $t0, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r8;
    func_80035020_35C20(rdram, ctx);
        goto after_3;
    // 0x80225B28: sh          $t0, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r8;
    after_3:
    // 0x80225B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80225B30:
    // 0x80225B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225B34: jr          $ra
    // 0x80225B38: nop

    TRACE_RETURN()
    return;
    // 0x80225B38: nop

;}
RECOMP_FUNC void func_8020E254_5C9724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E25C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E260: jal         0x80013AC4
    // 0x8020E264: addiu       $a0, $a0, -0x3AA0
    ctx->r4 = ADD32(ctx->r4, -0X3AA0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E264: addiu       $a0, $a0, -0x3AA0
    ctx->r4 = ADD32(ctx->r4, -0X3AA0);
    after_0:
    // 0x8020E268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E270: jr          $ra
    // 0x8020E274: nop

    TRACE_RETURN()
    return;
    // 0x8020E274: nop

;}
RECOMP_FUNC void func_80220E90_5DC360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80220E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220E98: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80220E9C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80220EA0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80220EA4: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x80220EA8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80220EAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80220EB0: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x80220EB4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80220EB8: jalr        $t9
    // 0x80220EBC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80220EBC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80220EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80220EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80220EC8: jr          $ra
    // 0x80220ECC: nop

    TRACE_RETURN()
    return;
    // 0x80220ECC: nop

;}
RECOMP_FUNC void func_8020FF04_5CB3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FF0C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FF10: jal         0x80013AC4
    // 0x8020FF14: addiu       $a0, $a0, -0x2588
    ctx->r4 = ADD32(ctx->r4, -0X2588);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FF14: addiu       $a0, $a0, -0x2588
    ctx->r4 = ADD32(ctx->r4, -0X2588);
    after_0:
    // 0x8020FF18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FF20: jr          $ra
    // 0x8020FF24: nop

    TRACE_RETURN()
    return;
    // 0x8020FF24: nop

;}
