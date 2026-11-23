#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80210FE0_6989E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210FE0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210FE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210FE8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80210FEC: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80210FF0: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80210FF4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210FF8: nop

    // 0x80210FFC: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80211000: nop

    // 0x80211004: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80211008: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x8021100C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80211010: jr          $ra
    // 0x80211014: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80211014: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80213008_69AA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021300C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213010: jal         0x80034EF8
    // 0x80213014: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80213014: nop

    after_0:
    // 0x80213018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021301C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213024: jr          $ra
    // 0x80213028: nop

    TRACE_RETURN()
    return;
    // 0x80213028: nop

    // 0x8021302C: jr          $ra
    // 0x80213030: nop

    TRACE_RETURN()
    return;
    // 0x80213030: nop

    // 0x80213034: jr          $ra
    // 0x80213038: nop

    TRACE_RETURN()
    return;
    // 0x80213038: nop

    // 0x8021303C: jr          $ra
    // 0x80213040: nop

    TRACE_RETURN()
    return;
    // 0x80213040: nop

;}
RECOMP_FUNC void func_802144FC_69BEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802144FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214500: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80214504: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80214508: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    // 0x8021450C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x80214510: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80214514: jr          $ra
    // 0x80214518: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80214518: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802131F0_69ABF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802131F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802131F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802131F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802131FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80213200: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x80213204: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80213208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021320C: beq         $v1, $zero, L_80213234
    if (ctx->r3 == 0) {
        // 0x80213210: addiu       $v0, $a1, 0x5C
        ctx->r2 = ADD32(ctx->r5, 0X5C);
            goto L_80213234;
    }
    // 0x80213210: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x80213214: beq         $v1, $at, L_8021327C
    if (ctx->r3 == ctx->r1) {
        // 0x80213218: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8021327C;
    }
    // 0x80213218: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021321C: beq         $v1, $at, L_8021330C
    if (ctx->r3 == ctx->r1) {
        // 0x80213220: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8021330C;
    }
    // 0x80213220: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80213224: beql        $v1, $at, L_80213364
    if (ctx->r3 == ctx->r1) {
        // 0x80213228: addiu       $v0, $a1, 0x5C
        ctx->r2 = ADD32(ctx->r5, 0X5C);
            goto L_80213364;
    }
    goto skip_0;
    // 0x80213228: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    skip_0:
    // 0x8021322C: b           L_80213388
    // 0x80213230: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
        goto L_80213388;
    // 0x80213230: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
L_80213234:
    // 0x80213234: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80213238: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021323C: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80213240: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80213244: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80213248: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021324C: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80213250: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80213254: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80213258: nop

    // 0x8021325C: bc1fl       L_8021338C
    if (!c1cs) {
        // 0x80213260: cfc1        $t0, $FpcCsr
        ctx->r8 = get_cop1_cs();
            goto L_8021338C;
    }
    goto skip_1;
    // 0x80213260: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    skip_1:
    // 0x80213264: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80213268: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8021326C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80213270: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80213274: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80213278: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_8021327C:
    // 0x8021327C: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x80213280: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x80213284: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x80213288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021328C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80213290: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80213294: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80213298: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021329C: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x802132A0: bne         $a0, $at, L_802132B0
    if (ctx->r4 != ctx->r1) {
        // 0x802132A4: swc1        $f18, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
            goto L_802132B0;
    }
    // 0x802132A4: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x802132A8: b           L_8021330C
    // 0x802132AC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8021330C;
    // 0x802132AC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_802132B0:
    // 0x802132B0: beq         $v1, $zero, L_80213304
    if (ctx->r3 == 0) {
        // 0x802132B4: sw          $t2, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r10;
            goto L_80213304;
    }
    // 0x802132B4: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x802132B8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802132BC: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x802132C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802132C4: beq         $v1, $zero, L_802132EC
    if (ctx->r3 == 0) {
        // 0x802132C8: sw          $t4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r12;
            goto L_802132EC;
    }
    // 0x802132C8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x802132CC: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x802132D0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x802132D4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x802132D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802132DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802132E0: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802132E4: b           L_8021330C
    // 0x802132E8: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
        goto L_8021330C;
    // 0x802132E8: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_802132EC:
    // 0x802132EC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x802132F0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x802132F4: nop

    // 0x802132F8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802132FC: b           L_8021330C
    // 0x80213300: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
        goto L_8021330C;
    // 0x80213300: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
L_80213304:
    // 0x80213304: b           L_80213388
    // 0x80213308: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
        goto L_80213388;
    // 0x80213308: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
L_8021330C:
    // 0x8021330C: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    // 0x80213310: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80213314: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80213318: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8021331C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213320: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80213324: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80213328: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021332C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80213330: nop

    // 0x80213334: bc1fl       L_8021338C
    if (!c1cs) {
        // 0x80213338: cfc1        $t0, $FpcCsr
        ctx->r8 = get_cop1_cs();
            goto L_8021338C;
    }
    goto skip_2;
    // 0x80213338: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    skip_2:
    // 0x8021333C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80213340: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x80213344: jal         0x80036260
    // 0x80213348: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x80213348: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021334C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80213350: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80213354: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80213358: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8021335C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80213360: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
L_80213364:
    // 0x80213364: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80213368: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8021336C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213370: beql        $t9, $zero, L_80213388
    if (ctx->r25 == 0) {
        // 0x80213374: lwc1        $f0, 0x20($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
            goto L_80213388;
    }
    goto skip_3;
    // 0x80213374: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    skip_3:
    // 0x80213378: jal         0x80213558
    // 0x8021337C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80213558_69AF58(rdram, ctx);
        goto after_1;
    // 0x8021337C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80213380: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80213384: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
L_80213388:
    // 0x80213388: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
L_8021338C:
    // 0x8021338C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80213390: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80213394: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80213398: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021339C: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802133A0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802133A4: nop

    // 0x802133A8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802133AC: beql        $t1, $zero, L_802133FC
    if (ctx->r9 == 0) {
        // 0x802133B0: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_802133FC;
    }
    goto skip_4;
    // 0x802133B0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x802133B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802133B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802133BC: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802133C0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802133C4: nop

    // 0x802133C8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802133CC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802133D0: nop

    // 0x802133D4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802133D8: bne         $t1, $zero, L_802133F0
    if (ctx->r9 != 0) {
        // 0x802133DC: nop
    
            goto L_802133F0;
    }
    // 0x802133DC: nop

    // 0x802133E0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x802133E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802133E8: b           L_80213408
    // 0x802133EC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80213408;
    // 0x802133EC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_802133F0:
    // 0x802133F0: b           L_80213408
    // 0x802133F4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80213408;
    // 0x802133F4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x802133F8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_802133FC:
    // 0x802133FC: nop

    // 0x80213400: bltz        $t1, L_802133F0
    if (SIGNED(ctx->r9) < 0) {
        // 0x80213404: nop
    
            goto L_802133F0;
    }
    // 0x80213404: nop

L_80213408:
    // 0x80213408: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x8021340C: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x80213410: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80213414: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80213418: lw          $t3, -0x4FEC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4FEC);
    // 0x8021341C: sb          $t1, 0x10($t3)
    MEM_B(0X10, ctx->r11) = ctx->r9;
    // 0x80213420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213428: jr          $ra
    // 0x8021342C: nop

    TRACE_RETURN()
    return;
    // 0x8021342C: nop

;}
RECOMP_FUNC void func_80210514_697F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210514: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210518: jr          $ra
    // 0x8021051C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021051C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80211020_698A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211020: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80211024: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80211028: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021102C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211030: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80211034: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    // 0x80211038: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x8021103C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80211040: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80211044: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80211048: jr          $ra
    // 0x8021104C: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021104C: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802108EC_6982EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802108F0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802108F4: jr          $ra
    // 0x802108F8: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802108F8: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80211444_698E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211444: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80211448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021144C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80211450: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80211454: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80211458: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021145C: ldc1        $f4, 0x5138($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5138);
    // 0x80211460: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80211464: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211468: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021146C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80211470: bc1fl       L_802114EC
    if (!c1cs) {
        // 0x80211474: addiu       $v0, $a1, 0x5C
        ctx->r2 = ADD32(ctx->r5, 0X5C);
            goto L_802114EC;
    }
    goto skip_0;
    // 0x80211474: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
    skip_0:
    // 0x80211478: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021147C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211480: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80211484: nop

    // 0x80211488: bc1fl       L_802114A0
    if (!c1cs) {
        // 0x8021148C: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_802114A0;
    }
    goto skip_1;
    // 0x8021148C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x80211490: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80211494: b           L_802114A0
    // 0x80211498: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_802114A0;
    // 0x80211498: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8021149C: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_802114A0:
    // 0x802114A0: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802114A4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802114A8: nop

    // 0x802114AC: bc1fl       L_802114C8
    if (!c1cs) {
        // 0x802114B0: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_802114C8;
    }
    goto skip_2;
    // 0x802114B0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x802114B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802114B8: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x802114BC: b           L_802114E8
    // 0x802114C0: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
        goto L_802114E8;
    // 0x802114C0: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x802114C4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_802114C8:
    // 0x802114C8: nop

    // 0x802114CC: bc1fl       L_802114E4
    if (!c1cs) {
        // 0x802114D0: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_802114E4;
    }
    goto skip_3;
    // 0x802114D0: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x802114D4: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x802114D8: b           L_802114E8
    // 0x802114DC: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
        goto L_802114E8;
    // 0x802114DC: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x802114E0: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_802114E4:
    // 0x802114E4: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
L_802114E8:
    // 0x802114E8: addiu       $v0, $a1, 0x5C
    ctx->r2 = ADD32(ctx->r5, 0X5C);
L_802114EC:
    // 0x802114EC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802114F0: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x802114F4: swc1        $f6, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f6.u32l;
    // 0x802114F8: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x802114FC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211500: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x80211504: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x80211508: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021150C: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x80211510: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x80211514: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80211518: lwc1        $f10, 0x28($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021151C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80211520: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x80211524: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    // 0x80211528: jal         0x8001B5AC
    // 0x8021152C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021152C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80211530: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80211534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80211538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021153C: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x80211540: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80211544: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80211548: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021154C: lui         $t0, 0x8FFF
    ctx->r8 = S32(0X8FFF << 16);
    // 0x80211550: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80211554: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80211558: addiu       $t5, $t5, 0x49C0
    ctx->r13 = ADD32(ctx->r13, 0X49C0);
    // 0x8021155C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x80211560: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80211564: bc1f        L_80211598
    if (!c1cs) {
        // 0x80211568: addiu       $a2, $v0, 0x28
        ctx->r6 = ADD32(ctx->r2, 0X28);
            goto L_80211598;
    }
    // 0x80211568: addiu       $a2, $v0, 0x28
    ctx->r6 = ADD32(ctx->r2, 0X28);
    // 0x8021156C: lbu         $t9, 0x5($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5);
    // 0x80211570: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211574: bnel        $t9, $at, L_80211594
    if (ctx->r25 != ctx->r1) {
        // 0x80211578: swc1        $f2, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
            goto L_80211594;
    }
    goto skip_4;
    // 0x80211578: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
    skip_4:
    // 0x8021157C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80211580: nop

    // 0x80211584: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x80211588: b           L_80211598
    // 0x8021158C: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
        goto L_80211598;
    // 0x8021158C: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x80211590: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
L_80211594:
    // 0x80211594: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
L_80211598:
    // 0x80211598: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021159C: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x802115A0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802115A4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x802115A8: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
    // 0x802115AC: lui         $t7, 0x802
    ctx->r15 = S32(0X802 << 16);
    // 0x802115B0: addiu       $t7, $t7, 0x58D0
    ctx->r15 = ADD32(ctx->r15, 0X58D0);
    // 0x802115B4: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x802115B8: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x802115BC: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x802115C0: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x802115C4: lui         $t5, 0xF510
    ctx->r13 = S32(0XF510 << 16);
    // 0x802115C8: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x802115CC: lui         $t9, 0x701
    ctx->r25 = S32(0X701 << 16);
    // 0x802115D0: ori         $t9, $t9, 0x8050
    ctx->r25 = ctx->r25 | 0X8050;
    // 0x802115D4: sw          $t8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r24;
    // 0x802115D8: ori         $t5, $t5, 0x1000
    ctx->r13 = ctx->r13 | 0X1000;
    // 0x802115DC: lui         $t4, 0x77F
    ctx->r12 = S32(0X77F << 16);
    // 0x802115E0: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x802115E4: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
    // 0x802115E8: ori         $t4, $t4, 0xF100
    ctx->r12 = ctx->r12 | 0XF100;
    // 0x802115EC: sw          $t5, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r13;
    // 0x802115F0: sw          $t9, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r25;
    // 0x802115F4: sw          $t6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r14;
    // 0x802115F8: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x802115FC: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80211600: lw          $t5, 0x20($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X20);
    // 0x80211604: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80211608: sw          $t2, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r10;
    // 0x8021160C: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x80211610: sw          $t4, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r12;
    // 0x80211614: lui         $t3, 0x7
    ctx->r11 = S32(0X7 << 16);
    // 0x80211618: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8021161C: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x80211620: ori         $t3, $t3, 0xC0FC
    ctx->r11 = ctx->r11 | 0XC0FC;
    // 0x80211624: ori         $t6, $t6, 0x8050
    ctx->r14 = ctx->r14 | 0X8050;
    // 0x80211628: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x8021162C: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x80211630: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
    // 0x80211634: sw          $t6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r14;
    // 0x80211638: sw          $t3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r11;
    // 0x8021163C: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
    // 0x80211640: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x80211644: sw          $t1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r9;
    // 0x80211648: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x8021164C: sw          $t4, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r12;
    // 0x80211650: sw          $zero, 0x74($v0)
    MEM_W(0X74, ctx->r2) = 0;
    // 0x80211654: lw          $a3, 0x30($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X30);
    // 0x80211658: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x8021165C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80211660: subu        $t6, $t0, $a3
    ctx->r14 = SUB32(ctx->r8, ctx->r7);
    // 0x80211664: and         $t7, $a2, $t6
    ctx->r15 = ctx->r6 & ctx->r14;
    // 0x80211668: and         $a1, $t7, $t0
    ctx->r5 = ctx->r15 & ctx->r8;
    // 0x8021166C: jal         0x80040620
    // 0x80211670: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80211670: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    after_1:
    // 0x80211674: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80211678: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8021167C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80211680: sw          $t9, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r25;
    // 0x80211684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211688: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021168C: jr          $ra
    // 0x80211690: nop

    TRACE_RETURN()
    return;
    // 0x80211690: nop

;}
RECOMP_FUNC void func_8021358C_69AF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021358C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80213590: lw          $a2, 0x4ADC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4ADC);
    // 0x80213594: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021359C: beq         $a2, $zero, L_80213604
    if (ctx->r6 == 0) {
        // 0x802135A0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80213604;
    }
    // 0x802135A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802135A4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802135A8: lw          $v1, 0x4AE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4AE0);
    // 0x802135AC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802135B0: blez        $v1, L_802135C0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802135B4: slti        $at, $v1, 0x4
        ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802135C0;
    }
    // 0x802135B4: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802135B8: bne         $at, $zero, L_802135C4
    if (ctx->r1 != 0) {
        // 0x802135BC: nop
    
            goto L_802135C4;
    }
    // 0x802135BC: nop

L_802135C0:
    // 0x802135C0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802135C4:
    // 0x802135C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802135C8: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x802135CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802135D0: sw          $a2, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = ctx->r6;
    // 0x802135D4: jal         0x80013C90
    // 0x802135D8: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    func_80013C90_14890(rdram, ctx);
        goto after_0;
    // 0x802135D8: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    after_0:
    // 0x802135DC: bne         $v0, $zero, L_802135EC
    if (ctx->r2 != 0) {
        // 0x802135E0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802135EC;
    }
    // 0x802135E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802135E4: b           L_8021372C
    // 0x802135E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021372C;
    // 0x802135E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802135EC:
    // 0x802135EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802135F0: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x802135F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802135F8: sw          $zero, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = 0;
    // 0x802135FC: b           L_8021372C
    // 0x80213600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021372C;
    // 0x80213600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213604:
    // 0x80213604: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x80213608: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8021360C: beq         $at, $zero, L_80213714
    if (ctx->r1 == 0) {
        // 0x80213610: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80213714;
    }
    // 0x80213610: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80213614: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213618: addu        $at, $at, $t6
    gpr jr_addend_80213620 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8021361C: lw          $t6, 0x518C($at)
    ctx->r14 = ADD32(ctx->r1, 0X518C);
    // 0x80213620: jr          $t6
    // 0x80213624: nop

    switch (jr_addend_80213620 >> 2) {
        case 0: goto L_80213628; break;
        case 1: goto L_80213640; break;
        case 2: goto L_80213640; break;
        case 3: goto L_80213714; break;
        case 4: goto L_80213714; break;
        case 5: goto L_80213714; break;
        case 6: goto L_80213678; break;
        case 7: goto L_802136B0; break;
        case 8: goto L_802136E8; break;
        case 9: goto L_80213714; break;
        default: switch_error(__func__, 0x80213620, 0x8021518C);
    }
    // 0x80213624: nop

L_80213628:
    // 0x80213628: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021362C: addiu       $a0, $a0, 0x4A98
    ctx->r4 = ADD32(ctx->r4, 0X4A98);
    // 0x80213630: jal         0x80013AC4
    // 0x80213634: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80013AC4_146C4(rdram, ctx);
        goto after_1;
    // 0x80213634: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80213638: b           L_80213714
    // 0x8021363C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_80213714;
    // 0x8021363C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80213640:
    // 0x80213640: jal         0x80013A24
    // 0x80213644: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    func_80013A24_14624(rdram, ctx);
        goto after_2;
    // 0x80213644: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    after_2:
    // 0x80213648: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8021364C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213650: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213654: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x80213658: addiu       $a0, $a0, 0x4AB0
    ctx->r4 = ADD32(ctx->r4, 0X4AB0);
    // 0x8021365C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213660: sw          $a0, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = ctx->r4;
    // 0x80213664: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80213668: jal         0x80013C90
    // 0x8021366C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80013C90_14890(rdram, ctx);
        goto after_3;
    // 0x8021366C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80213670: b           L_80213714
    // 0x80213674: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80213714;
    // 0x80213674: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80213678:
    // 0x80213678: jal         0x80013A24
    // 0x8021367C: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    func_80013A24_14624(rdram, ctx);
        goto after_4;
    // 0x8021367C: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    after_4:
    // 0x80213680: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80213684: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213688: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021368C: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x80213690: addiu       $a0, $a0, 0x4AC0
    ctx->r4 = ADD32(ctx->r4, 0X4AC0);
    // 0x80213694: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213698: sw          $a0, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = ctx->r4;
    // 0x8021369C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802136A0: jal         0x80013C90
    // 0x802136A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80013C90_14890(rdram, ctx);
        goto after_5;
    // 0x802136A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x802136A8: b           L_80213714
    // 0x802136AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80213714;
    // 0x802136AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802136B0:
    // 0x802136B0: jal         0x80013A24
    // 0x802136B4: addiu       $a0, $zero, 0x291
    ctx->r4 = ADD32(0, 0X291);
    func_80013A24_14624(rdram, ctx);
        goto after_6;
    // 0x802136B4: addiu       $a0, $zero, 0x291
    ctx->r4 = ADD32(0, 0X291);
    after_6:
    // 0x802136B8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802136BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802136C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802136C4: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x802136C8: addiu       $a0, $a0, 0x4AC8
    ctx->r4 = ADD32(ctx->r4, 0X4AC8);
    // 0x802136CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802136D0: sw          $a0, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = ctx->r4;
    // 0x802136D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802136D8: jal         0x80013C90
    // 0x802136DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80013C90_14890(rdram, ctx);
        goto after_7;
    // 0x802136DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802136E0: b           L_80213714
    // 0x802136E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80213714;
    // 0x802136E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802136E8:
    // 0x802136E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802136EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802136F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802136F4: sw          $v1, 0x4AE0($at)
    MEM_W(0X4AE0, ctx->r1) = ctx->r3;
    // 0x802136F8: addiu       $a0, $a0, 0x4AD4
    ctx->r4 = ADD32(ctx->r4, 0X4AD4);
    // 0x802136FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213700: sw          $a0, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = ctx->r4;
    // 0x80213704: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80213708: jal         0x80013C90
    // 0x8021370C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80013C90_14890(rdram, ctx);
        goto after_8;
    // 0x8021370C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80213710: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80213714:
    // 0x80213714: bne         $v1, $zero, L_80213724
    if (ctx->r3 != 0) {
        // 0x80213718: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80213724;
    }
    // 0x80213718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021371C: b           L_8021372C
    // 0x80213720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021372C;
    // 0x80213720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80213724:
    // 0x80213724: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213728: sw          $zero, 0x4ADC($at)
    MEM_W(0X4ADC, ctx->r1) = 0;
L_8021372C:
    // 0x8021372C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213734: jr          $ra
    // 0x80213738: nop

    TRACE_RETURN()
    return;
    // 0x80213738: nop

;}
RECOMP_FUNC void func_802106A4_6980A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802106A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802106A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802106AC: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x802106B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802106B4: ldc1        $f8, 0x5100($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X5100);
    // 0x802106B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802106BC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802106C0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802106C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802106C8: bc1fl       L_80210738
    if (!c1cs) {
        // 0x802106CC: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_80210738;
    }
    goto skip_0;
    // 0x802106CC: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x802106D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802106D4: jal         0x8001B5AC
    // 0x802106D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x802106D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802106DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802106E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802106E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802106E8: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x802106EC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802106F0: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802106F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802106F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802106FC: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210700: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x80210704: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80210708: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8021070C: nop

    // 0x80210710: bc1fl       L_80210738
    if (!c1cs) {
        // 0x80210714: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_80210738;
    }
    goto skip_1;
    // 0x80210714: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_1:
    // 0x80210718: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8021071C: beql        $t6, $zero, L_80210734
    if (ctx->r14 == 0) {
        // 0x80210720: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80210734;
    }
    goto skip_2;
    // 0x80210720: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_2:
    // 0x80210724: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80210728: b           L_80210734
    // 0x8021072C: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
        goto L_80210734;
    // 0x8021072C: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80210730: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80210734:
    // 0x80210734: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
L_80210738:
    // 0x80210738: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021073C: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x80210740: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80210744: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x80210748: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021074C: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80210750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210758: jr          $ra
    // 0x8021075C: nop

    TRACE_RETURN()
    return;
    // 0x8021075C: nop

;}
RECOMP_FUNC void func_802108FC_6982FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108FC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210900: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210904: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80210908: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021090C: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80210910: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210914: nop

    // 0x80210918: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8021091C: nop

    // 0x80210920: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80210924: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80210928: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x8021092C: jr          $ra
    // 0x80210930: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80210930: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80210688_698088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210688: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021068C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80210690: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x80210694: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80210698: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8021069C: jr          $ra
    // 0x802106A0: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x802106A0: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_802112D4_698CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802112D8: jr          $ra
    // 0x802112DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802112DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210680_698080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210680: jr          $ra
    // 0x80210684: lwc1        $f0, 0xA0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80210684: lwc1        $f0, 0xA0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA0);
;}
RECOMP_FUNC void func_8021296C_69A36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021296C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80212970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212974: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80212978: beq         $a1, $at, L_80212994
    if (ctx->r5 == ctx->r1) {
        // 0x8021297C: lw          $v0, 0x5C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X5C);
            goto L_80212994;
    }
    // 0x8021297C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212980: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80212984: beq         $a1, $at, L_802129D4
    if (ctx->r5 == ctx->r1) {
        // 0x80212988: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_802129D4;
    }
    // 0x80212988: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8021298C: b           L_80212A54
    // 0x80212990: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_80212A54;
    // 0x80212990: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80212994:
    // 0x80212994: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80212998: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021299C: lwc1        $f4, 0x5178($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5178);
    // 0x802129A0: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    // 0x802129A4: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x802129A8: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x802129AC: addiu       $t6, $t6, 0x37C
    ctx->r14 = ADD32(ctx->r14, 0X37C);
    // 0x802129B0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x802129B4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x802129B8: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x802129BC: sw          $t7, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r15;
    // 0x802129C0: lw          $t1, 0x58($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X58);
    // 0x802129C4: addiu       $t9, $t9, 0x3C8
    ctx->r25 = ADD32(ctx->r25, 0X3C8);
    // 0x802129C8: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x802129CC: b           L_80212A50
    // 0x802129D0: sw          $t0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r8;
        goto L_80212A50;
    // 0x802129D0: sw          $t0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r8;
L_802129D4:
    // 0x802129D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802129D8: lw          $t4, 0x54($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X54);
    // 0x802129DC: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x802129E0: addiu       $t2, $t2, 0x37C
    ctx->r10 = ADD32(ctx->r10, 0X37C);
    // 0x802129E4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802129E8: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x802129EC: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x802129F0: sw          $t3, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r11;
    // 0x802129F4: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x802129F8: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x802129FC: addiu       $t5, $t5, 0x3C8
    ctx->r13 = ADD32(ctx->r13, 0X3C8);
    // 0x80212A00: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80212A04: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
    // 0x80212A08: lw          $a0, 0x54($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X54);
    // 0x80212A0C: jal         0x8001B5AC
    // 0x80212A10: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80212A10: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80212A14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212A18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212A1C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80212A20: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80212A24: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    // 0x80212A28: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80212A2C: jal         0x8001B5AC
    // 0x80212A30: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x80212A30: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    after_1:
    // 0x80212A34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212A38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212A3C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80212A40: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80212A44: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x80212A48: b           L_80212A64
    // 0x80212A4C: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
        goto L_80212A64;
    // 0x80212A4C: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
L_80212A50:
    // 0x80212A50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80212A54:
    // 0x80212A54: lw          $t0, 0x54($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X54);
    // 0x80212A58: swc1        $f0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f0.u32l;
    // 0x80212A5C: lw          $t1, 0x58($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X58);
    // 0x80212A60: swc1        $f0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f0.u32l;
L_80212A64:
    // 0x80212A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80212A6C: jr          $ra
    // 0x80212A70: nop

    TRACE_RETURN()
    return;
    // 0x80212A70: nop

    // 0x80212A74: jr          $ra
    // 0x80212A78: nop

    TRACE_RETURN()
    return;
    // 0x80212A78: nop

;}
RECOMP_FUNC void func_80211190_698B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211190: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80211194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021119C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802111A0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802111A4: addiu       $t7, $t7, 0x48C8
    ctx->r15 = ADD32(ctx->r15, 0X48C8);
    // 0x802111A8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x802111AC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802111B0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802111B4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x802111B8: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x802111BC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802111C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802111C4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x802111C8: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x802111CC: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x802111D0: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x802111D4: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x802111D8: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802111DC: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802111E0: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802111E4: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x802111E8: or          $t3, $t8, $t1
    ctx->r11 = ctx->r24 | ctx->r9;
    // 0x802111EC: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x802111F0: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x802111F4: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x802111F8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x802111FC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80211200: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80211204: subu        $a1, $a0, $s0
    ctx->r5 = SUB32(ctx->r4, ctx->r16);
    // 0x80211208: jal         0x80040620
    // 0x8021120C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021120C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x80211210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211214: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80211218: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021121C: jr          $ra
    // 0x80211220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80211220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80210AB4_6984B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210AB4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210AB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210ABC: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80210AC0: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80210AC4: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80210AC8: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210ACC: nop

    // 0x80210AD0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80210AD4: nop

    // 0x80210AD8: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80210ADC: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80210AE0: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80210AE4: jr          $ra
    // 0x80210AE8: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80210AE8: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80211018_698A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211018: jr          $ra
    // 0x8021101C: sw          $a1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021101C: sw          $a1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80210FA0_6989A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210FA0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210FA4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80210FA8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80210FAC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80210FB0: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80210FB4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80210FB8: jr          $ra
    // 0x80210FBC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80210FBC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020FE7C_69787C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE84: jal         0x80034EF8
    // 0x8020FE88: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8020FE88: nop

    after_0:
    // 0x8020FE8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020FE98: jr          $ra
    // 0x8020FE9C: nop

    TRACE_RETURN()
    return;
    // 0x8020FE9C: nop

