#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021451C_69BF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021451C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80214520: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214524: addu        $t6, $a1, $at
    ctx->r14 = ADD32(ctx->r5, ctx->r1);
    // 0x80214528: jr          $ra
    // 0x8021452C: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8021452C: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80213558_69AF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021355C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80213560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213564: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x80213568: jalr        $t9
    // 0x8021356C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021356C: nop

    after_0:
    // 0x80213570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213578: jr          $ra
    // 0x8021357C: nop

    TRACE_RETURN()
    return;
    // 0x8021357C: nop

;}
RECOMP_FUNC void func_80210638_698038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210638: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021063C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210640: jr          $ra
    // 0x80210644: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80210644: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802116A0_6990A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802116A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802116A4: bne         $a1, $at, L_802116D4
    if (ctx->r5 != ctx->r1) {
        // 0x802116A8: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802116D4;
    }
    // 0x802116A8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802116AC: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x802116B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802116B4: lwc1        $f4, 0x5140($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5140);
    // 0x802116B8: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x802116BC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x802116C0: addiu       $t6, $t6, 0x93C
    ctx->r14 = ADD32(ctx->r14, 0X93C);
    // 0x802116C4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802116C8: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x802116CC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x802116D0: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
L_802116D4:
    // 0x802116D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802116D8: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x802116DC: jr          $ra
    // 0x802116E0: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x802116E0: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80212B40_69A540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212B40: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212B44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212B48: lw          $t6, 0x54($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X54);
    // 0x80212B4C: swc1        $f12, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f12.u32l;
    // 0x80212B50: lwc1        $f0, 0x24($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80212B54: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80212B58: nop

    // 0x80212B5C: bc1fl       L_80212B78
    if (!c1cs) {
        // 0x80212B60: lwc1        $f6, 0x4C($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
            goto L_80212B78;
    }
    goto skip_0;
    // 0x80212B60: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    skip_0:
    // 0x80212B64: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80212B68: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80212B6C: b           L_80212B7C
    // 0x80212B70: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80212B7C;
    // 0x80212B70: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80212B74: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
L_80212B78:
    // 0x80212B78: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_80212B7C:
    // 0x80212B7C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212B80: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80212B84: jr          $ra
    // 0x80212B88: swc1        $f10, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80212B88: swc1        $f10, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8020FEA0_6978A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FEA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020FEA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020FEA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8020FEAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8020FEB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8020FEB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8020FEB8: sltiu       $at, $a1, 0x15
    ctx->r1 = ctx->r5 < 0X15 ? 1 : 0;
    // 0x8020FEBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8020FEC0: beq         $at, $zero, L_802104B0
    if (ctx->r1 == 0) {
        // 0x8020FEC4: lw          $s1, 0x18($a0)
        ctx->r17 = MEM_W(ctx->r4, 0X18);
            goto L_802104B0;
    }
    // 0x8020FEC4: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8020FEC8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8020FECC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FED0: addu        $at, $at, $t6
    gpr jr_addend_8020FED8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020FED4: lw          $t6, 0x5084($at)
    ctx->r14 = ADD32(ctx->r1, 0X5084);
    // 0x8020FED8: jr          $t6
    // 0x8020FEDC: nop

    switch (jr_addend_8020FED8 >> 2) {
        case 0: goto L_8020FEE0; break;
        case 1: goto L_8020FF1C; break;
        case 2: goto L_8020FF60; break;
        case 3: goto L_8020FFAC; break;
        case 4: goto L_8020FFF8; break;
        case 5: goto L_80210040; break;
        case 6: goto L_8021007C; break;
        case 7: goto L_802100C0; break;
        case 8: goto L_8021010C; break;
        case 9: goto L_80210150; break;
        case 10: goto L_8021019C; break;
        case 11: goto L_802101E4; break;
        case 12: goto L_8021022C; break;
        case 13: goto L_80210278; break;
        case 14: goto L_802102BC; break;
        case 15: goto L_80210300; break;
        case 16: goto L_8021034C; break;
        case 17: goto L_80210390; break;
        case 18: goto L_802103DC; break;
        case 19: goto L_80210420; break;
        case 20: goto L_80210468; break;
        default: switch_error(__func__, 0x8020FED8, 0x80215084);
    }
    // 0x8020FEDC: nop

