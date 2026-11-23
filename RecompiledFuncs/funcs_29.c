#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801FB1C0_5B70D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB1C0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FB1C4: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801FB1C8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801FB1CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FB1D0: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x801FB1D4: lbu         $t7, -0x51D7($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X51D7);
    // 0x801FB1D8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801FB1DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FB1E0: bne         $t7, $zero, L_801FB228
    if (ctx->r15 != 0) {
        // 0x801FB1E4: lui         $t8, 0xD
        ctx->r24 = S32(0XD << 16);
            goto L_801FB228;
    }
    // 0x801FB1E4: lui         $t8, 0xD
    ctx->r24 = S32(0XD << 16);
    // 0x801FB1E8: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x801FB1EC: lbu         $t8, -0x768($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X768);
    // 0x801FB1F0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801FB1F4: bne         $t8, $zero, L_801FB228
    if (ctx->r24 != 0) {
        // 0x801FB1F8: nop
    
            goto L_801FB228;
    }
    // 0x801FB1F8: nop

    // 0x801FB1FC: bne         $t6, $at, L_801FB214
    if (ctx->r14 != ctx->r1) {
        // 0x801FB200: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_801FB214;
    }
    // 0x801FB200: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801FB204: beq         $a1, $zero, L_801FB214
    if (ctx->r5 == 0) {
        // 0x801FB208: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801FB214;
    }
    // 0x801FB208: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FB20C: jr          $ra
    // 0x801FB210: sh          $t9, 0xDA($a1)
    MEM_H(0XDA, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801FB210: sh          $t9, 0xDA($a1)
    MEM_H(0XDA, ctx->r5) = ctx->r25;
L_801FB214:
    // 0x801FB214: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x801FB218: bne         $v1, $at, L_801FB228
    if (ctx->r3 != ctx->r1) {
        // 0x801FB21C: lui         $at, 0xD
        ctx->r1 = S32(0XD << 16);
            goto L_801FB228;
    }
    // 0x801FB21C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FB220: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FB224: sb          $a0, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r4;
L_801FB228:
    // 0x801FB228: jr          $ra
    // 0x801FB22C: nop

    TRACE_RETURN()
    return;
    // 0x801FB22C: nop

;}
RECOMP_FUNC void func_801EE374_5AA284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE374: beq         $a0, $zero, L_801EE3A4
    if (ctx->r4 == 0) {
        // 0x801EE378: nop
    
            goto L_801EE3A4;
    }
    // 0x801EE378: nop

    // 0x801EE37C: beq         $a1, $zero, L_801EE3A4
    if (ctx->r5 == 0) {
        // 0x801EE380: nop
    
            goto L_801EE3A4;
    }
    // 0x801EE380: nop

    // 0x801EE384: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x801EE388: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x801EE38C: lbu         $t7, 0x1($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X1);
    // 0x801EE390: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x801EE394: lbu         $t8, 0x2($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2);
    // 0x801EE398: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    // 0x801EE39C: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x801EE3A0: sb          $t9, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r25;
L_801EE3A4:
    // 0x801EE3A4: jr          $ra
    // 0x801EE3A8: nop

    TRACE_RETURN()
    return;
    // 0x801EE3A8: nop

;}
RECOMP_FUNC void func_801EA4DC_5A63EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA4DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801EA4E0: jr          $ra
    // 0x801EA4E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801EA4E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CE4D0_58A3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE4D0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801CE4D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CE4D8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801CE4DC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801CE4E0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801CE4E4: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801CE4E8: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x801CE4EC: lw          $a2, 0x64($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X64);
    // 0x801CE4F0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801CE4F4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801CE4F8: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
    // 0x801CE4FC: lw          $s0, 0x5C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X5C);
    // 0x801CE500: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CE504: lw          $v0, 0x2C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X2C);
    // 0x801CE508: lw          $v1, -0x35D4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35D4);
    // 0x801CE50C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CE510: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x801CE514: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801CE518: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x801CE51C: addiu       $s0, $s0, 0x6C
    ctx->r16 = ADD32(ctx->r16, 0X6C);
    // 0x801CE520: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CE524: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801CE528: lwc1        $f16, 0x10($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801CE52C: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x801CE530: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801CE534: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801CE538: lwc1        $f6, 0x14($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X14);
    // 0x801CE53C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801CE540: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CE544: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x801CE548: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801CE54C: jal         0x800040A8
    // 0x801CE550: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x801CE550: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    after_0:
    // 0x801CE554: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x801CE558: jal         0x8001D394
    // 0x801CE55C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801CE55C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x801CE560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE564: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801CE568: jal         0x8001D460
    // 0x801CE56C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_8001D460_1E060(rdram, ctx);
        goto after_2;
    // 0x801CE56C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x801CE570: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801CE574: lw          $t7, -0x39DC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39DC);
    // 0x801CE578: lbu         $t8, 0xAB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XAB);
    // 0x801CE57C: beql        $t8, $zero, L_801CE594
    if (ctx->r24 == 0) {
        // 0x801CE580: lw          $a0, 0x5C($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X5C);
            goto L_801CE594;
    }
    goto skip_0;
    // 0x801CE580: lw          $a0, 0x5C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X5C);
    skip_0:
    // 0x801CE584: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x801CE588: addiu       $t9, $zero, 0x4F
    ctx->r25 = ADD32(0, 0X4F);
    // 0x801CE58C: sb          $t9, 0x78($t0)
    MEM_B(0X78, ctx->r8) = ctx->r25;
    // 0x801CE590: lw          $a0, 0x5C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X5C);
L_801CE594:
    // 0x801CE594: lbu         $v1, 0x78($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X78);
    // 0x801CE598: beql        $v1, $zero, L_801CE644
    if (ctx->r3 == 0) {
        // 0x801CE59C: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801CE644;
    }
    goto skip_1;
    // 0x801CE59C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x801CE5A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CE5A4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CE5A8: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CE5AC: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x801CE5B0: nop

    // 0x801CE5B4: bc1fl       L_801CE5D4
    if (!c1cs) {
        // 0x801CE5B8: c.eq.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
            goto L_801CE5D4;
    }
    goto skip_2;
    // 0x801CE5B8: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    skip_2:
    // 0x801CE5BC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CE5C0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x801CE5C4: nop

    // 0x801CE5C8: bc1tl       L_801CE644
    if (c1cs) {
        // 0x801CE5CC: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801CE644;
    }
    goto skip_3;
    // 0x801CE5CC: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    skip_3:
    // 0x801CE5D0: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
L_801CE5D4:
    // 0x801CE5D4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CE5D8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801CE5DC: bc1f        L_801CE5F4
    if (!c1cs) {
        // 0x801CE5E0: nop
    
            goto L_801CE5F4;
    }
    // 0x801CE5E0: nop

    // 0x801CE5E4: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x801CE5E8: nop

    // 0x801CE5EC: bc1tl       L_801CE644
    if (c1cs) {
        // 0x801CE5F0: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801CE644;
    }
    goto skip_4;
    // 0x801CE5F0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    skip_4:
L_801CE5F4:
    // 0x801CE5F4: lw          $t1, -0x35D4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X35D4);
    // 0x801CE5F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE5FC: ldc1        $f10, -0x5690($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5690);
    // 0x801CE600: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801CE604: lhu         $t3, 0x44($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X44);
    // 0x801CE608: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CE60C: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801CE610: nop

    // 0x801CE614: bc1tl       L_801CE644
    if (c1cs) {
        // 0x801CE618: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801CE644;
    }
    goto skip_5;
    // 0x801CE618: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    skip_5:
    // 0x801CE61C: lhu         $t2, 0x6A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X6A);
    // 0x801CE620: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CE624: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CE628: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x801CE62C: addiu       $t5, $t4, 0x5
    ctx->r13 = ADD32(ctx->r12, 0X5);
    // 0x801CE630: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801CE634: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x801CE638: bne         $at, $zero, L_801CE670
    if (ctx->r1 != 0) {
        // 0x801CE63C: nop
    
            goto L_801CE670;
    }
    // 0x801CE63C: nop

    // 0x801CE640: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
L_801CE644:
    // 0x801CE644: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x801CE648: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801CE64C: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x801CE650: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801CE654: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801CE658: lw          $t8, 0x5C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X5C);
    // 0x801CE65C: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
    // 0x801CE660: sh          $t7, 0x6A($t8)
    MEM_H(0X6A, ctx->r24) = ctx->r15;
    // 0x801CE664: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
    // 0x801CE668: b           L_801CE810
    // 0x801CE66C: sb          $zero, 0x78($t9)
    MEM_B(0X78, ctx->r25) = 0;
        goto L_801CE810;
    // 0x801CE66C: sb          $zero, 0x78($t9)
    MEM_B(0X78, ctx->r25) = 0;
L_801CE670:
    // 0x801CE670: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801CE674: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x801CE678: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801CE67C: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801CE680: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CE684: beq         $at, $zero, L_801CE808
    if (ctx->r1 == 0) {
        // 0x801CE688: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801CE808;
    }
    // 0x801CE688: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801CE68C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CE690: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE694: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CE698: bc1fl       L_801CE6AC
    if (!c1cs) {
        // 0x801CE69C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CE6AC;
    }
    goto skip_6;
    // 0x801CE69C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_6:
    // 0x801CE6A0: b           L_801CE6AC
    // 0x801CE6A4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CE6AC;
    // 0x801CE6A4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CE6A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CE6AC:
    // 0x801CE6AC: ldc1        $f4, -0x5688($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5688);
    // 0x801CE6B0: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE6B4: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x801CE6B8: nop

    // 0x801CE6BC: bc1tl       L_801CE80C
    if (c1cs) {
        // 0x801CE6C0: addiu       $t4, $v1, -0x1
        ctx->r12 = ADD32(ctx->r3, -0X1);
            goto L_801CE80C;
    }
    goto skip_7;
    // 0x801CE6C0: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    skip_7:
    // 0x801CE6C4: jal         0x80003A94
    // 0x801CE6C8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801CE6C8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x801CE6CC: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x801CE6D0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801CE6D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CE6D8: lbu         $v1, 0x78($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X78);
    // 0x801CE6DC: bgez        $v0, L_801CE6F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801CE6E0: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801CE6F0;
    }
    // 0x801CE6E0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CE6E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CE6E8: nop

    // 0x801CE6EC: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_801CE6F0:
    // 0x801CE6F0: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x801CE6F4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x801CE6F8: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x801CE6FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CE700: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CE704: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CE708: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801CE70C: bgezl       $v1, L_801CE724
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CE710: div.s       $f10, $f4, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
            goto L_801CE724;
    }
    goto skip_8;
    // 0x801CE710: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    skip_8:
    // 0x801CE714: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CE718: nop

    // 0x801CE71C: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801CE720: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_801CE724:
    // 0x801CE724: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CE728: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CE72C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CE730: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801CE734: nop

    // 0x801CE738: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CE73C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801CE740: nop

    // 0x801CE744: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801CE748: beql        $a0, $zero, L_801CE798
    if (ctx->r4 == 0) {
        // 0x801CE74C: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_801CE798;
    }
    goto skip_9;
    // 0x801CE74C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_9:
    // 0x801CE750: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CE754: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CE758: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801CE75C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801CE760: nop

    // 0x801CE764: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CE768: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801CE76C: nop

    // 0x801CE770: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801CE774: bne         $a0, $zero, L_801CE78C
    if (ctx->r4 != 0) {
        // 0x801CE778: nop
    
            goto L_801CE78C;
    }
    // 0x801CE778: nop

    // 0x801CE77C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x801CE780: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CE784: b           L_801CE7A4
    // 0x801CE788: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_801CE7A4;
    // 0x801CE788: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_801CE78C:
    // 0x801CE78C: b           L_801CE7A4
    // 0x801CE790: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_801CE7A4;
    // 0x801CE790: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801CE794: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_801CE798:
    // 0x801CE798: nop

    // 0x801CE79C: bltz        $a0, L_801CE78C
    if (SIGNED(ctx->r4) < 0) {
        // 0x801CE7A0: nop
    
            goto L_801CE78C;
    }
    // 0x801CE7A0: nop

L_801CE7A4:
    // 0x801CE7A4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CE7A8: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x801CE7AC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x801CE7B0: jal         0x80003CC8
    // 0x801CE7B4: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
    func_80003CC8_48C8(rdram, ctx);
        goto after_4;
    // 0x801CE7B4: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
    after_4:
    // 0x801CE7B8: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801CE7BC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CE7C0: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CE7C4: div.s       $f12, $f0, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x801CE7C8: lhu         $a0, 0x46($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X46);
    // 0x801CE7CC: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CE7D0: nop

    // 0x801CE7D4: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801CE7D8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x801CE7DC: jal         0x80003D28
    // 0x801CE7E0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    func_80003D28_4928(rdram, ctx);
        goto after_5;
    // 0x801CE7E0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801CE7E4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x801CE7E8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x801CE7EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CE7F0: jal         0x8001D5B8
    // 0x801CE7F4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_6;
    // 0x801CE7F4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x801CE7F8: jal         0x8001D394
    // 0x801CE7FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_7;
    // 0x801CE7FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801CE800: lw          $a0, 0x5C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X5C);
    // 0x801CE804: lbu         $v1, 0x78($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X78);
L_801CE808:
    // 0x801CE808: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
L_801CE80C:
    // 0x801CE80C: sb          $t4, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r12;
L_801CE810:
    // 0x801CE810: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CE814: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801CE818: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801CE81C: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801CE820: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CE824: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801CE828: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x801CE82C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x801CE830: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CE834: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CE838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CE83C: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CE840: addiu       $a2, $s1, 0x84
    ctx->r6 = ADD32(ctx->r17, 0X84);
    // 0x801CE844: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801CE848: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CE84C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CE850: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x801CE854: jal         0x801CE870
    // 0x801CE858: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    func_801CE870_58A780(rdram, ctx);
        goto after_8;
    // 0x801CE858: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x801CE85C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE860: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801CE864: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801CE868: jr          $ra
    // 0x801CE86C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801CE86C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801E1414_59D324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E141C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1420: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1424: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E1428: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E142C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801E1430: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x801E1434: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x801E1438: lw          $a2, 0x4390($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4390);
    // 0x801E143C: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E1440: jal         0x801E54E0
    // 0x801E1444: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_0;
    // 0x801E1444: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_0:
    // 0x801E1448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E144C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1450: jr          $ra
    // 0x801E1454: nop

    TRACE_RETURN()
    return;
    // 0x801E1454: nop

;}
RECOMP_FUNC void func_801E2800_59E710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2808: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E280C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E2810: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E2814: jal         0x801E3834
    // 0x801E2818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E281C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2820: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E2824: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2828: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E282C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2830: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2834: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
    // 0x801E2838: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E283C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2840: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x801E2844: lwc1        $f12, 0x68($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X68);
    // 0x801E2848: lwc1        $f14, 0x6C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801E284C: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E2850: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E2854: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2858: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E285C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E2860: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E2864: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E2868: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E286C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E2870: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801E2874: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x801E2878: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E287C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E2880: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801E2884: swc1        $f16, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f16.u32l;
    // 0x801E2888: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x801E288C: swc1        $f10, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f10.u32l;
    // 0x801E2890: swc1        $f6, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f6.u32l;
    // 0x801E2894: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x801E2898: ori         $t2, $t1, 0x400
    ctx->r10 = ctx->r9 | 0X400;
    // 0x801E289C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x801E28A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E28A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E28A8: jr          $ra
    // 0x801E28AC: nop

    TRACE_RETURN()
    return;
    // 0x801E28AC: nop

;}
RECOMP_FUNC void func_801E1590_59D4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1590: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1594: jr          $ra
    // 0x801E1598: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1598: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DB494_5973A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB494: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801DB498: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801DB49C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x801DB4A0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x801DB4A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x801DB4A8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x801DB4AC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801DB4B0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x801DB4B4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x801DB4B8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801DB4BC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801DB4C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801DB4C4: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801DB4C8: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x801DB4CC: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x801DB4D0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801DB4D4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801DB4D8: lhu         $v0, 0x20($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X20);
    // 0x801DB4DC: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801DB4E0: beq         $s0, $zero, L_801DB730
    if (ctx->r16 == 0) {
        // 0x801DB4E4: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_801DB730;
    }
    // 0x801DB4E4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801DB4E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DB4EC: ldc1        $f28, -0x50C0($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0X50C0);
    // 0x801DB4F0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x801DB4F4: lwc1        $f24, 0x98($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801DB4F8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