;}
RECOMP_FUNC void func_80212C38_69A638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212C38: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80212C3C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80212C40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80212C44: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212C48: bgez        $t6, L_80212C60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80212C4C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80212C60;
    }
    // 0x80212C4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212C50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80212C54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80212C58: nop

    // 0x80212C5C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80212C60:
    // 0x80212C60: jr          $ra
    // 0x80212C64: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80212C64: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80210AEC_6984EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210AEC: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80210AF0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80210AF4: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210AF8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80210AFC: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210B00: jr          $ra
    // 0x80210B04: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80210B04: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802131BC_69ABBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802131BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802131C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802131C4: jal         0x80034EF8
    // 0x802131C8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x802131C8: nop

    after_0:
    // 0x802131CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802131D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802131D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802131D8: jr          $ra
    // 0x802131DC: nop

    TRACE_RETURN()
    return;
    // 0x802131DC: nop

    // 0x802131E0: jr          $ra
    // 0x802131E4: nop

    TRACE_RETURN()
    return;
    // 0x802131E4: nop

    // 0x802131E8: jr          $ra
    // 0x802131EC: nop

    TRACE_RETURN()
    return;
    // 0x802131EC: nop

;}
RECOMP_FUNC void func_80211800_699200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211808: jal         0x80034EF8
    // 0x8021180C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8021180C: nop

    after_0:
    // 0x80211810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021181C: jr          $ra
    // 0x80211820: nop

    TRACE_RETURN()
    return;
    // 0x80211820: nop

;}
RECOMP_FUNC void func_80213768_69B168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213768: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8021376C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80213770: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80213774: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80213778: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8021377C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80213780: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80213784: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80213788: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x8021378C: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80213790: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80213794: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80213798: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8021379C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x802137A0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802137A4: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x802137A8: beql        $v0, $zero, L_802137C8
    if (ctx->r2 == 0) {
        // 0x802137AC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_802137C8;
    }
    goto skip_0;
    // 0x802137AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x802137B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802137B4: beq         $v0, $at, L_80213A18
    if (ctx->r2 == ctx->r1) {
        // 0x802137B8: addiu       $s5, $s4, 0x5C
        ctx->r21 = ADD32(ctx->r20, 0X5C);
            goto L_80213A18;
    }
    // 0x802137B8: addiu       $s5, $s4, 0x5C
    ctx->r21 = ADD32(ctx->r20, 0X5C);
    // 0x802137BC: b           L_80213BD8
    // 0x802137C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_80213BD8;
    // 0x802137C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802137C4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_802137C8:
    // 0x802137C8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802137CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802137D0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802137D4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802137D8: jal         0x8021454C
    // 0x802137DC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8021454C_69BF4C(rdram, ctx);
        goto after_0;
    // 0x802137DC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_0:
    // 0x802137E0: addiu       $s5, $s4, 0x5C
    ctx->r21 = ADD32(ctx->r20, 0X5C);
    // 0x802137E4: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x802137E8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802137EC: sw          $v0, 0x48($s5)
    MEM_W(0X48, ctx->r21) = ctx->r2;
    // 0x802137F0: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x802137F4: addiu       $s1, $zero, 0x82
    ctx->r17 = ADD32(0, 0X82);
L_802137F8:
    // 0x802137F8: jal         0x80210B54
    // 0x802137FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80210B54_698554(rdram, ctx);
        goto after_1;
    // 0x802137FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80213800: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80213804: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80213808: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021380C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80213810: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80213814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213818: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021381C: jal         0x80210C58
    // 0x80213820: nop

    func_80210C58_698658(rdram, ctx);
        goto after_2;
    // 0x80213820: nop

    after_2:
    // 0x80213824: addiu       $s1, $s1, 0x1C2
    ctx->r17 = ADD32(ctx->r17, 0X1C2);
    // 0x80213828: slti        $at, $s1, 0x406
    ctx->r1 = SIGNED(ctx->r17) < 0X406 ? 1 : 0;
    // 0x8021382C: bne         $at, $zero, L_802137F8
    if (ctx->r1 != 0) {
        // 0x80213830: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802137F8;
    }
    // 0x80213830: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80213834: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213838: lwc1        $f26, 0x51B4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X51B4);
    // 0x8021383C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80213840: lui         $s2, 0x801
    ctx->r18 = S32(0X801 << 16);
    // 0x80213844: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80213848: addiu       $s2, $s2, -0x5E50
    ctx->r18 = ADD32(ctx->r18, -0X5E50);
    // 0x8021384C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213850: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_80213854:
    // 0x80213854: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80213858: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8021385C: jal         0x80210988
    // 0x80213860: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_3;
    // 0x80213860: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_3:
    // 0x80213864: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80213868: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8021386C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80213870: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80213874: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213878: lui         $a3, 0xC37A
    ctx->r7 = S32(0XC37A << 16);
    // 0x8021387C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80213880: jal         0x80210A74
    // 0x80213884: nop

    func_80210A74_698474(rdram, ctx);
        goto after_4;
    // 0x80213884: nop

    after_4:
    // 0x80213888: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x8021388C: jal         0x80210AB4
    // 0x80213890: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_5;
    // 0x80213890: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x80213894: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80213898: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021389C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802138A0: jal         0x80210A94
    // 0x802138A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_80210A94_698494(rdram, ctx);
        goto after_6;
    // 0x802138A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x802138A8: addiu       $s1, $s1, 0x122
    ctx->r17 = ADD32(ctx->r17, 0X122);
    // 0x802138AC: slti        $at, $s1, 0x244
    ctx->r1 = SIGNED(ctx->r17) < 0X244 ? 1 : 0;
    // 0x802138B0: bne         $at, $zero, L_80213854
    if (ctx->r1 != 0) {
        // 0x802138B4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213854;
    }
    // 0x802138B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802138B8: lui         $s2, 0x801
    ctx->r18 = S32(0X801 << 16);
    // 0x802138BC: addiu       $s2, $s2, -0x1CF0
    ctx->r18 = ADD32(ctx->r18, -0X1CF0);
    // 0x802138C0: addiu       $s1, $zero, -0x32
    ctx->r17 = ADD32(0, -0X32);
    // 0x802138C4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_802138C8:
    // 0x802138C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802138CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802138D0: jal         0x80210988
    // 0x802138D4: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_7;
    // 0x802138D4: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_7:
    // 0x802138D8: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x802138DC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802138E0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802138E4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802138E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802138EC: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x802138F0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802138F4: jal         0x80210A74
    // 0x802138F8: nop

    func_80210A74_698474(rdram, ctx);
        goto after_8;
    // 0x802138F8: nop

    after_8:
    // 0x802138FC: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80213900: jal         0x80210AB4
    // 0x80213904: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_9;
    // 0x80213904: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_9:
    // 0x80213908: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021390C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213910: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80213914: jal         0x80210A94
    // 0x80213918: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    func_80210A94_698494(rdram, ctx);
        goto after_10;
    // 0x80213918: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_10:
    // 0x8021391C: addiu       $s1, $s1, 0x190
    ctx->r17 = ADD32(ctx->r17, 0X190);
    // 0x80213920: slti        $at, $s1, 0x47E
    ctx->r1 = SIGNED(ctx->r17) < 0X47E ? 1 : 0;
    // 0x80213924: bne         $at, $zero, L_802138C8
    if (ctx->r1 != 0) {
        // 0x80213928: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802138C8;
    }
    // 0x80213928: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021392C: lui         $s2, 0x801
    ctx->r18 = S32(0X801 << 16);
    // 0x80213930: addiu       $s2, $s2, -0x17F8
    ctx->r18 = ADD32(ctx->r18, -0X17F8);
    // 0x80213934: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213938: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x8021393C: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
L_80213940:
    // 0x80213940: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80213944: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80213948: jal         0x80210988
    // 0x8021394C: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_11;
    // 0x8021394C: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_11:
    // 0x80213950: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80213954: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80213958: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8021395C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213960: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213964: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x80213968: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021396C: jal         0x80210A74
    // 0x80213970: nop

    func_80210A74_698474(rdram, ctx);
        goto after_12;
    // 0x80213970: nop

    after_12:
    // 0x80213974: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80213978: jal         0x80210AB4
    // 0x8021397C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_13;
    // 0x8021397C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_13:
    // 0x80213980: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80213984: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80213988: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021398C: jal         0x80210A94
    // 0x80213990: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_80210A94_698494(rdram, ctx);
        goto after_14;
    // 0x80213990: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_14:
    // 0x80213994: addiu       $s1, $s1, 0x1F4
    ctx->r17 = ADD32(ctx->r17, 0X1F4);
    // 0x80213998: bne         $s1, $s3, L_80213940
    if (ctx->r17 != ctx->r19) {
        // 0x8021399C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213940;
    }
    // 0x8021399C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802139A0: jal         0x80210E58
    // 0x802139A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80210E58_698858(rdram, ctx);
        goto after_15;
    // 0x802139A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_15:
    // 0x802139A8: lui         $a1, 0x406D
    ctx->r5 = S32(0X406D << 16);
    // 0x802139AC: sw          $v0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r2;
    // 0x802139B0: ori         $a1, $a1, 0xCBAA
    ctx->r5 = ctx->r5 | 0XCBAA;
    // 0x802139B4: jal         0x80210FE0
    // 0x802139B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210FE0_6989E0(rdram, ctx);
        goto after_16;
    // 0x802139B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x802139BC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802139C0: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    // 0x802139C4: lui         $a2, 0xC180
    ctx->r6 = S32(0XC180 << 16);
    // 0x802139C8: jal         0x80210F80
    // 0x802139CC: lui         $a3, 0xC320
    ctx->r7 = S32(0XC320 << 16);
    func_80210F80_698980(rdram, ctx);
        goto after_17;
    // 0x802139CC: lui         $a3, 0xC320
    ctx->r7 = S32(0XC320 << 16);
    after_17:
    // 0x802139D0: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    // 0x802139D4: jal         0x80211058
    // 0x802139D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80211058_698A58(rdram, ctx);
        goto after_18;
    // 0x802139D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_18:
    // 0x802139DC: lw          $t6, 0x8($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X8);
    // 0x802139E0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802139E4: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x802139E8: sh          $v0, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r2;
    // 0x802139EC: lw          $t8, 0x8($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X8);
    // 0x802139F0: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x802139F4: sh          $v0, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r2;
    // 0x802139F8: jal         0x802110E8
    // 0x802139FC: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    func_802110E8_698AE8(rdram, ctx);
        goto after_19;
    // 0x802139FC: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    after_19:
    // 0x80213A00: jal         0x80213E14
    // 0x80213A04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80213E14_69B814(rdram, ctx);
        goto after_20;
    // 0x80213A04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_20:
    // 0x80213A08: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x80213A0C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80213A10: b           L_80213BD4
    // 0x80213A14: sw          $t1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r9;
        goto L_80213BD4;
    // 0x80213A14: sw          $t1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r9;
L_80213A18:
    // 0x80213A18: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80213A1C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80213A20: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x80213A24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80213A28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213A2C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80213A30: addiu       $s4, $sp, 0x64
    ctx->r20 = ADD32(ctx->r29, 0X64);
    // 0x80213A34: addiu       $s3, $sp, 0x68
    ctx->r19 = ADD32(ctx->r29, 0X68);
    // 0x80213A38: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
L_80213A3C:
    // 0x80213A3C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80213A40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80213A44: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80213A48: jal         0x80210C84
    // 0x80213A4C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80210C84_698684(rdram, ctx);
        goto after_21;
    // 0x80213A4C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_21:
    // 0x80213A50: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80213A54: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80213A58: nop

    // 0x80213A5C: bc1fl       L_80213A84
    if (!c1cs) {
        // 0x80213A60: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80213A84;
    }
    goto skip_1;
    // 0x80213A60: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_1:
    // 0x80213A64: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x80213A68: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80213A6C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80213A70: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80213A74: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80213A78: jal         0x80210C58
    // 0x80213A7C: nop

    func_80210C58_698658(rdram, ctx);
        goto after_22;
    // 0x80213A7C: nop

    after_22:
    // 0x80213A80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80213A84:
    // 0x80213A84: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x80213A88: bne         $at, $zero, L_80213A3C
    if (ctx->r1 != 0) {
        // 0x80213A8C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213A3C;
    }
    // 0x80213A8C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80213A90: lui         $at, 0x4411
    ctx->r1 = S32(0X4411 << 16);
    // 0x80213A94: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80213A98: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80213A9C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80213AA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213AA4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_80213AA8:
    // 0x80213AA8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80213AAC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80213AB0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80213AB4: jal         0x80210AEC
    // 0x80213AB8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80210AEC_6984EC(rdram, ctx);
        goto after_23;
    // 0x80213AB8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_23:
    // 0x80213ABC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80213AC0: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80213AC4: nop

    // 0x80213AC8: bc1fl       L_80213AF0
    if (!c1cs) {
        // 0x80213ACC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80213AF0;
    }
    goto skip_2;
    // 0x80213ACC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_2:
    // 0x80213AD0: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x80213AD4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80213AD8: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80213ADC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80213AE0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80213AE4: jal         0x80210A74
    // 0x80213AE8: nop

    func_80210A74_698474(rdram, ctx);
        goto after_24;
    // 0x80213AE8: nop

    after_24:
    // 0x80213AEC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80213AF0:
    // 0x80213AF0: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x80213AF4: bne         $at, $zero, L_80213AA8
    if (ctx->r1 != 0) {
        // 0x80213AF8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213AA8;
    }
    // 0x80213AF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80213AFC: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80213B00: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80213B04: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80213B08: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80213B0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213B10: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_80213B14:
    // 0x80213B14: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80213B18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80213B1C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80213B20: jal         0x80210AEC
    // 0x80213B24: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80210AEC_6984EC(rdram, ctx);
        goto after_25;
    // 0x80213B24: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_25:
    // 0x80213B28: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80213B2C: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80213B30: nop

    // 0x80213B34: bc1fl       L_80213B5C
    if (!c1cs) {
        // 0x80213B38: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80213B5C;
    }
    goto skip_3;
    // 0x80213B38: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_3:
    // 0x80213B3C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80213B40: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80213B44: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80213B48: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80213B4C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80213B50: jal         0x80210A74
    // 0x80213B54: nop

    func_80210A74_698474(rdram, ctx);
        goto after_26;
    // 0x80213B54: nop

    after_26:
    // 0x80213B58: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80213B5C:
    // 0x80213B5C: slti        $at, $s1, 0xC
    ctx->r1 = SIGNED(ctx->r17) < 0XC ? 1 : 0;
    // 0x80213B60: bne         $at, $zero, L_80213B14
    if (ctx->r1 != 0) {
        // 0x80213B64: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213B14;
    }
    // 0x80213B64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80213B68: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80213B6C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80213B70: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x80213B74: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80213B78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80213B7C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_80213B80:
    // 0x80213B80: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80213B84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80213B88: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80213B8C: jal         0x80210AEC
    // 0x80213B90: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80210AEC_6984EC(rdram, ctx);
        goto after_27;
    // 0x80213B90: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_27:
    // 0x80213B94: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80213B98: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80213B9C: nop

    // 0x80213BA0: bc1fl       L_80213BC8
    if (!c1cs) {
        // 0x80213BA4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80213BC8;
    }
    goto skip_4;
    // 0x80213BA4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_4:
    // 0x80213BA8: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x80213BAC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80213BB0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80213BB4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80213BB8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80213BBC: jal         0x80210A74
    // 0x80213BC0: nop

    func_80210A74_698474(rdram, ctx);
        goto after_28;
    // 0x80213BC0: nop

    after_28:
    // 0x80213BC4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80213BC8:
    // 0x80213BC8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80213BCC: bne         $s1, $at, L_80213B80
    if (ctx->r17 != ctx->r1) {
        // 0x80213BD0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80213B80;
    }
    // 0x80213BD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80213BD4:
    // 0x80213BD4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80213BD8:
    // 0x80213BD8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80213BDC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80213BE0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80213BE4: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80213BE8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80213BEC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80213BF0: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80213BF4: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80213BF8: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80213BFC: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80213C00: jr          $ra
    // 0x80213C04: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x80213C04: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80210624_698024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210624: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210628: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021062C: swc1        $f12, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f12.u32l;
    // 0x80210630: jr          $ra
    // 0x80210634: swc1        $f14, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f14.u32l;
    TRACE_RETURN()
    return;
    // 0x80210634: swc1        $f14, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80211C0C_69960C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211C14: jal         0x80034EF8
    // 0x80211C18: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80211C18: nop

    after_0:
    // 0x80211C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211C28: jr          $ra
    // 0x80211C2C: nop

    TRACE_RETURN()
    return;
    // 0x80211C2C: nop

;}
RECOMP_FUNC void func_802108C4_6982C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108C4: jr          $ra
    // 0x802108C8: nop

    TRACE_RETURN()
    return;
    // 0x802108C8: nop

;}
RECOMP_FUNC void func_80212B28_69A528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212B28: jr          $ra
    // 0x80212B2C: nop

    TRACE_RETURN()
    return;
    // 0x80212B2C: nop

;}
RECOMP_FUNC void func_80213E14_69B814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213E1C: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80213E20: addiu       $a1, $a1, 0x54B4
    ctx->r5 = ADD32(ctx->r5, 0X54B4);
    // 0x80213E24: jal         0x80034E08
    // 0x80213E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80213E2C: bne         $v0, $zero, L_80213E3C
    if (ctx->r2 != 0) {
        // 0x80213E30: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80213E3C;
    }
    // 0x80213E30: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80213E34: b           L_80213F44
    // 0x80213E38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213F44;
    // 0x80213E38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213E3C:
    // 0x80213E3C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80213E40: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80213E44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80213E48: jal         0x80035EEC
    // 0x80213E4C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80213E4C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80213E50: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80213E54: bne         $v0, $zero, L_80213E6C
    if (ctx->r2 != 0) {
        // 0x80213E58: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80213E6C;
    }
    // 0x80213E58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80213E5C: jal         0x80034EF8
    // 0x80213E60: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x80213E60: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x80213E64: b           L_80213F44
    // 0x80213E68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213F44;
    // 0x80213E68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213E6C:
    // 0x80213E6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80213E70: addiu       $t6, $zero, 0x6020
    ctx->r14 = ADD32(0, 0X6020);
    // 0x80213E74: sh          $t6, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r14;
    // 0x80213E78: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80213E7C: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x80213E80: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x80213E84: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80213E88: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80213E8C: addiu       $a0, $a0, 0x1C0
    ctx->r4 = ADD32(ctx->r4, 0X1C0);
    // 0x80213E90: jal         0x80014840
    // 0x80213E94: addiu       $a1, $zero, 0x50A
    ctx->r5 = ADD32(0, 0X50A);
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x80213E94: addiu       $a1, $zero, 0x50A
    ctx->r5 = ADD32(0, 0X50A);
    after_3:
    // 0x80213E98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80213E9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80213EA0: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x80213EA4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80213EA8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80213EAC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80213EB0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80213EB4: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80213EB8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x80213EBC: addiu       $t7, $zero, 0xDD
    ctx->r15 = ADD32(0, 0XDD);
    // 0x80213EC0: sh          $t7, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r15;
    // 0x80213EC4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80213EC8: sh          $t1, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = ctx->r9;
    // 0x80213ECC: lh          $t2, 0x2E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2E);
    // 0x80213ED0: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x80213ED4: lh          $t7, 0x30($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X30);
    // 0x80213ED8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80213EDC: lui         $at, 0x435D
    ctx->r1 = S32(0X435D << 16);
    // 0x80213EE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80213EE4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80213EE8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80213EEC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80213EF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80213EF4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80213EF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80213EFC: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    // 0x80213F00: addiu       $t8, $zero, 0x1C
    ctx->r24 = ADD32(0, 0X1C);
    // 0x80213F04: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x80213F08: sw          $zero, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = 0;
    // 0x80213F0C: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80213F10: sh          $t8, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r24;
    // 0x80213F14: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80213F18: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80213F1C: swc1        $f2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f2.u32l;
    // 0x80213F20: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80213F24: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80213F28: swc1        $f12, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f12.u32l;
    // 0x80213F2C: swc1        $f14, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f14.u32l;
    // 0x80213F30: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80213F34: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80213F38: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80213F3C: sh          $t4, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r12;
    // 0x80213F40: sh          $t9, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r25;
L_80213F44:
    // 0x80213F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213F4C: jr          $ra
    // 0x80213F50: nop

    TRACE_RETURN()
    return;
    // 0x80213F50: nop

;}
RECOMP_FUNC void func_80210828_698228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021082C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210830: jal         0x80034EF8
    // 0x80210834: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80210834: nop

    after_0:
    // 0x80210838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021083C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210844: jr          $ra
    // 0x80210848: nop

    TRACE_RETURN()
    return;
    // 0x80210848: nop

;}
RECOMP_FUNC void func_80213094_69AA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213094: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80213098: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8021309C: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802130A0: jr          $ra
    // 0x802130A4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x802130A4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80211FB8_6999B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211FB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80211FBC: jr          $ra
    // 0x80211FC0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80211FC0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80213078_69AA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213078: lw          $t6, 0x88($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X88);
    // 0x8021307C: lh          $t7, 0x10($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X10);
    // 0x80213080: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80213084: lw          $t8, 0x88($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X88);
    // 0x80213088: lh          $t9, 0x12($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X12);
    // 0x8021308C: jr          $ra
    // 0x80213090: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80213090: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
;}
RECOMP_FUNC void func_802110FC_698AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802110FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80211100: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211104: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211108: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021110C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80211110: addiu       $t7, $t7, 0x4840
    ctx->r15 = ADD32(ctx->r15, 0X4840);
    // 0x80211114: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80211118: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8021111C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80211120: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x80211124: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80211128: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021112C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80211130: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80211134: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x80211138: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021113C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80211140: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x80211144: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80211148: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8021114C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80211150: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x80211154: or          $t3, $t8, $t1
    ctx->r11 = ctx->r24 | ctx->r9;
    // 0x80211158: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8021115C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80211160: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x80211164: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x80211168: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8021116C: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80211170: subu        $a1, $a0, $s0
    ctx->r5 = SUB32(ctx->r4, ctx->r16);
    // 0x80211174: jal         0x80040620
    // 0x80211178: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80211178: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021117C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211180: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80211184: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80211188: jr          $ra
    // 0x8021118C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8021118C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802116EC_6990EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802116EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802116F0: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x802116F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802116F8: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x802116FC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80211700: nop

    // 0x80211704: bc1fl       L_80211728
    if (!c1cs) {
        // 0x80211708: lwc1        $f10, 0x18($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
            goto L_80211728;
    }
    goto skip_0;
    // 0x80211708: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x8021170C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80211710: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80211714: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211718: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021171C: b           L_80211730
    // 0x80211720: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80211730;
    // 0x80211720: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80211724: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
L_80211728:
    // 0x80211728: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021172C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80211730:
    // 0x80211730: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80211734: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80211738: jr          $ra
    // 0x8021173C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021173C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8020D640_695040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D640: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8020D644: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020D648: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8020D64C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8020D650: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020D654: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8020D658: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8020D65C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8020D660: lw          $s2, 0x5C($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X5C);
    // 0x8020D664: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8020D668: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8020D66C: sltiu       $at, $v0, 0x31
    ctx->r1 = ctx->r2 < 0X31 ? 1 : 0;
    // 0x8020D670: beq         $at, $zero, L_8020F8F4
    if (ctx->r1 == 0) {
        // 0x8020D674: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_8020F8F4;
    }
    // 0x8020D674: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8020D678: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020D67C: addu        $at, $at, $t6
    gpr jr_addend_8020D684 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020D680: lw          $t6, 0x4F48($at)
    ctx->r14 = ADD32(ctx->r1, 0X4F48);
    // 0x8020D684: jr          $t6
    // 0x8020D688: nop

    switch (jr_addend_8020D684 >> 2) {
        case 0: goto L_8020D68C; break;
        case 1: goto L_8020D6A4; break;
        case 2: goto L_8020D6B0; break;
        case 3: goto L_8020D744; break;
        case 4: goto L_8020D9FC; break;
        case 5: goto L_8020DA80; break;
        case 6: goto L_8020DAF4; break;
        case 7: goto L_8020DBAC; break;
        case 8: goto L_8020DCEC; break;
        case 9: goto L_8020DD38; break;
        case 10: goto L_8020DD90; break;
        case 11: goto L_8020DDD4; break;
        case 12: goto L_8020DE20; break;
        case 13: goto L_8020DE48; break;
        case 14: goto L_8020DE7C; break;
        case 15: goto L_8020DF58; break;
        case 16: goto L_8020DFBC; break;
        case 17: goto L_8020E160; break;
        case 18: goto L_8020E1C0; break;
        case 19: goto L_8020E200; break;
        case 20: goto L_8020E268; break;
        case 21: goto L_8020E2F8; break;
        case 22: goto L_8020E390; break;
        case 23: goto L_8020E430; break;
        case 24: goto L_8020E4D0; break;
        case 25: goto L_8020E570; break;
        case 26: goto L_8020E648; break;
        case 27: goto L_8020E694; break;
        case 28: goto L_8020E6C4; break;
        case 29: goto L_8020E6E4; break;
        case 30: goto L_8020E6EC; break;
        case 31: goto L_8020E850; break;
        case 32: goto L_8020E988; break;
        case 33: goto L_8020E9E0; break;
        case 34: goto L_8020EACC; break;
        case 35: goto L_8020EBB8; break;
        case 36: goto L_8020EDA8; break;
        case 37: goto L_8020EEB8; break;
        case 38: goto L_8020EEE0; break;
        case 39: goto L_8020EF00; break;
        case 40: goto L_8020F088; break;
        case 41: goto L_8020F1BC; break;
        case 42: goto L_8020F268; break;
        case 43: goto L_8020F520; break;
        case 44: goto L_8020F598; break;
        case 45: goto L_8020F63C; break;
        case 46: goto L_8020F780; break;
        case 47: goto L_8020F8A4; break;
        case 48: goto L_8020F8D0; break;
        default: switch_error(__func__, 0x8020D684, 0x80214F48);
    }
    // 0x8020D688: nop

