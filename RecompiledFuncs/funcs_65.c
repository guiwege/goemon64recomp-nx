#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80204664_62FA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204664: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80204668: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8020466C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80204670: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80204674: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80204678: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020467C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80204680: blez        $t7, L_802046D4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80204684: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_802046D4;
    }
    // 0x80204684: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80204688: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8020468C: bne         $t8, $zero, L_802046CC
    if (ctx->r24 != 0) {
        // 0x80204690: nop
    
            goto L_802046CC;
    }
    // 0x80204690: nop

    // 0x80204694: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80204698: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8020469C: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x802046A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802046A4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802046A8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802046AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802046B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802046B4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802046B8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x802046BC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x802046C0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x802046C4: jal         0x801DFB90
    // 0x802046C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x802046C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
L_802046CC:
    // 0x802046CC: b           L_802046DC
    // 0x802046D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802046DC;
    // 0x802046D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802046D4:
    // 0x802046D4: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x802046D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802046DC:
    // 0x802046DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802046E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802046E4: jr          $ra
    // 0x802046E8: nop

    TRACE_RETURN()
    return;
    // 0x802046E8: nop

;}
RECOMP_FUNC void func_801D3E90_5FF270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3E98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D3E9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D3EA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D3EA4: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801D3EA8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x801D3EAC: lhu         $a2, 0x1E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X1E);
    // 0x801D3EB0: jal         0x801D3F38
    // 0x801D3EB4: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    func_801D3F38_5FF318(rdram, ctx);
        goto after_0;
    // 0x801D3EB4: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x801D3EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3EC0: jr          $ra
    // 0x801D3EC4: nop

    TRACE_RETURN()
    return;
    // 0x801D3EC4: nop

;}
RECOMP_FUNC void func_802013D0_62C7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802013D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802013D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802013D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802013DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802013E0: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x802013E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802013E8: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802013EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802013F0: addiu       $a0, $a0, 0x143C
    ctx->r4 = ADD32(ctx->r4, 0X143C);
    // 0x802013F4: jal         0x8003521C
    // 0x802013F8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802013F8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802013FC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80201400: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80201404: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80201408: lbu         $t8, 0x10($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X10);
    // 0x8020140C: beq         $t8, $zero, L_80201424
    if (ctx->r24 == 0) {
        // 0x80201410: nop
    
            goto L_80201424;
    }
    // 0x80201410: nop

    // 0x80201414: jal         0x80200684
    // 0x80201418: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x80201418: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8020141C: b           L_80201430
    // 0x80201420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80201430;
    // 0x80201420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80201424:
    // 0x80201424: jal         0x8020407C
    // 0x80201428: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x80201428: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8020142C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80201430:
    // 0x80201430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201434: jr          $ra
    // 0x80201438: nop

    TRACE_RETURN()
    return;
    // 0x80201438: nop

;}
RECOMP_FUNC void func_801D2C90_5FE070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2C98: jal         0x800141C4
    // 0x801D2C9C: addiu       $a0, $zero, 0x4B1
    ctx->r4 = ADD32(0, 0X4B1);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801D2C9C: addiu       $a0, $zero, 0x4B1
    ctx->r4 = ADD32(0, 0X4B1);
    after_0:
    // 0x801D2CA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2CA4: addiu       $v1, $v1, -0x1120
    ctx->r3 = ADD32(ctx->r3, -0X1120);
    // 0x801D2CA8: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801D2CAC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D2CB0: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D2CB4: addiu       $t6, $t6, 0x610
    ctx->r14 = ADD32(ctx->r14, 0X610);
    // 0x801D2CB8: addiu       $t9, $t9, 0xC78
    ctx->r25 = ADD32(ctx->r25, 0XC78);
    // 0x801D2CBC: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x801D2CC0: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x801D2CC4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D2CC8: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x801D2CCC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801D2CD0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801D2CD4: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x801D2CD8: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801D2CDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2CE4: sw          $t8, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = ctx->r24;
    // 0x801D2CE8: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x801D2CEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2CF4: jr          $ra
    // 0x801D2CF8: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801D2CF8: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_801FAA90_625E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FAA90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FAA94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FAA98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FAA9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FAAA0: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801FAAA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FAAA8: bnel        $v0, $zero, L_801FAAD8
    if (ctx->r2 != 0) {
        // 0x801FAAAC: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_801FAAD8;
    }
    goto skip_0;
    // 0x801FAAAC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x801FAAB0: jal         0x80038BC8
    // 0x801FAAB4: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801FAAB4: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x801FAAB8: jal         0x80038BC8
    // 0x801FAABC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FAABC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x801FAAC0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FAAC4: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FAAC8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FAACC: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801FAAD0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801FAAD4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_801FAAD8:
    // 0x801FAAD8: bgez        $t8, L_801FABE4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801FAADC: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801FABE4;
    }
    // 0x801FAADC: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801FAAE0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801FAAE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FAAE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FAAEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FAAF0: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FAAF4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FAAF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FAAFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FAB00: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x801FAB04: swc1        $f8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f8.u32l;
    // 0x801FAB08: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FAB0C: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801FAB10: nop

    // 0x801FAB14: bc1fl       L_801FAB28
    if (!c1cs) {
        // 0x801FAB18: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801FAB28;
    }
    goto skip_1;
    // 0x801FAB18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x801FAB1C: b           L_801FAB28
    // 0x801FAB20: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801FAB28;
    // 0x801FAB20: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801FAB24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801FAB28:
    // 0x801FAB28: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801FAB2C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FAB30: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FAB34: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FAB38: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801FAB3C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801FAB40: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FAB44: nop

    // 0x801FAB48: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FAB4C: beql        $a3, $zero, L_801FAB9C
    if (ctx->r7 == 0) {
        // 0x801FAB50: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801FAB9C;
    }
    goto skip_2;
    // 0x801FAB50: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x801FAB54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FAB58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801FAB5C: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801FAB60: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801FAB64: nop

    // 0x801FAB68: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801FAB6C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801FAB70: nop

    // 0x801FAB74: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801FAB78: bne         $a3, $zero, L_801FAB90
    if (ctx->r7 != 0) {
        // 0x801FAB7C: nop
    
            goto L_801FAB90;
    }
    // 0x801FAB7C: nop

    // 0x801FAB80: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801FAB84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FAB88: b           L_801FABA8
    // 0x801FAB8C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801FABA8;
    // 0x801FAB8C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801FAB90:
    // 0x801FAB90: b           L_801FABA8
    // 0x801FAB94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801FABA8;
    // 0x801FAB94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801FAB98: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801FAB9C:
    // 0x801FAB9C: nop

    // 0x801FABA0: bltz        $a3, L_801FAB90
    if (SIGNED(ctx->r7) < 0) {
        // 0x801FABA4: nop
    
            goto L_801FAB90;
    }
    // 0x801FABA4: nop

L_801FABA8:
    // 0x801FABA8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801FABAC: andi        $t1, $a3, 0xFFFF
    ctx->r9 = ctx->r7 & 0XFFFF;
    // 0x801FABB0: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x801FABB4: jal         0x801D15BC
    // 0x801FABB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_2;
    // 0x801FABB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x801FABBC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801FABC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FABC4: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FABC8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FABCC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801FABD0: nop

    // 0x801FABD4: bc1fl       L_801FABE8
    if (!c1cs) {
        // 0x801FABD8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FABE8;
    }
    goto skip_3;
    // 0x801FABD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801FABDC: jal         0x8003521C
    // 0x801FABE0: addiu       $a0, $a0, -0x5408
    ctx->r4 = ADD32(ctx->r4, -0X5408);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FABE0: addiu       $a0, $a0, -0x5408
    ctx->r4 = ADD32(ctx->r4, -0X5408);
    after_3:
L_801FABE4:
    // 0x801FABE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FABE8:
    // 0x801FABE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FABEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FABF0: jr          $ra
    // 0x801FABF4: nop

    TRACE_RETURN()
    return;
    // 0x801FABF4: nop

;}
RECOMP_FUNC void func_801EF998_61AD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF998: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EF99C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EF9A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801EF9A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801EF9A8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EF9AC: jal         0x801F76D0
    // 0x801EF9B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801EF9B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x801EF9B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF9B8: jal         0x801D2F40
    // 0x801EF9BC: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801EF9BC: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_1:
    // 0x801EF9C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EF9C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EF9C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EF9CC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801EF9D0: nop

    // 0x801EF9D4: bc1fl       L_801EFA64
    if (!c1cs) {
        // 0x801EF9D8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801EFA64;
    }
    goto skip_0;
    // 0x801EF9D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x801EF9DC: jal         0x801D31CC
    // 0x801EF9E0: addiu       $a1, $a1, -0x4D50
    ctx->r5 = ADD32(ctx->r5, -0X4D50);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801EF9E0: addiu       $a1, $a1, -0x4D50
    ctx->r5 = ADD32(ctx->r5, -0X4D50);
    after_2:
    // 0x801EF9E4: jal         0x80038BC8
    // 0x801EF9E8: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801EF9E8: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_3:
    // 0x801EF9EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801EF9F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EF9F4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EF9F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EF9FC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801EFA00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EFA04: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x801EFA08: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801EFA0C: jal         0x801E1084
    // 0x801EFA10: nop

    func_801E1084_60C464(rdram, ctx);
        goto after_4;
    // 0x801EFA10: nop

    after_4:
    // 0x801EFA14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EFA18: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801EFA1C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801EFA20: jal         0x801E0950
    // 0x801EFA24: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801E0950_60BD30(rdram, ctx);
        goto after_5;
    // 0x801EFA24: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_5:
    // 0x801EFA28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFA2C: jal         0x80037C9C
    // 0x801EFA30: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_80037C9C_3889C(rdram, ctx);
        goto after_6;
    // 0x801EFA30: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_6:
    // 0x801EFA34: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801EFA38: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801EFA3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFA40: jal         0x80037C20
    // 0x801EFA44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_7;
    // 0x801EFA44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x801EFA48: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x801EFA4C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EFA50: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x801EFA54: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
    // 0x801EFA58: jal         0x8003521C
    // 0x801EFA5C: addiu       $a0, $a0, -0x578
    ctx->r4 = ADD32(ctx->r4, -0X578);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801EFA5C: addiu       $a0, $a0, -0x578
    ctx->r4 = ADD32(ctx->r4, -0X578);
    after_8:
    // 0x801EFA60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801EFA64:
    // 0x801EFA64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EFA68: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFA6C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801EFA70: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801EFA74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EFA78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801EFA7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801EFA80: jr          $ra
    // 0x801EFA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801EFA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801FBFD4_6273B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBFD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBFD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBFDC: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801FBFE0: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801FBFE4: beq         $at, $zero, L_801FC000
    if (ctx->r1 == 0) {
        // 0x801FBFE8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801FC000;
    }
    // 0x801FBFE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801FBFEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FBFF0: addu        $at, $at, $t6
    gpr jr_addend_801FBFF8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FBFF4: lw          $t6, -0x1620($at)
    ctx->r14 = ADD32(ctx->r1, -0X1620);
    // 0x801FBFF8: jr          $t6
    // 0x801FBFFC: nop

    switch (jr_addend_801FBFF8 >> 2) {
        case 0: goto L_801FC000; break;
        case 1: goto L_801FC014; break;
        case 2: goto L_801FC028; break;
        case 3: goto L_801FC03C; break;
        case 4: goto L_801FC050; break;
        case 5: goto L_801FC064; break;
        case 6: goto L_801FC078; break;
        case 7: goto L_801FC08C; break;
        case 8: goto L_801FC0A0; break;
        case 9: goto L_801FC0B4; break;
        case 10: goto L_801FC0C8; break;
        default: switch_error(__func__, 0x801FBFF8, 0x8020E9E0);
    }
    // 0x801FBFFC: nop

L_801FC000:
    // 0x801FC000: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC004: jal         0x801FC328
    // 0x801FC008: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_0;
    // 0x801FC008: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x801FC00C: b           L_801FC0E4
    // 0x801FC010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC014:
    // 0x801FC014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC018: jal         0x801FC328
    // 0x801FC01C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_1;
    // 0x801FC01C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x801FC020: b           L_801FC0E4
    // 0x801FC024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC028:
    // 0x801FC028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC02C: jal         0x801FC328
    // 0x801FC030: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_2;
    // 0x801FC030: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x801FC034: b           L_801FC0E4
    // 0x801FC038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC03C:
    // 0x801FC03C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC040: jal         0x801FC328
    // 0x801FC044: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_3;
    // 0x801FC044: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_3:
    // 0x801FC048: b           L_801FC0E4
    // 0x801FC04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC050:
    // 0x801FC050: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC054: jal         0x801FC328
    // 0x801FC058: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801FC328_627708(rdram, ctx);
        goto after_4;
    // 0x801FC058: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x801FC05C: b           L_801FC0E4
    // 0x801FC060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC064:
    // 0x801FC064: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC068: jal         0x801FC328
    // 0x801FC06C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_5;
    // 0x801FC06C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_5:
    // 0x801FC070: b           L_801FC0E4
    // 0x801FC074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC078:
    // 0x801FC078: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC07C: jal         0x801FC328
    // 0x801FC080: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801FC328_627708(rdram, ctx);
        goto after_6;
    // 0x801FC080: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_6:
    // 0x801FC084: b           L_801FC0E4
    // 0x801FC088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC08C:
    // 0x801FC08C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC090: jal         0x801FC328
    // 0x801FC094: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_7;
    // 0x801FC094: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_7:
    // 0x801FC098: b           L_801FC0E4
    // 0x801FC09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC0A0:
    // 0x801FC0A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC0A4: jal         0x801FC328
    // 0x801FC0A8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_801FC328_627708(rdram, ctx);
        goto after_8;
    // 0x801FC0A8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_8:
    // 0x801FC0AC: b           L_801FC0E4
    // 0x801FC0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC0B4:
    // 0x801FC0B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC0B8: jal         0x801FC328
    // 0x801FC0BC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_9;
    // 0x801FC0BC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_9:
    // 0x801FC0C0: b           L_801FC0E4
    // 0x801FC0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC0E4;
    // 0x801FC0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC0C8:
    // 0x801FC0C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC0CC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x801FC0D0: jal         0x801FC328
    // 0x801FC0D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801FC328_627708(rdram, ctx);
        goto after_10;
    // 0x801FC0D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801FC0D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FC0DC: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FC0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC0E4:
    // 0x801FC0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FC0E8: jr          $ra
    // 0x801FC0EC: nop

    TRACE_RETURN()
    return;
    // 0x801FC0EC: nop

;}
RECOMP_FUNC void func_80200684_62BA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020068C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200690: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x80200694: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x80200698: jal         0x8003522C
    // 0x8020069C: addiu       $a1, $a1, 0x508
    ctx->r5 = ADD32(ctx->r5, 0X508);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x8020069C: addiu       $a1, $a1, 0x508
    ctx->r5 = ADD32(ctx->r5, 0X508);
    after_0:
    // 0x802006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802006A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802006A8: jr          $ra
    // 0x802006AC: nop

    TRACE_RETURN()
    return;
    // 0x802006AC: nop