L_801DB4FC:
    // 0x801DB4FC: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x801DB500: lhu         $v0, 0x92($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X92);
    // 0x801DB504: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801DB508: beql        $at, $zero, L_801DB734
    if (ctx->r1 == 0) {
        // 0x801DB50C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_801DB734;
    }
    goto skip_0;
    // 0x801DB50C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x801DB510: lhu         $t8, 0x5C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X5C);
    // 0x801DB514: bnel        $v0, $t8, L_801DB728
    if (ctx->r2 != ctx->r24) {
        // 0x801DB518: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_1;
    // 0x801DB518: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801DB51C: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x801DB520: lwc1        $f0, 0x8($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801DB524: lwc1        $f12, 0xC($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801DB528: lwc1        $f20, 0x8($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DB52C: lwc1        $f14, 0x10($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801DB530: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x801DB534: nop

    // 0x801DB538: bc1fl       L_801DB550
    if (!c1cs) {
        // 0x801DB53C: sub.s       $f2, $f20, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_801DB550;
    }
    goto skip_2;
    // 0x801DB53C: sub.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
    skip_2:
    // 0x801DB540: sub.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x801DB544: b           L_801DB550
    // 0x801DB548: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801DB550;
    // 0x801DB548: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801DB54C: sub.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
L_801DB550:
    // 0x801DB550: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801DB554: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x801DB558: nop

    // 0x801DB55C: bc1fl       L_801DB574
    if (!c1cs) {
        // 0x801DB560: sub.s       $f16, $f18, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
            goto L_801DB574;
    }
    goto skip_3;
    // 0x801DB560: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
    skip_3:
    // 0x801DB564: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x801DB568: b           L_801DB574
    // 0x801DB56C: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
        goto L_801DB574;
    // 0x801DB56C: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x801DB570: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
L_801DB574:
    // 0x801DB574: lwc1        $f12, 0x10($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801DB578: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801DB57C: nop

    // 0x801DB580: bc1fl       L_801DB598
    if (!c1cs) {
        // 0x801DB584: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_801DB598;
    }
    goto skip_4;
    // 0x801DB584: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_4:
    // 0x801DB588: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801DB58C: b           L_801DB598
    // 0x801DB590: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801DB598;
    // 0x801DB590: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801DB594: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_801DB598:
    // 0x801DB598: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x801DB59C: nop

    // 0x801DB5A0: bc1tl       L_801DB728
    if (c1cs) {
        // 0x801DB5A4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_5;
    // 0x801DB5A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x801DB5A8: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x801DB5AC: nop

    // 0x801DB5B0: bc1tl       L_801DB728
    if (c1cs) {
        // 0x801DB5B4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_6;
    // 0x801DB5B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x801DB5B8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x801DB5BC: addiu       $at, $zero, 0x196
    ctx->r1 = ADD32(0, 0X196);
    // 0x801DB5C0: bc1tl       L_801DB728
    if (c1cs) {
        // 0x801DB5C4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_7;
    // 0x801DB5C4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_7:
    // 0x801DB5C8: bne         $v0, $at, L_801DB5F4
    if (ctx->r2 != ctx->r1) {
        // 0x801DB5CC: nop
    
            goto L_801DB5F4;
    }
    // 0x801DB5CC: nop

    // 0x801DB5D0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DB5D4: nop

    // 0x801DB5D8: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801DB5DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DB5E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DB5E4: c.le.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d <= ctx->f28.d;
    // 0x801DB5E8: nop

    // 0x801DB5EC: bc1t        L_801DB724
    if (c1cs) {
        // 0x801DB5F0: nop
    
            goto L_801DB724;
    }
    // 0x801DB5F0: nop

L_801DB5F4:
    // 0x801DB5F4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DB5F8: nop

    // 0x801DB5FC: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801DB600: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DB604: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801DB608: add.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB60C: mul.s       $f4, $f24, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x801DB610: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x801DB614: nop

    // 0x801DB618: bc1t        L_801DB724
    if (c1cs) {
        // 0x801DB61C: nop
    
            goto L_801DB724;
    }
    // 0x801DB61C: nop

    // 0x801DB620: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DB624: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DB628: lhu         $s1, 0x96($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X96);
    // 0x801DB62C: c.eq.s      $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f26.fl == ctx->f6.fl;
    // 0x801DB630: nop

    // 0x801DB634: bc1tl       L_801DB650
    if (c1cs) {
        // 0x801DB638: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_801DB650;
    }
    goto skip_8;
    // 0x801DB638: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_8:
    // 0x801DB63C: c.lt.s      $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f22.fl < ctx->f26.fl;
    // 0x801DB640: nop

    // 0x801DB644: bc1fl       L_801DB728
    if (!c1cs) {
        // 0x801DB648: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_9;
    // 0x801DB648: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_9:
    // 0x801DB64C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_801DB650:
    // 0x801DB650: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801DB654: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DB658: jal         0x801CF51C
    // 0x801DB65C: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801DB65C: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    after_0:
    // 0x801DB660: lw          $t9, 0x5C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X5C);
    // 0x801DB664: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x801DB668: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x801DB66C: lhu         $v1, 0x34($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X34);
    // 0x801DB670: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x801DB674: bne         $v1, $zero, L_801DB6B8
    if (ctx->r3 != 0) {
        // 0x801DB678: andi        $t3, $v1, 0x3FF
        ctx->r11 = ctx->r3 & 0X3FF;
            goto L_801DB6B8;
    }
    // 0x801DB678: andi        $t3, $v1, 0x3FF
    ctx->r11 = ctx->r3 & 0X3FF;
    // 0x801DB67C: lhu         $t1, 0x94($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X94);
    // 0x801DB680: andi        $t4, $t1, 0x3FF
    ctx->r12 = ctx->r9 & 0X3FF;
    // 0x801DB684: subu        $a0, $t4, $v0
    ctx->r4 = SUB32(ctx->r12, ctx->r2);
    // 0x801DB688: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x801DB68C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x801DB690: bgez        $t6, L_801DB6A8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DB694: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_801DB6A8;
    }
    // 0x801DB694: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801DB698: negu        $v1, $t6
    ctx->r3 = SUB32(0, ctx->r14);
    // 0x801DB69C: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x801DB6A0: b           L_801DB6E8
    // 0x801DB6A4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
        goto L_801DB6E8;
    // 0x801DB6A4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
L_801DB6A8:
    // 0x801DB6A8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x801DB6AC: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801DB6B0: b           L_801DB6E8
    // 0x801DB6B4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_801DB6E8;
    // 0x801DB6B4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_801DB6B8:
    // 0x801DB6B8: subu        $a0, $t3, $v0
    ctx->r4 = SUB32(ctx->r11, ctx->r2);
    // 0x801DB6BC: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x801DB6C0: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801DB6C4: bgez        $t5, L_801DB6DC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801DB6C8: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_801DB6DC;
    }
    // 0x801DB6C8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x801DB6CC: negu        $v1, $t5
    ctx->r3 = SUB32(0, ctx->r13);
    // 0x801DB6D0: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801DB6D4: b           L_801DB6E8
    // 0x801DB6D8: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
        goto L_801DB6E8;
    // 0x801DB6D8: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_801DB6DC:
    // 0x801DB6DC: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x801DB6E0: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801DB6E4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801DB6E8:
    // 0x801DB6E8: slti        $at, $v1, 0x201
    ctx->r1 = SIGNED(ctx->r3) < 0X201 ? 1 : 0;
    // 0x801DB6EC: bne         $at, $zero, L_801DB700
    if (ctx->r1 != 0) {
        // 0x801DB6F0: addiu       $t9, $zero, 0x400
        ctx->r25 = ADD32(0, 0X400);
            goto L_801DB700;
    }
    // 0x801DB6F0: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x801DB6F4: subu        $v1, $t9, $v1
    ctx->r3 = SUB32(ctx->r25, ctx->r3);
    // 0x801DB6F8: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x801DB6FC: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
L_801DB700:
    // 0x801DB700: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801DB704: bnel        $at, $zero, L_801DB728
    if (ctx->r1 != 0) {
        // 0x801DB708: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_10;
    // 0x801DB708: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x801DB70C: jal         0x801DB890
    // 0x801DB710: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    func_801DB890_5977A0(rdram, ctx);
        goto after_1;
    // 0x801DB710: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    after_1:
    // 0x801DB714: bnel        $v0, $zero, L_801DB728
    if (ctx->r2 != 0) {
        // 0x801DB718: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801DB728;
    }
    goto skip_11;
    // 0x801DB718: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_11:
    // 0x801DB71C: mov.s       $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    ctx->f26.fl = ctx->f22.fl;
    // 0x801DB720: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
L_801DB724:
    // 0x801DB724: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801DB728:
    // 0x801DB728: bnel        $s0, $zero, L_801DB4FC
    if (ctx->r16 != 0) {
        // 0x801DB72C: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_801DB4FC;
    }
    goto skip_12;
    // 0x801DB72C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    skip_12:
L_801DB730:
    // 0x801DB730: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801DB734:
    // 0x801DB734: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x801DB738: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x801DB73C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801DB740: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801DB744: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801DB748: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x801DB74C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x801DB750: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801DB754: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x801DB758: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801DB75C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x801DB760: jr          $ra
    // 0x801DB764: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801DB764: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801D978C_59569C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D978C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801D9790: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x801D9794: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D9798: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x801D979C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D97A0: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x801D97A4: jal         0x8001E2BC
    // 0x801D97A8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8001E2BC_1EEBC(rdram, ctx);
        goto after_0;
    // 0x801D97A8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x801D97AC: lhu         $v0, 0xC6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC6);
    // 0x801D97B0: lhu         $a2, 0xC2($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XC2);
    // 0x801D97B4: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x801D97B8: sra         $t6, $v0, 6
    ctx->r14 = S32(SIGNED(ctx->r2) >> 6);
    // 0x801D97BC: sra         $t9, $a2, 6
    ctx->r25 = S32(SIGNED(ctx->r6) >> 6);
    // 0x801D97C0: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    // 0x801D97C4: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
    // 0x801D97C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D97CC: jal         0x8001E4A4
    // 0x801D97D0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_8001E4A4_1F0A4(rdram, ctx);
        goto after_1;
    // 0x801D97D0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x801D97D4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x801D97D8: jal         0x8001F2D8
    // 0x801D97DC: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_8001F2D8_1FED8(rdram, ctx);
        goto after_2;
    // 0x801D97DC: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x801D97E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D97E4: lw          $v0, -0x39CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39CC);
    // 0x801D97E8: addiu       $t3, $sp, 0x80
    ctx->r11 = ADD32(ctx->r29, 0X80);
    // 0x801D97EC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x801D97F0: addiu       $t1, $v0, 0x16
    ctx->r9 = ADD32(ctx->r2, 0X16);
    // 0x801D97F4: addiu       $t2, $v0, 0x18
    ctx->r10 = ADD32(ctx->r2, 0X18);
    // 0x801D97F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D97FC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D9800: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D9804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D980C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D9810: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D9814: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D9818: jal         0x8001EEF4
    // 0x801D981C: addiu       $a3, $v0, 0x14
    ctx->r7 = ADD32(ctx->r2, 0X14);
    func_8001EEF4_1FAF4(rdram, ctx);
        goto after_3;
    // 0x801D981C: addiu       $a3, $v0, 0x14
    ctx->r7 = ADD32(ctx->r2, 0X14);
    after_3:
    // 0x801D9820: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D9824: addiu       $a1, $a1, -0x39CC
    ctx->r5 = ADD32(ctx->r5, -0X39CC);
    // 0x801D9828: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801D982C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801D9830: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D9834: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x801D9838: lw          $t5, -0x39DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39DC);
    // 0x801D983C: lh          $v1, 0x36($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X36);
    // 0x801D9840: lbu         $v0, 0xE0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0XE0);
    // 0x801D9844: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D9848: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x801D984C: bne         $t6, $at, L_801D98D0
    if (ctx->r14 != ctx->r1) {
        // 0x801D9850: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_801D98D0;
    }
    // 0x801D9850: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801D9854: blezl       $v1, L_801D9870
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D9858: lw          $a0, 0x0($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X0);
            goto L_801D9870;
    }
    goto skip_0;
    // 0x801D9858: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x801D985C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D9860: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801D9864: b           L_801D98D0
    // 0x801D9868: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
        goto L_801D98D0;
    // 0x801D9868: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x801D986C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_801D9870:
    // 0x801D9870: sb          $v0, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r2;
    // 0x801D9874: jal         0x8001B5AC
    // 0x801D9878: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_4;
    // 0x801D9878: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_4:
    // 0x801D987C: lbu         $v0, 0x3F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3F);
    // 0x801D9880: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D9884: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801D9888: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x801D988C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801D9890: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x801D9894: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D9898: lh          $t9, -0x3374($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X3374);
    // 0x801D989C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x801D98A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D98A4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801D98A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D98AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D98B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D98B4: addiu       $a1, $a1, -0x39CC
    ctx->r5 = ADD32(ctx->r5, -0X39CC);
    // 0x801D98B8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801D98BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D98C0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801D98C4: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801D98C8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x801D98CC: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
L_801D98D0:
    // 0x801D98D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D98D4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x801D98D8: jr          $ra
    // 0x801D98DC: nop

    TRACE_RETURN()
    return;
    // 0x801D98DC: nop

;}
RECOMP_FUNC void func_801E43B0_5A02C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E43B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E43B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E43B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E43BC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E43C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E43C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E43C8: jal         0x801DD720
    // 0x801E43CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E43CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E43D0: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    // 0x801E43D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E43D8: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x801E43DC: beq         $t7, $zero, L_801E443C
    if (ctx->r15 == 0) {
        // 0x801E43E0: addiu       $t9, $t9, -0x4A54
        ctx->r25 = ADD32(ctx->r25, -0X4A54);
            goto L_801E443C;
    }
    // 0x801E43E0: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E43E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E43E8: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801E43EC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801E43F0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801E43F4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801E43F8: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x801E43FC: bc1f        L_801E4420
    if (!c1cs) {
        // 0x801E4400: nop
    
            goto L_801E4420;
    }
    // 0x801E4400: nop

    // 0x801E4404: jal         0x801E2264
    // 0x801E4408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_1;
    // 0x801E4408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E440C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4410: jal         0x801DACDC
    // 0x801E4414: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E4414: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_2:
    // 0x801E4418: b           L_801E451C
    // 0x801E441C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E451C;
    // 0x801E441C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E4420:
    // 0x801E4420: jal         0x801E2264
    // 0x801E4424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_3;
    // 0x801E4424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E4428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E442C: jal         0x801DACDC
    // 0x801E4430: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E4430: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_4:
    // 0x801E4434: b           L_801E451C
    // 0x801E4438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E451C;
    // 0x801E4438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E443C:
    // 0x801E443C: jalr        $t9
    // 0x801E4440: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801E4440: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x801E4444: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E4448: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E444C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801E4450: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E4454: lwc1        $f8, 0x28($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801E4458: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801E445C: nop

    // 0x801E4460: bc1f        L_801E44C0
    if (!c1cs) {
        // 0x801E4464: nop
    
            goto L_801E44C0;
    }
    // 0x801E4464: nop

    // 0x801E4468: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E446C: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801E4470: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801E4474: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801E4478: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801E447C: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x801E4480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4484: bc1f        L_801E44B0
    if (!c1cs) {
        // 0x801E4488: nop
    
            goto L_801E44B0;
    }
    // 0x801E4488: nop

    // 0x801E448C: jal         0x801E3324
    // 0x801E4490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_6;
    // 0x801E4490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E4494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4498: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E449C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E44A0: jal         0x801DAC7C
    // 0x801E44A4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_7;
    // 0x801E44A4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_7:
    // 0x801E44A8: b           L_801E451C
    // 0x801E44AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E451C;
    // 0x801E44AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E44B0:
    // 0x801E44B0: jal         0x801DACDC
    // 0x801E44B4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801E44B4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_8:
    // 0x801E44B8: b           L_801E451C
    // 0x801E44BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E451C;
    // 0x801E44BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E44C0:
    // 0x801E44C0: jal         0x801E1C90
    // 0x801E44C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_9;
    // 0x801E44C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E44C8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E44CC: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x801E44D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E44D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E44D8: bnel        $t2, $at, L_801E451C
    if (ctx->r10 != ctx->r1) {
        // 0x801E44DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E451C;
    }
    goto skip_0;
    // 0x801E44DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E44E0: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E44E4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801E44E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E44EC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801E44F0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801E44F4: lw          $t5, -0x3954($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3954);
    // 0x801E44F8: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801E44FC: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x801E4500: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801E4504: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801E4508: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x801E450C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801E4510: jal         0x801E8078
    // 0x801E4514: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_10;
    // 0x801E4514: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_10:
    // 0x801E4518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E451C:
    // 0x801E451C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E4524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E4528: jr          $ra
    // 0x801E452C: nop

    TRACE_RETURN()
    return;
    // 0x801E452C: nop

;}
RECOMP_FUNC void func_801F387C_5AF78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F387C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3884: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F3888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F388C: jal         0x801E8C44
    // 0x801F3890: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F3890: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x801F3894: bne         $v0, $zero, L_801F38D8
    if (ctx->r2 != 0) {
        // 0x801F3898: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801F38D8;
    }
    // 0x801F3898: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F389C: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801F38A0: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x801F38A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F38A8: bne         $t6, $zero, L_801F38D8
    if (ctx->r14 != 0) {
        // 0x801F38AC: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_801F38D8;
    }
    // 0x801F38AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F38B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F38B4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801F38B8: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F38BC: jal         0x80034E08
    // 0x801F38C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F38C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F38C4: beq         $v0, $zero, L_801F38D8
    if (ctx->r2 == 0) {
        // 0x801F38C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F38D8;
    }
    // 0x801F38C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F38CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F38D0: jal         0x801EE4AC
    // 0x801F38D4: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F38D4: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    after_2:
L_801F38D8:
    // 0x801F38D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F38DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F38E0: jr          $ra
    // 0x801F38E4: nop

    TRACE_RETURN()
    return;
    // 0x801F38E4: nop

;}
RECOMP_FUNC void func_801F58C0_5B17D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F58C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F58C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F58C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F58CC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801F58D0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801F58D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801F58D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F58DC: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x801F58E0: jal         0x801F5B04
    // 0x801F58E4: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801F58E4: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    after_0:
    // 0x801F58E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F58EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F58F0: jr          $ra
    // 0x801F58F4: nop

    TRACE_RETURN()
    return;
    // 0x801F58F4: nop