L_8020D68C:
    // 0x8020D68C: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8020D690: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x8020D694: bne         $at, $zero, L_8020F8F4
    if (ctx->r1 != 0) {
        // 0x8020D698: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_8020F8F4;
    }
    // 0x8020D698: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8020D69C: b           L_8020F8F4
    // 0x8020D6A0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
        goto L_8020F8F4;
    // 0x8020D6A0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020D6A4:
    // 0x8020D6A4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8020D6A8: b           L_8020F8F4
    // 0x8020D6AC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020D6AC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020D6B0:
    // 0x8020D6B0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8020D6B4: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x8020D6B8: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x8020D6BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8020D6C0: lhu         $t2, -0x520C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X520C);
    // 0x8020D6C4: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x8020D6C8: beq         $at, $zero, L_8020D738
    if (ctx->r1 == 0) {
        // 0x8020D6CC: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_8020D738;
    }
    // 0x8020D6CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8020D6D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020D6D4: addu        $at, $at, $t2
    gpr jr_addend_8020D6DC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8020D6D8: lw          $t2, 0x500C($at)
    ctx->r10 = ADD32(ctx->r1, 0X500C);
    // 0x8020D6DC: jr          $t2
    // 0x8020D6E0: nop

    switch (jr_addend_8020D6DC >> 2) {
        case 0: goto L_8020D6E4; break;
        case 1: goto L_8020D6F0; break;
        case 2: goto L_8020D6FC; break;
        case 3: goto L_8020D708; break;
        case 4: goto L_8020D714; break;
        case 5: goto L_8020D720; break;
        case 6: goto L_8020D72C; break;
        default: switch_error(__func__, 0x8020D6DC, 0x8021500C);
    }
    // 0x8020D6E0: nop

L_8020D6E4:
    // 0x8020D6E4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8020D6E8: b           L_8020F8F4
    // 0x8020D6EC: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020D6EC: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020D6F0:
    // 0x8020D6F0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x8020D6F4: b           L_8020F8F4
    // 0x8020D6F8: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020D6F8: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020D6FC:
    // 0x8020D6FC: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x8020D700: b           L_8020F8F4
    // 0x8020D704: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
        goto L_8020F8F4;
    // 0x8020D704: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