;}
RECOMP_FUNC void func_80206984_631D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206984: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80206988: jr          $ra
    // 0x8020698C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8020698C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F705C_62243C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F705C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F7060: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801F7064: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x801F7068: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801F706C: jr          $ra
    // 0x801F7070: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801F7070: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801DCCF8_6080D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCCF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DCCFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DCD00: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DCD04: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x801DCD08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DCD0C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DCD10: beql        $v0, $zero, L_801DCE18
    if (ctx->r2 == 0) {
        // 0x801DCD14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DCE18;
    }
    goto skip_0;
    // 0x801DCD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DCD18: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DCD1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DCD20: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801DCD24: bnel        $t7, $v0, L_801DCDF0
    if (ctx->r15 != ctx->r2) {
        // 0x801DCD28: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801DCDF0;
    }
    goto skip_1;
    // 0x801DCD28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_1:
    // 0x801DCD2C: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x801DCD30: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x801DCD34: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801DCD38: bgtz        $t9, L_801DCD50
    if (SIGNED(ctx->r25) > 0) {
        // 0x801DCD3C: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_801DCD50;
    }
    // 0x801DCD3C: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801DCD40: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x801DCD44: jal         0x801D36C4
    // 0x801DCD48: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_0;
    // 0x801DCD48: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801DCD4C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_801DCD50:
    // 0x801DCD50: lw          $t2, 0x94($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X94);
    // 0x801DCD54: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x801DCD58: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801DCD5C: bgtz        $t3, L_801DCD88
    if (SIGNED(ctx->r11) > 0) {
        // 0x801DCD60: sw          $t3, 0x94($a2)
        MEM_W(0X94, ctx->r6) = ctx->r11;
            goto L_801DCD88;
    }
    // 0x801DCD60: sw          $t3, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->r11;
    // 0x801DCD64: lw          $t6, 0x90($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X90);
    // 0x801DCD68: sw          $t5, 0x94($a2)
    MEM_W(0X94, ctx->r6) = ctx->r13;
    // 0x801DCD6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DCD70: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x801DCD74: sw          $t7, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->r15;
    // 0x801DCD78: lbu         $a1, 0x93($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X93);
    // 0x801DCD7C: jal         0x801DF9E8
    // 0x801DCD80: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801DF9E8_60ADC8(rdram, ctx);
        goto after_1;
    // 0x801DCD80: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801DCD84: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_801DCD88:
    // 0x801DCD88: lw          $t8, 0x98($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X98);
    // 0x801DCD8C: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x801DCD90: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801DCD94: bgtz        $t9, L_801DCE14
    if (SIGNED(ctx->r25) > 0) {
        // 0x801DCD98: sw          $t9, 0x98($a2)
        MEM_W(0X98, ctx->r6) = ctx->r25;
            goto L_801DCE14;
    }
    // 0x801DCD98: sw          $t9, 0x98($a2)
    MEM_W(0X98, ctx->r6) = ctx->r25;
    // 0x801DCD9C: jal         0x8000DD58
    // 0x801DCDA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801DCDA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x801DCDA4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801DCDA8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801DCDAC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801DCDB0: mflo        $t1
    ctx->r9 = lo;
    // 0x801DCDB4: addiu       $t2, $t1, 0x6
    ctx->r10 = ADD32(ctx->r9, 0X6);
    // 0x801DCDB8: lw          $t3, 0x9C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X9C);
    // 0x801DCDBC: sw          $t2, 0x98($a2)
    MEM_W(0X98, ctx->r6) = ctx->r10;
    // 0x801DCDC0: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x801DCDC4: beq         $t4, $zero, L_801DCDDC
    if (ctx->r12 == 0) {
        // 0x801DCDC8: sw          $t4, 0x9C($a2)
        MEM_W(0X9C, ctx->r6) = ctx->r12;
            goto L_801DCDDC;
    }
    // 0x801DCDC8: sw          $t4, 0x9C($a2)
    MEM_W(0X9C, ctx->r6) = ctx->r12;
    // 0x801DCDCC: jal         0x80038BC8
    // 0x801DCDD0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801DCDD0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_3:
    // 0x801DCDD4: b           L_801DCE18
    // 0x801DCDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DCE18;
    // 0x801DCDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DCDDC:
    // 0x801DCDDC: jal         0x80038BC8
    // 0x801DCDE0: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801DCDE0: addiu       $a0, $zero, 0x232
    ctx->r4 = ADD32(0, 0X232);
    after_4:
    // 0x801DCDE4: b           L_801DCE18
    // 0x801DCDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DCE18;
    // 0x801DCDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DCDEC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_801DCDF0:
    // 0x801DCDF0: jal         0x801D36C4
    // 0x801DCDF4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_5;
    // 0x801DCDF4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_5:
    // 0x801DCDF8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801DCDFC: lw          $t6, 0x64($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X64);
    // 0x801DCE00: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x801DCE04: beql        $t7, $zero, L_801DCE18
    if (ctx->r15 == 0) {
        // 0x801DCE08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DCE18;
    }
    goto skip_2;
    // 0x801DCE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801DCE0C: jal         0x80038BC8
    // 0x801DCE10: addiu       $a0, $zero, 0x231
    ctx->r4 = ADD32(0, 0X231);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801DCE10: addiu       $a0, $zero, 0x231
    ctx->r4 = ADD32(0, 0X231);
    after_6:
L_801DCE14:
    // 0x801DCE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DCE18:
    // 0x801DCE18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DCE1C: jr          $ra
    // 0x801DCE20: nop

    TRACE_RETURN()
    return;
    // 0x801DCE20: nop

;}
RECOMP_FUNC void func_80207288_632668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207288: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8020728C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80207290: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80207294: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80207298: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8020729C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x802072A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802072A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802072A8: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x802072AC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802072B0: bne         $v0, $at, L_8020733C
    if (ctx->r2 != ctx->r1) {
        // 0x802072B4: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_8020733C;
    }
    // 0x802072B4: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x802072B8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802072BC: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x802072C0: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802072C4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x802072C8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x802072CC: lw          $a0, 0x1D8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1D8);
    // 0x802072D0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802072D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802072D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802072DC: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802072E0: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x802072E4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802072E8: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802072EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802072F0: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802072F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802072F8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802072FC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80207300: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80207304: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80207308: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8020730C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80207310: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80207314: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80207318: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020731C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80207320: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80207324: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80207328: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x8020732C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80207330: jal         0x80207838
    // 0x80207334: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_0;
    // 0x80207334: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80207338: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_8020733C:
    // 0x8020733C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80207340: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80207344: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80207348: bne         $v0, $at, L_802073C8
    if (ctx->r2 != ctx->r1) {
        // 0x8020734C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_802073C8;
    }
    // 0x8020734C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80207350: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x80207354: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80207358: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x8020735C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80207360: lw          $a0, 0x1D8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1D8);
    // 0x80207364: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80207368: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x8020736C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80207370: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80207374: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80207378: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020737C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80207380: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80207384: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x80207388: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8020738C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80207390: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80207394: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80207398: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8020739C: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x802073A0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802073A4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x802073A8: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802073AC: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802073B0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802073B4: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x802073B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802073BC: jal         0x80207838
    // 0x802073C0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_1;
    // 0x802073C0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802073C4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_802073C8:
    // 0x802073C8: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x802073CC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802073D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802073D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802073D8: bne         $v0, $at, L_8020744C
    if (ctx->r2 != ctx->r1) {
        // 0x802073DC: lui         $t0, 0x8021
        ctx->r8 = S32(0X8021 << 16);
            goto L_8020744C;
    }
    // 0x802073DC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802073E0: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x802073E4: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802073E8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x802073EC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x802073F0: lw          $a0, 0x1D8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1D8);
    // 0x802073F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802073F8: lwc1        $f8, 0x70($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802073FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80207400: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80207404: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80207408: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x8020740C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80207410: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80207414: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80207418: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8020741C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80207420: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x80207424: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80207428: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8020742C: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x80207430: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80207434: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80207438: sub.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d - ctx->f0.d;
    // 0x8020743C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80207440: jal         0x80207838
    // 0x80207444: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_2;
    // 0x80207444: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80207448: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_8020744C:
    // 0x8020744C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80207450: bne         $v0, $at, L_802074D4
    if (ctx->r2 != ctx->r1) {
        // 0x80207454: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_802074D4;
    }
    // 0x80207454: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80207458: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x8020745C: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80207460: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80207464: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80207468: lw          $a0, 0x1D8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D8);
    // 0x8020746C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80207470: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80207474: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80207478: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8020747C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80207480: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80207484: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80207488: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8020748C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80207490: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80207494: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80207498: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8020749C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802074A0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x802074A4: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802074A8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802074AC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802074B0: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x802074B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802074B8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x802074BC: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802074C0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802074C4: jal         0x80207838
    // 0x802074C8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_3;
    // 0x802074C8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x802074CC: jal         0x80034ED4
    // 0x802074D0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x802074D0: nop

    after_4:
L_802074D4:
    // 0x802074D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802074D8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802074DC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802074E0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802074E4: jr          $ra
    // 0x802074E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802074E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8020580C_630BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205818: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020581C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80205820: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80205824: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80205828: bne         $t7, $zero, L_80205858
    if (ctx->r15 != 0) {
        // 0x8020582C: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_80205858;
    }
    // 0x8020582C: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80205830: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80205834: jal         0x8000DD58
    // 0x80205838: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80205838: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8020583C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80205840: addiu       $t9, $v0, 0x50
    ctx->r25 = ADD32(ctx->r2, 0X50);
    // 0x80205844: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80205848: addiu       $a0, $a0, 0x5614
    ctx->r4 = ADD32(ctx->r4, 0X5614);
    // 0x8020584C: jal         0x8003521C
    // 0x80205850: sw          $t9, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80205850: sw          $t9, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r25;
    after_1:
    // 0x80205854: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_80205858:
    // 0x80205858: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8020585C: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x80205860: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80205864: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80205868: lbu         $t1, 0x11($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X11);
    // 0x8020586C: addiu       $a0, $a0, 0x58B0
    ctx->r4 = ADD32(ctx->r4, 0X58B0);
    // 0x80205870: bne         $t1, $at, L_80205898
    if (ctx->r9 != ctx->r1) {
        // 0x80205874: nop
    
            goto L_80205898;
    }
    // 0x80205874: nop

    // 0x80205878: jal         0x8003521C
    // 0x8020587C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x8020587C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x80205880: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80205884: lw          $t2, 0x84($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X84);
    // 0x80205888: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8020588C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205890: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80205894: sw          $t3, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->r11;
L_80205898:
    // 0x80205898: jal         0x80205C00
    // 0x8020589C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_3;
    // 0x8020589C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x802058A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802058A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802058A8: jr          $ra
    // 0x802058AC: nop

    TRACE_RETURN()
    return;
    // 0x802058AC: nop

;}
RECOMP_FUNC void func_801FADC0_6261A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FADC0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FADC4: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FADC8: lw          $v0, 0x1DC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1DC);
    // 0x801FADCC: beq         $v0, $zero, L_801FADD8
    if (ctx->r2 == 0) {
        // 0x801FADD0: nop
    
            goto L_801FADD8;
    }
    // 0x801FADD0: nop

    // 0x801FADD4: sw          $a0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r4;
L_801FADD8:
    // 0x801FADD8: jr          $ra
    // 0x801FADDC: nop

    TRACE_RETURN()
    return;
    // 0x801FADDC: nop

;}
RECOMP_FUNC void func_801DAFCC_6063AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAFCC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DAFD0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DAFD4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DAFD8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DAFDC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DAFE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAFE4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DAFE8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DAFEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DAFF0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DAFF4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801DAFF8: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801DAFFC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DB000: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x801DB004: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x801DB008: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DB00C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801DB010: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801DB014: nop

    // 0x801DB018: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801DB01C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801DB020: nop

    // 0x801DB024: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801DB028: beql        $t0, $zero, L_801DB078
    if (ctx->r8 == 0) {
        // 0x801DB02C: mfc1        $t0, $f18
        ctx->r8 = (int32_t)ctx->f18.u32l;
            goto L_801DB078;
    }
    goto skip_0;
    // 0x801DB02C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x801DB030: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DB034: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801DB038: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801DB03C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801DB040: nop

    // 0x801DB044: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801DB048: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801DB04C: nop

    // 0x801DB050: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801DB054: bne         $t0, $zero, L_801DB06C
    if (ctx->r8 != 0) {
        // 0x801DB058: nop
    
            goto L_801DB06C;
    }
    // 0x801DB058: nop

    // 0x801DB05C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x801DB060: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DB064: b           L_801DB084
    // 0x801DB068: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_801DB084;
    // 0x801DB068: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_801DB06C:
    // 0x801DB06C: b           L_801DB084
    // 0x801DB070: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_801DB084;
    // 0x801DB070: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801DB074: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
L_801DB078:
    // 0x801DB078: nop

    // 0x801DB07C: bltz        $t0, L_801DB06C
    if (SIGNED(ctx->r8) < 0) {
        // 0x801DB080: nop
    
            goto L_801DB06C;
    }
    // 0x801DB080: nop

L_801DB084:
    // 0x801DB084: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801DB088: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x801DB08C: andi        $a1, $t0, 0x3FF
    ctx->r5 = ctx->r8 & 0X3FF;
    // 0x801DB090: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x801DB094: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x801DB098: jal         0x8000E630
    // 0x801DB09C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801DB09C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x801DB0A0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801DB0A4: addiu       $a1, $a1, -0x6540
    ctx->r5 = ADD32(ctx->r5, -0X6540);
    // 0x801DB0A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB0AC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DB0B0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801DB0B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB0B8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x801DB0BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DB0C0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801DB0C4: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801DB0C8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB0CC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801DB0D0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DB0D4: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x801DB0D8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801DB0DC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801DB0E0: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801DB0E4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801DB0E8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801DB0EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DB0F0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801DB0F4: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801DB0F8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DB0FC: addiu       $a0, $a0, -0x4E00
    ctx->r4 = ADD32(ctx->r4, -0X4E00);
    // 0x801DB100: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x801DB104: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DB108: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801DB10C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x801DB110: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x801DB114: jal         0x80035854
    // 0x801DB118: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801DB118: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x801DB11C: beq         $v0, $zero, L_801DB1EC
    if (ctx->r2 == 0) {
        // 0x801DB120: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DB1EC;
    }
    // 0x801DB120: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DB124: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DB128: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801DB12C: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x801DB130: swc1        $f18, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f18.u32l;
    // 0x801DB134: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801DB138: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801DB13C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801DB140: sb          $t9, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r25;
    // 0x801DB144: sw          $t4, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r12;
    // 0x801DB148: sb          $t3, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r11;
    // 0x801DB14C: sh          $t3, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r11;
    // 0x801DB150: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x801DB154: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x801DB158: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x801DB15C: swc1        $f4, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f4.u32l;
    // 0x801DB160: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x801DB164: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x801DB168: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x801DB16C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801DB170: lw          $t1, 0xC($t6)
    ctx->r9 = MEM_W(ctx->r14, 0XC);
    // 0x801DB174: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DB178: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801DB17C: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x801DB180: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801DB184: lhu         $t0, 0x16($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X16);
    // 0x801DB188: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x801DB18C: subu        $t4, $t8, $t7
    ctx->r12 = SUB32(ctx->r24, ctx->r15);
    // 0x801DB190: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x801DB194: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x801DB198: addiu       $t6, $t0, -0x100
    ctx->r14 = ADD32(ctx->r8, -0X100);
    // 0x801DB19C: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
    // 0x801DB1A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DB1A4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DB1A8: jal         0x8000E68C
    // 0x801DB1AC: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    func_8000E68C_F28C(rdram, ctx);
        goto after_2;
    // 0x801DB1AC: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    after_2:
    // 0x801DB1B0: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x801DB1B4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801DB1B8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DB1BC: lwc1        $f10, 0x94($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X94);
    // 0x801DB1C0: lwc1        $f6, 0x90($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X90);
    // 0x801DB1C4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801DB1C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DB1CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DB1D0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x801DB1D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801DB1D8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801DB1DC: jal         0x8000E39C
    // 0x801DB1E0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801DB1E0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x801DB1E4: b           L_801DB1F0
    // 0x801DB1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DB1F0;
    // 0x801DB1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DB1EC:
    // 0x801DB1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DB1F0:
    // 0x801DB1F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB1F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801DB1F8: jr          $ra
    // 0x801DB1FC: nop

    TRACE_RETURN()
    return;
    // 0x801DB1FC: nop

;}
RECOMP_FUNC void func_801EF924_61AD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF92C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF930: jal         0x801F7074
    // 0x801EF934: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801EF934: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EF938: jal         0x801F76D0
    // 0x801EF93C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801EF93C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801EF940: jal         0x801F701C
    // 0x801EF944: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_2;
    // 0x801EF944: nop

    after_2:
    // 0x801EF948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF950: jr          $ra
    // 0x801EF954: nop

    TRACE_RETURN()
    return;
    // 0x801EF954: nop

;}
RECOMP_FUNC void func_801D38E0_5FECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D38E0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D38E4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D38E8: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x801D38EC: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x801D38F0: slti        $at, $v1, 0x3E7
    ctx->r1 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x801D38F4: bne         $at, $zero, L_801D3904
    if (ctx->r1 != 0) {
        // 0x801D38F8: sw          $v1, 0x68($v0)
        MEM_W(0X68, ctx->r2) = ctx->r3;
            goto L_801D3904;
    }
    // 0x801D38F8: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
    // 0x801D38FC: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x801D3900: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