L_8020FEE0:
    // 0x8020FEE0: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8020FEE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020FEE8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x8020FEEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FEF0: lwc1        $f4, 0x50D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X50D8);
    // 0x8020FEF4: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8020FEF8: addiu       $t8, $t8, 0x58C
    ctx->r24 = ADD32(ctx->r24, 0X58C);
    // 0x8020FEFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8020FF00: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8020FF04: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x8020FF08: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x8020FF0C: jal         0x8001B5AC
    // 0x8020FF10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8020FF10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8020FF14: b           L_802104B4
    // 0x8020FF18: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_802104B4;
    // 0x8020FF18: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_8020FF1C:
    // 0x8020FF1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020FF20: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8020FF24: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8020FF28: addiu       $t0, $t0, 0x32E0
    ctx->r8 = ADD32(ctx->r8, 0X32E0);
    // 0x8020FF2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8020FF30: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8020FF34: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8020FF38: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x8020FF3C: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    // 0x8020FF40: jal         0x8001B5AC
    // 0x8020FF44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x8020FF44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8020FF48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FF4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020FF50: nop

    // 0x8020FF54: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020FF58: b           L_802104B4
    // 0x8020FF5C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_802104B4;
    // 0x8020FF5C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_8020FF60:
    // 0x8020FF60: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8020FF64: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020FF68: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x8020FF6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FF70: lwc1        $f16, 0x50DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X50DC);
    // 0x8020FF74: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x8020FF78: addiu       $t3, $t3, 0x17A8
    ctx->r11 = ADD32(ctx->r11, 0X17A8);
    // 0x8020FF7C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8020FF80: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8020FF84: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x8020FF88: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
    // 0x8020FF8C: jal         0x8001B5AC
    // 0x8020FF90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_2;
    // 0x8020FF90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8020FF94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FF98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020FF9C: nop

    // 0x8020FFA0: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8020FFA4: b           L_802104B4
    // 0x8020FFA8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_802104B4;
    // 0x8020FFA8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_8020FFAC:
    // 0x8020FFAC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8020FFB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020FFB4: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8020FFB8: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8020FFBC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020FFC0: addiu       $t6, $t6, 0x4178
    ctx->r14 = ADD32(ctx->r14, 0X4178);
    // 0x8020FFC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8020FFC8: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x8020FFCC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8020FFD0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x8020FFD4: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
    // 0x8020FFD8: jal         0x8001B5AC
    // 0x8020FFDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_3;
    // 0x8020FFDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8020FFE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FFE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020FFE8: nop

    // 0x8020FFEC: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020FFF0: b           L_802104B4
    // 0x8020FFF4: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_802104B4;
    // 0x8020FFF4: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_8020FFF8:
    // 0x8020FFF8: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8020FFFC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210000: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210004: lwc1        $f16, 0x50E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X50E0);
    // 0x80210008: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021000C: addiu       $t8, $t8, 0x4E48
    ctx->r24 = ADD32(ctx->r24, 0X4E48);
    // 0x80210010: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210014: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80210018: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x8021001C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x80210020: jal         0x8001B5AC
    // 0x80210024: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_4;
    // 0x80210024: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80210028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021002C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210030: nop

    // 0x80210034: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80210038: b           L_802104B4
    // 0x8021003C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_802104B4;
    // 0x8021003C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_80210040:
    // 0x80210040: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210044: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80210048: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x8021004C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210050: lwc1        $f6, 0x50E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X50E4);
    // 0x80210054: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80210058: addiu       $t1, $t1, 0x3DA0
    ctx->r9 = ADD32(ctx->r9, 0X3DA0);
    // 0x8021005C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210060: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80210064: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80210068: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
    // 0x8021006C: jal         0x8001B5AC
    // 0x80210070: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_5;
    // 0x80210070: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80210074: b           L_802104B4
    // 0x80210078: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
        goto L_802104B4;
    // 0x80210078: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_8021007C:
    // 0x8021007C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210080: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210084: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x80210088: addiu       $t3, $t3, 0x463C
    ctx->r11 = ADD32(ctx->r11, 0X463C);
    // 0x8021008C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210090: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210094: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80210098: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021009C: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
    // 0x802100A0: jal         0x8001B5AC
    // 0x802100A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_6;
    // 0x802100A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x802100A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802100AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802100B0: nop

    // 0x802100B4: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802100B8: b           L_802104B4
    // 0x802100BC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x802100BC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_802100C0:
    // 0x802100C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802100C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802100C8: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x802100CC: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x802100D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802100D4: addiu       $t6, $t6, 0x1200
    ctx->r14 = ADD32(ctx->r14, 0X1200);
    // 0x802100D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802100DC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x802100E0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x802100E4: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x802100E8: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
    // 0x802100EC: jal         0x8001B5AC
    // 0x802100F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_7;
    // 0x802100F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802100F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802100F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802100FC: nop

    // 0x80210100: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210104: b           L_802104B4
    // 0x80210108: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x80210108: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8021010C:
    // 0x8021010C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210110: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210114: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x80210118: addiu       $t8, $t8, -0x4A88
    ctx->r24 = ADD32(ctx->r24, -0X4A88);
    // 0x8021011C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210120: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210124: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80210128: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021012C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x80210130: jal         0x8001B5AC
    // 0x80210134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_8;
    // 0x80210134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80210138: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021013C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210140: nop

    // 0x80210144: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210148: b           L_802104B4
    // 0x8021014C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x8021014C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80210150:
    // 0x80210150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210154: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210158: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8021015C: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80210160: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80210164: addiu       $t1, $t1, 0x36F0
    ctx->r9 = ADD32(ctx->r9, 0X36F0);
    // 0x80210168: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021016C: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x80210170: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80210174: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80210178: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
    // 0x8021017C: jal         0x8001B5AC
    // 0x80210180: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_9;
    // 0x80210180: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80210184: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210188: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021018C: nop

    // 0x80210190: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210194: b           L_802104B4
    // 0x80210198: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x80210198: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8021019C:
    // 0x8021019C: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x802101A0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802101A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802101A8: lwc1        $f8, 0x50E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X50E8);
    // 0x802101AC: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x802101B0: addiu       $t3, $t3, 0x3AF4
    ctx->r11 = ADD32(ctx->r11, 0X3AF4);
    // 0x802101B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802101B8: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x802101BC: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x802101C0: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
    // 0x802101C4: jal         0x8001B5AC
    // 0x802101C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_10;
    // 0x802101C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x802101CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802101D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802101D4: nop

    // 0x802101D8: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802101DC: b           L_802104B4
    // 0x802101E0: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x802101E0: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_802101E4:
    // 0x802101E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802101E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802101EC: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x802101F0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x802101F4: addiu       $t5, $t5, 0x6F5C
    ctx->r13 = ADD32(ctx->r13, 0X6F5C);
    // 0x802101F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802101FC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210200: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80210204: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80210208: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
    // 0x8021020C: jal         0x8001B5AC
    // 0x80210210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_11;
    // 0x80210210: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80210214: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021021C: nop

    // 0x80210220: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210224: b           L_802104B4
    // 0x80210228: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x80210228: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8021022C:
    // 0x8021022C: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210230: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80210234: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80210238: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021023C: lwc1        $f8, 0x50EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X50EC);
    // 0x80210240: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80210244: addiu       $t8, $t8, 0x4018
    ctx->r24 = ADD32(ctx->r24, 0X4018);
    // 0x80210248: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021024C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80210250: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x80210254: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x80210258: jal         0x8001B5AC
    // 0x8021025C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_12;
    // 0x8021025C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80210260: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210264: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210268: nop

    // 0x8021026C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210270: b           L_802104B4
    // 0x80210274: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x80210274: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80210278:
    // 0x80210278: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021027C: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210280: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80210284: addiu       $t0, $t0, 0x638C
    ctx->r8 = ADD32(ctx->r8, 0X638C);
    // 0x80210288: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021028C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210290: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80210294: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80210298: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    // 0x8021029C: jal         0x8001B5AC
    // 0x802102A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_13;
    // 0x802102A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x802102A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802102A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802102AC: nop

    // 0x802102B0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802102B4: b           L_802104B4
    // 0x802102B8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x802102B8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_802102BC:
    // 0x802102BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802102C0: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x802102C4: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x802102C8: addiu       $t2, $t2, -0x35E8
    ctx->r10 = ADD32(ctx->r10, -0X35E8);
    // 0x802102CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802102D0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802102D4: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x802102D8: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x802102DC: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
    // 0x802102E0: jal         0x8001B5AC
    // 0x802102E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_14;
    // 0x802102E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x802102E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802102EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802102F0: nop

    // 0x802102F4: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802102F8: b           L_802104B4
    // 0x802102FC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x802102FC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80210300:
    // 0x80210300: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210304: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210308: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x8021030C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210310: lwc1        $f18, 0x50F0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X50F0);
    // 0x80210314: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x80210318: addiu       $t5, $t5, 0x6310
    ctx->r13 = ADD32(ctx->r13, 0X6310);
    // 0x8021031C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210320: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80210324: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80210328: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
    // 0x8021032C: jal         0x8001B5AC
    // 0x80210330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_15;
    // 0x80210330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80210334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210338: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021033C: nop

    // 0x80210340: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210344: b           L_802104B4
    // 0x80210348: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x80210348: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8021034C:
    // 0x8021034C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210350: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210354: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80210358: addiu       $t7, $t7, 0x7238
    ctx->r15 = ADD32(ctx->r15, 0X7238);
    // 0x8021035C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210360: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210364: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80210368: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021036C: sw          $t8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r24;
    // 0x80210370: jal         0x8001B5AC
    // 0x80210374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_16;
    // 0x80210374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80210378: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021037C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210380: nop

    // 0x80210384: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210388: b           L_802104B4
    // 0x8021038C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x8021038C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80210390:
    // 0x80210390: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80210394: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210398: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8021039C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x802103A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802103A4: addiu       $t0, $t0, 0x3B8C
    ctx->r8 = ADD32(ctx->r8, 0X3B8C);
    // 0x802103A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802103AC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802103B0: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802103B4: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x802103B8: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    // 0x802103BC: jal         0x8001B5AC
    // 0x802103C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_17;
    // 0x802103C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x802103C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802103C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802103CC: nop

    // 0x802103D0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802103D4: b           L_802104B4
    // 0x802103D8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x802103D8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_802103DC:
    // 0x802103DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802103E0: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x802103E4: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x802103E8: addiu       $t2, $t2, -0x2930
    ctx->r10 = ADD32(ctx->r10, -0X2930);
    // 0x802103EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802103F0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802103F4: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x802103F8: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x802103FC: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
    // 0x80210400: jal         0x8001B5AC
    // 0x80210404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_18;
    // 0x80210404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80210408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021040C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210410: nop

    // 0x80210414: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210418: b           L_802104B4
    // 0x8021041C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x8021041C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80210420:
    // 0x80210420: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x80210424: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210428: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021042C: lwc1        $f18, 0x50F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X50F4);
    // 0x80210430: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80210434: addiu       $t4, $t4, 0x10A4
    ctx->r12 = ADD32(ctx->r12, 0X10A4);
    // 0x80210438: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021043C: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80210440: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80210444: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
    // 0x80210448: jal         0x8001B5AC
    // 0x8021044C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_19;
    // 0x8021044C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x80210450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210458: nop

    // 0x8021045C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210460: b           L_802104B4
    // 0x80210464: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_802104B4;
    // 0x80210464: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_80210468:
    // 0x80210468: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
    // 0x8021046C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80210470: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210474: lwc1        $f8, 0x50F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X50F8);
    // 0x80210478: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021047C: addiu       $t6, $t6, 0xE64
    ctx->r14 = ADD32(ctx->r14, 0XE64);
    // 0x80210480: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80210484: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80210488: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021048C: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
    // 0x80210490: jal         0x8001B5AC
    // 0x80210494: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_20;
    // 0x80210494: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x80210498: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021049C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802104A0: nop

    // 0x802104A4: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802104A8: b           L_802104B4
    // 0x802104AC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_802104B4;
    // 0x802104AC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_802104B0:
    // 0x802104B0: addiu       $s0, $a2, 0x5C
    ctx->r16 = ADD32(ctx->r6, 0X5C);
L_802104B4:
    // 0x802104B4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x802104B8: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x802104BC: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x802104C0: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802104C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802104C8: lbu         $t9, -0x5236($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5236);
    // 0x802104CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802104D0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802104D4: bgez        $t9, L_802104E8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802104D8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802104E8;
    }
    // 0x802104D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802104DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802104E0: nop

    // 0x802104E4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802104E8:
    // 0x802104E8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802104EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802104F0: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x802104F4: swc1        $f16, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f16.u32l;
    // 0x802104F8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802104FC: swc1        $f4, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f4.u32l;
    // 0x80210500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80210504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80210508: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021050C: jr          $ra
    // 0x80210510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80210510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802108CC_6982CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802108D0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802108D4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802108D8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x802108DC: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x802108E0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802108E4: jr          $ra
    // 0x802108E8: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802108E8: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80212A7C_69A47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212A7C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80212A80: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212A84: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212A88: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212A8C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80212A90: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x80212A94: swc1        $f14, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f14.u32l;
    // 0x80212A98: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80212A9C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80212AA0: bc1f        L_80212AB8
    if (!c1cs) {
        // 0x80212AA4: swc1        $f4, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
            goto L_80212AB8;
    }
    // 0x80212AA4: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80212AA8: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80212AAC: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80212AB0: b           L_80212AC0
    // 0x80212AB4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80212AC0;
    // 0x80212AB4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80212AB8:
    // 0x80212AB8: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80212ABC: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
L_80212AC0:
    // 0x80212AC0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212AC4: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80212AC8: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80212ACC: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80212AD0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80212AD4: nop

    // 0x80212AD8: bc1f        L_80212AEC
    if (!c1cs) {
        // 0x80212ADC: swc1        $f10, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
            goto L_80212AEC;
    }
    // 0x80212ADC: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x80212AE0: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80212AE4: b           L_80212AF0
    // 0x80212AE8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80212AF0;
    // 0x80212AE8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80212AEC:
    // 0x80212AEC: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