L_8020D708:
    // 0x8020D708: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8020D70C: b           L_8020F8F4
    // 0x8020D710: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_8020F8F4;
    // 0x8020D710: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_8020D714:
    // 0x8020D714: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x8020D718: b           L_8020F8F4
    // 0x8020D71C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020D71C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020D720:
    // 0x8020D720: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x8020D724: b           L_8020F8F4
    // 0x8020D728: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
        goto L_8020F8F4;
    // 0x8020D728: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020D72C:
    // 0x8020D72C: addiu       $t9, $zero, 0x2C
    ctx->r25 = ADD32(0, 0X2C);
    // 0x8020D730: b           L_8020F8F4
    // 0x8020D734: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020D734: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020D738:
    // 0x8020D738: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8020D73C: b           L_8020F8F4
    // 0x8020D740: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020D740: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020D744:
    // 0x8020D744: jal         0x8021358C
    // 0x8020D748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8021358C_69AF8C(rdram, ctx);
        goto after_0;
    // 0x8020D748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8020D74C: jal         0x8003D310
    // 0x8020D750: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    func_8003D310_3DF10(rdram, ctx);
        goto after_1;
    // 0x8020D750: addiu       $a0, $zero, 0x308
    ctx->r4 = ADD32(0, 0X308);
    after_1:
    // 0x8020D754: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020D758: sw          $t2, 0xEC($s2)
    MEM_W(0XEC, ctx->r18) = ctx->r10;
    // 0x8020D75C: jal         0x80212F2C
    // 0x8020D760: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212F2C_69A92C(rdram, ctx);
        goto after_2;
    // 0x8020D760: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x8020D764: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020D768: sw          $zero, 0xE0($s2)
    MEM_W(0XE0, ctx->r18) = 0;
    // 0x8020D76C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D770: jal         0x8021306C
    // 0x8020D774: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_3;
    // 0x8020D774: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    after_3:
    // 0x8020D778: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020D77C: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020D780: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x8020D784: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020D788: jal         0x80213058
    // 0x8020D78C: nop

    func_80213058_69AA58(rdram, ctx);
        goto after_4;
    // 0x8020D78C: nop

    after_4:
    // 0x8020D790: jal         0x80038B98
    // 0x8020D794: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80038B98_39798(rdram, ctx);
        goto after_5;
    // 0x8020D794: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_5:
    // 0x8020D798: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8020D79C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8020D7A0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8020D7A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020D7A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020D7AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020D7B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020D7B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020D7B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8020D7BC: jal         0x80213430
    // 0x8020D7C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_80213430_69AE30(rdram, ctx);
        goto after_6;
    // 0x8020D7C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_6:
    // 0x8020D7C4: sw          $v0, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = ctx->r2;
    // 0x8020D7C8: jal         0x80213580
    // 0x8020D7CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80213580_69AF80(rdram, ctx);
        goto after_7;
    // 0x8020D7CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x8020D7D0: addiu       $t5, $zero, 0x82
    ctx->r13 = ADD32(0, 0X82);
    // 0x8020D7D4: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x8020D7D8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8020D7DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8020D7E0:
    // 0x8020D7E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020D7E4: jal         0x80210B54
    // 0x8020D7E8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80210B54_698554(rdram, ctx);
        goto after_8;
    // 0x8020D7E8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_8:
    // 0x8020D7EC: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8020D7F0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D7F4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8020D7F8: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x8020D7FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D800: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x8020D804: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D808: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8020D80C: jal         0x80210C58
    // 0x8020D810: nop

    func_80210C58_698658(rdram, ctx);
        goto after_9;
    // 0x8020D810: nop

    after_9:
    // 0x8020D814: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8020D818: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x8020D81C: jal         0x80210C78
    // 0x8020D820: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    func_80210C78_698678(rdram, ctx);
        goto after_10;
    // 0x8020D820: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    after_10:
    // 0x8020D824: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8020D828: addiu       $s1, $s1, 0x1C2
    ctx->r17 = ADD32(ctx->r17, 0X1C2);
    // 0x8020D82C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8020D830: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x8020D834: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8020D838: bne         $at, $zero, L_8020D7E0
    if (ctx->r1 != 0) {
        // 0x8020D83C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020D7E0;
    }
    // 0x8020D83C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020D840: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8020D844: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_8020D848:
    // 0x8020D848: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020D84C: addiu       $a1, $a1, -0x5E50
    ctx->r5 = ADD32(ctx->r5, -0X5E50);
    // 0x8020D850: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020D854: jal         0x80210988
    // 0x8020D858: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_11;
    // 0x8020D858: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_11:
    // 0x8020D85C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8020D860: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8020D864: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D868: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x8020D86C: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x8020D870: lui         $a3, 0xC37A
    ctx->r7 = S32(0XC37A << 16);
    // 0x8020D874: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D878: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8020D87C: jal         0x80210A74
    // 0x8020D880: nop

    func_80210A74_698474(rdram, ctx);
        goto after_12;
    // 0x8020D880: nop

    after_12:
    // 0x8020D884: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x8020D888: jal         0x80210AB4
    // 0x8020D88C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_13;
    // 0x8020D88C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_13:
    // 0x8020D890: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x8020D894: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020D898: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D89C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020D8A0: jal         0x80210A94
    // 0x8020D8A4: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_80210A94_698494(rdram, ctx);
        goto after_14;
    // 0x8020D8A4: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_14:
    // 0x8020D8A8: addiu       $s1, $s1, 0x122
    ctx->r17 = ADD32(ctx->r17, 0X122);
    // 0x8020D8AC: slti        $at, $s1, 0x122
    ctx->r1 = SIGNED(ctx->r17) < 0X122 ? 1 : 0;
    // 0x8020D8B0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8020D8B4: bne         $at, $zero, L_8020D848
    if (ctx->r1 != 0) {
        // 0x8020D8B8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020D848;
    }
    // 0x8020D8B8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020D8BC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8020D8C0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_8020D8C4:
    // 0x8020D8C4: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020D8C8: addiu       $a1, $a1, -0x1CF0
    ctx->r5 = ADD32(ctx->r5, -0X1CF0);
    // 0x8020D8CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020D8D0: jal         0x80210988
    // 0x8020D8D4: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_15;
    // 0x8020D8D4: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_15:
    // 0x8020D8D8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8020D8DC: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x8020D8E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D8E4: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8020D8E8: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x8020D8EC: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x8020D8F0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D8F4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020D8F8: jal         0x80210A74
    // 0x8020D8FC: nop

    func_80210A74_698474(rdram, ctx);
        goto after_16;
    // 0x8020D8FC: nop

    after_16:
    // 0x8020D900: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    // 0x8020D904: jal         0x80210AB4
    // 0x8020D908: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_17;
    // 0x8020D908: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_17:
    // 0x8020D90C: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x8020D910: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020D914: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D918: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020D91C: jal         0x80210A94
    // 0x8020D920: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    func_80210A94_698494(rdram, ctx);
        goto after_18;
    // 0x8020D920: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    after_18:
    // 0x8020D924: addiu       $s1, $s1, 0x190
    ctx->r17 = ADD32(ctx->r17, 0X190);
    // 0x8020D928: slti        $at, $s1, 0x320
    ctx->r1 = SIGNED(ctx->r17) < 0X320 ? 1 : 0;
    // 0x8020D92C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8020D930: bne         $at, $zero, L_8020D8C4
    if (ctx->r1 != 0) {
        // 0x8020D934: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020D8C4;
    }
    // 0x8020D934: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020D938: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8020D93C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_8020D940:
    // 0x8020D940: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020D944: addiu       $a1, $a1, -0x17F8
    ctx->r5 = ADD32(ctx->r5, -0X17F8);
    // 0x8020D948: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020D94C: jal         0x80210988
    // 0x8020D950: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    func_80210988_698388(rdram, ctx);
        goto after_19;
    // 0x8020D950: addiu       $a2, $zero, 0x28D
    ctx->r6 = ADD32(0, 0X28D);
    after_19:
    // 0x8020D954: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8020D958: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x8020D95C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D960: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x8020D964: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x8020D968: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x8020D96C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D970: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020D974: jal         0x80210A74
    // 0x8020D978: nop

    func_80210A74_698474(rdram, ctx);
        goto after_20;
    // 0x8020D978: nop

    after_20:
    // 0x8020D97C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x8020D980: jal         0x80210AB4
    // 0x8020D984: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_80210AB4_6984B4(rdram, ctx);
        goto after_21;
    // 0x8020D984: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_21:
    // 0x8020D988: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x8020D98C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020D990: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D994: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020D998: jal         0x80210A94
    // 0x8020D99C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    func_80210A94_698494(rdram, ctx);
        goto after_22;
    // 0x8020D99C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    after_22:
    // 0x8020D9A0: addiu       $s1, $s1, 0x1F4
    ctx->r17 = ADD32(ctx->r17, 0X1F4);
    // 0x8020D9A4: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x8020D9A8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8020D9AC: bne         $s1, $at, L_8020D940
    if (ctx->r17 != ctx->r1) {
        // 0x8020D9B0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020D940;
    }
    // 0x8020D9B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020D9B4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020D9B8: jal         0x80012500
    // 0x8020D9BC: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    func_80012500_13100(rdram, ctx);
        goto after_23;
    // 0x8020D9BC: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    after_23:
    // 0x8020D9C0: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020D9C4: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x8020D9C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8020D9CC: jal         0x800127B8
    // 0x8020D9D0: lui         $a3, 0x4350
    ctx->r7 = S32(0X4350 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_24;
    // 0x8020D9D0: lui         $a3, 0x4350
    ctx->r7 = S32(0X4350 << 16);
    after_24:
    // 0x8020D9D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020D9D8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020D9DC: lui         $a2, 0xC140
    ctx->r6 = S32(0XC140 << 16);
    // 0x8020D9E0: jal         0x80012818
    // 0x8020D9E4: lui         $a3, 0x4254
    ctx->r7 = S32(0X4254 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_25;
    // 0x8020D9E4: lui         $a3, 0x4254
    ctx->r7 = S32(0X4254 << 16);
    after_25:
    // 0x8020D9E8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020D9EC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020D9F0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020D9F4: b           L_8020F8F4
    // 0x8020D9F8: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020D9F8: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020D9FC:
    // 0x8020D9FC: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8020DA00: slti        $at, $t8, 0x1E0
    ctx->r1 = SIGNED(ctx->r24) < 0X1E0 ? 1 : 0;
    // 0x8020DA04: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DA08: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_0;
    // 0x8020DA08: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_0:
    // 0x8020DA0C: jal         0x80210E58
    // 0x8020DA10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80210E58_698858(rdram, ctx);
        goto after_26;
    // 0x8020DA10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_26:
    // 0x8020DA14: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8020DA18: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8020DA1C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020DA20: jal         0x80210FE0
    // 0x8020DA24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210FE0_6989E0(rdram, ctx);
        goto after_27;
    // 0x8020DA24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_27:
    // 0x8020DA28: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DA2C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8020DA30: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x8020DA34: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DA38: jal         0x80210F80
    // 0x8020DA3C: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    func_80210F80_698980(rdram, ctx);
        goto after_28;
    // 0x8020DA3C: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    after_28:
    // 0x8020DA40: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8020DA44: jal         0x80211018
    // 0x8020DA48: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    func_80211018_698A18(rdram, ctx);
        goto after_29;
    // 0x8020DA48: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_29:
    // 0x8020DA4C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8020DA50: jal         0x80211020
    // 0x8020DA54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80211020_698A20(rdram, ctx);
        goto after_30;
    // 0x8020DA54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_30:
    // 0x8020DA58: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DA5C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DA60: lui         $a3, 0xBE8A
    ctx->r7 = S32(0XBE8A << 16);
    // 0x8020DA64: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x8020DA68: jal         0x80210FC0
    // 0x8020DA6C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_80210FC0_6989C0(rdram, ctx);
        goto after_31;
    // 0x8020DA6C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_31:
    // 0x8020DA70: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020DA74: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020DA78: b           L_8020F8F4
    // 0x8020DA7C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020DA7C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020DA80:
    // 0x8020DA80: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8020DA84: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8020DA88: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8020DA8C: jal         0x80210FA0
    // 0x8020DA90: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    func_80210FA0_6989A0(rdram, ctx);
        goto after_32;
    // 0x8020DA90: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    after_32:
    // 0x8020DA94: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020DA9C: ldc1        $f18, 0x5028($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X5028);
    // 0x8020DAA0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020DAA4: c.le.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d <= ctx->f18.d;
    // 0x8020DAA8: nop

    // 0x8020DAAC: bc1f        L_8020DAEC
    if (!c1cs) {
        // 0x8020DAB0: nop
    
            goto L_8020DAEC;
    }
    // 0x8020DAB0: nop

    // 0x8020DAB4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DAB8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8020DABC: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x8020DAC0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DAC4: jal         0x80210F80
    // 0x8020DAC8: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    func_80210F80_698980(rdram, ctx);
        goto after_33;
    // 0x8020DAC8: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    after_33:
    // 0x8020DACC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DAD0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DAD4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020DAD8: jal         0x80210FC0
    // 0x8020DADC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_80210FC0_6989C0(rdram, ctx);
        goto after_34;
    // 0x8020DADC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_34:
    // 0x8020DAE0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020DAE4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020DAE8: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020DAEC:
    // 0x8020DAEC: b           L_8020F8F8
    // 0x8020DAF0: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
        goto L_8020F8F8;
    // 0x8020DAF0: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
L_8020DAF4:
    // 0x8020DAF4: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8020DAF8: slti        $at, $t4, 0x384
    ctx->r1 = SIGNED(ctx->r12) < 0X384 ? 1 : 0;
    // 0x8020DAFC: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DB00: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_1;
    // 0x8020DB00: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_1:
    // 0x8020DB04: jal         0x80210F5C
    // 0x8020DB08: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_80210F5C_69895C(rdram, ctx);
        goto after_35;
    // 0x8020DB08: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_35:
    // 0x8020DB0C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8020DB10: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020DB14: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020DB18:
    // 0x8020DB18: jal         0x80210C34
    // 0x8020DB1C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_80210C34_698634(rdram, ctx);
        goto after_36;
    // 0x8020DB1C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_36:
    // 0x8020DB20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020DB24: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8020DB28: blez        $s1, L_8020DB18
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8020DB2C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020DB18;
    }
    // 0x8020DB2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020DB30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020DB34: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020DB38:
    // 0x8020DB38: jal         0x80210A50
    // 0x8020DB3C: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_80210A50_698450(rdram, ctx);
        goto after_37;
    // 0x8020DB3C: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_37:
    // 0x8020DB40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020DB44: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8020DB48: blez        $s1, L_8020DB38
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8020DB4C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020DB38;
    }
    // 0x8020DB4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020DB50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020DB54: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020DB58:
    // 0x8020DB58: jal         0x80210A50
    // 0x8020DB5C: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    func_80210A50_698450(rdram, ctx);
        goto after_38;
    // 0x8020DB5C: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
    after_38:
    // 0x8020DB60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020DB64: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8020DB68: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x8020DB6C: bne         $at, $zero, L_8020DB58
    if (ctx->r1 != 0) {
        // 0x8020DB70: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020DB58;
    }
    // 0x8020DB70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020DB74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020DB78: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020DB7C:
    // 0x8020DB7C: jal         0x80210A50
    // 0x8020DB80: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    func_80210A50_698450(rdram, ctx);
        goto after_39;
    // 0x8020DB80: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    after_39:
    // 0x8020DB84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020DB88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020DB8C: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x8020DB90: bne         $s1, $at, L_8020DB7C
    if (ctx->r17 != ctx->r1) {
        // 0x8020DB94: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020DB7C;
    }
    // 0x8020DB94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020DB98: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020DB9C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020DBA0: sw          $t5, 0xE0($s2)
    MEM_W(0XE0, ctx->r18) = ctx->r13;
    // 0x8020DBA4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020DBA8: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020DBAC:
    // 0x8020DBAC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DBB0: jal         0x80012500
    // 0x8020DBB4: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_40;
    // 0x8020DBB4: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_40:
    // 0x8020DBB8: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020DBBC: bne         $a0, $zero, L_8020DBD4
    if (ctx->r4 != 0) {
        // 0x8020DBC0: nop
    
            goto L_8020DBD4;
    }
    // 0x8020DBC0: nop

    // 0x8020DBC4: jal         0x80212F2C
    // 0x8020DBC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212F2C_69A92C(rdram, ctx);
        goto after_41;
    // 0x8020DBC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_41:
    // 0x8020DBCC: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020DBD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8020DBD4:
    // 0x8020DBD4: jal         0x8021306C
    // 0x8020DBD8: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_42;
    // 0x8020DBD8: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    after_42:
    // 0x8020DBDC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DBE0: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020DBE4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020DBE8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DBEC: jal         0x80213058
    // 0x8020DBF0: nop

    func_80213058_69AA58(rdram, ctx);
        goto after_43;
    // 0x8020DBF0: nop

    after_43:
    // 0x8020DBF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DBF8: jal         0x8020FD8C
    // 0x8020DBFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FD8C_69778C(rdram, ctx);
        goto after_44;
    // 0x8020DBFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_44:
    // 0x8020DC00: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DC04: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020DC08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DC0C: jal         0x8020FEA0
    // 0x8020DC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_45;
    // 0x8020DC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_45:
    // 0x8020DC14: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DC18: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020DC1C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020DC20: jal         0x80210520
    // 0x8020DC24: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_46;
    // 0x8020DC24: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    after_46:
    // 0x8020DC28: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020DC2C: addiu       $a1, $a1, -0x1160
    ctx->r5 = ADD32(ctx->r5, -0X1160);
    // 0x8020DC30: jal         0x80210688
    // 0x8020DC34: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210688_698088(rdram, ctx);
        goto after_47;
    // 0x8020DC34: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_47:
    // 0x8020DC38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DC3C: jal         0x8020FD8C
    // 0x8020DC40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_48;
    // 0x8020DC40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_48:
    // 0x8020DC44: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DC48: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020DC4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DC50: jal         0x8020FEA0
    // 0x8020DC54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_49;
    // 0x8020DC54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_49:
    // 0x8020DC58: lui         $a1, 0x414C
    ctx->r5 = S32(0X414C << 16);
    // 0x8020DC5C: lui         $a3, 0x4225
    ctx->r7 = S32(0X4225 << 16);
    // 0x8020DC60: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8020DC64: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020DC68: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020DC6C: jal         0x80210520
    // 0x8020DC70: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_50;
    // 0x8020DC70: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    after_50:
    // 0x8020DC74: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020DC78: jal         0x80210618
    // 0x8020DC7C: addiu       $a1, $zero, 0x3F5
    ctx->r5 = ADD32(0, 0X3F5);
    func_80210618_698018(rdram, ctx);
        goto after_51;
    // 0x8020DC7C: addiu       $a1, $zero, 0x3F5
    ctx->r5 = ADD32(0, 0X3F5);
    after_51:
    // 0x8020DC80: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8020DC84: addiu       $a1, $a1, 0x520
    ctx->r5 = ADD32(ctx->r5, 0X520);
    // 0x8020DC88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DC8C: jal         0x80210988
    // 0x8020DC90: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    func_80210988_698388(rdram, ctx);
        goto after_52;
    // 0x8020DC90: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    after_52:
    // 0x8020DC94: lui         $a3, 0x42EC
    ctx->r7 = S32(0X42EC << 16);
    // 0x8020DC98: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020DC9C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8020DCA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DCA4: lui         $a1, 0xC1B8
    ctx->r5 = S32(0XC1B8 << 16);
    // 0x8020DCA8: jal         0x80210A74
    // 0x8020DCAC: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    func_80210A74_698474(rdram, ctx);
        goto after_53;
    // 0x8020DCAC: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    after_53:
    // 0x8020DCB0: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DCB4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8020DCB8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020DCBC: jal         0x800127B8
    // 0x8020DCC0: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_54;
    // 0x8020DCC0: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_54:
    // 0x8020DCC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DCC8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DCCC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020DCD0: jal         0x80012818
    // 0x8020DCD4: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_55;
    // 0x8020DCD4: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_55:
    // 0x8020DCD8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020DCDC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DCE0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020DCE4: b           L_8020F8F4
    // 0x8020DCE8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020DCE8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020DCEC:
    // 0x8020DCEC: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8020DCF0: slti        $at, $t1, 0x3C
    ctx->r1 = SIGNED(ctx->r9) < 0X3C ? 1 : 0;
    // 0x8020DCF4: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DCF8: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_2;
    // 0x8020DCF8: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_2:
    // 0x8020DCFC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DD00: jal         0x800124A0
    // 0x8020DD04: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_56;
    // 0x8020DD04: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_56:
    // 0x8020DD08: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DD0C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DD10: lui         $a3, 0x4374
    ctx->r7 = S32(0X4374 << 16);
    // 0x8020DD14: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DD18: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DD1C: jal         0x80012518
    // 0x8020DD20: nop

    func_80012518_13118(rdram, ctx);
        goto after_57;
    // 0x8020DD20: nop

    after_57:
    // 0x8020DD24: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020DD28: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DD2C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020DD30: b           L_8020F8F4
    // 0x8020DD34: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020DD34: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020DD38:
    // 0x8020DD38: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8020DD3C: slti        $at, $t4, 0xF0
    ctx->r1 = SIGNED(ctx->r12) < 0XF0 ? 1 : 0;
    // 0x8020DD40: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DD44: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_3;
    // 0x8020DD44: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_3:
    // 0x8020DD48: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DD4C: jal         0x800124A0
    // 0x8020DD50: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_58;
    // 0x8020DD50: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_58:
    // 0x8020DD54: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DD58: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DD5C: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x8020DD60: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DD64: jal         0x80012518
    // 0x8020DD68: lui         $a3, 0x4374
    ctx->r7 = S32(0X4374 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_59;
    // 0x8020DD68: lui         $a3, 0x4374
    ctx->r7 = S32(0X4374 << 16);
    after_59:
    // 0x8020DD6C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DD70: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DD74: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x8020DD78: jal         0x80012628
    // 0x8020DD7C: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_60;
    // 0x8020DD7C: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_60:
    // 0x8020DD80: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8020DD84: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020DD88: b           L_8020F8F4
    // 0x8020DD8C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_8020F8F4;
    // 0x8020DD8C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_8020DD90:
    // 0x8020DD90: jal         0x80012380
    // 0x8020DD94: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012380_12F80(rdram, ctx);
        goto after_61;
    // 0x8020DD94: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_61:
    // 0x8020DD98: bnel        $v0, $zero, L_8020F8F8
    if (ctx->r2 != 0) {
        // 0x8020DD9C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_4;
    // 0x8020DD9C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_4:
    // 0x8020DDA0: jal         0x8020FE7C
    // 0x8020DDA4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_62;
    // 0x8020DDA4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_62:
    // 0x8020DDA8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020DDAC: jal         0x80213008
    // 0x8020DDB0: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    func_80213008_69AA08(rdram, ctx);
        goto after_63;
    // 0x8020DDB0: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    after_63:
    // 0x8020DDB4: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020DDB8: jal         0x80012470
    // 0x8020DDBC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012470_13070(rdram, ctx);
        goto after_64;
    // 0x8020DDBC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_64:
    // 0x8020DDC0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8020DDC4: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DDC8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020DDCC: b           L_8020F8F4
    // 0x8020DDD0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
        goto L_8020F8F4;
    // 0x8020DDD0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020DDD4:
    // 0x8020DDD4: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8020DDD8: slti        $at, $t9, 0x3C
    ctx->r1 = SIGNED(ctx->r25) < 0X3C ? 1 : 0;
    // 0x8020DDDC: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DDE0: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_5;
    // 0x8020DDE0: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_5:
    // 0x8020DDE4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DDE8: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x8020DDEC: lui         $a2, 0xC258
    ctx->r6 = S32(0XC258 << 16);
    // 0x8020DDF0: jal         0x800127B8
    // 0x8020DDF4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_65;
    // 0x8020DDF4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_65:
    // 0x8020DDF8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DDFC: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    // 0x8020DE00: lui         $a2, 0xC288
    ctx->r6 = S32(0XC288 << 16);
    // 0x8020DE04: jal         0x80012818
    // 0x8020DE08: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_66;
    // 0x8020DE08: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_66:
    // 0x8020DE0C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8020DE10: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DE14: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8020DE18: b           L_8020F8F4
    // 0x8020DE1C: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
        goto L_8020F8F4;
    // 0x8020DE1C: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_8020DE20:
    // 0x8020DE20: jal         0x8021358C
    // 0x8020DE24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8021358C_69AF8C(rdram, ctx);
        goto after_67;
    // 0x8020DE24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_67:
    // 0x8020DE28: bnel        $v0, $zero, L_8020F8F8
    if (ctx->r2 != 0) {
        // 0x8020DE2C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_6;
    // 0x8020DE2C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_6:
    // 0x8020DE30: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8020DE34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020DE38: sw          $t3, 0xF4($s2)
    MEM_W(0XF4, ctx->r18) = ctx->r11;
    // 0x8020DE3C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8020DE40: b           L_8020F8F4
    // 0x8020DE44: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
        goto L_8020F8F4;
    // 0x8020DE44: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
L_8020DE48:
    // 0x8020DE48: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x8020DE4C: slti        $at, $t6, 0x78
    ctx->r1 = SIGNED(ctx->r14) < 0X78 ? 1 : 0;
    // 0x8020DE50: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DE54: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_7;
    // 0x8020DE54: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_7:
    // 0x8020DE58: jal         0x8020FE7C
    // 0x8020DE5C: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_68;
    // 0x8020DE5C: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    after_68:
    // 0x8020DE60: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020DE64: jal         0x80210A50
    // 0x8020DE68: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    func_80210A50_698450(rdram, ctx);
        goto after_69;
    // 0x8020DE68: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    after_69:
    // 0x8020DE6C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8020DE70: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020DE74: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020DE78: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020DE7C:
    // 0x8020DE7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DE80: jal         0x8020FD8C
    // 0x8020DE84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_70;
    // 0x8020DE84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_70:
    // 0x8020DE88: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DE8C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020DE90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DE94: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DE98: jal         0x8020FEA0
    // 0x8020DE9C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_71;
    // 0x8020DE9C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_71:
    // 0x8020DEA0: lui         $a1, 0x4119
    ctx->r5 = S32(0X4119 << 16);
    // 0x8020DEA4: lui         $a3, 0x4033
    ctx->r7 = S32(0X4033 << 16);
    // 0x8020DEA8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8020DEAC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8020DEB0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020DEB4: jal         0x80210520
    // 0x8020DEB8: lui         $a2, 0xC0E0
    ctx->r6 = S32(0XC0E0 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_72;
    // 0x8020DEB8: lui         $a2, 0xC0E0
    ctx->r6 = S32(0XC0E0 << 16);
    after_72:
    // 0x8020DEBC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020DEC0: jal         0x80210618
    // 0x8020DEC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80210618_698018(rdram, ctx);
        goto after_73;
    // 0x8020DEC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_73:
    // 0x8020DEC8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8020DECC: addiu       $a1, $a1, 0x1D48
    ctx->r5 = ADD32(ctx->r5, 0X1D48);
    // 0x8020DED0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DED4: jal         0x80210988
    // 0x8020DED8: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    func_80210988_698388(rdram, ctx);
        goto after_74;
    // 0x8020DED8: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    after_74:
    // 0x8020DEDC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020DEE0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020DEE4: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020DEE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DEEC: jal         0x80210A74
    // 0x8020DEF0: lui         $a2, 0xC334
    ctx->r6 = S32(0XC334 << 16);
    func_80210A74_698474(rdram, ctx);
        goto after_75;
    // 0x8020DEF0: lui         $a2, 0xC334
    ctx->r6 = S32(0XC334 << 16);
    after_75:
    // 0x8020DEF4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DEF8: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x8020DEFC: lui         $a2, 0xC140
    ctx->r6 = S32(0XC140 << 16);
    // 0x8020DF00: jal         0x800127B8
    // 0x8020DF04: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_76;
    // 0x8020DF04: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    after_76:
    // 0x8020DF08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020DF0C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020DF10: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DF14: jal         0x80012818
    // 0x8020DF18: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_77;
    // 0x8020DF18: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    after_77:
    // 0x8020DF1C: jal         0x80212F2C
    // 0x8020DF20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212F2C_69A92C(rdram, ctx);
        goto after_78;
    // 0x8020DF20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_78:
    // 0x8020DF24: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020DF28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DF2C: jal         0x8021306C
    // 0x8020DF30: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_79;
    // 0x8020DF30: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_79:
    // 0x8020DF34: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020DF38: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    // 0x8020DF3C: jal         0x80213058
    // 0x8020DF40: lui         $a2, 0xC240
    ctx->r6 = S32(0XC240 << 16);
    func_80213058_69AA58(rdram, ctx);
        goto after_80;
    // 0x8020DF40: lui         $a2, 0xC240
    ctx->r6 = S32(0XC240 << 16);
    after_80:
    // 0x8020DF44: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020DF48: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DF4C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020DF50: b           L_8020F8F4
    // 0x8020DF54: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020DF54: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020DF58:
    // 0x8020DF58: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DF5C: jal         0x800124A0
    // 0x8020DF60: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_81;
    // 0x8020DF60: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_81:
    // 0x8020DF64: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DF68: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DF6C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    // 0x8020DF70: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020DF74: jal         0x80012628
    // 0x8020DF78: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_82;
    // 0x8020DF78: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_82:
    // 0x8020DF7C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DF80: jal         0x800124A0
    // 0x8020DF84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_83;
    // 0x8020DF84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_83:
    // 0x8020DF88: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020DF8C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8020DF90: addiu       $t2, $zero, 0x10E
    ctx->r10 = ADD32(0, 0X10E);
    // 0x8020DF94: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8020DF98: addiu       $a2, $a2, 0x4600
    ctx->r6 = ADD32(ctx->r6, 0X4600);
    // 0x8020DF9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020DFA0: jal         0x800125F0
    // 0x8020DFA4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800125F0_131F0(rdram, ctx);
        goto after_84;
    // 0x8020DFA4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_84:
    // 0x8020DFA8: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020DFAC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020DFB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020DFB4: b           L_8020F8F4
    // 0x8020DFB8: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020DFB8: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020DFBC:
    // 0x8020DFBC: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020DFC0: slti        $at, $t5, 0x168
    ctx->r1 = SIGNED(ctx->r13) < 0X168 ? 1 : 0;
    // 0x8020DFC4: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020DFC8: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_8;
    // 0x8020DFC8: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_8:
    // 0x8020DFCC: jal         0x8020FE7C
    // 0x8020DFD0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_85;
    // 0x8020DFD0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_85:
    // 0x8020DFD4: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020DFD8: jal         0x80210A50
    // 0x8020DFDC: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    func_80210A50_698450(rdram, ctx);
        goto after_86;
    // 0x8020DFDC: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    after_86:
    // 0x8020DFE0: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020DFE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020DFE8: jal         0x8020FD8C
    // 0x8020DFEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_87;
    // 0x8020DFEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_87:
    // 0x8020DFF0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020DFF4: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020DFF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DFFC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E000: jal         0x8020FEA0
    // 0x8020E004: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_88;
    // 0x8020E004: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_88:
    // 0x8020E008: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E00C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E010: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E014: jal         0x80210520
    // 0x8020E018: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_80210520_697F20(rdram, ctx);
        goto after_89;
    // 0x8020E018: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_89:
    // 0x8020E01C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E020: jal         0x80210618
    // 0x8020E024: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    func_80210618_698018(rdram, ctx);
        goto after_90;
    // 0x8020E024: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    after_90:
    // 0x8020E028: lui         $s1, 0x800
    ctx->r17 = S32(0X800 << 16);
    // 0x8020E02C: addiu       $s1, $s1, 0xE78
    ctx->r17 = ADD32(ctx->r17, 0XE78);
    // 0x8020E030: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8020E034: addiu       $v1, $zero, -0x32
    ctx->r3 = ADD32(0, -0X32);
    // 0x8020E038: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8020E03C:
    // 0x8020E03C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8020E040: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    // 0x8020E044: jal         0x80210988
    // 0x8020E048: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_80210988_698388(rdram, ctx);
        goto after_91;
    // 0x8020E048: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_91:
    // 0x8020E04C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8020E050: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E054: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020E058: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x8020E05C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E060: lui         $a2, 0xC2A3
    ctx->r6 = S32(0XC2A3 << 16);
    // 0x8020E064: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020E068: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020E06C: jal         0x80210A74
    // 0x8020E070: nop

    func_80210A74_698474(rdram, ctx);
        goto after_92;
    // 0x8020E070: nop

    after_92:
    // 0x8020E074: lui         $a1, 0xBF8C
    ctx->r5 = S32(0XBF8C << 16);
    // 0x8020E078: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E07C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E080: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020E084: jal         0x80210A94
    // 0x8020E088: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    func_80210A94_698494(rdram, ctx);
        goto after_93;
    // 0x8020E088: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    after_93:
    // 0x8020E08C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8020E090: addiu       $at, $zero, 0x262
    ctx->r1 = ADD32(0, 0X262);
    // 0x8020E094: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020E098: addiu       $v1, $v1, 0x14A
    ctx->r3 = ADD32(ctx->r3, 0X14A);
    // 0x8020E09C: bnel        $v1, $at, L_8020E03C
    if (ctx->r3 != ctx->r1) {
        // 0x8020E0A0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8020E03C;
    }
    goto skip_9;
    // 0x8020E0A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_9:
    // 0x8020E0A4: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020E0A8: beq         $a0, $zero, L_8020E0BC
    if (ctx->r4 == 0) {
        // 0x8020E0AC: nop
    
            goto L_8020E0BC;
    }
    // 0x8020E0AC: nop

    // 0x8020E0B0: jal         0x80213008
    // 0x8020E0B4: nop

    func_80213008_69AA08(rdram, ctx);
        goto after_94;
    // 0x8020E0B4: nop

    after_94:
    // 0x8020E0B8: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
L_8020E0BC:
    // 0x8020E0BC: jal         0x802130A8
    // 0x8020E0C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_802130A8_69AAA8(rdram, ctx);
        goto after_95;
    // 0x8020E0C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_95:
    // 0x8020E0C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020E0C8: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020E0CC: sw          $t6, 0xE4($s2)
    MEM_W(0XE4, ctx->r18) = ctx->r14;
    // 0x8020E0D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E0D4: jal         0x8021306C
    // 0x8020E0D8: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_96;
    // 0x8020E0D8: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    after_96:
    // 0x8020E0DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E0E0: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020E0E4: jal         0x80213058
    // 0x8020E0E8: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    func_80213058_69AA58(rdram, ctx);
        goto after_97;
    // 0x8020E0E8: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    after_97:
    // 0x8020E0EC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E0F0: lui         $a1, 0x4268
    ctx->r5 = S32(0X4268 << 16);
    // 0x8020E0F4: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x8020E0F8: jal         0x800127B8
    // 0x8020E0FC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_98;
    // 0x8020E0FC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_98:
    // 0x8020E100: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E104: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E108: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E10C: jal         0x80012818
    // 0x8020E110: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_99;
    // 0x8020E110: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_99:
    // 0x8020E114: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E118: jal         0x800124A0
    // 0x8020E11C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_100;
    // 0x8020E11C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_100:
    // 0x8020E120: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E124: jal         0x800124A0
    // 0x8020E128: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_101;
    // 0x8020E128: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_101:
    // 0x8020E12C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E130: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8020E134: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x8020E138: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8020E13C: addiu       $a2, $a2, 0x4630
    ctx->r6 = ADD32(ctx->r6, 0X4630);
    // 0x8020E140: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020E144: jal         0x800125F0
    // 0x8020E148: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800125F0_131F0(rdram, ctx);
        goto after_102;
    // 0x8020E148: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_102:
    // 0x8020E14C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020E150: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E154: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020E158: b           L_8020F8F4
    // 0x8020E15C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020E15C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020E160:
    // 0x8020E160: lw          $t1, 0x80($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X80);
    // 0x8020E164: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x8020E168: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020E16C: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x8020E170: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8020E174: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8020E178: nop

    // 0x8020E17C: bc1t        L_8020F8F4
    if (c1cs) {
        // 0x8020E180: lui         $a1, 0x4013
        ctx->r5 = S32(0X4013 << 16);
            goto L_8020F8F4;
    }
    // 0x8020E180: lui         $a1, 0x4013
    ctx->r5 = S32(0X4013 << 16);
    // 0x8020E184: lui         $a2, 0xBDF5
    ctx->r6 = S32(0XBDF5 << 16);
    // 0x8020E188: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8020E18C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8020E190: jal         0x80210624
    // 0x8020E194: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_80210624_698024(rdram, ctx);
        goto after_103;
    // 0x8020E194: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_103:
    // 0x8020E198: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E19C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E1A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8020E1A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E1A8: jal         0x8020FEA0
    // 0x8020E1AC: nop

    func_8020FEA0_6978A0(rdram, ctx);
        goto after_104;
    // 0x8020E1AC: nop

    after_104:
    // 0x8020E1B0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020E1B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020E1B8: b           L_8020F8F4
    // 0x8020E1BC: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020E1BC: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020E1C0:
    // 0x8020E1C0: jal         0x80210680
    // 0x8020E1C4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_80210680_698080(rdram, ctx);
        goto after_105;
    // 0x8020E1C4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_105:
    // 0x8020E1C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E1CC: nop

    // 0x8020E1D0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8020E1D4: nop

    // 0x8020E1D8: bc1fl       L_8020F8F8
    if (!c1cs) {
        // 0x8020E1DC: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_10;
    // 0x8020E1DC: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_10:
    // 0x8020E1E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E1E4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E1E8: jal         0x8020FEA0
    // 0x8020E1EC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_106;
    // 0x8020E1EC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_106:
    // 0x8020E1F0: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8020E1F4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020E1F8: b           L_8020F8F4
    // 0x8020E1FC: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_8020F8F4;
    // 0x8020E1FC: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_8020E200:
    // 0x8020E200: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E204: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E208: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x8020E20C: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8020E210: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x8020E214: nop

    // 0x8020E218: bc1tl       L_8020F8F8
    if (c1cs) {
        // 0x8020E21C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_11;
    // 0x8020E21C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_11:
    // 0x8020E220: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E224: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E228: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E22C: jal         0x80210520
    // 0x8020E230: nop

    func_80210520_697F20(rdram, ctx);
        goto after_107;
    // 0x8020E230: nop

    after_107:
    // 0x8020E234: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E238: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E23C: jal         0x80210624
    // 0x8020E240: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_80210624_698024(rdram, ctx);
        goto after_108;
    // 0x8020E240: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_108:
    // 0x8020E244: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E248: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E24C: jal         0x8020FEA0
    // 0x8020E250: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_109;
    // 0x8020E250: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_109:
    // 0x8020E254: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020E258: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E25C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020E260: b           L_8020F8F4
    // 0x8020E264: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020E264: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020E268:
    // 0x8020E268: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8020E26C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8020E270: bnel        $v0, $at, L_8020E298
    if (ctx->r2 != ctx->r1) {
        // 0x8020E274: slti        $at, $v0, 0x8E
        ctx->r1 = SIGNED(ctx->r2) < 0X8E ? 1 : 0;
            goto L_8020E298;
    }
    goto skip_12;
    // 0x8020E274: slti        $at, $v0, 0x8E
    ctx->r1 = SIGNED(ctx->r2) < 0X8E ? 1 : 0;
    skip_12:
    // 0x8020E278: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E27C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E280: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8020E284: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E288: jal         0x8020FEA0
    // 0x8020E28C: nop

    func_8020FEA0_6978A0(rdram, ctx);
        goto after_110;
    // 0x8020E28C: nop

    after_110:
    // 0x8020E290: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8020E294: slti        $at, $v0, 0x8E
    ctx->r1 = SIGNED(ctx->r2) < 0X8E ? 1 : 0;
L_8020E298:
    // 0x8020E298: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E29C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_13;
    // 0x8020E29C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_13:
    // 0x8020E2A0: jal         0x8020FE7C
    // 0x8020E2A4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_111;
    // 0x8020E2A4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_111:
    // 0x8020E2A8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020E2AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020E2B0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020E2B4:
    // 0x8020E2B4: jal         0x80210A50
    // 0x8020E2B8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    func_80210A50_698450(rdram, ctx);
        goto after_112;
    // 0x8020E2B8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    after_112:
    // 0x8020E2BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020E2C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020E2C4: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020E2C8: bne         $s1, $at, L_8020E2B4
    if (ctx->r17 != ctx->r1) {
        // 0x8020E2CC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020E2B4;
    }
    // 0x8020E2CC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020E2D0: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020E2D4: beql        $a0, $zero, L_8020E2EC
    if (ctx->r4 == 0) {
        // 0x8020E2D8: lw          $t1, 0x0($s2)
        ctx->r9 = MEM_W(ctx->r18, 0X0);
            goto L_8020E2EC;
    }
    goto skip_14;
    // 0x8020E2D8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    skip_14:
    // 0x8020E2DC: jal         0x802131BC
    // 0x8020E2E0: nop

    func_802131BC_69ABBC(rdram, ctx);
        goto after_113;
    // 0x8020E2E0: nop

    after_113:
    // 0x8020E2E4: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020E2E8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
L_8020E2EC:
    // 0x8020E2EC: sw          $zero, 0xE4($s2)
    MEM_W(0XE4, ctx->r18) = 0;
    // 0x8020E2F0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8020E2F4: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_8020E2F8:
    // 0x8020E2F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E2FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E300: jal         0x8020FD8C
    // 0x8020E304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FD8C_69778C(rdram, ctx);
        goto after_114;
    // 0x8020E304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_114:
    // 0x8020E308: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E30C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E310: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E314: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020E318: jal         0x80210520
    // 0x8020E31C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210520_697F20(rdram, ctx);
        goto after_115;
    // 0x8020E31C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_115:
    // 0x8020E320: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E324: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E328: jal         0x8020FEA0
    // 0x8020E32C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_116;
    // 0x8020E32C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_116:
    // 0x8020E330: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020E334: addiu       $a1, $a1, -0x1160
    ctx->r5 = ADD32(ctx->r5, -0X1160);
    // 0x8020E338: jal         0x80210688
    // 0x8020E33C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210688_698088(rdram, ctx);
        goto after_117;
    // 0x8020E33C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_117:
    // 0x8020E340: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E344: jal         0x80210638
    // 0x8020E348: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210638_698038(rdram, ctx);
        goto after_118;
    // 0x8020E348: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_118:
    // 0x8020E34C: jal         0x80012470
    // 0x8020E350: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012470_13070(rdram, ctx);
        goto after_119;
    // 0x8020E350: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_119:
    // 0x8020E354: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E358: lui         $a1, 0x4278
    ctx->r5 = S32(0X4278 << 16);
    // 0x8020E35C: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    // 0x8020E360: jal         0x800127B8
    // 0x8020E364: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_120;
    // 0x8020E364: lui         $a3, 0x4250
    ctx->r7 = S32(0X4250 << 16);
    after_120:
    // 0x8020E368: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E36C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E370: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E374: jal         0x80012818
    // 0x8020E378: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_121;
    // 0x8020E378: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_121:
    // 0x8020E37C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020E380: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E384: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020E388: b           L_8020F8F4
    // 0x8020E38C: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020E38C: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020E390:
    // 0x8020E390: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020E394: slti        $at, $t5, 0x19
    ctx->r1 = SIGNED(ctx->r13) < 0X19 ? 1 : 0;
    // 0x8020E398: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E39C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_15;
    // 0x8020E39C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_15:
    // 0x8020E3A0: jal         0x8020FE7C
    // 0x8020E3A4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_122;
    // 0x8020E3A4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_122:
    // 0x8020E3A8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020E3AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E3B0: jal         0x8020FD8C
    // 0x8020E3B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_123;
    // 0x8020E3B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_123:
    // 0x8020E3B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E3BC: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020E3C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E3C4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E3C8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E3CC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E3D0: jal         0x80210520
    // 0x8020E3D4: nop

    func_80210520_697F20(rdram, ctx);
        goto after_124;
    // 0x8020E3D4: nop

    after_124:
    // 0x8020E3D8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E3DC: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020E3E0: jal         0x8020FEA0
    // 0x8020E3E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_125;
    // 0x8020E3E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_125:
    // 0x8020E3E8: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020E3EC: jal         0x80210638
    // 0x8020E3F0: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    func_80210638_698038(rdram, ctx);
        goto after_126;
    // 0x8020E3F0: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    after_126:
    // 0x8020E3F4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E3F8: lui         $a1, 0xC228
    ctx->r5 = S32(0XC228 << 16);
    // 0x8020E3FC: lui         $a2, 0xC150
    ctx->r6 = S32(0XC150 << 16);
    // 0x8020E400: jal         0x800127B8
    // 0x8020E404: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_127;
    // 0x8020E404: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_127:
    // 0x8020E408: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E40C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E410: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x8020E414: jal         0x80012818
    // 0x8020E418: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_128;
    // 0x8020E418: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_128:
    // 0x8020E41C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020E420: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E424: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020E428: b           L_8020F8F4
    // 0x8020E42C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020E42C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020E430:
    // 0x8020E430: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8020E434: slti        $at, $t8, 0x19
    ctx->r1 = SIGNED(ctx->r24) < 0X19 ? 1 : 0;
    // 0x8020E438: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E43C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_16;
    // 0x8020E43C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_16:
    // 0x8020E440: jal         0x8020FE7C
    // 0x8020E444: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_129;
    // 0x8020E444: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    after_129:
    // 0x8020E448: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020E44C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E450: jal         0x8020FD8C
    // 0x8020E454: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_130;
    // 0x8020E454: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_130:
    // 0x8020E458: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E45C: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020E460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E464: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E468: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E46C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E470: jal         0x80210520
    // 0x8020E474: nop

    func_80210520_697F20(rdram, ctx);
        goto after_131;
    // 0x8020E474: nop

    after_131:
    // 0x8020E478: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E47C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E480: jal         0x8020FEA0
    // 0x8020E484: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_132;
    // 0x8020E484: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_132:
    // 0x8020E488: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020E48C: jal         0x80210638
    // 0x8020E490: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    func_80210638_698038(rdram, ctx);
        goto after_133;
    // 0x8020E490: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_133:
    // 0x8020E494: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E498: lui         $a1, 0xC160
    ctx->r5 = S32(0XC160 << 16);
    // 0x8020E49C: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x8020E4A0: jal         0x800127B8
    // 0x8020E4A4: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_134;
    // 0x8020E4A4: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    after_134:
    // 0x8020E4A8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E4AC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E4B0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x8020E4B4: jal         0x80012818
    // 0x8020E4B8: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_135;
    // 0x8020E4B8: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    after_135:
    // 0x8020E4BC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020E4C0: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E4C4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020E4C8: b           L_8020F8F4
    // 0x8020E4CC: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020E4CC: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020E4D0:
    // 0x8020E4D0: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8020E4D4: slti        $at, $t2, 0x19
    ctx->r1 = SIGNED(ctx->r10) < 0X19 ? 1 : 0;
    // 0x8020E4D8: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E4DC: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_17;
    // 0x8020E4DC: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_17:
    // 0x8020E4E0: jal         0x8020FE7C
    // 0x8020E4E4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_136;
    // 0x8020E4E4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_136:
    // 0x8020E4E8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020E4EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E4F0: jal         0x8020FD8C
    // 0x8020E4F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_137;
    // 0x8020E4F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_137:
    // 0x8020E4F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E4FC: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020E500: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E504: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E508: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E50C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E510: jal         0x80210520
    // 0x8020E514: nop

    func_80210520_697F20(rdram, ctx);
        goto after_138;
    // 0x8020E514: nop

    after_138:
    // 0x8020E518: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E51C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020E520: jal         0x8020FEA0
    // 0x8020E524: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_139;
    // 0x8020E524: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_139:
    // 0x8020E528: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020E52C: jal         0x80210638
    // 0x8020E530: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_80210638_698038(rdram, ctx);
        goto after_140;
    // 0x8020E530: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_140:
    // 0x8020E534: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E538: lui         $a1, 0xC1C0
    ctx->r5 = S32(0XC1C0 << 16);
    // 0x8020E53C: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    // 0x8020E540: jal         0x800127B8
    // 0x8020E544: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_141;
    // 0x8020E544: lui         $a3, 0x4238
    ctx->r7 = S32(0X4238 << 16);
    after_141:
    // 0x8020E548: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E54C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E550: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E554: jal         0x80012818
    // 0x8020E558: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_142;
    // 0x8020E558: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_142:
    // 0x8020E55C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020E560: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E564: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020E568: b           L_8020F8F4
    // 0x8020E56C: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020E56C: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020E570:
    // 0x8020E570: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020E574: slti        $at, $t5, 0x19
    ctx->r1 = SIGNED(ctx->r13) < 0X19 ? 1 : 0;
    // 0x8020E578: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E57C: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_18;
    // 0x8020E57C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_18:
    // 0x8020E580: jal         0x8020FE7C
    // 0x8020E584: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_143;
    // 0x8020E584: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_143:
    // 0x8020E588: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020E58C: jal         0x80210760
    // 0x8020E590: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80210760_698160(rdram, ctx);
        goto after_144;
    // 0x8020E590: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_144:
    // 0x8020E594: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E598: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020E59C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E5A0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E5A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E5A8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E5AC: jal         0x802108CC
    // 0x8020E5B0: nop

    func_802108CC_6982CC(rdram, ctx);
        goto after_145;
    // 0x8020E5B0: nop

    after_145:
    // 0x8020E5B4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E5B8: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020E5BC: jal         0x8021084C
    // 0x8020E5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021084C_69824C(rdram, ctx);
        goto after_146;
    // 0x8020E5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_146:
    // 0x8020E5C4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020E5C8: jal         0x802108EC
    // 0x8020E5CC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_802108EC_6982EC(rdram, ctx);
        goto after_147;
    // 0x8020E5CC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_147:
    // 0x8020E5D0: jal         0x80210760
    // 0x8020E5D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80210760_698160(rdram, ctx);
        goto after_148;
    // 0x8020E5D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_148:
    // 0x8020E5D8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E5DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E5E0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E5E4: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8020E5E8: jal         0x802108CC
    // 0x8020E5EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802108CC_6982CC(rdram, ctx);
        goto after_149;
    // 0x8020E5EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_149:
    // 0x8020E5F0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E5F4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8020E5F8: jal         0x8021084C
    // 0x8020E5FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8021084C_69824C(rdram, ctx);
        goto after_150;
    // 0x8020E5FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_150:
    // 0x8020E600: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8020E604: jal         0x802108EC
    // 0x8020E608: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_802108EC_6982EC(rdram, ctx);
        goto after_151;
    // 0x8020E608: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_151:
    // 0x8020E60C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E610: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E614: lui         $a2, 0xC150
    ctx->r6 = S32(0XC150 << 16);
    // 0x8020E618: jal         0x800127B8
    // 0x8020E61C: lui         $a3, 0x42BC
    ctx->r7 = S32(0X42BC << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_152;
    // 0x8020E61C: lui         $a3, 0x42BC
    ctx->r7 = S32(0X42BC << 16);
    after_152:
    // 0x8020E620: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E624: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E628: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E62C: jal         0x80012818
    // 0x8020E630: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_153;
    // 0x8020E630: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    after_153:
    // 0x8020E634: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020E638: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E63C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020E640: b           L_8020F8F4
    // 0x8020E644: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020E644: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020E648:
    // 0x8020E648: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8020E64C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8020E650: bne         $at, $zero, L_8020F8F4
    if (ctx->r1 != 0) {
        // 0x8020E654: lui         $t1, 0x8016
        ctx->r9 = S32(0X8016 << 16);
            goto L_8020F8F4;
    }
    // 0x8020E654: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8020E658: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x8020E65C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020E660: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020E664: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8020E668: sh          $t9, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r25;
    // 0x8020E66C: jal         0x80210828
    // 0x8020E670: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    func_80210828_698228(rdram, ctx);
        goto after_154;
    // 0x8020E670: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    after_154:
    // 0x8020E674: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020E678: jal         0x80210828
    // 0x8020E67C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80210828_698228(rdram, ctx);
        goto after_155;
    // 0x8020E67C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_155:
    // 0x8020E680: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020E684: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8020E688: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020E68C: b           L_8020F8F4
    // 0x8020E690: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020E690: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020E694:
    // 0x8020E694: jal         0x8021358C
    // 0x8020E698: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8021358C_69AF8C(rdram, ctx);
        goto after_156;
    // 0x8020E698: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_156:
    // 0x8020E69C: bne         $v0, $zero, L_8020F8F4
    if (ctx->r2 != 0) {
        // 0x8020E6A0: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_8020F8F4;
    }
    // 0x8020E6A0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8020E6A4: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x8020E6A8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020E6AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8020E6B0: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    // 0x8020E6B4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8020E6B8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020E6BC: b           L_8020F8F4
    // 0x8020E6C0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_8020F8F4;
    // 0x8020E6C0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_8020E6C4:
    // 0x8020E6C4: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8020E6C8: slti        $at, $t7, 0x19
    ctx->r1 = SIGNED(ctx->r15) < 0X19 ? 1 : 0;
    // 0x8020E6CC: bne         $at, $zero, L_8020F8F4
    if (ctx->r1 != 0) {
        // 0x8020E6D0: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_8020F8F4;
    }
    // 0x8020E6D0: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8020E6D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020E6D8: sw          $t8, 0xF8($s2)
    MEM_W(0XF8, ctx->r18) = ctx->r24;
    // 0x8020E6DC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8020E6E0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8020E6E4:
    // 0x8020E6E4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8020E6E8: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020E6EC:
    // 0x8020E6EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E6F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E6F4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E6F8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E6FC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E700: jal         0x80211378
    // 0x8020E704: nop

    func_80211378_698D78(rdram, ctx);
        goto after_157;
    // 0x8020E704: nop

    after_157:
    // 0x8020E708: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020E70C: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
    // 0x8020E710: addiu       $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
    // 0x8020E714: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
    // 0x8020E718: addiu       $s1, $zero, 0xD48
    ctx->r17 = ADD32(0, 0XD48);
L_8020E71C:
    // 0x8020E71C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8020E720: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E724: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E728: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020E72C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E730: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x8020E734: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x8020E738: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020E73C: jal         0x80211378
    // 0x8020E740: nop

    func_80211378_698D78(rdram, ctx);
        goto after_158;
    // 0x8020E740: nop

    after_158:
    // 0x8020E744: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8020E748: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020E74C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E750: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x8020E754: nop

    // 0x8020E758: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020E75C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020E760: jal         0x802112E8
    // 0x8020E764: nop

    func_802112E8_698CE8(rdram, ctx);
        goto after_159;
    // 0x8020E764: nop

    after_159:
    // 0x8020E768: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8020E76C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8020E770: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020E774: addiu       $v1, $v1, 0xAA
    ctx->r3 = ADD32(ctx->r3, 0XAA);
    // 0x8020E778: bne         $v1, $s1, L_8020E71C
    if (ctx->r3 != ctx->r17) {
        // 0x8020E77C: addiu       $t0, $t0, 0x48
        ctx->r8 = ADD32(ctx->r8, 0X48);
            goto L_8020E71C;
    }
    // 0x8020E77C: addiu       $t0, $t0, 0x48
    ctx->r8 = ADD32(ctx->r8, 0X48);
    // 0x8020E780: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E784: jal         0x8020FD8C
    // 0x8020E788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FD8C_69778C(rdram, ctx);
        goto after_160;
    // 0x8020E788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_160:
    // 0x8020E78C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E790: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E794: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020E798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E79C: jal         0x80210520
    // 0x8020E7A0: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_161;
    // 0x8020E7A0: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    after_161:
    // 0x8020E7A4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E7A8: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E7AC: jal         0x8020FEA0
    // 0x8020E7B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_162;
    // 0x8020E7B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_162:
    // 0x8020E7B4: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020E7B8: addiu       $a1, $a1, -0x1160
    ctx->r5 = ADD32(ctx->r5, -0X1160);
    // 0x8020E7BC: jal         0x80210688
    // 0x8020E7C0: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210688_698088(rdram, ctx);
        goto after_163;
    // 0x8020E7C0: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_163:
    // 0x8020E7C4: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E7C8: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8020E7CC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8020E7D0: jal         0x80210540
    // 0x8020E7D4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    func_80210540_697F40(rdram, ctx);
        goto after_164;
    // 0x8020E7D4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    after_164:
    // 0x8020E7D8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E7DC: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E7E0: jal         0x80210624
    // 0x8020E7E4: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    func_80210624_698024(rdram, ctx);
        goto after_165;
    // 0x8020E7E4: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    after_165:
    // 0x8020E7E8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E7EC: jal         0x80012500
    // 0x8020E7F0: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_166;
    // 0x8020E7F0: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_166:
    // 0x8020E7F4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E7F8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E7FC: lui         $a2, 0x4434
    ctx->r6 = S32(0X4434 << 16);
    // 0x8020E800: jal         0x800127B8
    // 0x8020E804: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_167;
    // 0x8020E804: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    after_167:
    // 0x8020E808: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E80C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8020E810: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8020E814: jal         0x80012818
    // 0x8020E818: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    func_80012818_13418(rdram, ctx);
        goto after_168;
    // 0x8020E818: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_168:
    // 0x8020E81C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E820: jal         0x800124A0
    // 0x8020E824: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_169;
    // 0x8020E824: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_169:
    // 0x8020E828: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E82C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E830: lui         $a2, 0x4434
    ctx->r6 = S32(0X4434 << 16);
    // 0x8020E834: jal         0x80012518
    // 0x8020E838: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_170;
    // 0x8020E838: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_170:
    // 0x8020E83C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020E840: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E844: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020E848: b           L_8020F8F4
    // 0x8020E84C: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020E84C: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020E850:
    // 0x8020E850: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E854: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8020E858: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8020E85C: jal         0x80210540
    // 0x8020E860: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    func_80210540_697F40(rdram, ctx);
        goto after_171;
    // 0x8020E860: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    after_171:
    // 0x8020E864: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E868: jal         0x800124A0
    // 0x8020E86C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_172;
    // 0x8020E86C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_172:
    // 0x8020E870: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E874: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8020E878: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8020E87C: jal         0x80012628
    // 0x8020E880: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    func_80012628_13228(rdram, ctx);
        goto after_173;
    // 0x8020E880: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    after_173:
    // 0x8020E884: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8020E888: slti        $at, $t4, 0x3C
    ctx->r1 = SIGNED(ctx->r12) < 0X3C ? 1 : 0;
    // 0x8020E88C: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E890: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_19;
    // 0x8020E890: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_19:
    // 0x8020E894: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8020E898: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020E89C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020E8A0: jal         0x8020FE7C
    // 0x8020E8A4: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    func_8020FE7C_69787C(rdram, ctx);
        goto after_174;
    // 0x8020E8A4: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    after_174:
    // 0x8020E8A8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020E8AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020E8B0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8020E8B4:
    // 0x8020E8B4: jal         0x80211420
    // 0x8020E8B8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    func_80211420_698E20(rdram, ctx);
        goto after_175;
    // 0x8020E8B8: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    after_175:
    // 0x8020E8BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8020E8C0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8020E8C4: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020E8C8: bne         $s1, $at, L_8020E8B4
    if (ctx->r17 != ctx->r1) {
        // 0x8020E8CC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020E8B4;
    }
    // 0x8020E8CC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020E8D0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020E8D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020E8D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E8DC: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020E8E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020E8E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020E8E8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E8EC: jal         0x800133E0
    // 0x8020E8F0: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_176;
    // 0x8020E8F0: nop

    after_176:
    // 0x8020E8F4: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020E8F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8020E8FC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8020E900: jal         0x80013484
    // 0x8020E904: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_177;
    // 0x8020E904: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_177:
    // 0x8020E908: jal         0x80012470
    // 0x8020E90C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012470_13070(rdram, ctx);
        goto after_178;
    // 0x8020E90C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_178:
    // 0x8020E910: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E914: jal         0x80012500
    // 0x8020E918: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    func_80012500_13100(rdram, ctx);
        goto after_179;
    // 0x8020E918: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_179:
    // 0x8020E91C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020E920: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020E924: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020E928: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E92C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020E930: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020E934: jal         0x800127B8
    // 0x8020E938: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_180;
    // 0x8020E938: nop

    after_180:
    // 0x8020E93C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E940: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E944: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E948: jal         0x80012818
    // 0x8020E94C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_181;
    // 0x8020E94C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    after_181:
    // 0x8020E950: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E954: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E958: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020E95C: jal         0x80211740
    // 0x8020E960: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_80211740_699140(rdram, ctx);
        goto after_182;
    // 0x8020E960: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_182:
    // 0x8020E964: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020E968: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E96C: jal         0x80211694
    // 0x8020E970: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_80211694_699094(rdram, ctx);
        goto after_183;
    // 0x8020E970: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_183:
    // 0x8020E974: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E978: jal         0x802116EC
    // 0x8020E97C: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    func_802116EC_6990EC(rdram, ctx);
        goto after_184;
    // 0x8020E97C: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    after_184:
    // 0x8020E980: b           L_8020F8F4
    // 0x8020E984: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
        goto L_8020F8F4;
    // 0x8020E984: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
L_8020E988:
    // 0x8020E988: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8020E98C: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8020E990: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E994: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_20;
    // 0x8020E994: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_20:
    // 0x8020E998: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020E99C: jal         0x802116A0
    // 0x8020E9A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802116A0_6990A0(rdram, ctx);
        goto after_185;
    // 0x8020E9A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_185:
    // 0x8020E9A4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E9A8: jal         0x800124A0
    // 0x8020E9AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_186;
    // 0x8020E9AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_186:
    // 0x8020E9B0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E9B4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020E9B8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x8020E9BC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020E9C0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020E9C4: jal         0x80012628
    // 0x8020E9C8: nop

    func_80012628_13228(rdram, ctx);
        goto after_187;
    // 0x8020E9C8: nop

    after_187:
    // 0x8020E9CC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020E9D0: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020E9D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020E9D8: b           L_8020F8F4
    // 0x8020E9DC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020E9DC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020E9E0:
    // 0x8020E9E0: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8020E9E4: slti        $at, $t1, 0x32
    ctx->r1 = SIGNED(ctx->r9) < 0X32 ? 1 : 0;
    // 0x8020E9E8: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020E9EC: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_21;
    // 0x8020E9EC: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_21:
    // 0x8020E9F0: jal         0x80211800
    // 0x8020E9F4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    func_80211800_699200(rdram, ctx);
        goto after_188;
    // 0x8020E9F4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    after_188:
    // 0x8020E9F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020E9FC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020EA00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020EA04: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EA08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020EA0C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EA10: jal         0x80211A54
    // 0x8020EA14: nop

    func_80211A54_699454(rdram, ctx);
        goto after_189;
    // 0x8020EA14: nop

    after_189:
    // 0x8020EA18: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020EA1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020EA20: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020EA24: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EA28: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020EA2C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020EA30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020EA34: jal         0x800133E0
    // 0x8020EA38: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_190;
    // 0x8020EA38: nop

    after_190:
    // 0x8020EA3C: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EA40: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8020EA44: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8020EA48: jal         0x80013484
    // 0x8020EA4C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_191;
    // 0x8020EA4C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_191:
    // 0x8020EA50: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EA54: jal         0x80012500
    // 0x8020EA58: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    func_80012500_13100(rdram, ctx);
        goto after_192;
    // 0x8020EA58: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    after_192:
    // 0x8020EA5C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EA60: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x8020EA64: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8020EA68: jal         0x800127B8
    // 0x8020EA6C: lui         $a3, 0x4312
    ctx->r7 = S32(0X4312 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_193;
    // 0x8020EA6C: lui         $a3, 0x4312
    ctx->r7 = S32(0X4312 << 16);
    after_193:
    // 0x8020EA70: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EA74: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EA78: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EA7C: jal         0x80012818
    // 0x8020EA80: lui         $a2, 0x41F8
    ctx->r6 = S32(0X41F8 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_194;
    // 0x8020EA80: lui         $a2, 0x41F8
    ctx->r6 = S32(0X41F8 << 16);
    after_194:
    // 0x8020EA84: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EA88: jal         0x800124A0
    // 0x8020EA8C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_195;
    // 0x8020EA8C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_195:
    // 0x8020EA90: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EA94: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x8020EA98: lui         $a2, 0x420E
    ctx->r6 = S32(0X420E << 16);
    // 0x8020EA9C: jal         0x80012518
    // 0x8020EAA0: lui         $a3, 0x4306
    ctx->r7 = S32(0X4306 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_196;
    // 0x8020EAA0: lui         $a3, 0x4306
    ctx->r7 = S32(0X4306 << 16);
    after_196:
    // 0x8020EAA4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EAA8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EAAC: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EAB0: jal         0x80012628
    // 0x8020EAB4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_197;
    // 0x8020EAB4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_197:
    // 0x8020EAB8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020EABC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020EAC0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020EAC4: b           L_8020F8F4
    // 0x8020EAC8: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020EAC8: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020EACC:
    // 0x8020EACC: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8020EAD0: slti        $at, $t4, 0x5A
    ctx->r1 = SIGNED(ctx->r12) < 0X5A ? 1 : 0;
    // 0x8020EAD4: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020EAD8: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_22;
    // 0x8020EAD8: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_22:
    // 0x8020EADC: jal         0x80211C0C
    // 0x8020EAE0: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    func_80211C0C_69960C(rdram, ctx);
        goto after_198;
    // 0x8020EAE0: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    after_198:
    // 0x8020EAE4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020EAE8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020EAEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020EAF0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EAF4: lui         $a2, 0xC100
    ctx->r6 = S32(0XC100 << 16);
    // 0x8020EAF8: jal         0x80212038
    // 0x8020EAFC: lui         $a3, 0xC1B0
    ctx->r7 = S32(0XC1B0 << 16);
    func_80212038_699A38(rdram, ctx);
        goto after_199;
    // 0x8020EAFC: lui         $a3, 0xC1B0
    ctx->r7 = S32(0XC1B0 << 16);
    after_199:
    // 0x8020EB00: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020EB04: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EB08: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8020EB0C: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x8020EB10: jal         0x800133E0
    // 0x8020EB14: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_200;
    // 0x8020EB14: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_200:
    // 0x8020EB18: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EB1C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8020EB20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8020EB24: jal         0x80013484
    // 0x8020EB28: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_201;
    // 0x8020EB28: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_201:
    // 0x8020EB2C: jal         0x80012470
    // 0x8020EB30: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012470_13070(rdram, ctx);
        goto after_202;
    // 0x8020EB30: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_202:
    // 0x8020EB34: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EB38: jal         0x80012500
    // 0x8020EB3C: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_80012500_13100(rdram, ctx);
        goto after_203;
    // 0x8020EB3C: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_203:
    // 0x8020EB40: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EB44: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020EB48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EB4C: jal         0x80012818
    // 0x8020EB50: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012818_13418(rdram, ctx);
        goto after_204;
    // 0x8020EB50: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_204:
    // 0x8020EB54: lui         $a1, 0x42B5
    ctx->r5 = S32(0X42B5 << 16);
    // 0x8020EB58: lui         $a3, 0x4342
    ctx->r7 = S32(0X4342 << 16);
    // 0x8020EB5C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x8020EB60: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8020EB64: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EB68: jal         0x800127B8
    // 0x8020EB6C: lui         $a2, 0xC254
    ctx->r6 = S32(0XC254 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_205;
    // 0x8020EB6C: lui         $a2, 0xC254
    ctx->r6 = S32(0XC254 << 16);
    after_205:
    // 0x8020EB70: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EB74: jal         0x800124A0
    // 0x8020EB78: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_206;
    // 0x8020EB78: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_206:
    // 0x8020EB7C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EB80: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8020EB84: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x8020EB88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8020EB8C: addiu       $a2, $a2, 0x4660
    ctx->r6 = ADD32(ctx->r6, 0X4660);
    // 0x8020EB90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020EB94: jal         0x800125F0
    // 0x8020EB98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800125F0_131F0(rdram, ctx);
        goto after_207;
    // 0x8020EB98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_207:
    // 0x8020EB9C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8020EBA0: addiu       $t6, $zero, -0x28
    ctx->r14 = ADD32(0, -0X28);
    // 0x8020EBA4: sw          $zero, 0xE8($s2)
    MEM_W(0XE8, ctx->r18) = 0;
    // 0x8020EBA8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020EBAC: sw          $t6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r14;
    // 0x8020EBB0: b           L_8020F8F4
    // 0x8020EBB4: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
        goto L_8020F8F4;
    // 0x8020EBB4: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020EBB8:
    // 0x8020EBB8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8020EBBC: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x8020EBC0: bne         $at, $zero, L_8020ED04
    if (ctx->r1 != 0) {
        // 0x8020EBC4: slti        $at, $v0, 0x38
        ctx->r1 = SIGNED(ctx->r2) < 0X38 ? 1 : 0;
            goto L_8020ED04;
    }
    // 0x8020EBC4: slti        $at, $v0, 0x38
    ctx->r1 = SIGNED(ctx->r2) < 0X38 ? 1 : 0;
    // 0x8020EBC8: beq         $at, $zero, L_8020ED04
    if (ctx->r1 == 0) {
        // 0x8020EBCC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8020ED04;
    }
    // 0x8020EBCC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8020EBD0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8020EBD4: mfhi        $t9
    ctx->r25 = hi;
    // 0x8020EBD8: bnel        $t9, $zero, L_8020ED08
    if (ctx->r25 != 0) {
        // 0x8020EBDC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_8020ED08;
    }
    goto skip_23;
    // 0x8020EBDC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_23:
    // 0x8020EBE0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020EBE4: lw          $s1, 0xE8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE8);
    // 0x8020EBE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020EBEC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EBF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EBF4: lui         $a2, 0xC21C
    ctx->r6 = S32(0XC21C << 16);
    // 0x8020EBF8: jal         0x80212D10
    // 0x8020EBFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_80212D10_69A710(rdram, ctx);
        goto after_208;
    // 0x8020EBFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_208:
    // 0x8020EC00: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x8020EC04: addu        $s0, $s2, $t1
    ctx->r16 = ADD32(ctx->r18, ctx->r9);
    // 0x8020EC08: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020EC0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020EC10: jal         0x8021296C
    // 0x8020EC14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8021296C_69A36C(rdram, ctx);
        goto after_209;
    // 0x8020EC14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_209:
    // 0x8020EC18: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020EC1C: jal         0x80212B30
    // 0x8020EC20: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_80212B30_69A530(rdram, ctx);
        goto after_210;
    // 0x8020EC20: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_210:
    // 0x8020EC24: lw          $t2, 0xE8($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XE8);
    // 0x8020EC28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EC2C: ldc1        $f18, 0x5030($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X5030);
    // 0x8020EC30: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020EC34: lui         $at, 0xC033
    ctx->r1 = S32(0XC033 << 16);
    // 0x8020EC38: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8020EC3C: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8020EC40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020EC44: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EC48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EC4C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020EC50: mul.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x8020EC54: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x8020EC58: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8020EC5C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8020EC60: jal         0x80212A7C
    // 0x8020EC64: nop

    func_80212A7C_69A47C(rdram, ctx);
        goto after_211;
    // 0x8020EC64: nop

    after_211:
    // 0x8020EC68: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8020EC6C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020EC70: jal         0x80212B8C
    // 0x8020EC74: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    func_80212B8C_69A58C(rdram, ctx);
        goto after_212;
    // 0x8020EC74: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    after_212:
    // 0x8020EC78: lw          $t3, 0xE8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0XE8);
    // 0x8020EC7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EC80: ldc1        $f6, 0x5038($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5038);
    // 0x8020EC84: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020EC88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020EC8C: ldc1        $f4, 0x5040($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5040);
    // 0x8020EC90: cvt.d.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.d = CVT_D_W(ctx->f18.u32l);
    // 0x8020EC94: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020EC98: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x8020EC9C: add.d       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f10.d + ctx->f4.d;
    // 0x8020ECA0: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x8020ECA4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020ECA8: jal         0x80212B40
    // 0x8020ECAC: nop

    func_80212B40_69A540(rdram, ctx);
        goto after_213;
    // 0x8020ECAC: nop

    after_213:
    // 0x8020ECB0: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020ECB4: jal         0x80212C38
    // 0x8020ECB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80212C38_69A638(rdram, ctx);
        goto after_214;
    // 0x8020ECB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_214:
    // 0x8020ECBC: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020ECC0: jal         0x80212CD8
    // 0x8020ECC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80212CD8_69A6D8(rdram, ctx);
        goto after_215;
    // 0x8020ECC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_215:
    // 0x8020ECC8: lw          $a1, 0xE8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XE8);
    // 0x8020ECCC: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020ECD0: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x8020ECD4: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x8020ECD8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8020ECDC: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x8020ECE0: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8020ECE4: addiu       $a1, $t4, 0x80
    ctx->r5 = ADD32(ctx->r12, 0X80);
    // 0x8020ECE8: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x8020ECEC: jal         0x80212BD0
    // 0x8020ECF0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80212BD0_69A5D0(rdram, ctx);
        goto after_216;
    // 0x8020ECF0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_216:
    // 0x8020ECF4: lw          $t6, 0xE8($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XE8);
    // 0x8020ECF8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8020ECFC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020ED00: sw          $t7, 0xE8($s2)
    MEM_W(0XE8, ctx->r18) = ctx->r15;
L_8020ED04:
    // 0x8020ED04: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_8020ED08:
    // 0x8020ED08: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8020ED0C: bne         $v0, $at, L_8020F8F4
    if (ctx->r2 != ctx->r1) {
        // 0x8020ED10: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8020F8F4;
    }
    // 0x8020ED10: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8020ED14: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
    // 0x8020ED18: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
L_8020ED1C:
    // 0x8020ED1C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8020ED20: beql        $a0, $zero, L_8020ED3C
    if (ctx->r4 == 0) {
        // 0x8020ED24: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8020ED3C;
    }
    goto skip_24;
    // 0x8020ED24: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_24:
    // 0x8020ED28: jal         0x80212E78
    // 0x8020ED2C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_80212E78_69A878(rdram, ctx);
        goto after_217;
    // 0x8020ED2C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_217:
    // 0x8020ED30: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8020ED34: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8020ED38: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8020ED3C:
    // 0x8020ED3C: bne         $v1, $s1, L_8020ED1C
    if (ctx->r3 != ctx->r17) {
        // 0x8020ED40: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8020ED1C;
    }
    // 0x8020ED40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8020ED44: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020ED48: lui         $a2, 0xC19C
    ctx->r6 = S32(0XC19C << 16);
    // 0x8020ED4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020ED50: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8020ED54: jal         0x80212D10
    // 0x8020ED58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212D10_69A710(rdram, ctx);
        goto after_218;
    // 0x8020ED58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_218:
    // 0x8020ED5C: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
    // 0x8020ED60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020ED64: jal         0x8021296C
    // 0x8020ED68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8021296C_69A36C(rdram, ctx);
        goto after_219;
    // 0x8020ED68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_219:
    // 0x8020ED6C: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x8020ED70: ori         $a1, $a1, 0xF1AA
    ctx->r5 = ctx->r5 | 0XF1AA;
    // 0x8020ED74: jal         0x80212B8C
    // 0x8020ED78: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    func_80212B8C_69A58C(rdram, ctx);
        goto after_220;
    // 0x8020ED78: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    after_220:
    // 0x8020ED7C: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    // 0x8020ED80: jal         0x80212C38
    // 0x8020ED84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80212C38_69A638(rdram, ctx);
        goto after_221;
    // 0x8020ED84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_221:
    // 0x8020ED88: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    // 0x8020ED8C: jal         0x80212CD8
    // 0x8020ED90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80212CD8_69A6D8(rdram, ctx);
        goto after_222;
    // 0x8020ED90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_222:
    // 0x8020ED94: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020ED98: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020ED9C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020EDA0: b           L_8020F8F4
    // 0x8020EDA4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020EDA4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020EDA8:
    // 0x8020EDA8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8020EDAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020EDB0: bnel        $v0, $at, L_8020EE20
    if (ctx->r2 != ctx->r1) {
        // 0x8020EDB4: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_8020EE20;
    }
    goto skip_25;
    // 0x8020EDB4: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    skip_25:
    // 0x8020EDB8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EDBC: jal         0x800124A0
    // 0x8020EDC0: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_223;
    // 0x8020EDC0: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    after_223:
    // 0x8020EDC4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020EDC8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EDCC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020EDD0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020EDD4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020EDD8: jal         0x80012628
    // 0x8020EDDC: nop

    func_80012628_13228(rdram, ctx);
        goto after_224;
    // 0x8020EDDC: nop

    after_224:
    // 0x8020EDE0: lui         $a2, 0xBFA6
    ctx->r6 = S32(0XBFA6 << 16);
    // 0x8020EDE4: lui         $a3, 0x4311
    ctx->r7 = S32(0X4311 << 16);
    // 0x8020EDE8: ori         $a3, $a3, 0xE666
    ctx->r7 = ctx->r7 | 0XE666;
    // 0x8020EDEC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8020EDF0: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EDF4: jal         0x80012518
    // 0x8020EDF8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_225;
    // 0x8020EDF8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_225:
    // 0x8020EDFC: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    // 0x8020EE00: jal         0x80211FB8
    // 0x8020EE04: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_80211FB8_6999B8(rdram, ctx);
        goto after_226;
    // 0x8020EE04: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_226:
    // 0x8020EE08: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    // 0x8020EE0C: jal         0x80211FC4
    // 0x8020EE10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80211FC4_6999C4(rdram, ctx);
        goto after_227;
    // 0x8020EE10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_227:
    // 0x8020EE14: b           L_8020F8F8
    // 0x8020EE18: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
        goto L_8020F8F8;
    // 0x8020EE18: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020EE1C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
L_8020EE20:
    // 0x8020EE20: bnel        $v0, $at, L_8020EE4C
    if (ctx->r2 != ctx->r1) {
        // 0x8020EE24: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_8020EE4C;
    }
    goto skip_26;
    // 0x8020EE24: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    skip_26:
    // 0x8020EE28: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    // 0x8020EE2C: jal         0x80212B30
    // 0x8020EE30: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_80212B30_69A530(rdram, ctx);
        goto after_228;
    // 0x8020EE30: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_228:
    // 0x8020EE34: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    // 0x8020EE38: jal         0x80212C68
    // 0x8020EE3C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80212C68_69A668(rdram, ctx);
        goto after_229;
    // 0x8020EE3C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_229:
    // 0x8020EE40: b           L_8020F8F8
    // 0x8020EE44: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
        goto L_8020F8F8;
    // 0x8020EE44: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020EE48: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
L_8020EE4C:
    // 0x8020EE4C: bnel        $v0, $at, L_8020EE74
    if (ctx->r2 != ctx->r1) {
        // 0x8020EE50: addiu       $at, $zero, 0x55
        ctx->r1 = ADD32(0, 0X55);
            goto L_8020EE74;
    }
    goto skip_27;
    // 0x8020EE50: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    skip_27:
    // 0x8020EE54: lw          $a0, 0x80($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X80);
    // 0x8020EE58: beq         $a0, $zero, L_8020EEB0
    if (ctx->r4 == 0) {
        // 0x8020EE5C: nop
    
            goto L_8020EEB0;
    }
    // 0x8020EE5C: nop

    // 0x8020EE60: jal         0x80212108
    // 0x8020EE64: nop

    func_80212108_699B08(rdram, ctx);
        goto after_230;
    // 0x8020EE64: nop

    after_230:
    // 0x8020EE68: b           L_8020F8F4
    // 0x8020EE6C: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
        goto L_8020F8F4;
    // 0x8020EE6C: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020EE70: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
L_8020EE74:
    // 0x8020EE74: bne         $v0, $at, L_8020EEB0
    if (ctx->r2 != ctx->r1) {
        // 0x8020EE78: nop
    
            goto L_8020EEB0;
    }
    // 0x8020EE78: nop

    // 0x8020EE7C: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020EE80: jal         0x80212E78
    // 0x8020EE84: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    func_80212E78_69A878(rdram, ctx);
        goto after_231;
    // 0x8020EE84: lw          $a0, 0x84($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X84);
    after_231:
    // 0x8020EE88: sw          $v0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r2;
    // 0x8020EE8C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8020EE90: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x8020EE94: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020EE98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8020EE9C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8020EEA0: sh          $t1, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r9;
    // 0x8020EEA4: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020EEA8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020EEAC: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020EEB0:
    // 0x8020EEB0: b           L_8020F8F8
    // 0x8020EEB4: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
        goto L_8020F8F8;
    // 0x8020EEB4: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
L_8020EEB8:
    // 0x8020EEB8: jal         0x8021358C
    // 0x8020EEBC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8021358C_69AF8C(rdram, ctx);
        goto after_232;
    // 0x8020EEBC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_232:
    // 0x8020EEC0: bnel        $v0, $zero, L_8020F8F8
    if (ctx->r2 != 0) {
        // 0x8020EEC4: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_28;
    // 0x8020EEC4: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_28:
    // 0x8020EEC8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020EECC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020EED0: sw          $t5, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r13;
    // 0x8020EED4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020EED8: b           L_8020F8F4
    // 0x8020EEDC: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020EEDC: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020EEE0:
    // 0x8020EEE0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020EEE4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020EEE8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020EEEC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8020EEF0: sh          $zero, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = 0;
    // 0x8020EEF4: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020EEF8: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020EEFC: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020EF00:
    // 0x8020EF00: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020EF04: bne         $a0, $zero, L_8020EF1C
    if (ctx->r4 != 0) {
        // 0x8020EF08: nop
    
            goto L_8020EF1C;
    }
    // 0x8020EF08: nop

    // 0x8020EF0C: jal         0x80212F2C
    // 0x8020EF10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212F2C_69A92C(rdram, ctx);
        goto after_233;
    // 0x8020EF10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_233:
    // 0x8020EF14: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020EF18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8020EF1C:
    // 0x8020EF1C: jal         0x8021306C
    // 0x8020EF20: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_234;
    // 0x8020EF20: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_234:
    // 0x8020EF24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020EF28: jal         0x8020FD8C
    // 0x8020EF2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_235;
    // 0x8020EF2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_235:
    // 0x8020EF30: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8020EF34: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020EF38: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020EF3C: jal         0x80210648
    // 0x8020EF40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210648_698048(rdram, ctx);
        goto after_236;
    // 0x8020EF40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_236:
    // 0x8020EF44: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020EF48: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020EF4C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8020EF50: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020EF54: jal         0x8020FEA0
    // 0x8020EF58: nop

    func_8020FEA0_6978A0(rdram, ctx);
        goto after_237;
    // 0x8020EF58: nop

    after_237:
    // 0x8020EF5C: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020EF60: lui         $a1, 0xC1E4
    ctx->r5 = S32(0XC1E4 << 16);
    // 0x8020EF64: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x8020EF68: jal         0x80210520
    // 0x8020EF6C: lui         $a3, 0xC206
    ctx->r7 = S32(0XC206 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_238;
    // 0x8020EF6C: lui         $a3, 0xC206
    ctx->r7 = S32(0XC206 << 16);
    after_238:
    // 0x8020EF70: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020EF74: jal         0x80210618
    // 0x8020EF78: addiu       $a1, $zero, 0x105
    ctx->r5 = ADD32(0, 0X105);
    func_80210618_698018(rdram, ctx);
        goto after_239;
    // 0x8020EF78: addiu       $a1, $zero, 0x105
    ctx->r5 = ADD32(0, 0X105);
    after_239:
    // 0x8020EF7C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020EF80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020EF84: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EF88: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8020EF8C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020EF90: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020EF94: jal         0x800133E0
    // 0x8020EF98: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_240;
    // 0x8020EF98: nop

    after_240:
    // 0x8020EF9C: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EFA0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8020EFA4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8020EFA8: jal         0x80013484
    // 0x8020EFAC: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_80013484_14084(rdram, ctx);
        goto after_241;
    // 0x8020EFAC: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_241:
    // 0x8020EFB0: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020EFB4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020EFB8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8020EFBC: jal         0x80013400
    // 0x8020EFC0: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_80013400_14000(rdram, ctx);
        goto after_242;
    // 0x8020EFC0: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_242:
    // 0x8020EFC4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EFC8: jal         0x80012500
    // 0x8020EFCC: addiu       $a1, $zero, 0x1040
    ctx->r5 = ADD32(0, 0X1040);
    func_80012500_13100(rdram, ctx);
        goto after_243;
    // 0x8020EFCC: addiu       $a1, $zero, 0x1040
    ctx->r5 = ADD32(0, 0X1040);
    after_243:
    // 0x8020EFD0: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020EFD4: lui         $a1, 0x4240
    ctx->r5 = S32(0X4240 << 16);
    // 0x8020EFD8: lui         $a2, 0xC180
    ctx->r6 = S32(0XC180 << 16);
    // 0x8020EFDC: jal         0x800127B8
    // 0x8020EFE0: lui         $a3, 0xC2A4
    ctx->r7 = S32(0XC2A4 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_244;
    // 0x8020EFE0: lui         $a3, 0xC2A4
    ctx->r7 = S32(0XC2A4 << 16);
    after_244:
    // 0x8020EFE4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020EFE8: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8020EFEC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8020EFF0: jal         0x80210540
    // 0x8020EFF4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    func_80210540_697F40(rdram, ctx);
        goto after_245;
    // 0x8020EFF4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    after_245:
    // 0x8020EFF8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8020EFFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020F000: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020F004: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F008: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8020F00C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8020F010: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F014: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8020F018: jal         0x80012818
    // 0x8020F01C: nop

    func_80012818_13418(rdram, ctx);
        goto after_246;
    // 0x8020F01C: nop

    after_246:
    // 0x8020F020: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F024: jal         0x800124A0
    // 0x8020F028: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_247;
    // 0x8020F028: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_247:
    // 0x8020F02C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F030: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8020F034: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8020F038: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8020F03C: addiu       $a2, $a2, 0x4690
    ctx->r6 = ADD32(ctx->r6, 0X4690);
    // 0x8020F040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F044: jal         0x800125F0
    // 0x8020F048: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800125F0_131F0(rdram, ctx);
        goto after_248;
    // 0x8020F048: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_248:
    // 0x8020F04C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8020F050: addiu       $a1, $a1, 0x50B0
    ctx->r5 = ADD32(ctx->r5, 0X50B0);
    // 0x8020F054: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F058: jal         0x80210988
    // 0x8020F05C: addiu       $a2, $zero, 0x290
    ctx->r6 = ADD32(0, 0X290);
    func_80210988_698388(rdram, ctx);
        goto after_249;
    // 0x8020F05C: addiu       $a2, $zero, 0x290
    ctx->r6 = ADD32(0, 0X290);
    after_249:
    // 0x8020F060: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8020F064: sw          $v0, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r2;
    // 0x8020F068: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020F06C: jal         0x80210AB4
    // 0x8020F070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210AB4_6984B4(rdram, ctx);
        goto after_250;
    // 0x8020F070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_250:
    // 0x8020F074: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020F078: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F07C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020F080: b           L_8020F8F4
    // 0x8020F084: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
        goto L_8020F8F4;
    // 0x8020F084: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
L_8020F088:
    // 0x8020F088: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8020F08C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F090: ldc1        $f6, 0x5048($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5048);
    // 0x8020F094: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020F098: nop

    // 0x8020F09C: cvt.d.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.d = CVT_D_W(ctx->f18.u32l);
    // 0x8020F0A0: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x8020F0A4: nop

    // 0x8020F0A8: bc1t        L_8020F8F4
    if (c1cs) {
        // 0x8020F0AC: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_8020F8F4;
    }
    // 0x8020F0AC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8020F0B0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8020F0B4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F0B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8020F0BC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020F0C0: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x8020F0C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F0C8: jal         0x8020FD8C
    // 0x8020F0CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_251;
    // 0x8020F0CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_251:
    // 0x8020F0D0: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8020F0D4: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8020F0D8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8020F0DC: jal         0x80210648
    // 0x8020F0E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210648_698048(rdram, ctx);
        goto after_252;
    // 0x8020F0E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_252:
    // 0x8020F0E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F0E8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8020F0EC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8020F0F0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F0F4: jal         0x8020FEA0
    // 0x8020F0F8: nop

    func_8020FEA0_6978A0(rdram, ctx);
        goto after_253;
    // 0x8020F0F8: nop

    after_253:
    // 0x8020F0FC: lui         $a3, 0xC216
    ctx->r7 = S32(0XC216 << 16);
    // 0x8020F100: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x8020F104: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8020F108: lui         $a1, 0x41E0
    ctx->r5 = S32(0X41E0 << 16);
    // 0x8020F10C: jal         0x80210520
    // 0x8020F110: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_254;
    // 0x8020F110: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    after_254:
    // 0x8020F114: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8020F118: jal         0x80210618
    // 0x8020F11C: addiu       $a1, $zero, 0x32E
    ctx->r5 = ADD32(0, 0X32E);
    func_80210618_698018(rdram, ctx);
        goto after_255;
    // 0x8020F11C: addiu       $a1, $zero, 0x32E
    ctx->r5 = ADD32(0, 0X32E);
    after_255:
    // 0x8020F120: lui         $a1, 0x4019
    ctx->r5 = S32(0X4019 << 16);
    // 0x8020F124: lui         $a2, 0xC121
    ctx->r6 = S32(0XC121 << 16);
    // 0x8020F128: lui         $a3, 0xC2EF
    ctx->r7 = S32(0XC2EF << 16);
    // 0x8020F12C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8020F130: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8020F134: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8020F138: jal         0x800127B8
    // 0x8020F13C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_800127B8_133B8(rdram, ctx);
        goto after_256;
    // 0x8020F13C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_256:
    // 0x8020F140: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8020F144: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8020F148: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x8020F14C: jal         0x80210540
    // 0x8020F150: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    func_80210540_697F40(rdram, ctx);
        goto after_257;
    // 0x8020F150: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    after_257:
    // 0x8020F154: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8020F158: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F15C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020F160: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F164: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8020F168: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8020F16C: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F170: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8020F174: jal         0x80012818
    // 0x8020F178: nop

    func_80012818_13418(rdram, ctx);
        goto after_258;
    // 0x8020F178: nop

    after_258:
    // 0x8020F17C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F180: jal         0x800124A0
    // 0x8020F184: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_259;
    // 0x8020F184: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_259:
    // 0x8020F188: lui         $a1, 0xC20E
    ctx->r5 = S32(0XC20E << 16);
    // 0x8020F18C: lui         $a2, 0x41BF
    ctx->r6 = S32(0X41BF << 16);
    // 0x8020F190: lui         $a3, 0xC283
    ctx->r7 = S32(0XC283 << 16);
    // 0x8020F194: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8020F198: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8020F19C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x8020F1A0: jal         0x80012518
    // 0x8020F1A4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012518_13118(rdram, ctx);
        goto after_260;
    // 0x8020F1A4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_260:
    // 0x8020F1A8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8020F1AC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F1B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8020F1B4: b           L_8020F8F4
    // 0x8020F1B8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
        goto L_8020F8F4;
    // 0x8020F1B8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_8020F1BC:
    // 0x8020F1BC: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x8020F1C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F1C4: ldc1        $f10, 0x5050($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X5050);
    // 0x8020F1C8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020F1CC: nop

    // 0x8020F1D0: cvt.d.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
    // 0x8020F1D4: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8020F1D8: nop

    // 0x8020F1DC: bc1tl       L_8020F8F8
    if (c1cs) {
        // 0x8020F1E0: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_29;
    // 0x8020F1E0: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_29:
    // 0x8020F1E4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020F1E8: jal         0x80210638
    // 0x8020F1EC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_80210638_698038(rdram, ctx);
        goto after_261;
    // 0x8020F1EC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_261:
    // 0x8020F1F0: lui         $a1, 0xC276
    ctx->r5 = S32(0XC276 << 16);
    // 0x8020F1F4: lui         $a2, 0x41BF
    ctx->r6 = S32(0X41BF << 16);
    // 0x8020F1F8: lui         $a3, 0xC303
    ctx->r7 = S32(0XC303 << 16);
    // 0x8020F1FC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8020F200: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8020F204: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x8020F208: jal         0x800127B8
    // 0x8020F20C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_800127B8_133B8(rdram, ctx);
        goto after_262;
    // 0x8020F20C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_262:
    // 0x8020F210: lui         $a3, 0xC216
    ctx->r7 = S32(0XC216 << 16);
    // 0x8020F214: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x8020F218: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F21C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x8020F220: jal         0x80012818
    // 0x8020F224: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_263;
    // 0x8020F224: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_263:
    // 0x8020F228: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F22C: jal         0x800124A0
    // 0x8020F230: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_264;
    // 0x8020F230: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_264:
    // 0x8020F234: lui         $a1, 0x4241
    ctx->r5 = S32(0X4241 << 16);
    // 0x8020F238: lui         $a2, 0x41BF
    ctx->r6 = S32(0X41BF << 16);
    // 0x8020F23C: lui         $a3, 0xC2CB
    ctx->r7 = S32(0XC2CB << 16);
    // 0x8020F240: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8020F244: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8020F248: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8020F24C: jal         0x80012518
    // 0x8020F250: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    func_80012518_13118(rdram, ctx);
        goto after_265;
    // 0x8020F250: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    after_265:
    // 0x8020F254: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8020F258: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F25C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8020F260: b           L_8020F8F4
    // 0x8020F264: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
        goto L_8020F8F4;
    // 0x8020F264: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
L_8020F268:
    // 0x8020F268: lw          $t4, 0x100($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X100);
    // 0x8020F26C: bnel        $t4, $zero, L_8020F28C
    if (ctx->r12 != 0) {
        // 0x8020F270: lw          $t6, 0x4($s2)
        ctx->r14 = MEM_W(ctx->r18, 0X4);
            goto L_8020F28C;
    }
    goto skip_30;
    // 0x8020F270: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    skip_30:
    // 0x8020F274: jal         0x8021358C
    // 0x8020F278: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8021358C_69AF8C(rdram, ctx);
        goto after_266;
    // 0x8020F278: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_266:
    // 0x8020F27C: bne         $v0, $zero, L_8020F288
    if (ctx->r2 != 0) {
        // 0x8020F280: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8020F288;
    }
    // 0x8020F280: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F284: sw          $t5, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r13;
L_8020F288:
    // 0x8020F288: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
L_8020F28C:
    // 0x8020F28C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F290: ldc1        $f8, 0x5058($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X5058);
    // 0x8020F294: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8020F298: nop

    // 0x8020F29C: cvt.d.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.d = CVT_D_W(ctx->f4.u32l);
    // 0x8020F2A0: c.lt.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d < ctx->f8.d;
    // 0x8020F2A4: nop

    // 0x8020F2A8: bc1t        L_8020F8F4
    if (c1cs) {
        // 0x8020F2AC: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_8020F8F4;
    }
    // 0x8020F2AC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020F2B0: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020F2B4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F2B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020F2BC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8020F2C0: sb          $t7, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r15;
    // 0x8020F2C4: jal         0x8020FE7C
    // 0x8020F2C8: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_267;
    // 0x8020F2C8: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    after_267:
    // 0x8020F2CC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020F2D0: jal         0x8020FE7C
    // 0x8020F2D4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_268;
    // 0x8020F2D4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    after_268:
    // 0x8020F2D8: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8020F2DC: jal         0x80210A50
    // 0x8020F2E0: lw          $a0, 0x7C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X7C);
    func_80210A50_698450(rdram, ctx);
        goto after_269;
    // 0x8020F2E0: lw          $a0, 0x7C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X7C);
    after_269:
    // 0x8020F2E4: sw          $v0, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r2;
    // 0x8020F2E8: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020F2EC: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    // 0x8020F2F0: jal         0x80213058
    // 0x8020F2F4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_80213058_69AA58(rdram, ctx);
        goto after_270;
    // 0x8020F2F4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_270:
    // 0x8020F2F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F2FC: jal         0x8020FD8C
    // 0x8020F300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FD8C_69778C(rdram, ctx);
        goto after_271;
    // 0x8020F300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_271:
    // 0x8020F304: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F308: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020F30C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F310: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F314: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F318: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F31C: jal         0x80210520
    // 0x8020F320: nop

    func_80210520_697F20(rdram, ctx);
        goto after_272;
    // 0x8020F320: nop

    after_272:
    // 0x8020F324: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F328: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8020F32C: jal         0x8020FEA0
    // 0x8020F330: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_273;
    // 0x8020F330: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_273:
    // 0x8020F334: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020F338: addiu       $a1, $a1, -0x1160
    ctx->r5 = ADD32(ctx->r5, -0X1160);
    // 0x8020F33C: jal         0x80210688
    // 0x8020F340: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210688_698088(rdram, ctx);
        goto after_274;
    // 0x8020F340: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_274:
    // 0x8020F344: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F348: jal         0x80012500
    // 0x8020F34C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80012500_13100(rdram, ctx);
        goto after_275;
    // 0x8020F34C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_275:
    // 0x8020F350: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F354: lui         $a1, 0x41B0
    ctx->r5 = S32(0X41B0 << 16);
    // 0x8020F358: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    // 0x8020F35C: jal         0x800127B8
    // 0x8020F360: lui         $a3, 0x4160
    ctx->r7 = S32(0X4160 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_276;
    // 0x8020F360: lui         $a3, 0x4160
    ctx->r7 = S32(0X4160 << 16);
    after_276:
    // 0x8020F364: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F368: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F36C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F370: jal         0x80012818
    // 0x8020F374: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_277;
    // 0x8020F374: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_277:
    // 0x8020F378: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F37C: jal         0x800124A0
    // 0x8020F380: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_278;
    // 0x8020F380: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_278:
    // 0x8020F384: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F388: lui         $a1, 0x41D0
    ctx->r5 = S32(0X41D0 << 16);
    // 0x8020F38C: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    // 0x8020F390: jal         0x80012518
    // 0x8020F394: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_279;
    // 0x8020F394: lui         $a3, 0x4228
    ctx->r7 = S32(0X4228 << 16);
    after_279:
    // 0x8020F398: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F39C: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x8020F3A0: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x8020F3A4: jal         0x80012628
    // 0x8020F3A8: lui         $a3, 0xC080
    ctx->r7 = S32(0XC080 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_280;
    // 0x8020F3A8: lui         $a3, 0xC080
    ctx->r7 = S32(0XC080 << 16);
    after_280:
    // 0x8020F3AC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020F3B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F3B4: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020F3B8: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8020F3BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020F3C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020F3C4: jal         0x800133E0
    // 0x8020F3C8: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_281;
    // 0x8020F3C8: nop

    after_281:
    // 0x8020F3CC: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020F3D0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8020F3D4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8020F3D8: jal         0x80013484
    // 0x8020F3DC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_282;
    // 0x8020F3DC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_282:
    // 0x8020F3E0: lw          $a0, 0xD0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD0);
    // 0x8020F3E4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020F3E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020F3EC: jal         0x80013400
    // 0x8020F3F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_283;
    // 0x8020F3F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_283:
    // 0x8020F3F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F3F8: jal         0x8020FD8C
    // 0x8020F3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_284;
    // 0x8020F3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_284:
    // 0x8020F400: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x8020F404: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F408: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F40C: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020F410: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020F414: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020F418: jal         0x80210520
    // 0x8020F41C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210520_697F20(rdram, ctx);
        goto after_285;
    // 0x8020F41C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_285:
    // 0x8020F420: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F424: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F428: jal         0x8020FEA0
    // 0x8020F42C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_286;
    // 0x8020F42C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_286:
    // 0x8020F430: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F434: jal         0x80210514
    // 0x8020F438: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_287;
    // 0x8020F438: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_287:
    // 0x8020F43C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F440: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F444: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F448: jal         0x8021056C
    // 0x8020F44C: lui         $a1, 0xC150
    ctx->r5 = S32(0XC150 << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_288;
    // 0x8020F44C: lui         $a1, 0xC150
    ctx->r5 = S32(0XC150 << 16);
    after_288:
    // 0x8020F450: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F454: jal         0x8020FD8C
    // 0x8020F458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_289;
    // 0x8020F458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_289:
    // 0x8020F45C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F460: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020F464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F468: jal         0x8020FEA0
    // 0x8020F46C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_290;
    // 0x8020F46C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_290:
    // 0x8020F470: lui         $at, 0xC1D0
    ctx->r1 = S32(0XC1D0 << 16);
    // 0x8020F474: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F478: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F47C: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F480: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020F484: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020F488: jal         0x80210520
    // 0x8020F48C: nop

    func_80210520_697F20(rdram, ctx);
        goto after_291;
    // 0x8020F48C: nop

    after_291:
    // 0x8020F490: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F494: jal         0x80210514
    // 0x8020F498: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_292;
    // 0x8020F498: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_292:
    // 0x8020F49C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F4A0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F4A4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F4A8: jal         0x8021056C
    // 0x8020F4AC: lui         $a1, 0xC1D0
    ctx->r5 = S32(0XC1D0 << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_293;
    // 0x8020F4AC: lui         $a1, 0xC1D0
    ctx->r5 = S32(0XC1D0 << 16);
    after_293:
    // 0x8020F4B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F4B4: jal         0x8020FD8C
    // 0x8020F4B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_294;
    // 0x8020F4B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_294:
    // 0x8020F4BC: lui         $at, 0xC21C
    ctx->r1 = S32(0XC21C << 16);
    // 0x8020F4C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F4C4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F4C8: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020F4CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020F4D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020F4D4: jal         0x80210520
    // 0x8020F4D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80210520_697F20(rdram, ctx);
        goto after_295;
    // 0x8020F4D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_295:
    // 0x8020F4DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F4E0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F4E4: jal         0x8020FEA0
    // 0x8020F4E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_296;
    // 0x8020F4E8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_296:
    // 0x8020F4EC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F4F0: jal         0x80210514
    // 0x8020F4F4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_297;
    // 0x8020F4F4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_297:
    // 0x8020F4F8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F4FC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F500: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F504: jal         0x8021056C
    // 0x8020F508: lui         $a1, 0xC21C
    ctx->r5 = S32(0XC21C << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_298;
    // 0x8020F508: lui         $a1, 0xC21C
    ctx->r5 = S32(0XC21C << 16);
    after_298:
    // 0x8020F50C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020F510: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F514: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020F518: b           L_8020F8F4
    // 0x8020F51C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020F51C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020F520:
    // 0x8020F520: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8020F524: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F528: ldc1        $f4, 0x5060($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X5060);
    // 0x8020F52C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8020F530: nop

    // 0x8020F534: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x8020F538: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x8020F53C: nop

    // 0x8020F540: bc1tl       L_8020F8F8
    if (c1cs) {
        // 0x8020F544: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_31;
    // 0x8020F544: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_31:
    // 0x8020F548: jal         0x8020FE7C
    // 0x8020F54C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_299;
    // 0x8020F54C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_299:
    // 0x8020F550: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020F554: jal         0x8020FE7C
    // 0x8020F558: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_300;
    // 0x8020F558: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    after_300:
    // 0x8020F55C: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020F560: jal         0x8020FE7C
    // 0x8020F564: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_301;
    // 0x8020F564: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    after_301:
    // 0x8020F568: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020F56C: jal         0x8020FE7C
    // 0x8020F570: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8020FE7C_69787C(rdram, ctx);
        goto after_302;
    // 0x8020F570: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_302:
    // 0x8020F574: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020F578: jal         0x80213008
    // 0x8020F57C: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    func_80213008_69AA08(rdram, ctx);
        goto after_303;
    // 0x8020F57C: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    after_303:
    // 0x8020F580: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8020F584: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F588: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020F58C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020F590: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x8020F594: sw          $t5, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r13;
L_8020F598:
    // 0x8020F598: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F59C: jal         0x8020FD8C
    // 0x8020F5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020FD8C_69778C(rdram, ctx);
        goto after_304;
    // 0x8020F5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_304:
    // 0x8020F5A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F5A8: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x8020F5AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F5B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F5B4: jal         0x8020FEA0
    // 0x8020F5B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_305;
    // 0x8020F5B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_305:
    // 0x8020F5BC: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020F5C0: addiu       $a1, $a1, 0x2EA0
    ctx->r5 = ADD32(ctx->r5, 0X2EA0);
    // 0x8020F5C4: jal         0x80210688
    // 0x8020F5C8: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_80210688_698088(rdram, ctx);
        goto after_306;
    // 0x8020F5C8: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_306:
    // 0x8020F5CC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F5D0: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F5D4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8020F5D8: jal         0x800127B8
    // 0x8020F5DC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_307;
    // 0x8020F5DC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_307:
    // 0x8020F5E0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F5E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F5E8: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F5EC: jal         0x80012818
    // 0x8020F5F0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_308;
    // 0x8020F5F0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_308:
    // 0x8020F5F4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F5F8: jal         0x800124A0
    // 0x8020F5FC: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_309;
    // 0x8020F5FC: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_309:
    // 0x8020F600: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F604: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F608: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020F60C: jal         0x80012518
    // 0x8020F610: lui         $a3, 0x431B
    ctx->r7 = S32(0X431B << 16);
    func_80012518_13118(rdram, ctx);
        goto after_310;
    // 0x8020F610: lui         $a3, 0x431B
    ctx->r7 = S32(0X431B << 16);
    after_310:
    // 0x8020F614: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F618: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F61C: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F620: jal         0x80012628
    // 0x8020F624: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_311;
    // 0x8020F624: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    after_311:
    // 0x8020F628: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8020F62C: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F630: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020F634: b           L_8020F8F4
    // 0x8020F638: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8020F8F4;
    // 0x8020F638: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8020F63C:
    // 0x8020F63C: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x8020F640: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x8020F644: bne         $at, $zero, L_8020F8F4
    if (ctx->r1 != 0) {
        // 0x8020F648: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8020F8F4;
    }
    // 0x8020F648: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F64C: jal         0x8020FD8C
    // 0x8020F650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_312;
    // 0x8020F650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_312:
    // 0x8020F654: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F658: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8020F65C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F660: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F664: jal         0x8020FEA0
    // 0x8020F668: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_313;
    // 0x8020F668: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_313:
    // 0x8020F66C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F670: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F674: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F678: jal         0x80210520
    // 0x8020F67C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_314;
    // 0x8020F67C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_314:
    // 0x8020F680: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F684: jal         0x80210514
    // 0x8020F688: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_315;
    // 0x8020F688: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_315:
    // 0x8020F68C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F690: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F694: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F698: jal         0x8021056C
    // 0x8020F69C: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_316;
    // 0x8020F69C: lui         $a1, 0x4158
    ctx->r5 = S32(0X4158 << 16);
    after_316:
    // 0x8020F6A0: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8020F6A4: jal         0x80210618
    // 0x8020F6A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80210618_698018(rdram, ctx);
        goto after_317;
    // 0x8020F6A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_317:
    // 0x8020F6AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F6B0: jal         0x8020FD8C
    // 0x8020F6B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_318;
    // 0x8020F6B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_318:
    // 0x8020F6B8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F6BC: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8020F6C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F6C4: jal         0x8020FEA0
    // 0x8020F6C8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_319;
    // 0x8020F6C8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_319:
    // 0x8020F6CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F6D0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F6D4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F6D8: jal         0x80210520
    // 0x8020F6DC: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_320;
    // 0x8020F6DC: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_320:
    // 0x8020F6E0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F6E4: jal         0x80210514
    // 0x8020F6E8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_321;
    // 0x8020F6E8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_321:
    // 0x8020F6EC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F6F0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F6F4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F6F8: jal         0x8021056C
    // 0x8020F6FC: lui         $a1, 0xC158
    ctx->r5 = S32(0XC158 << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_322;
    // 0x8020F6FC: lui         $a1, 0xC158
    ctx->r5 = S32(0XC158 << 16);
    after_322:
    // 0x8020F700: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8020F704: jal         0x80210618
    // 0x8020F708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80210618_698018(rdram, ctx);
        goto after_323;
    // 0x8020F708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_323:
    // 0x8020F70C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F710: jal         0x8020FD8C
    // 0x8020F714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8020FD8C_69778C(rdram, ctx);
        goto after_324;
    // 0x8020F714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_324:
    // 0x8020F718: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F71C: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8020F720: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F724: jal         0x8020FEA0
    // 0x8020F728: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8020FEA0_6978A0(rdram, ctx);
        goto after_325;
    // 0x8020F728: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_325:
    // 0x8020F72C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F730: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F734: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F738: jal         0x80210520
    // 0x8020F73C: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    func_80210520_697F20(rdram, ctx);
        goto after_326;
    // 0x8020F73C: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    after_326:
    // 0x8020F740: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F744: jal         0x80210514
    // 0x8020F748: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_80210514_697F14(rdram, ctx);
        goto after_327;
    // 0x8020F748: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_327:
    // 0x8020F74C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F750: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020F754: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F758: jal         0x8021056C
    // 0x8020F75C: lui         $a1, 0xC1D8
    ctx->r5 = S32(0XC1D8 << 16);
    func_8021056C_697F6C(rdram, ctx);
        goto after_328;
    // 0x8020F75C: lui         $a1, 0xC1D8
    ctx->r5 = S32(0XC1D8 << 16);
    after_328:
    // 0x8020F760: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x8020F764: jal         0x80210618
    // 0x8020F768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80210618_698018(rdram, ctx);
        goto after_329;
    // 0x8020F768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_329:
    // 0x8020F76C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8020F770: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F774: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020F778: b           L_8020F8F4
    // 0x8020F77C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
        goto L_8020F8F4;
    // 0x8020F77C: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_8020F780:
    // 0x8020F780: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8020F784: slti        $at, $t2, 0x12C
    ctx->r1 = SIGNED(ctx->r10) < 0X12C ? 1 : 0;
    // 0x8020F788: bne         $at, $zero, L_8020F8F4
    if (ctx->r1 != 0) {
        // 0x8020F78C: addiu       $t3, $zero, 0x96
        ctx->r11 = ADD32(0, 0X96);
            goto L_8020F8F4;
    }
    // 0x8020F78C: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x8020F790: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8020F794: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8020F798: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8020F79C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8020F7A0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8020F7A4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020F7A8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020F7AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F7B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020F7B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020F7B8: jal         0x80213430
    // 0x8020F7BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80213430_69AE30(rdram, ctx);
        goto after_330;
    // 0x8020F7BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_330:
    // 0x8020F7C0: sw          $v0, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = ctx->r2;
    // 0x8020F7C4: jal         0x80210760
    // 0x8020F7C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80210760_698160(rdram, ctx);
        goto after_331;
    // 0x8020F7C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_331:
    // 0x8020F7CC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8020F7D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F7D4: jal         0x802108FC
    // 0x8020F7D8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_802108FC_6982FC(rdram, ctx);
        goto after_332;
    // 0x8020F7D8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_332:
    // 0x8020F7DC: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020F7E0: jal         0x802108EC
    // 0x8020F7E4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_802108EC_6982EC(rdram, ctx);
        goto after_333;
    // 0x8020F7E4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_333:
    // 0x8020F7E8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F7EC: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8020F7F0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020F7F4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F7F8: jal         0x802108CC
    // 0x8020F7FC: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    func_802108CC_6982CC(rdram, ctx);
        goto after_334;
    // 0x8020F7FC: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_334:
    // 0x8020F800: jal         0x80210760
    // 0x8020F804: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80210760_698160(rdram, ctx);
        goto after_335;
    // 0x8020F804: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_335:
    // 0x8020F808: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020F80C: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8020F810: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F814: jal         0x8021084C
    // 0x8020F818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8021084C_69824C(rdram, ctx);
        goto after_336;
    // 0x8020F818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_336:
    // 0x8020F81C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8020F820: jal         0x802108FC
    // 0x8020F824: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_802108FC_6982FC(rdram, ctx);
        goto after_337;
    // 0x8020F824: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_337:
    // 0x8020F828: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8020F82C: jal         0x802108EC
    // 0x8020F830: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_802108EC_6982EC(rdram, ctx);
        goto after_338;
    // 0x8020F830: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_338:
    // 0x8020F834: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8020F838: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8020F83C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020F840: jal         0x802108CC
    // 0x8020F844: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    func_802108CC_6982CC(rdram, ctx);
        goto after_339;
    // 0x8020F844: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_339:
    // 0x8020F848: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8020F84C: addiu       $a1, $a1, 0x520
    ctx->r5 = ADD32(ctx->r5, 0X520);
    // 0x8020F850: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8020F854: jal         0x80210988
    // 0x8020F858: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    func_80210988_698388(rdram, ctx);
        goto after_340;
    // 0x8020F858: addiu       $a2, $zero, 0x292
    ctx->r6 = ADD32(0, 0X292);
    after_340:
    // 0x8020F85C: lui         $a3, 0x42EC
    ctx->r7 = S32(0X42EC << 16);
    // 0x8020F860: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x8020F864: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8020F868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F86C: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x8020F870: jal         0x80210A74
    // 0x8020F874: lui         $a2, 0xC284
    ctx->r6 = S32(0XC284 << 16);
    func_80210A74_698474(rdram, ctx);
        goto after_341;
    // 0x8020F874: lui         $a2, 0xC284
    ctx->r6 = S32(0XC284 << 16);
    after_341:
    // 0x8020F878: jal         0x80212F2C
    // 0x8020F87C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80212F2C_69A92C(rdram, ctx);
        goto after_342;
    // 0x8020F87C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_342:
    // 0x8020F880: sw          $v0, 0xDC($s2)
    MEM_W(0XDC, ctx->r18) = ctx->r2;
    // 0x8020F884: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F888: jal         0x8021306C
    // 0x8020F88C: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    func_8021306C_69AA6C(rdram, ctx);
        goto after_343;
    // 0x8020F88C: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    after_343:
    // 0x8020F890: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8020F894: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8020F898: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020F89C: b           L_8020F8F4
    // 0x8020F8A0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
        goto L_8020F8F4;
    // 0x8020F8A0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
L_8020F8A4:
    // 0x8020F8A4: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8020F8A8: slti        $at, $t9, 0x5A
    ctx->r1 = SIGNED(ctx->r25) < 0X5A ? 1 : 0;
    // 0x8020F8AC: bnel        $at, $zero, L_8020F8F8
    if (ctx->r1 != 0) {
        // 0x8020F8B0: lw          $t5, 0x4($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X4);
            goto L_8020F8F8;
    }
    goto skip_32;
    // 0x8020F8B0: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    skip_32:
    // 0x8020F8B4: jal         0x80213558
    // 0x8020F8B8: lw          $a0, 0xD8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD8);
    func_80213558_69AF58(rdram, ctx);
        goto after_344;
    // 0x8020F8B8: lw          $a0, 0xD8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD8);
    after_344:
    // 0x8020F8BC: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8020F8C0: sw          $zero, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = 0;
    // 0x8020F8C4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8020F8C8: b           L_8020F8F4
    // 0x8020F8CC: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
        goto L_8020F8F4;
    // 0x8020F8CC: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_8020F8D0:
    // 0x8020F8D0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020F8D4: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020F8D8: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x8020F8DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F8E0: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x8020F8E4: lbu         $t3, -0x522B($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X522B);
    // 0x8020F8E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8020F8EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020F8F0: sb          $t4, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r12;
L_8020F8F4:
    // 0x8020F8F4: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
L_8020F8F8:
    // 0x8020F8F8: lw          $t7, 0xE0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0XE0);
    // 0x8020F8FC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020F900: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020F904: beq         $t7, $zero, L_8020FAA0
    if (ctx->r15 == 0) {
        // 0x8020F908: sw          $t6, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r14;
            goto L_8020FAA0;
    }
    // 0x8020F908: sw          $t6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r14;
    // 0x8020F90C: lw          $t8, 0xDC($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XDC);
    // 0x8020F910: beql        $t8, $zero, L_8020FAA4
    if (ctx->r24 == 0) {
        // 0x8020F914: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8020FAA4;
    }
    goto skip_33;
    // 0x8020F914: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_33:
    // 0x8020F918: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8020F91C: beql        $a0, $zero, L_8020FAA4
    if (ctx->r4 == 0) {
        // 0x8020F920: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8020FAA4;
    }
    goto skip_34;
    // 0x8020F920: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_34:
    // 0x8020F924: jal         0x80012938
    // 0x8020F928: nop

    func_80012938_13538(rdram, ctx);
        goto after_345;
    // 0x8020F928: nop

    after_345:
    // 0x8020F92C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020F930: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8020F934: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020F938: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020F93C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8020F940: sub.s       $f14, $f18, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020F944: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x8020F948: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020F94C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020F950: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8020F954: sub.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8020F958: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8020F95C: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8020F960: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8020F964: jal         0x800166E0
    // 0x8020F968: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_800166E0_172E0(rdram, ctx);
        goto after_346;
    // 0x8020F968: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_346:
    // 0x8020F96C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F970: ldc1        $f18, 0x5068($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X5068);
    // 0x8020F974: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8020F978: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8020F97C: div.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x8020F980: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8020F984: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x8020F988: jal         0x800166E0
    // 0x8020F98C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    func_800166E0_172E0(rdram, ctx);
        goto after_347;
    // 0x8020F98C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_347:
    // 0x8020F990: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F994: ldc1        $f10, 0x5070($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X5070);
    // 0x8020F998: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8020F99C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8020F9A0: div.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x8020F9A4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8020F9A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8020F9AC: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020F9B0: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x8020F9B4: add.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f4.d + ctx->f18.d;
    // 0x8020F9B8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x8020F9BC: bc1f        L_8020F9D4
    if (!c1cs) {
        // 0x8020F9C0: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8020F9D4;
    }
    // 0x8020F9C0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8020F9C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020F9C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F9CC: nop

    // 0x8020F9D0: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
L_8020F9D4:
    // 0x8020F9D4: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8020F9D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020F9DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020F9E0: bc1fl       L_8020F9F4
    if (!c1cs) {
        // 0x8020F9E4: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_8020F9F4;
    }
    goto skip_35;
    // 0x8020F9E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_35:
    // 0x8020F9E8: b           L_8020FA1C
    // 0x8020F9EC: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_8020FA1C;
    // 0x8020F9EC: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8020F9F0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_8020F9F4:
    // 0x8020F9F4: nop

    // 0x8020F9F8: bc1fl       L_8020FA20
    if (!c1cs) {
        // 0x8020F9FC: lw          $a0, 0xDC($s2)
        ctx->r4 = MEM_W(ctx->r18, 0XDC);
            goto L_8020FA20;
    }
    goto skip_36;
    // 0x8020F9FC: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    skip_36:
    // 0x8020FA00: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x8020FA04: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8020FA08: nop

    // 0x8020FA0C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8020FA10: nop

    // 0x8020FA14: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020FA18: sub.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f4.fl;
L_8020FA1C:
    // 0x8020FA1C: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
L_8020FA20:
    // 0x8020FA20: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8020FA24: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x8020FA28: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020FA2C: jal         0x80213094
    // 0x8020FA30: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_80213094_69AA94(rdram, ctx);
        goto after_348;
    // 0x8020FA30: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_348:
    // 0x8020FA34: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020FA38: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8020FA3C: jal         0x80213078
    // 0x8020FA40: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_80213078_69AA78(rdram, ctx);
        goto after_349;
    // 0x8020FA40: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_349:
    // 0x8020FA44: lw          $t2, 0xE4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0XE4);
    // 0x8020FA48: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020FA4C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020FA50: beql        $t2, $zero, L_8020FA64
    if (ctx->r10 == 0) {
        // 0x8020FA54: lw          $t3, 0x70($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X70);
            goto L_8020FA64;
    }
    goto skip_37;
    // 0x8020FA54: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    skip_37:
    // 0x8020FA58: b           L_8020FA78
    // 0x8020FA5C: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
        goto L_8020FA78;
    // 0x8020FA5C: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020FA60: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
L_8020FA64:
    // 0x8020FA64: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020FA68: nop

    // 0x8020FA6C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FA70: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8020FA74: nop

L_8020FA78:
    // 0x8020FA78: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8020FA7C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020FA80: lw          $a0, 0xDC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XDC);
    // 0x8020FA84: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8020FA88: nop

    // 0x8020FA8C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020FA90: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8020FA94: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8020FA98: jal         0x80213044
    // 0x8020FA9C: nop

    func_80213044_69AA44(rdram, ctx);
        goto after_350;
    // 0x8020FA9C: nop

    after_350:
L_8020FAA0:
    // 0x8020FAA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8020FAA4:
    // 0x8020FAA4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8020FAA8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8020FAAC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8020FAB0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8020FAB4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8020FAB8: jr          $ra
    // 0x8020FABC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8020FABC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8020D2A0_694CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D2A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D2A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020D2AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020D2B0: jal         0x80041770
    // 0x8020D2B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D2B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8020D2B8: jal         0x80004240
    // 0x8020D2BC: nop

    func_80004240_4E40(rdram, ctx);
        goto after_1;
    // 0x8020D2BC: nop

    after_1:
    // 0x8020D2C0: jal         0x8003FF50
    // 0x8020D2C4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x8020D2C4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_2:
    // 0x8020D2C8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8020D2CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020D2D0: jal         0x8001B6A4
    // 0x8020D2D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_3;
    // 0x8020D2D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8020D2D8: jal         0x80013940
    // 0x8020D2DC: nop

    func_80013940_14540(rdram, ctx);
        goto after_4;
    // 0x8020D2DC: nop

    after_4:
    // 0x8020D2E0: jal         0x80038BC8
    // 0x8020D2E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x8020D2E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8020D2E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8020D2EC: sb          $zero, 0x7AA2($at)
    MEM_B(0X7AA2, ctx->r1) = 0;
    // 0x8020D2F0: jal         0x800369B4
    // 0x8020D2F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800369B4_375B4(rdram, ctx);
        goto after_6;
    // 0x8020D2F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
    // 0x8020D2F8: jal         0x80213C08
    // 0x8020D2FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80213C08_69B608(rdram, ctx);
        goto after_7;
    // 0x8020D2FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_7:
    // 0x8020D300: jal         0x8021428C
    // 0x8020D304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8021428C_69BC8C(rdram, ctx);
        goto after_8;
    // 0x8020D304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_8:
    // 0x8020D308: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020D30C: addiu       $v1, $v1, 0x51D0
    ctx->r3 = ADD32(ctx->r3, 0X51D0);
    // 0x8020D310: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8020D314: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D318: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D31C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D320: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D324: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020D328: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D32C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8020D330: jal         0x8003521C
    // 0x8020D334: addiu       $a0, $a0, -0x2CB8
    ctx->r4 = ADD32(ctx->r4, -0X2CB8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x8020D334: addiu       $a0, $a0, -0x2CB8
    ctx->r4 = ADD32(ctx->r4, -0X2CB8);
    after_9:
    // 0x8020D338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D33C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D340: jr          $ra
    // 0x8020D344: nop

    TRACE_RETURN()
    return;
    // 0x8020D344: nop

;}
RECOMP_FUNC void func_80212BD0_69A5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212BD0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80212BD4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80212BD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80212BDC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212BE0: bgez        $t6, L_80212BF8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80212BE4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80212BF8;
    }
    // 0x80212BE4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212BE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80212BEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212BF0: nop

    // 0x80212BF4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80212BF8:
    // 0x80212BF8: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80212BFC: swc1        $f0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f0.u32l;
    // 0x80212C00: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80212C04: nop

    // 0x80212C08: bc1fl       L_80212C24
    if (!c1cs) {
        // 0x80212C0C: lwc1        $f10, 0x38($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
            goto L_80212C24;
    }
    goto skip_0;
    // 0x80212C0C: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    skip_0:
    // 0x80212C10: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80212C14: sub.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80212C18: b           L_80212C28
    // 0x80212C1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212C28;
    // 0x80212C1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212C20: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
L_80212C24:
    // 0x80212C24: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
L_80212C28:
    // 0x80212C28: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212C2C: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80212C30: jr          $ra
    // 0x80212C34: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80212C34: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80212D10_69A710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212D10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80212D14: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80212D18: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80212D1C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80212D20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212D24: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80212D28: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80212D2C: addiu       $a1, $a1, 0x212C
    ctx->r5 = ADD32(ctx->r5, 0X212C);
    // 0x80212D30: jal         0x80034E08
    // 0x80212D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80212D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80212D38: bne         $v0, $zero, L_80212D48
    if (ctx->r2 != 0) {
        // 0x80212D3C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80212D48;
    }
    // 0x80212D3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80212D40: b           L_80212E64
    // 0x80212D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212E64;
    // 0x80212D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212D48:
    // 0x80212D48: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80212D4C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80212D50: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80212D54: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80212D58: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80212D5C: jal         0x800148F0
    // 0x80212D60: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x80212D60: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x80212D64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212D68: lwc1        $f0, 0x517C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X517C);
    // 0x80212D6C: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x80212D70: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212D74: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80212D78: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80212D7C: addiu       $a1, $a1, 0x37C
    ctx->r5 = ADD32(ctx->r5, 0X37C);
    // 0x80212D80: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80212D84: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80212D88: addiu       $t6, $zero, 0x4AD
    ctx->r14 = ADD32(0, 0X4AD);
    // 0x80212D8C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80212D90: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x80212D94: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80212D98: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80212D9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80212DA0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80212DA4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212DA8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212DAC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80212DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212DB4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80212DB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80212DBC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80212DC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80212DC4: jal         0x8000DBF0
    // 0x80212DC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80212DC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80212DCC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80212DD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212DD4: lwc1        $f0, 0x5180($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5180);
    // 0x80212DD8: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
    // 0x80212DDC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212DE0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80212DE4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80212DE8: addiu       $a1, $a1, 0x3C8
    ctx->r5 = ADD32(ctx->r5, 0X3C8);
    // 0x80212DEC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80212DF0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80212DF4: addiu       $t7, $zero, 0x4AD
    ctx->r15 = ADD32(0, 0X4AD);
    // 0x80212DF8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80212DFC: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x80212E00: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80212E04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80212E08: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80212E0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212E10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212E14: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80212E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212E1C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80212E20: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80212E24: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80212E28: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80212E2C: jal         0x8000DBF0
    // 0x80212E30: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x80212E30: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80212E34: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80212E38: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80212E3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212E40: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x80212E44: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80212E48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80212E4C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x80212E50: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80212E54: swc1        $f18, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f18.u32l;
    // 0x80212E58: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212E5C: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x80212E60: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
L_80212E64:
    // 0x80212E64: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80212E68: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80212E6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80212E70: jr          $ra
    // 0x80212E74: nop

    TRACE_RETURN()
    return;
    // 0x80212E74: nop

;}
RECOMP_FUNC void func_80210E58_698858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210E58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80210E5C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80210E60: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80210E64: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80210E68: addiu       $a1, $a1, 0xCA0
    ctx->r5 = ADD32(ctx->r5, 0XCA0);
    // 0x80210E6C: jal         0x80034E08
    // 0x80210E70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80210E70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80210E74: bne         $v0, $zero, L_80210E84
    if (ctx->r2 != 0) {
        // 0x80210E78: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80210E84;
    }
    // 0x80210E78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80210E7C: b           L_80210F48
    // 0x80210E80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80210F48;
    // 0x80210E80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80210E84:
    // 0x80210E84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210E88: addiu       $a0, $s0, 0x94
    ctx->r4 = ADD32(ctx->r16, 0X94);
    // 0x80210E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80210E90: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80210E94: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x80210E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210E9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80210EA0: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80210EA4: jal         0x80211190
    // 0x80210EA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80211190_698B90(rdram, ctx);
        goto after_1;
    // 0x80210EA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80210EAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210EB0: lwc1        $f2, 0x5128($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5128);
    // 0x80210EB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210EB8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80210EBC: addiu       $a1, $a1, 0x3D0
    ctx->r5 = ADD32(ctx->r5, 0X3D0);
    // 0x80210EC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210EC4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80210EC8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80210ECC: addiu       $t8, $zero, 0x509
    ctx->r24 = ADD32(0, 0X509);
    // 0x80210ED0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80210ED4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80210ED8: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x80210EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80210EE0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80210EE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80210EE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80210EEC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80210EF0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80210EF4: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80210EF8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80210EFC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80210F00: jal         0x8000DBF0
    // 0x80210F04: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80210F04: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80210F08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210F0C: lwc1        $f2, 0x512C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X512C);
    // 0x80210F10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80210F14: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80210F18: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    // 0x80210F1C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x80210F20: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x80210F24: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x80210F28: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80210F2C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x80210F30: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x80210F34: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80210F38: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x80210F3C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80210F40: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80210F44: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80210F48:
    // 0x80210F48: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80210F4C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80210F50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80210F54: jr          $ra
    // 0x80210F58: nop

    TRACE_RETURN()
    return;
    // 0x80210F58: nop

;}
RECOMP_FUNC void func_80212E78_69A878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212E80: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80212E84: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80212E88: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80212E8C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80212E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212E94: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80212E98: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80212E9C: jal         0x80014B74
    // 0x80212EA0: lw          $a1, 0x5C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X5C);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x80212EA0: lw          $a1, 0x5C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X5C);
    after_0:
    // 0x80212EA4: jal         0x80034EF8
    // 0x80212EA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x80212EA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80212EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212EB4: jr          $ra
    // 0x80212EB8: nop

    TRACE_RETURN()
    return;
    // 0x80212EB8: nop

;}
RECOMP_FUNC void func_802130A8_69AAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802130A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802130AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802130B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802130B4: addiu       $a1, $a1, 0x2EBC
    ctx->r5 = ADD32(ctx->r5, 0X2EBC);
    // 0x802130B8: jal         0x80034E08
    // 0x802130BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802130BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802130C0: bne         $v0, $zero, L_802130D0
    if (ctx->r2 != 0) {
        // 0x802130C4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802130D0;
    }
    // 0x802130C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802130C8: b           L_802131AC
    // 0x802130CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802131AC;
    // 0x802130CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802130D0:
    // 0x802130D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802130D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802130D8: jal         0x80035EEC
    // 0x802130DC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x802130DC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802130E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802130E4: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802130E8: bne         $v0, $zero, L_802130F8
    if (ctx->r2 != 0) {
        // 0x802130EC: sw          $v0, 0x2C($v1)
        MEM_W(0X2C, ctx->r3) = ctx->r2;
            goto L_802130F8;
    }
    // 0x802130EC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x802130F0: b           L_802131AC
    // 0x802130F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802131AC;
    // 0x802130F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802130F8:
    // 0x802130F8: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x802130FC: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80213100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80213104: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    // 0x80213108: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x8021310C: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80213110: addiu       $t0, $zero, 0x291
    ctx->r8 = ADD32(0, 0X291);
    // 0x80213114: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x80213118: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x8021311C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80213120: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80213124: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x80213128: lw          $t1, 0x2C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X2C);
    // 0x8021312C: addiu       $t4, $zero, 0x140
    ctx->r12 = ADD32(0, 0X140);
    // 0x80213130: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80213134: sh          $t0, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r8;
    // 0x80213138: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    // 0x8021313C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213140: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80213144: sb          $t2, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r10;
    // 0x80213148: lw          $t5, 0x2C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2C);
    // 0x8021314C: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x80213150: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x80213154: addiu       $t4, $zero, 0x13F
    ctx->r12 = ADD32(0, 0X13F);
    // 0x80213158: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x8021315C: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x80213160: lwc1        $f4, 0x5188($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5188);
    // 0x80213164: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x80213168: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021316C: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x80213170: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x80213174: addiu       $t6, $zero, 0xEF
    ctx->r14 = ADD32(0, 0XEF);
    // 0x80213178: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
    // 0x8021317C: lw          $t0, 0x2C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X2C);
    // 0x80213180: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80213184: lw          $t1, 0x2C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X2C);
    // 0x80213188: swc1        $f0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f0.u32l;
    // 0x8021318C: lw          $t2, 0x2C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2C);
    // 0x80213190: sh          $zero, 0x2E($t2)
    MEM_H(0X2E, ctx->r10) = 0;
    // 0x80213194: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    // 0x80213198: sh          $zero, 0x30($t3)
    MEM_H(0X30, ctx->r11) = 0;
    // 0x8021319C: lw          $t5, 0x2C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2C);
    // 0x802131A0: sh          $t4, 0x32($t5)
    MEM_H(0X32, ctx->r13) = ctx->r12;
    // 0x802131A4: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x802131A8: sh          $t6, 0x34($t7)
    MEM_H(0X34, ctx->r15) = ctx->r14;
L_802131AC:
    // 0x802131AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802131B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802131B4: jr          $ra
    // 0x802131B8: nop

    TRACE_RETURN()
    return;
    // 0x802131B8: nop

;}
RECOMP_FUNC void func_802143E4_69BDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802143E4: lhu         $t6, 0x68($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X68);
    // 0x802143E8: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x802143EC: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802143F0: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x802143F4: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802143F8: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x802143FC: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80214400: jr          $ra
    // 0x80214404: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80214404: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020FAC0_6974C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FAC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020FAC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020FAC8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020FACC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8020FAD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8020FAD4: addiu       $a1, $a1, -0x29C0
    ctx->r5 = ADD32(ctx->r5, -0X29C0);
    // 0x8020FAD8: jal         0x80034E08
    // 0x8020FADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020FADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020FAE0: bne         $v0, $zero, L_8020FAF0
    if (ctx->r2 != 0) {
        // 0x8020FAE4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8020FAF0;
    }
    // 0x8020FAE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8020FAE8: b           L_8020FC3C
    // 0x8020FAEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FC3C;
    // 0x8020FAEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FAF0:
    // 0x8020FAF0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8020FAF4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x8020FAF8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8020FAFC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8020FB00: addiu       $a1, $zero, 0x108
    ctx->r5 = ADD32(0, 0X108);
    // 0x8020FB04: jal         0x800148F0
    // 0x8020FB08: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x8020FB08: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x8020FB0C: bne         $v0, $zero, L_8020FB1C
    if (ctx->r2 != 0) {
        // 0x8020FB10: sw          $v0, 0x5C($s1)
        MEM_W(0X5C, ctx->r17) = ctx->r2;
            goto L_8020FB1C;
    }
    // 0x8020FB10: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    // 0x8020FB14: b           L_8020FC3C
    // 0x8020FB18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FC3C;
    // 0x8020FB18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FB1C:
    // 0x8020FB1C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8020FB20: lw          $s0, 0x5C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X5C);
    // 0x8020FB24: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x8020FB28: jal         0x80034DD8
    // 0x8020FB2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x8020FB2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8020FB30: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8020FB34: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8020FB38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020FB3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020FB40: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020FB44: jal         0x801DC630
    // 0x8020FB48: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    func_801DC630_598540(rdram, ctx);
        goto after_3;
    // 0x8020FB48: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    after_3:
    // 0x8020FB4C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8020FB50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8020FB54: jal         0x8001B6A4
    // 0x8020FB58: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_4;
    // 0x8020FB58: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x8020FB5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020FB60: jal         0x8001381C
    // 0x8020FB64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001381C_1441C(rdram, ctx);
        goto after_5;
    // 0x8020FB64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8020FB68: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x8020FB6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020FB70: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020FB74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020FB78: jal         0x80013400
    // 0x8020FB7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_6;
    // 0x8020FB7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x8020FB80: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x8020FB84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020FB88: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020FB8C: jal         0x80013484
    // 0x8020FB90: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013484_14084(rdram, ctx);
        goto after_7;
    // 0x8020FB90: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_7:
    // 0x8020FB94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020FB98: jal         0x80012940
    // 0x8020FB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_8;
    // 0x8020FB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8020FBA0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x8020FBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020FBA8: jal         0x80012500
    // 0x8020FBAC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80012500_13100(rdram, ctx);
        goto after_9;
    // 0x8020FBAC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_9:
    // 0x8020FBB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FBB4: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8020FBB8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020FBBC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020FBC0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020FBC4: jal         0x80012818
    // 0x8020FBC8: nop

    func_80012818_13418(rdram, ctx);
        goto after_10;
    // 0x8020FBC8: nop

    after_10:
    // 0x8020FBCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FBD0: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8020FBD4: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x8020FBD8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020FBDC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8020FBE0: jal         0x800127B8
    // 0x8020FBE4: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_11;
    // 0x8020FBE4: nop

    after_11:
    // 0x8020FBE8: jal         0x80012938
    // 0x8020FBEC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    func_80012938_13538(rdram, ctx);
        goto after_12;
    // 0x8020FBEC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    after_12:
    // 0x8020FBF0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8020FBF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020FBF8: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x8020FBFC: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x8020FC00: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x8020FC04: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x8020FC08: sh          $t8, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r24;
    // 0x8020FC0C: sh          $t9, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r25;
    // 0x8020FC10: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x8020FC14: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020FC18: sw          $t0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r8;
    // 0x8020FC1C: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x8020FC20: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x8020FC24: sw          $zero, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = 0;
    // 0x8020FC28: sw          $zero, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = 0;
    // 0x8020FC2C: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    // 0x8020FC30: sw          $zero, 0x100($s0)
    MEM_W(0X100, ctx->r16) = 0;
    // 0x8020FC34: sw          $zero, 0x104($s0)
    MEM_W(0X104, ctx->r16) = 0;
    // 0x8020FC38: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8020FC3C:
    // 0x8020FC3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020FC40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8020FC48: jr          $ra
    // 0x8020FC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8020FC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021212C_699B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021212C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80212130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212134: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80212138: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021213C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x80212140: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x80212144: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80212148: addiu       $a2, $v0, 0x60
    ctx->r6 = ADD32(ctx->r2, 0X60);
    // 0x8021214C: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80212150: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212154: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x80212158: lw          $a0, 0x54($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X54);
    // 0x8021215C: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80212160: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80212164: jal         0x8001B5AC
    // 0x80212168: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80212168: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021216C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80212170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212178: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x8021217C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80212180: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80212184: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80212188: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8021218C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80212190: nop

    // 0x80212194: bc1fl       L_802121C0
    if (!c1cs) {
        // 0x80212198: lw          $v1, 0x58($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X58);
            goto L_802121C0;
    }
    goto skip_0;
    // 0x80212198: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    skip_0:
    // 0x8021219C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x802121A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802121A4: bnel        $t6, $at, L_802121BC
    if (ctx->r14 != ctx->r1) {
        // 0x802121A8: swc1        $f2, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
            goto L_802121BC;
    }
    goto skip_1;
    // 0x802121A8: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x802121AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802121B0: b           L_802121BC
    // 0x802121B4: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
        goto L_802121BC;
    // 0x802121B4: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x802121B8: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
L_802121BC:
    // 0x802121BC: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
L_802121C0:
    // 0x802121C0: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802121C4: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802121C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802121CC: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x802121D0: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    // 0x802121D4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x802121D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802121DC: jal         0x8001B5AC
    // 0x802121E0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x802121E0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_1:
    // 0x802121E4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x802121E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802121EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802121F0: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x802121F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802121F8: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802121FC: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80212200: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80212204: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80212208: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8021220C: nop

    // 0x80212210: bc1fl       L_80212238
    if (!c1cs) {
        // 0x80212214: lwc1        $f14, 0x18($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
            goto L_80212238;
    }
    goto skip_2;
    // 0x80212214: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    skip_2:
    // 0x80212218: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x8021221C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80212220: bnel        $t7, $at, L_80212234
    if (ctx->r15 != ctx->r1) {
        // 0x80212224: swc1        $f2, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
            goto L_80212234;
    }
    goto skip_3;
    // 0x80212224: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x80212228: b           L_80212234
    // 0x8021222C: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
        goto L_80212234;
    // 0x8021222C: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x80212230: swc1        $f2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f2.u32l;
L_80212234:
    // 0x80212234: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
L_80212238:
    // 0x80212238: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021223C: ldc1        $f16, 0x5168($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X5168);
    // 0x80212240: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80212244: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80212248: nop

    // 0x8021224C: bc1fl       L_802122C0
    if (!c1cs) {
        // 0x80212250: lwc1        $f14, 0x24($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
            goto L_802122C0;
    }
    goto skip_4;
    // 0x80212250: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    skip_4:
    // 0x80212254: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80212258: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021225C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80212260: nop

    // 0x80212264: bc1fl       L_8021227C
    if (!c1cs) {
        // 0x80212268: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021227C;
    }
    goto skip_5;
    // 0x80212268: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x8021226C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80212270: b           L_8021227C
    // 0x80212274: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021227C;
    // 0x80212274: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212278: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021227C:
    // 0x8021227C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80212280: nop

    // 0x80212284: bc1fl       L_8021229C
    if (!c1cs) {
        // 0x80212288: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021229C;
    }
    goto skip_6;
    // 0x80212288: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x8021228C: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x80212290: b           L_802122BC
    // 0x80212294: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
        goto L_802122BC;
    // 0x80212294: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x80212298: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021229C:
    // 0x8021229C: nop

    // 0x802122A0: bc1fl       L_802122B8
    if (!c1cs) {
        // 0x802122A4: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802122B8;
    }
    goto skip_7;
    // 0x802122A4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x802122A8: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802122AC: b           L_802122BC
    // 0x802122B0: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
        goto L_802122BC;
    // 0x802122B0: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x802122B4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_802122B8:
    // 0x802122B8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_802122BC:
    // 0x802122BC: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
L_802122C0:
    // 0x802122C0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x802122C4: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x802122C8: nop

    // 0x802122CC: bc1fl       L_80212340
    if (!c1cs) {
        // 0x802122D0: lwc1        $f14, 0x30($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
            goto L_80212340;
    }
    goto skip_8;
    // 0x802122D0: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    skip_8:
    // 0x802122D4: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802122D8: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802122DC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802122E0: nop

    // 0x802122E4: bc1fl       L_802122FC
    if (!c1cs) {
        // 0x802122E8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802122FC;
    }
    goto skip_9;
    // 0x802122E8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x802122EC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802122F0: b           L_802122FC
    // 0x802122F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802122FC;
    // 0x802122F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802122F8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802122FC:
    // 0x802122FC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80212300: nop

    // 0x80212304: bc1fl       L_8021231C
    if (!c1cs) {
        // 0x80212308: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021231C;
    }
    goto skip_10;
    // 0x80212308: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x8021230C: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x80212310: b           L_8021233C
    // 0x80212314: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
        goto L_8021233C;
    // 0x80212314: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x80212318: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021231C:
    // 0x8021231C: nop

    // 0x80212320: bc1fl       L_80212338
    if (!c1cs) {
        // 0x80212324: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80212338;
    }
    goto skip_11;
    // 0x80212324: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x80212328: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021232C: b           L_8021233C
    // 0x80212330: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
        goto L_8021233C;
    // 0x80212330: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x80212334: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80212338:
    // 0x80212338: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
L_8021233C:
    // 0x8021233C: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
L_80212340:
    // 0x80212340: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80212344: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80212348: nop

    // 0x8021234C: bc1fl       L_802123C0
    if (!c1cs) {
        // 0x80212350: lhu         $t8, 0x4($v0)
        ctx->r24 = MEM_HU(ctx->r2, 0X4);
            goto L_802123C0;
    }
    goto skip_12;
    // 0x80212350: lhu         $t8, 0x4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4);
    skip_12:
    // 0x80212354: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80212358: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021235C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80212360: nop

    // 0x80212364: bc1fl       L_8021237C
    if (!c1cs) {
        // 0x80212368: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021237C;
    }
    goto skip_13;
    // 0x80212368: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x8021236C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80212370: b           L_8021237C
    // 0x80212374: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021237C;
    // 0x80212374: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212378: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021237C:
    // 0x8021237C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80212380: nop

    // 0x80212384: bc1fl       L_8021239C
    if (!c1cs) {
        // 0x80212388: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021239C;
    }
    goto skip_14;
    // 0x80212388: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x8021238C: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x80212390: b           L_802123BC
    // 0x80212394: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
        goto L_802123BC;
    // 0x80212394: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    // 0x80212398: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021239C:
    // 0x8021239C: nop

    // 0x802123A0: bc1fl       L_802123B8
    if (!c1cs) {
        // 0x802123A4: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802123B8;
    }
    goto skip_15;
    // 0x802123A4: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x802123A8: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802123AC: b           L_802123BC
    // 0x802123B0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
        goto L_802123BC;
    // 0x802123B0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x802123B4: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_802123B8:
    // 0x802123B8: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
L_802123BC:
    // 0x802123BC: lhu         $t8, 0x4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4);
L_802123C0:
    // 0x802123C0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802123C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802123C8: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x802123CC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802123D0: lw          $t3, 0x54($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X54);
    // 0x802123D4: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x802123D8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802123DC: lw          $t4, 0x54($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X54);
    // 0x802123E0: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x802123E4: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802123E8: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x802123EC: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x802123F0: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x802123F4: lhu         $t6, 0x4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4);
    // 0x802123F8: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x802123FC: lw          $t8, 0x58($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X58);
    // 0x80212400: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80212404: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80212408: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x8021240C: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80212410: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x80212414: lw          $t3, 0x58($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X58);
    // 0x80212418: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021241C: swc1        $f4, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f4.u32l;
    // 0x80212420: lwc1        $f14, 0x50($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80212424: ldc1        $f6, 0x5170($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5170);
    // 0x80212428: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021242C: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80212430: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80212434: nop

    // 0x80212438: bc1fl       L_802124B0
    if (!c1cs) {
        // 0x8021243C: lw          $v1, 0x54($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X54);
            goto L_802124B0;
    }
    goto skip_16;
    // 0x8021243C: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    skip_16:
    // 0x80212440: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x80212444: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80212448: lwc1        $f2, 0x24($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8021244C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80212450: nop

    // 0x80212454: bc1fl       L_8021246C
    if (!c1cs) {
        // 0x80212458: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021246C;
    }
    goto skip_17;
    // 0x80212458: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_17:
    // 0x8021245C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80212460: b           L_8021246C
    // 0x80212464: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021246C;
    // 0x80212464: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212468: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021246C:
    // 0x8021246C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80212470: nop

    // 0x80212474: bc1fl       L_8021248C
    if (!c1cs) {
        // 0x80212478: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021248C;
    }
    goto skip_18;
    // 0x80212478: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_18:
    // 0x8021247C: swc1        $f12, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f12.u32l;
    // 0x80212480: b           L_802124AC
    // 0x80212484: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
        goto L_802124AC;
    // 0x80212484: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
    // 0x80212488: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021248C:
    // 0x8021248C: nop

    // 0x80212490: bc1fl       L_802124A8
    if (!c1cs) {
        // 0x80212494: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802124A8;
    }
    goto skip_19;
    // 0x80212494: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_19:
    // 0x80212498: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021249C: b           L_802124AC
    // 0x802124A0: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
        goto L_802124AC;
    // 0x802124A0: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
    // 0x802124A4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_802124A8:
    // 0x802124A8: swc1        $f4, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f4.u32l;
L_802124AC:
    // 0x802124AC: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
L_802124B0:
    // 0x802124B0: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802124B4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x802124B8: lw          $t4, 0x54($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X54);
    // 0x802124BC: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x802124C0: lw          $t5, 0x58($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X58);
    // 0x802124C4: swc1        $f0, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f0.u32l;
    // 0x802124C8: lw          $t6, 0x58($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X58);
    // 0x802124CC: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x802124D0: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x802124D4: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x802124D8: lwc1        $f14, 0x3C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802124DC: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x802124E0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x802124E4: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x802124E8: nop

    // 0x802124EC: bc1fl       L_80212588
    if (!c1cs) {
        // 0x802124F0: lwc1        $f14, 0x48($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
            goto L_80212588;
    }
    goto skip_20;
    // 0x802124F0: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
    skip_20:
    // 0x802124F4: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802124F8: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802124FC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80212500: nop

    // 0x80212504: bc1fl       L_8021251C
    if (!c1cs) {
        // 0x80212508: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021251C;
    }
    goto skip_21;
    // 0x80212508: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_21:
    // 0x8021250C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80212510: b           L_8021251C
    // 0x80212514: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021251C;
    // 0x80212514: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212518: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021251C:
    // 0x8021251C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80212520: nop

    // 0x80212524: bc1fl       L_8021253C
    if (!c1cs) {
        // 0x80212528: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021253C;
    }
    goto skip_22;
    // 0x80212528: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_22:
    // 0x8021252C: swc1        $f12, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f12.u32l;
    // 0x80212530: b           L_8021255C
    // 0x80212534: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
        goto L_8021255C;
    // 0x80212534: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x80212538: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021253C:
    // 0x8021253C: nop

    // 0x80212540: bc1fl       L_80212558
    if (!c1cs) {
        // 0x80212544: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80212558;
    }
    goto skip_23;
    // 0x80212544: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_23:
    // 0x80212548: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021254C: b           L_8021255C
    // 0x80212550: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
        goto L_8021255C;
    // 0x80212550: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x80212554: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80212558:
    // 0x80212558: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
L_8021255C:
    // 0x8021255C: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80212560: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80212564: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x80212568: nop

    // 0x8021256C: bc1fl       L_80212588
    if (!c1cs) {
        // 0x80212570: lwc1        $f14, 0x48($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
            goto L_80212588;
    }
    goto skip_24;
    // 0x80212570: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
    skip_24:
    // 0x80212574: jal         0x80034ED4
    // 0x80212578: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x80212578: nop

    after_2:
    // 0x8021257C: b           L_80212960
    // 0x80212580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80212960;
    // 0x80212580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212584: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
L_80212588:
    // 0x80212588: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x8021258C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80212590: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80212594: addiu       $t5, $t5, 0x46D8
    ctx->r13 = ADD32(ctx->r13, 0X46D8);
    // 0x80212598: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8021259C: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x802125A0: addiu       $t6, $t6, 0x4A50
    ctx->r14 = ADD32(ctx->r14, 0X4A50);
    // 0x802125A4: bc1fl       L_80212618
    if (!c1cs) {
        // 0x802125A8: lw          $t8, 0x54($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X54);
            goto L_80212618;
    }
    goto skip_25;
    // 0x802125A8: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
    skip_25:
    // 0x802125AC: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802125B0: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802125B4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802125B8: nop

    // 0x802125BC: bc1fl       L_802125D4
    if (!c1cs) {
        // 0x802125C0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802125D4;
    }
    goto skip_26;
    // 0x802125C0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_26:
    // 0x802125C4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802125C8: b           L_802125D4
    // 0x802125CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802125D4;
    // 0x802125CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802125D0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802125D4:
    // 0x802125D4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802125D8: nop

    // 0x802125DC: bc1fl       L_802125F4
    if (!c1cs) {
        // 0x802125E0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802125F4;
    }
    goto skip_27;
    // 0x802125E0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_27:
    // 0x802125E4: swc1        $f12, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f12.u32l;
    // 0x802125E8: b           L_80212614
    // 0x802125EC: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
        goto L_80212614;
    // 0x802125EC: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
    // 0x802125F0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802125F4:
    // 0x802125F4: nop

    // 0x802125F8: bc1fl       L_80212610
    if (!c1cs) {
        // 0x802125FC: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80212610;
    }
    goto skip_28;
    // 0x802125FC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_28:
    // 0x80212600: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80212604: b           L_80212614
    // 0x80212608: swc1        $f10, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f10.u32l;
        goto L_80212614;
    // 0x80212608: swc1        $f10, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f10.u32l;
    // 0x8021260C: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80212610:
    // 0x80212610: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
L_80212614:
    // 0x80212614: lw          $t8, 0x54($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X54);
L_80212618:
    // 0x80212618: or          $v1, $t1, $at
    ctx->r3 = ctx->r9 | ctx->r1;
    // 0x8021261C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80212620: sw          $v1, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r3;
    // 0x80212624: lw          $t9, 0x58($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X58);
    // 0x80212628: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021262C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80212630: sw          $v1, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r3;
    // 0x80212634: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80212638: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021263C: addiu       $t1, $a2, 0x8
    ctx->r9 = ADD32(ctx->r6, 0X8);
    // 0x80212640: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80212644: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80212648: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021264C: nop

    // 0x80212650: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80212654: beql        $t4, $zero, L_802126A4
    if (ctx->r12 == 0) {
        // 0x80212658: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_802126A4;
    }
    goto skip_29;
    // 0x80212658: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_29:
    // 0x8021265C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80212660: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80212664: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80212668: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021266C: nop

    // 0x80212670: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80212674: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80212678: nop

    // 0x8021267C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80212680: bne         $t4, $zero, L_80212698
    if (ctx->r12 != 0) {
        // 0x80212684: nop
    
            goto L_80212698;
    }
    // 0x80212684: nop

    // 0x80212688: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8021268C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80212690: b           L_802126B0
    // 0x80212694: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802126B0;
    // 0x80212694: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_80212698:
    // 0x80212698: b           L_802126B0
    // 0x8021269C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802126B0;
    // 0x8021269C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802126A0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_802126A4:
    // 0x802126A4: nop

    // 0x802126A8: bltz        $t4, L_80212698
    if (SIGNED(ctx->r12) < 0) {
        // 0x802126AC: nop
    
            goto L_80212698;
    }
    // 0x802126AC: nop

L_802126B0:
    // 0x802126B0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802126B4: sltiu       $at, $t4, 0xFF
    ctx->r1 = ctx->r12 < 0XFF ? 1 : 0;
    // 0x802126B8: bne         $at, $zero, L_802126D4
    if (ctx->r1 != 0) {
        // 0x802126BC: lui         $t4, 0xB800
        ctx->r12 = S32(0XB800 << 16);
            goto L_802126D4;
    }
    // 0x802126BC: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x802126C0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x802126C4: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x802126C8: addiu       $t1, $a2, 0x8
    ctx->r9 = ADD32(ctx->r6, 0X8);
    // 0x802126CC: b           L_802126DC
    // 0x802126D0: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
        goto L_802126DC;
    // 0x802126D0: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
L_802126D4:
    // 0x802126D4: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x802126D8: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
L_802126DC:
    // 0x802126DC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x802126E0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802126E4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802126E8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802126EC: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802126F0: lui         $t0, 0x8FFF
    ctx->r8 = S32(0X8FFF << 16);
    // 0x802126F4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x802126F8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802126FC: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80212700: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80212704: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80212708: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021270C: nop

    // 0x80212710: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80212714: beql        $t9, $zero, L_80212764
    if (ctx->r25 == 0) {
        // 0x80212718: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_80212764;
    }
    goto skip_30;
    // 0x80212718: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_30:
    // 0x8021271C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80212720: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80212724: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80212728: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021272C: nop

    // 0x80212730: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80212734: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80212738: nop

    // 0x8021273C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80212740: bne         $t9, $zero, L_80212758
    if (ctx->r25 != 0) {
        // 0x80212744: nop
    
            goto L_80212758;
    }
    // 0x80212744: nop

    // 0x80212748: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8021274C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80212750: b           L_80212770
    // 0x80212754: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80212770;
    // 0x80212754: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80212758:
    // 0x80212758: b           L_80212770
    // 0x8021275C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80212770;
    // 0x8021275C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80212760: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_80212764:
    // 0x80212764: nop

    // 0x80212768: bltz        $t9, L_80212758
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021276C: nop
    
            goto L_80212758;
    }
    // 0x8021276C: nop

L_80212770:
    // 0x80212770: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x80212774: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80212778: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8021277C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x80212780: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x80212784: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80212788: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021278C: lw          $a3, 0x30($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X30);
    // 0x80212790: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80212794: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80212798: subu        $t6, $t0, $a3
    ctx->r14 = SUB32(ctx->r8, ctx->r7);
    // 0x8021279C: and         $t7, $t1, $t6
    ctx->r15 = ctx->r9 & ctx->r14;
    // 0x802127A0: and         $a1, $t7, $t0
    ctx->r5 = ctx->r15 & ctx->r8;
    // 0x802127A4: jal         0x80040620
    // 0x802127A8: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x802127A8: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    after_3:
    // 0x802127AC: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x802127B0: lui         $t0, 0x8FFF
    ctx->r8 = S32(0X8FFF << 16);
    // 0x802127B4: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x802127B8: lb          $t8, 0x2($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2);
    // 0x802127BC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x802127C0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x802127C4: beq         $t8, $zero, L_8021295C
    if (ctx->r24 == 0) {
        // 0x802127C8: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_8021295C;
    }
    // 0x802127C8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802127CC: lw          $t3, 0x58($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X58);
    // 0x802127D0: or          $t9, $t1, $at
    ctx->r25 = ctx->r9 | ctx->r1;
    // 0x802127D4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802127D8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802127DC: sw          $t9, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r25;
    // 0x802127E0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802127E4: lwc1        $f6, 0x40($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802127E8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802127EC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802127F0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802127F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802127F8: addiu       $t6, $t6, 0x46D8
    ctx->r14 = ADD32(ctx->r14, 0X46D8);
    // 0x802127FC: addiu       $t7, $t7, 0x4A50
    ctx->r15 = ADD32(ctx->r15, 0X4A50);
    // 0x80212800: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80212804: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80212808: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021280C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80212810: beq         $t5, $zero, L_8021285C
    if (ctx->r13 == 0) {
        // 0x80212814: lui         $t8, 0xFB00
        ctx->r24 = S32(0XFB00 << 16);
            goto L_8021285C;
    }
    // 0x80212814: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80212818: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021281C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80212820: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80212824: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80212828: nop

    // 0x8021282C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80212830: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80212834: nop

    // 0x80212838: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021283C: bne         $t5, $zero, L_80212854
    if (ctx->r13 != 0) {
        // 0x80212840: nop
    
            goto L_80212854;
    }
    // 0x80212840: nop

    // 0x80212844: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80212848: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021284C: b           L_8021286C
    // 0x80212850: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021286C;
    // 0x80212850: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80212854:
    // 0x80212854: b           L_8021286C
    // 0x80212858: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021286C;
    // 0x80212858: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_8021285C:
    // 0x8021285C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80212860: nop

    // 0x80212864: bltz        $t5, L_80212854
    if (SIGNED(ctx->r13) < 0) {
        // 0x80212868: nop
    
            goto L_80212854;
    }
    // 0x80212868: nop

L_8021286C:
    // 0x8021286C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80212870: sltiu       $at, $t5, 0xFF
    ctx->r1 = ctx->r13 < 0XFF ? 1 : 0;
    // 0x80212874: bne         $at, $zero, L_80212890
    if (ctx->r1 != 0) {
        // 0x80212878: lui         $t5, 0xB800
        ctx->r13 = S32(0XB800 << 16);
            goto L_80212890;
    }
    // 0x80212878: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8021287C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80212880: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80212884: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80212888: b           L_8021289C
    // 0x8021288C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8021289C;
    // 0x8021288C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80212890:
    // 0x80212890: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80212894: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80212898: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_8021289C:
    // 0x8021289C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x802128A0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802128A4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802128A8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802128AC: lwc1        $f10, 0x40($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802128B0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x802128B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802128B8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802128BC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802128C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802128C4: nop

    // 0x802128C8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802128CC: beql        $t3, $zero, L_8021291C
    if (ctx->r11 == 0) {
        // 0x802128D0: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_8021291C;
    }
    goto skip_31;
    // 0x802128D0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_31:
    // 0x802128D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802128D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802128DC: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802128E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802128E4: nop

    // 0x802128E8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802128EC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802128F0: nop

    // 0x802128F4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802128F8: bne         $t3, $zero, L_80212910
    if (ctx->r11 != 0) {
        // 0x802128FC: nop
    
            goto L_80212910;
    }
    // 0x802128FC: nop

    // 0x80212900: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80212904: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80212908: b           L_80212928
    // 0x8021290C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80212928;
    // 0x8021290C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80212910:
    // 0x80212910: b           L_80212928
    // 0x80212914: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80212928;
    // 0x80212914: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80212918: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_8021291C:
    // 0x8021291C: nop

    // 0x80212920: bltz        $t3, L_80212910
    if (SIGNED(ctx->r11) < 0) {
        // 0x80212924: nop
    
            goto L_80212910;
    }
    // 0x80212924: nop

L_80212928:
    // 0x80212928: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8021292C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80212930: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80212934: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x80212938: lw          $t6, 0x54($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X54);
    // 0x8021293C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80212940: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80212944: lw          $a3, 0x30($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X30);
    // 0x80212948: subu        $t7, $t0, $a3
    ctx->r15 = SUB32(ctx->r8, ctx->r7);
    // 0x8021294C: and         $t8, $t1, $t7
    ctx->r24 = ctx->r9 & ctx->r15;
    // 0x80212950: and         $a1, $t8, $t0
    ctx->r5 = ctx->r24 & ctx->r8;
    // 0x80212954: jal         0x80040620
    // 0x80212958: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x80212958: and         $a0, $a3, $t0
    ctx->r4 = ctx->r7 & ctx->r8;
    after_4:
L_8021295C:
    // 0x8021295C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80212960:
    // 0x80212960: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80212964: jr          $ra
    // 0x80212968: nop

    TRACE_RETURN()
    return;
    // 0x80212968: nop

;}
RECOMP_FUNC void func_80210934_698334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210934: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80210938: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x8021093C: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80210940: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210944: lwc1        $f16, 0x6C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80210948: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021094C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80210950: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210954: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80210958: swc1        $f8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f8.u32l;
    // 0x8021095C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80210960: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210964: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80210968: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x8021096C: swc1        $f8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f8.u32l;
    // 0x80210970: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80210974: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80210978: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8021097C: lwc1        $f18, 0x64($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80210980: jr          $ra
    // 0x80210984: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80210984: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_802112CC_698CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112CC: jr          $ra
    // 0x802112D0: nop

    TRACE_RETURN()
    return;
    // 0x802112D0: nop

;}
RECOMP_FUNC void func_80210A94_698494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A94: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210A98: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210A9C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80210AA0: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80210AA4: swc1        $f14, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f14.u32l;
    // 0x80210AA8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210AAC: jr          $ra
    // 0x80210AB0: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80210AB0: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80213DF0_69B7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213DF8: jal         0x80034EF8
    // 0x80213DFC: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80213DFC: nop

    after_0:
    // 0x80213E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213E0C: jr          $ra
    // 0x80213E10: nop

    TRACE_RETURN()
    return;
    // 0x80213E10: nop

;}