L_801D3904:
    // 0x801D3904: bgtz        $v1, L_801D3914
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3908: nop
    
            goto L_801D3914;
    }
    // 0x801D3908: nop

    // 0x801D390C: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x801D3910: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3914:
    // 0x801D3914: jr          $ra
    // 0x801D3918: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3918: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F0F3C_61C31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0F3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0F44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F0F48: jal         0x801F76D0
    // 0x801F0F4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F0F4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F0F50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F0F54: jal         0x801D3018
    // 0x801F0F58: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801F0F58: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F0F5C: jal         0x801F7168
    // 0x801F0F60: nop

    func_801F7168_622548(rdram, ctx);
        goto after_2;
    // 0x801F0F60: nop

    after_2:
    // 0x801F0F64: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F0F68: lui         $at, 0x440C
    ctx->r1 = S32(0X440C << 16);
    // 0x801F0F6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0F70: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F0F74: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801F0F78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F0F7C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F0F80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F0F84: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F0F88: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801F0F8C: jal         0x801D619C
    // 0x801F0F90: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    func_801D619C_60157C(rdram, ctx);
        goto after_3;
    // 0x801F0F90: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    after_3:
    // 0x801F0F94: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F0F98: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801F0F9C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0FA0: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x801F0FA4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x801F0FA8: nop

    // 0x801F0FAC: bc1fl       L_801F0FC0
    if (!c1cs) {
        // 0x801F0FB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F0FC0;
    }
    goto skip_0;
    // 0x801F0FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F0FB4: jal         0x8003521C
    // 0x801F0FB8: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F0FB8: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
    after_4:
    // 0x801F0FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F0FC0:
    // 0x801F0FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0FC4: jr          $ra
    // 0x801F0FC8: nop

    TRACE_RETURN()
    return;
    // 0x801F0FC8: nop

;}
RECOMP_FUNC void func_801FB120_626500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FB124: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801FB128: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801FB12C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FB130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FB134: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB138: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x801FB13C: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x801FB140: bne         $t8, $zero, L_801FB1A8
    if (ctx->r24 != 0) {
        // 0x801FB144: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_801FB1A8;
    }
    // 0x801FB144: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x801FB148: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801FB14C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FB150: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB154: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801FB158: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB15C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB160: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB164: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB168: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB16C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB170: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x801FB174: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FB178: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB17C: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FB180: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB184: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801FB188: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB18C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB190: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB194: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB198: jal         0x801DFB90
    // 0x801FB19C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801FB19C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801FB1A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801FB1A4: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_801FB1A8:
    // 0x801FB1A8: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x801FB1AC: bne         $t0, $zero, L_801FB218
    if (ctx->r8 != 0) {
        // 0x801FB1B0: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_801FB218;
    }
    // 0x801FB1B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801FB1B4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801FB1B8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x801FB1BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB1C0: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801FB1C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB1C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB1CC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB1D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB1D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB1D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB1DC: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801FB1E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FB1E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB1E8: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB1EC: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801FB1F0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB1F4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB1F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801FB1FC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB200: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB204: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB208: jal         0x801DFB90
    // 0x801FB20C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801FB20C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801FB210: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801FB214: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_801FB218:
    // 0x801FB218: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FB21C: bne         $v0, $at, L_801FB264
    if (ctx->r2 != ctx->r1) {
        // 0x801FB220: lui         $t2, 0x8016
        ctx->r10 = S32(0X8016 << 16);
            goto L_801FB264;
    }
    // 0x801FB220: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801FB224: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801FB228: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801FB22C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801FB230: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801FB234: lbu         $t3, -0x521C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X521C);
    // 0x801FB238: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x801FB23C: bnel        $t3, $at, L_801FB258
    if (ctx->r11 != ctx->r1) {
        // 0x801FB240: sw          $t4, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r12;
            goto L_801FB258;
    }
    goto skip_0;
    // 0x801FB240: sw          $t4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r12;
    skip_0:
    // 0x801FB244: jal         0x8003D310
    // 0x801FB248: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8003D310_3DF10(rdram, ctx);
        goto after_2;
    // 0x801FB248: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_2:
    // 0x801FB24C: b           L_801FB258
    // 0x801FB250: nop

        goto L_801FB258;
    // 0x801FB250: nop

    // 0x801FB254: sw          $t4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r12;
L_801FB258:
    // 0x801FB258: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB25C: jal         0x8003521C
    // 0x801FB260: addiu       $a0, $a0, -0x4D8C
    ctx->r4 = ADD32(ctx->r4, -0X4D8C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FB260: addiu       $a0, $a0, -0x4D8C
    ctx->r4 = ADD32(ctx->r4, -0X4D8C);
    after_3:
L_801FB264:
    // 0x801FB264: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801FB268: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FB26C: jr          $ra
    // 0x801FB270: nop

    TRACE_RETURN()
    return;
    // 0x801FB270: nop

;}
RECOMP_FUNC void func_801F1394_61C774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F1398: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F139C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F13A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F13A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F13A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801F13AC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F13B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F13B4: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801F13B8: jal         0x801D31CC
    // 0x801F13BC: addiu       $a1, $a1, -0x4D88
    ctx->r5 = ADD32(ctx->r5, -0X4D88);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801F13BC: addiu       $a1, $a1, -0x4D88
    ctx->r5 = ADD32(ctx->r5, -0X4D88);
    after_0:
    // 0x801F13C0: jal         0x80003E10
    // 0x801F13C4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801F13C4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_1:
    // 0x801F13C8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801F13CC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801F13D0: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801F13D4: jal         0x80003EA0
    // 0x801F13D8: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x801F13D8: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_2:
    // 0x801F13DC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801F13E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F13E4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801F13E8: jal         0x801F7074
    // 0x801F13EC: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    func_801F7074_622454(rdram, ctx);
        goto after_3;
    // 0x801F13EC: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801F13F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F13F4: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F13F8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801F13FC: nop

    // 0x801F1400: bc1f        L_801F1460
    if (!c1cs) {
        // 0x801F1404: nop
    
            goto L_801F1460;
    }
    // 0x801F1404: nop

    // 0x801F1408: jal         0x8000DD58
    // 0x801F140C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801F140C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_4:
    // 0x801F1410: addiu       $t6, $zero, -0x64
    ctx->r14 = ADD32(0, -0X64);
    // 0x801F1414: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x801F1418: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801F141C: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x801F1420: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F1424: jal         0x8000DD58
    // 0x801F1428: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801F1428: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x801F142C: addiu       $t8, $v0, -0x6E
    ctx->r24 = ADD32(ctx->r2, -0X6E);
    // 0x801F1430: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801F1434: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x801F1438: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F143C: jal         0x8000DD58
    // 0x801F1440: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801F1440: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    after_6:
    // 0x801F1444: addiu       $t9, $zero, -0xC8
    ctx->r25 = ADD32(0, -0XC8);
    // 0x801F1448: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x801F144C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x801F1450: nop

    // 0x801F1454: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F1458: b           L_801F14B0
    // 0x801F145C: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_801F14B0;
    // 0x801F145C: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_801F1460:
    // 0x801F1460: jal         0x8000DD58
    // 0x801F1464: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    func_8000DD58_E958(rdram, ctx);
        goto after_7;
    // 0x801F1464: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_7:
    // 0x801F1468: addiu       $t1, $v0, 0x64
    ctx->r9 = ADD32(ctx->r2, 0X64);
    // 0x801F146C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x801F1470: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x801F1474: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F1478: jal         0x8000DD58
    // 0x801F147C: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801F147C: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x801F1480: addiu       $t2, $v0, -0x6E
    ctx->r10 = ADD32(ctx->r2, -0X6E);
    // 0x801F1484: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801F1488: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x801F148C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F1490: jal         0x8000DD58
    // 0x801F1494: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801F1494: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    after_9:
    // 0x801F1498: addiu       $t3, $zero, -0xC8
    ctx->r11 = ADD32(0, -0XC8);
    // 0x801F149C: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x801F14A0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x801F14A4: nop

    // 0x801F14A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F14AC: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_801F14B0:
    // 0x801F14B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801F14B4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F14B8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F14BC: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801F14C0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F14C4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F14C8: addiu       $a0, $zero, 0x280
    ctx->r4 = ADD32(0, 0X280);
    // 0x801F14CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F14D0: jal         0x8000F3D8
    // 0x801F14D4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_10;
    // 0x801F14D4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_10:
    // 0x801F14D8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F14DC: addiu       $a1, $a1, 0x14FC
    ctx->r5 = ADD32(ctx->r5, 0X14FC);
    // 0x801F14E0: jal         0x8003522C
    // 0x801F14E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_11;
    // 0x801F14E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801F14E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F14EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F14F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F14F4: jr          $ra
    // 0x801F14F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F14F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801EC61C_6179FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC61C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EC620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EC624: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EC628: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC62C: jal         0x801ECEDC
    // 0x801EC630: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801EC630: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EC634: bnel        $v0, $zero, L_801EC7A8
    if (ctx->r2 != 0) {
        // 0x801EC638: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EC7A8;
    }
    goto skip_0;
    // 0x801EC638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EC63C: jal         0x801ECE48
    // 0x801EC640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801ECE48_618228(rdram, ctx);
        goto after_1;
    // 0x801EC640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EC644: bne         $v0, $zero, L_801EC7A4
    if (ctx->r2 != 0) {
        // 0x801EC648: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EC7A4;
    }
    // 0x801EC648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC64C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801EC650: jal         0x801D3B18
    // 0x801EC654: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_2;
    // 0x801EC654: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x801EC658: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801EC65C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801EC660: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x801EC664: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801EC668: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    // 0x801EC66C: bgez        $t6, L_801EC680
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801EC670: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801EC680;
    }
    // 0x801EC670: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801EC674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EC678: nop

    // 0x801EC67C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801EC680:
    // 0x801EC680: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801EC684: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EC688: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EC68C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801EC690: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801EC694: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801EC698: nop

    // 0x801EC69C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801EC6A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801EC6A4: nop

    // 0x801EC6A8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801EC6AC: beql        $t8, $zero, L_801EC6FC
    if (ctx->r24 == 0) {
        // 0x801EC6B0: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_801EC6FC;
    }
    goto skip_1;
    // 0x801EC6B0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x801EC6B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EC6B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EC6BC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801EC6C0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801EC6C4: nop

    // 0x801EC6C8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801EC6CC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801EC6D0: nop

    // 0x801EC6D4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801EC6D8: bne         $t8, $zero, L_801EC6F0
    if (ctx->r24 != 0) {
        // 0x801EC6DC: nop
    
            goto L_801EC6F0;
    }
    // 0x801EC6DC: nop

    // 0x801EC6E0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801EC6E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EC6E8: b           L_801EC708
    // 0x801EC6EC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801EC708;
    // 0x801EC6EC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801EC6F0:
    // 0x801EC6F0: b           L_801EC708
    // 0x801EC6F4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801EC708;
    // 0x801EC6F4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801EC6F8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_801EC6FC:
    // 0x801EC6FC: nop

    // 0x801EC700: bltz        $t8, L_801EC6F0
    if (SIGNED(ctx->r24) < 0) {
        // 0x801EC704: nop
    
            goto L_801EC6F0;
    }
    // 0x801EC704: nop

L_801EC708:
    // 0x801EC708: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801EC70C: sltiu       $at, $t8, 0x3A0
    ctx->r1 = ctx->r24 < 0X3A0 ? 1 : 0;
    // 0x801EC710: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
    // 0x801EC714: bne         $at, $zero, L_801EC730
    if (ctx->r1 != 0) {
        // 0x801EC718: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_801EC730;
    }
    // 0x801EC718: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801EC71C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x801EC720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EC724: addiu       $v1, $zero, 0x3A0
    ctx->r3 = ADD32(0, 0X3A0);
    // 0x801EC728: sw          $v1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r3;
    // 0x801EC72C: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
L_801EC730:
    // 0x801EC730: sltiu       $at, $v1, 0x261
    ctx->r1 = ctx->r3 < 0X261 ? 1 : 0;
    // 0x801EC734: beq         $at, $zero, L_801EC74C
    if (ctx->r1 == 0) {
        // 0x801EC738: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_801EC74C;
    }
    // 0x801EC738: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EC73C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EC740: addiu       $t0, $zero, 0x260
    ctx->r8 = ADD32(0, 0X260);
    // 0x801EC744: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
    // 0x801EC748: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
L_801EC74C:
    // 0x801EC74C: lw          $t1, 0x7C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X7C);
    // 0x801EC750: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801EC754: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801EC758: bne         $t2, $zero, L_801EC78C
    if (ctx->r10 != 0) {
        // 0x801EC75C: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_801EC78C;
    }
    // 0x801EC75C: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801EC760: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EC764: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801EC768: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EC76C: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801EC770: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801EC774: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801EC778: jal         0x8000F240
    // 0x801EC77C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_3;
    // 0x801EC77C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801EC780: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EC784: jal         0x8003521C
    // 0x801EC788: addiu       $a0, $a0, -0x3848
    ctx->r4 = ADD32(ctx->r4, -0X3848);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801EC788: addiu       $a0, $a0, -0x3848
    ctx->r4 = ADD32(ctx->r4, -0X3848);
    after_4:
L_801EC78C:
    // 0x801EC78C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801EC790: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC794: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801EC798: addiu       $a2, $t5, 0x8
    ctx->r6 = ADD32(ctx->r13, 0X8);
    // 0x801EC79C: jal         0x8000E630
    // 0x801EC7A0: addiu       $a3, $t5, 0x10
    ctx->r7 = ADD32(ctx->r13, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_5;
    // 0x801EC7A0: addiu       $a3, $t5, 0x10
    ctx->r7 = ADD32(ctx->r13, 0X10);
    after_5:
L_801EC7A4:
    // 0x801EC7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EC7A8:
    // 0x801EC7A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EC7AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EC7B0: jr          $ra
    // 0x801EC7B4: nop

    TRACE_RETURN()
    return;
    // 0x801EC7B4: nop

;}
RECOMP_FUNC void func_801DD06C_60844C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD074: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DD078: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801DD07C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DD080: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801DD084: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801DD088: beq         $v0, $zero, L_801DD094
    if (ctx->r2 == 0) {
        // 0x801DD08C: addiu       $v1, $v1, 0x140
        ctx->r3 = ADD32(ctx->r3, 0X140);
            goto L_801DD094;
    }
    // 0x801DD08C: addiu       $v1, $v1, 0x140
    ctx->r3 = ADD32(ctx->r3, 0X140);
    // 0x801DD090: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
L_801DD094:
    // 0x801DD094: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x801DD098: jal         0x801DD394
    // 0x801DD09C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801DD394_608774(rdram, ctx);
        goto after_0;
    // 0x801DD09C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DD0A0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DD0A4: bne         $v0, $zero, L_801DD0DC
    if (ctx->r2 != 0) {
        // 0x801DD0A8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801DD0DC;
    }
    // 0x801DD0A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DD0AC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x801DD0B0: jal         0x801D3A18
    // 0x801DD0B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801DD0B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x801DD0B8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DD0BC: bne         $v0, $zero, L_801DD0DC
    if (ctx->r2 != 0) {
        // 0x801DD0C0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801DD0DC;
    }
    // 0x801DD0C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DD0C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x801DD0C8: jal         0x801D39A0
    // 0x801DD0CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_2;
    // 0x801DD0CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x801DD0D0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DD0D4: beq         $v0, $zero, L_801DD0E4
    if (ctx->r2 == 0) {
        // 0x801DD0D8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801DD0E4;
    }
    // 0x801DD0D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_801DD0DC:
    // 0x801DD0DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DD0E0: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