;}
RECOMP_FUNC void func_801E3178_59F088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3178: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E317C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E3180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3188: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E318C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E3190: jal         0x801E32D4
    // 0x801E3194: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801E32D4_59F1E4(rdram, ctx);
        goto after_0;
    // 0x801E3194: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x801E3198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E319C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E31A0: jr          $ra
    // 0x801E31A4: nop

    TRACE_RETURN()
    return;
    // 0x801E31A4: nop

;}
RECOMP_FUNC void func_801DFF70_59BE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFF70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFF74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DFF78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DFF7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DFF80: jal         0x801E0158
    // 0x801DFF84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E0158_59C068(rdram, ctx);
        goto after_0;
    // 0x801DFF84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DFF88: beq         $v0, $zero, L_801DFFA0
    if (ctx->r2 == 0) {
        // 0x801DFF8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DFFA0;
    }
    // 0x801DFF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF90: jal         0x801DAD08
    // 0x801DFF94: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_801DAD08_596C18(rdram, ctx);
        goto after_1;
    // 0x801DFF94: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_1:
    // 0x801DFF98: b           L_801E0148
    // 0x801DFF9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0148;
    // 0x801DFF9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFFA0:
    // 0x801DFFA0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801DFFA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DFFA8: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801DFFAC: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801DFFB0: beql        $v1, $zero, L_801DFFCC
    if (ctx->r3 == 0) {
        // 0x801DFFB4: lhu         $a0, 0x8($v0)
        ctx->r4 = MEM_HU(ctx->r2, 0X8);
            goto L_801DFFCC;
    }
    goto skip_0;
    // 0x801DFFB4: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    skip_0:
    // 0x801DFFB8: beql        $v1, $at, L_801E00B4
    if (ctx->r3 == ctx->r1) {
        // 0x801DFFBC: lhu         $t5, 0x80($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X80);
            goto L_801E00B4;
    }
    goto skip_1;
    // 0x801DFFBC: lhu         $t5, 0x80($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X80);
    skip_1:
    // 0x801DFFC0: b           L_801E0148
    // 0x801DFFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0148;
    // 0x801DFFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFFC8: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
L_801DFFCC:
    // 0x801DFFCC: jal         0x801E3C34
    // 0x801DFFD0: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_2;
    // 0x801DFFD0: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    after_2:
    // 0x801DFFD4: beql        $v0, $zero, L_801E0038
    if (ctx->r2 == 0) {
        // 0x801DFFD8: lhu         $t1, 0x98($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X98);
            goto L_801E0038;
    }
    goto skip_2;
    // 0x801DFFD8: lhu         $t1, 0x98($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X98);
    skip_2:
    // 0x801DFFDC: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801DFFE0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DFFE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DFFE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DFFEC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DFFF0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DFFF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DFFF8: lhu         $t8, 0x7DB2($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB2);
    // 0x801DFFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0000: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x801E0004: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801E0008: beql        $t9, $zero, L_801E0038
    if (ctx->r25 == 0) {
        // 0x801E000C: lhu         $t1, 0x98($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X98);
            goto L_801E0038;
    }
    goto skip_3;
    // 0x801E000C: lhu         $t1, 0x98($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X98);
    skip_3:
    // 0x801E0010: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0018: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E001C: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x801E0020: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    // 0x801E0024: jal         0x801DACDC
    // 0x801E0028: sh          $zero, 0x30($t0)
    MEM_H(0X30, ctx->r8) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E0028: sh          $zero, 0x30($t0)
    MEM_H(0X30, ctx->r8) = 0;
    after_3:
    // 0x801E002C: b           L_801E0148
    // 0x801E0030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0148;
    // 0x801E0030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0034: lhu         $t1, 0x98($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X98);
L_801E0038:
    // 0x801E0038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E003C: bnel        $t1, $zero, L_801E0074
    if (ctx->r9 != 0) {
        // 0x801E0040: lw          $t2, 0x5C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X5C);
            goto L_801E0074;
    }
    goto skip_4;
    // 0x801E0040: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    skip_4:
    // 0x801E0044: jal         0x801E62D0
    // 0x801E0048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E62D0_5A21E0(rdram, ctx);
        goto after_4;
    // 0x801E0048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E004C: jal         0x801E3324
    // 0x801E0050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_5;
    // 0x801E0050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E0054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0058: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E005C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E0060: jal         0x801DAC7C
    // 0x801E0064: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_6;
    // 0x801E0064: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_6:
    // 0x801E0068: b           L_801E0148
    // 0x801E006C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0148;
    // 0x801E006C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0070: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
L_801E0074:
    // 0x801E0074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E0078: jal         0x801E5D2C
    // 0x801E007C: lw          $a1, 0x90($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X90);
    func_801E5D2C_5A1C3C(rdram, ctx);
        goto after_7;
    // 0x801E007C: lw          $a1, 0x90($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X90);
    after_7:
    // 0x801E0080: bne         $v0, $zero, L_801E0144
    if (ctx->r2 != 0) {
        // 0x801E0084: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801E0144;
    }
    // 0x801E0084: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0088: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E008C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0090: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0094: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
    // 0x801E0098: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x801E009C: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x801E00A0: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    // 0x801E00A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801E00A8: b           L_801E0144
    // 0x801E00AC: sh          $t4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r12;
        goto L_801E0144;
    // 0x801E00AC: sh          $t4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r12;
    // 0x801E00B0: lhu         $t5, 0x80($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X80);
L_801E00B4:
    // 0x801E00B4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801E00B8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801E00BC: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x801E00C0: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x801E00C4: bne         $at, $zero, L_801E0144
    if (ctx->r1 != 0) {
        // 0x801E00C8: sh          $t6, 0x80($s0)
        MEM_H(0X80, ctx->r16) = ctx->r14;
            goto L_801E0144;
    }
    // 0x801E00C8: sh          $t6, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r14;
    // 0x801E00CC: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E00D0: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801E00D4: jal         0x801E3C34
    // 0x801E00D8: lhu         $a0, 0x8($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X8);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_8;
    // 0x801E00D8: lhu         $a0, 0x8($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X8);
    after_8:
    // 0x801E00DC: beq         $v0, $zero, L_801E013C
    if (ctx->r2 == 0) {
        // 0x801E00E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E013C;
    }
    // 0x801E00E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E00E4: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
    // 0x801E00E8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801E00EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E00F0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801E00F4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801E00F8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801E00FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801E0100: lhu         $t1, 0x7DB2($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7DB2);
    // 0x801E0104: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x801E0108: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x801E010C: beq         $t2, $zero, L_801E013C
    if (ctx->r10 == 0) {
        // 0x801E0110: nop
    
            goto L_801E013C;
    }
    // 0x801E0110: nop

    // 0x801E0114: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E0118: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E011C: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0120: swc1        $f16, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f16.u32l;
    // 0x801E0124: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    // 0x801E0128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E012C: jal         0x801DACDC
    // 0x801E0130: sh          $zero, 0x30($t3)
    MEM_H(0X30, ctx->r11) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801E0130: sh          $zero, 0x30($t3)
    MEM_H(0X30, ctx->r11) = 0;
    after_9:
    // 0x801E0134: b           L_801E0148
    // 0x801E0138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0148;
    // 0x801E0138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E013C:
    // 0x801E013C: jal         0x801DAD08
    // 0x801E0140: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_801DAD08_596C18(rdram, ctx);
        goto after_10;
    // 0x801E0140: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_10:
L_801E0144:
    // 0x801E0144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0148:
    // 0x801E0148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E014C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E0150: jr          $ra
    // 0x801E0154: nop

    TRACE_RETURN()
    return;
    // 0x801E0154: nop

;}
RECOMP_FUNC void func_801CEEA8_58ADB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEEA8: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x801CEEAC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CEEB0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801CEEB4: sw          $a0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r4;
    // 0x801CEEB8: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x801CEEBC: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801CEEC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CEEC4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CEEC8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x801CEECC: sh          $t7, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r15;
    // 0x801CEED0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CEED4: lwc1        $f0, 0x20($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X20);
    // 0x801CEED8: lw          $t3, 0x110($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X110);
    // 0x801CEEDC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801CEEE0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CEEE4: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801CEEE8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CEEEC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x801CEEF0: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CEEF4: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801CEEF8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CEEFC: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x801CEF00: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CEF04: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CEF08: lwc1        $f2, 0xC($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CEF0C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801CEF10: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CEF14: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801CEF18: add.s       $f20, $f8, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x801CEF1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CEF20: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x801CEF24: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801CEF28: lbu         $t8, 0x59($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X59);
    // 0x801CEF2C: beql        $t8, $zero, L_801CEF7C
    if (ctx->r24 == 0) {
        // 0x801CEF30: lbu         $t4, 0x61($t3)
        ctx->r12 = MEM_BU(ctx->r11, 0X61);
            goto L_801CEF7C;
    }
    goto skip_0;
    // 0x801CEF30: lbu         $t4, 0x61($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X61);
    skip_0:
    // 0x801CEF34: lbu         $t9, 0x61($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X61);
    // 0x801CEF38: bnel        $t9, $zero, L_801CEF7C
    if (ctx->r25 != 0) {
        // 0x801CEF3C: lbu         $t4, 0x61($t3)
        ctx->r12 = MEM_BU(ctx->r11, 0X61);
            goto L_801CEF7C;
    }
    goto skip_1;
    // 0x801CEF3C: lbu         $t4, 0x61($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X61);
    skip_1:
    // 0x801CEF40: lbu         $t2, 0x58($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X58);
    // 0x801CEF44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CEF48: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x801CEF4C: bgez        $t2, L_801CEF60
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801CEF50: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801CEF60;
    }
    // 0x801CEF50: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CEF54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CEF58: nop

    // 0x801CEF5C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801CEF60:
    // 0x801CEF60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CEF64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CEF68: nop

    // 0x801CEF6C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801CEF70: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CEF74: add.s       $f20, $f6, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801CEF78: lbu         $t4, 0x61($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X61);
L_801CEF7C:
    // 0x801CEF7C: bnel        $t4, $zero, L_801CF330
    if (ctx->r12 != 0) {
        // 0x801CEF80: lwc1        $f10, 0x104($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
            goto L_801CF330;
    }
    goto skip_2;
    // 0x801CEF80: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    skip_2:
    // 0x801CEF84: lhu         $t5, -0x359A($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X359A);
    // 0x801CEF88: bnel        $t5, $zero, L_801CF330
    if (ctx->r13 != 0) {
        // 0x801CEF8C: lwc1        $f10, 0x104($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
            goto L_801CF330;
    }
    goto skip_3;
    // 0x801CEF8C: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    skip_3:
    // 0x801CEF90: lbu         $v0, 0xCC($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0XCC);
    // 0x801CEF94: lw          $t7, 0x110($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X110);
    // 0x801CEF98: slti        $at, $v0, 0x35
    ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x801CEF9C: bne         $at, $zero, L_801CEFAC
    if (ctx->r1 != 0) {
        // 0x801CEFA0: slti        $at, $v0, 0x39
        ctx->r1 = SIGNED(ctx->r2) < 0X39 ? 1 : 0;
            goto L_801CEFAC;
    }
    // 0x801CEFA0: slti        $at, $v0, 0x39
    ctx->r1 = SIGNED(ctx->r2) < 0X39 ? 1 : 0;
    // 0x801CEFA4: bnel        $at, $zero, L_801CF330
    if (ctx->r1 != 0) {
        // 0x801CEFA8: lwc1        $f10, 0x104($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
            goto L_801CF330;
    }
    goto skip_4;
    // 0x801CEFA8: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    skip_4:
L_801CEFAC:
    // 0x801CEFAC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CEFB0: lwc1        $f16, 0xB8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XB8);
    // 0x801CEFB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEFB8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CEFBC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x801CEFC0: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x801CEFC4: bc1fl       L_801CEFD8
    if (!c1cs) {
        // 0x801CEFC8: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801CEFD8;
    }
    goto skip_5;
    // 0x801CEFC8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_5:
    // 0x801CEFCC: b           L_801CEFD8
    // 0x801CEFD0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801CEFD8;
    // 0x801CEFD0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801CEFD4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801CEFD8:
    // 0x801CEFD8: ldc1        $f8, -0x5658($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5658);
    // 0x801CEFDC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801CEFE0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801CEFE4: nop

    // 0x801CEFE8: bc1fl       L_801CF004
    if (!c1cs) {
        // 0x801CEFEC: lwc1        $f12, 0xB4($t6)
        ctx->f12.u32l = MEM_W(ctx->r14, 0XB4);
            goto L_801CF004;
    }
    goto skip_6;
    // 0x801CEFEC: lwc1        $f12, 0xB4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XB4);
    skip_6:
    // 0x801CEFF0: lhu         $t8, -0x3596($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3596);
    // 0x801CEFF4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CEFF8: beql        $t8, $zero, L_801CF0BC
    if (ctx->r24 == 0) {
        // 0x801CEFFC: add.s       $f14, $f2, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_801CF0BC;
    }
    goto skip_7;
    // 0x801CEFFC: add.s       $f14, $f2, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f6.fl;
    skip_7:
    // 0x801CF000: lwc1        $f12, 0xB4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XB4);
L_801CF004:
    // 0x801CF004: lwc1        $f10, 0x5C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x801CF008: lwc1        $f4, 0x60($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X60);
    // 0x801CF00C: lwc1        $f2, 0xBC($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0XBC);
    // 0x801CF010: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x801CF014: addiu       $a0, $zero, 0x3D0
    ctx->r4 = ADD32(0, 0X3D0);
    // 0x801CF018: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801CF01C: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801CF020: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x801CF024: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
    // 0x801CF028: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CF02C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801CF030: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801CF034: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801CF038: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CF03C: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801CF040: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CF044: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CF048: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CF04C: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x801CF050: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801CF054: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x801CF058: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CF05C: div.s       $f14, $f4, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801CF060: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801CF064: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801CF068: swc1        $f14, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f14.u32l;
    // 0x801CF06C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CF070: jal         0x80004058
    // 0x801CF074: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_80004058_4C58(rdram, ctx);
        goto after_0;
    // 0x801CF074: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CF078: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801CF07C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x801CF080: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801CF084: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CF088: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801CF08C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CF090: lw          $t0, 0x10C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10C);
    // 0x801CF094: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CF098: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801CF09C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x801CF0A0: nop

    // 0x801CF0A4: bc1f        L_801CF0B0
    if (!c1cs) {
        // 0x801CF0A8: nop
    
            goto L_801CF0B0;
    }
    // 0x801CF0A8: nop

    // 0x801CF0AC: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_801CF0B0:
    // 0x801CF0B0: b           L_801CF0BC
    // 0x801CF0B4: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
        goto L_801CF0BC;
    // 0x801CF0B4: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x801CF0B8: add.s       $f14, $f2, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f6.fl;
L_801CF0BC:
    // 0x801CF0BC: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x801CF0C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF0C4: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801CF0C8: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x801CF0CC: bc1f        L_801CF0D8
    if (!c1cs) {
        // 0x801CF0D0: nop
    
            goto L_801CF0D8;
    }
    // 0x801CF0D0: nop

    // 0x801CF0D4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
L_801CF0D8:
    // 0x801CF0D8: ldc1        $f8, -0x5650($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5650);
    // 0x801CF0DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CF0E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF0E4: add.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d + ctx->f8.d;
    // 0x801CF0E8: lw          $a1, 0x104($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X104);
    // 0x801CF0EC: lw          $a3, 0xFC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XFC);
    // 0x801CF0F0: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CF0F4: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801CF0F8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x801CF0FC: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
    // 0x801CF100: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x801CF104: sub.s       $f0, $f20, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f14.fl;
    // 0x801CF108: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801CF10C: swc1        $f14, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f14.u32l;
    // 0x801CF110: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CF114: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801CF118: jal         0x8002C9D4
    // 0x801CF11C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_1;
    // 0x801CF11C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801CF120: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801CF124: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x801CF128: lw          $a1, 0x104($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X104);
    // 0x801CF12C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801CF130: jal         0x80032850
    // 0x801CF134: lw          $a3, 0xFC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XFC);
    func_80032850_33450(rdram, ctx);
        goto after_2;
    // 0x801CF134: lw          $a3, 0xFC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XFC);
    after_2:
    // 0x801CF138: lh          $t9, 0xE4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE4);
    // 0x801CF13C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x801CF140: lw          $t0, 0x10C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10C);
    // 0x801CF144: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x801CF148: bne         $t9, $v0, L_801CF1F8
    if (ctx->r25 != ctx->r2) {
        // 0x801CF14C: lwc1        $f14, 0xF8($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_801CF1F8;
    }
    // 0x801CF14C: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801CF150: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x801CF154: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CF158: lw          $t4, 0x5C($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X5C);
    // 0x801CF15C: lbu         $t5, 0x58($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X58);
    // 0x801CF160: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801CF164: bgez        $t5, L_801CF178
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801CF168: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801CF178;
    }
    // 0x801CF168: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CF16C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF170: nop

    // 0x801CF174: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_801CF178:
    // 0x801CF178: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x801CF17C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CF180: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CF184: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x801CF188: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x801CF18C: sub.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d - ctx->f10.d;
    // 0x801CF190: lh          $t3, 0x9C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X9C);
    // 0x801CF194: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CF198: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x801CF19C: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801CF1A0: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CF1A4: add.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x801CF1A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CF1AC: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801CF1B0: sub.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d - ctx->f10.d;
    // 0x801CF1B4: bne         $t3, $v0, L_801CF1D0
    if (ctx->r11 != ctx->r2) {
        // 0x801CF1B8: cvt.s.d     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
            goto L_801CF1D0;
    }
    // 0x801CF1B8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x801CF1BC: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x801CF1C0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801CF1C4: nop

    // 0x801CF1C8: bc1fl       L_801CF1FC
    if (!c1cs) {
        // 0x801CF1CC: lh          $t7, 0x9C($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X9C);
            goto L_801CF1FC;
    }
    goto skip_8;
    // 0x801CF1CC: lh          $t7, 0x9C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9C);
    skip_8:
L_801CF1D0:
    // 0x801CF1D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CF1D4: sub.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x801CF1D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF1DC: sh          $v0, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r2;
    // 0x801CF1E0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x801CF1E4: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x801CF1E8: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x801CF1EC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x801CF1F0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x801CF1F4: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
L_801CF1F8:
    // 0x801CF1F8: lh          $t7, 0x9C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X9C);
L_801CF1FC:
    // 0x801CF1FC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801CF200: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801CF204: bne         $t7, $v0, L_801CF324
    if (ctx->r15 != ctx->r2) {
        // 0x801CF208: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801CF324;
    }
    // 0x801CF208: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CF20C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801CF210: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CF214: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x801CF218: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CF21C: addiu       $v1, $v1, -0x3568
    ctx->r3 = ADD32(ctx->r3, -0X3568);
    // 0x801CF220: addiu       $v0, $v0, -0x3574
    ctx->r2 = ADD32(ctx->r2, -0X3574);
    // 0x801CF224: bc1f        L_801CF324
    if (!c1cs) {
        // 0x801CF228: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_801CF324;
    }
    // 0x801CF228: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CF22C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801CF230: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CF234: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CF238: addiu       $a1, $a1, -0x3564
    ctx->r5 = ADD32(ctx->r5, -0X3564);
    // 0x801CF23C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801CF240: addiu       $a0, $a0, -0x3570
    ctx->r4 = ADD32(ctx->r4, -0X3570);
    // 0x801CF244: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801CF248: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801CF24C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CF250: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801CF254: mul.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801CF258: addiu       $a3, $a3, -0x3560
    ctx->r7 = ADD32(ctx->r7, -0X3560);
    // 0x801CF25C: addiu       $a2, $a2, -0x356C
    ctx->r6 = ADD32(ctx->r6, -0X356C);
    // 0x801CF260: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF264: add.s       $f14, $f20, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x801CF268: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CF26C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CF270: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801CF274: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CF278: mul.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CF27C: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CF280: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CF284: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801CF288: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801CF28C: nop

    // 0x801CF290: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801CF294: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801CF298: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CF29C: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801CF2A0: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801CF2A4: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CF2A8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801CF2AC: nop

    // 0x801CF2B0: bc1f        L_801CF2C4
    if (!c1cs) {
        // 0x801CF2B4: nop
    
            goto L_801CF2C4;
    }
    // 0x801CF2B4: nop

    // 0x801CF2B8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x801CF2BC: b           L_801CF2C8
    // 0x801CF2C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801CF2C8;
    // 0x801CF2C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_801CF2C4:
    // 0x801CF2C4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_801CF2C8:
    // 0x801CF2C8: ldc1        $f6, -0x5648($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5648);
    // 0x801CF2CC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801CF2D0: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x801CF2D4: nop

    // 0x801CF2D8: bc1t        L_801CF31C
    if (c1cs) {
        // 0x801CF2DC: nop
    
            goto L_801CF31C;
    }
    // 0x801CF2DC: nop

    // 0x801CF2E0: lwc1        $f20, 0x104($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801CF2E4: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801CF2E8: lwc1        $f16, 0xFC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801CF2EC: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801CF2F0: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x801CF2F4: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CF2F8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CF2FC: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x801CF300: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801CF304: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    // 0x801CF308: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x801CF30C: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x801CF310: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x801CF314: swc1        $f14, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f14.u32l;
    // 0x801CF318: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
L_801CF31C:
    // 0x801CF31C: b           L_801CF32C
    // 0x801CF320: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
        goto L_801CF32C;
    // 0x801CF320: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
L_801CF324:
    // 0x801CF324: sub.s       $f20, $f14, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x801CF328: sh          $zero, 0x62($sp)
    MEM_H(0X62, ctx->r29) = 0;
L_801CF32C:
    // 0x801CF32C: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
L_801CF330:
    // 0x801CF330: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801CF334: lw          $t8, 0x114($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X114);
    // 0x801CF338: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801CF33C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801CF340: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x801CF344: lwc1        $f8, 0xC($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801CF348: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x801CF34C: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x801CF350: lwc1        $f4, 0x10($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801CF354: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801CF358: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801CF35C: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x801CF360: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x801CF364: lbu         $t9, 0x61($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X61);
    // 0x801CF368: bnel        $t9, $zero, L_801CF390
    if (ctx->r25 != 0) {
        // 0x801CF36C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801CF390;
    }
    goto skip_9;
    // 0x801CF36C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_9:
    // 0x801CF370: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CF374: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x801CF378: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801CF37C: nop

    // 0x801CF380: bc1fl       L_801CF390
    if (!c1cs) {
        // 0x801CF384: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801CF390;
    }
    goto skip_10;
    // 0x801CF384: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_10:
    // 0x801CF388: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x801CF38C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CF390:
    // 0x801CF390: lhu         $v0, 0x62($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X62);
    // 0x801CF394: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801CF398: jr          $ra
    // 0x801CF39C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    TRACE_RETURN()
    return;
    // 0x801CF39C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_801EC414_5A8324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC414: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801EC418: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801EC41C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x801EC420: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x801EC424: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801EC428: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801EC42C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801EC430: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801EC434: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801EC438: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801EC43C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801EC440: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801EC444: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EC448: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EC44C: lw          $t7, 0x4CD4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4CD4);
    // 0x801EC450: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EC454: lui         $s3, 0x901
    ctx->r19 = S32(0X901 << 16);
    // 0x801EC458: addiu       $s3, $s3, -0x7B90
    ctx->r19 = ADD32(ctx->r19, -0X7B90);
    // 0x801EC45C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC460: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x801EC464: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x801EC468: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x801EC46C: lw          $s2, 0x5C($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X5C);
    // 0x801EC470: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC474: addiu       $v1, $a0, 0xA8
    ctx->r3 = ADD32(ctx->r4, 0XA8);
    // 0x801EC478: or          $s4, $v1, $at
    ctx->r20 = ctx->r3 | ctx->r1;
    // 0x801EC47C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC480: lui         $s6, 0x8015
    ctx->r22 = S32(0X8015 << 16);
    // 0x801EC484: lui         $s7, 0x8021
    ctx->r23 = S32(0X8021 << 16);
    // 0x801EC488: addiu       $s7, $s7, -0x2DE0
    ctx->r23 = ADD32(ctx->r23, -0X2DE0);
    // 0x801EC48C: addiu       $s6, $s6, -0x3340
    ctx->r22 = ADD32(ctx->r22, -0X3340);
    // 0x801EC490: lwc1        $f20, -0x4578($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4578);
    // 0x801EC494: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x801EC498: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x801EC49C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801EC4A0: addiu       $s5, $zero, 0x128
    ctx->r21 = ADD32(0, 0X128);
    // 0x801EC4A4: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x801EC4A8: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
L_801EC4AC:
    // 0x801EC4AC: sh          $s5, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r21;
    // 0x801EC4B0: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x801EC4B4: lhu         $t8, 0x2D90($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X2D90);
    // 0x801EC4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC4BC: jal         0x80014218
    // 0x801EC4C0: sh          $t8, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r24;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801EC4C0: sh          $t8, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r24;
    after_0:
    // 0x801EC4C4: lbu         $t9, 0x90($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X90);
    // 0x801EC4C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801EC4CC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801EC4D0: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x801EC4D4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801EC4D8: sw          $s3, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r19;
    // 0x801EC4DC: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
    // 0x801EC4E0: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x801EC4E4: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x801EC4E8: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x801EC4EC: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801EC4F0: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x801EC4F4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801EC4F8: sw          $t2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r10;
    // 0x801EC4FC: bne         $s1, $fp, L_801EC4AC
    if (ctx->r17 != ctx->r30) {
        // 0x801EC500: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EC4AC;
    }
    // 0x801EC500: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801EC504: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x801EC508: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x801EC50C: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x801EC510: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x801EC514: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x801EC518: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x801EC51C: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x801EC520: swc1        $f6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f6.u32l;
    // 0x801EC524: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x801EC528: sh          $t5, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r13;
    // 0x801EC52C: swc1        $f8, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f8.u32l;
    // 0x801EC530: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x801EC534: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    // 0x801EC538: jal         0x801EE374
    // 0x801EC53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE374_5AA284(rdram, ctx);
        goto after_1;
    // 0x801EC53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EC540: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EC544: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EC548: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x801EC54C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EC550: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EC554: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801EC558: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x801EC55C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EC560: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x801EC564: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801EC568: lbu         $t8, 0x3($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3);
    // 0x801EC56C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EC570: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801EC574: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x801EC578: jal         0x801DC554
    // 0x801EC57C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EC57C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_2:
    // 0x801EC580: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801EC584: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801EC588: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801EC58C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801EC590: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801EC594: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801EC598: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801EC59C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801EC5A0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801EC5A4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x801EC5A8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x801EC5AC: jr          $ra
    // 0x801EC5B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801EC5B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801F23C8_5AE2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F23C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801F23CC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x801F23D0: addu        $t6, $a3, $v0
    ctx->r14 = ADD32(ctx->r7, ctx->r2);
    // 0x801F23D4: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x801F23D8: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x801F23DC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801F23E0: jr          $ra
    // 0x801F23E4: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x801F23E4: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
;}
RECOMP_FUNC void func_801E0944_59C854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0944: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E094C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E0950: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801E0954: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E0958: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E095C: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801E0960: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801E0964: lhu         $t8, 0x30($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X30);
    // 0x801E0968: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x801E096C: beq         $at, $zero, L_801E0BE4
    if (ctx->r1 == 0) {
        // 0x801E0970: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801E0BE4;
    }
    // 0x801E0970: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801E0974: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0978: addu        $at, $at, $t8
    gpr jr_addend_801E0980 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801E097C: lw          $t8, -0x4E28($at)
    ctx->r24 = ADD32(ctx->r1, -0X4E28);
    // 0x801E0980: jr          $t8
    // 0x801E0984: nop

    switch (jr_addend_801E0980 >> 2) {
        case 0: goto L_801E0988; break;
        case 1: goto L_801E09E4; break;
        case 2: goto L_801E0A24; break;
        case 3: goto L_801E0A60; break;
        case 4: goto L_801E0AA4; break;
        case 5: goto L_801E0B48; break;
        default: switch_error(__func__, 0x801E0980, 0x8020B1D8);
    }
    // 0x801E0984: nop

L_801E0988:
    // 0x801E0988: lhu         $t9, 0x80($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X80);
    // 0x801E098C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801E0990: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801E0994: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x801E0998: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x801E099C: bne         $at, $zero, L_801E0BE4
    if (ctx->r1 != 0) {
        // 0x801E09A0: sh          $t0, 0x80($s0)
        MEM_H(0X80, ctx->r16) = ctx->r8;
            goto L_801E0BE4;
    }
    // 0x801E09A0: sh          $t0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r8;
    // 0x801E09A4: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x801E09A8: lw          $t2, -0x39E4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39E4);
    // 0x801E09AC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x801E09B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E09B4: sw          $zero, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = 0;
    // 0x801E09B8: lbu         $t4, 0x90($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X90);
    // 0x801E09BC: lh          $t3, 0x7A72($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7A72);
    // 0x801E09C0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x801E09C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801E09C8: sh          $t3, -0x2D9E($at)
    MEM_H(-0X2D9E, ctx->r1) = ctx->r11;
    // 0x801E09CC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801E09D0: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
    // 0x801E09D4: lhu         $t6, 0x30($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X30);
    // 0x801E09D8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E09DC: b           L_801E0BE4
    // 0x801E09E0: sh          $t7, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r15;
        goto L_801E0BE4;
    // 0x801E09E0: sh          $t7, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r15;
L_801E09E4:
    // 0x801E09E4: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
    // 0x801E09E8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801E09EC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801E09F0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x801E09F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801E09F8: lh          $t1, -0x2D9E($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2D9E);
    // 0x801E09FC: lh          $t8, 0x7A72($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7A72);
    // 0x801E0A00: beql        $t8, $t1, L_801E0BE8
    if (ctx->r24 == ctx->r9) {
        // 0x801E0A04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E0BE8;
    }
    goto skip_0;
    // 0x801E0A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E0A08: lhu         $t2, 0x80($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X80);
    // 0x801E0A0C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x801E0A10: sh          $t4, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r12;
    // 0x801E0A14: lhu         $t3, 0x30($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X30);
    // 0x801E0A18: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x801E0A1C: b           L_801E0BE4
    // 0x801E0A20: sh          $t5, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r13;
        goto L_801E0BE4;
    // 0x801E0A20: sh          $t5, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r13;
L_801E0A24:
    // 0x801E0A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0A28: jal         0x801DC9C8
    // 0x801E0A2C: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    func_801DC9C8_5988D8(rdram, ctx);
        goto after_0;
    // 0x801E0A2C: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    after_0:
    // 0x801E0A30: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801E0A34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0A38: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E0A3C: sb          $zero, -0x2DA0($at)
    MEM_B(-0X2DA0, ctx->r1) = 0;
    // 0x801E0A40: lhu         $t7, 0x80($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X80);
    // 0x801E0A44: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0A48: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x801E0A4C: sh          $t9, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r25;
    // 0x801E0A50: lhu         $t0, 0x30($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X30);
    // 0x801E0A54: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x801E0A58: b           L_801E0BE4
    // 0x801E0A5C: sh          $t8, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r24;
        goto L_801E0BE4;
    // 0x801E0A5C: sh          $t8, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r24;
L_801E0A60:
    // 0x801E0A60: lhu         $t1, 0x80($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X80);
    // 0x801E0A64: lbu         $t4, 0x90($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X90);
    // 0x801E0A68: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E0A6C: addiu       $t3, $t3, -0x2DA0
    ctx->r11 = ADD32(ctx->r11, -0X2DA0);
    // 0x801E0A70: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801E0A74: sh          $t2, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r10;
    // 0x801E0A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E0A80: jal         0x801DCA64
    // 0x801E0A84: addu        $a2, $t4, $t3
    ctx->r6 = ADD32(ctx->r12, ctx->r11);
    func_801DCA64_598974(rdram, ctx);
        goto after_1;
    // 0x801E0A84: addu        $a2, $t4, $t3
    ctx->r6 = ADD32(ctx->r12, ctx->r11);
    after_1:
    // 0x801E0A88: beql        $v0, $zero, L_801E0BE8
    if (ctx->r2 == 0) {
        // 0x801E0A8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E0BE8;
    }
    goto skip_1;
    // 0x801E0A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E0A90: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0A94: lhu         $t5, 0x30($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X30);
    // 0x801E0A98: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801E0A9C: b           L_801E0BE4
    // 0x801E0AA0: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
        goto L_801E0BE4;
    // 0x801E0AA0: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
L_801E0AA4:
    // 0x801E0AA4: sb          $zero, 0x69($v1)
    MEM_B(0X69, ctx->r3) = 0;
    // 0x801E0AA8: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0AAC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801E0AB0: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x801E0AB4: sb          $t7, 0x84($t9)
    MEM_B(0X84, ctx->r25) = ctx->r15;
    // 0x801E0AB8: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0AC0: lbu         $t8, 0x59($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X59);
    // 0x801E0AC4: beq         $t8, $zero, L_801E0ADC
    if (ctx->r24 == 0) {
        // 0x801E0AC8: nop
    
            goto L_801E0ADC;
    }
    // 0x801E0AC8: nop

    // 0x801E0ACC: jal         0x801DACDC
    // 0x801E0AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E0AD4: b           L_801E0AE8
    // 0x801E0AD8: addiu       $t1, $zero, 0xBA
    ctx->r9 = ADD32(0, 0XBA);
        goto L_801E0AE8;
    // 0x801E0AD8: addiu       $t1, $zero, 0xBA
    ctx->r9 = ADD32(0, 0XBA);
L_801E0ADC:
    // 0x801E0ADC: jal         0x801DACDC
    // 0x801E0AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E0AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801E0AE4: addiu       $t1, $zero, 0xBA
    ctx->r9 = ADD32(0, 0XBA);