L_80212AF0:
    // 0x80212AF0: div.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80212AF4: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80212AF8: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80212AFC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80212B00: nop

    // 0x80212B04: bc1f        L_80212B18
    if (!c1cs) {
        // 0x80212B08: swc1        $f16, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
            goto L_80212B18;
    }
    // 0x80212B08: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
    // 0x80212B0C: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80212B10: b           L_80212B1C
    // 0x80212B14: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80212B1C;
    // 0x80212B14: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80212B18:
    // 0x80212B18: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
L_80212B1C:
    // 0x80212B1C: div.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80212B20: jr          $ra
    // 0x80212B24: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80212B24: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80210520_697F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210524: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210528: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021052C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x80210530: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80210534: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210538: jr          $ra
    // 0x8021053C: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021053C: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80212B8C_69A58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212B8C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212B90: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212B94: lw          $t6, 0x54($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X54);
    // 0x80212B98: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x80212B9C: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x80212BA0: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80212BA4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80212BA8: lw          $t7, 0x54($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X54);
    // 0x80212BAC: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80212BB0: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x80212BB4: swc1        $f12, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f12.u32l;
    // 0x80212BB8: lw          $a1, 0x58($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X58);
    // 0x80212BBC: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80212BC0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80212BC4: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x80212BC8: jr          $ra
    // 0x80212BCC: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80212BCC: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80213F54_69B954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213F54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80213F58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80213F5C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80213F60: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80213F64: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80213F68: lhu         $t6, 0x76($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X76);
    // 0x80213F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213F70: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80213F74: bne         $t6, $at, L_80213F94
    if (ctx->r14 != ctx->r1) {
        // 0x80213F78: addiu       $s0, $a0, 0x5C
        ctx->r16 = ADD32(ctx->r4, 0X5C);
            goto L_80213F94;
    }
    // 0x80213F78: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x80213F7C: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x80213F80: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80213F84: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x80213F88: sb          $t8, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r24;
    // 0x80213F8C: b           L_802141D0
    // 0x80213F90: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
        goto L_802141D0;
    // 0x80213F90: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
L_80213F94:
    // 0x80213F94: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80213F98: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x80213F9C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80213FA0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80213FA4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80213FA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80213FAC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80213FB0: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x80213FB4: jal         0x800417F0
    // 0x80213FB8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x80213FB8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80213FBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80213FC0: nop

    // 0x80213FC4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80213FC8: nop

    // 0x80213FCC: bc1fl       L_80214000
    if (!c1cs) {
        // 0x80213FD0: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_80214000;
    }
    goto skip_0;
    // 0x80213FD0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80213FD4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80213FD8: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80213FDC: nop

    // 0x80213FE0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80213FE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80213FE8: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x80213FEC: jal         0x800417F0
    // 0x80213FF0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x80213FF0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_1:
    // 0x80213FF4: b           L_80214020
    // 0x80213FF8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80214020;
    // 0x80213FF8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80213FFC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_80214000:
    // 0x80214000: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80214004: nop

    // 0x80214008: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021400C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80214010: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80214014: jal         0x800417F0
    // 0x80214018: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80214018: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x8021401C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80214020:
    // 0x80214020: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80214024: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80214028: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021402C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80214030: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80214034: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80214038: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8021403C: nop

    // 0x80214040: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80214044: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80214048: nop

    // 0x8021404C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80214050: beql        $t3, $zero, L_802140A0
    if (ctx->r11 == 0) {
        // 0x80214054: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_802140A0;
    }
    goto skip_1;
    // 0x80214054: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x80214058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021405C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80214060: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80214064: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80214068: nop

    // 0x8021406C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80214070: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80214074: nop

    // 0x80214078: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8021407C: bne         $t3, $zero, L_80214094
    if (ctx->r11 != 0) {
        // 0x80214080: nop
    
            goto L_80214094;
    }
    // 0x80214080: nop

    // 0x80214084: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80214088: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021408C: b           L_802140AC
    // 0x80214090: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_802140AC;
    // 0x80214090: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80214094:
    // 0x80214094: b           L_802140AC
    // 0x80214098: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_802140AC;
    // 0x80214098: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8021409C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_802140A0:
    // 0x802140A0: nop

    // 0x802140A4: bltz        $t3, L_80214094
    if (SIGNED(ctx->r11) < 0) {
        // 0x802140A8: nop
    
            goto L_80214094;
    }
    // 0x802140A8: nop

L_802140AC:
    // 0x802140AC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x802140B0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802140B4: sb          $t3, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r11;
    // 0x802140B8: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x802140BC: nop

    // 0x802140C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802140C4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802140C8: div.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f20.d);
    // 0x802140CC: jal         0x800417F0
    // 0x802140D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x802140D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x802140D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802140D8: nop

    // 0x802140DC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802140E0: nop

    // 0x802140E4: bc1fl       L_80214118
    if (!c1cs) {
        // 0x802140E8: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_80214118;
    }
    goto skip_2;
    // 0x802140E8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x802140EC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x802140F0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802140F4: nop

    // 0x802140F8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802140FC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80214100: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80214104: jal         0x800417F0
    // 0x80214108: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x80214108: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x8021410C: b           L_80214138
    // 0x80214110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80214138;
    // 0x80214110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80214114: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_80214118:
    // 0x80214118: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8021411C: nop

    // 0x80214120: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80214124: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80214128: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x8021412C: jal         0x800417F0
    // 0x80214130: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    __sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x80214130: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_5:
    // 0x80214134: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80214138:
    // 0x80214138: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8021413C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80214140: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214144: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80214148: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8021414C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80214150: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80214154: nop

    // 0x80214158: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021415C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80214160: nop

    // 0x80214164: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80214168: beql        $t8, $zero, L_802141B8
    if (ctx->r24 == 0) {
        // 0x8021416C: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_802141B8;
    }
    goto skip_3;
    // 0x8021416C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x80214170: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80214174: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214178: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021417C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80214180: nop

    // 0x80214184: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80214188: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021418C: nop

    // 0x80214190: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80214194: bne         $t8, $zero, L_802141AC
    if (ctx->r24 != 0) {
        // 0x80214198: nop
    
            goto L_802141AC;
    }
    // 0x80214198: nop

    // 0x8021419C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x802141A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802141A4: b           L_802141C4
    // 0x802141A8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802141C4;
    // 0x802141A8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802141AC:
    // 0x802141AC: b           L_802141C4
    // 0x802141B0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802141C4;
    // 0x802141B0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802141B4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_802141B8:
    // 0x802141B8: nop

    // 0x802141BC: bltz        $t8, L_802141AC
    if (SIGNED(ctx->r24) < 0) {
        // 0x802141C0: nop
    
            goto L_802141AC;
    }
    // 0x802141C0: nop

L_802141C4:
    // 0x802141C4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802141C8: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
    // 0x802141CC: nop

L_802141D0:
    // 0x802141D0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802141D4: addiu       $t0, $t0, 0x4B38
    ctx->r8 = ADD32(ctx->r8, 0X4B38);
    // 0x802141D8: lbu         $t3, 0x10($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X10);
    // 0x802141DC: lbu         $t6, 0x11($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X11);
    // 0x802141E0: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
    // 0x802141E4: lbu         $t0, 0x12($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X12);
    // 0x802141E8: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x802141EC: lbu         $t5, 0x13($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X13);
    // 0x802141F0: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x802141F4: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x802141F8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x802141FC: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80214200: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80214204: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x80214208: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8021420C: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x80214210: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x80214214: sw          $t9, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r25;
    // 0x80214218: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x8021421C: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x80214220: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80214224: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x80214228: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8021422C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x80214230: jal         0x80040620
    // 0x80214234: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x80214234: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_6:
    // 0x80214238: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8021423C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80214240: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80214244: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80214248: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8021424C: or          $t0, $a0, $at
    ctx->r8 = ctx->r4 | ctx->r1;
    // 0x80214250: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x80214254: lhu         $t8, 0x1C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1C);
    // 0x80214258: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    // 0x8021425C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80214260: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x80214264: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80214268: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x8021426C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214270: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
    // 0x80214274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80214278: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8021427C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80214280: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80214284: jr          $ra
    // 0x80214288: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80214288: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80210F5C_69895C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210F64: jal         0x80034EF8
    // 0x80210F68: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80210F68: nop

    after_0:
    // 0x80210F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210F78: jr          $ra
    // 0x80210F7C: nop

    TRACE_RETURN()
    return;
    // 0x80210F7C: nop