L_801DD0E4:
    // 0x801DD0E4: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x801DD0E8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD0EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801DD0F0: beq         $t8, $zero, L_801DD10C
    if (ctx->r24 == 0) {
        // 0x801DD0F4: addiu       $a0, $a0, -0x2ECC
        ctx->r4 = ADD32(ctx->r4, -0X2ECC);
            goto L_801DD10C;
    }
    // 0x801DD0F4: addiu       $a0, $a0, -0x2ECC
    ctx->r4 = ADD32(ctx->r4, -0X2ECC);
    // 0x801DD0F8: sb          $t9, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r25;
    // 0x801DD0FC: jal         0x8003521C
    // 0x801DD100: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801DD100: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    after_3:
    // 0x801DD104: b           L_801DD128
    // 0x801DD108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD128;
    // 0x801DD108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD10C:
    // 0x801DD10C: lbu         $t0, 0xD($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XD);
    // 0x801DD110: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD114: beql        $t0, $zero, L_801DD128
    if (ctx->r8 == 0) {
        // 0x801DD118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DD128;
    }
    goto skip_0;
    // 0x801DD118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DD11C: jal         0x8003521C
    // 0x801DD120: addiu       $a0, $a0, -0x2DE8
    ctx->r4 = ADD32(ctx->r4, -0X2DE8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801DD120: addiu       $a0, $a0, -0x2DE8
    ctx->r4 = ADD32(ctx->r4, -0X2DE8);
    after_4:
    // 0x801DD124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD128:
    // 0x801DD128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD12C: jr          $ra
    // 0x801DD130: nop

    TRACE_RETURN()
    return;
    // 0x801DD130: nop

;}
RECOMP_FUNC void func_80200088_62B468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200088: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8020008C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80200090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80200094: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80200098: lw          $a0, 0x1D8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1D8);
    // 0x8020009C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802000A0: addiu       $a1, $a1, 0x148
    ctx->r5 = ADD32(ctx->r5, 0X148);
    // 0x802000A4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802000A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802000AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802000B0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802000B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802000B8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802000BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802000C0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802000C4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802000C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802000CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802000D0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x802000D4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802000D8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802000DC: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802000E0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x802000E4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802000E8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802000EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802000F0: jal         0x800358E8
    // 0x802000F4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802000F4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x802000F8: beq         $v0, $zero, L_80200134
    if (ctx->r2 == 0) {
        // 0x802000FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80200134;
    }
    // 0x802000FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80200100: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80200104: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80200108: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x8020010C: addiu       $t0, $zero, 0x1B8
    ctx->r8 = ADD32(0, 0X1B8);
    // 0x80200110: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
    // 0x80200114: sw          $t8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r24;
    // 0x80200118: sb          $t9, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r25;
    // 0x8020011C: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x80200120: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x80200124: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x80200128: jal         0x801D36C4
    // 0x8020012C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x8020012C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80200130: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_80200134:
    // 0x80200134: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80200138: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8020013C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80200140: jr          $ra
    // 0x80200144: nop

    TRACE_RETURN()
    return;
    // 0x80200144: nop

;}
RECOMP_FUNC void func_801E18E4_60CCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E18E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E18E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E18EC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E18F0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801E18F4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801E18F8: lw          $t7, 0x98($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X98);
    // 0x801E18FC: lw          $a3, 0x94($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X94);
    // 0x801E1900: lw          $a2, 0x90($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X90);
    // 0x801E1904: lw          $a1, 0xA8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XA8);
    // 0x801E1908: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801E190C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E1910: jal         0x8000DF10
    // 0x801E1914: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801E1914: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E1918: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E191C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801E1920: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801E1924: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801E1928: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E192C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801E1930: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    // 0x801E1934: lw          $v1, 0x9C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X9C);
    // 0x801E1938: beq         $v1, $zero, L_801E1948
    if (ctx->r3 == 0) {
        // 0x801E193C: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_801E1948;
    }
    // 0x801E193C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801E1940: jal         0x801D3534
    // 0x801E1944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D3534_5FE914(rdram, ctx);
        goto after_1;
    // 0x801E1944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_801E1948:
    // 0x801E1948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E194C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E1950: jr          $ra
    // 0x801E1954: nop

    TRACE_RETURN()
    return;
    // 0x801E1954: nop

;}
RECOMP_FUNC void func_801D5938_600D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5938: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D593C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801D5940: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D5944: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D5948: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801D594C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801D5950: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    // 0x801D5954: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    // 0x801D5958: swc1        $f20, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f20.u32l;
    // 0x801D595C: lw          $s1, 0x38($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X38);
    // 0x801D5960: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D5964: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801D5968: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x801D596C: beql        $v1, $zero, L_801D5B58
    if (ctx->r3 == 0) {
        // 0x801D5970: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801D5B58;
    }
    goto skip_0;
    // 0x801D5970: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x801D5974: lwc1        $f0, 0x70($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801D5978: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801D597C: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801D5980: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801D5984: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D5988: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x801D598C: nop

    // 0x801D5990: bc1tl       L_801D5A64
    if (c1cs) {
        // 0x801D5994: lhu         $t1, 0x16($v1)
        ctx->r9 = MEM_HU(ctx->r3, 0X16);
            goto L_801D5A64;
    }
    goto skip_1;
    // 0x801D5994: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
    skip_1:
    // 0x801D5998: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801D599C: lwc1        $f16, 0x74($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801D59A0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801D59A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801D59A8: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    // 0x801D59AC: lwc1        $f18, 0x78($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801D59B0: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801D59B4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801D59B8: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x801D59BC: lw          $a3, 0x78($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X78);
    // 0x801D59C0: lw          $a2, 0x70($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X70);
    // 0x801D59C4: jal         0x8000EB08
    // 0x801D59C8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    func_8000EB08_F708(rdram, ctx);
        goto after_0;
    // 0x801D59C8: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    after_0:
    // 0x801D59CC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x801D59D0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801D59D4: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x801D59D8: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x801D59DC: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x801D59E0: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801D59E4: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D59E8: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801D59EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801D59F0: jal         0x8000EDF4
    // 0x801D59F4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_1;
    // 0x801D59F4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x801D59F8: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801D59FC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D5A00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5A04: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D5A08: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801D5A0C: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x801D5A10: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801D5A14: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x801D5A18: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x801D5A1C: bc1fl       L_801D5B58
    if (!c1cs) {
        // 0x801D5A20: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801D5B58;
    }
    goto skip_2;
    // 0x801D5A20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x801D5A24: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801D5A28: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801D5A2C: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801D5A30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5A34: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D5A38: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D5A3C: jal         0x8000E4E4
    // 0x801D5A40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_2;
    // 0x801D5A40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x801D5A44: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D5A48: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801D5A4C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D5A50: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801D5A54: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D5A58: b           L_801D5B54
    // 0x801D5A5C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
        goto L_801D5B54;
    // 0x801D5A5C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x801D5A60: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
L_801D5A64:
    // 0x801D5A64: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801D5A68: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801D5A6C: beq         $t1, $at, L_801D5AE8
    if (ctx->r9 == ctx->r1) {
        // 0x801D5A70: addiu       $t7, $s0, 0x70
        ctx->r15 = ADD32(ctx->r16, 0X70);
            goto L_801D5AE8;
    }
    // 0x801D5A70: addiu       $t7, $s0, 0x70
    ctx->r15 = ADD32(ctx->r16, 0X70);
    // 0x801D5A74: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D5A78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D5A7C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x801D5A80: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801D5A84: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801D5A88: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801D5A8C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801D5A90: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801D5A94: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801D5A98: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801D5A9C: addiu       $t3, $s0, 0x74
    ctx->r11 = ADD32(ctx->r16, 0X74);
    // 0x801D5AA0: addiu       $t4, $s0, 0x78
    ctx->r12 = ADD32(ctx->r16, 0X78);
    // 0x801D5AA4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D5AA8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D5AAC: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x801D5AB0: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x801D5AB4: jal         0x8000E808
    // 0x801D5AB8: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    func_8000E808_F408(rdram, ctx);
        goto after_3;
    // 0x801D5AB8: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    after_3:
    // 0x801D5ABC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x801D5AC0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801D5AC4: addiu       $a0, $t0, 0x14
    ctx->r4 = ADD32(ctx->r8, 0X14);
    // 0x801D5AC8: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x801D5ACC: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x801D5AD0: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x801D5AD4: addiu       $a1, $t0, 0x16
    ctx->r5 = ADD32(ctx->r8, 0X16);
    // 0x801D5AD8: jal         0x8000ECB4
    // 0x801D5ADC: sh          $t5, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r13;
    func_8000ECB4_F8B4(rdram, ctx);
        goto after_4;
    // 0x801D5ADC: sh          $t5, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r13;
    after_4:
    // 0x801D5AE0: b           L_801D5B58
    // 0x801D5AE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801D5B58;
    // 0x801D5AE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801D5AE8:
    // 0x801D5AE8: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801D5AEC: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801D5AF0: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801D5AF4: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801D5AF8: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801D5AFC: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D5B00: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D5B04: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5B08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801D5B0C: addiu       $t8, $s0, 0x74
    ctx->r24 = ADD32(ctx->r16, 0X74);
    // 0x801D5B10: addiu       $t9, $s0, 0x78
    ctx->r25 = ADD32(ctx->r16, 0X78);
    // 0x801D5B14: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D5B18: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D5B1C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x801D5B20: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x801D5B24: jal         0x8000E4E4
    // 0x801D5B28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_5;
    // 0x801D5B28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_5:
    // 0x801D5B2C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801D5B30: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801D5B34: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801D5B38: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x801D5B3C: jal         0x8000EB08
    // 0x801D5B40: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    func_8000EB08_F708(rdram, ctx);
        goto after_6;
    // 0x801D5B40: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    after_6:
    // 0x801D5B44: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x801D5B48: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x801D5B4C: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x801D5B50: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
L_801D5B54:
    // 0x801D5B54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801D5B58:
    // 0x801D5B58: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x801D5B5C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801D5B60: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801D5B64: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801D5B68: jr          $ra
    // 0x801D5B6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801D5B6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801CFA5C_5FAE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFA5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CFA60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CFA64: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CFA68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CFA6C: addiu       $a1, $a1, -0x540
    ctx->r5 = ADD32(ctx->r5, -0X540);
    // 0x801CFA70: jal         0x80034E08
    // 0x801CFA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CFA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CFA78: beq         $v0, $zero, L_801CFAAC
    if (ctx->r2 == 0) {
        // 0x801CFA7C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CFAAC;
    }
    // 0x801CFA7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CFA80: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CFA84: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801CFA88: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801CFA8C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x801CFA90: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801CFA94: sw          $t7, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r15;
    // 0x801CFA98: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x801CFA9C: sw          $a0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r4;
    // 0x801CFAA0: sw          $a0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r4;
    // 0x801CFAA4: sw          $t9, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r25;
    // 0x801CFAA8: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
L_801CFAAC:
    // 0x801CFAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CFAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CFAB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CFAB8: jr          $ra
    // 0x801CFABC: nop

    TRACE_RETURN()
    return;
    // 0x801CFABC: nop

;}
RECOMP_FUNC void func_801F2914_61DCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2914: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F2918: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F291C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2920: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F2924: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F2928: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F292C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F2930: jal         0x801D3018
    // 0x801F2934: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F2934: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2938: jal         0x801F76D0
    // 0x801F293C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F293C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F2940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2944: jal         0x801D6244
    // 0x801F2948: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    func_801D6244_601624(rdram, ctx);
        goto after_2;
    // 0x801F2948: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    after_2:
    // 0x801F294C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x801F2950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2954: jal         0x801D6330
    // 0x801F2958: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_3;
    // 0x801F2958: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_3:
    // 0x801F295C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x801F2960: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x801F2964: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801F2968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F296C: jal         0x801D641C
    // 0x801F2970: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_4;
    // 0x801F2970: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    after_4:
    // 0x801F2974: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801F2978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F297C: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F2980: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F2984: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F2988: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x801F298C: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x801F2990: addiu       $t8, $v1, 0x14
    ctx->r24 = ADD32(ctx->r3, 0X14);
    // 0x801F2994: addiu       $t9, $v1, 0x16
    ctx->r25 = ADD32(ctx->r3, 0X16);
    // 0x801F2998: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F299C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x801F29A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801F29A4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801F29A8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F29AC: jal         0x8000EC04
    // 0x801F29B0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_5;
    // 0x801F29B0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x801F29B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F29B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F29BC: bne         $s1, $at, L_801F29F0
    if (ctx->r17 != ctx->r1) {
        // 0x801F29C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F29F0;
    }
    // 0x801F29C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F29C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F29C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F29CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F29D0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801F29D4: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F29D8: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x801F29DC: jal         0x801D31CC
    // 0x801F29E0: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_6;
    // 0x801F29E0: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x801F29E4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F29E8: jal         0x8003521C
    // 0x801F29EC: addiu       $a0, $a0, 0x2A04
    ctx->r4 = ADD32(ctx->r4, 0X2A04);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F29EC: addiu       $a0, $a0, 0x2A04
    ctx->r4 = ADD32(ctx->r4, 0X2A04);
    after_7:
L_801F29F0:
    // 0x801F29F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F29F4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F29F8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F29FC: jr          $ra
    // 0x801F2A00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801F2A00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80201AD4_62CEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80201AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80201AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201AE4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80201AE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80201AEC: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x80201AF0: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x80201AF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201AF8: jal         0x8003521C
    // 0x80201AFC: addiu       $a0, $a0, 0x1B38
    ctx->r4 = ADD32(ctx->r4, 0X1B38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80201AFC: addiu       $a0, $a0, 0x1B38
    ctx->r4 = ADD32(ctx->r4, 0X1B38);
    after_0:
    // 0x80201B00: jal         0x80038BC8
    // 0x80201B04: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80201B04: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    after_1:
    // 0x80201B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201B0C: jal         0x80037C9C
    // 0x80201B10: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x80201B10: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_2:
    // 0x80201B14: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x80201B18: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x80201B1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201B20: jal         0x80037C20
    // 0x80201B24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x80201B24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80201B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201B30: jr          $ra
    // 0x80201B34: nop

    TRACE_RETURN()
    return;
    // 0x80201B34: nop

;}
RECOMP_FUNC void func_801CEFB0_5FA390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CEFB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CEFB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CEFBC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CEFC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CEFC4: addiu       $a1, $a1, -0xFFC
    ctx->r5 = ADD32(ctx->r5, -0XFFC);
    // 0x801CEFC8: jal         0x80034E08
    // 0x801CEFCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CEFCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CEFD0: beq         $v0, $zero, L_801CEFF0
    if (ctx->r2 == 0) {
        // 0x801CEFD4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CEFF0;
    }
    // 0x801CEFD4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CEFD8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CEFDC: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x801CEFE0: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
    // 0x801CEFE4: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x801CEFE8: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    // 0x801CEFEC: sw          $t7, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r15;
L_801CEFF0:
    // 0x801CEFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CEFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CEFF8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CEFFC: jr          $ra
    // 0x801CF000: nop

    TRACE_RETURN()
    return;
    // 0x801CF000: nop

;}
RECOMP_FUNC void func_801E0950_60BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0950: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E0954: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E0958: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E095C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E0960: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801E0964: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801E0968: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801E096C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801E0970: lw          $a0, 0x1C8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C8);
    // 0x801E0974: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E0978: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E097C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E0980: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E0984: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E0988: addiu       $a2, $a2, -0x4C20
    ctx->r6 = ADD32(ctx->r6, -0X4C20);
    // 0x801E098C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0990: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E0994: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E0998: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801E099C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801E09A0: addiu       $a1, $a1, 0xA7C
    ctx->r5 = ADD32(ctx->r5, 0XA7C);
    // 0x801E09A4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801E09A8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E09AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801E09B0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E09B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E09B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E09BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E09C0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E09C4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801E09C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E09CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E09D0: jal         0x800358E8
    // 0x801E09D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E09D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E09D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E09DC: beq         $v0, $zero, L_801E0A68
    if (ctx->r2 == 0) {
        // 0x801E09E0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E0A68;
    }
    // 0x801E09E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E09E4: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x801E09E8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801E09EC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E09F0: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801E09F4: lbu         $t9, 0x5B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5B);
    // 0x801E09F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E09FC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E0A00: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x801E0A04: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x801E0A08: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E0A0C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E0A10: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x801E0A14: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801E0A18: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x801E0A1C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E0A20: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E0A24: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E0A28: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E0A2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E0A30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E0A34: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E0A38: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801E0A3C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x801E0A40: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x801E0A44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E0A48: jal         0x8000DBF0
    // 0x801E0A4C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E0A4C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801E0A50: bne         $v0, $zero, L_801E0A68
    if (ctx->r2 != 0) {
        // 0x801E0A54: lw          $a0, 0x54($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X54);
            goto L_801E0A68;
    }
    // 0x801E0A54: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x801E0A58: jal         0x80034EF8
    // 0x801E0A5C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801E0A5C: nop

    after_2:
    // 0x801E0A60: b           L_801E0A6C
    // 0x801E0A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E0A6C;
    // 0x801E0A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0A68:
    // 0x801E0A68: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_801E0A6C:
    // 0x801E0A6C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E0A70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801E0A74: jr          $ra
    // 0x801E0A78: nop

    TRACE_RETURN()
    return;
    // 0x801E0A78: nop