L_801E0AE8:
    // 0x801E0AE8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0AEC: sb          $t1, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r9;
    // 0x801E0AF0: jal         0x8003521C
    // 0x801E0AF4: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, 0X944);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E0AF4: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, 0X944);
    after_4:
    // 0x801E0AF8: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0AFC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801E0B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0B04: sb          $zero, 0x84($t2)
    MEM_B(0X84, ctx->r10) = 0;
    // 0x801E0B08: lhu         $t4, 0x80($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X80);
    // 0x801E0B0C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0B10: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x801E0B14: sh          $t3, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r11;
    // 0x801E0B18: lhu         $t5, 0x30($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X30);
    // 0x801E0B1C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801E0B20: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x801E0B24: lbu         $t7, 0x7AE2($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7AE2);
    // 0x801E0B28: bne         $t7, $zero, L_801E0B38
    if (ctx->r15 != 0) {
        // 0x801E0B2C: nop
    
            goto L_801E0B38;
    }
    // 0x801E0B2C: nop

    // 0x801E0B30: jal         0x801DD830
    // 0x801E0B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801DD830_599740(rdram, ctx);
        goto after_5;
    // 0x801E0B34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_801E0B38:
    // 0x801E0B38: jal         0x801CBFCC
    // 0x801E0B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBFCC_587EDC(rdram, ctx);
        goto after_6;
    // 0x801E0B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E0B40: b           L_801E0BE8
    // 0x801E0B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0BE8;
    // 0x801E0B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0B48:
    // 0x801E0B48: lhu         $t9, 0x80($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X80);
    // 0x801E0B4C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801E0B50: andi        $t8, $t0, 0xFFFF
    ctx->r24 = ctx->r8 & 0XFFFF;
    // 0x801E0B54: slti        $at, $t8, 0x18
    ctx->r1 = SIGNED(ctx->r24) < 0X18 ? 1 : 0;
    // 0x801E0B58: bne         $at, $zero, L_801E0BE4
    if (ctx->r1 != 0) {
        // 0x801E0B5C: sh          $t0, 0x80($s0)
        MEM_H(0X80, ctx->r16) = ctx->r8;
            goto L_801E0BE4;
    }
    // 0x801E0B5C: sh          $t0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r8;
    // 0x801E0B60: jal         0x801CC454
    // 0x801E0B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_7;
    // 0x801E0B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E0B68: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0B6C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E0B70: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0B74: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x801E0B78: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0B7C: addiu       $a0, $a0, -0x9F0
    ctx->r4 = ADD32(ctx->r4, -0X9F0);
    // 0x801E0B80: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x801E0B84: lbu         $t4, 0x59($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X59);
    // 0x801E0B88: addiu       $t3, $zero, 0x42
    ctx->r11 = ADD32(0, 0X42);
    // 0x801E0B8C: beql        $t4, $zero, L_801E0BA8
    if (ctx->r12 == 0) {
        // 0x801E0B90: lw          $t6, 0xC($v0)
        ctx->r14 = MEM_W(ctx->r2, 0XC);
            goto L_801E0BA8;
    }
    goto skip_2;
    // 0x801E0B90: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    skip_2:
    // 0x801E0B94: jal         0x8003521C
    // 0x801E0B98: sb          $t3, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801E0B98: sb          $t3, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r11;
    after_8:
    // 0x801E0B9C: b           L_801E0BE8
    // 0x801E0BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0BE8;
    // 0x801E0BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0BA4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
L_801E0BA8:
    // 0x801E0BA8: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x801E0BAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0BB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E0BB4: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801E0BB8: bne         $at, $zero, L_801E0BDC
    if (ctx->r1 != 0) {
        // 0x801E0BBC: addiu       $a0, $a0, -0x2598
        ctx->r4 = ADD32(ctx->r4, -0X2598);
            goto L_801E0BDC;
    }
    // 0x801E0BBC: addiu       $a0, $a0, -0x2598
    ctx->r4 = ADD32(ctx->r4, -0X2598);
    // 0x801E0BC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E0BC4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0BC8: addiu       $a0, $a0, -0x2578
    ctx->r4 = ADD32(ctx->r4, -0X2578);
    // 0x801E0BCC: jal         0x8003521C
    // 0x801E0BD0: sb          $t9, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801E0BD0: sb          $t9, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r25;
    after_9:
    // 0x801E0BD4: b           L_801E0BE8
    // 0x801E0BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0BE8;
    // 0x801E0BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0BDC:
    // 0x801E0BDC: jal         0x8003521C
    // 0x801E0BE0: sb          $zero, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801E0BE0: sb          $zero, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = 0;
    after_10:
L_801E0BE4:
    // 0x801E0BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0BE8:
    // 0x801E0BE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E0BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E0BF0: jr          $ra
    // 0x801E0BF4: nop

    TRACE_RETURN()
    return;
    // 0x801E0BF4: nop

;}
RECOMP_FUNC void func_801EE7A0_5AA6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE7A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE7A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EE7AC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EE7B0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EE7B4: jal         0x801EE824
    // 0x801EE7B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE824_5AA734(rdram, ctx);
        goto after_0;
    // 0x801EE7B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EE7BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE7C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE7C4: jr          $ra
    // 0x801EE7C8: nop

    TRACE_RETURN()
    return;
    // 0x801EE7C8: nop

;}
RECOMP_FUNC void func_801F634C_5B225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F634C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6354: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6358: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    // 0x801F635C: jal         0x801F6424
    // 0x801F6360: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F6424_5B2334(rdram, ctx);
        goto after_0;
    // 0x801F6360: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x801F6364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F636C: jr          $ra
    // 0x801F6370: nop

    TRACE_RETURN()
    return;
    // 0x801F6370: nop

;}
RECOMP_FUNC void func_801DEA28_59A938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEA2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEA30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEA34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DEA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEA3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DEA40: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DEA44: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DEA48: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DEA4C: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801DEA50: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801DEA54: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DEA58: jalr        $t9
    // 0x801DEA5C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DEA5C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801DEA60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEA64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DEA68: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEA6C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DEA70: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801DEA74: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DEA78: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801DEA7C: nop

    // 0x801DEA80: bc1f        L_801DEAA4
    if (!c1cs) {
        // 0x801DEA84: nop
    
            goto L_801DEAA4;
    }
    // 0x801DEA84: nop

    // 0x801DEA88: lw          $t7, 0x5C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5C);
    // 0x801DEA8C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DEA90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEA94: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801DEA98: jal         0x801DACDC
    // 0x801DEA9C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DEA9C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801DEAA0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_801DEAA4:
    // 0x801DEAA4: jal         0x801E84A4
    // 0x801DEAA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E84A4_5A43B4(rdram, ctx);
        goto after_2;
    // 0x801DEAA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x801DEAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEAB4: jr          $ra
    // 0x801DEAB8: nop

    TRACE_RETURN()
    return;
    // 0x801DEAB8: nop

;}
RECOMP_FUNC void func_801EB518_5A7428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB518: andi        $t6, $a1, 0x3
    ctx->r14 = ctx->r5 & 0X3;
    // 0x801EB51C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x801EB520: beq         $t6, $zero, L_801EB534
    if (ctx->r14 == 0) {
        // 0x801EB524: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801EB534;
    }
    // 0x801EB524: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB528: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EB52C: bnel        $t6, $at, L_801EB544
    if (ctx->r14 != ctx->r1) {
        // 0x801EB530: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_801EB544;
    }
    goto skip_0;
    // 0x801EB530: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_801EB534:
    // 0x801EB534: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB538: lw          $v0, 0x98($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X98);
    // 0x801EB53C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x801EB540: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801EB544:
    // 0x801EB544: bne         $a1, $v1, L_801EB554
    if (ctx->r5 != ctx->r3) {
        // 0x801EB548: lw          $v0, 0x0($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X0);
            goto L_801EB554;
    }
    // 0x801EB548: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x801EB54C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB550: lw          $v0, 0x9C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X9C);
L_801EB554:
    // 0x801EB554: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801EB558: bne         $a1, $a2, L_801EB568
    if (ctx->r5 != ctx->r6) {
        // 0x801EB55C: nop
    
            goto L_801EB568;
    }
    // 0x801EB55C: nop

    // 0x801EB560: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB564: lw          $v0, 0xA0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA0);
L_801EB568:
    // 0x801EB568: beq         $v0, $zero, L_801EB5B4
    if (ctx->r2 == 0) {
        // 0x801EB56C: nop
    
            goto L_801EB5B4;
    }
    // 0x801EB56C: nop

    // 0x801EB570: lbu         $t0, 0x60($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X60);
    // 0x801EB574: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EB578: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801EB57C: beq         $a1, $zero, L_801EB58C
    if (ctx->r5 == 0) {
        // 0x801EB580: sb          $t1, 0x60($v0)
        MEM_B(0X60, ctx->r2) = ctx->r9;
            goto L_801EB58C;
    }
    // 0x801EB580: sb          $t1, 0x60($v0)
    MEM_B(0X60, ctx->r2) = ctx->r9;
    // 0x801EB584: bne         $a1, $at, L_801EB594
    if (ctx->r5 != ctx->r1) {
        // 0x801EB588: nop
    
            goto L_801EB594;
    }
    // 0x801EB588: nop

L_801EB58C:
    // 0x801EB58C: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB590: sw          $zero, 0x98($t2)
    MEM_W(0X98, ctx->r10) = 0;
L_801EB594:
    // 0x801EB594: bne         $a1, $v1, L_801EB5A4
    if (ctx->r5 != ctx->r3) {
        // 0x801EB598: nop
    
            goto L_801EB5A4;
    }
    // 0x801EB598: nop

    // 0x801EB59C: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB5A0: sw          $zero, 0x9C($t3)
    MEM_W(0X9C, ctx->r11) = 0;
L_801EB5A4:
    // 0x801EB5A4: bne         $a1, $a2, L_801EB5B4
    if (ctx->r5 != ctx->r6) {
        // 0x801EB5A8: nop
    
            goto L_801EB5B4;
    }
    // 0x801EB5A8: nop

    // 0x801EB5AC: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB5B0: sw          $zero, 0xA0($t4)
    MEM_W(0XA0, ctx->r12) = 0;
L_801EB5B4:
    // 0x801EB5B4: jr          $ra
    // 0x801EB5B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x801EB5B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_801F54EC_5B13FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F54EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F54F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F54F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F54F8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x801F54FC: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    // 0x801F5500: jal         0x801E4078
    // 0x801F5504: addiu       $a3, $zero, 0x88
    ctx->r7 = ADD32(0, 0X88);
    func_801E4078_59FF88(rdram, ctx);
        goto after_0;
    // 0x801F5504: addiu       $a3, $zero, 0x88
    ctx->r7 = ADD32(0, 0X88);
    after_0:
    // 0x801F5508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F550C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5510: jr          $ra
    // 0x801F5514: nop

    TRACE_RETURN()
    return;
    // 0x801F5514: nop

;}
RECOMP_FUNC void func_801FC5C0_5B84D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC5C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801FC5C4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801FC5C8: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x801FC5CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801FC5D0: lw          $v0, -0x710($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X710);
    // 0x801FC5D4: beq         $v0, $zero, L_801FC5E8
    if (ctx->r2 == 0) {
        // 0x801FC5D8: nop
    
            goto L_801FC5E8;
    }
    // 0x801FC5D8: nop

    // 0x801FC5DC: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x801FC5E0: ori         $t8, $t7, 0x14
    ctx->r24 = ctx->r15 | 0X14;
    // 0x801FC5E4: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
L_801FC5E8:
    // 0x801FC5E8: jr          $ra
    // 0x801FC5EC: nop

    TRACE_RETURN()
    return;
    // 0x801FC5EC: nop

;}
RECOMP_FUNC void func_801E31DC_59F0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E31DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E31E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E31E4: jal         0x801E7DE8
    // 0x801E31E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E31E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E31EC: beq         $v0, $zero, L_801E3218
    if (ctx->r2 == 0) {
        // 0x801E31F0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E3218;
    }
    // 0x801E31F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E31F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E31F8: lwc1        $f0, -0x4CAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CAC);
    // 0x801E31FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E3200: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E3204: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E3208: jal         0x801E32D4
    // 0x801E320C: nop

    func_801E32D4_59F1E4(rdram, ctx);
        goto after_1;
    // 0x801E320C: nop

    after_1:
    // 0x801E3210: b           L_801E3238
    // 0x801E3214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E3238;
    // 0x801E3214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3218:
    // 0x801E3218: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E321C: lwc1        $f0, -0x4CA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CA8);
    // 0x801E3220: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E3224: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E3228: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E322C: jal         0x801E32D4
    // 0x801E3230: nop

    func_801E32D4_59F1E4(rdram, ctx);
        goto after_2;
    // 0x801E3230: nop

    after_2:
    // 0x801E3234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3238:
    // 0x801E3238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E323C: jr          $ra
    // 0x801E3240: nop

    TRACE_RETURN()
    return;
    // 0x801E3240: nop

;}
RECOMP_FUNC void func_801E7E40_5A3D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7E40: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7E44: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x801E7E48: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x801E7E4C: beq         $v0, $zero, L_801E7E88
    if (ctx->r2 == 0) {
        // 0x801E7E50: nop
    
            goto L_801E7E88;
    }
    // 0x801E7E50: nop

    // 0x801E7E54: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7E58: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E7E5C: lhu         $v0, 0x86($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X86);
    // 0x801E7E60: xor         $t8, $v0, $at
    ctx->r24 = ctx->r2 ^ ctx->r1;
    // 0x801E7E64: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x801E7E68: beq         $v0, $zero, L_801E7E88
    if (ctx->r2 == 0) {
        // 0x801E7E6C: nop
    
            goto L_801E7E88;
    }
    // 0x801E7E6C: nop

    // 0x801E7E70: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7E74: slti        $v0, $v1, 0xAA
    ctx->r2 = SIGNED(ctx->r3) < 0XAA ? 1 : 0;
    // 0x801E7E78: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801E7E7C: beq         $v0, $zero, L_801E7E88
    if (ctx->r2 == 0) {
        // 0x801E7E80: nop
    
            goto L_801E7E88;
    }
    // 0x801E7E80: nop

    // 0x801E7E84: slti        $v0, $v1, 0xB9
    ctx->r2 = SIGNED(ctx->r3) < 0XB9 ? 1 : 0;
L_801E7E88:
    // 0x801E7E88: jr          $ra
    // 0x801E7E8C: nop

    TRACE_RETURN()
    return;
    // 0x801E7E8C: nop

;}
RECOMP_FUNC void func_801E674C_5A265C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E674C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801E6750: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6754: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801E6758: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E675C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801E6760: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x801E6764: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x801E6768: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801E676C: addiu       $at, $zero, 0x322
    ctx->r1 = ADD32(0, 0X322);
    // 0x801E6770: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E6774: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E6778: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E677C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E6780: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801E6784: lhu         $t9, 0x7DB4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB4);
    // 0x801E6788: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E678C: andi        $t2, $t9, 0x2000
    ctx->r10 = ctx->r25 & 0X2000;
    // 0x801E6790: beql        $t2, $zero, L_801E6A58
    if (ctx->r10 == 0) {
        // 0x801E6794: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E6A58;
    }
    goto skip_0;
    // 0x801E6794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E6798: bne         $a2, $at, L_801E67B0
    if (ctx->r6 != ctx->r1) {
        // 0x801E679C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_801E67B0;
    }
    // 0x801E679C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801E67A0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E67A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E67A8: b           L_801E67E0
    // 0x801E67AC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
        goto L_801E67E0;
    // 0x801E67AC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_801E67B0:
    // 0x801E67B0: addiu       $at, $zero, 0x33B
    ctx->r1 = ADD32(0, 0X33B);
    // 0x801E67B4: bne         $v0, $at, L_801E67C8
    if (ctx->r2 != ctx->r1) {
        // 0x801E67B8: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_801E67C8;
    }
    // 0x801E67B8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801E67BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E67C0: b           L_801E67E0
    // 0x801E67C4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_801E67E0;
    // 0x801E67C4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_801E67C8:
    // 0x801E67C8: addiu       $at, $zero, 0x33C
    ctx->r1 = ADD32(0, 0X33C);
    // 0x801E67CC: bne         $v0, $at, L_801E67E0
    if (ctx->r2 != ctx->r1) {
        // 0x801E67D0: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_801E67E0;
    }
    // 0x801E67D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801E67D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E67D8: nop

    // 0x801E67DC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_801E67E0:
    // 0x801E67E0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E67E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E67E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E67EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E67F0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E67F4: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E67F8: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x801E67FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801E6800: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801E6804: jal         0x801DB768
    // 0x801E6808: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801DB768_597678(rdram, ctx);
        goto after_0;
    // 0x801E6808: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801E680C: bne         $v0, $zero, L_801E681C
    if (ctx->r2 != 0) {
        // 0x801E6810: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_801E681C;
    }
    // 0x801E6810: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801E6814: b           L_801E6A54
    // 0x801E6818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E6A54;
    // 0x801E6818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E681C:
    // 0x801E681C: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x801E6820: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x801E6824: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x801E6828: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E682C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E6830: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x801E6834: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x801E6838: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E683C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801E6840: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E6844: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E6848: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E684C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801E6850: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6854: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E6858: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E685C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801E6860: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801E6864: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801E6868: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801E686C: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x801E6870: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E6874: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E6878: jal         0x80033A3C
    // 0x801E687C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x801E687C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801E6880: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E6884: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x801E6888: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801E688C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x801E6890: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E6894: jal         0x801E6A64
    // 0x801E6898: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801E6A64_5A2974(rdram, ctx);
        goto after_2;
    // 0x801E6898: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801E689C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E68A0: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x801E68A4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E68A8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x801E68AC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801E68B0: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801E68B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E68B8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x801E68BC: jal         0x801E6B10
    // 0x801E68C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_801E6B10_5A2A20(rdram, ctx);
        goto after_3;
    // 0x801E68C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801E68C4: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E68C8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x801E68CC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801E68D0: lui         $a2, 0xC140
    ctx->r6 = S32(0XC140 << 16);
    // 0x801E68D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E68D8: jal         0x801E6A64
    // 0x801E68DC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801E6A64_5A2974(rdram, ctx);
        goto after_4;
    // 0x801E68DC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x801E68E0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E68E4: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x801E68E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E68EC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x801E68F0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801E68F4: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x801E68F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E68FC: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x801E6900: jal         0x801E6B10
    // 0x801E6904: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_801E6B10_5A2A20(rdram, ctx);
        goto after_5;
    // 0x801E6904: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x801E6908: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x801E690C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E6910: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x801E6914: bne         $t0, $zero, L_801E692C
    if (ctx->r8 != 0) {
        // 0x801E6918: nop
    
            goto L_801E692C;
    }
    // 0x801E6918: nop

    // 0x801E691C: bne         $v1, $zero, L_801E692C
    if (ctx->r3 != 0) {
        // 0x801E6920: nop
    
            goto L_801E692C;
    }
    // 0x801E6920: nop

    // 0x801E6924: b           L_801E6A54
    // 0x801E6928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E6A54;
    // 0x801E6928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E692C:
    // 0x801E692C: beq         $t0, $zero, L_801E6990
    if (ctx->r8 == 0) {
        // 0x801E6930: sltiu       $v0, $t0, 0x1
        ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
            goto L_801E6990;
    }
    // 0x801E6930: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x801E6934: beq         $v1, $zero, L_801E6990
    if (ctx->r3 == 0) {
        // 0x801E6938: lwc1        $f6, 0x60($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
            goto L_801E6990;
    }
    // 0x801E6938: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E693C: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x801E6940: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E6944: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801E6948: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
    // 0x801E694C: bc1f        L_801E6958
    if (!c1cs) {
        // 0x801E6950: nop
    
            goto L_801E6958;
    }
    // 0x801E6950: nop

    // 0x801E6954: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801E6958:
    // 0x801E6958: beq         $v1, $zero, L_801E6968
    if (ctx->r3 == 0) {
        // 0x801E695C: nop
    
            goto L_801E6968;
    }
    // 0x801E695C: nop

    // 0x801E6960: b           L_801E6968
    // 0x801E6964: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_801E6968;
    // 0x801E6964: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_801E6968:
    // 0x801E6968: beql        $v1, $zero, L_801E6984
    if (ctx->r3 == 0) {
        // 0x801E696C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E6984;
    }
    goto skip_1;
    // 0x801E696C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x801E6970: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x801E6974: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E6978: b           L_801E69C0
    // 0x801E697C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_801E69C0;
    // 0x801E697C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E6980: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E6984:
    // 0x801E6984: nop

    // 0x801E6988: b           L_801E69C0
    // 0x801E698C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_801E69C0;
    // 0x801E698C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801E6990:
    // 0x801E6990: beq         $t0, $zero, L_801E69A0
    if (ctx->r8 == 0) {
        // 0x801E6994: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_801E69A0;
    }
    // 0x801E6994: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x801E6998: b           L_801E69A0
    // 0x801E699C: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
        goto L_801E69A0;
    // 0x801E699C: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