;}
RECOMP_FUNC void func_80210C78_698678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80210C7C: jr          $ra
    // 0x80210C80: sh          $a1, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80210C80: sh          $a1, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80210B54_698554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80210B58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80210B5C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80210B60: addiu       $a1, $a1, 0xB08
    ctx->r5 = ADD32(ctx->r5, 0XB08);
    // 0x80210B64: jal         0x80034E08
    // 0x80210B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80210B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80210B6C: bne         $v0, $zero, L_80210B7C
    if (ctx->r2 != 0) {
        // 0x80210B70: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80210B7C;
    }
    // 0x80210B70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210B74: b           L_80210C24
    // 0x80210B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80210C24;
    // 0x80210B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80210B7C:
    // 0x80210B7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210B80: lwc1        $f2, 0x5110($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5110);
    // 0x80210B84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210B88: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80210B8C: addiu       $a1, $a1, 0xBB8
    ctx->r5 = ADD32(ctx->r5, 0XBB8);
    // 0x80210B90: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80210B94: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80210B98: addiu       $t6, $zero, 0x28D
    ctx->r14 = ADD32(0, 0X28D);
    // 0x80210B9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80210BA0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80210BA4: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x80210BA8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80210BAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80210BB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80210BB4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80210BB8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80210BBC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80210BC0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80210BC4: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80210BC8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80210BCC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80210BD0: jal         0x8000DBF0
    // 0x80210BD4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80210BD4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80210BD8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80210BDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210BE0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80210BE4: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80210BE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80210BEC: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x80210BF0: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80210BF4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x80210BF8: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80210BFC: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80210C00: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80210C04: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80210C08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210C0C: ldc1        $f8, 0x5118($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X5118);
    // 0x80210C10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80210C14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80210C18: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80210C1C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80210C20: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
L_80210C24:
    // 0x80210C24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80210C28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80210C2C: jr          $ra
    // 0x80210C30: nop

    TRACE_RETURN()
    return;
    // 0x80210C30: nop

;}
RECOMP_FUNC void func_80211A54_699454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211A54: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80211A58: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x80211A5C: mtc1        $a1, $f28
    ctx->f28.u32l = ctx->r5;
    // 0x80211A60: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x80211A64: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x80211A68: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80211A6C: mtc1        $a3, $f30
    ctx->f30.u32l = ctx->r7;
    // 0x80211A70: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80211A74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211A78: sw          $s5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r21;
    // 0x80211A7C: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
    // 0x80211A80: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
    // 0x80211A84: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x80211A88: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x80211A8C: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x80211A90: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x80211A94: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x80211A98: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80211A9C: addiu       $a1, $a1, 0x1824
    ctx->r5 = ADD32(ctx->r5, 0X1824);
    // 0x80211AA0: jal         0x80034E08
    // 0x80211AA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80211AA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80211AA8: bne         $v0, $zero, L_80211AB8
    if (ctx->r2 != 0) {
        // 0x80211AAC: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_80211AB8;
    }
    // 0x80211AAC: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80211AB0: b           L_80211BD0
    // 0x80211AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211BD0;
    // 0x80211AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211AB8:
    // 0x80211AB8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211ABC: lwc1        $f20, 0x514C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X514C);
    // 0x80211AC0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80211AC4: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x80211AC8: addiu       $s2, $s2, 0x49C0
    ctx->r18 = ADD32(ctx->r18, 0X49C0);
    // 0x80211ACC: addiu       $a1, $a1, 0x10C4
    ctx->r5 = ADD32(ctx->r5, 0X10C4);
    // 0x80211AD0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80211AD4: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x80211AD8: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x80211ADC: addiu       $t7, $zero, 0x4E1
    ctx->r15 = ADD32(0, 0X4E1);
    // 0x80211AE0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80211AE4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80211AE8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80211AEC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80211AF0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80211AF4: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x80211AF8: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x80211AFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80211B00: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80211B04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80211B08: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80211B0C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x80211B10: jal         0x8000DBF0
    // 0x80211B14: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80211B14: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x80211B18: lui         $s3, 0x800
    ctx->r19 = S32(0X800 << 16);
    // 0x80211B1C: addiu       $s3, $s3, 0xBDC
    ctx->r19 = ADD32(ctx->r19, 0XBDC);
    // 0x80211B20: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80211B24: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x80211B28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211B2C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80211B30: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x80211B34: cvt.d.s     $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f22.d = CVT_D_S(ctx->f24.fl);
    // 0x80211B38: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80211B3C: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x80211B40: sw          $v0, 0x7C($s5)
    MEM_W(0X7C, ctx->r21) = ctx->r2;
    // 0x80211B44: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80211B48: addiu       $s1, $s5, 0x60
    ctx->r17 = ADD32(ctx->r21, 0X60);
    // 0x80211B4C: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_80211B50:
    // 0x80211B50: addiu       $t8, $s0, -0x1
    ctx->r24 = ADD32(ctx->r16, -0X1);
    // 0x80211B54: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80211B58: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x80211B5C: addiu       $t9, $zero, 0x300
    ctx->r25 = ADD32(0, 0X300);
    // 0x80211B60: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80211B64: addiu       $t0, $zero, 0x4E1
    ctx->r8 = ADD32(0, 0X4E1);
    // 0x80211B68: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80211B6C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80211B70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80211B74: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x80211B78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80211B7C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80211B80: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x80211B84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80211B88: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80211B8C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80211B90: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x80211B94: add.d       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f22.d + ctx->f8.d;
    // 0x80211B98: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80211B9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80211BA0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80211BA4: jal         0x8000DBF0
    // 0x80211BA8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80211BA8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80211BAC: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x80211BB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80211BB4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80211BB8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80211BBC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80211BC0: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80211BC4: bne         $s0, $s4, L_80211B50
    if (ctx->r16 != ctx->r20) {
        // 0x80211BC8: swc1        $f6, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
            goto L_80211B50;
    }
    // 0x80211BC8: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x80211BCC: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80211BD0:
    // 0x80211BD0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80211BD4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80211BD8: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x80211BDC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x80211BE0: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x80211BE4: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x80211BE8: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x80211BEC: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x80211BF0: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x80211BF4: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x80211BF8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x80211BFC: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C00: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x80211C04: jr          $ra
    // 0x80211C08: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80211C08: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80213058_69AA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213058: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021305C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80213060: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80213064: jr          $ra
    // 0x80213068: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    TRACE_RETURN()
    return;
    // 0x80213068: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80210760_698160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210760: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80210764: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80210768: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021076C: addiu       $a1, $a1, 0x6A4
    ctx->r5 = ADD32(ctx->r5, 0X6A4);
    // 0x80210770: jal         0x80034E08
    // 0x80210774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80210774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80210778: bne         $v0, $zero, L_80210788
    if (ctx->r2 != 0) {
        // 0x8021077C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80210788;
    }
    // 0x8021077C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210780: b           L_80210818
    // 0x80210784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80210818;
    // 0x80210784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80210788:
    // 0x80210788: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021078C: lwc1        $f2, 0x5108($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5108);
    // 0x80210790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210794: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80210798: addiu       $a1, $a1, 0x123C
    ctx->r5 = ADD32(ctx->r5, 0X123C);
    // 0x8021079C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802107A0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802107A4: addiu       $t6, $zero, 0x28E
    ctx->r14 = ADD32(0, 0X28E);
    // 0x802107A8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802107AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802107B0: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x802107B4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802107B8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802107BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802107C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802107C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802107C8: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x802107CC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802107D0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802107D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802107D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802107DC: jal         0x8000DBF0
    // 0x802107E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802107E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802107E4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x802107E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802107EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802107F0: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802107F4: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x802107F8: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x802107FC: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80210800: jal         0x80011A38
    // 0x80210804: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x80210804: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_2:
    // 0x80210808: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8021080C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80210810: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x80210814: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80210818:
    // 0x80210818: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021081C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80210820: jr          $ra
    // 0x80210824: nop

    TRACE_RETURN()
    return;
    // 0x80210824: nop

;}
RECOMP_FUNC void func_80210540_697F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210540: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80210544: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80210548: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x8021054C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80210550: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80210554: jr          $ra
    // 0x80210558: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80210558: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80212C68_69A668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212C68: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80212C6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80212C70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80212C74: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212C78: bgez        $t6, L_80212C90
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80212C7C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80212C90;
    }
    // 0x80212C7C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212C80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80212C84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212C88: nop

    // 0x80212C8C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80212C90:
    // 0x80212C90: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80212C94: swc1        $f0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f0.u32l;
    // 0x80212C98: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80212C9C: nop

    // 0x80212CA0: bc1fl       L_80212CBC
    if (!c1cs) {
        // 0x80212CA4: lwc1        $f10, 0x44($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
            goto L_80212CBC;
    }
    goto skip_0;
    // 0x80212CA4: lwc1        $f10, 0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
    skip_0:
    // 0x80212CA8: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80212CAC: sub.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80212CB0: b           L_80212CC0
    // 0x80212CB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212CC0;
    // 0x80212CB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212CB8: lwc1        $f10, 0x44($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X44);
L_80212CBC:
    // 0x80212CBC: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