;}
RECOMP_FUNC void func_801DA100_6054E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA100: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DA104: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DA108: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DA10C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801DA110: lw          $v1, 0x90($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X90);
    // 0x801DA114: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA118: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801DA11C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x801DA120: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801DA124: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DA128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA12C: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801DA130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DA134: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x801DA138: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DA13C: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x801DA140: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x801DA144: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x801DA148: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801DA14C: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801DA150: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801DA154: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DA158: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DA15C: jal         0x8000E808
    // 0x801DA160: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801DA160: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_0:
    // 0x801DA164: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x801DA168: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DA16C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801DA170: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DA174: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DA178: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DA17C: add.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801DA180: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DA184: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x801DA188: add.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801DA18C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DA190: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801DA194: add.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801DA198: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801DA19C: jal         0x8000E39C
    // 0x801DA1A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801DA1A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x801DA1A4: jal         0x801D619C
    // 0x801DA1A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801DA1A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DA1AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA1B0: jal         0x801DA3CC
    // 0x801DA1B4: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    func_801DA3CC_6057AC(rdram, ctx);
        goto after_3;
    // 0x801DA1B4: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    after_3:
    // 0x801DA1B8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DA1BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DA1C0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA1C4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801DA1C8: nop

    // 0x801DA1CC: bc1fl       L_801DA1E8
    if (!c1cs) {
        // 0x801DA1D0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801DA1E8;
    }
    goto skip_0;
    // 0x801DA1D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801DA1D4: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x801DA1D8: addiu       $a0, $a0, -0x5E08
    ctx->r4 = ADD32(ctx->r4, -0X5E08);
    // 0x801DA1DC: jal         0x8003521C
    // 0x801DA1E0: sw          $zero, 0x84($v1)
    MEM_W(0X84, ctx->r3) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801DA1E0: sw          $zero, 0x84($v1)
    MEM_W(0X84, ctx->r3) = 0;
    after_4:
    // 0x801DA1E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DA1E8:
    // 0x801DA1E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DA1EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DA1F0: jr          $ra
    // 0x801DA1F4: nop

    TRACE_RETURN()
    return;
    // 0x801DA1F4: nop

;}
RECOMP_FUNC void func_801F1E94_61D274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1E9C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801F1EA0: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801F1EA4: beq         $at, $zero, L_801F1F88
    if (ctx->r1 == 0) {
        // 0x801F1EA8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801F1F88;
    }
    // 0x801F1EA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801F1EAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1EB0: addu        $at, $at, $t6
    gpr jr_addend_801F1EB8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F1EB4: lw          $t6, -0x1A38($at)
    ctx->r14 = ADD32(ctx->r1, -0X1A38);
    // 0x801F1EB8: jr          $t6
    // 0x801F1EBC: nop

    switch (jr_addend_801F1EB8 >> 2) {
        case 0: goto L_801F1EC0; break;
        case 1: goto L_801F1ED4; break;
        case 2: goto L_801F1EE8; break;
        case 3: goto L_801F1EFC; break;
        case 4: goto L_801F1F10; break;
        case 5: goto L_801F1F24; break;
        case 6: goto L_801F1F38; break;
        case 7: goto L_801F1F4C; break;
        case 8: goto L_801F1F60; break;
        case 9: goto L_801F1F74; break;
        case 10: goto L_801F1F88; break;
        default: switch_error(__func__, 0x801F1EB8, 0x8020E5C8);
    }
    // 0x801F1EBC: nop

L_801F1EC0:
    // 0x801F1EC0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1EC4: jal         0x801F1FA4
    // 0x801F1EC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_0;
    // 0x801F1EC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x801F1ECC: b           L_801F1F98
    // 0x801F1ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1ED4:
    // 0x801F1ED4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1ED8: jal         0x801F1FA4
    // 0x801F1EDC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_1;
    // 0x801F1EDC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x801F1EE0: b           L_801F1F98
    // 0x801F1EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1EE8:
    // 0x801F1EE8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1EEC: jal         0x801F1FA4
    // 0x801F1EF0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_2;
    // 0x801F1EF0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x801F1EF4: b           L_801F1F98
    // 0x801F1EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1EFC:
    // 0x801F1EFC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F00: jal         0x801F1FA4
    // 0x801F1F04: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_3;
    // 0x801F1F04: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x801F1F08: b           L_801F1F98
    // 0x801F1F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F10:
    // 0x801F1F10: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F14: jal         0x801F1FA4
    // 0x801F1F18: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_4;
    // 0x801F1F18: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_4:
    // 0x801F1F1C: b           L_801F1F98
    // 0x801F1F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F24:
    // 0x801F1F24: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x801F1F28: jal         0x801F1FA4
    // 0x801F1F2C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_5;
    // 0x801F1F2C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
    // 0x801F1F30: b           L_801F1F98
    // 0x801F1F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F38:
    // 0x801F1F38: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F3C: jal         0x801F1FA4
    // 0x801F1F40: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_6;
    // 0x801F1F40: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x801F1F44: b           L_801F1F98
    // 0x801F1F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F4C:
    // 0x801F1F4C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F50: jal         0x801F1FA4
    // 0x801F1F54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_7;
    // 0x801F1F54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x801F1F58: b           L_801F1F98
    // 0x801F1F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F60:
    // 0x801F1F60: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F64: jal         0x801F1FA4
    // 0x801F1F68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_8;
    // 0x801F1F68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_8:
    // 0x801F1F6C: b           L_801F1F98
    // 0x801F1F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F74:
    // 0x801F1F74: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F78: jal         0x801F1FA4
    // 0x801F1F7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_9;
    // 0x801F1F7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_9:
    // 0x801F1F80: b           L_801F1F98
    // 0x801F1F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1F98;
    // 0x801F1F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F88:
    // 0x801F1F88: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x801F1F8C: jal         0x801F1FA4
    // 0x801F1F90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_10;
    // 0x801F1F90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_10:
    // 0x801F1F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1F98:
    // 0x801F1F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1F9C: jr          $ra
    // 0x801F1FA0: nop

    TRACE_RETURN()
    return;
    // 0x801F1FA0: nop

;}
RECOMP_FUNC void func_801F40DC_61F4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F40DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F40E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F40E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F40E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F40EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F40F0: jal         0x801D619C
    // 0x801F40F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_0;
    // 0x801F40F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801F40F8: jal         0x801F76D0
    // 0x801F40FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F40FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F4100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4104: jal         0x801D2F40
    // 0x801F4108: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F4108: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_2:
    // 0x801F410C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F4110: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F4114: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4118: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801F411C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F4120: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F4124: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F4128: bc1f        L_801F413C
    if (!c1cs) {
        // 0x801F412C: nop
    
            goto L_801F413C;
    }
    // 0x801F412C: nop

    // 0x801F4130: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F4134: nop

    // 0x801F4138: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
L_801F413C:
    // 0x801F413C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F4140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4144: jal         0x8000ED00
    // 0x801F4148: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_3;
    // 0x801F4148: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    after_3:
    // 0x801F414C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801F4150: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F4154: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801F4158: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801F415C: nop

    // 0x801F4160: bc1fl       L_801F4210
    if (!c1cs) {
        // 0x801F4164: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4210;
    }
    goto skip_0;
    // 0x801F4164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F4168: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F416C: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F4170: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F4174: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F4178: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F417C: jal         0x8000E28C
    // 0x801F4180: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_8000E28C_EE8C(rdram, ctx);
        goto after_4;
    // 0x801F4180: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x801F4184: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F4188: sw          $v0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r2;
    // 0x801F418C: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F4190: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x801F4194: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801F4198: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801F419C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801F41A0: nop

    // 0x801F41A4: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801F41A8: sw          $v1, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r3;
    // 0x801F41AC: jal         0x8000E630
    // 0x801F41B0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_5;
    // 0x801F41B0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_5:
    // 0x801F41B4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F41B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F41BC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801F41C0: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801F41C4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F41C8: addiu       $a0, $zero, 0x280
    ctx->r4 = ADD32(0, 0X280);
    // 0x801F41CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F41D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F41D4: bc1f        L_801F41E8
    if (!c1cs) {
        // 0x801F41D8: lui         $a3, 0x44BB
        ctx->r7 = S32(0X44BB << 16);
            goto L_801F41E8;
    }
    // 0x801F41D8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F41DC: addiu       $t8, $zero, 0x3FC
    ctx->r24 = ADD32(0, 0X3FC);
    // 0x801F41E0: b           L_801F41EC
    // 0x801F41E4: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
        goto L_801F41EC;
    // 0x801F41E4: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
L_801F41E8:
    // 0x801F41E8: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
L_801F41EC:
    // 0x801F41EC: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x801F41F0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F41F4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F41F8: jal         0x8000F3D8
    // 0x801F41FC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_6;
    // 0x801F41FC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
    // 0x801F4200: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4204: jal         0x8003521C
    // 0x801F4208: addiu       $a0, $a0, 0x4220
    ctx->r4 = ADD32(ctx->r4, 0X4220);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F4208: addiu       $a0, $a0, 0x4220
    ctx->r4 = ADD32(ctx->r4, 0X4220);
    after_7:
    // 0x801F420C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4210:
    // 0x801F4210: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F4214: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F4218: jr          $ra
    // 0x801F421C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F421C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D8DB8_604198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8DC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D8DC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D8DC8: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801D8DCC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D8DD0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801D8DD4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801D8DD8: beq         $v1, $zero, L_801D8DF8
    if (ctx->r3 == 0) {
        // 0x801D8DDC: sw          $t6, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r14;
            goto L_801D8DF8;
    }
    // 0x801D8DDC: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801D8DE0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8DE4: addiu       $a0, $a0, -0x748C
    ctx->r4 = ADD32(ctx->r4, -0X748C);
    // 0x801D8DE8: jal         0x8003521C
    // 0x801D8DEC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D8DEC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D8DF0: jal         0x801D36BC
    // 0x801D8DF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_1;
    // 0x801D8DF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_801D8DF8:
    // 0x801D8DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8E00: jr          $ra
    // 0x801D8E04: nop

    TRACE_RETURN()
    return;
    // 0x801D8E04: nop

;}
RECOMP_FUNC void func_801E5690_610A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5698: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801E569C: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801E56A0: beq         $at, $zero, L_801E56BC
    if (ctx->r1 == 0) {
        // 0x801E56A4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801E56BC;
    }
    // 0x801E56A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801E56A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E56AC: addu        $at, $at, $t6
    gpr jr_addend_801E56B4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E56B0: lw          $t6, -0x20AC($at)
    ctx->r14 = ADD32(ctx->r1, -0X20AC);
    // 0x801E56B4: jr          $t6
    // 0x801E56B8: nop

    switch (jr_addend_801E56B4 >> 2) {
        case 0: goto L_801E56BC; break;
        case 1: goto L_801E56D0; break;
        case 2: goto L_801E56E4; break;
        case 3: goto L_801E56F8; break;
        case 4: goto L_801E570C; break;
        case 5: goto L_801E5720; break;
        case 6: goto L_801E5734; break;
        case 7: goto L_801E5748; break;
        case 8: goto L_801E575C; break;
        case 9: goto L_801E5770; break;
        case 10: goto L_801E5784; break;
        default: switch_error(__func__, 0x801E56B4, 0x8020DF54);
    }
    // 0x801E56B8: nop

L_801E56BC:
    // 0x801E56BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E56C0: jal         0x801E58C8
    // 0x801E56C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_0;
    // 0x801E56C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E56C8: b           L_801E57A0
    // 0x801E56CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E56CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E56D0:
    // 0x801E56D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801E56D4: jal         0x801E58C8
    // 0x801E56D8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_1;
    // 0x801E56D8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x801E56DC: b           L_801E57A0
    // 0x801E56E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E56E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E56E4:
    // 0x801E56E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E56E8: jal         0x801E58C8
    // 0x801E56EC: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_2;
    // 0x801E56EC: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_2:
    // 0x801E56F0: b           L_801E57A0
    // 0x801E56F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E56F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E56F8:
    // 0x801E56F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E56FC: jal         0x801E58C8
    // 0x801E5700: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_3;
    // 0x801E5700: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x801E5704: b           L_801E57A0
    // 0x801E5708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E5708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E570C:
    // 0x801E570C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E5710: jal         0x801E58C8
    // 0x801E5714: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_4;
    // 0x801E5714: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_4:
    // 0x801E5718: b           L_801E57A0
    // 0x801E571C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E571C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5720:
    // 0x801E5720: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E5724: jal         0x801E58C8
    // 0x801E5728: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_5;
    // 0x801E5728: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_5:
    // 0x801E572C: b           L_801E57A0
    // 0x801E5730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E5730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5734:
    // 0x801E5734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E5738: jal         0x801E58C8
    // 0x801E573C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_6;
    // 0x801E573C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_6:
    // 0x801E5740: b           L_801E57A0
    // 0x801E5744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E5744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5748:
    // 0x801E5748: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E574C: jal         0x801E58C8
    // 0x801E5750: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_7;
    // 0x801E5750: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_7:
    // 0x801E5754: b           L_801E57A0
    // 0x801E5758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E5758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E575C:
    // 0x801E575C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E5760: jal         0x801E58C8
    // 0x801E5764: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_8;
    // 0x801E5764: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_8:
    // 0x801E5768: b           L_801E57A0
    // 0x801E576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5770:
    // 0x801E5770: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801E5774: jal         0x801E58C8
    // 0x801E5778: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801E58C8_610CA8(rdram, ctx);
        goto after_9;
    // 0x801E5778: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_9:
    // 0x801E577C: b           L_801E57A0
    // 0x801E5780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E57A0;
    // 0x801E5780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5784:
    // 0x801E5784: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E5788: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x801E578C: jal         0x801E58C8
    // 0x801E5790: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_10;
    // 0x801E5790: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801E5794: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E5798: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E57A0:
    // 0x801E57A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E57A4: jr          $ra
    // 0x801E57A8: nop

    TRACE_RETURN()
    return;
    // 0x801E57A8: nop

;}
RECOMP_FUNC void func_801D6508_6018E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D650C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6510: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6514: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D6518: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D651C: jal         0x801D603C
    // 0x801D6520: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    func_801D603C_60141C(rdram, ctx);
        goto after_0;
    // 0x801D6520: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    after_0:
    // 0x801D6524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D652C: jr          $ra
    // 0x801D6530: nop

    TRACE_RETURN()
    return;
    // 0x801D6530: nop

;}
RECOMP_FUNC void func_801F2CB4_61E094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2CB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F2CB8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F2CBC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F2CC0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F2CC4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801F2CC8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801F2CCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F2CD0: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F2CD4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F2CD8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F2CDC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801F2CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F2CE4: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x801F2CE8: bc1fl       L_801F2D64
    if (!c1cs) {
        // 0x801F2CEC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_801F2D64;
    }
    goto skip_0;
    // 0x801F2CEC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x801F2CF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2CF4: jal         0x801D3018
    // 0x801F2CF8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F2CF8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2CFC: jal         0x801F76D0
    // 0x801F2D00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F2D00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801F2D04: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F2D08: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801F2D0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F2D10: lui         $a2, 0xC4FA
    ctx->r6 = S32(0XC4FA << 16);
    // 0x801F2D14: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x801F2D18: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801F2D1C: jal         0x801D46B8
    // 0x801F2D20: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_2;
    // 0x801F2D20: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x801F2D24: jal         0x801D619C
    // 0x801F2D28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_3;
    // 0x801F2D28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801F2D2C: lwc1        $f12, 0x70($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F2D30: lwc1        $f14, 0x74($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F2D34: lw          $a2, 0x78($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X78);
    // 0x801F2D38: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F2D3C: addiu       $t7, $s0, 0x14
    ctx->r15 = ADD32(ctx->r16, 0X14);
    // 0x801F2D40: addiu       $t8, $s0, 0x16
    ctx->r24 = ADD32(ctx->r16, 0X16);
    // 0x801F2D44: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F2D48: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F2D4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F2D50: jal         0x8000EC04
    // 0x801F2D54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_4;
    // 0x801F2D54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x801F2D58: b           L_801F2DC8
    // 0x801F2D5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F2DC8;
    // 0x801F2D5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F2D60: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_801F2D64:
    // 0x801F2D64: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x801F2D68: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801F2D6C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801F2D70: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x801F2D74: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x801F2D78: jal         0x8000DD58
    // 0x801F2D7C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801F2D7C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    after_5:
    // 0x801F2D80: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801F2D84: sw          $v0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r2;
    // 0x801F2D88: jal         0x8000DDC0
    // 0x801F2D8C: sw          $t9, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->r25;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_6;
    // 0x801F2D8C: sw          $t9, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->r25;
    after_6:
    // 0x801F2D90: beq         $v0, $zero, L_801F2DA4
    if (ctx->r2 == 0) {
        // 0x801F2D94: addiu       $t1, $zero, 0x3FF
        ctx->r9 = ADD32(0, 0X3FF);
            goto L_801F2DA4;
    }
    // 0x801F2D94: addiu       $t1, $zero, 0x3FF
    ctx->r9 = ADD32(0, 0X3FF);
    // 0x801F2D98: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F2D9C: b           L_801F2DA8
    // 0x801F2DA0: sw          $t0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r8;
        goto L_801F2DA8;
    // 0x801F2DA0: sw          $t0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r8;