L_801E69A0:
    // 0x801E69A0: beq         $t0, $zero, L_801E69B8
    if (ctx->r8 == 0) {
        // 0x801E69A4: lui         $at, 0x4060
        ctx->r1 = S32(0X4060 << 16);
            goto L_801E69B8;
    }
    // 0x801E69A4: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x801E69A8: lui         $at, 0xC060
    ctx->r1 = S32(0XC060 << 16);
    // 0x801E69AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E69B0: b           L_801E69C0
    // 0x801E69B4: nop

        goto L_801E69C0;
    // 0x801E69B4: nop

L_801E69B8:
    // 0x801E69B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E69BC: nop

L_801E69C0:
    // 0x801E69C0: beq         $v0, $zero, L_801E69DC
    if (ctx->r2 == 0) {
        // 0x801E69C4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E69DC;
    }
    // 0x801E69C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E69C8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E69CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E69D0: addiu       $v1, $v1, 0x470C
    ctx->r3 = ADD32(ctx->r3, 0X470C);
    // 0x801E69D4: b           L_801E69EC
    // 0x801E69D8: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
        goto L_801E69EC;
    // 0x801E69D8: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_801E69DC:
    // 0x801E69DC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E69E0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E69E4: addiu       $v1, $v1, 0x470C
    ctx->r3 = ADD32(ctx->r3, 0X470C);
    // 0x801E69E8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_801E69EC:
    // 0x801E69EC: beq         $v0, $zero, L_801E6A00
    if (ctx->r2 == 0) {
        // 0x801E69F0: lwc1        $f18, 0x44($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E6A00;
    }
    // 0x801E69F0: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E69F4: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801E69F8: b           L_801E6A04
    // 0x801E69FC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
        goto L_801E6A04;
    // 0x801E69FC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
L_801E6A00:
    // 0x801E6A00: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
L_801E6A04:
    // 0x801E6A04: beq         $v0, $zero, L_801E6A18
    if (ctx->r2 == 0) {
        // 0x801E6A08: lwc1        $f6, 0x48($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
            goto L_801E6A18;
    }
    // 0x801E6A08: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E6A0C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E6A10: b           L_801E6A1C
    // 0x801E6A14: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
        goto L_801E6A1C;
    // 0x801E6A14: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
L_801E6A18:
    // 0x801E6A18: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_801E6A1C:
    // 0x801E6A1C: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x801E6A20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E6A24: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801E6A28: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x801E6A2C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x801E6A30: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801E6A34: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x801E6A38: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x801E6A3C: jal         0x801E6D30
    // 0x801E6A40: sh          $t2, -0x2D90($at)
    MEM_H(-0X2D90, ctx->r1) = ctx->r10;
    func_801E6D30_5A2C40(rdram, ctx);
        goto after_6;
    // 0x801E6A40: sh          $t2, -0x2D90($at)
    MEM_H(-0X2D90, ctx->r1) = ctx->r10;
    after_6:
    // 0x801E6A44: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x801E6A48: jal         0x801DACDC
    // 0x801E6A4C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801E6A4C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_7:
    // 0x801E6A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E6A54:
    // 0x801E6A54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E6A58:
    // 0x801E6A58: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801E6A5C: jr          $ra
    // 0x801E6A60: nop

    TRACE_RETURN()
    return;
    // 0x801E6A60: nop

;}
RECOMP_FUNC void func_801F4AA4_5B09B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4AAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4AB0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801F4AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F4AB8: jal         0x801E8C98
    // 0x801F4ABC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E8C98_5A4BA8(rdram, ctx);
        goto after_0;
    // 0x801F4ABC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F4AC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F4AC4: bgez        $v0, L_801F4B04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801F4AC8: lbu         $a1, 0x1F($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X1F);
            goto L_801F4B04;
    }
    // 0x801F4AC8: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x801F4ACC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F4AD0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F4AD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4AD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4ADC: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x801F4AE0: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801F4AE4: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801F4AE8: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801F4AEC: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x801F4AF0: swc1        $f0, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f0.u32l;
    // 0x801F4AF4: jal         0x801DACDC
    // 0x801F4AF8: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F4AF8: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    after_1:
    // 0x801F4AFC: b           L_801F4B60
    // 0x801F4B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F4B60;
    // 0x801F4B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4B04:
    // 0x801F4B04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F4B08: bnel        $v0, $at, L_801F4B2C
    if (ctx->r2 != ctx->r1) {
        // 0x801F4B0C: lw          $v0, 0x5C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X5C);
            goto L_801F4B2C;
    }
    goto skip_0;
    // 0x801F4B0C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    skip_0:
    // 0x801F4B10: jal         0x801DACDC
    // 0x801F4B14: nop

    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F4B14: nop

    after_2:
    // 0x801F4B18: jal         0x80038BC8
    // 0x801F4B1C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F4B1C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_3:
    // 0x801F4B20: b           L_801F4B60
    // 0x801F4B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F4B60;
    // 0x801F4B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4B28: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
L_801F4B2C:
    // 0x801F4B2C: lw          $t7, 0x88($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X88);
    // 0x801F4B30: beql        $t7, $zero, L_801F4B60
    if (ctx->r15 == 0) {
        // 0x801F4B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4B60;
    }
    goto skip_1;
    // 0x801F4B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F4B38: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    // 0x801F4B3C: lbu         $t8, 0x30($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X30);
    // 0x801F4B40: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801F4B44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4B48: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x801F4B4C: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x801F4B50: swc1        $f6, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f6.u32l;
    // 0x801F4B54: jal         0x801DACDC
    // 0x801F4B58: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F4B58: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    after_4:
    // 0x801F4B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4B60:
    // 0x801F4B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4B64: jr          $ra
    // 0x801F4B68: nop

    TRACE_RETURN()
    return;
    // 0x801F4B68: nop

;}
RECOMP_FUNC void func_801DC0A8_597FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC0A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DC0AC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801DC0B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DC0B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801DC0B8: addiu       $t6, $t6, 0x400C
    ctx->r14 = ADD32(ctx->r14, 0X400C);
    // 0x801DC0BC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801DC0C0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x801DC0C4: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x801DC0C8: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801DC0CC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x801DC0D0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801DC0D4: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x801DC0D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801DC0DC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DC0E0: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801DC0E4: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801DC0E8: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x801DC0EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DC0F0: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801DC0F4: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DC0F8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801DC0FC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801DC100: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DC104: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801DC108: jal         0x8001D14C
    // 0x801DC10C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_0;
    // 0x801DC10C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801DC110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801DC118: jr          $ra
    // 0x801DC11C: nop

    TRACE_RETURN()
    return;
    // 0x801DC11C: nop

;}
RECOMP_FUNC void func_801DD4D8_5993E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD4D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD4DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD4E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD4E4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DD4E8: jal         0x801DD5C0
    // 0x801DD4EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_801DD5C0_5994D0(rdram, ctx);
        goto after_0;
    // 0x801DD4EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801DD4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD4F8: jr          $ra
    // 0x801DD4FC: nop

    TRACE_RETURN()
    return;
    // 0x801DD4FC: nop

;}
RECOMP_FUNC void func_801F3A9C_5AF9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3A9C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F3AA0: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801F3AA4: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F3AA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F3AAC: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F3AB0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x801F3AB4: lwc1        $f16, 0x70($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F3AB8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F3ABC: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x801F3AC0: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F3AC4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F3AC8: jr          $ra
    // 0x801F3ACC: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801F3ACC: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801E8820_5A4730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8828: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E882C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E8830: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801E8834: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8838: sw          $a2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r6;
    // 0x801E883C: sb          $zero, 0x86($a0)
    MEM_B(0X86, ctx->r4) = 0;
    // 0x801E8840: jal         0x801E8858
    // 0x801E8844: sh          $t7, 0x84($a0)
    MEM_H(0X84, ctx->r4) = ctx->r15;
    func_801E8858_5A4768(rdram, ctx);
        goto after_0;
    // 0x801E8844: sh          $t7, 0x84($a0)
    MEM_H(0X84, ctx->r4) = ctx->r15;
    after_0:
    // 0x801E8848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E884C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8850: jr          $ra
    // 0x801E8854: nop

    TRACE_RETURN()
    return;
    // 0x801E8854: nop

;}
RECOMP_FUNC void func_801E2FE0_59EEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2FE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2FE4: nop

    // 0x801E2FE8: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2FEC: jr          $ra
    // 0x801E2FF0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E2FF0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801DABDC_596AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DABDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DABE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DABE4: jal         0x801DB060
    // 0x801DABE8: nop

    func_801DB060_596F70(rdram, ctx);
        goto after_0;
    // 0x801DABE8: nop

    after_0:
    // 0x801DABEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DABF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DABF4: jr          $ra
    // 0x801DABF8: nop

    TRACE_RETURN()
    return;
    // 0x801DABF8: nop

;}
RECOMP_FUNC void func_801EDB58_5A9A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDB58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EDB5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EDB60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EDB64: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801EDB68: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801EDB6C: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x801EDB70: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801EDB74: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801EDB78: jal         0x801EE2BC
    // 0x801EDB7C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_0;
    // 0x801EDB7C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x801EDB80: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801EDB84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EDB88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801EDB8C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801EDB90: lui         $a2, 0xC234
    ctx->r6 = S32(0XC234 << 16);
    // 0x801EDB94: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801EDB98: jal         0x801EE530
    // 0x801EDB9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801EDB9C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801EDBA0: jal         0x801EDBB8
    // 0x801EDBA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_801EDBB8_5A9AC8(rdram, ctx);
        goto after_2;
    // 0x801EDBA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x801EDBA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EDBAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EDBB0: jr          $ra
    // 0x801EDBB4: nop

    TRACE_RETURN()
    return;
    // 0x801EDBB4: nop

;}
RECOMP_FUNC void func_801F4688_5B0598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F468C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4690: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F4694: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4698: jal         0x801E1C90
    // 0x801F469C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_0;
    // 0x801F469C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F46A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F46A4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F46A8: jalr        $t9
    // 0x801F46AC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F46AC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x801F46B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F46B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F46B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F46BC: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F46C0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F46C4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F46C8: nop

    // 0x801F46CC: bc1fl       L_801F4744
    if (!c1cs) {
        // 0x801F46D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4744;
    }
    goto skip_0;
    // 0x801F46D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F46D4: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    // 0x801F46D8: beql        $t7, $zero, L_801F4710
    if (ctx->r15 == 0) {
        // 0x801F46DC: lw          $v0, 0x5C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X5C);
            goto L_801F4710;
    }
    goto skip_1;
    // 0x801F46DC: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    skip_1:
    // 0x801F46E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F46E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F46E8: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x801F46EC: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801F46F0: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801F46F4: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F46F8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F46FC: jal         0x801DACDC
    // 0x801F4700: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F4700: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x801F4704: b           L_801F4728
    // 0x801F4708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801F4728;
    // 0x801F4708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F470C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801F4710:
    // 0x801F4710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4714: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    // 0x801F4718: lhu         $t8, 0x1A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1A);
    // 0x801F471C: jal         0x801DACDC
    // 0x801F4720: sh          $t8, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r24;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F4720: sh          $t8, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r24;
    after_3:
    // 0x801F4724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801F4728:
    // 0x801F4728: jal         0x801E8964
    // 0x801F472C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8964_5A4874(rdram, ctx);
        goto after_4;
    // 0x801F472C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x801F4730: jal         0x80038BC8
    // 0x801F4734: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801F4734: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_5:
    // 0x801F4738: jal         0x80038BC8
    // 0x801F473C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801F473C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_6:
    // 0x801F4740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4744:
    // 0x801F4744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F474C: jr          $ra
    // 0x801F4750: nop

    TRACE_RETURN()
    return;
    // 0x801F4750: nop

;}
RECOMP_FUNC void func_801E2D2C_59EC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2D34: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E2D38: jal         0x801E2D74
    // 0x801E2D3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801E2D74_59EC84(rdram, ctx);
        goto after_0;
    // 0x801E2D3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x801E2D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2D48: jr          $ra
    // 0x801E2D4C: nop

    TRACE_RETURN()
    return;
    // 0x801E2D4C: nop

;}
RECOMP_FUNC void func_801E1518_59D428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1518: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E151C: jr          $ra
    // 0x801E1520: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1520: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D04F8_58C408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D04F8: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x801D04FC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x801D0500: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x801D0504: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x801D0508: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x801D050C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x801D0510: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x801D0514: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x801D0518: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x801D051C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x801D0520: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801D0524: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x801D0528: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x801D052C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801D0530: lbu         $t6, 0x91($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X91);
    // 0x801D0534: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801D0538: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D053C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D0540: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D0544: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801D0548: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801D054C: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x801D0550: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801D0554: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801D0558: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801D055C: bgez        $t6, L_801D0574
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D0560: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D0574;
    }
    // 0x801D0560: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D0564: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D0568: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D056C: nop

    // 0x801D0570: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_801D0574:
    // 0x801D0574: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801D0578: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D057C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D0580: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801D0584: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D0588: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D058C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x801D0590: nop

    // 0x801D0594: bc1fl       L_801D05A4
    if (!c1cs) {
        // 0x801D0598: sw          $a0, 0x160($sp)
        MEM_W(0X160, ctx->r29) = ctx->r4;
            goto L_801D05A4;
    }
    goto skip_0;
    // 0x801D0598: sw          $a0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r4;
    skip_0:
    // 0x801D059C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801D05A0: sw          $a0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r4;