L_80212CC0:
    // 0x80212CC0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212CC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212CC8: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x80212CCC: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80212CD0: jr          $ra
    // 0x80212CD4: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80212CD4: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80212CD8_69A6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212CD8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80212CDC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80212CE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80212CE4: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212CE8: bgez        $t6, L_80212D00
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80212CEC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80212D00;
    }
    // 0x80212CEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212CF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80212CF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80212CF8: nop

    // 0x80212CFC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80212D00:
    // 0x80212D00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212D04: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x80212D08: jr          $ra
    // 0x80212D0C: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80212D0C: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80212B30_69A530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212B30: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212B34: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212B38: jr          $ra
    // 0x80212B3C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80212B3C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80212EBC_69A8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212EBC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80212EC0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80212EC4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212EC8: blezl       $t6, L_80212F00
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80212ECC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80212F00;
    }
    goto skip_0;
    // 0x80212ECC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80212ED0: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80212ED4: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80212ED8: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80212EDC: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80212EE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212EE4: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80212EE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80212EEC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80212EF0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80212EF4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80212EF8: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x80212EFC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80212F00:
    // 0x80212F00: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212F04: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80212F08: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80212F0C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212F10: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
    // 0x80212F14: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80212F18: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80212F1C: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x80212F20: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80212F24: jr          $ra
    // 0x80212F28: swc1        $f18, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80212F28: swc1        $f18, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_802143D0_69BDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802143D0: jr          $ra
    // 0x802143D4: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
    TRACE_RETURN()
    return;
    // 0x802143D4: lhu         $v0, 0x74($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X74);
;}
RECOMP_FUNC void func_802110E8_698AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802110E8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802110EC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802110F0: addiu       $t6, $t6, 0x47A0
    ctx->r14 = ADD32(ctx->r14, 0X47A0);
    // 0x802110F4: jr          $ra
    // 0x802110F8: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802110F8: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80212038_699A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212038: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021203C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80212040: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80212044: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80212048: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021204C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80212050: addiu       $a1, $a1, 0x1C30
    ctx->r5 = ADD32(ctx->r5, 0X1C30);
    // 0x80212054: jal         0x80034E08
    // 0x80212058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80212058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021205C: bne         $v0, $zero, L_8021206C
    if (ctx->r2 != 0) {
        // 0x80212060: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021206C;
    }
    // 0x80212060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80212064: b           L_802120F8
    // 0x80212068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802120F8;
    // 0x80212068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021206C:
    // 0x8021206C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212070: lwc1        $f0, 0x5160($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5160);
    // 0x80212074: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80212078: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021207C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80212080: addiu       $a1, $a1, 0x1F90
    ctx->r5 = ADD32(ctx->r5, 0X1F90);
    // 0x80212084: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80212088: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8021208C: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x80212090: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80212094: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x80212098: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021209C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802120A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802120A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802120A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802120AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802120B0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802120B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802120B8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802120BC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802120C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802120C4: jal         0x8000DBF0
    // 0x802120C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802120C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802120CC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802120D0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802120D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802120D8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802120DC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x802120E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802120E4: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x802120E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802120EC: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x802120F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802120F4: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
L_802120F8:
    // 0x802120F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802120FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80212100: jr          $ra
    // 0x80212104: nop

    TRACE_RETURN()
    return;
    // 0x80212104: nop

;}
RECOMP_FUNC void func_80210B08_698508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B08: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80210B0C: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80210B10: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210B14: lwc1        $f16, 0x6C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80210B18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210B1C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80210B20: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210B24: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80210B28: swc1        $f8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f8.u32l;
    // 0x80210B2C: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80210B30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210B34: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x80210B38: swc1        $f8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f8.u32l;
    // 0x80210B3C: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x80210B40: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210B44: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x80210B48: lwc1        $f18, 0x64($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210B4C: jr          $ra
    // 0x80210B50: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80210B50: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80212108_699B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021210C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212110: jal         0x80034EF8
    // 0x80212114: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80212114: nop

    after_0:
    // 0x80212118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021211C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80212124: jr          $ra
    // 0x80212128: nop

    TRACE_RETURN()
    return;
    // 0x80212128: nop

;}
RECOMP_FUNC void func_8021373C_69B13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021373C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213744: jal         0x8020FAC0
    // 0x80213748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8020FAC0_6974C0(rdram, ctx);
        goto after_0;
    // 0x80213748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021374C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80213750: jal         0x8003521C
    // 0x80213754: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80213754: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_1:
    // 0x80213758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021375C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213760: jr          $ra
    // 0x80213764: nop

    TRACE_RETURN()
    return;
    // 0x80213764: nop

;}
RECOMP_FUNC void func_8021055C_697F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021055C: jr          $ra
    // 0x80210560: nop

    TRACE_RETURN()
    return;
    // 0x80210560: nop

    // 0x80210564: jr          $ra
    // 0x80210568: nop

    TRACE_RETURN()
    return;
    // 0x80210568: nop

;}
RECOMP_FUNC void func_802116E4_6990E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802116E4: jr          $ra
    // 0x802116E8: nop

    TRACE_RETURN()
    return;
    // 0x802116E8: nop

;}
RECOMP_FUNC void func_80210F80_698980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F80: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210F84: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210F88: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80210F8C: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x80210F90: swc1        $f14, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f14.u32l;
    // 0x80210F94: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210F98: jr          $ra
    // 0x80210F9C: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80210F9C: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80211050_698A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211050: jr          $ra
    // 0x80211054: nop

    TRACE_RETURN()
    return;
    // 0x80211054: nop

;}
RECOMP_FUNC void func_80213580_69AF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213580: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80213584: jr          $ra
    // 0x80213588: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80213588: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80210FC0_6989C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210FC0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210FC4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210FC8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80210FCC: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80210FD0: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x80210FD4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210FD8: jr          $ra
    // 0x80210FDC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80210FDC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80210618_698018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210618: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021061C: jr          $ra
    // 0x80210620: sh          $a1, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80210620: sh          $a1, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80210988_698388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210988: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021098C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80210990: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80210994: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80210998: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021099C: addiu       $a1, $a1, 0x934
    ctx->r5 = ADD32(ctx->r5, 0X934);
    // 0x802109A0: jal         0x80034E08
    // 0x802109A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802109A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802109A8: bne         $v0, $zero, L_802109B8
    if (ctx->r2 != 0) {
        // 0x802109AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802109B8;
    }
    // 0x802109AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802109B0: b           L_80210A40
    // 0x802109B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80210A40;
    // 0x802109B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802109B8:
    // 0x802109B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802109BC: lwc1        $f2, 0x510C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X510C);
    // 0x802109C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802109C4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x802109C8: lhu         $t6, 0x52($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X52);
    // 0x802109CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802109D0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802109D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802109D8: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x802109DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802109E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802109E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802109E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802109EC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802109F0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802109F4: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802109F8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802109FC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80210A00: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80210A04: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80210A08: jal         0x8000DBF0
    // 0x80210A0C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80210A0C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_1:
    // 0x80210A10: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80210A14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210A18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210A1C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80210A20: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80210A24: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x80210A28: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80210A2C: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x80210A30: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80210A34: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80210A38: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80210A3C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80210A40:
    // 0x80210A40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80210A44: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80210A48: jr          $ra
    // 0x80210A4C: nop

    TRACE_RETURN()
    return;
    // 0x80210A4C: nop

;}
RECOMP_FUNC void func_802143A0_69BDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802143A0: bne         $a1, $zero, L_802143B8
    if (ctx->r5 != 0) {
        // 0x802143A4: sh          $a1, 0x74($a0)
        MEM_H(0X74, ctx->r4) = ctx->r5;
            goto L_802143B8;
    }
    // 0x802143A4: sh          $a1, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r5;
    // 0x802143A8: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x802143AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802143B0: jr          $ra
    // 0x802143B4: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802143B4: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
L_802143B8:
    // 0x802143B8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x802143BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802143C0: nop

    // 0x802143C4: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
    // 0x802143C8: jr          $ra
    // 0x802143CC: nop

    TRACE_RETURN()
    return;
    // 0x802143CC: nop

;}
RECOMP_FUNC void func_80210A50_698450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A58: jal         0x80034EF8
    // 0x80210A5C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80210A5C: nop

    after_0:
    // 0x80210A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210A6C: jr          $ra
    // 0x80210A70: nop

    TRACE_RETURN()
    return;
    // 0x80210A70: nop