L_801F2DA4:
    // 0x801F2DA4: sw          $t1, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r9;
L_801F2DA8:
    // 0x801F2DA8: jal         0x801F701C
    // 0x801F2DAC: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_7;
    // 0x801F2DAC: nop

    after_7:
    // 0x801F2DB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801F2DB4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2DB8: sb          $t2, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r10;
    // 0x801F2DBC: jal         0x8003521C
    // 0x801F2DC0: addiu       $a0, $a0, 0x2DDC
    ctx->r4 = ADD32(ctx->r4, 0X2DDC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F2DC0: addiu       $a0, $a0, 0x2DDC
    ctx->r4 = ADD32(ctx->r4, 0X2DDC);
    after_8:
    // 0x801F2DC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F2DC8:
    // 0x801F2DC8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801F2DCC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F2DD0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F2DD4: jr          $ra
    // 0x801F2DD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F2DD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801FC328_627708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FC32C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FC330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FC334: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x801FC338: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801FC33C: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x801FC340: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801FC344: sw          $a2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r6;
    // 0x801FC348: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x801FC34C: beq         $at, $zero, L_801FC36C
    if (ctx->r1 == 0) {
        // 0x801FC350: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_801FC36C;
    }
    // 0x801FC350: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x801FC354: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801FC358: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FC35C: addu        $at, $at, $t9
    gpr jr_addend_801FC364 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FC360: lw          $t9, -0x159C($at)
    ctx->r25 = ADD32(ctx->r1, -0X159C);
    // 0x801FC364: jr          $t9
    // 0x801FC368: nop

    switch (jr_addend_801FC364 >> 2) {
        case 0: goto L_801FC36C; break;
        case 1: goto L_801FC37C; break;
        case 2: goto L_801FC390; break;
        case 3: goto L_801FC3A4; break;
        case 4: goto L_801FC3B8; break;
        case 5: goto L_801FC3CC; break;
        case 6: goto L_801FC3E0; break;
        default: switch_error(__func__, 0x801FC364, 0x8020EA64);
    }
    // 0x801FC368: nop

L_801FC36C:
    // 0x801FC36C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801FC370: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801FC374: b           L_801FC3EC
    // 0x801FC378: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
        goto L_801FC3EC;
    // 0x801FC378: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
L_801FC37C:
    // 0x801FC37C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC380: jal         0x8003522C
    // 0x801FC384: addiu       $a1, $a1, -0x3BA0
    ctx->r5 = ADD32(ctx->r5, -0X3BA0);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801FC384: addiu       $a1, $a1, -0x3BA0
    ctx->r5 = ADD32(ctx->r5, -0X3BA0);
    after_0:
    // 0x801FC388: b           L_801FC3F0
    // 0x801FC38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC3F0;
    // 0x801FC38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC390:
    // 0x801FC390: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC394: jal         0x8003522C
    // 0x801FC398: addiu       $a1, $a1, -0x354C
    ctx->r5 = ADD32(ctx->r5, -0X354C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x801FC398: addiu       $a1, $a1, -0x354C
    ctx->r5 = ADD32(ctx->r5, -0X354C);
    after_1:
    // 0x801FC39C: b           L_801FC3F0
    // 0x801FC3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC3F0;
    // 0x801FC3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC3A4:
    // 0x801FC3A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC3A8: jal         0x8003521C
    // 0x801FC3AC: addiu       $a0, $a0, -0x3254
    ctx->r4 = ADD32(ctx->r4, -0X3254);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FC3AC: addiu       $a0, $a0, -0x3254
    ctx->r4 = ADD32(ctx->r4, -0X3254);
    after_2:
    // 0x801FC3B0: b           L_801FC3F0
    // 0x801FC3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC3F0;
    // 0x801FC3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC3B8:
    // 0x801FC3B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC3BC: jal         0x8003522C
    // 0x801FC3C0: addiu       $a1, $a1, -0x2F78
    ctx->r5 = ADD32(ctx->r5, -0X2F78);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801FC3C0: addiu       $a1, $a1, -0x2F78
    ctx->r5 = ADD32(ctx->r5, -0X2F78);
    after_3:
    // 0x801FC3C4: b           L_801FC3F0
    // 0x801FC3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC3F0;
    // 0x801FC3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC3CC:
    // 0x801FC3CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC3D0: jal         0x8003522C
    // 0x801FC3D4: addiu       $a1, $a1, -0x2B94
    ctx->r5 = ADD32(ctx->r5, -0X2B94);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801FC3D4: addiu       $a1, $a1, -0x2B94
    ctx->r5 = ADD32(ctx->r5, -0X2B94);
    after_4:
    // 0x801FC3D8: b           L_801FC3F0
    // 0x801FC3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC3F0;
    // 0x801FC3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC3E0:
    // 0x801FC3E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC3E4: jal         0x8003522C
    // 0x801FC3E8: addiu       $a1, $a1, -0x2778
    ctx->r5 = ADD32(ctx->r5, -0X2778);
    func_8003522C_35E2C(rdram, ctx);
        goto after_5;
    // 0x801FC3E8: addiu       $a1, $a1, -0x2778
    ctx->r5 = ADD32(ctx->r5, -0X2778);
    after_5:
L_801FC3EC:
    // 0x801FC3EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC3F0:
    // 0x801FC3F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FC3F4: jr          $ra
    // 0x801FC3F8: nop

    TRACE_RETURN()
    return;
    // 0x801FC3F8: nop

;}
RECOMP_FUNC void func_801DB704_606AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB70C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB714: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x801DB718: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB71C: jal         0x8003521C
    // 0x801DB720: addiu       $a0, $a0, -0x48CC
    ctx->r4 = ADD32(ctx->r4, -0X48CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801DB720: addiu       $a0, $a0, -0x48CC
    ctx->r4 = ADD32(ctx->r4, -0X48CC);
    after_0:
    // 0x801DB724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB72C: jr          $ra
    // 0x801DB730: nop

    TRACE_RETURN()
    return;
    // 0x801DB730: nop

;}
RECOMP_FUNC void func_801D12A8_5FC688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D12A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D12AC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D12B0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D12B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D12B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D12BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D12C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D12C4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801D12C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D12CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D12D0: swc1        $f0, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->f0.u32l;
    // 0x801D12D4: swc1        $f0, 0x180($v0)
    MEM_W(0X180, ctx->r2) = ctx->f0.u32l;
    // 0x801D12D8: swc1        $f0, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->f0.u32l;
    // 0x801D12DC: swc1        $f0, 0x178($v0)
    MEM_W(0X178, ctx->r2) = ctx->f0.u32l;
    // 0x801D12E0: swc1        $f4, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f4.u32l;
    // 0x801D12E4: lwc1        $f6, -0x2DC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DC4);
    // 0x801D12E8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D12EC: addiu       $a0, $a0, 0x1310
    ctx->r4 = ADD32(ctx->r4, 0X1310);
    // 0x801D12F0: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D12F4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x801D12F8: jal         0x8003521C
    // 0x801D12FC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D12FC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    after_0:
    // 0x801D1300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1308: jr          $ra
    // 0x801D130C: nop

    TRACE_RETURN()
    return;
    // 0x801D130C: nop

;}
RECOMP_FUNC void func_801DF060_60A440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DF064: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DF068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DF06C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801DF070: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801DF074: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801DF078: jal         0x801D365C
    // 0x801DF07C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_0;
    // 0x801DF07C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DF080: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DF084: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801DF088: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801DF08C: lw          $t6, 0x1D8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1D8);
    // 0x801DF090: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x801DF094: bne         $v0, $t6, L_801DF0D4
    if (ctx->r2 != ctx->r14) {
        // 0x801DF098: nop
    
            goto L_801DF0D4;
    }
    // 0x801DF098: nop

    // 0x801DF09C: lw          $a1, 0x64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X64);
    // 0x801DF0A0: andi        $t7, $a1, 0x1000
    ctx->r15 = ctx->r5 & 0X1000;
    // 0x801DF0A4: bne         $t7, $zero, L_801DF0D4
    if (ctx->r15 != 0) {
        // 0x801DF0A8: andi        $t8, $a1, 0x100
        ctx->r24 = ctx->r5 & 0X100;
            goto L_801DF0D4;
    }
    // 0x801DF0A8: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
    // 0x801DF0AC: beq         $t8, $zero, L_801DF0C4
    if (ctx->r24 == 0) {
        // 0x801DF0B0: nop
    
            goto L_801DF0C4;
    }
    // 0x801DF0B0: nop

    // 0x801DF0B4: jal         0x80038BC8
    // 0x801DF0B8: addiu       $a0, $zero, 0x2A8
    ctx->r4 = ADD32(0, 0X2A8);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801DF0B8: addiu       $a0, $zero, 0x2A8
    ctx->r4 = ADD32(0, 0X2A8);
    after_1:
    // 0x801DF0BC: b           L_801DF1F0
    // 0x801DF0C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DF1F0;
    // 0x801DF0C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801DF0C4:
    // 0x801DF0C4: jal         0x80038BC8
    // 0x801DF0C8: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801DF0C8: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_2:
    // 0x801DF0CC: b           L_801DF1F0
    // 0x801DF0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DF1F0;
    // 0x801DF0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DF0D4:
    // 0x801DF0D4: beql        $v0, $zero, L_801DF104
    if (ctx->r2 == 0) {
        // 0x801DF0D8: sw          $a0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r4;
            goto L_801DF104;
    }
    goto skip_0;
    // 0x801DF0D8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    skip_0:
    // 0x801DF0DC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x801DF0E0: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801DF0E4: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x801DF0E8: beql        $t0, $zero, L_801DF104
    if (ctx->r8 == 0) {
        // 0x801DF0EC: sw          $a0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r4;
            goto L_801DF104;
    }
    goto skip_1;
    // 0x801DF0EC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    skip_1:
    // 0x801DF0F0: jal         0x8000F240
    // 0x801DF0F4: addiu       $a0, $zero, 0x2A8
    ctx->r4 = ADD32(0, 0X2A8);
    func_8000F240_FE40(rdram, ctx);
        goto after_3;
    // 0x801DF0F4: addiu       $a0, $zero, 0x2A8
    ctx->r4 = ADD32(0, 0X2A8);
    after_3:
    // 0x801DF0F8: b           L_801DF1F0
    // 0x801DF0FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DF1F0;
    // 0x801DF0FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801DF100: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
L_801DF104:
    // 0x801DF104: jal         0x801D36BC
    // 0x801DF108: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_4;
    // 0x801DF108: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_4:
    // 0x801DF10C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801DF110: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801DF114: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DF118: lwc1        $f14, 0x70($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801DF11C: lw          $a2, 0x74($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X74);
    // 0x801DF120: lw          $a3, 0x78($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X78);
    // 0x801DF124: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x801DF128: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x801DF12C: addiu       $t3, $sp, 0x30
    ctx->r11 = ADD32(ctx->r29, 0X30);
    // 0x801DF130: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801DF134: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DF138: jal         0x8000E4E4
    // 0x801DF13C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_5;
    // 0x801DF13C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x801DF140: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801DF144: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801DF148: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DF14C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DF150: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801DF154: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DF158: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DF15C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801DF160: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801DF164: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801DF168: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DF16C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x801DF170: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801DF174: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801DF178: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DF17C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801DF180: jal         0x801D45BC
    // 0x801DF184: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_801D45BC_5FF99C(rdram, ctx);
        goto after_6;
    // 0x801DF184: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801DF188: beq         $v0, $zero, L_801DF1EC
    if (ctx->r2 == 0) {
        // 0x801DF18C: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_801DF1EC;
    }
    // 0x801DF18C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801DF190: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801DF194: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x801DF198: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801DF19C: lhu         $t5, -0x520C($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X520C);
    // 0x801DF1A0: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x801DF1A4: beq         $at, $zero, L_801DF1C0
    if (ctx->r1 == 0) {
        // 0x801DF1A8: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_801DF1C0;
    }
    // 0x801DF1A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x801DF1AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF1B0: addu        $at, $at, $t5
    gpr jr_addend_801DF1B8 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801DF1B4: lw          $t5, -0x24F8($at)
    ctx->r13 = ADD32(ctx->r1, -0X24F8);
    // 0x801DF1B8: jr          $t5
    // 0x801DF1BC: nop

    switch (jr_addend_801DF1B8 >> 2) {
        case 0: goto L_801DF1C0; break;
        case 1: goto L_801DF1C0; break;
        case 2: goto L_801DF1C0; break;
        case 3: goto L_801DF1C8; break;
        case 4: goto L_801DF1C0; break;
        default: switch_error(__func__, 0x801DF1B8, 0x8020DB08);
    }
    // 0x801DF1BC: nop

L_801DF1C0:
    // 0x801DF1C0: b           L_801DF1F0
    // 0x801DF1C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801DF1F0;
    // 0x801DF1C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801DF1C8:
    // 0x801DF1C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DF1CC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801DF1D0: addiu       $a0, $zero, 0x2A8
    ctx->r4 = ADD32(0, 0X2A8);
    // 0x801DF1D4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801DF1D8: jal         0x8000F240
    // 0x801DF1DC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_7;
    // 0x801DF1DC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_7:
    // 0x801DF1E0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x801DF1E4: b           L_801DF1F0
    // 0x801DF1E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_801DF1F0;
    // 0x801DF1E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801DF1EC:
    // 0x801DF1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF1F0:
    // 0x801DF1F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DF1F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DF1F8: jr          $ra
    // 0x801DF1FC: nop

    TRACE_RETURN()
    return;
    // 0x801DF1FC: nop

;}
RECOMP_FUNC void func_801DDD64_609144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDD64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DDD68: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DDD6C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DDD70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DDD74: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801DDD78: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801DDD7C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801DDD80: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801DDD84: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801DDD88: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x801DDD8C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DDD90: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DDD94: addiu       $t8, $t7, 0x20
    ctx->r24 = ADD32(ctx->r15, 0X20);
    // 0x801DDD98: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
    // 0x801DDD9C: lw          $t9, 0x94($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X94);
    // 0x801DDDA0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DDDA4: lw          $a1, 0x70($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X70);
    // 0x801DDDA8: lw          $a3, 0x78($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X78);
    // 0x801DDDAC: lw          $a2, 0x74($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X74);
    // 0x801DDDB0: addiu       $v1, $v0, 0x100
    ctx->r3 = ADD32(ctx->r2, 0X100);
    // 0x801DDDB4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801DDDB8: jal         0x8000EE50
    // 0x801DDDBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000EE50_FA50(rdram, ctx);
        goto after_0;
    // 0x801DDDBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801DDDC0: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x801DDDC4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801DDDC8: slti        $at, $v0, 0x38
    ctx->r1 = SIGNED(ctx->r2) < 0X38 ? 1 : 0;
    // 0x801DDDCC: beq         $at, $zero, L_801DDE98
    if (ctx->r1 == 0) {
        // 0x801DDDD0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801DDE98;
    }
    // 0x801DDDD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DDDD4: bne         $v0, $at, L_801DDDEC
    if (ctx->r2 != ctx->r1) {
        // 0x801DDDD8: addiu       $a0, $zero, 0x11E
        ctx->r4 = ADD32(0, 0X11E);
            goto L_801DDDEC;
    }
    // 0x801DDDD8: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x801DDDDC: jal         0x80038BC8
    // 0x801DDDE0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801DDDE0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801DDDE4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801DDDE8: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