L_801D05A4:
    // 0x801D05A4: jal         0x801E7E40
    // 0x801D05A8: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    func_801E7E40_5A3D50(rdram, ctx);
        goto after_0;
    // 0x801D05A8: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801D05AC: beq         $v0, $zero, L_801D05CC
    if (ctx->r2 == 0) {
        // 0x801D05B0: lwc1        $f2, 0x80($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
            goto L_801D05CC;
    }
    // 0x801D05B0: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D05B4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801D05B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D05BC: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D05C0: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D05C4: b           L_801D0610
    // 0x801D05C8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
        goto L_801D0610;
    // 0x801D05C8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_801D05CC:
    // 0x801D05CC: lw          $a0, 0x160($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X160);
    // 0x801D05D0: jal         0x801E7F30
    // 0x801D05D4: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    func_801E7F30_5A3E40(rdram, ctx);
        goto after_1;
    // 0x801D05D4: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801D05D8: beq         $v0, $zero, L_801D05F8
    if (ctx->r2 == 0) {
        // 0x801D05DC: lwc1        $f2, 0x80($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
            goto L_801D05F8;
    }
    // 0x801D05DC: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D05E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D05E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D05E8: lwc1        $f8, 0x1C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D05EC: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D05F0: b           L_801D0610
    // 0x801D05F4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
        goto L_801D0610;
    // 0x801D05F4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_801D05F8:
    // 0x801D05F8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D05FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D0600: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D0604: mul.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801D0608: nop

    // 0x801D060C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_801D0610:
    // 0x801D0610: lw          $s5, 0x170($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X170);
    // 0x801D0614: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x801D0618: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x801D061C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0620: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D0624: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801D0628: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801D062C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0630: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x801D0634: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x801D0638: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D063C: swc1        $f0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->f0.u32l;
    // 0x801D0640: swc1        $f0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f0.u32l;
    // 0x801D0644: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    // 0x801D0648: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D064C: lwc1        $f10, 0x0($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801D0650: lwc1        $f8, 0xC($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0XC);
    // 0x801D0654: swc1        $f0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f0.u32l;
    // 0x801D0658: swc1        $f0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->f0.u32l;
    // 0x801D065C: swc1        $f0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f0.u32l;
    // 0x801D0660: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D0664: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D0668: swc1        $f18, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f18.u32l;
    // 0x801D066C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D0670: lwc1        $f18, 0x14($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X14);
    // 0x801D0674: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801D0678: lwc1        $f0, 0x0($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801D067C: swc1        $f6, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f6.u32l;
    // 0x801D0680: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D0684: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D0688: lwc1        $f8, 0x8($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X8);
    // 0x801D068C: swc1        $f16, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f16.u32l;
    // 0x801D0690: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D0694: lwc1        $f10, 0xC($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0XC);
    // 0x801D0698: swc1        $f0, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->f0.u32l;
    // 0x801D069C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D06A0: lwc1        $f4, 0x20($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X20);
    // 0x801D06A4: lwc1        $f18, 0x18($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X18);
    // 0x801D06A8: swc1        $f8, 0x2C($s5)
    MEM_W(0X2C, ctx->r21) = ctx->f8.u32l;
    // 0x801D06AC: swc1        $f6, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->f6.u32l;
    // 0x801D06B0: lwc1        $f16, 0x14($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X14);
    // 0x801D06B4: swc1        $f10, 0x30($s5)
    MEM_W(0X30, ctx->r21) = ctx->f10.u32l;
    // 0x801D06B8: swc1        $f4, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f4.u32l;
    // 0x801D06BC: swc1        $f18, 0x3C($s5)
    MEM_W(0X3C, ctx->r21) = ctx->f18.u32l;
    // 0x801D06C0: swc1        $f16, 0x38($s5)
    MEM_W(0X38, ctx->r21) = ctx->f16.u32l;
    // 0x801D06C4: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D06C8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D06CC: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801D06D0: lwc1        $f16, 0x24($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D06D4: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x801D06D8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D06DC: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801D06E0: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D06E4: lwc1        $f4, 0xC($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0XC);
    // 0x801D06E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D06EC: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    // 0x801D06F0: lwc1        $f16, 0x24($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D06F4: lwc1        $f10, 0x14($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X14);
    // 0x801D06F8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D06FC: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x801D0700: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D0704: lwc1        $f4, 0x18($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X18);
    // 0x801D0708: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D070C: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x801D0710: lwc1        $f16, 0x24($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D0714: lwc1        $f10, 0x20($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X20);
    // 0x801D0718: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D071C: swc1        $f18, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f18.u32l;
    // 0x801D0720: swc1        $f2, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f2.u32l;
    // 0x801D0724: swc1        $f2, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->f2.u32l;
    // 0x801D0728: swc1        $f2, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->f2.u32l;
    // 0x801D072C: swc1        $f20, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->f20.u32l;
    // 0x801D0730: swc1        $f20, 0x34($s5)
    MEM_W(0X34, ctx->r21) = ctx->f20.u32l;
    // 0x801D0734: swc1        $f20, 0x40($s5)
    MEM_W(0X40, ctx->r21) = ctx->f20.u32l;
    // 0x801D0738: swc1        $f24, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f24.u32l;
    // 0x801D073C: lwc1        $f0, 0x104($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801D0740: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x801D0744: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x801D0748: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D074C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0750: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0754: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x801D0758: lwc1        $f16, 0xC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D075C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0760: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x801D0764: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D0768: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x801D076C: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D0770: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0774: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801D0778: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D077C: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x801D0780: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D0784: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801D0788: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x801D078C: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D0790: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x801D0794: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x801D0798: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801D079C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801D07A0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D07A4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D07A8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801D07AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D07B0: jal         0x80030730
    // 0x801D07B4: nop

    func_80030730_31330(rdram, ctx);
        goto after_2;
    // 0x801D07B4: nop

    after_2:
    // 0x801D07B8: lh          $t7, 0x150($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X150);
    // 0x801D07BC: addiu       $s7, $zero, 0x7FFF
    ctx->r23 = ADD32(0, 0X7FFF);
    // 0x801D07C0: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D07C4: bne         $t7, $s7, L_801D0860
    if (ctx->r15 != ctx->r23) {
        // 0x801D07C8: lwc1        $f12, 0x94($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
            goto L_801D0860;
    }
    // 0x801D07C8: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D07CC: lwc1        $f16, 0x130($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801D07D0: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801D07D4: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801D07D8: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D07DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D07E0: sh          $zero, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = 0;
    // 0x801D07E4: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D07E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D07EC: lhu         $t8, 0x14E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X14E);
    // 0x801D07F0: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x801D07F4: lw          $t0, 0x15C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X15C);
    // 0x801D07F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D07FC: mul.s       $f18, $f8, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x801D0800: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0804: add.s       $f22, $f6, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D0808: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801D080C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x801D0810: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0814: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D0818: lwc1        $f18, 0x13C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x801D081C: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x801D0820: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x801D0824: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0828: swc1        $f18, -0x355C($at)
    MEM_W(-0X355C, ctx->r1) = ctx->f18.u32l;
    // 0x801D082C: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x801D0830: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0834: swc1        $f10, -0x3558($at)
    MEM_W(-0X3558, ctx->r1) = ctx->f10.u32l;
    // 0x801D0838: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D083C: swc1        $f4, -0x3554($at)
    MEM_W(-0X3554, ctx->r1) = ctx->f4.u32l;
    // 0x801D0840: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0844: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D0848: sh          $t8, -0x359C($at)
    MEM_H(-0X359C, ctx->r1) = ctx->r24;
    // 0x801D084C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0850: sw          $t9, -0x35B4($at)
    MEM_W(-0X35B4, ctx->r1) = ctx->r25;
    // 0x801D0854: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0858: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801D085C: sw          $t0, -0x35A8($at)
    MEM_W(-0X35A8, ctx->r1) = ctx->r8;
L_801D0860:
    // 0x801D0860: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0864: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D0868: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x801D086C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D0870: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x801D0874: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D0878: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D087C: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x801D0880: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D0884: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x801D0888: lwc1        $f8, 0x10($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D088C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0890: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801D0894: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D0898: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x801D089C: lwc1        $f0, 0x20($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D08A0: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801D08A4: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x801D08A8: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D08AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801D08B0: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801D08B4: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D08B8: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801D08BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801D08C0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801D08C4: jal         0x8002EB10
    // 0x801D08C8: nop

    func_8002EB10_2F710(rdram, ctx);
        goto after_3;
    // 0x801D08C8: nop

    after_3:
    // 0x801D08CC: lh          $t1, 0x150($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X150);
    // 0x801D08D0: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801D08D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D08D8: bne         $t1, $s7, L_801D0984
    if (ctx->r9 != ctx->r23) {
        // 0x801D08DC: addiu       $fp, $zero, 0xC
        ctx->r30 = ADD32(0, 0XC);
            goto L_801D0984;
    }
    // 0x801D08DC: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x801D08E0: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D08E4: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801D08E8: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801D08EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D08F0: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x801D08F4: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D08F8: mul.s       $f16, $f18, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D08FC: add.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801D0900: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x801D0904: nop

    // 0x801D0908: bc1fl       L_801D0988
    if (!c1cs) {
        // 0x801D090C: lw          $s4, 0x174($sp)
        ctx->r20 = MEM_W(ctx->r29, 0X174);
            goto L_801D0988;
    }
    goto skip_1;
    // 0x801D090C: lw          $s4, 0x174($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X174);
    skip_1:
    // 0x801D0910: sh          $zero, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = 0;
    // 0x801D0914: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0918: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D091C: lhu         $t2, 0x14E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X14E);
    // 0x801D0920: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D0924: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x801D0928: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x801D092C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x801D0930: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x801D0934: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0938: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D093C: lwc1        $f16, 0x13C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x801D0940: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x801D0944: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x801D0948: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D094C: swc1        $f16, -0x355C($at)
    MEM_W(-0X355C, ctx->r1) = ctx->f16.u32l;
    // 0x801D0950: lwc1        $f8, 0x144($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X144);
    // 0x801D0954: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0958: swc1        $f4, -0x3558($at)
    MEM_W(-0X3558, ctx->r1) = ctx->f4.u32l;
    // 0x801D095C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0960: swc1        $f8, -0x3554($at)
    MEM_W(-0X3554, ctx->r1) = ctx->f8.u32l;
    // 0x801D0964: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0968: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D096C: sh          $t2, -0x359C($at)
    MEM_H(-0X359C, ctx->r1) = ctx->r10;
    // 0x801D0970: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0974: sw          $t3, -0x35B4($at)
    MEM_W(-0X35B4, ctx->r1) = ctx->r11;
    // 0x801D0978: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D097C: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x801D0980: sw          $t4, -0x35A8($at)
    MEM_W(-0X35A8, ctx->r1) = ctx->r12;
L_801D0984:
    // 0x801D0984: lw          $s4, 0x174($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X174);
L_801D0988:
    // 0x801D0988: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D098C: lwc1        $f18, 0x1C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D0990: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x801D0994: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D0998: mflo        $t5
    ctx->r13 = lo;
    // 0x801D099C: addu        $v0, $s5, $t5
    ctx->r2 = ADD32(ctx->r21, ctx->r13);
    // 0x801D09A0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D09A4: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801D09A8: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x801D09AC: lwc1        $f4, 0x20($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D09B0: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D09B4: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801D09B8: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x801D09BC: lwc1        $f18, 0x24($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D09C0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D09C4: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801D09C8: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801D09CC: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x801D09D0: lwc1        $f0, 0xA4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XA4);
    // 0x801D09D4: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x801D09D8: nop

    // 0x801D09DC: bc1fl       L_801D09F0
    if (!c1cs) {
        // 0x801D09E0: lwc1        $f8, 0x10C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
            goto L_801D09F0;
    }
    goto skip_2;
    // 0x801D09E0: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    skip_2:
    // 0x801D09E4: sub.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D09E8: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x801D09EC: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
L_801D09F0:
    // 0x801D09F0: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D09F4: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801D09F8: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D09FC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x801D0A00: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x801D0A04: lwc1        $f16, 0xC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D0A08: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    // 0x801D0A0C: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801D0A10: mtc1        $s3, $f16
    ctx->f16.u32l = ctx->r19;
    // 0x801D0A14: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x801D0A18: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D0A1C: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D0A20: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D0A24: bgez        $s3, L_801D0A38
    if (SIGNED(ctx->r19) >= 0) {
        // 0x801D0A28: swc1        $f6, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
            goto L_801D0A38;
    }
    // 0x801D0A28: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x801D0A2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D0A30: nop

    // 0x801D0A34: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
L_801D0A38:
    // 0x801D0A38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801D0A3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D0A40: jal         0x801D1E2C
    // 0x801D0A44: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_801D1E2C_58DD3C(rdram, ctx);
        goto after_4;
    // 0x801D0A44: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x801D0A48: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x801D0A4C: bne         $s7, $t7, L_801D0AC8
    if (ctx->r23 != ctx->r15) {
        // 0x801D0A50: andi        $s6, $v0, 0xFFFF
        ctx->r22 = ctx->r2 & 0XFFFF;
            goto L_801D0AC8;
    }
    // 0x801D0A50: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
    // 0x801D0A54: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D0A58: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D0A5C: addiu       $t9, $sp, 0xE8
    ctx->r25 = ADD32(ctx->r29, 0XE8);
    // 0x801D0A60: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D0A64: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D0A68: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x801D0A6C: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x801D0A70: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    // 0x801D0A74: mflo        $t8
    ctx->r24 = lo;
    // 0x801D0A78: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801D0A7C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D0A80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D0A84: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D0A88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D0A8C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D0A90: jal         0x801D1EC8
    // 0x801D0A94: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801D1EC8_58DDD8(rdram, ctx);
        goto after_5;
    // 0x801D0A94: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801D0A98: lh          $t0, 0x150($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X150);
    // 0x801D0A9C: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801D0AA0: bnel        $t0, $s7, L_801D0B20
    if (ctx->r8 != ctx->r23) {
        // 0x801D0AA4: lh          $t1, 0x150($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X150);
            goto L_801D0B20;
    }
    goto skip_3;
    // 0x801D0AA4: lh          $t1, 0x150($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X150);
    skip_3:
    // 0x801D0AA8: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0AAC: lwc1        $f16, 0x138($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801D0AB0: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D0AB4: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    // 0x801D0AB8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0ABC: sub.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x801D0AC0: b           L_801D0B1C
    // 0x801D0AC4: swc1        $f18, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f18.u32l;
        goto L_801D0B1C;
    // 0x801D0AC4: swc1        $f18, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f18.u32l;
L_801D0AC8:
    // 0x801D0AC8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0ACC: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801D0AD0: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0AD4: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D0AD8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0ADC: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D0AE0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0AE4: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D0AE8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801D0AEC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D0AF0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0AF4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801D0AF8: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x801D0AFC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D0B00: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x801D0B04: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D0B08: lwc1        $f8, 0x4($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801D0B0C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D0B10: lwc1        $f18, 0x8($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X8);
    // 0x801D0B14: jal         0x801D1EC8
    // 0x801D0B18: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801D1EC8_58DDD8(rdram, ctx);
        goto after_6;
    // 0x801D0B18: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_6:
L_801D0B1C:
    // 0x801D0B1C: lh          $t1, 0x150($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X150);
L_801D0B20:
    // 0x801D0B20: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801D0B24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D0B28: bne         $t1, $s7, L_801D0BDC
    if (ctx->r9 != ctx->r23) {
        // 0x801D0B2C: andi        $t5, $s3, 0xFF
        ctx->r13 = ctx->r19 & 0XFF;
            goto L_801D0BDC;
    }
    // 0x801D0B2C: andi        $t5, $s3, 0xFF
    ctx->r13 = ctx->r19 & 0XFF;
    // 0x801D0B30: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801D0B34: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801D0B38: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801D0B3C: mul.s       $f16, $f4, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x801D0B40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0B44: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x801D0B48: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801D0B4C: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D0B50: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D0B54: add.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801D0B58: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x801D0B5C: nop

    // 0x801D0B60: bc1fl       L_801D0BE0
    if (!c1cs) {
        // 0x801D0B64: slti        $at, $t5, 0x3
        ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
            goto L_801D0BE0;
    }
    goto skip_4;
    // 0x801D0B64: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    skip_4:
    // 0x801D0B68: sh          $s6, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = ctx->r22;
    // 0x801D0B6C: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0B70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0B74: lhu         $t2, 0x14E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X14E);
    // 0x801D0B78: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D0B7C: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x801D0B80: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x801D0B84: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x801D0B88: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x801D0B8C: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D0B90: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D0B94: lwc1        $f16, 0x13C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x801D0B98: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x801D0B9C: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x801D0BA0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0BA4: swc1        $f16, -0x355C($at)
    MEM_W(-0X355C, ctx->r1) = ctx->f16.u32l;
    // 0x801D0BA8: lwc1        $f8, 0x144($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X144);
    // 0x801D0BAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BB0: swc1        $f6, -0x3558($at)
    MEM_W(-0X3558, ctx->r1) = ctx->f6.u32l;
    // 0x801D0BB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BB8: swc1        $f8, -0x3554($at)
    MEM_W(-0X3554, ctx->r1) = ctx->f8.u32l;
    // 0x801D0BBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BC0: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D0BC4: sh          $t2, -0x359C($at)
    MEM_H(-0X359C, ctx->r1) = ctx->r10;
    // 0x801D0BC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BCC: sw          $t3, -0x35B4($at)
    MEM_W(-0X35B4, ctx->r1) = ctx->r11;
    // 0x801D0BD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BD4: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x801D0BD8: sw          $t4, -0x35A8($at)
    MEM_W(-0X35A8, ctx->r1) = ctx->r12;
L_801D0BDC:
    // 0x801D0BDC: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