;}
RECOMP_FUNC void func_80213C08_69B608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213C0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213C10: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213C14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80213C18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80213C1C: addiu       $a1, $a1, 0x3768
    ctx->r5 = ADD32(ctx->r5, 0X3768);
    // 0x80213C20: jal         0x80034E08
    // 0x80213C24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213C24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80213C28: bne         $v0, $zero, L_80213C38
    if (ctx->r2 != 0) {
        // 0x80213C2C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80213C38;
    }
    // 0x80213C2C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80213C30: b           L_80213DDC
    // 0x80213C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213DDC;
    // 0x80213C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213C38:
    // 0x80213C38: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213C3C: jal         0x80013AC4
    // 0x80213C40: addiu       $a0, $a0, 0x4AE4
    ctx->r4 = ADD32(ctx->r4, 0X4AE4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_1;
    // 0x80213C40: addiu       $a0, $a0, 0x4AE4
    ctx->r4 = ADD32(ctx->r4, 0X4AE4);
    after_1:
    // 0x80213C44: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80213C48: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80213C4C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80213C50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80213C54: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80213C58: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x80213C5C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80213C60: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80213C64: jal         0x8001B6A4
    // 0x80213C68: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_2;
    // 0x80213C68: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x80213C6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213C70: jal         0x8001381C
    // 0x80213C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001381C_1441C(rdram, ctx);
        goto after_3;
    // 0x80213C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80213C78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80213C7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80213C80: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80213C84: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80213C88: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80213C8C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80213C90: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80213C94: jal         0x800133E0
    // 0x80213C98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800133E0_13FE0(rdram, ctx);
        goto after_4;
    // 0x80213C98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80213C9C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80213CA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80213CA4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80213CA8: jal         0x80013400
    // 0x80213CAC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_5;
    // 0x80213CAC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x80213CB0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80213CB4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80213CB8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80213CBC: jal         0x80013484
    // 0x80213CC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013484_14084(rdram, ctx);
        goto after_6;
    // 0x80213CC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x80213CC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213CC8: jal         0x80012940
    // 0x80213CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_7;
    // 0x80213CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80213CD0: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80213CD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213CD8: jal         0x80012500
    // 0x80213CDC: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    func_80012500_13100(rdram, ctx);
        goto after_8;
    // 0x80213CDC: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    after_8:
    // 0x80213CE0: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80213CE4: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x80213CE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80213CEC: jal         0x800127B8
    // 0x80213CF0: lui         $a3, 0x4350
    ctx->r7 = S32(0X4350 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_9;
    // 0x80213CF0: lui         $a3, 0x4350
    ctx->r7 = S32(0X4350 << 16);
    after_9:
    // 0x80213CF4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80213CF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80213CFC: lui         $a2, 0xC140
    ctx->r6 = S32(0XC140 << 16);
    // 0x80213D00: jal         0x80012818
    // 0x80213D04: lui         $a3, 0x4254
    ctx->r7 = S32(0X4254 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_10;
    // 0x80213D04: lui         $a3, 0x4254
    ctx->r7 = S32(0X4254 << 16);
    after_10:
    // 0x80213D08: jal         0x80012938
    // 0x80213D0C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_80012938_13538(rdram, ctx);
        goto after_11;
    // 0x80213D0C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_11:
    // 0x80213D10: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80213D14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80213D18: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x80213D1C: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x80213D20: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x80213D24: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x80213D28: sh          $t8, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r24;
    // 0x80213D2C: sh          $t9, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r25;
    // 0x80213D30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213D34: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80213D38: jal         0x80012940
    // 0x80213D3C: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    func_80012940_13540(rdram, ctx);
        goto after_12;
    // 0x80213D3C: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    after_12:
    // 0x80213D40: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x80213D44: jal         0x80012938
    // 0x80213D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80012938_13538(rdram, ctx);
        goto after_13;
    // 0x80213D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x80213D4C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80213D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80213D54: addiu       $t0, $zero, 0x140
    ctx->r8 = ADD32(0, 0X140);
    // 0x80213D58: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x80213D5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80213D60: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x80213D64: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x80213D68: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x80213D6C: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x80213D70: sb          $t2, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r10;
    // 0x80213D74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213D78: jal         0x80214408
    // 0x80213D7C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    func_80214408_69BE08(rdram, ctx);
        goto after_14;
    // 0x80213D7C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    after_14:
    // 0x80213D80: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80213D84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213D88: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x80213D8C: lui         $a2, 0x426C
    ctx->r6 = S32(0X426C << 16);
    // 0x80213D90: jal         0x802144FC
    // 0x80213D94: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    func_802144FC_69BEFC(rdram, ctx);
        goto after_15;
    // 0x80213D94: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_15:
    // 0x80213D98: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80213D9C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80213DA0: jal         0x8021451C
    // 0x80213DA4: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    func_8021451C_69BF1C(rdram, ctx);
        goto after_16;
    // 0x80213DA4: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    after_16:
    // 0x80213DA8: jal         0x80214408
    // 0x80213DAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80214408_69BE08(rdram, ctx);
        goto after_17;
    // 0x80213DAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80213DB0: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80213DB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213DB8: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x80213DBC: lui         $a2, 0x426C
    ctx->r6 = S32(0X426C << 16);
    // 0x80213DC0: jal         0x802144FC
    // 0x80213DC4: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    func_802144FC_69BEFC(rdram, ctx);
        goto after_18;
    // 0x80213DC4: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_18:
    // 0x80213DC8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80213DCC: addiu       $a1, $a1, 0x120
    ctx->r5 = ADD32(ctx->r5, 0X120);
    // 0x80213DD0: jal         0x8021451C
    // 0x80213DD4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    func_8021451C_69BF1C(rdram, ctx);
        goto after_19;
    // 0x80213DD4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    after_19:
    // 0x80213DD8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80213DDC:
    // 0x80213DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213DE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80213DE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80213DE8: jr          $ra
    // 0x80213DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80213DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80213044_69AA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213044: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80213048: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021304C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80213050: jr          $ra
    // 0x80213054: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    TRACE_RETURN()
    return;
    // 0x80213054: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80213430_69AE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213438: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8021343C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213440: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80213444: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x80213448: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021344C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80213450: addiu       $a1, $a1, 0x31F0
    ctx->r5 = ADD32(ctx->r5, 0X31F0);
    // 0x80213454: jalr        $t9
    // 0x80213458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80213458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021345C: bne         $v0, $zero, L_8021346C
    if (ctx->r2 != 0) {
        // 0x80213460: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021346C;
    }
    // 0x80213460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213464: b           L_80213540
    // 0x80213468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213540;
    // 0x80213468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021346C:
    // 0x8021346C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80213470: addiu       $t9, $t9, 0x6A28
    ctx->r25 = ADD32(ctx->r25, 0X6A28);
    // 0x80213474: jalr        $t9
    // 0x80213478: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80213478: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8021347C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80213480: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80213484: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80213488: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x8021348C: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80213490: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80213494: lw          $t0, 0x3014($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3014);
    // 0x80213498: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8021349C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802134A0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802134A4: sb          $t6, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r14;
    // 0x802134A8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x802134AC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802134B0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802134B4: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x802134B8: lw          $t4, 0x3014($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3014);
    // 0x802134BC: sb          $t1, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r9;
    // 0x802134C0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802134C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x802134C8: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x802134CC: lw          $t8, 0x3014($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3014);
    // 0x802134D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802134D4: sb          $t5, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r13;
    // 0x802134D8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802134DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802134E0: addu        $t0, $t6, $v1
    ctx->r8 = ADD32(ctx->r14, ctx->r3);
    // 0x802134E4: lw          $t2, 0x3014($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X3014);
    // 0x802134E8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802134EC: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
    // 0x802134F0: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    // 0x802134F4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x802134F8: sw          $t3, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r11;
    // 0x802134FC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80213500: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x80213504: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80213508: beq         $a1, $zero, L_80213530
    if (ctx->r5 == 0) {
        // 0x8021350C: sw          $t4, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->r12;
            goto L_80213530;
    }
    // 0x8021350C: sw          $t4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r12;
    // 0x80213510: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x80213514: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x80213518: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8021351C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80213520: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80213524: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80213528: b           L_8021353C
    // 0x8021352C: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
        goto L_8021353C;
    // 0x8021352C: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
L_80213530:
    // 0x80213530: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80213534: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80213538: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
L_8021353C:
    // 0x8021353C: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
L_80213540:
    // 0x80213540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213548: jr          $ra
    // 0x8021354C: nop

    TRACE_RETURN()
    return;
    // 0x8021354C: nop

    // 0x80213550: jr          $ra
    // 0x80213554: nop

    TRACE_RETURN()
    return;
    // 0x80213554: nop

;}
RECOMP_FUNC void func_80211824_699224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211824: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80211828: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021182C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80211830: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80211834: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80211838: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8021183C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80211840: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80211844: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80211848: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021184C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211850: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x80211854: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211858: lwc1        $f4, 0x5148($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5148);
    // 0x8021185C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80211860: addiu       $s3, $a0, 0x5C
    ctx->r19 = ADD32(ctx->r4, 0X5C);
    // 0x80211864: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80211868: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021186C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80211870: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80211874: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80211878: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
L_8021187C:
    // 0x8021187C: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x80211880: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80211884: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80211888: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021188C: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x80211890: jal         0x8001B5AC
    // 0x80211894: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80211894: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    after_0:
    // 0x80211898: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x8021189C: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802118A0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x802118A4: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802118A8: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x802118AC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802118B0: nop

    // 0x802118B4: bc1f        L_802118D4
    if (!c1cs) {
        // 0x802118B8: nop
    
            goto L_802118D4;
    }
    // 0x802118B8: nop

    // 0x802118BC: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    // 0x802118C0: bnel        $s4, $t7, L_802118D4
    if (ctx->r20 != ctx->r15) {
        // 0x802118C4: swc1        $f2, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
            goto L_802118D4;
    }
    goto skip_0;
    // 0x802118C4: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    skip_0:
    // 0x802118C8: b           L_802118D4
    // 0x802118CC: swc1        $f22, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f22.u32l;
        goto L_802118D4;
    // 0x802118CC: swc1        $f22, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f22.u32l;
    // 0x802118D0: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
L_802118D4:
    // 0x802118D4: bne         $at, $zero, L_8021187C
    if (ctx->r1 != 0) {
        // 0x802118D8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021187C;
    }
    // 0x802118D8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802118DC: lw          $t8, 0x20($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X20);
    // 0x802118E0: addiu       $t0, $s3, 0x38
    ctx->r8 = ADD32(ctx->r19, 0X38);
    // 0x802118E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802118E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802118EC: or          $v0, $t0, $at
    ctx->r2 = ctx->r8 | ctx->r1;
    // 0x802118F0: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x802118F4: addu        $s1, $s3, $t9
    ctx->r17 = ADD32(ctx->r19, ctx->r25);
    // 0x802118F8: sw          $v0, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r2;
    // 0x802118FC: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x80211900: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80211904: addiu       $t7, $t7, 0x49C0
    ctx->r15 = ADD32(ctx->r15, 0X49C0);
    // 0x80211908: sw          $v0, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r2;
    // 0x8021190C: lw          $t3, 0x24($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X24);
    // 0x80211910: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x80211914: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80211918: sw          $v0, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r2;
    // 0x8021191C: lw          $t4, 0x28($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X28);
    // 0x80211920: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80211924: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x80211928: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x8021192C: lw          $t5, 0x2C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X2C);
    // 0x80211930: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x80211934: lui         $t9, 0x802
    ctx->r25 = S32(0X802 << 16);
    // 0x80211938: sw          $v0, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r2;
    // 0x8021193C: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80211940: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80211944: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80211948: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8021194C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80211950: addiu       $t9, $t9, 0x58D0
    ctx->r25 = ADD32(ctx->r25, 0X58D0);
    // 0x80211954: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80211958: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8021195C: lui         $t3, 0x701
    ctx->r11 = S32(0X701 << 16);
    // 0x80211960: ori         $t3, $t3, 0x8050
    ctx->r11 = ctx->r11 | 0X8050;
    // 0x80211964: addiu       $v1, $a2, 0x8
    ctx->r3 = ADD32(ctx->r6, 0X8);
    // 0x80211968: lui         $t2, 0xF510
    ctx->r10 = S32(0XF510 << 16);
    // 0x8021196C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80211970: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x80211974: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80211978: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x8021197C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80211980: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80211984: lui         $t6, 0x77F
    ctx->r14 = S32(0X77F << 16);
    // 0x80211988: ori         $t6, $t6, 0xF100
    ctx->r14 = ctx->r14 | 0XF100;
    // 0x8021198C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80211990: lui         $t5, 0xF300
    ctx->r13 = S32(0XF300 << 16);
    // 0x80211994: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80211998: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021199C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802119A0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x802119A4: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x802119A8: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x802119AC: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x802119B0: ori         $t7, $t7, 0x1000
    ctx->r15 = ctx->r15 | 0X1000;
    // 0x802119B4: ori         $t8, $t8, 0x8050
    ctx->r24 = ctx->r24 | 0X8050;
    // 0x802119B8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x802119BC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802119C0: lw          $t9, 0x34($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X34);
    // 0x802119C4: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x802119C8: lui         $t5, 0x7
    ctx->r13 = S32(0X7 << 16);
    // 0x802119CC: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x802119D0: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x802119D4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x802119D8: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x802119DC: ori         $t5, $t5, 0xC0FC
    ctx->r13 = ctx->r13 | 0XC0FC;
    // 0x802119E0: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x802119E4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x802119E8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x802119EC: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x802119F0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x802119F4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x802119F8: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x802119FC: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x80211A00: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80211A04: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x80211A08: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x80211A0C: subu        $t8, $a2, $v0
    ctx->r24 = SUB32(ctx->r6, ctx->r2);
    // 0x80211A10: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x80211A14: and         $a1, $t9, $a2
    ctx->r5 = ctx->r25 & ctx->r6;
    // 0x80211A18: jal         0x80040620
    // 0x80211A1C: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80211A1C: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    after_1:
    // 0x80211A20: lw          $t2, 0x34($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X34);
    // 0x80211A24: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80211A28: sw          $t3, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r11;
    // 0x80211A2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80211A30: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80211A34: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80211A38: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80211A3C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80211A40: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80211A44: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80211A48: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80211A4C: jr          $ra
    // 0x80211A50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80211A50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80211FC4_6999C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211FC4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80211FC8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80211FCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80211FD0: bgez        $t6, L_80211FE8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80211FD4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80211FE8;
    }
    // 0x80211FD4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211FD8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80211FDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211FE0: nop

    // 0x80211FE4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80211FE8:
    // 0x80211FE8: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80211FEC: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80211FF0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80211FF4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80211FF8: nop

    // 0x80211FFC: bc1fl       L_80212020
    if (!c1cs) {
        // 0x80212000: lwc1        $f18, 0x10($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80212020;
    }
    goto skip_0;
    // 0x80212000: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x80212004: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212008: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021200C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212010: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80212014: b           L_80212028
    // 0x80212018: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212028;
    // 0x80212018: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021201C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
L_80212020:
    // 0x80212020: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212024: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_80212028:
    // 0x80212028: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021202C: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80212030: jr          $ra
    // 0x80212034: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80212034: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80210C58_698658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210C5C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210C60: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80210C64: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    // 0x80210C68: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x80210C6C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210C70: jr          $ra
    // 0x80210C74: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80210C74: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80211740_699140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211740: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80211744: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80211748: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021174C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80211750: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211754: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80211758: addiu       $a1, $a1, 0x1444
    ctx->r5 = ADD32(ctx->r5, 0X1444);
    // 0x8021175C: jal         0x80034E08
    // 0x80211760: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80211760: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80211764: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80211768: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021176C: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80211770: bne         $v0, $zero, L_80211780
    if (ctx->r2 != 0) {
        // 0x80211774: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80211780;
    }
    // 0x80211774: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80211778: b           L_802117F0
    // 0x8021177C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802117F0;
    // 0x8021177C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211780:
    // 0x80211780: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211784: lwc1        $f0, 0x5144($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5144);
    // 0x80211788: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x8021178C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80211790: swc1        $f2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f2.u32l;
    // 0x80211794: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80211798: addiu       $a1, $a1, 0x93C
    ctx->r5 = ADD32(ctx->r5, 0X93C);
    // 0x8021179C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802117A0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802117A4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802117A8: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x802117AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802117B0: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x802117B4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802117B8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802117BC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802117C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802117C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802117C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802117CC: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x802117D0: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x802117D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802117D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802117DC: jal         0x8000DBF0
    // 0x802117E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802117E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802117E4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802117E8: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x802117EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802117F0:
    // 0x802117F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802117F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802117F8: jr          $ra
    // 0x802117FC: nop

    TRACE_RETURN()
    return;
    // 0x802117FC: nop

;}
RECOMP_FUNC void func_80210C84_698684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C84: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80210C88: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80210C8C: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210C90: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80210C94: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210C98: jr          $ra
    // 0x80210C9C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80210C9C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80211C30_699630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211C30: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80211C34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211C38: lwc1        $f0, 0x5150($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5150);
    // 0x80211C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211C40: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80211C44: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x80211C48: lw          $v1, 0x88($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X88);
    // 0x80211C4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211C50: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x80211C54: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x80211C58: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80211C5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211C60: addiu       $t1, $a0, 0x94
    ctx->r9 = ADD32(ctx->r4, 0X94);
    // 0x80211C64: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80211C68: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    // 0x80211C6C: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x80211C70: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80211C74: jal         0x8001B5AC
    // 0x80211C78: sw          $a1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80211C78: sw          $a1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r5;
    after_0:
    // 0x80211C7C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x80211C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80211C84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211C88: addiu       $a0, $a1, 0x5C
    ctx->r4 = ADD32(ctx->r5, 0X5C);
    // 0x80211C8C: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80211C90: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80211C94: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80211C98: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80211C9C: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x80211CA0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80211CA4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x80211CA8: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80211CAC: addiu       $t4, $t4, 0x49C0
    ctx->r12 = ADD32(ctx->r12, 0X49C0);
    // 0x80211CB0: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x80211CB4: bc1f        L_80211CDC
    if (!c1cs) {
        // 0x80211CB8: ori         $t5, $t5, 0x1402
        ctx->r13 = ctx->r13 | 0X1402;
            goto L_80211CDC;
    }
    // 0x80211CB8: ori         $t5, $t5, 0x1402
    ctx->r13 = ctx->r13 | 0X1402;
    // 0x80211CBC: lbu         $t7, 0x5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5);
    // 0x80211CC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211CC4: bnel        $t7, $at, L_80211CDC
    if (ctx->r15 != ctx->r1) {
        // 0x80211CC8: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_80211CDC;
    }
    goto skip_0;
    // 0x80211CC8: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_0:
    // 0x80211CCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80211CD0: b           L_80211CDC
    // 0x80211CD4: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
        goto L_80211CDC;
    // 0x80211CD4: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
    // 0x80211CD8: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