L_801DDDEC:
    // 0x801DDDEC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x801DDDF0: sw          $t0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r8;
    // 0x801DDDF4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801DDDF8: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801DDDFC: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801DDE00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DDE04: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801DDE08: lhu         $t2, -0x520C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X520C);
    // 0x801DDE0C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801DDE10: bnel        $t2, $at, L_801DDE2C
    if (ctx->r10 != ctx->r1) {
        // 0x801DDE14: lbu         $t5, 0xF($v1)
        ctx->r13 = MEM_BU(ctx->r3, 0XF);
            goto L_801DDE2C;
    }
    goto skip_0;
    // 0x801DDE14: lbu         $t5, 0xF($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XF);
    skip_0:
    // 0x801DDE18: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801DDE1C: lbu         $t4, 0x2C6($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2C6);
    // 0x801DDE20: beql        $t4, $zero, L_801DDF7C
    if (ctx->r12 == 0) {
        // 0x801DDE24: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801DDF7C;
    }
    goto skip_1;
    // 0x801DDE24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801DDE28: lbu         $t5, 0xF($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XF);
L_801DDE2C:
    // 0x801DDE2C: addiu       $t6, $t5, -0x4
    ctx->r14 = ADD32(ctx->r13, -0X4);
    // 0x801DDE30: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x801DDE34: beq         $v0, $zero, L_801DDE48
    if (ctx->r2 == 0) {
        // 0x801DDE38: sb          $t6, 0xF($v1)
        MEM_B(0XF, ctx->r3) = ctx->r14;
            goto L_801DDE48;
    }
    // 0x801DDE38: sb          $t6, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r14;
    // 0x801DDE3C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x801DDE40: bnel        $at, $zero, L_801DDE50
    if (ctx->r1 != 0) {
        // 0x801DDE44: lbu         $t7, 0x10($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X10);
            goto L_801DDE50;
    }
    goto skip_2;
    // 0x801DDE44: lbu         $t7, 0x10($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X10);
    skip_2:
L_801DDE48:
    // 0x801DDE48: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x801DDE4C: lbu         $t7, 0x10($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X10);
L_801DDE50:
    // 0x801DDE50: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x801DDE54: addiu       $t8, $t7, -0x4
    ctx->r24 = ADD32(ctx->r15, -0X4);
    // 0x801DDE58: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x801DDE5C: beq         $v0, $zero, L_801DDE6C
    if (ctx->r2 == 0) {
        // 0x801DDE60: sb          $t8, 0x10($v1)
        MEM_B(0X10, ctx->r3) = ctx->r24;
            goto L_801DDE6C;
    }
    // 0x801DDE60: sb          $t8, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r24;
    // 0x801DDE64: bnel        $v0, $at, L_801DDE74
    if (ctx->r2 != ctx->r1) {
        // 0x801DDE68: lbu         $t9, 0x11($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X11);
            goto L_801DDE74;
    }
    goto skip_3;
    // 0x801DDE68: lbu         $t9, 0x11($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X11);
    skip_3:
L_801DDE6C:
    // 0x801DDE6C: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
    // 0x801DDE70: lbu         $t9, 0x11($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X11);
L_801DDE74:
    // 0x801DDE74: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x801DDE78: addiu       $t0, $t9, -0x4
    ctx->r8 = ADD32(ctx->r25, -0X4);
    // 0x801DDE7C: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x801DDE80: beq         $v0, $zero, L_801DDE90
    if (ctx->r2 == 0) {
        // 0x801DDE84: sb          $t0, 0x11($v1)
        MEM_B(0X11, ctx->r3) = ctx->r8;
            goto L_801DDE90;
    }
    // 0x801DDE84: sb          $t0, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r8;
    // 0x801DDE88: bnel        $v0, $at, L_801DDF7C
    if (ctx->r2 != ctx->r1) {
        // 0x801DDE8C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801DDF7C;
    }
    goto skip_4;
    // 0x801DDE8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
L_801DDE90:
    // 0x801DDE90: b           L_801DDF78
    // 0x801DDE94: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
        goto L_801DDF78;
    // 0x801DDE94: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
L_801DDE98:
    // 0x801DDE98: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DDE9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DDEA0: ldc1        $f0, -0x2528($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2528);
    // 0x801DDEA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DDEA8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801DDEAC: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x801DDEB0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DDEB4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DDEB8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801DDEBC: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x801DDEC0: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x801DDEC4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DDEC8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DDECC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DDED0: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x801DDED4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x801DDED8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DDEDC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x801DDEE0: lwc1        $f2, 0x9C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801DDEE4: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x801DDEE8: nop

    // 0x801DDEEC: bc1fl       L_801DDF70
    if (!c1cs) {
        // 0x801DDEF0: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_801DDF70;
    }
    goto skip_5;
    // 0x801DDEF0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_5:
    // 0x801DDEF4: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x801DDEF8: lwc1        $f6, 0x9C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801DDEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DDF00: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x801DDF04: lwc1        $f8, 0x9C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801DDF08: jal         0x801DF610
    // 0x801DDF0C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    func_801DF610_60A9F0(rdram, ctx);
        goto after_2;
    // 0x801DDF0C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x801DDF10: jal         0x801DF5C4
    // 0x801DDF14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801DF5C4_60A9A4(rdram, ctx);
        goto after_3;
    // 0x801DDF14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801DDF18: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801DDF1C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801DDF20: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x801DDF24: sh          $t1, 0x2E($t2)
    MEM_H(0X2E, ctx->r10) = ctx->r9;
    // 0x801DDF28: sb          $s0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r16;
    // 0x801DDF2C: jal         0x80038BC8
    // 0x801DDF30: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801DDF30: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_4:
    // 0x801DDF34: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x801DDF38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DDF3C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x801DDF40: jal         0x80037C9C
    // 0x801DDF44: sb          $s0, 0xE($t3)
    MEM_B(0XE, ctx->r11) = ctx->r16;
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801DDF44: sb          $s0, 0xE($t3)
    MEM_B(0XE, ctx->r11) = ctx->r16;
    after_5:
    // 0x801DDF48: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x801DDF4C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x801DDF50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DDF54: jal         0x80037C20
    // 0x801DDF58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801DDF58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x801DDF5C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DDF60: jal         0x8003521C
    // 0x801DDF64: addiu       $a0, $a0, -0x2074
    ctx->r4 = ADD32(ctx->r4, -0X2074);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801DDF64: addiu       $a0, $a0, -0x2074
    ctx->r4 = ADD32(ctx->r4, -0X2074);
    after_7:
    // 0x801DDF68: lwc1        $f2, 0x9C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x801DDF6C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_801DDF70:
    // 0x801DDF70: jal         0x801DED6C
    // 0x801DDF74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801DED6C_60A14C(rdram, ctx);
        goto after_8;
    // 0x801DDF74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
L_801DDF78:
    // 0x801DDF78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801DDF7C:
    // 0x801DDF7C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDF80: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801DDF84: jr          $ra
    // 0x801DDF88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DDF88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801E7CA8_613088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7CA8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E7CAC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E7CB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E7CB4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E7CB8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E7CBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E7CC0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E7CC4: addiu       $t7, $t6, 0x1B0
    ctx->r15 = ADD32(ctx->r14, 0X1B0);
    // 0x801E7CC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7CCC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801E7CD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x801E7CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E7CD8: jal         0x801D3F00
    // 0x801E7CDC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801E7CDC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x801E7CE0: sb          $v0, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r2;
    // 0x801E7CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7CE8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E7CEC: jal         0x801D3B18
    // 0x801E7CF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801E7CF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801E7CF4: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E7CF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E7CFC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x801E7D00: sb          $t9, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r25;
    // 0x801E7D04: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E7D08: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x801E7D0C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801E7D10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E7D14: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E7D18: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801E7D1C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801E7D20: jal         0x8000EDF4
    // 0x801E7D24: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_2;
    // 0x801E7D24: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801E7D28: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801E7D2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E7D30: addiu       $t0, $s0, 0x70
    ctx->r8 = ADD32(ctx->r16, 0X70);
    // 0x801E7D34: addiu       $t1, $s0, 0x74
    ctx->r9 = ADD32(ctx->r16, 0X74);
    // 0x801E7D38: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801E7D3C: addiu       $t2, $s0, 0x78
    ctx->r10 = ADD32(ctx->r16, 0X78);
    // 0x801E7D40: lui         $at, 0x4402
    ctx->r1 = S32(0X4402 << 16);
    // 0x801E7D44: bc1fl       L_801E7E04
    if (!c1cs) {
        // 0x801E7D48: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_801E7E04;
    }
    goto skip_0;
    // 0x801E7D48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x801E7D4C: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801E7D50: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801E7D54: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801E7D58: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801E7D5C: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801E7D60: lwc1        $f14, 0x8($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7D64: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E7D68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E7D6C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801E7D70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E7D74: jal         0x8000E4E4
    // 0x801E7D78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_3;
    // 0x801E7D78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801E7D7C: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801E7D80: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E7D84: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7D88: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801E7D8C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E7D90: nop

    // 0x801E7D94: bc1fl       L_801E7DBC
    if (!c1cs) {
        // 0x801E7D98: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801E7DBC;
    }
    goto skip_1;
    // 0x801E7D98: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x801E7D9C: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x801E7DA0: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7DA4: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7DA8: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801E7DAC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E7DB0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801E7DB4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7DB8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801E7DBC:
    // 0x801E7DBC: nop

    // 0x801E7DC0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E7DC4: nop

    // 0x801E7DC8: bc1f        L_801E7DE8
    if (!c1cs) {
        // 0x801E7DCC: nop
    
            goto L_801E7DE8;
    }
    // 0x801E7DCC: nop

    // 0x801E7DD0: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x801E7DD4: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7DD8: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7DDC: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801E7DE0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E7DE4: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
L_801E7DE8:
    // 0x801E7DE8: jal         0x801D60E4
    // 0x801E7DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_4;
    // 0x801E7DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E7DF0: jal         0x801EEEC0
    // 0x801E7DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_5;
    // 0x801E7DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E7DF8: b           L_801E7EE4
    // 0x801E7DFC: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
        goto L_801E7EE4;
    // 0x801E7DFC: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E7E00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_801E7E04:
    // 0x801E7E04: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x801E7E08: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E7E0C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801E7E10: addiu       $t3, $s0, 0x70
    ctx->r11 = ADD32(ctx->r16, 0X70);
    // 0x801E7E14: addiu       $t4, $s0, 0x74
    ctx->r12 = ADD32(ctx->r16, 0X74);
    // 0x801E7E18: addiu       $t5, $s0, 0x78
    ctx->r13 = ADD32(ctx->r16, 0X78);
    // 0x801E7E1C: bc1f        L_801E7EDC
    if (!c1cs) {
        // 0x801E7E20: addiu       $t7, $t6, 0x1
        ctx->r15 = ADD32(ctx->r14, 0X1);
            goto L_801E7EDC;
    }
    // 0x801E7E20: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E7E24: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7E28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E7E2C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801E7E30: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801E7E34: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E7E38: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801E7E3C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801E7E40: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801E7E44: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E7E48: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E7E4C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E7E50: jal         0x8000E4E4
    // 0x801E7E54: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_6;
    // 0x801E7E54: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_6:
    // 0x801E7E58: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801E7E5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E7E60: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7E64: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801E7E68: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E7E6C: nop

    // 0x801E7E70: bc1fl       L_801E7E98
    if (!c1cs) {
        // 0x801E7E74: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801E7E98;
    }
    goto skip_2;
    // 0x801E7E74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x801E7E78: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x801E7E7C: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7E80: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7E84: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801E7E88: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E7E8C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801E7E90: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E7E94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801E7E98:
    // 0x801E7E98: nop

    // 0x801E7E9C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E7EA0: nop

    // 0x801E7EA4: bc1f        L_801E7EC4
    if (!c1cs) {
        // 0x801E7EA8: nop
    
            goto L_801E7EC4;
    }
    // 0x801E7EA8: nop

    // 0x801E7EAC: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x801E7EB0: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7EB4: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7EB8: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    // 0x801E7EBC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E7EC0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
L_801E7EC4:
    // 0x801E7EC4: jal         0x801D60E4
    // 0x801E7EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_7;
    // 0x801E7EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E7ECC: jal         0x801EEEC0
    // 0x801E7ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_8;
    // 0x801E7ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E7ED4: b           L_801E7EE4
    // 0x801E7ED8: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
        goto L_801E7EE4;
    // 0x801E7ED8: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
L_801E7EDC:
    // 0x801E7EDC: sb          $t7, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r15;
    // 0x801E7EE0: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
L_801E7EE4:
    // 0x801E7EE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E7EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7EEC: bnel        $t8, $at, L_801E7F9C
    if (ctx->r24 != ctx->r1) {
        // 0x801E7EF0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801E7F9C;
    }
    goto skip_3;
    // 0x801E7EF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x801E7EF4: jal         0x801D31F0
    // 0x801E7EF8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_9;
    // 0x801E7EF8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_9:
    // 0x801E7EFC: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E7F00: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x801E7F04: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E7F08: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E7F0C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7F10: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x801E7F14: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801E7F18: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E7F1C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801E7F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7F24: bc1f        L_801E7F98
    if (!c1cs) {
        // 0x801E7F28: lui         $a1, 0x3E99
        ctx->r5 = S32(0X3E99 << 16);
            goto L_801E7F98;
    }
    // 0x801E7F28: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801E7F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E7F30: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801E7F34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E7F38: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x801E7F3C: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x801E7F40: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x801E7F44: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x801E7F48: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x801E7F4C: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801E7F50: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801E7F54: jal         0x801EB800
    // 0x801E7F58: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    func_801EB800_616BE0(rdram, ctx);
        goto after_10;
    // 0x801E7F58: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    after_10:
    // 0x801E7F5C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801E7F60: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E7F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7F68: jal         0x801EB800
    // 0x801E7F6C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EB800_616BE0(rdram, ctx);
        goto after_11;
    // 0x801E7F6C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_11:
    // 0x801E7F70: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801E7F74: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E7F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7F7C: jal         0x801EB800
    // 0x801E7F80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_801EB800_616BE0(rdram, ctx);
        goto after_12;
    // 0x801E7F80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x801E7F84: jal         0x80038BC8
    // 0x801E7F88: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    func_80038BC8_397C8(rdram, ctx);
        goto after_13;
    // 0x801E7F88: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_13:
    // 0x801E7F8C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7F90: jal         0x8003521C
    // 0x801E7F94: addiu       $a0, $a0, 0x7FB0
    ctx->r4 = ADD32(ctx->r4, 0X7FB0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801E7F94: addiu       $a0, $a0, 0x7FB0
    ctx->r4 = ADD32(ctx->r4, 0X7FB0);
    after_14:
L_801E7F98:
    // 0x801E7F98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801E7F9C:
    // 0x801E7F9C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801E7FA0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E7FA4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E7FA8: jr          $ra
    // 0x801E7FAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801E7FAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801D3324_5FE704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3324: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D3328: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D332C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D3330: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D3334: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D3338: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D333C: bne         $a0, $zero, L_801D334C
    if (ctx->r4 != 0) {
        // 0x801D3340: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_801D334C;
    }
    // 0x801D3340: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D3344: jr          $ra
    // 0x801D3348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D334C:
    // 0x801D334C: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x801D3350: lbu         $a1, 0x8C($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X8C);
    // 0x801D3354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D3358: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801D335C: bne         $at, $zero, L_801D33CC
    if (ctx->r1 != 0) {
        // 0x801D3360: addiu       $t0, $a1, 0x1
        ctx->r8 = ADD32(ctx->r5, 0X1);
            goto L_801D33CC;
    }
    // 0x801D3360: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x801D3364: lbu         $a1, 0x90($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X90);
    // 0x801D3368: sb          $zero, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = 0;
    // 0x801D336C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x801D3370: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x801D3374: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D3378: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801D337C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x801D3380: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x801D3384: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801D3388: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x801D338C: beq         $a3, $zero, L_801D33C4
    if (ctx->r7 == 0) {
        // 0x801D3390: addiu       $t2, $a1, 0x1
        ctx->r10 = ADD32(ctx->r5, 0X1);
            goto L_801D33C4;
    }
    // 0x801D3390: addiu       $t2, $a1, 0x1
    ctx->r10 = ADD32(ctx->r5, 0X1);
    // 0x801D3394: sb          $t2, 0x90($v1)
    MEM_B(0X90, ctx->r3) = ctx->r10;
    // 0x801D3398: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D339C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D33A0: lw          $t7, -0x6320($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6320);
    // 0x801D33A4: lw          $t3, 0x38($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X38);
    // 0x801D33A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D33AC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801D33B0: addu        $t4, $t3, $a3
    ctx->r12 = ADD32(ctx->r11, ctx->r7);
    // 0x801D33B4: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x801D33B8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801D33BC: jr          $ra
    // 0x801D33C0: sw          $t5, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x801D33C0: sw          $t5, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r13;
L_801D33C4:
    // 0x801D33C4: jr          $ra
    // 0x801D33C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D33C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D33CC:
    // 0x801D33CC: sb          $t0, 0x8C($v1)
    MEM_B(0X8C, ctx->r3) = ctx->r8;
    // 0x801D33D0: jr          $ra
    // 0x801D33D4: nop

    TRACE_RETURN()
    return;
    // 0x801D33D4: nop

;}
RECOMP_FUNC void func_80209118_6344F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80209118: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020911C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80209120: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80209124: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80209128: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8020912C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80209130: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80209134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80209138: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020913C: jal         0x801EE658
    // 0x80209140: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x80209140: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x80209144: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80209148: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020914C: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80209150: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80209154: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80209158: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x8020915C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80209160: bc1fl       L_80209174
    if (!c1cs) {
        // 0x80209164: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80209174;
    }
    goto skip_0;
    // 0x80209164: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x80209168: b           L_80209174
    // 0x8020916C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80209174;
    // 0x8020916C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209170: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80209174:
    // 0x80209174: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80209178: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x8020917C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80209180: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80209184: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80209188: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020918C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80209190: nop

    // 0x80209194: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80209198: beql        $a3, $zero, L_802091E8
    if (ctx->r7 == 0) {
        // 0x8020919C: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_802091E8;
    }
    goto skip_1;
    // 0x8020919C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x802091A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802091A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802091A8: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802091AC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x802091B0: nop

    // 0x802091B4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802091B8: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x802091BC: nop

    // 0x802091C0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x802091C4: bne         $a3, $zero, L_802091DC
    if (ctx->r7 != 0) {
        // 0x802091C8: nop
    
            goto L_802091DC;
    }
    // 0x802091C8: nop

    // 0x802091CC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802091D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802091D4: b           L_802091F4
    // 0x802091D8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_802091F4;
    // 0x802091D8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_802091DC:
    // 0x802091DC: b           L_802091F4
    // 0x802091E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_802091F4;
    // 0x802091E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802091E4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_802091E8:
    // 0x802091E8: nop

    // 0x802091EC: bltz        $a3, L_802091DC
    if (SIGNED(ctx->r7) < 0) {
        // 0x802091F0: nop
    
            goto L_802091DC;
    }
    // 0x802091F0: nop