L_801D0BE0:
    // 0x801D0BE0: bne         $at, $zero, L_801D0BEC
    if (ctx->r1 != 0) {
        // 0x801D0BE4: or          $s3, $t5, $zero
        ctx->r19 = ctx->r13 | 0;
            goto L_801D0BEC;
    }
    // 0x801D0BE4: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x801D0BE8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_801D0BEC:
    // 0x801D0BEC: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x801D0BF0: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x801D0BF4: bne         $at, $zero, L_801D0988
    if (ctx->r1 != 0) {
        // 0x801D0BF8: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801D0988;
    }
    // 0x801D0BF8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D0BFC: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801D0C00: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x801D0C04: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x801D0C08: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801D0C0C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x801D0C10: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801D0C14: bc1f        L_801D0C24
    if (!c1cs) {
        // 0x801D0C18: swc1        $f18, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
            goto L_801D0C24;
    }
    // 0x801D0C18: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801D0C1C: sqrt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = sqrtf(ctx->f22.fl);
    // 0x801D0C20: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_801D0C24:
    // 0x801D0C24: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x801D0C28: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x801D0C2C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x801D0C30: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801D0C34: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x801D0C38: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801D0C3C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x801D0C40: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801D0C44: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0C48: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x801D0C4C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x801D0C50: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x801D0C54: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x801D0C58: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x801D0C5C: jr          $ra
    // 0x801D0C60: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    TRACE_RETURN()
    return;
    // 0x801D0C60: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_801F4984_5B0894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4984: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4988: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F498C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801F4990: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801F4994: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F4998: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F499C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F49A0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F49A4: lw          $v1, 0x88($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X88);
    // 0x801F49A8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801F49AC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F49B0: beq         $v1, $zero, L_801F4A3C
    if (ctx->r3 == 0) {
        // 0x801F49B4: nop
    
            goto L_801F4A3C;
    }
    // 0x801F49B4: nop

    // 0x801F49B8: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x801F49BC: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801F49C0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801F49C4: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801F49C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801F49CC: jal         0x801DB3A0
    // 0x801F49D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801DB3A0_5972B0(rdram, ctx);
        goto after_0;
    // 0x801F49D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F49D4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F49D8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F49DC: jalr        $t9
    // 0x801F49E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F49E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F49E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F49E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F49EC: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F49F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F49F4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F49F8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F49FC: nop

    // 0x801F4A00: bc1f        L_801F4A34
    if (!c1cs) {
        // 0x801F4A04: nop
    
            goto L_801F4A34;
    }
    // 0x801F4A04: nop

    // 0x801F4A08: jal         0x801E8964
    // 0x801F4A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8964_5A4874(rdram, ctx);
        goto after_2;
    // 0x801F4A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x801F4A10: jal         0x80038BC8
    // 0x801F4A14: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F4A14: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_3:
    // 0x801F4A18: jal         0x80038BC8
    // 0x801F4A1C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F4A1C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_4:
    // 0x801F4A20: lw          $t8, 0x5C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X5C);
    // 0x801F4A24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4A28: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801F4A2C: jal         0x801DACDC
    // 0x801F4A30: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801F4A30: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_5:
L_801F4A34:
    // 0x801F4A34: b           L_801F4A90
    // 0x801F4A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F4A90;
    // 0x801F4A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F4A3C:
    // 0x801F4A3C: jalr        $t9
    // 0x801F4A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x801F4A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801F4A44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4A48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F4A4C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4A50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4A54: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801F4A58: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801F4A5C: nop

    // 0x801F4A60: bc1fl       L_801F4A90
    if (!c1cs) {
        // 0x801F4A64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801F4A90;
    }
    goto skip_0;
    // 0x801F4A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x801F4A68: jal         0x801E8964
    // 0x801F4A6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8964_5A4874(rdram, ctx);
        goto after_7;
    // 0x801F4A6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x801F4A70: jal         0x80038BC8
    // 0x801F4A74: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_80038BC8_397C8(rdram, ctx);
        goto after_8;
    // 0x801F4A74: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_8:
    // 0x801F4A78: jal         0x80038BC8
    // 0x801F4A7C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_9;
    // 0x801F4A7C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_9:
    // 0x801F4A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4A84: jal         0x801DACDC
    // 0x801F4A88: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_10;
    // 0x801F4A88: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_10:
    // 0x801F4A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F4A90:
    // 0x801F4A90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F4A94: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4A98: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801F4A9C: jr          $ra
    // 0x801F4AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F4AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F6770_5B2680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F6774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6778: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F677C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F6780: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801F6784: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x801F6788: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801F678C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6790: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801F6794: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801F6798: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x801F679C: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x801F67A0: nop

    // 0x801F67A4: bc1f        L_801F67E8
    if (!c1cs) {
        // 0x801F67A8: nop
    
            goto L_801F67E8;
    }
    // 0x801F67A8: nop

    // 0x801F67AC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801F67B0: lbu         $t0, 0x2C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2C);
    // 0x801F67B4: bne         $t0, $zero, L_801F67E8
    if (ctx->r8 != 0) {
        // 0x801F67B8: nop
    
            goto L_801F67E8;
    }
    // 0x801F67B8: nop

    // 0x801F67BC: jal         0x801E8964
    // 0x801F67C0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_801E8964_5A4874(rdram, ctx);
        goto after_0;
    // 0x801F67C0: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x801F67C4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F67C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F67CC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801F67D0: lbu         $t1, 0x2C($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2C);
    // 0x801F67D4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801F67D8: jal         0x801DD830
    // 0x801F67DC: sb          $t2, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r10;
    func_801DD830_599740(rdram, ctx);
        goto after_1;
    // 0x801F67DC: sb          $t2, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r10;
    after_1:
    // 0x801F67E0: jal         0x80038BC8
    // 0x801F67E4: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F67E4: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
L_801F67E8:
    // 0x801F67E8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F67EC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F67F0: jalr        $t9
    // 0x801F67F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801F67F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801F67F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F67FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F6800: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801F6804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6808: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F680C: lwc1        $f6, 0x28($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X28);
    // 0x801F6810: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x801F6814: nop

    // 0x801F6818: bc1fl       L_801F682C
    if (!c1cs) {
        // 0x801F681C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F682C;
    }
    goto skip_0;
    // 0x801F681C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F6820: jal         0x801DACDC
    // 0x801F6824: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F6824: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_4:
    // 0x801F6828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F682C:
    // 0x801F682C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F6834: jr          $ra
    // 0x801F6838: nop

    TRACE_RETURN()
    return;
    // 0x801F6838: nop

;}
RECOMP_FUNC void func_801D7818_593728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D781C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D7820: lwc1        $f6, 0xC0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x801D7824: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801D7828: lwc1        $f10, 0xC8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x801D782C: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x801D7830: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D7834: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7838: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D783C: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D7840: nop

    // 0x801D7844: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D7848: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D784C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D7850: jal         0x80003A94
    // 0x801D7854: swc1        $f0, -0x2E24($at)
    MEM_W(-0X2E24, ctx->r1) = ctx->f0.u32l;
    func_80003A94_4694(rdram, ctx);
        goto after_0;
    // 0x801D7854: swc1        $f0, -0x2E24($at)
    MEM_W(-0X2E24, ctx->r1) = ctx->f0.u32l;
    after_0:
    // 0x801D7858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D785C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D7860: jr          $ra
    // 0x801D7864: nop

    TRACE_RETURN()
    return;
    // 0x801D7864: nop

;}
RECOMP_FUNC void func_801DE7AC_59A6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE7AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE7B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE7BC: jal         0x801E3EBC
    // 0x801DE7C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_0;
    // 0x801DE7C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x801DE7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE7C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE7CC: jr          $ra
    // 0x801DE7D0: nop

    TRACE_RETURN()
    return;
    // 0x801DE7D0: nop

;}
RECOMP_FUNC void func_801E0690_59C5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E069C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E06A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E06A4: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801E06A8: jal         0x801DD720
    // 0x801E06AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E06AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x801E06B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E06B4: jal         0x801E708C
    // 0x801E06B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E708C_5A2F9C(rdram, ctx);
        goto after_1;
    // 0x801E06B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x801E06BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E06C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E06C4: jr          $ra
    // 0x801E06C8: nop

    TRACE_RETURN()
    return;
    // 0x801E06C8: nop

;}
RECOMP_FUNC void func_801E4530_5A0440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E4534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4538: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E453C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E4540: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x801E4544: jal         0x801DD720
    // 0x801E4548: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E4548: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E454C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E4550: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E4554: jalr        $t9
    // 0x801E4558: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E4558: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E455C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E4560: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E4564: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4568: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801E456C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E4570: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801E4574: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801E4578: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801E457C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E4580: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4584: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E4588: bc1f        L_801E45A4
    if (!c1cs) {
        // 0x801E458C: nop
    
            goto L_801E45A4;
    }
    // 0x801E458C: nop

    // 0x801E4590: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x801E4594: jal         0x801DACDC
    // 0x801E4598: sb          $t8, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = ctx->r24;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E4598: sb          $t8, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = ctx->r24;
    after_2:
    // 0x801E459C: b           L_801E4614
    // 0x801E45A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E4614;
    // 0x801E45A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E45A4:
    // 0x801E45A4: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801E45A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E45AC: bnel        $t0, $at, L_801E4614
    if (ctx->r8 != ctx->r1) {
        // 0x801E45B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E4614;
    }
    goto skip_0;
    // 0x801E45B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E45B4: lbu         $v0, 0x60($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X60);
    // 0x801E45B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E45BC: beql        $v0, $at, L_801E4614
    if (ctx->r2 == ctx->r1) {
        // 0x801E45C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E4614;
    }
    goto skip_1;
    // 0x801E45C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E45C4: lbu         $v1, 0xCC($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XCC);
    // 0x801E45C8: slti        $at, $v1, 0x5F
    ctx->r1 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
    // 0x801E45CC: bne         $at, $zero, L_801E4610
    if (ctx->r1 != 0) {
        // 0x801E45D0: slti        $at, $v1, 0x70
        ctx->r1 = SIGNED(ctx->r3) < 0X70 ? 1 : 0;
            goto L_801E4610;
    }
    // 0x801E45D0: slti        $at, $v1, 0x70
    ctx->r1 = SIGNED(ctx->r3) < 0X70 ? 1 : 0;
    // 0x801E45D4: beq         $at, $zero, L_801E4610
    if (ctx->r1 == 0) {
        // 0x801E45D8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801E4610;
    }
    // 0x801E45D8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E45DC: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801E45E0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801E45E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801E45E8: lw          $t3, -0x3954($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3954);
    // 0x801E45EC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x801E45F0: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x801E45F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801E45F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E45FC: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x801E4600: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E4604: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801E4608: jal         0x801E8078
    // 0x801E460C: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_3;
    // 0x801E460C: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_3:
L_801E4610:
    // 0x801E4610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E4614:
    // 0x801E4614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E461C: jr          $ra
    // 0x801E4620: nop

    TRACE_RETURN()
    return;
    // 0x801E4620: nop

;}
RECOMP_FUNC void func_801EB65C_5A756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB664: jal         0x801EB6BC
    // 0x801EB668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB674: jr          $ra
    // 0x801EB678: nop

    TRACE_RETURN()
    return;
    // 0x801EB678: nop

;}
RECOMP_FUNC void func_801E2FA4_59EEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2FAC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2FB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2FB4: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801E2FB8: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801E2FBC: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2FC0: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2FC4: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801E2FC8: jal         0x801E8160
    // 0x801E2FCC: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    func_801E8160_5A4070(rdram, ctx);
        goto after_0;
    // 0x801E2FCC: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    after_0:
    // 0x801E2FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2FD8: jr          $ra
    // 0x801E2FDC: nop

    TRACE_RETURN()
    return;
    // 0x801E2FDC: nop

;}
RECOMP_FUNC void func_801EB898_5A77A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB898: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801EB89C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EB8A0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801EB8A4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801EB8A8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801EB8AC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801EB8B0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB8B4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EB8B8: addiu       $t8, $t8, 0x4CCC
    ctx->r24 = ADD32(ctx->r24, 0X4CCC);
    // 0x801EB8BC: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x801EB8C0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EB8C4: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x801EB8C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EB8CC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801EB8D0: lwr         $at, 0x6($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X6);
    // 0x801EB8D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB8D8: swr         $at, 0x6($t7)
    do_swr(rdram, 0X6, ctx->r15, ctx->r1);
    // 0x801EB8DC: lbu         $t2, 0x5F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5F);
    // 0x801EB8E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801EB8E4: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x801EB8E8: jal         0x80034E08
    // 0x801EB8EC: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801EB8EC: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    after_0:
    // 0x801EB8F0: beq         $v0, $zero, L_801EB9A0
    if (ctx->r2 == 0) {
        // 0x801EB8F4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801EB9A0;
    }
    // 0x801EB8F4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801EB8F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB8FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EB900: jal         0x80035EEC
    // 0x801EB904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801EB904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x801EB908: beq         $v0, $zero, L_801EB988
    if (ctx->r2 == 0) {
        // 0x801EB90C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801EB988;
    }
    // 0x801EB90C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EB910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EB914: jal         0x801EB9B4
    // 0x801EB918: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_801EB9B4_5A78C4(rdram, ctx);
        goto after_2;
    // 0x801EB918: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x801EB91C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801EB920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB924: jal         0x801EE3AC
    // 0x801EB928: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_3;
    // 0x801EB928: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x801EB92C: lbu         $t5, 0x2($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2);
    // 0x801EB930: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801EB934: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EB938: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801EB93C: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x801EB940: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801EB944: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB948: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801EB94C: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x801EB950: or          $t4, $a2, $at
    ctx->r12 = ctx->r6 | ctx->r1;
    // 0x801EB954: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x801EB958: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EB95C: lbu         $t9, 0x5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5);
    // 0x801EB960: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EB964: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801EB968: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801EB96C: lbu         $t7, 0x6($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X6);
    // 0x801EB970: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801EB974: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x801EB978: jal         0x801DC554
    // 0x801EB97C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_801DC554_598464(rdram, ctx);
        goto after_4;
    // 0x801EB97C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_4:
    // 0x801EB980: b           L_801EB990
    // 0x801EB984: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_801EB990;
    // 0x801EB984: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_801EB988:
    // 0x801EB988: b           L_801EB9A0
    // 0x801EB98C: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
        goto L_801EB9A0;
    // 0x801EB98C: sb          $t1, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r9;
L_801EB990:
    // 0x801EB990: sw          $t2, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r10;
    // 0x801EB994: lbu         $t3, 0x5F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5F);
    // 0x801EB998: sb          $zero, 0x60($s1)
    MEM_B(0X60, ctx->r17) = 0;
    // 0x801EB99C: sb          $t3, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r11;
L_801EB9A0:
    // 0x801EB9A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EB9A4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801EB9A8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801EB9AC: jr          $ra
    // 0x801EB9B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801EB9B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801DC630_598540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC638: jal         0x80013940
    // 0x801DC63C: nop

    func_80013940_14540(rdram, ctx);
        goto after_0;
    // 0x801DC63C: nop

    after_0:
    // 0x801DC640: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DC644: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801DC648: lui         $v1, 0x8030
    ctx->r3 = S32(0X8030 << 16);
    // 0x801DC64C: addiu       $v1, $v1, 0x4000
    ctx->r3 = ADD32(ctx->r3, 0X4000);
    // 0x801DC650: addiu       $a0, $a0, -0x2DD8
    ctx->r4 = ADD32(ctx->r4, -0X2DD8);
    // 0x801DC654: addiu       $v0, $v0, -0x2DDC
    ctx->r2 = ADD32(ctx->r2, -0X2DDC);
L_801DC658:
    // 0x801DC658: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801DC65C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x801DC660: bne         $at, $zero, L_801DC658
    if (ctx->r1 != 0) {
        // 0x801DC664: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_801DC658;
    }
    // 0x801DC664: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x801DC668: lui         $a0, 0x8030
    ctx->r4 = S32(0X8030 << 16);
    // 0x801DC66C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801DC670: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801DC674: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    // 0x801DC678: addiu       $t1, $t1, -0x2DC8
    ctx->r9 = ADD32(ctx->r9, -0X2DC8);
    // 0x801DC67C: addiu       $t0, $t0, -0x2DD8
    ctx->r8 = ADD32(ctx->r8, -0X2DD8);
    // 0x801DC680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DC684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_801DC688:
    // 0x801DC688: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
L_801DC68C:
    // 0x801DC68C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC690: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_801DC694:
    // 0x801DC694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801DC698: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x801DC69C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x801DC6A0: bne         $v0, $a1, L_801DC694
    if (ctx->r2 != ctx->r5) {
        // 0x801DC6A4: addiu       $a0, $a0, 0x1000
        ctx->r4 = ADD32(ctx->r4, 0X1000);
            goto L_801DC694;
    }
    // 0x801DC6A4: addiu       $a0, $a0, 0x1000
    ctx->r4 = ADD32(ctx->r4, 0X1000);
    // 0x801DC6A8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x801DC6AC: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x801DC6B0: bne         $at, $zero, L_801DC68C
    if (ctx->r1 != 0) {
        // 0x801DC6B4: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_801DC68C;
    }
    // 0x801DC6B4: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x801DC6B8: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x801DC6BC: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x801DC6C0: bnel        $at, $zero, L_801DC688
    if (ctx->r1 != 0) {
        // 0x801DC6C4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_801DC688;
    }
    goto skip_0;
    // 0x801DC6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    skip_0:
    // 0x801DC6C8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DC6CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DC6D0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x801DC6D4: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x801DC6D8: addiu       $a1, $a1, -0x2DDC
    ctx->r5 = ADD32(ctx->r5, -0X2DDC);
    // 0x801DC6DC: addiu       $v0, $v0, -0x2DE0
    ctx->r2 = ADD32(ctx->r2, -0X2DE0);
L_801DC6E0:
    // 0x801DC6E0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801DC6E4: sw          $a0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r4;
    // 0x801DC6E8: bne         $v0, $a1, L_801DC6E0
    if (ctx->r2 != ctx->r5) {
        // 0x801DC6EC: addu        $a0, $a0, $v1
        ctx->r4 = ADD32(ctx->r4, ctx->r3);
            goto L_801DC6E0;
    }
    // 0x801DC6EC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x801DC6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC6F4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DC6F8: addiu       $v0, $v0, 0x7FC0
    ctx->r2 = ADD32(ctx->r2, 0X7FC0);
    // 0x801DC6FC: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x801DC700: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x801DC704: jr          $ra
    // 0x801DC708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801DC708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E2ED0_59EDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2ED8: jal         0x801E2EF0
    // 0x801E2EDC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801E2EF0_59EE00(rdram, ctx);
        goto after_0;
    // 0x801E2EDC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x801E2EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2EE8: jr          $ra
    // 0x801E2EEC: nop

    TRACE_RETURN()
    return;
    // 0x801E2EEC: nop

;}