L_80211CDC:
    // 0x80211CDC: lwc1        $f12, 0x14($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80211CE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211CE4: ldc1        $f18, 0x5158($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X5158);
    // 0x80211CE8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80211CEC: addiu       $v0, $t1, 0x8
    ctx->r2 = ADD32(ctx->r9, 0X8);
    // 0x80211CF0: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80211CF4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211CF8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80211CFC: or          $t8, $t1, $at
    ctx->r24 = ctx->r9 | ctx->r1;
    // 0x80211D00: bc1f        L_80211D74
    if (!c1cs) {
        // 0x80211D04: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80211D74;
    }
    // 0x80211D04: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211D08: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80211D0C: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211D10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80211D14: nop

    // 0x80211D18: bc1fl       L_80211D30
    if (!c1cs) {
        // 0x80211D1C: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80211D30;
    }
    goto skip_1;
    // 0x80211D1C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x80211D20: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80211D24: b           L_80211D30
    // 0x80211D28: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_80211D30;
    // 0x80211D28: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x80211D2C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_80211D30:
    // 0x80211D30: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80211D34: nop

    // 0x80211D38: bc1fl       L_80211D54
    if (!c1cs) {
        // 0x80211D3C: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_80211D54;
    }
    goto skip_2;
    // 0x80211D3C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x80211D40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80211D44: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x80211D48: b           L_80211D74
    // 0x80211D4C: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
        goto L_80211D74;
    // 0x80211D4C: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x80211D50: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_80211D54:
    // 0x80211D54: nop

    // 0x80211D58: bc1fl       L_80211D70
    if (!c1cs) {
        // 0x80211D5C: add.s       $f10, $f0, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80211D70;
    }
    goto skip_3;
    // 0x80211D5C: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x80211D60: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80211D64: b           L_80211D74
    // 0x80211D68: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
        goto L_80211D74;
    // 0x80211D68: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x80211D6C: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