L_802091F4:
    // 0x802091F4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802091F8: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x802091FC: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80209200: jal         0x801D15BC
    // 0x80209204: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_1;
    // 0x80209204: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x80209208: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8020920C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80209210: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80209214: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x80209218: nop

    // 0x8020921C: bc1f        L_80209230
    if (!c1cs) {
        // 0x80209220: nop
    
            goto L_80209230;
    }
    // 0x80209220: nop

    // 0x80209224: jal         0x80038BC8
    // 0x80209228: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x80209228: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_2:
    // 0x8020922C: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
L_80209230:
    // 0x80209230: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80209234: lwc1        $f18, -0x1154($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1154);
    // 0x80209238: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8020923C: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x80209240: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80209244: nop

    // 0x80209248: bc1fl       L_802092D8
    if (!c1cs) {
        // 0x8020924C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802092D8;
    }
    goto skip_2;
    // 0x8020924C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80209250: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80209254: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x80209258: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8020925C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80209260: lbu         $t0, -0x521C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X521C);
    // 0x80209264: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x80209268: bne         $t0, $at, L_802092BC
    if (ctx->r8 != ctx->r1) {
        // 0x8020926C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802092BC;
    }
    // 0x8020926C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80209270: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80209274: jal         0x801D5064
    // 0x80209278: addiu       $a2, $zero, 0xBE
    ctx->r6 = ADD32(0, 0XBE);
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x80209278: addiu       $a2, $zero, 0xBE
    ctx->r6 = ADD32(0, 0XBE);
    after_3:
    // 0x8020927C: beql        $v0, $zero, L_802092D8
    if (ctx->r2 == 0) {
        // 0x80209280: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802092D8;
    }
    goto skip_3;
    // 0x80209280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x80209284: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80209288: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020928C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80209290: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80209294: jal         0x800373DC
    // 0x80209298: sh          $t1, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r9;
    func_800373DC_37FDC(rdram, ctx);
        goto after_4;
    // 0x80209298: sh          $t1, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r9;
    after_4:
    // 0x8020929C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802092A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802092A4: jal         0x80037C20
    // 0x802092A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x802092A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802092AC: jal         0x80034ED4
    // 0x802092B0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_6;
    // 0x802092B0: nop

    after_6:
    // 0x802092B4: b           L_802092D8
    // 0x802092B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802092D8;
    // 0x802092B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802092BC:
    // 0x802092BC: jal         0x801D16B4
    // 0x802092C0: nop

    func_801D16B4_5FCA94(rdram, ctx);
        goto after_7;
    // 0x802092C0: nop

    after_7:
    // 0x802092C4: jal         0x80038BC8
    // 0x802092C8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_8;
    // 0x802092C8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_8:
    // 0x802092CC: jal         0x80034ED4
    // 0x802092D0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_9;
    // 0x802092D0: nop

    after_9:
    // 0x802092D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802092D8:
    // 0x802092D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802092DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802092E0: jr          $ra
    // 0x802092E4: nop

    TRACE_RETURN()
    return;
    // 0x802092E4: nop

;}
RECOMP_FUNC void func_801D1600_5FC9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1600: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1604: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D1608: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D160C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D1610: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D1614: addiu       $v0, $v0, 0x1B0
    ctx->r2 = ADD32(ctx->r2, 0X1B0);
    // 0x801D1618: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x801D161C: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x801D1620: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x801D1624: sh          $a0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r4;
    // 0x801D1628: sb          $v1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r3;
    // 0x801D162C: sb          $a1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r5;
    // 0x801D1630: jr          $ra
    // 0x801D1634: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x801D1634: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_801F80F0_6234D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F80F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801F80F4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F80F8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801F80FC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801F8100: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801F8104: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801F8108: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F810C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F8110: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F8114: lwc1        $f16, -0x1790($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1790);
    // 0x801F8118: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F811C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F8120: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8124: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x801F8128: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801F812C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801F8130: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801F8134: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801F8138: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F813C: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801F8140: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801F8144: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F8148: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801F814C: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801F8150: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801F8154: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801F8158: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F815C: jal         0x8000E808
    // 0x801F8160: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801F8160: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F8164: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F8168: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F816C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F8170: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801F8174: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F8178: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F817C: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801F8180: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801F8184: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801F8188: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801F818C: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x801F8190: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8194: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F8198: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F819C: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x801F81A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F81A4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801F81A8: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F81AC: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F81B0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801F81B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F81B8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801F81BC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801F81C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F81C4: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801F81C8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F81CC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F81D0: addiu       $t5, $zero, 0x4B3
    ctx->r13 = ADD32(0, 0X4B3);
    // 0x801F81D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F81D8: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F81DC: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801F81E0: addiu       $a0, $a0, -0x7CC4
    ctx->r4 = ADD32(ctx->r4, -0X7CC4);
    // 0x801F81E4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801F81E8: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801F81EC: lw          $a1, -0x4D20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4D20);
    // 0x801F81F0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801F81F4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F81F8: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801F81FC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F8200: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801F8204: jal         0x80035854
    // 0x801F8208: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801F8208: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801F820C: beq         $v0, $zero, L_801F8328
    if (ctx->r2 == 0) {
        // 0x801F8210: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F8328;
    }
    // 0x801F8210: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F8214: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F8218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F821C: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F8220: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F8224: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F8228: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F822C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F8230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F8234: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801F8238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F823C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801F8240: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801F8244: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801F8248: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801F824C: jal         0x801E006C
    // 0x801F8250: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801F8250: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801F8254: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x801F8258: lbu         $t1, 0x67($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X67);
    // 0x801F825C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801F8260: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
    // 0x801F8264: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801F8268: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801F826C: addiu       $t9, $t9, -0x4D00
    ctx->r25 = ADD32(ctx->r25, -0X4D00);
    // 0x801F8270: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x801F8274: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
    // 0x801F8278: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801F827C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801F8280: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x801F8284: lh          $t2, 0xC($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XC);
    // 0x801F8288: addiu       $t3, $s0, 0x74
    ctx->r11 = ADD32(ctx->r16, 0X74);
    // 0x801F828C: addiu       $t4, $s0, 0x78
    ctx->r12 = ADD32(ctx->r16, 0X78);
    // 0x801F8290: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801F8294: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801F8298: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801F829C: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x801F82A0: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801F82A4: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801F82A8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F82AC: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801F82B0: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801F82B4: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801F82B8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801F82BC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801F82C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801F82C4: jal         0x8000E808
    // 0x801F82C8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    func_8000E808_F408(rdram, ctx);
        goto after_3;
    // 0x801F82C8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    after_3:
    // 0x801F82CC: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x801F82D0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801F82D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801F82D8: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x801F82DC: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x801F82E0: addiu       $t9, $zero, -0x28
    ctx->r25 = ADD32(0, -0X28);
    // 0x801F82E4: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    // 0x801F82E8: sw          $t6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r14;
    // 0x801F82EC: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    // 0x801F82F0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x801F82F4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x801F82F8: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x801F82FC: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    // 0x801F8300: sh          $t8, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r24;
    // 0x801F8304: sh          $t9, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r25;
    // 0x801F8308: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F830C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F8310: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F8314: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F8318: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x801F831C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801F8320: jal         0x8000F3D8
    // 0x801F8324: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F8324: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_801F8328:
    // 0x801F8328: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F832C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801F8330: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801F8334: jr          $ra
    // 0x801F8338: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801F8338: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801DDC70_609050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDC70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DDC74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DDC78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DDC7C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DDC80: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801DDC84: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DDC88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDC8C: bne         $t6, $zero, L_801DDC9C
    if (ctx->r14 != 0) {
        // 0x801DDC90: lw          $v0, -0x1130($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X1130);
            goto L_801DDC9C;
    }
    // 0x801DDC90: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DDC94: b           L_801DDCA0
    // 0x801DDC98: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
        goto L_801DDCA0;
    // 0x801DDC98: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
L_801DDC9C:
    // 0x801DDC9C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
L_801DDCA0:
    // 0x801DDCA0: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x801DDCA4: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x801DDCA8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801DDCAC: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801DDCB0: lhu         $a0, 0x16($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X16);
    // 0x801DDCB4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DDCB8: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x801DDCBC: addiu       $t5, $sp, 0x2C
    ctx->r13 = ADD32(ctx->r29, 0X2C);
    // 0x801DDCC0: subu        $t1, $t8, $t7
    ctx->r9 = SUB32(ctx->r24, ctx->r15);
    // 0x801DDCC4: addiu       $t3, $a0, -0x100
    ctx->r11 = ADD32(ctx->r4, -0X100);
    // 0x801DDCC8: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801DDCCC: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x801DDCD0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DDCD4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DDCD8: jal         0x8000E68C
    // 0x801DDCDC: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801DDCDC: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801DDCE0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801DDCE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DDCE8: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DDCEC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801DDCF0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x801DDCF4: jal         0x8000E39C
    // 0x801DDCF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801DDCF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x801DDCFC: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801DDD00: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DDD04: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DDD08: addiu       $t8, $t6, 0x20
    ctx->r24 = ADD32(ctx->r14, 0X20);
    // 0x801DDD0C: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
    // 0x801DDD10: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DDD14: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DDD18: jal         0x8000EE50
    // 0x801DDD1C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8000EE50_FA50(rdram, ctx);
        goto after_2;
    // 0x801DDD1C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x801DDD20: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801DDD24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DDD28: jal         0x80037C9C
    // 0x801DDD2C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801DDD2C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_3:
    // 0x801DDD30: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801DDD34: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801DDD38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DDD3C: jal         0x80037C20
    // 0x801DDD40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801DDD40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x801DDD44: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DDD48: jal         0x8003521C
    // 0x801DDD4C: addiu       $a0, $a0, -0x229C
    ctx->r4 = ADD32(ctx->r4, -0X229C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801DDD4C: addiu       $a0, $a0, -0x229C
    ctx->r4 = ADD32(ctx->r4, -0X229C);
    after_5:
    // 0x801DDD50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DDD54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DDD58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DDD5C: jr          $ra
    // 0x801DDD60: nop

    TRACE_RETURN()
    return;
    // 0x801DDD60: nop

;}
RECOMP_FUNC void func_801EA534_615914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EA538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EA53C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EA540: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EA544: jal         0x801D614C
    // 0x801EA548: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801EA548: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EA54C: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801EA550: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801EA554: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801EA558: addiu       $t7, $t6, 0xA
    ctx->r15 = ADD32(ctx->r14, 0XA);
    // 0x801EA55C: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801EA560: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801EA564: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EA568: jal         0x8000EE50
    // 0x801EA56C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801EA56C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801EA570: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EA574: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801EA578: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801EA57C: nop

    // 0x801EA580: bc1fl       L_801EA5AC
    if (!c1cs) {
        // 0x801EA584: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_801EA5AC;
    }
    goto skip_0;
    // 0x801EA584: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801EA588: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801EA58C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801EA590: bgez        $t0, L_801EA5A8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801EA594: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801EA5A8;
    }
    // 0x801EA594: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801EA598: jal         0x80035020
    // 0x801EA59C: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x801EA59C: nop

    after_2:
    // 0x801EA5A0: b           L_801EA604
    // 0x801EA5A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EA604;
    // 0x801EA5A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EA5A8:
    // 0x801EA5A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_801EA5AC:
    // 0x801EA5AC: lwc1        $f6, 0x10($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X10);
    // 0x801EA5B0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801EA5B4: nop

    // 0x801EA5B8: bc1f        L_801EA5D0
    if (!c1cs) {
        // 0x801EA5BC: nop
    
            goto L_801EA5D0;
    }
    // 0x801EA5BC: nop

    // 0x801EA5C0: jal         0x80035020
    // 0x801EA5C4: nop

    func_80035020_35C20(rdram, ctx);
        goto after_3;
    // 0x801EA5C4: nop

    after_3:
    // 0x801EA5C8: b           L_801EA604
    // 0x801EA5CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EA604;
    // 0x801EA5CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EA5D0:
    // 0x801EA5D0: jal         0x801D365C
    // 0x801EA5D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_4;
    // 0x801EA5D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801EA5D8: bne         $v0, $zero, L_801EA5F0
    if (ctx->r2 != 0) {
        // 0x801EA5DC: nop
    
            goto L_801EA5F0;
    }
    // 0x801EA5DC: nop

    // 0x801EA5E0: jal         0x801D36CC
    // 0x801EA5E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_5;
    // 0x801EA5E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801EA5E8: beq         $v0, $zero, L_801EA5F8
    if (ctx->r2 == 0) {
        // 0x801EA5EC: nop
    
            goto L_801EA5F8;
    }
    // 0x801EA5EC: nop

L_801EA5F0:
    // 0x801EA5F0: jal         0x801EA614
    // 0x801EA5F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA614_6159F4(rdram, ctx);
        goto after_6;
    // 0x801EA5F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_801EA5F8:
    // 0x801EA5F8: jal         0x801D3894
    // 0x801EA5FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_7;
    // 0x801EA5FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801EA600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EA604:
    // 0x801EA604: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EA608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EA60C: jr          $ra
    // 0x801EA610: nop

    TRACE_RETURN()
    return;
    // 0x801EA610: nop

;}
RECOMP_FUNC void func_801E5DAC_61118C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5DB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E5DB8: jal         0x801EF2B0
    // 0x801E5DBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_0;
    // 0x801E5DBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E5DC0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5DC4: addiu       $a1, $a1, -0x4E88
    ctx->r5 = ADD32(ctx->r5, -0X4E88);
    // 0x801E5DC8: jal         0x801D31CC
    // 0x801E5DCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E5DCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E5DD0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5DD4: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E5DD8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E5DE0: jal         0x801D34D0
    // 0x801E5DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E5DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E5DE8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801E5DEC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5DF0: addiu       $a0, $a0, 0x5E14
    ctx->r4 = ADD32(ctx->r4, 0X5E14);
    // 0x801E5DF4: lw          $t6, 0xEC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XEC);
    // 0x801E5DF8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E5DFC: jal         0x8003521C
    // 0x801E5E00: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E5E00: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    after_3:
    // 0x801E5E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E5E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5E0C: jr          $ra
    // 0x801E5E10: nop

    TRACE_RETURN()
    return;
    // 0x801E5E10: nop

;}