L_80211D70:
    // 0x80211D70: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
L_80211D74:
    // 0x80211D74: lw          $t9, 0x2C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2C);
    // 0x80211D78: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80211D7C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211D80: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80211D84: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x80211D88: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x80211D8C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80211D90: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80211D94: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x80211D98: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80211D9C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80211DA0: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x80211DA4: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x80211DA8: addiu       $t8, $t8, 0x78D0
    ctx->r24 = ADD32(ctx->r24, 0X78D0);
    // 0x80211DAC: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80211DB0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80211DB4: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x80211DB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211DBC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80211DC0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211DC4: lui         $t3, 0x701
    ctx->r11 = S32(0X701 << 16);
    // 0x80211DC8: ori         $t3, $t3, 0x4060
    ctx->r11 = ctx->r11 | 0X4060;
    // 0x80211DCC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80211DD0: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x80211DD4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80211DD8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211DDC: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x80211DE0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80211DE4: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80211DE8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80211DEC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211DF0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80211DF4: lui         $t6, 0x77F
    ctx->r14 = S32(0X77F << 16);
    // 0x80211DF8: ori         $t6, $t6, 0xF080
    ctx->r14 = ctx->r14 | 0XF080;
    // 0x80211DFC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80211E00: lui         $t5, 0xF300
    ctx->r13 = S32(0XF300 << 16);
    // 0x80211E04: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80211E08: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x80211E0C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211E10: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80211E14: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80211E18: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80211E1C: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80211E20: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x80211E24: ori         $t7, $t7, 0x2000
    ctx->r15 = ctx->r15 | 0X2000;
    // 0x80211E28: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x80211E2C: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x80211E30: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80211E34: lw          $t9, 0x30($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X30);
    // 0x80211E38: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211E3C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80211E40: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211E44: bgez        $t9, L_80211E54
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211E48: sra         $t3, $t9, 1
        ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
            goto L_80211E54;
    }
    // 0x80211E48: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80211E4C: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x80211E50: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_80211E54:
    // 0x80211E54: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80211E58: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80211E5C: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x80211E60: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x80211E64: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80211E68: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80211E6C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80211E70: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x80211E74: lui         $t7, 0xBB00
    ctx->r15 = S32(0XBB00 << 16);
    // 0x80211E78: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x80211E7C: ori         $t8, $t8, 0x800
    ctx->r24 = ctx->r24 | 0X800;
    // 0x80211E80: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x80211E84: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211E88: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80211E8C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80211E90: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80211E94: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x80211E98: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80211E9C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80211EA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80211EA4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x80211EA8: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211EAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80211EB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211EB4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80211EB8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80211EBC: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x80211EC0: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x80211EC4: nop

    // 0x80211EC8: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80211ECC: beql        $v1, $zero, L_80211F1C
    if (ctx->r3 == 0) {
        // 0x80211ED0: mfc1        $v1, $f18
        ctx->r3 = (int32_t)ctx->f18.u32l;
            goto L_80211F1C;
    }
    goto skip_4;
    // 0x80211ED0: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x80211ED4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80211ED8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80211EDC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80211EE0: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x80211EE4: nop

    // 0x80211EE8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80211EEC: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x80211EF0: nop

    // 0x80211EF4: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80211EF8: bne         $v1, $zero, L_80211F10
    if (ctx->r3 != 0) {
        // 0x80211EFC: nop
    
            goto L_80211F10;
    }
    // 0x80211EFC: nop

    // 0x80211F00: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x80211F04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211F08: b           L_80211F28
    // 0x80211F0C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_80211F28;
    // 0x80211F0C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_80211F10:
    // 0x80211F10: b           L_80211F28
    // 0x80211F14: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_80211F28;
    // 0x80211F14: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80211F18: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
L_80211F1C:
    // 0x80211F1C: nop

    // 0x80211F20: bltz        $v1, L_80211F10
    if (SIGNED(ctx->r3) < 0) {
        // 0x80211F24: nop
    
            goto L_80211F10;
    }
    // 0x80211F24: nop

L_80211F28:
    // 0x80211F28: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x80211F2C: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x80211F30: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x80211F34: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x80211F38: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x80211F3C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80211F40: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80211F44: or          $t3, $t9, $t4
    ctx->r11 = ctx->r25 | ctx->r12;
    // 0x80211F48: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x80211F4C: lui         $t4, 0xFC12
    ctx->r12 = S32(0XFC12 << 16);
    // 0x80211F50: ori         $t4, $t4, 0x7E05
    ctx->r12 = ctx->r12 | 0X7E05;
    // 0x80211F54: addiu       $t5, $zero, -0xC08
    ctx->r13 = ADD32(0, -0XC08);
    // 0x80211F58: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x80211F5C: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x80211F60: lui         $t7, 0xC19
    ctx->r15 = S32(0XC19 << 16);
    // 0x80211F64: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x80211F68: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x80211F6C: ori         $t7, $t7, 0x3078
    ctx->r15 = ctx->r15 | 0X3078;
    // 0x80211F70: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x80211F74: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80211F78: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80211F7C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80211F80: ori         $t8, $t8, 0x2
    ctx->r24 = ctx->r24 | 0X2;
    // 0x80211F84: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80211F88: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80211F8C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80211F90: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80211F94: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80211F98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80211F9C: lw          $t3, 0x30($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X30);
    // 0x80211FA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80211FA4: sw          $t4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r12;
    // 0x80211FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211FAC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80211FB0: jr          $ra
    // 0x80211FB4: nop

    TRACE_RETURN()
    return;
    // 0x80211FB4: nop

;}
RECOMP_FUNC void func_80211420_698E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211428: jal         0x80034EF8
    // 0x8021142C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8021142C: nop

    after_0:
    // 0x80211430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021143C: jr          $ra
    // 0x80211440: nop

    TRACE_RETURN()
    return;
    // 0x80211440: nop

;}
RECOMP_FUNC void func_801CBC10_69D380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC10: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x801CBC14: beq         $t6, $zero, L_801CBC34
    if (ctx->r14 == 0) {
        // 0x801CBC18: andi        $t1, $a1, 0x2
        ctx->r9 = ctx->r5 & 0X2;
            goto L_801CBC34;
    }
    // 0x801CBC18: andi        $t1, $a1, 0x2
    ctx->r9 = ctx->r5 & 0X2;
    // 0x801CBC1C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CBC20: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x801CBC24: lhu         $t7, 0xE($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XE);
    // 0x801CBC28: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x801CBC2C: b           L_801CBC48
    // 0x801CBC30: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
        goto L_801CBC48;
    // 0x801CBC30: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
L_801CBC34:
    // 0x801CBC34: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x801CBC38: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x801CBC3C: lhu         $t9, 0xE($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XE);
    // 0x801CBC40: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x801CBC44: sh          $t0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r8;
L_801CBC48:
    // 0x801CBC48: beql        $t1, $zero, L_801CBC68
    if (ctx->r9 == 0) {
        // 0x801CBC4C: lw          $v1, 0x0($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X0);
            goto L_801CBC68;
    }
    goto skip_0;
    // 0x801CBC4C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x801CBC50: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x801CBC54: lhu         $t2, 0xE($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XE);
    // 0x801CBC58: ori         $t3, $t2, 0x10
    ctx->r11 = ctx->r10 | 0X10;
    // 0x801CBC5C: b           L_801CBC74
    // 0x801CBC60: sh          $t3, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r11;
        goto L_801CBC74;
    // 0x801CBC60: sh          $t3, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r11;
    // 0x801CBC64: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_801CBC68:
    // 0x801CBC68: lhu         $t4, 0xE($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XE);
    // 0x801CBC6C: andi        $t5, $t4, 0xFFEF
    ctx->r13 = ctx->r12 & 0XFFEF;
    // 0x801CBC70: sh          $t5, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r13;
L_801CBC74:
    // 0x801CBC74: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CBC78: jr          $ra
    // 0x801CBC7C: sb          $a2, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x801CBC7C: sb          $a2, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r6;
;}
RECOMP_FUNC void func_801CBA24_69D194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBA24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CBA28: jr          $ra
    // 0x801CBA2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CBA2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
