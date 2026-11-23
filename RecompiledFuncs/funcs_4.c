#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800192D0_19ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800192D0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800192D4: addiu       $v1, $v1, -0x7AD0
    ctx->r3 = ADD32(ctx->r3, -0X7AD0);
    // 0x800192D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800192DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800192E0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800192E4: addiu       $t6, $t6, -0x7AC7
    ctx->r14 = ADD32(ctx->r14, -0X7AC7);
    // 0x800192E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800192EC: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x800192F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800192F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800192F8: bne         $at, $zero, L_80019308
    if (ctx->r1 != 0) {
        // 0x800192FC: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80019308;
    }
    // 0x800192FC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80019300: b           L_8001930C
    // 0x80019304: addiu       $a3, $v0, -0x40
    ctx->r7 = ADD32(ctx->r2, -0X40);
        goto L_8001930C;
    // 0x80019304: addiu       $a3, $v0, -0x40
    ctx->r7 = ADD32(ctx->r2, -0X40);
L_80019308:
    // 0x80019308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001930C:
    // 0x8001930C: addiu       $t7, $v0, 0x40
    ctx->r15 = ADD32(ctx->r2, 0X40);
    // 0x80019310: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80019314: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80019318: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001931C: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80019320: jal         0x80019ED8
    // 0x80019324: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    func_80019ED8_1AAD8(rdram, ctx);
        goto after_0;
    // 0x80019324: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    after_0:
    // 0x80019328: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001932C: lbu         $t8, -0x7AD3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7AD3);
    // 0x80019330: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80019334: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80019338: beq         $t8, $zero, L_80019390
    if (ctx->r24 == 0) {
        // 0x8001933C: addiu       $v1, $v1, -0x7AFC
        ctx->r3 = ADD32(ctx->r3, -0X7AFC);
            goto L_80019390;
    }
    // 0x8001933C: addiu       $v1, $v1, -0x7AFC
    ctx->r3 = ADD32(ctx->r3, -0X7AFC);
    // 0x80019340: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80019344: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80019348: addiu       $t9, $a1, 0x40
    ctx->r25 = ADD32(ctx->r5, 0X40);
    // 0x8001934C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019350: jal         0x8001F5F8
    // 0x80019354: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    func_8001F5F8_201F8(rdram, ctx);
        goto after_1;
    // 0x80019354: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    after_1:
    // 0x80019358: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8001935C: lw          $v1, -0x3A34($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A34);
    // 0x80019360: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80019364: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x80019368: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8001936C: sw          $t1, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r9;
    // 0x80019370: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80019374: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019378: lui         $t2, 0x104
    ctx->r10 = S32(0X104 << 16);
    // 0x8001937C: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x80019380: and         $t3, $a1, $at
    ctx->r11 = ctx->r5 & ctx->r1;
    // 0x80019384: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80019388: b           L_800193DC
    // 0x8001938C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_800193DC;
    // 0x8001938C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80019390:
    // 0x80019390: beq         $a3, $zero, L_800193A0
    if (ctx->r7 == 0) {
        // 0x80019394: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800193A0;
    }
    // 0x80019394: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80019398: jal         0x8001F2D8
    // 0x8001939C: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    func_8001F2D8_1FED8(rdram, ctx);
        goto after_2;
    // 0x8001939C: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    after_2:
L_800193A0:
    // 0x800193A0: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x800193A4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800193A8: addiu       $t4, $t4, -0x76C8
    ctx->r12 = ADD32(ctx->r12, -0X76C8);
    // 0x800193AC: addiu       $t7, $t5, 0x3C
    ctx->r15 = ADD32(ctx->r13, 0X3C);
L_800193B0:
    // 0x800193B0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800193B4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800193B8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800193BC: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x800193C0: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x800193C4: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x800193C8: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x800193CC: bne         $t5, $t7, L_800193B0
    if (ctx->r13 != ctx->r15) {
        // 0x800193D0: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_800193B0;
    }
    // 0x800193D0: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x800193D4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800193D8: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
L_800193DC:
    // 0x800193DC: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x800193E0: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x800193E4: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x800193E8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800193EC: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x800193F0: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x800193F4: andi        $t6, $t3, 0x4000
    ctx->r14 = ctx->r11 & 0X4000;
    // 0x800193F8: beq         $t6, $zero, L_80019648
    if (ctx->r14 == 0) {
        // 0x800193FC: addiu       $v1, $v1, -0x7AD0
        ctx->r3 = ADD32(ctx->r3, -0X7AD0);
            goto L_80019648;
    }
    // 0x800193FC: addiu       $v1, $v1, -0x7AD0
    ctx->r3 = ADD32(ctx->r3, -0X7AD0);
    // 0x80019400: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80019404: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80019408: addiu       $t7, $a0, 0x40
    ctx->r15 = ADD32(ctx->r4, 0X40);
    // 0x8001940C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80019410: lhu         $t5, 0xC($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XC);
    // 0x80019414: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019418: andi        $t4, $t5, 0x4000
    ctx->r12 = ctx->r13 & 0X4000;
    // 0x8001941C: beq         $t4, $zero, L_80019430
    if (ctx->r12 == 0) {
        // 0x80019420: nop
    
            goto L_80019430;
    }
    // 0x80019420: nop

    // 0x80019424: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80019428: b           L_80019430
    // 0x8001942C: lhu         $v1, -0x7610($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7610);
        goto L_80019430;
    // 0x8001942C: lhu         $v1, -0x7610($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7610);
L_80019430:
    // 0x80019430: lhu         $t8, 0xE($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XE);
    // 0x80019434: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x80019438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001943C: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80019440: beq         $t9, $zero, L_80019454
    if (ctx->r25 == 0) {
        // 0x80019444: nop
    
            goto L_80019454;
    }
    // 0x80019444: nop

    // 0x80019448: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001944C: b           L_80019454
    // 0x80019450: lhu         $t0, -0x760E($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X760E);
        goto L_80019454;
    // 0x80019450: lhu         $t0, -0x760E($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X760E);
L_80019454:
    // 0x80019454: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x80019458: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x8001945C: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x80019460: beq         $t2, $zero, L_80019474
    if (ctx->r10 == 0) {
        // 0x80019464: nop
    
            goto L_80019474;
    }
    // 0x80019464: nop

    // 0x80019468: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001946C: b           L_80019474
    // 0x80019470: lhu         $v0, -0x760C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X760C);
        goto L_80019474;
    // 0x80019470: lhu         $v0, -0x760C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X760C);
L_80019474:
    // 0x80019474: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80019478: jal         0x8001E634
    // 0x8001947C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    func_8001E634_1F234(rdram, ctx);
        goto after_3;
    // 0x8001947C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    after_3:
    // 0x80019480: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x80019484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80019488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001948C: andi        $t3, $v1, 0x4000
    ctx->r11 = ctx->r3 & 0X4000;
    // 0x80019490: bne         $t3, $zero, L_800194A8
    if (ctx->r11 != 0) {
        // 0x80019494: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_800194A8;
    }
    // 0x80019494: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80019498: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x8001949C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x800194A0: beq         $t6, $zero, L_800194C4
    if (ctx->r14 == 0) {
        // 0x800194A4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800194C4;
    }
    // 0x800194A4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_800194A8:
    // 0x800194A8: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x800194AC: lwc1        $f12, -0x7680($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X7680);
    // 0x800194B0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800194B4: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x800194B8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800194BC: b           L_800194D0
    // 0x800194C0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800194D0;
    // 0x800194C0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_800194C4:
    // 0x800194C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800194C8: nop

    // 0x800194CC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_800194D0:
    // 0x800194D0: bnel        $v0, $zero, L_800194EC
    if (ctx->r2 != 0) {
        // 0x800194D4: lhu         $v0, 0xC($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XC);
            goto L_800194EC;
    }
    goto skip_0;
    // 0x800194D4: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    skip_0:
    // 0x800194D8: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x800194DC: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
    // 0x800194E0: beq         $t5, $zero, L_80019504
    if (ctx->r13 == 0) {
        // 0x800194E4: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_80019504;
    }
    // 0x800194E4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x800194E8: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
L_800194EC:
    // 0x800194EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800194F0: lwc1        $f2, -0x767C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X767C);
    // 0x800194F4: andi        $t4, $v0, 0x4000
    ctx->r12 = ctx->r2 & 0X4000;
    // 0x800194F8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x800194FC: b           L_80019508
    // 0x80019500: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80019508;
    // 0x80019500: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80019504:
    // 0x80019504: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_80019508:
    // 0x80019508: bne         $v0, $zero, L_80019514
    if (ctx->r2 != 0) {
        // 0x8001950C: addiu       $s0, $sp, 0x58
        ctx->r16 = ADD32(ctx->r29, 0X58);
            goto L_80019514;
    }
    // 0x8001950C: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x80019510: beq         $v1, $zero, L_80019524
    if (ctx->r3 == 0) {
        // 0x80019514: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_80019524;
    }
L_80019514:
    // 0x80019514: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019518: lwc1        $f0, -0x7678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7678);
    // 0x8001951C: b           L_80019528
    // 0x80019520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80019528;
    // 0x80019520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80019524:
    // 0x80019524: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80019528:
    // 0x80019528: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8001952C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80019530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80019534: jal         0x80043D10
    // 0x80019538: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    guAlignF(rdram, ctx);
        goto after_4;
    // 0x80019538: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8001953C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80019540: lbu         $t8, -0x7AD3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7AD3);
    // 0x80019544: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80019548: addiu       $v1, $v1, -0x7AFC
    ctx->r3 = ADD32(ctx->r3, -0X7AFC);
    // 0x8001954C: beq         $t8, $zero, L_800195F8
    if (ctx->r24 == 0) {
        // 0x80019550: lw          $a0, 0x9C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X9C);
            goto L_800195F8;
    }
    // 0x80019550: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80019554: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80019558: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8001955C: addiu       $t9, $a1, 0x40
    ctx->r25 = ADD32(ctx->r5, 0X40);
    // 0x80019560: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019564: jal         0x8001F5F8
    // 0x80019568: sw          $a1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r5;
    func_8001F5F8_201F8(rdram, ctx);
        goto after_5;
    // 0x80019568: sw          $a1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r5;
    after_5:
    // 0x8001956C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80019570: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x80019574: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80019578: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x8001957C: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80019580: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x80019584: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x80019588: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001958C: lui         $t2, 0x104
    ctx->r10 = S32(0X104 << 16);
    // 0x80019590: ori         $t2, $t2, 0x40
    ctx->r10 = ctx->r10 | 0X40;
    // 0x80019594: and         $t3, $a3, $at
    ctx->r11 = ctx->r7 & ctx->r1;
    // 0x80019598: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001959C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x800195A0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800195A4: lw          $a1, -0x7AFC($v0)
    ctx->r5 = MEM_W(ctx->r2, -0X7AFC);
    // 0x800195A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800195AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800195B0: addiu       $t6, $a1, 0x40
    ctx->r14 = ADD32(ctx->r5, 0X40);
    // 0x800195B4: sw          $t6, -0x7AFC($at)
    MEM_W(-0X7AFC, ctx->r1) = ctx->r14;
    // 0x800195B8: jal         0x8001F5F8
    // 0x800195BC: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    func_8001F5F8_201F8(rdram, ctx);
        goto after_6;
    // 0x800195BC: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    after_6:
    // 0x800195C0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800195C4: lw          $v1, -0x3A34($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A34);
    // 0x800195C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800195CC: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x800195D0: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800195D4: sw          $t7, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r15;
    // 0x800195D8: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x800195DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800195E0: lui         $t5, 0x100
    ctx->r13 = S32(0X100 << 16);
    // 0x800195E4: ori         $t5, $t5, 0x40
    ctx->r13 = ctx->r13 | 0X40;
    // 0x800195E8: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x800195EC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x800195F0: b           L_80019648
    // 0x800195F4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_80019648;
    // 0x800195F4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_800195F8:
    // 0x800195F8: jal         0x8001F2D8
    // 0x800195FC: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    func_8001F2D8_1FED8(rdram, ctx);
        goto after_7;
    // 0x800195FC: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    after_7:
    // 0x80019600: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80019604: jal         0x8001F2D8
    // 0x80019608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001F2D8_1FED8(rdram, ctx);
        goto after_8;
    // 0x80019608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x8001960C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80019610: addiu       $t8, $t8, -0x76C8
    ctx->r24 = ADD32(ctx->r24, -0X76C8);
    // 0x80019614: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x80019618: addiu       $t1, $s0, 0x3C
    ctx->r9 = ADD32(ctx->r16, 0X3C);
L_8001961C:
    // 0x8001961C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80019620: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80019624: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80019628: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8001962C: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80019630: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80019634: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80019638: bne         $t2, $t1, L_8001961C
    if (ctx->r10 != ctx->r9) {
        // 0x8001963C: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8001961C;
    }
    // 0x8001963C: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80019640: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80019644: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
L_80019648:
    // 0x80019648: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001964C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80019650: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80019654: jr          $ra
    // 0x80019658: nop

    TRACE_RETURN()
    return;
    // 0x80019658: nop

;}
RECOMP_FUNC void func_80007970_8570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007970: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80007974: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80007978: bne         $at, $zero, L_80007988
    if (ctx->r1 != 0) {
        // 0x8000797C: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_80007988;
    }
    // 0x8000797C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80007980: jr          $ra
    // 0x80007984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80007984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007988:
    // 0x80007988: blez        $v0, L_800079B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8000798C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800079B4;
    }
    // 0x8000798C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80007990:
    // 0x80007990: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80007994: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x80007998: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x8000799C: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800079A0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800079A4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800079A8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800079AC: bne         $at, $zero, L_80007990
    if (ctx->r1 != 0) {
        // 0x800079B0: sh          $t7, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r15;
            goto L_80007990;
    }
    // 0x800079B0: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
L_800079B4:
    // 0x800079B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800079B8: jr          $ra
    // 0x800079BC: nop

    TRACE_RETURN()
    return;
    // 0x800079BC: nop

;}
RECOMP_FUNC void func_8000E68C_F28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E68C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E694: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000E698: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E69C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000E6A0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8000E6A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000E6A8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8000E6AC: sh          $a0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r4;
    // 0x8000E6B0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E6B4: jal         0x8000E630
    // 0x8000E6B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x8000E6B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x8000E6BC: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x8000E6C0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E6C4: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x8000E6C8: andi        $t7, $a0, 0x3FF
    ctx->r15 = ctx->r4 & 0X3FF;
    // 0x8000E6CC: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x8000E6D0: andi        $a1, $t9, 0xFFFF
    ctx->r5 = ctx->r25 & 0XFFFF;
    // 0x8000E6D4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8000E6D8: jal         0x8000E630
    // 0x8000E6DC: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x8000E6DC: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    after_1:
    // 0x8000E6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E6EC: jr          $ra
    // 0x8000E6F0: nop

    TRACE_RETURN()
    return;
    // 0x8000E6F0: nop

;}
RECOMP_FUNC void func_80024BAC_257AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024BAC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80024BB0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80024BB4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80024BB8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80024BBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80024BC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80024BC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80024BC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80024BCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80024BD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80024BD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80024BD8: lw          $s3, 0xD0($a0)
    ctx->r19 = MEM_W(ctx->r4, 0XD0);
    // 0x80024BDC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80024BE0: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x80024BE4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80024BE8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80024BEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024BF0: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80024BF4: beq         $t7, $zero, L_80024C04
    if (ctx->r15 == 0) {
        // 0x80024BF8: addu        $s4, $s3, $t8
        ctx->r20 = ADD32(ctx->r19, ctx->r24);
            goto L_80024C04;
    }
    // 0x80024BF8: addu        $s4, $s3, $t8
    ctx->r20 = ADD32(ctx->r19, ctx->r24);
    // 0x80024BFC: b           L_80024C04
    // 0x80024C00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024C04;
    // 0x80024C00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80024C04:
    // 0x80024C04: blez        $v0, L_80024F78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80024C08: lui         $t9, 0x8007
        ctx->r25 = S32(0X8007 << 16);
            goto L_80024F78;
    }
    // 0x80024C08: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80024C0C: addiu       $t9, $t9, -0x2E80
    ctx->r25 = ADD32(ctx->r25, -0X2E80);
    // 0x80024C10: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x80024C14: lui         $fp, 0xE700
    ctx->r30 = S32(0XE700 << 16);
    // 0x80024C18: addiu       $s6, $sp, 0xAC
    ctx->r22 = ADD32(ctx->r29, 0XAC);
    // 0x80024C1C: lui         $s0, 0xB100
    ctx->r16 = S32(0XB100 << 16);
    // 0x80024C20: lw          $t5, 0x48($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X48);
L_80024C24:
    // 0x80024C24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80024C28: sw          $t5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r13;
    // 0x80024C2C: lw          $s2, 0x4($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X4);
    // 0x80024C30: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80024C34: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80024C38: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80024C3C: sw          $fp, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r30;
    // 0x80024C40: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80024C44: andi        $t8, $a0, 0x2
    ctx->r24 = ctx->r4 & 0X2;
    // 0x80024C48: beq         $t8, $zero, L_80024C84
    if (ctx->r24 == 0) {
        // 0x80024C4C: andi        $t5, $a0, 0x80
        ctx->r13 = ctx->r4 & 0X80;
            goto L_80024C84;
    }
    // 0x80024C4C: andi        $t5, $a0, 0x80
    ctx->r13 = ctx->r4 & 0X80;
    // 0x80024C50: andi        $t9, $a0, 0x1000
    ctx->r25 = ctx->r4 & 0X1000;
    // 0x80024C54: beq         $t9, $zero, L_80024C74
    if (ctx->r25 == 0) {
        // 0x80024C58: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80024C74;
    }
    // 0x80024C58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024C5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024C60: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80024C64: jal         0x800258D0
    // 0x80024C68: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_800258D0_264D0(rdram, ctx);
        goto after_0;
    // 0x80024C68: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80024C6C: b           L_80024CC8
    // 0x80024C70: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
        goto L_80024CC8;
    // 0x80024C70: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024C74:
    // 0x80024C74: jal         0x80024FAC
    // 0x80024C78: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80024FAC_25BAC(rdram, ctx);
        goto after_1;
    // 0x80024C78: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_1:
    // 0x80024C7C: b           L_80024CC8
    // 0x80024C80: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
        goto L_80024CC8;
    // 0x80024C80: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024C84:
    // 0x80024C84: beq         $t5, $zero, L_80024CA0
    if (ctx->r13 == 0) {
        // 0x80024C88: andi        $t6, $a0, 0x100
        ctx->r14 = ctx->r4 & 0X100;
            goto L_80024CA0;
    }
    // 0x80024C88: andi        $t6, $a0, 0x100
    ctx->r14 = ctx->r4 & 0X100;
    // 0x80024C8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024C90: jal         0x80025398
    // 0x80024C94: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80025398_25F98(rdram, ctx);
        goto after_2;
    // 0x80024C94: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x80024C98: b           L_80024CC8
    // 0x80024C9C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
        goto L_80024CC8;
    // 0x80024C9C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024CA0:
    // 0x80024CA0: beq         $t6, $zero, L_80024CBC
    if (ctx->r14 == 0) {
        // 0x80024CA4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80024CBC;
    }
    // 0x80024CA4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024CA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024CAC: jal         0x8002599C
    // 0x80024CB0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8002599C_2659C(rdram, ctx);
        goto after_3;
    // 0x80024CB0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_3:
    // 0x80024CB4: b           L_80024CC8
    // 0x80024CB8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
        goto L_80024CC8;
    // 0x80024CB8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024CBC:
    // 0x80024CBC: jal         0x80025790
    // 0x80024CC0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80025790_26390(rdram, ctx);
        goto after_4;
    // 0x80024CC0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_4:
    // 0x80024CC4: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024CC8:
    // 0x80024CC8: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x80024CCC: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80024CD0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80024CD4: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x80024CD8: ori         $t5, $t5, 0x60
    ctx->r13 = ctx->r13 | 0X60;
    // 0x80024CDC: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x80024CE0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80024CE4: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80024CE8: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80024CEC: lui         $t8, 0x38A
    ctx->r24 = S32(0X38A << 16);
    // 0x80024CF0: ori         $t8, $t8, 0x10
    ctx->r24 = ctx->r24 | 0X10;
    // 0x80024CF4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80024CF8: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80024CFC: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80024D00: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80024D04: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80024D08: addiu       $v0, $v0, -0x2CF8
    ctx->r2 = ADD32(ctx->r2, -0X2CF8);
    // 0x80024D0C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80024D10: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80024D14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80024D18: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80024D1C: andi        $t5, $a0, 0x800
    ctx->r13 = ctx->r4 & 0X800;
    // 0x80024D20: beq         $t5, $zero, L_80024D70
    if (ctx->r13 == 0) {
        // 0x80024D24: andi        $t6, $a0, 0x180
        ctx->r14 = ctx->r4 & 0X180;
            goto L_80024D70;
    }
    // 0x80024D24: andi        $t6, $a0, 0x180
    ctx->r14 = ctx->r4 & 0X180;
    // 0x80024D28: beq         $t6, $zero, L_80024D50
    if (ctx->r14 == 0) {
        // 0x80024D2C: addu        $v0, $v0, $at
        ctx->r2 = ADD32(ctx->r2, ctx->r1);
            goto L_80024D50;
    }
    // 0x80024D2C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80024D30: lw          $t7, 0x48($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X48);
    // 0x80024D34: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80024D38: lw          $t5, 0x18($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X18);
    // 0x80024D3C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80024D40: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80024D44: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80024D48: b           L_80024D64
    // 0x80024D4C: sw          $t9, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r25;
        goto L_80024D64;
    // 0x80024D4C: sw          $t9, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r25;
L_80024D50:
    // 0x80024D50: lw          $t6, 0x48($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X48);
    // 0x80024D54: lw          $t8, 0x18($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X18);
    // 0x80024D58: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80024D5C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80024D60: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
L_80024D64:
    // 0x80024D64: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80024D68: b           L_80024DD0
    // 0x80024D6C: sw          $v0, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->r2;
        goto L_80024DD0;
    // 0x80024D6C: sw          $v0, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->r2;
L_80024D70:
    // 0x80024D70: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80024D74: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x80024D78: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80024D7C: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x80024D80: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80024D84: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80024D88: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80024D8C: andi        $t9, $t8, 0x180
    ctx->r25 = ctx->r24 & 0X180;
    // 0x80024D90: beql        $t9, $zero, L_80024DB4
    if (ctx->r25 == 0) {
        // 0x80024D94: lw          $t8, 0x48($s4)
        ctx->r24 = MEM_W(ctx->r20, 0X48);
            goto L_80024DB4;
    }
    goto skip_0;
    // 0x80024D94: lw          $t8, 0x48($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X48);
    skip_0:
    // 0x80024D98: lw          $t5, 0x48($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X48);
    // 0x80024D9C: lw          $t7, 0x18($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X18);
    // 0x80024DA0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80024DA4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80024DA8: b           L_80024DBC
    // 0x80024DAC: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
        goto L_80024DBC;
    // 0x80024DAC: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x80024DB0: lw          $t8, 0x48($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X48);
L_80024DB4:
    // 0x80024DB4: lw          $t9, 0x18($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X18);
    // 0x80024DB8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
L_80024DBC:
    // 0x80024DBC: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80024DC0: lw          $t7, 0x18($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X18);
    // 0x80024DC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80024DC8: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80024DCC: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
L_80024DD0:
    // 0x80024DD0: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80024DD4: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80024DD8: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80024DDC: sw          $t8, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->r24;
    // 0x80024DE0: lw          $t9, 0x8($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8);
    // 0x80024DE4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80024DE8: sll         $t6, $v0, 10
    ctx->r14 = S32(ctx->r2 << 10);
    // 0x80024DEC: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80024DF0: blez        $t5, L_80024F10
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80024DF4: or          $t4, $t6, $t8
        ctx->r12 = ctx->r14 | ctx->r24;
            goto L_80024F10;
    }
    // 0x80024DF4: or          $t4, $t6, $t8
    ctx->r12 = ctx->r14 | ctx->r24;
    // 0x80024DF8: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80024DFC: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80024E00: or          $t4, $t9, $at
    ctx->r12 = ctx->r25 | ctx->r1;
    // 0x80024E04: addiu       $t2, $s2, -0x1
    ctx->r10 = ADD32(ctx->r18, -0X1);
    // 0x80024E08: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_80024E0C:
    // 0x80024E0C: sll         $t9, $t3, 4
    ctx->r25 = S32(ctx->r11 << 4);
    // 0x80024E10: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80024E14: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80024E18: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x80024E1C: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80024E20: lw          $t8, 0x40($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X40);
    // 0x80024E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80024E28: sll         $a1, $s2, 1
    ctx->r5 = S32(ctx->r18 << 1);
    // 0x80024E2C: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x80024E30: blez        $t2, L_80024EF4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80024E34: sw          $t5, 0x4($t7)
        MEM_W(0X4, ctx->r15) = ctx->r13;
            goto L_80024EF4;
    }
    // 0x80024E34: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80024E38: addiu       $a3, $a1, 0x2
    ctx->r7 = ADD32(ctx->r5, 0X2);
    // 0x80024E3C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_80024E40:
    // 0x80024E40: andi        $t7, $t1, 0x1
    ctx->r15 = ctx->r9 & 0X1;
    // 0x80024E44: beq         $t7, $zero, L_80024E98
    if (ctx->r15 == 0) {
        // 0x80024E48: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80024E98;
    }
    // 0x80024E48: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80024E4C: lw          $v0, 0xAC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XAC);
    // 0x80024E50: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80024E54: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x80024E58: sll         $t7, $t5, 8
    ctx->r15 = S32(ctx->r13 << 8);
    // 0x80024E5C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80024E60: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80024E64: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024E68: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x80024E6C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x80024E70: or          $t8, $t6, $a0
    ctx->r24 = ctx->r14 | ctx->r4;
    // 0x80024E74: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80024E78: sll         $t5, $a0, 8
    ctx->r13 = S32(ctx->r4 << 8);
    // 0x80024E7C: or          $t7, $v1, $t5
    ctx->r15 = ctx->r3 | ctx->r13;
    // 0x80024E80: or          $t9, $t8, $s0
    ctx->r25 = ctx->r24 | ctx->r16;
    // 0x80024E84: andi        $t6, $t0, 0xFF
    ctx->r14 = ctx->r8 & 0XFF;
    // 0x80024E88: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x80024E8C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80024E90: b           L_80024EE0
    // 0x80024E94: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_80024EE0;
    // 0x80024E94: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80024E98:
    // 0x80024E98: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80024E9C: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80024EA0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80024EA4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80024EA8: sll         $t7, $v0, 8
    ctx->r15 = S32(ctx->r2 << 8);
    // 0x80024EAC: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80024EB0: addiu       $t5, $a0, 0x8
    ctx->r13 = ADD32(ctx->r4, 0X8);
    // 0x80024EB4: sw          $t5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r13;
    // 0x80024EB8: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x80024EBC: or          $t5, $t9, $v1
    ctx->r13 = ctx->r25 | ctx->r3;
    // 0x80024EC0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80024EC4: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80024EC8: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x80024ECC: or          $t7, $t5, $s0
    ctx->r15 = ctx->r13 | ctx->r16;
    // 0x80024ED0: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x80024ED4: or          $t5, $t8, $t9
    ctx->r13 = ctx->r24 | ctx->r25;
    // 0x80024ED8: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x80024EDC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_80024EE0:
    // 0x80024EE0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80024EE4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80024EE8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80024EEC: bne         $t1, $t2, L_80024E40
    if (ctx->r9 != ctx->r10) {
        // 0x80024EF0: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_80024E40;
    }
    // 0x80024EF0: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_80024EF4:
    // 0x80024EF4: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
    // 0x80024EF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80024EFC: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x80024F00: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80024F04: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80024F08: bnel        $at, $zero, L_80024E0C
    if (ctx->r1 != 0) {
        // 0x80024F0C: lw          $t7, 0xAC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XAC);
            goto L_80024E0C;
    }
    goto skip_1;
    // 0x80024F0C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    skip_1:
L_80024F10:
    // 0x80024F10: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80024F14: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x80024F18: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80024F1C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80024F20: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x80024F24: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80024F28: sw          $fp, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r30;
    // 0x80024F2C: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80024F30: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80024F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024F38: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80024F3C: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x80024F40: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80024F44: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80024F48: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x80024F4C: lw          $t9, 0x44($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X44);
    // 0x80024F50: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80024F54: andi        $t7, $t5, 0x400
    ctx->r15 = ctx->r13 & 0X400;
    // 0x80024F58: beq         $t7, $zero, L_80024F68
    if (ctx->r15 == 0) {
        // 0x80024F5C: subu        $a0, $t8, $t9
        ctx->r4 = SUB32(ctx->r24, ctx->r25);
            goto L_80024F68;
    }
    // 0x80024F5C: subu        $a0, $t8, $t9
    ctx->r4 = SUB32(ctx->r24, ctx->r25);
    // 0x80024F60: b           L_80024F68
    // 0x80024F64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80024F68;
    // 0x80024F64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80024F68:
    // 0x80024F68: slt         $at, $s7, $v0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80024F6C: bnel        $at, $zero, L_80024C24
    if (ctx->r1 != 0) {
        // 0x80024F70: lw          $t5, 0x48($s4)
        ctx->r13 = MEM_W(ctx->r20, 0X48);
            goto L_80024C24;
    }
    goto skip_2;
    // 0x80024F70: lw          $t5, 0x48($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X48);
    skip_2:
    // 0x80024F74: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
L_80024F78:
    // 0x80024F78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80024F7C: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80024F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80024F84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80024F88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80024F8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80024F90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80024F94: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80024F98: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80024F9C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80024FA0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80024FA4: jr          $ra
    // 0x80024FA8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    TRACE_RETURN()
    return;
    // 0x80024FA8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_80022DF4_239F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022DF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80022DF8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80022DFC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80022E00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80022E04: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80022E08: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80022E0C: lh          $v0, 0x10($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10);
    // 0x80022E10: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80022E14: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022E18: subu        $t8, $v0, $s1
    ctx->r24 = SUB32(ctx->r2, ctx->r17);
    // 0x80022E1C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80022E20: nop

    // 0x80022E24: addu        $t7, $v1, $a2
    ctx->r15 = ADD32(ctx->r3, ctx->r6);
    // 0x80022E28: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80022E2C: beql        $at, $zero, L_80022E98
    if (ctx->r1 == 0) {
        // 0x80022E30: lw          $t5, 0x44($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X44);
            goto L_80022E98;
    }
    goto skip_0;
    // 0x80022E30: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80022E34: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80022E38: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80022E3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80022E40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80022E44: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80022E48: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80022E4C: jal         0x80022500
    // 0x80022E50: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80022500_23100(rdram, ctx);
        goto after_0;
    // 0x80022E50: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x80022E54: lh          $t0, 0x10($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X10);
    // 0x80022E58: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80022E5C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80022E60: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80022E64: subu        $v0, $t0, $s1
    ctx->r2 = SUB32(ctx->r8, ctx->r17);
    // 0x80022E68: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x80022E6C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80022E70: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80022E74: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80022E78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80022E7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80022E80: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x80022E84: jal         0x80022500
    // 0x80022E88: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80022500_23100(rdram, ctx);
        goto after_1;
    // 0x80022E88: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x80022E8C: b           L_80022EB0
    // 0x80022E90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80022EB0;
    // 0x80022E90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80022E94: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
L_80022E98:
    // 0x80022E98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80022E9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80022EA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80022EA4: jal         0x80022500
    // 0x80022EA8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80022500_23100(rdram, ctx);
        goto after_2;
    // 0x80022EA8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x80022EAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80022EB0:
    // 0x80022EB0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80022EB4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80022EB8: jr          $ra
    // 0x80022EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80022EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alAudioFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047998: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8004799C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800479A0: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x800479A4: lw          $s1, -0x5DD0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5DD0);
    // 0x800479A8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800479AC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x800479B0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800479B4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800479B8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800479BC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800479C0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800479C4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800479C8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800479CC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800479D0: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x800479D4: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x800479D8: sh          $zero, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = 0;
    // 0x800479DC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800479E0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x800479E4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800479E8: bne         $t7, $zero, L_800479FC
    if (ctx->r15 != 0) {
        // 0x800479EC: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_800479FC;
    }
    // 0x800479EC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x800479F0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800479F4: b           L_80047BFC
    // 0x800479F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80047BFC;
    // 0x800479F8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800479FC:
    // 0x800479FC: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80047A00: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80047A04: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80047A08: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80047A0C: beq         $v0, $zero, L_80047A48
    if (ctx->r2 == 0) {
        // 0x80047A10: addiu       $s2, $zero, -0x10
        ctx->r18 = ADD32(0, -0X10);
            goto L_80047A48;
    }
    // 0x80047A10: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x80047A14: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047A18: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
L_80047A1C:
    // 0x80047A1C: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x80047A20: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047A24: beql        $at, $zero, L_80047A40
    if (ctx->r1 == 0) {
        // 0x80047A28: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_80047A40;
    }
    goto skip_0;
    // 0x80047A28: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x80047A2C: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80047A30: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x80047A34: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047A38: subu        $v1, $t1, $a0
    ctx->r3 = SUB32(ctx->r9, ctx->r4);
    // 0x80047A3C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80047A40:
    // 0x80047A40: bnel        $v0, $zero, L_80047A1C
    if (ctx->r2 != 0) {
        // 0x80047A44: lw          $t9, 0x10($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X10);
            goto L_80047A1C;
    }
    goto skip_1;
    // 0x80047A44: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_80047A48:
    // 0x80047A48: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80047A4C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047A50: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x80047A54: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x80047A58: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047A5C: beq         $at, $zero, L_80047B40
    if (ctx->r1 == 0) {
        // 0x80047A60: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80047B40;
    }
    // 0x80047A60: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80047A64: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80047A68: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80047A6C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80047A70: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80047A74: ldc1        $f20, -0x2C78($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X2C78);
L_80047A78:
    // 0x80047A78: lw          $t4, 0x1C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X1C);
    // 0x80047A7C: lui         $s0, 0x7FFF
    ctx->r16 = S32(0X7FFF << 16);
    // 0x80047A80: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x80047A84: and         $t5, $t4, $s2
    ctx->r13 = ctx->r12 & ctx->r18;
    // 0x80047A88: sw          $t5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r13;
    // 0x80047A8C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80047A90: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80047A94: jalr        $t9
    // 0x80047A98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80047A98: nop

    after_0:
    // 0x80047A9C: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x80047AA0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80047AA4: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80047AA8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80047AAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80047AB0: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80047AB4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80047AB8: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80047ABC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80047AC0: div.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f20.d);
    // 0x80047AC4: add.d       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f4.d + ctx->f22.d;
    // 0x80047AC8: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80047ACC: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80047AD0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80047AD4: nop

    // 0x80047AD8: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80047ADC: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x80047AE0: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x80047AE4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80047AE8: beql        $v1, $zero, L_80047B28
    if (ctx->r3 == 0) {
        // 0x80047AEC: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_80047B28;
    }
    goto skip_2;
    // 0x80047AEC: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    skip_2:
    // 0x80047AF0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047AF4: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80047AF8:
    // 0x80047AF8: subu        $t4, $t3, $a0
    ctx->r12 = SUB32(ctx->r11, ctx->r4);
    // 0x80047AFC: slt         $at, $t4, $s0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80047B00: beql        $at, $zero, L_80047B1C
    if (ctx->r1 == 0) {
        // 0x80047B04: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80047B1C;
    }
    goto skip_3;
    // 0x80047B04: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80047B08: sw          $v1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r3;
    // 0x80047B0C: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x80047B10: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047B14: subu        $s0, $t5, $a0
    ctx->r16 = SUB32(ctx->r13, ctx->r4);
    // 0x80047B18: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80047B1C:
    // 0x80047B1C: bnel        $v1, $zero, L_80047AF8
    if (ctx->r3 != 0) {
        // 0x80047B20: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80047AF8;
    }
    goto skip_4;
    // 0x80047B20: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x80047B24: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_80047B28:
    // 0x80047B28: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80047B2C: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x80047B30: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x80047B34: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047B38: bne         $at, $zero, L_80047A78
    if (ctx->r1 != 0) {
        // 0x80047B3C: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_80047A78;
    }
    // 0x80047B3C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80047B40:
    // 0x80047B40: lw          $t8, 0x1C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1C);
    // 0x80047B44: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
    // 0x80047B48: addiu       $s7, $sp, 0xAA
    ctx->r23 = ADD32(ctx->r29, 0XAA);
    // 0x80047B4C: and         $t6, $t8, $s2
    ctx->r14 = ctx->r24 & ctx->r18;
    // 0x80047B50: blez        $s3, L_80047BDC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80047B54: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_80047BDC;
    }
    // 0x80047B54: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x80047B58: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_80047B5C:
    // 0x80047B5C: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80047B60: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80047B64: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80047B68: beq         $at, $zero, L_80047B78
    if (ctx->r1 == 0) {
        // 0x80047B6C: nop
    
            goto L_80047B78;
    }
    // 0x80047B6C: nop

    // 0x80047B70: b           L_80047B78
    // 0x80047B74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80047B78;
    // 0x80047B74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80047B78:
    // 0x80047B78: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80047B7C: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80047B80: lw          $s2, 0x38($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X38);
    // 0x80047B84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80047B88: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80047B8C: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x80047B90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80047B94: jalr        $t9
    // 0x80047B98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80047B98: nop

    after_1:
    // 0x80047B9C: lw          $a3, 0x20($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X20);
    // 0x80047BA0: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x80047BA4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80047BA8: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80047BAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80047BB0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80047BB4: jalr        $t9
    // 0x80047BB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80047BB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80047BBC: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80047BC0: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x80047BC4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80047BC8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80047BCC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80047BD0: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80047BD4: bgtz        $s3, L_80047B5C
    if (SIGNED(ctx->r19) > 0) {
        // 0x80047BD8: sw          $t4, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r12;
            goto L_80047B5C;
    }
    // 0x80047BD8: sw          $t4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r12;
L_80047BDC:
    // 0x80047BDC: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x80047BE0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80047BE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80047BE8: subu        $t7, $s4, $t5
    ctx->r15 = SUB32(ctx->r20, ctx->r13);
    // 0x80047BEC: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80047BF0: jal         0x800478E8
    // 0x80047BF4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    _collectPVoices(rdram, ctx);
        goto after_3;
    // 0x80047BF4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80047BF8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80047BFC:
    // 0x80047BFC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80047C00: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80047C04: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80047C08: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80047C0C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80047C10: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80047C14: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80047C18: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80047C1C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80047C20: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80047C24: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80047C28: jr          $ra
    // 0x80047C2C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x80047C2C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80022500_23100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022500: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80022504: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x80022508: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x8002250C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x80022510: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80022514: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x80022518: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8002251C: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80022520: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80022524: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80022528: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8002252C: beq         $t6, $zero, L_80022540
    if (ctx->r14 == 0) {
        // 0x80022530: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_80022540;
    }
    // 0x80022530: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80022534: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80022538: b           L_80022554
    // 0x8002253C: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
        goto L_80022554;
    // 0x8002253C: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
L_80022540:
    // 0x80022540: beq         $t8, $zero, L_80022550
    if (ctx->r24 == 0) {
        // 0x80022544: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_80022550;
    }
    // 0x80022544: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80022548: b           L_80022554
    // 0x8002254C: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
        goto L_80022554;
    // 0x8002254C: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
L_80022550:
    // 0x80022550: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_80022554:
    // 0x80022554: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80022558: beq         $t6, $zero, L_800226D4
    if (ctx->r14 == 0) {
        // 0x8002255C: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_800226D4;
    }
    // 0x8002255C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80022560: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x80022564: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022568: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8002256C: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x80022570: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022574: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022578: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x8002257C: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80022580: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80022584: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80022588: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8002258C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022590: lw          $t9, 0x38($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X38);
    // 0x80022594: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80022598: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8002259C: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x800225A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800225A4: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x800225A8: subu        $t3, $a0, $s0
    ctx->r11 = SUB32(ctx->r4, ctx->r16);
    // 0x800225AC: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x800225B0: addiu       $t3, $t8, 0x7
    ctx->r11 = ADD32(ctx->r24, 0X7);
    // 0x800225B4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800225B8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800225BC: sra         $t9, $t3, 3
    ctx->r25 = S32(SIGNED(ctx->r11) >> 3);
    // 0x800225C0: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x800225C4: sll         $t3, $t6, 9
    ctx->r11 = S32(ctx->r14 << 9);
    // 0x800225C8: lui         $t9, 0x708
    ctx->r25 = S32(0X708 << 16);
    // 0x800225CC: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x800225D0: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x800225D4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800225D8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800225DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800225E0: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x800225E4: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x800225E8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800225EC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800225F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800225F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800225F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800225FC: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x80022600: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80022604: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022608: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8002260C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80022610: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x80022614: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80022618: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8002261C: or          $t6, $t9, $t1
    ctx->r14 = ctx->r25 | ctx->r9;
    // 0x80022620: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80022624: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80022628: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x8002262C: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80022630: addu        $t2, $s2, $t7
    ctx->r10 = ADD32(ctx->r18, ctx->r15);
    // 0x80022634: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80022638: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8002263C: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80022640: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80022644: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80022648: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8002264C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80022650: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x80022654: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80022658: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002265C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80022660: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80022664: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022668: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002266C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80022670: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022674: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022678: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8002267C: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80022680: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80022684: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80022688: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x8002268C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80022690: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80022694: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022698: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8002269C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800226A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800226A4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800226A8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x800226AC: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800226B0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800226B4: or          $t9, $t8, $t1
    ctx->r25 = ctx->r24 | ctx->r9;
    // 0x800226B8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800226BC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800226C0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800226C4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800226C8: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x800226CC: b           L_800229AC
    // 0x800226D0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
        goto L_800229AC;
    // 0x800226D0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_800226D4:
    // 0x800226D4: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x800226D8: beq         $t6, $zero, L_80022858
    if (ctx->r14 == 0) {
        // 0x800226DC: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_80022858;
    }
    // 0x800226DC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800226E0: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x800226E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800226E8: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x800226EC: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x800226F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800226F4: andi        $t8, $t0, 0x7
    ctx->r24 = ctx->r8 & 0X7;
    // 0x800226F8: sll         $t0, $t8, 21
    ctx->r8 = S32(ctx->r24 << 21);
    // 0x800226FC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022700: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x80022704: or          $t6, $t0, $at
    ctx->r14 = ctx->r8 | ctx->r1;
    // 0x80022708: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8002270C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80022710: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80022714: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80022718: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8002271C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022720: lw          $t9, 0x38($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X38);
    // 0x80022724: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x80022728: or          $t8, $t0, $at
    ctx->r24 = ctx->r8 | ctx->r1;
    // 0x8002272C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022734: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80022738: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8002273C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022740: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022744: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x80022748: subu        $t7, $a0, $s0
    ctx->r15 = SUB32(ctx->r4, ctx->r16);
    // 0x8002274C: addiu       $t6, $t7, 0x7
    ctx->r14 = ADD32(ctx->r15, 0X7);
    // 0x80022750: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80022754: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80022758: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8002275C: sll         $t6, $t7, 9
    ctx->r14 = S32(ctx->r15 << 9);
    // 0x80022760: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80022764: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80022768: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x8002276C: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80022770: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80022774: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022778: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002277C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80022780: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x80022784: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80022788: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002278C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80022790: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80022794: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022798: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x8002279C: sll         $a1, $t7, 12
    ctx->r5 = S32(ctx->r15 << 12);
    // 0x800227A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800227A4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800227A8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800227AC: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x800227B0: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x800227B4: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x800227B8: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x800227BC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800227C0: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x800227C4: addiu       $a2, $a0, -0x1
    ctx->r6 = ADD32(ctx->r4, -0X1);
    // 0x800227C8: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800227CC: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x800227D0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800227D4: addu        $t2, $s2, $t7
    ctx->r10 = ADD32(ctx->r18, ctx->r15);
    // 0x800227D8: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800227DC: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x800227E0: sll         $a2, $t6, 12
    ctx->r6 = S32(ctx->r14 << 12);
    // 0x800227E4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800227E8: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x800227EC: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x800227F0: or          $t7, $t8, $t2
    ctx->r15 = ctx->r24 | ctx->r10;
    // 0x800227F4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800227F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800227FC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80022800: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80022804: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80022808: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002280C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80022810: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80022814: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022818: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x8002281C: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x80022820: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022824: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80022828: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8002282C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022830: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022834: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022838: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x8002283C: or          $t7, $t8, $t1
    ctx->r15 = ctx->r24 | ctx->r9;
    // 0x80022840: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022844: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022848: or          $t9, $a2, $t2
    ctx->r25 = ctx->r6 | ctx->r10;
    // 0x8002284C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022850: b           L_800229AC
    // 0x80022854: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_800229AC;
    // 0x80022854: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80022858:
    // 0x80022858: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002285C: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x80022860: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022864: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x80022868: sll         $a1, $s0, 2
    ctx->r5 = S32(ctx->r16 << 2);
    // 0x8002286C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022870: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022874: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x80022878: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x8002287C: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80022880: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80022884: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80022888: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8002288C: lw          $t8, 0x38($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X38);
    // 0x80022890: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80022894: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022898: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8002289C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800228A0: addu        $a0, $s0, $t9
    ctx->r4 = ADD32(ctx->r16, ctx->r25);
    // 0x800228A4: subu        $t5, $a0, $s0
    ctx->r13 = SUB32(ctx->r4, ctx->r16);
    // 0x800228A8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800228AC: addiu       $t5, $t6, 0x7
    ctx->r13 = ADD32(ctx->r14, 0X7);
    // 0x800228B0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800228B4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800228B8: sra         $t8, $t5, 3
    ctx->r24 = S32(SIGNED(ctx->r13) >> 3);
    // 0x800228BC: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x800228C0: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x800228C4: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x800228C8: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800228CC: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x800228D0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800228D4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800228D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800228DC: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x800228E0: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x800228E4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800228E8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800228EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800228F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800228F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800228F8: sll         $a1, $t8, 12
    ctx->r5 = S32(ctx->r24 << 12);
    // 0x800228FC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80022900: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022904: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022908: or          $t6, $a1, $at
    ctx->r14 = ctx->r5 | ctx->r1;
    // 0x8002290C: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x80022910: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80022914: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022918: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8002291C: addiu       $a2, $a0, -0x1
    ctx->r6 = ADD32(ctx->r4, -0X1);
    // 0x80022920: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80022924: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x80022928: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8002292C: addu        $t2, $s2, $t8
    ctx->r10 = ADD32(ctx->r18, ctx->r24);
    // 0x80022930: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80022934: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80022938: sll         $a2, $t9, 12
    ctx->r6 = S32(ctx->r25 << 12);
    // 0x8002293C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80022940: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80022944: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x80022948: or          $t8, $t6, $t2
    ctx->r24 = ctx->r14 | ctx->r10;
    // 0x8002294C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022950: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022954: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80022958: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8002295C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022960: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022964: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80022968: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002296C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80022970: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022974: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x80022978: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8002297C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022980: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80022984: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80022988: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8002298C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022990: or          $t6, $a1, $at
    ctx->r14 = ctx->r5 | ctx->r1;
    // 0x80022994: or          $t8, $t6, $t1
    ctx->r24 = ctx->r14 | ctx->r9;
    // 0x80022998: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8002299C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800229A0: or          $t7, $a2, $t2
    ctx->r15 = ctx->r6 | ctx->r10;
    // 0x800229A4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800229A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_800229AC:
    // 0x800229AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800229B0: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x800229B4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800229B8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800229BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800229C0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x800229C4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800229C8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800229CC: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x800229D0: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x800229D4: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x800229D8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800229DC: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x800229E0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800229E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800229E8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800229EC: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x800229F0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800229F4: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x800229F8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800229FC: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80022A00: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80022A04: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80022A08: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80022A0C: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80022A10: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80022A14: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022A18: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022A1C: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x80022A20: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80022A24: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80022A28: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80022A2C: sll         $t8, $s2, 5
    ctx->r24 = S32(ctx->r18 << 5);
    // 0x80022A30: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80022A34: sll         $t7, $s0, 21
    ctx->r15 = S32(ctx->r16 << 21);
    // 0x80022A38: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80022A3C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80022A40: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022A44: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x80022A48: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x80022A4C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022A50: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80022A54: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x80022A58: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022A5C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80022A60: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80022A64: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x80022A68: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80022A6C: jr          $ra
    // 0x80022A70: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80022A70: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80035D8C_3698C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035D8C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80035D90: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80035D94: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80035D98: addiu       $t9, $t9, -0x2540
    ctx->r25 = ADD32(ctx->r25, -0X2540);
    // 0x80035D9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80035DA0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80035DA4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80035DA8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80035DAC: sll         $t3, $t7, 1
    ctx->r11 = S32(ctx->r15 << 1);
    // 0x80035DB0: beql        $a1, $zero, L_80035DF4
    if (ctx->r5 == 0) {
        // 0x80035DB4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80035DF4;
    }
    goto skip_0;
    // 0x80035DB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80035DB8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80035DBC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80035DC0: addiu       $t4, $t4, -0x2528
    ctx->r12 = ADD32(ctx->r12, -0X2528);
    // 0x80035DC4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80035DC8: lbu         $t1, 0x4($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X4);
    // 0x80035DCC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80035DD0: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
    // 0x80035DD4: andi        $t2, $t1, 0x7F
    ctx->r10 = ctx->r9 & 0X7F;
    // 0x80035DD8: sb          $t2, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r10;
    // 0x80035DDC: lh          $t5, 0x0($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X0);
    // 0x80035DE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80035DE4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80035DE8: jr          $ra
    // 0x80035DEC: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80035DEC: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x80035DF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035DF4:
    // 0x80035DF4: jr          $ra
    // 0x80035DF8: nop

    TRACE_RETURN()
    return;
    // 0x80035DF8: nop

;}
RECOMP_FUNC void func_80024670_25270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024670: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80024674: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80024678: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002467C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80024680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024684: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80024688: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8002468C: jal         0x800148F0
    // 0x80024690: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80024690: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80024694: beq         $v0, $zero, L_800246A8
    if (ctx->r2 == 0) {
        // 0x80024698: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800246A8;
    }
    // 0x80024698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002469C: jal         0x800246BC
    // 0x800246A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800246BC_252BC(rdram, ctx);
        goto after_1;
    // 0x800246A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800246A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_800246A8:
    // 0x800246A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800246AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800246B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800246B4: jr          $ra
    // 0x800246B8: nop

    TRACE_RETURN()
    return;
    // 0x800246B8: nop

;}
RECOMP_FUNC void func_80037470_38070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037470: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80037474: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80037478: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003747C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037480: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80037484: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80037488: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003748C: sb          $t7, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r15;
    // 0x80037490: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80037494: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80037498: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003749C: addiu       $t9, $t6, 0x239
    ctx->r25 = ADD32(ctx->r14, 0X239);
    // 0x800374A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800374A4: jr          $ra
    // 0x800374A8: sh          $t9, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x800374A8: sh          $t9, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_8003987C_3A47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003987C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80039880: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80039884: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80039888: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003988C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80039890: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80039894: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80039898: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003989C: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x800398A0: lbu         $v0, -0x1D54($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1D54);
    // 0x800398A4: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x800398A8: addiu       $t6, $t6, -0xED0
    ctx->r14 = ADD32(ctx->r14, -0XED0);
    // 0x800398AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800398B0: addu        $s3, $v0, $t6
    ctx->r19 = ADD32(ctx->r2, ctx->r14);
    // 0x800398B4: lbu         $t7, 0x0($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X0);
    // 0x800398B8: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800398BC: addiu       $s0, $s0, 0x1730
    ctx->r16 = ADD32(ctx->r16, 0X1730);
    // 0x800398C0: blez        $t7, L_8003992C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800398C4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8003992C;
    }
    // 0x800398C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800398C8: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x800398CC: addiu       $t9, $t9, -0xEC8
    ctx->r25 = ADD32(ctx->r25, -0XEC8);
    // 0x800398D0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800398D4: lui         $s5, 0x8007
    ctx->r21 = S32(0X8007 << 16);
    // 0x800398D8: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x800398DC: addiu       $s4, $s4, -0x1BAC
    ctx->r20 = ADD32(ctx->r20, -0X1BAC);
    // 0x800398E0: addiu       $s5, $s5, -0x1D28
    ctx->r21 = ADD32(ctx->r21, -0X1D28);
    // 0x800398E4: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
L_800398E8:
    // 0x800398E8: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x800398EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800398F0: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x800398F4: andi        $t0, $v1, 0xFFFF
    ctx->r8 = ctx->r3 & 0XFFFF;
    // 0x800398F8: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x800398FC: addu        $t1, $s5, $v0
    ctx->r9 = ADD32(ctx->r21, ctx->r2);
    // 0x80039900: addu        $t2, $s4, $v0
    ctx->r10 = ADD32(ctx->r20, ctx->r2);
    // 0x80039904: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80039908: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8003990C: jal         0x80005394
    // 0x80039910: subu        $a2, $t3, $a0
    ctx->r6 = SUB32(ctx->r11, ctx->r4);
    func_80005394_5F94(rdram, ctx);
        goto after_0;
    // 0x80039910: subu        $a2, $t3, $a0
    ctx->r6 = SUB32(ctx->r11, ctx->r4);
    after_0:
    // 0x80039914: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
    // 0x80039918: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003991C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80039920: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80039924: bne         $at, $zero, L_800398E8
    if (ctx->r1 != 0) {
        // 0x80039928: addiu       $s0, $s0, 0x1800
        ctx->r16 = ADD32(ctx->r16, 0X1800);
            goto L_800398E8;
    }
    // 0x80039928: addiu       $s0, $s0, 0x1800
    ctx->r16 = ADD32(ctx->r16, 0X1800);
L_8003992C:
    // 0x8003992C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80039930: addiu       $s0, $s0, 0xA24
    ctx->r16 = ADD32(ctx->r16, 0XA24);
    // 0x80039934: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x80039938: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003993C: jal         0x8003996C
    // 0x80039940: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8003996C_3A56C(rdram, ctx);
        goto after_1;
    // 0x80039940: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80039944: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80039948: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003994C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80039950: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80039954: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80039958: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003995C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80039960: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80039964: jr          $ra
    // 0x80039968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80039968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800161F0_16DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800161F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800161F4: lw          $t7, -0x7E8C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7E8C);
    // 0x800161F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800161FC: lw          $t6, -0x7B74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B74);
    // 0x80016200: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016204: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80016208: mflo        $t8
    ctx->r24 = lo;
    // 0x8001620C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80016210: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80016214: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80016218: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x8001621C: andi        $t3, $v1, 0x3E
    ctx->r11 = ctx->r3 & 0X3E;
    // 0x80016220: andi        $t7, $v1, 0x7C0
    ctx->r15 = ctx->r3 & 0X7C0;
    // 0x80016224: sra         $t8, $t7, 6
    ctx->r24 = S32(SIGNED(ctx->r15) >> 6);
    // 0x80016228: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8001622C: andi        $t0, $v1, 0xF800
    ctx->r8 = ctx->r3 & 0XF800;
    // 0x80016230: sra         $t1, $t0, 11
    ctx->r9 = S32(SIGNED(ctx->r8) >> 11);
    // 0x80016234: sll         $t5, $t4, 11
    ctx->r13 = S32(ctx->r12 << 11);
    // 0x80016238: sll         $t6, $t8, 6
    ctx->r14 = S32(ctx->r24 << 6);
    // 0x8001623C: or          $t9, $t5, $t6
    ctx->r25 = ctx->r13 | ctx->r14;
    // 0x80016240: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80016244: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x80016248: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x8001624C: jr          $ra
    // 0x80016250: or          $v0, $t3, $t4
    ctx->r2 = ctx->r11 | ctx->r12;
    TRACE_RETURN()
    return;
    // 0x80016250: or          $v0, $t3, $t4
    ctx->r2 = ctx->r11 | ctx->r12;
;}
RECOMP_FUNC void func_800127FC_133FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800127FC: lwc1        $f4, 0x80($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80012800: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80012804: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80012808: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8001280C: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80012810: jr          $ra
    // 0x80012814: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80012814: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8003F694_40294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F69C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F6A0: lw          $a1, 0x7740($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7740);
    // 0x8003F6A4: jal         0x80037C9C
    // 0x8003F6A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037C9C_3889C(rdram, ctx);
        goto after_0;
    // 0x8003F6A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8003F6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F6B4: jr          $ra
    // 0x8003F6B8: nop

    TRACE_RETURN()
    return;
    // 0x8003F6B8: nop

;}
RECOMP_FUNC void func_8002412C_24D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002412C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80024130: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80024134: addiu       $v0, $v0, -0x3994
    ctx->r2 = ADD32(ctx->r2, -0X3994);
    // 0x80024138: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
L_8002413C:
    // 0x8002413C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80024140: sb          $zero, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = 0;
    // 0x80024144: sb          $zero, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = 0;
    // 0x80024148: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x8002414C: bne         $v1, $v0, L_8002413C
    if (ctx->r3 != ctx->r2) {
        // 0x80024150: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_8002413C;
    }
    // 0x80024150: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x80024154: jr          $ra
    // 0x80024158: nop

    TRACE_RETURN()
    return;
    // 0x80024158: nop

;}
RECOMP_FUNC void alSaveParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050870: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80050874: beq         $a1, $at, L_80050890
    if (ctx->r5 == ctx->r1) {
        // 0x80050878: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80050890;
    }
    // 0x80050878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005087C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80050880: beql        $a1, $at, L_8005089C
    if (ctx->r5 == ctx->r1) {
        // 0x80050884: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_8005089C;
    }
    goto skip_0;
    // 0x80050884: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x80050888: jr          $ra
    // 0x8005088C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8005088C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80050890:
    // 0x80050890: jr          $ra
    // 0x80050894: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80050894: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80050898: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_8005089C:
    // 0x8005089C: jr          $ra
    // 0x800508A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800508A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800127B8_133B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800127B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800127BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800127C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800127C4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800127C8: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x800127CC: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x800127D0: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x800127D4: swc1        $f12, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f12.u32l;
    // 0x800127D8: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x800127DC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800127E0: jr          $ra
    // 0x800127E4: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800127E4: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80038BC8_397C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038BD0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80038BD4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80038BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038BE0: jal         0x80038C30
    // 0x80038BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x80038BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038BF0: jr          $ra
    // 0x80038BF4: nop

    TRACE_RETURN()
    return;
    // 0x80038BF4: nop

;}
RECOMP_FUNC void __sinf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800417F0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x800417F4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x800417F8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800417FC: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80041800: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x80041804: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x80041808: beq         $at, $zero, L_80041870
    if (ctx->r1 == 0) {
        // 0x8004180C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80041870;
    }
    // 0x8004180C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80041810: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x80041814: bne         $at, $zero, L_80041868
    if (ctx->r1 != 0) {
        // 0x80041818: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_80041868;
    }
    // 0x80041818: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8004181C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80041820: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80041824: addiu       $v1, $v1, -0x2DF0
    ctx->r3 = ADD32(ctx->r3, -0X2DF0);
    // 0x80041828: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8004182C: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x80041830: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x80041834: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x80041838: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8004183C: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x80041840: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x80041844: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80041848: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8004184C: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x80041850: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x80041854: nop

    // 0x80041858: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x8004185C: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x80041860: jr          $ra
    // 0x80041864: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    TRACE_RETURN()
    return;
    // 0x80041864: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_80041868:
    // 0x80041868: jr          $ra
    // 0x8004186C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    TRACE_RETURN()
    return;
    // 0x8004186C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_80041870:
    // 0x80041870: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x80041874: beq         $at, $zero, L_80041988
    if (ctx->r1 == 0) {
        // 0x80041878: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_80041988;
    }
    // 0x80041878: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8004187C: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80041880: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041884: ldc1        $f10, -0x2DC8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2DC8);
    // 0x80041888: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8004188C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80041890: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x80041894: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80041898: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8004189C: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x800418A0: nop

    // 0x800418A4: bc1fl       L_800418D4
    if (!c1cs) {
        // 0x800418A8: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_800418D4;
    }
    goto skip_0;
    // 0x800418A8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x800418AC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800418B0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800418B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800418B8: nop

    // 0x800418BC: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x800418C0: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x800418C4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800418C8: b           L_800418F0
    // 0x800418CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_800418F0;
    // 0x800418CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x800418D0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_800418D4:
    // 0x800418D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800418D8: nop

    // 0x800418DC: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x800418E0: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x800418E4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800418E8: nop

    // 0x800418EC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_800418F0:
    // 0x800418F0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800418F4: ldc1        $f18, -0x2DC0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2DC0);
    // 0x800418F8: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x800418FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041900: ldc1        $f6, -0x2DB8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2DB8);
    // 0x80041904: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80041908: addiu       $v1, $v1, -0x2DF0
    ctx->r3 = ADD32(ctx->r3, -0X2DF0);
    // 0x8004190C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80041910: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x80041914: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x80041918: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8004191C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80041920: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x80041924: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x80041928: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x8004192C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80041930: nop

    // 0x80041934: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x80041938: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8004193C: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x80041940: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x80041944: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x80041948: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8004194C: bne         $t9, $zero, L_8004196C
    if (ctx->r25 != 0) {
        // 0x80041950: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_8004196C;
    }
    // 0x80041950: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x80041954: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x80041958: nop

    // 0x8004195C: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x80041960: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x80041964: jr          $ra
    // 0x80041968: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    TRACE_RETURN()
    return;
    // 0x80041968: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8004196C:
    // 0x8004196C: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x80041970: nop

    // 0x80041974: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x80041978: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x8004197C: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x80041980: jr          $ra
    // 0x80041984: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80041984: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80041988:
    // 0x80041988: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x8004198C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041990: bc1t        L_800419A4
    if (c1cs) {
        // 0x80041994: nop
    
            goto L_800419A4;
    }
    // 0x80041994: nop

    // 0x80041998: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004199C: jr          $ra
    // 0x800419A0: lwc1        $f0, -0x2BA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2BA0);
    TRACE_RETURN()
    return;
    // 0x800419A0: lwc1        $f0, -0x2BA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2BA0);
L_800419A4:
    // 0x800419A4: lwc1        $f0, -0x2DB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DB0);
    // 0x800419A8: jr          $ra
    // 0x800419AC: nop

    TRACE_RETURN()
    return;
    // 0x800419AC: nop

;}
RECOMP_FUNC void func_80002D94_3994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002D9C: jal         0x80020730
    // 0x80002DA0: nop

    func_80020730_21330(rdram, ctx);
        goto after_0;
    // 0x80002DA0: nop

    after_0:
    // 0x80002DA4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002DA8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002DAC: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80002DB0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002DB4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80002DB8: lbu         $t6, -0x522B($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522B);
    // 0x80002DBC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80002DC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002DC4: beql        $t6, $zero, L_80002DD8
    if (ctx->r14 == 0) {
        // 0x80002DC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002DD8;
    }
    goto skip_0;
    // 0x80002DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002DCC: jal         0x80003728
    // 0x80002DD0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_80003728_4328(rdram, ctx);
        goto after_1;
    // 0x80002DD0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_1:
    // 0x80002DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002DD8:
    // 0x80002DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002DDC: jr          $ra
    // 0x80002DE0: nop

    TRACE_RETURN()
    return;
    // 0x80002DE0: nop

;}
RECOMP_FUNC void func_8002CC94_2D894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CC94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002CC98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002CC9C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CCA0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8002CCA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8002CCA8: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8002CCAC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8002CCB0: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CCB4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8002CCB8: bc1fl       L_8002CD00
    if (!c1cs) {
        // 0x8002CCBC: c.eq.s      $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
            goto L_8002CD00;
    }
    goto skip_0;
    // 0x8002CCBC: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    skip_0:
    // 0x8002CCC0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002CCC4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8002CCC8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8002CCCC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8002CCD0: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002CCD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002CCD8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x8002CCDC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8002CCE0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8002CCE4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8002CCE8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8002CCEC: jal         0x8002D924
    // 0x8002CCF0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_8002D924_2E524(rdram, ctx);
        goto after_0;
    // 0x8002CCF0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8002CCF4: b           L_8002CDA4
    // 0x8002CCF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8002CDA4;
    // 0x8002CCF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8002CCFC: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
L_8002CD00:
    // 0x8002CD00: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8002CD04: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8002CD08: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8002CD0C: bc1f        L_8002CD68
    if (!c1cs) {
        // 0x8002CD10: lwc1        $f6, 0x48($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
            goto L_8002CD68;
    }
    // 0x8002CD10: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CD14: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8002CD18: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8002CD1C: bc1fl       L_8002CD6C
    if (!c1cs) {
        // 0x8002CD20: lwc1        $f2, 0x4C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_8002CD6C;
    }
    goto skip_1;
    // 0x8002CD20: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x8002CD24: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002CD28: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8002CD2C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8002CD30: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8002CD34: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002CD38: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8002CD3C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8002CD40: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8002CD44: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x8002CD48: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8002CD4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8002CD50: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002CD54: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8002CD58: jal         0x8002E2E8
    // 0x8002CD5C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_8002E2E8_2EEE8(rdram, ctx);
        goto after_1;
    // 0x8002CD5C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8002CD60: b           L_8002CDA4
    // 0x8002CD64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8002CDA4;
    // 0x8002CD64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8002CD68:
    // 0x8002CD68: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
L_8002CD6C:
    // 0x8002CD6C: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002CD70: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8002CD74: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8002CD78: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8002CD7C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002CD80: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8002CD84: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x8002CD88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8002CD8C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8002CD90: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8002CD94: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8002CD98: jal         0x8002CDB0
    // 0x8002CD9C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_8002CDB0_2D9B0(rdram, ctx);
        goto after_2;
    // 0x8002CD9C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x8002CDA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8002CDA4:
    // 0x8002CDA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002CDA8: jr          $ra
    // 0x8002CDAC: nop

    TRACE_RETURN()
    return;
    // 0x8002CDAC: nop

;}
RECOMP_FUNC void func_80023C14_24814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023C14: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80023C18: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x80023C1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023C24: lw          $t6, 0x3F0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3F0);
    // 0x80023C28: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023C2C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023C30: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023C34: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80023C38: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023C3C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80023C40: lw          $a1, 0x1B0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1B0);
    // 0x80023C44: jal         0x800148F0
    // 0x80023C48: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80023C48: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80023C4C: beq         $v0, $zero, L_80023CB8
    if (ctx->r2 == 0) {
        // 0x80023C50: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80023CB8;
    }
    // 0x80023C50: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80023C54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80023C58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80023C5C: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
L_80023C60:
    // 0x80023C60: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x80023C64: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80023C68: addiu       $t3, $v1, 0x2
    ctx->r11 = ADD32(ctx->r3, 0X2);
    // 0x80023C6C: addiu       $t5, $v1, 0x3
    ctx->r13 = ADD32(ctx->r3, 0X3);
    // 0x80023C70: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80023C74: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x80023C78: sb          $t3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r11;
    // 0x80023C7C: sb          $t1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r9;
    // 0x80023C80: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x80023C84: bne         $v1, $a1, L_80023C60
    if (ctx->r3 != ctx->r5) {
        // 0x80023C88: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80023C60;
    }
    // 0x80023C88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80023C8C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80023C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023C94: jal         0x80023610
    // 0x80023C98: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80023610_24210(rdram, ctx);
        goto after_1;
    // 0x80023C98: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x80023C9C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023CA0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023CA4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023CA8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023CAC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80023CB0: jal         0x80014B74
    // 0x80023CB4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x80023CB4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_80023CB8:
    // 0x80023CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80023CC0: jr          $ra
    // 0x80023CC4: nop

    TRACE_RETURN()
    return;
    // 0x80023CC4: nop

;}
RECOMP_FUNC void guLookAtHiliteF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800432B0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800432B4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800432B8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800432BC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x800432C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800432C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800432C8: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x800432CC: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x800432D0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800432D4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800432D8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800432DC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800432E0: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x800432E4: jal         0x80043BA0
    // 0x800432E8: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x800432E8: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    after_0:
    // 0x800432EC: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x800432F0: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x800432F4: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x800432F8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x800432FC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80043300: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80043304: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80043308: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004330C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80043310: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x80043314: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80043318: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x8004331C: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    // 0x80043320: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80043324: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80043328: jal         0x800417E0
    // 0x8004332C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x8004332C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80043330: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80043334: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80043338: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004333C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80043340: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80043344: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80043348: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8004334C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80043350: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80043354: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80043358: nop

    // 0x8004335C: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80043360: nop

    // 0x80043364: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80043368: nop

    // 0x8004336C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80043370: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x80043374: mul.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x80043378: sub.s       $f22, $f8, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004337C: mul.s       $f8, $f10, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x80043380: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80043384: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80043388: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004338C: mul.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80043390: nop

    // 0x80043394: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x80043398: sub.s       $f26, $f8, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004339C: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x800433A0: nop

    // 0x800433A4: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x800433A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800433AC: mul.s       $f10, $f26, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x800433B0: jal         0x800417E0
    // 0x800433B4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x800433B4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x800433B8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800433BC: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x800433C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800433C4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800433C8: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800433CC: div.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f20.d, ctx->f4.d);
    // 0x800433D0: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x800433D4: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x800433D8: nop

    // 0x800433DC: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x800433E0: nop

    // 0x800433E4: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x800433E8: nop

    // 0x800433EC: mul.s       $f8, $f30, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f26.fl);
    // 0x800433F0: nop

    // 0x800433F4: mul.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x800433F8: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x800433FC: mul.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80043400: nop

    // 0x80043404: mul.s       $f8, $f28, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f26.fl);
    // 0x80043408: swc1        $f14, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f14.u32l;
    // 0x8004340C: mul.s       $f4, $f28, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f24.fl);
    // 0x80043410: nop

    // 0x80043414: mul.s       $f10, $f30, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f22.fl);
    // 0x80043418: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004341C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80043420: nop

    // 0x80043424: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80043428: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x8004342C: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80043430: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80043434: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043438: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x8004343C: jal         0x800417E0
    // 0x80043440: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x80043440: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    after_3:
    // 0x80043444: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80043448: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8004344C: div.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f20.d, ctx->f6.d);
    // 0x80043450: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80043454: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80043458: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8004345C: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80043460: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80043464: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80043468: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8004346C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80043470: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x80043474: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80043478: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x8004347C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80043480: nop

    // 0x80043484: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80043488: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x8004348C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80043490: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043494: jal         0x800417E0
    // 0x80043498: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_4;
    // 0x80043498: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    after_4:
    // 0x8004349C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x800434A0: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x800434A4: div.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f20.d, ctx->f6.d);
    // 0x800434A8: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x800434AC: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x800434B0: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800434B4: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x800434B8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800434BC: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x800434C0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800434C4: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x800434C8: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x800434CC: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x800434D0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800434D4: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x800434D8: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x800434DC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800434E0: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800434E4: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x800434E8: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800434EC: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x800434F0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800434F4: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x800434F8: jal         0x800417E0
    // 0x800434FC: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_5;
    // 0x800434FC: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_5:
    // 0x80043500: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80043504: ldc1        $f4, -0x2CB0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2CB0);
    // 0x80043508: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8004350C: lw          $v1, 0xE4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE4);
    // 0x80043510: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x80043514: lw          $v0, 0xE0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE0);
    // 0x80043518: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x8004351C: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x80043520: bc1fl       L_8004360C
    if (!c1cs) {
        // 0x80043524: sll         $t3, $v0, 1
        ctx->r11 = S32(ctx->r2 << 1);
            goto L_8004360C;
    }
    goto skip_0;
    // 0x80043524: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    skip_0:
    // 0x80043528: div.d       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f20.d, ctx->f2.d);
    // 0x8004352C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80043530: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80043534: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80043538: lw          $v0, 0xE0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE0);
    // 0x8004353C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80043540: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x80043544: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80043548: lw          $v1, 0xE4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE4);
    // 0x8004354C: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x80043550: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x80043554: mul.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80043558: nop

    // 0x8004355C: mul.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80043560: nop

    // 0x80043564: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80043568: nop

    // 0x8004356C: mul.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x80043570: nop

    // 0x80043574: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80043578: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8004357C: mul.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x80043580: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80043584: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80043588: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004358C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80043590: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80043594: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80043598: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004359C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800435A0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800435A4: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800435A8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800435AC: nop

    // 0x800435B0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800435B4: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x800435B8: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x800435BC: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800435C0: nop

    // 0x800435C4: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x800435C8: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800435CC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800435D0: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800435D4: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800435D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800435DC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800435E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800435E4: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800435E8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800435EC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800435F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800435F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800435F8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800435FC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80043600: b           L_80043614
    // 0x80043604: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
        goto L_80043614;
    // 0x80043604: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x80043608: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
L_8004360C:
    // 0x8004360C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80043610: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
L_80043614:
    // 0x80043614: lwc1        $f0, 0xD4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80043618: lwc1        $f2, 0xD8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8004361C: lwc1        $f14, 0xDC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80043620: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80043624: nop

    // 0x80043628: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004362C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043630: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80043634: jal         0x800417E0
    // 0x80043638: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    _nsqrtf(rdram, ctx);
        goto after_6;
    // 0x80043638: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_6:
    // 0x8004363C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80043640: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80043644: div.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f20.d, ctx->f6.d);
    // 0x80043648: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8004364C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80043650: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80043654: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80043658: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8004365C: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x80043660: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80043664: add.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x80043668: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x8004366C: add.s       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x80043670: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80043674: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x80043678: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8004367C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043680: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80043684: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80043688: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8004368C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x80043690: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80043694: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80043698: jal         0x800417E0
    // 0x8004369C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_7;
    // 0x8004369C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    after_7:
    // 0x800436A0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800436A4: ldc1        $f10, -0x2CA8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2CA8);
    // 0x800436A8: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x800436AC: lw          $v0, 0xE0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE0);
    // 0x800436B0: c.lt.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d < ctx->f2.d;
    // 0x800436B4: lw          $v1, 0xE4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE4);
    // 0x800436B8: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x800436BC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800436C0: bc1f        L_800437A0
    if (!c1cs) {
        // 0x800436C4: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_800437A0;
    }
    // 0x800436C4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x800436C8: div.d       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f20.d, ctx->f2.d);
    // 0x800436CC: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800436D0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800436D4: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800436D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800436DC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800436E0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x800436E4: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x800436E8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x800436EC: mul.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800436F0: nop

    // 0x800436F4: mul.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800436F8: nop

    // 0x800436FC: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80043700: nop

    // 0x80043704: mul.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x80043708: nop

    // 0x8004370C: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80043710: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80043714: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x80043718: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8004371C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80043720: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043724: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80043728: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004372C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80043730: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80043734: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80043738: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004373C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80043740: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80043744: nop

    // 0x80043748: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8004374C: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80043750: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80043754: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80043758: nop

    // 0x8004375C: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80043760: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80043764: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043768: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8004376C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80043770: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80043774: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004377C: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80043780: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80043784: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80043788: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004378C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043790: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80043794: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80043798: b           L_800437A8
    // 0x8004379C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
        goto L_800437A8;
    // 0x8004379C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
L_800437A0:
    // 0x800437A0: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x800437A4: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
L_800437A8:
    // 0x800437A8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800437AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800437B0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x800437B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800437B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800437BC: mul.s       $f12, $f22, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x800437C0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800437C4: nop

    // 0x800437C8: bc1fl       L_800437DC
    if (!c1cs) {
        // 0x800437CC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_800437DC;
    }
    goto skip_1;
    // 0x800437CC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_1:
    // 0x800437D0: b           L_800437DC
    // 0x800437D4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_800437DC;
    // 0x800437D4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800437D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800437DC:
    // 0x800437DC: mul.s       $f12, $f24, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f14.fl);
    // 0x800437E0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800437E4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800437E8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800437EC: bc1f        L_800437FC
    if (!c1cs) {
        // 0x800437F0: sb          $t6, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r14;
            goto L_800437FC;
    }
    // 0x800437F0: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
    // 0x800437F4: b           L_80043800
    // 0x800437F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80043800;
    // 0x800437F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800437FC:
    // 0x800437FC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80043800:
    // 0x80043800: mul.s       $f12, $f26, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f14.fl);
    // 0x80043804: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80043808: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8004380C: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80043810: bc1f        L_80043820
    if (!c1cs) {
        // 0x80043814: sb          $t0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r8;
            goto L_80043820;
    }
    // 0x80043814: sb          $t0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r8;
    // 0x80043818: b           L_80043824
    // 0x8004381C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80043824;
    // 0x8004381C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80043820:
    // 0x80043820: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80043824:
    // 0x80043824: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80043828: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8004382C: nop

    // 0x80043830: sb          $t9, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r25;
    // 0x80043834: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80043838: mul.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8004383C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80043840: nop

    // 0x80043844: bc1fl       L_80043858
    if (!c1cs) {
        // 0x80043848: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_80043858;
    }
    goto skip_2;
    // 0x80043848: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x8004384C: b           L_80043858
    // 0x80043850: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80043858;
    // 0x80043850: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80043854: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80043858:
    // 0x80043858: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8004385C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80043860: nop

    // 0x80043864: sb          $t4, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r12;
    // 0x80043868: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8004386C: mul.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80043870: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80043874: nop

    // 0x80043878: bc1fl       L_8004388C
    if (!c1cs) {
        // 0x8004387C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8004388C;
    }
    goto skip_3;
    // 0x8004387C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x80043880: b           L_8004388C
    // 0x80043884: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_8004388C;
    // 0x80043884: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80043888: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8004388C:
    // 0x8004388C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80043890: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80043894: nop

    // 0x80043898: sb          $t8, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r24;
    // 0x8004389C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800438A0: mul.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800438A4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800438A8: nop

    // 0x800438AC: bc1fl       L_800438C0
    if (!c1cs) {
        // 0x800438B0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_800438C0;
    }
    goto skip_4;
    // 0x800438B0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_4:
    // 0x800438B4: b           L_800438C0
    // 0x800438B8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_800438C0;
    // 0x800438B8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800438BC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800438C0:
    // 0x800438C0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800438C4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800438C8: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x800438CC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x800438D0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800438D4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x800438D8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x800438DC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x800438E0: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x800438E4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x800438E8: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x800438EC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
    // 0x800438F0: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x800438F4: sb          $zero, 0x13($s0)
    MEM_B(0X13, ctx->r16) = 0;
    // 0x800438F8: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x800438FC: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x80043900: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x80043904: sb          $zero, 0x17($s0)
    MEM_B(0X17, ctx->r16) = 0;
    // 0x80043908: sb          $t2, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r10;
    // 0x8004390C: swc1        $f22, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f22.u32l;
    // 0x80043910: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80043914: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80043918: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8004391C: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80043920: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80043924: lwc1        $f12, 0xC0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80043928: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x8004392C: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80043930: swc1        $f24, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f24.u32l;
    // 0x80043934: mul.s       $f6, $f14, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x80043938: swc1        $f26, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f26.u32l;
    // 0x8004393C: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80043940: swc1        $f12, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f12.u32l;
    // 0x80043944: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x80043948: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8004394C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80043950: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80043954: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80043958: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004395C: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80043960: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x80043964: swc1        $f4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f4.u32l;
    // 0x80043968: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8004396C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80043970: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80043974: mul.s       $f8, $f18, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x80043978: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x8004397C: mul.s       $f4, $f16, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x80043980: swc1        $f6, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f6.u32l;
    // 0x80043984: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80043988: swc1        $f28, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f28.u32l;
    // 0x8004398C: swc1        $f30, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f30.u32l;
    // 0x80043990: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80043994: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x80043998: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8004399C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x800439A0: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x800439A4: swc1        $f2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f2.u32l;
    // 0x800439A8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800439AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800439B0: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x800439B4: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
    // 0x800439B8: swc1        $f4, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f4.u32l;
    // 0x800439BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800439C0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x800439C4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x800439C8: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x800439CC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x800439D0: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x800439D4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800439D8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800439DC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800439E0: jr          $ra
    // 0x800439E4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x800439E4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800114B8_120B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800114B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800114BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800114C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800114C4: beq         $a1, $zero, L_80011550
    if (ctx->r5 == 0) {
        // 0x800114C8: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_80011550;
    }
    // 0x800114C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800114CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800114D0: beq         $a1, $at, L_80011510
    if (ctx->r5 == ctx->r1) {
        // 0x800114D4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80011510;
    }
    // 0x800114D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800114D8: jal         0x80035EEC
    // 0x800114DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x800114DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800114E0: bne         $v0, $zero, L_800114F0
    if (ctx->r2 != 0) {
        // 0x800114E4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_800114F0;
    }
    // 0x800114E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800114E8: b           L_800115A8
    // 0x800114EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800115A8;
    // 0x800114EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800114F0:
    // 0x800114F0: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x800114F4: addiu       $t7, $t7, 0x37A0
    ctx->r15 = ADD32(ctx->r15, 0X37A0);
    // 0x800114F8: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x800114FC: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80011500: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x80011504: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x80011508: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8001150C: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
L_80011510:
    // 0x80011510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80011514: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80011518: jal         0x80035EEC
    // 0x8001151C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x8001151C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80011520: bne         $v0, $zero, L_80011530
    if (ctx->r2 != 0) {
        // 0x80011524: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_80011530;
    }
    // 0x80011524: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80011528: b           L_800115A8
    // 0x8001152C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800115A8;
    // 0x8001152C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011530:
    // 0x80011530: lui         $t1, 0x8006
    ctx->r9 = S32(0X8006 << 16);
    // 0x80011534: addiu       $t1, $t1, 0x37A8
    ctx->r9 = ADD32(ctx->r9, 0X37A8);
    // 0x80011538: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x8001153C: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80011540: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x80011544: sw          $t2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r10;
    // 0x80011548: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001154C: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
L_80011550:
    // 0x80011550: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80011554: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80011558: jal         0x80035EEC
    // 0x8001155C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x8001155C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80011560: bne         $v0, $zero, L_80011570
    if (ctx->r2 != 0) {
        // 0x80011564: lui         $v1, 0x8006
        ctx->r3 = S32(0X8006 << 16);
            goto L_80011570;
    }
    // 0x80011564: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80011568: b           L_800115A8
    // 0x8001156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800115A8;
    // 0x8001156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011570:
    // 0x80011570: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80011574: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80011578: addiu       $v1, $v1, 0x3740
    ctx->r3 = ADD32(ctx->r3, 0X3740);
    // 0x8001157C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80011580: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80011584: addu        $t5, $v1, $at
    ctx->r13 = ADD32(ctx->r3, ctx->r1);
    // 0x80011588: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    // 0x8001158C: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x80011590: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80011594: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80011598: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8001159C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800115A0: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
    // 0x800115A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800115A8:
    // 0x800115A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800115AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800115B0: jr          $ra
    // 0x800115B4: nop

    TRACE_RETURN()
    return;
    // 0x800115B4: nop

;}
RECOMP_FUNC void func_8003AE04_3BA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AE04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AE08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AE0C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AE10: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AE14: lbu         $t6, 0x7D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7D);
    // 0x8003AE18: beql        $t6, $zero, L_8003AE34
    if (ctx->r14 == 0) {
        // 0x8003AE1C: lhu         $t7, 0x9A($v0)
        ctx->r15 = MEM_HU(ctx->r2, 0X9A);
            goto L_8003AE34;
    }
    goto skip_0;
    // 0x8003AE1C: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
    skip_0:
    // 0x8003AE20: jal         0x8003C6B8
    // 0x8003AE24: nop

    func_8003C6B8_3D2B8(rdram, ctx);
        goto after_0;
    // 0x8003AE24: nop

    after_0:
    // 0x8003AE28: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AE2C: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AE30: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
L_8003AE34:
    // 0x8003AE34: beql        $t7, $zero, L_8003AE50
    if (ctx->r15 == 0) {
        // 0x8003AE38: lbu         $t8, 0x6($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X6);
            goto L_8003AE50;
    }
    goto skip_1;
    // 0x8003AE38: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    skip_1:
    // 0x8003AE3C: jal         0x8003C184
    // 0x8003AE40: nop

    func_8003C184_3CD84(rdram, ctx);
        goto after_1;
    // 0x8003AE40: nop

    after_1:
    // 0x8003AE44: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AE48: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AE4C: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
L_8003AE50:
    // 0x8003AE50: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8003AE54: beql        $t9, $zero, L_8003AE70
    if (ctx->r25 == 0) {
        // 0x8003AE58: lhu         $t0, 0x4C($v0)
        ctx->r8 = MEM_HU(ctx->r2, 0X4C);
            goto L_8003AE70;
    }
    goto skip_2;
    // 0x8003AE58: lhu         $t0, 0x4C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X4C);
    skip_2:
    // 0x8003AE5C: jal         0x8003AEB0
    // 0x8003AE60: nop

    func_8003AEB0_3BAB0(rdram, ctx);
        goto after_2;
    // 0x8003AE60: nop

    after_2:
    // 0x8003AE64: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AE68: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AE6C: lhu         $t0, 0x4C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X4C);
L_8003AE70:
    // 0x8003AE70: beql        $t0, $zero, L_8003AE8C
    if (ctx->r8 == 0) {
        // 0x8003AE74: lbu         $t1, 0x6($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X6);
            goto L_8003AE8C;
    }
    goto skip_3;
    // 0x8003AE74: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    skip_3:
    // 0x8003AE78: jal         0x8003B394
    // 0x8003AE7C: nop

    func_8003B394_3BF94(rdram, ctx);
        goto after_3;
    // 0x8003AE7C: nop

    after_3:
    // 0x8003AE80: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AE84: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003AE88: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
L_8003AE8C:
    // 0x8003AE8C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8003AE90: beql        $t2, $zero, L_8003AEA4
    if (ctx->r10 == 0) {
        // 0x8003AE94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003AEA4;
    }
    goto skip_4;
    // 0x8003AE94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8003AE98: jal         0x8003AFB0
    // 0x8003AE9C: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_4;
    // 0x8003AE9C: nop

    after_4:
    // 0x8003AEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AEA4:
    // 0x8003AEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AEA8: jr          $ra
    // 0x8003AEAC: nop

    TRACE_RETURN()
    return;
    // 0x8003AEAC: nop

;}
RECOMP_FUNC void func_8003C620_3D220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C624: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C628: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003C62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C630: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C634: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x8003C638: bne         $t6, $zero, L_8003C6A0
    if (ctx->r14 != 0) {
        // 0x8003C63C: nop
    
            goto L_8003C6A0;
    }
    // 0x8003C63C: nop

    // 0x8003C640: lbu         $v1, 0x7C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X7C);
    // 0x8003C644: beq         $v1, $zero, L_8003C654
    if (ctx->r3 == 0) {
        // 0x8003C648: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_8003C654;
    }
    // 0x8003C648: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8003C64C: b           L_8003C6A8
    // 0x8003C650: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
        goto L_8003C6A8;
    // 0x8003C650: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
L_8003C654:
    // 0x8003C654: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8003C658: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8003C65C: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x8003C660: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C664: lbu         $t0, 0x7D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7D);
    // 0x8003C668: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8003C66C: sb          $t1, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = ctx->r9;
    // 0x8003C670: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C674: lbu         $t2, 0x7D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X7D);
    // 0x8003C678: beql        $t2, $zero, L_8003C698
    if (ctx->r10 == 0) {
        // 0x8003C67C: lw          $t6, 0x80($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X80);
            goto L_8003C698;
    }
    goto skip_0;
    // 0x8003C67C: lw          $t6, 0x80($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X80);
    skip_0:
    // 0x8003C680: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x8003C684: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x8003C688: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003C68C: b           L_8003C6A8
    // 0x8003C690: sw          $t5, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r13;
        goto L_8003C6A8;
    // 0x8003C690: sw          $t5, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r13;
    // 0x8003C694: lw          $t6, 0x80($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X80);
L_8003C698:
    // 0x8003C698: b           L_8003C6A8
    // 0x8003C69C: sw          $t6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r14;
        goto L_8003C6A8;
    // 0x8003C69C: sw          $t6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r14;
L_8003C6A0:
    // 0x8003C6A0: jal         0x8003C860
    // 0x8003C6A4: nop

    func_8003C860_3D460(rdram, ctx);
        goto after_0;
    // 0x8003C6A4: nop

    after_0:
L_8003C6A8:
    // 0x8003C6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C6B0: jr          $ra
    // 0x8003C6B4: nop

    TRACE_RETURN()
    return;
    // 0x8003C6B4: nop

;}
RECOMP_FUNC void func_800115E0_121E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800115E0: beq         $a0, $zero, L_800115F0
    if (ctx->r4 == 0) {
        // 0x800115E4: addiu       $v0, $a0, 0x80
        ctx->r2 = ADD32(ctx->r4, 0X80);
            goto L_800115F0;
    }
    // 0x800115E4: addiu       $v0, $a0, 0x80
    ctx->r2 = ADD32(ctx->r4, 0X80);
    // 0x800115E8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x800115EC: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
L_800115F0:
    // 0x800115F0: jr          $ra
    // 0x800115F4: nop

    TRACE_RETURN()
    return;
    // 0x800115F4: nop

;}
RECOMP_FUNC void func_80004AF8_56F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004AF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80004AFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80004B00: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80004B04: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80004B08: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80004B0C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80004B10: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80004B14: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80004B18: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80004B1C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80004B20: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80004B24: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80004B28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80004B2C: jal         0x80040110
    // 0x80004B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80004B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80004B34: lui         $s4, 0x8016
    ctx->r20 = S32(0X8016 << 16);
    // 0x80004B38: addiu       $s4, $s4, 0x71A0
    ctx->r20 = ADD32(ctx->r20, 0X71A0);
    // 0x80004B3C: jal         0x8004042C
    // 0x80004B40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    osContGetReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80004B40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80004B44: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80004B48: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80004B4C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80004B50: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80004B54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80004B58: addiu       $s5, $zero, 0x6
    ctx->r21 = ADD32(0, 0X6);
    // 0x80004B5C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80004B60:
    // 0x80004B60: multu       $s2, $v1
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004B64: mflo        $t6
    ctx->r14 = lo;
    // 0x80004B68: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80004B6C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80004B70: lhu         $t9, 0x3078($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X3078);
    // 0x80004B74: bnel        $t9, $zero, L_80004B98
    if (ctx->r25 != 0) {
        // 0x80004B78: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80004B98;
    }
    goto skip_0;
    // 0x80004B78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x80004B7C: multu       $s2, $s5
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004B80: mflo        $t2
    ctx->r10 = lo;
    // 0x80004B84: addu        $a0, $s4, $t2
    ctx->r4 = ADD32(ctx->r20, ctx->r10);
    // 0x80004B88: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80004B8C: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80004B90: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80004B94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80004B98:
    // 0x80004B98: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x80004B9C: sra         $s2, $t3, 16
    ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80004BA0: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80004BA4: bne         $at, $zero, L_80004B60
    if (ctx->r1 != 0) {
        // 0x80004BA8: nop
    
            goto L_80004B60;
    }
    // 0x80004BA8: nop

    // 0x80004BAC: lhu         $t5, 0x0($s4)
    ctx->r13 = MEM_HU(ctx->r20, 0X0);
    // 0x80004BB0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004BB4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80004BB8: lbu         $t7, 0x71BC($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X71BC);
    // 0x80004BBC: sh          $t5, 0x71B8($at)
    MEM_H(0X71B8, ctx->r1) = ctx->r13;
    // 0x80004BC0: lhu         $t6, 0x6($s4)
    ctx->r14 = MEM_HU(ctx->r20, 0X6);
    // 0x80004BC4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80004BC8: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x80004BCC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004BD0: addiu       $s0, $s0, 0x7D38
    ctx->r16 = ADD32(ctx->r16, 0X7D38);
    // 0x80004BD4: addiu       $s1, $s1, 0x7DB0
    ctx->r17 = ADD32(ctx->r17, 0X7DB0);
    // 0x80004BD8: beq         $t7, $zero, L_80004BF4
    if (ctx->r15 == 0) {
        // 0x80004BDC: sh          $t6, 0x71BA($at)
        MEM_H(0X71BA, ctx->r1) = ctx->r14;
            goto L_80004BF4;
    }
    // 0x80004BDC: sh          $t6, 0x71BA($at)
    MEM_H(0X71BA, ctx->r1) = ctx->r14;
    // 0x80004BE0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80004BE4: addiu       $t1, $t1, 0x71BD
    ctx->r9 = ADD32(ctx->r9, 0X71BD);
    // 0x80004BE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80004BEC: b           L_80004BFC
    // 0x80004BF0: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
        goto L_80004BFC;
    // 0x80004BF0: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
L_80004BF4:
    // 0x80004BF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80004BF8: sb          $zero, 0x71BD($at)
    MEM_B(0X71BD, ctx->r1) = 0;
L_80004BFC:
    // 0x80004BFC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80004C00: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x80004C04: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80004C08: addiu       $s3, $s3, -0x3340
    ctx->r19 = ADD32(ctx->r19, -0X3340);
    // 0x80004C0C: ldc1        $f20, -0x5690($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X5690);
    // 0x80004C10: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80004C14:
    // 0x80004C14: beq         $s2, $zero, L_80004C34
    if (ctx->r18 == 0) {
        // 0x80004C18: sll         $t2, $s2, 2
        ctx->r10 = S32(ctx->r18 << 2);
            goto L_80004C34;
    }
    // 0x80004C18: sll         $t2, $s2, 2
    ctx->r10 = S32(ctx->r18 << 2);
    // 0x80004C1C: multu       $s2, $s5
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004C20: mflo        $t9
    ctx->r25 = lo;
    // 0x80004C24: addu        $a0, $s4, $t9
    ctx->r4 = ADD32(ctx->r20, ctx->r25);
    // 0x80004C28: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80004C2C: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80004C30: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
L_80004C34:
    // 0x80004C34: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80004C38: addiu       $t3, $t3, 0x71E0
    ctx->r11 = ADD32(ctx->r11, 0X71E0);
    // 0x80004C3C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x80004C40: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80004C44: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x80004C48: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x80004C4C: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80004C50: beq         $a1, $zero, L_80004CC4
    if (ctx->r5 == 0) {
        // 0x80004C54: addu        $a0, $s4, $t4
        ctx->r4 = ADD32(ctx->r20, ctx->r12);
            goto L_80004CC4;
    }
    // 0x80004C54: addu        $a0, $s4, $t4
    ctx->r4 = ADD32(ctx->r20, ctx->r12);
    // 0x80004C58: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80004C5C: addiu       $t6, $t6, 0x71C0
    ctx->r14 = ADD32(ctx->r14, 0X71C0);
    // 0x80004C60: sll         $t5, $s2, 3
    ctx->r13 = S32(ctx->r18 << 3);
    // 0x80004C64: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80004C68: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80004C6C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80004C70: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80004C74: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x80004C78: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x80004C7C: addiu       $t4, $a3, -0x1
    ctx->r12 = ADD32(ctx->r7, -0X1);
    // 0x80004C80: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x80004C84: lb          $t2, 0x2($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X2);
    // 0x80004C88: sb          $t2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r10;
    // 0x80004C8C: lb          $t3, 0x3($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X3);
    // 0x80004C90: beq         $a3, $zero, L_80004CC0
    if (ctx->r7 == 0) {
        // 0x80004C94: sb          $t3, 0x3($a0)
        MEM_B(0X3, ctx->r4) = ctx->r11;
            goto L_80004CC0;
    }
    // 0x80004C94: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x80004C98: bne         $t4, $zero, L_80004CC4
    if (ctx->r12 != 0) {
        // 0x80004C9C: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_80004CC4;
    }
    // 0x80004C9C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80004CA0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80004CA4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80004CA8: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x80004CAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80004CB0: addu        $t2, $a1, $t9
    ctx->r10 = ADD32(ctx->r5, ctx->r25);
    // 0x80004CB4: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80004CB8: b           L_80004CC4
    // 0x80004CBC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
        goto L_80004CC4;
    // 0x80004CBC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_80004CC0:
    // 0x80004CC0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_80004CC4:
    // 0x80004CC4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80004CC8: lhu         $t4, 0x2($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2);
    // 0x80004CCC: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80004CD0: xor         $t5, $t4, $v0
    ctx->r13 = ctx->r12 ^ ctx->r2;
    // 0x80004CD4: and         $t6, $t5, $v0
    ctx->r14 = ctx->r13 & ctx->r2;
    // 0x80004CD8: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
    // 0x80004CDC: lb          $t7, 0x2($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2);
    // 0x80004CE0: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x80004CE4: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    // 0x80004CE8: lb          $t8, 0x3($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3);
    // 0x80004CEC: bgez        $a1, L_80004D0C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80004CF0: sh          $t8, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r24;
            goto L_80004D0C;
    }
    // 0x80004CF0: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80004CF4: addiu       $t9, $a1, 0x7
    ctx->r25 = ADD32(ctx->r5, 0X7);
    // 0x80004CF8: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x80004CFC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x80004D00: slt         $t2, $zero, $v0
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80004D04: b           L_80004D20
    // 0x80004D08: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80004D20;
    // 0x80004D08: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80004D0C:
    // 0x80004D0C: addiu       $t3, $a1, -0x7
    ctx->r11 = ADD32(ctx->r5, -0X7);
    // 0x80004D10: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
    // 0x80004D14: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x80004D18: slti        $t4, $v0, 0x0
    ctx->r12 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x80004D1C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80004D20:
    // 0x80004D20: beq         $v0, $zero, L_80004D2C
    if (ctx->r2 == 0) {
        // 0x80004D24: addiu       $t2, $zero, 0xB4
        ctx->r10 = ADD32(0, 0XB4);
            goto L_80004D2C;
    }
    // 0x80004D24: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x80004D28: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80004D2C:
    // 0x80004D2C: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80004D30: bgez        $v1, L_80004D50
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80004D34: addiu       $t7, $v1, -0x7
        ctx->r15 = ADD32(ctx->r3, -0X7);
            goto L_80004D50;
    }
    // 0x80004D34: addiu       $t7, $v1, -0x7
    ctx->r15 = ADD32(ctx->r3, -0X7);
    // 0x80004D38: addiu       $t5, $v1, 0x7
    ctx->r13 = ADD32(ctx->r3, 0X7);
    // 0x80004D3C: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    // 0x80004D40: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x80004D44: slt         $t6, $zero, $v0
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80004D48: b           L_80004D60
    // 0x80004D4C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80004D60;
    // 0x80004D4C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80004D50:
    // 0x80004D50: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x80004D54: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x80004D58: slti        $t8, $v0, 0x0
    ctx->r24 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x80004D5C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80004D60:
    // 0x80004D60: beql        $v0, $zero, L_80004D70
    if (ctx->r2 == 0) {
        // 0x80004D64: lh          $a1, 0x6($s0)
        ctx->r5 = MEM_H(ctx->r16, 0X6);
            goto L_80004D70;
    }
    goto skip_1;
    // 0x80004D64: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    skip_1:
    // 0x80004D68: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80004D6C: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
L_80004D70:
    // 0x80004D70: bne         $a1, $zero, L_80004D94
    if (ctx->r5 != 0) {
        // 0x80004D74: subu        $t3, $t2, $a1
        ctx->r11 = SUB32(ctx->r10, ctx->r5);
            goto L_80004D94;
    }
    // 0x80004D74: subu        $t3, $t2, $a1
    ctx->r11 = SUB32(ctx->r10, ctx->r5);
    // 0x80004D78: lh          $t9, 0x8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X8);
    // 0x80004D7C: bnel        $t9, $zero, L_80004D98
    if (ctx->r25 != 0) {
        // 0x80004D80: mtc1        $t3, $f4
        ctx->f4.u32l = ctx->r11;
            goto L_80004D98;
    }
    goto skip_2;
    // 0x80004D80: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    skip_2:
    // 0x80004D84: swc1        $f22, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f22.u32l;
    // 0x80004D88: swc1        $f22, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f22.u32l;
    // 0x80004D8C: b           L_80004F14
    // 0x80004D90: swc1        $f22, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f22.u32l;
        goto L_80004F14;
    // 0x80004D90: swc1        $f22, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f22.u32l;
L_80004D94:
    // 0x80004D94: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
L_80004D98:
    // 0x80004D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80004D9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80004DA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80004DA4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80004DA8: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80004DAC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80004DB0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80004DB4: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80004DB8: nop

    // 0x80004DBC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80004DC0: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80004DC4: nop

    // 0x80004DC8: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80004DCC: beql        $a0, $zero, L_80004E1C
    if (ctx->r4 == 0) {
        // 0x80004DD0: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_80004E1C;
    }
    goto skip_3;
    // 0x80004DD0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x80004DD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80004DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80004DDC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80004DE0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80004DE4: nop

    // 0x80004DE8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80004DEC: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80004DF0: nop

    // 0x80004DF4: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80004DF8: bne         $a0, $zero, L_80004E10
    if (ctx->r4 != 0) {
        // 0x80004DFC: nop
    
            goto L_80004E10;
    }
    // 0x80004DFC: nop

    // 0x80004E00: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80004E04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80004E08: b           L_80004E28
    // 0x80004E0C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80004E28;
    // 0x80004E0C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80004E10:
    // 0x80004E10: b           L_80004E28
    // 0x80004E14: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80004E28;
    // 0x80004E14: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80004E18: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_80004E1C:
    // 0x80004E1C: nop

    // 0x80004E20: bltz        $a0, L_80004E10
    if (SIGNED(ctx->r4) < 0) {
        // 0x80004E24: nop
    
            goto L_80004E10;
    }
    // 0x80004E24: nop

L_80004E28:
    // 0x80004E28: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x80004E2C: addiu       $t6, $t5, -0x100
    ctx->r14 = ADD32(ctx->r13, -0X100);
    // 0x80004E30: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80004E34: jal         0x80003E10
    // 0x80004E38: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x80004E38: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    after_2:
    // 0x80004E3C: lh          $t8, 0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8);
    // 0x80004E40: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x80004E44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80004E48: subu        $t2, $t9, $t8
    ctx->r10 = SUB32(ctx->r25, ctx->r24);
    // 0x80004E4C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80004E50: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x80004E54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80004E58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80004E5C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80004E60: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80004E64: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80004E68: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80004E6C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80004E70: nop

    // 0x80004E74: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80004E78: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80004E7C: nop

    // 0x80004E80: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80004E84: beql        $a0, $zero, L_80004ED4
    if (ctx->r4 == 0) {
        // 0x80004E88: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_80004ED4;
    }
    goto skip_4;
    // 0x80004E88: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x80004E8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80004E90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80004E94: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80004E98: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80004E9C: nop

    // 0x80004EA0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80004EA4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80004EA8: nop

    // 0x80004EAC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80004EB0: bne         $a0, $zero, L_80004EC8
    if (ctx->r4 != 0) {
        // 0x80004EB4: nop
    
            goto L_80004EC8;
    }
    // 0x80004EB4: nop

    // 0x80004EB8: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80004EBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80004EC0: b           L_80004EE0
    // 0x80004EC4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80004EE0;
    // 0x80004EC4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80004EC8:
    // 0x80004EC8: b           L_80004EE0
    // 0x80004ECC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80004EE0;
    // 0x80004ECC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80004ED0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_80004ED4:
    // 0x80004ED4: nop

    // 0x80004ED8: bltz        $a0, L_80004EC8
    if (SIGNED(ctx->r4) < 0) {
        // 0x80004EDC: nop
    
            goto L_80004EC8;
    }
    // 0x80004EDC: nop

L_80004EE0:
    // 0x80004EE0: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x80004EE4: addiu       $t5, $t4, -0x100
    ctx->r13 = ADD32(ctx->r12, -0X100);
    // 0x80004EE8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80004EEC: jal         0x80003E10
    // 0x80004EF0: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x80004EF0: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    after_3:
    // 0x80004EF4: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80004EF8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x80004EFC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80004F00: nop

    // 0x80004F04: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80004F08: jal         0x800417E0
    // 0x80004F0C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_4;
    // 0x80004F0C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_4:
    // 0x80004F10: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_80004F14:
    // 0x80004F14: addiu       $t7, $s3, 0x7FFF
    ctx->r15 = ADD32(ctx->r19, 0X7FFF);
    // 0x80004F18: lbu         $t7, 0x2E24($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2E24);
    // 0x80004F1C: addiu       $t9, $s3, 0x7FFF
    ctx->r25 = ADD32(ctx->r19, 0X7FFF);
    // 0x80004F20: bnel        $t7, $zero, L_80004F6C
    if (ctx->r15 != 0) {
        // 0x80004F24: lh          $v1, 0x6($s1)
        ctx->r3 = MEM_H(ctx->r17, 0X6);
            goto L_80004F6C;
    }
    goto skip_5;
    // 0x80004F24: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    skip_5:
    // 0x80004F28: lbu         $t9, 0x2E23($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2E23);
    // 0x80004F2C: bnel        $t9, $zero, L_80004F6C
    if (ctx->r25 != 0) {
        // 0x80004F30: lh          $v1, 0x6($s1)
        ctx->r3 = MEM_H(ctx->r17, 0X6);
            goto L_80004F6C;
    }
    goto skip_6;
    // 0x80004F30: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    skip_6:
    // 0x80004F34: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x80004F38: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x80004F3C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80004F40: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
    // 0x80004F44: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x80004F48: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    // 0x80004F4C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80004F50: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x80004F54: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x80004F58: sw          $at, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r1;
    // 0x80004F5C: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x80004F60: b           L_80005190
    // 0x80004F64: sw          $t2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r10;
        goto L_80005190;
    // 0x80004F64: sw          $t2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r10;
    // 0x80004F68: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
L_80004F6C:
    // 0x80004F6C: bgez        $v1, L_80004F8C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80004F70: addiu       $t5, $v1, -0x7
        ctx->r13 = ADD32(ctx->r3, -0X7);
            goto L_80004F8C;
    }
    // 0x80004F70: addiu       $t5, $v1, -0x7
    ctx->r13 = ADD32(ctx->r3, -0X7);
    // 0x80004F74: addiu       $t3, $v1, 0x7
    ctx->r11 = ADD32(ctx->r3, 0X7);
    // 0x80004F78: sh          $t3, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r11;
    // 0x80004F7C: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80004F80: slt         $t4, $zero, $v0
    ctx->r12 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80004F84: b           L_80004F9C
    // 0x80004F88: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_80004F9C;
    // 0x80004F88: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80004F8C:
    // 0x80004F8C: sh          $t5, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r13;
    // 0x80004F90: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80004F94: slti        $t6, $v0, 0x0
    ctx->r14 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x80004F98: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80004F9C:
    // 0x80004F9C: beq         $v0, $zero, L_80004FA8
    if (ctx->r2 == 0) {
        // 0x80004FA0: addiu       $t4, $zero, 0xB4
        ctx->r12 = ADD32(0, 0XB4);
            goto L_80004FA8;
    }
    // 0x80004FA0: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x80004FA4: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
L_80004FA8:
    // 0x80004FA8: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x80004FAC: bgez        $v1, L_80004FCC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80004FB0: addiu       $t8, $v1, -0x7
        ctx->r24 = ADD32(ctx->r3, -0X7);
            goto L_80004FCC;
    }
    // 0x80004FB0: addiu       $t8, $v1, -0x7
    ctx->r24 = ADD32(ctx->r3, -0X7);
    // 0x80004FB4: addiu       $t7, $v1, 0x7
    ctx->r15 = ADD32(ctx->r3, 0X7);
    // 0x80004FB8: sh          $t7, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r15;
    // 0x80004FBC: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80004FC0: slt         $t9, $zero, $v0
    ctx->r25 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80004FC4: b           L_80004FDC
    // 0x80004FC8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80004FDC;
    // 0x80004FC8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80004FCC:
    // 0x80004FCC: sh          $t8, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r24;
    // 0x80004FD0: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80004FD4: slti        $t2, $v0, 0x0
    ctx->r10 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x80004FD8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80004FDC:
    // 0x80004FDC: beql        $v0, $zero, L_80004FEC
    if (ctx->r2 == 0) {
        // 0x80004FE0: lh          $v1, 0x6($s1)
        ctx->r3 = MEM_H(ctx->r17, 0X6);
            goto L_80004FEC;
    }
    goto skip_7;
    // 0x80004FE0: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    skip_7:
    // 0x80004FE4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80004FE8: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
L_80004FEC:
    // 0x80004FEC: bne         $v1, $zero, L_80005010
    if (ctx->r3 != 0) {
        // 0x80004FF0: subu        $t5, $t4, $v1
        ctx->r13 = SUB32(ctx->r12, ctx->r3);
            goto L_80005010;
    }
    // 0x80004FF0: subu        $t5, $t4, $v1
    ctx->r13 = SUB32(ctx->r12, ctx->r3);
    // 0x80004FF4: lh          $t3, 0x8($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X8);
    // 0x80004FF8: bnel        $t3, $zero, L_80005014
    if (ctx->r11 != 0) {
        // 0x80004FFC: mtc1        $t5, $f8
        ctx->f8.u32l = ctx->r13;
            goto L_80005014;
    }
    goto skip_8;
    // 0x80004FFC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    skip_8:
    // 0x80005000: swc1        $f22, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f22.u32l;
    // 0x80005004: swc1        $f22, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f22.u32l;
    // 0x80005008: b           L_80005190
    // 0x8000500C: swc1        $f22, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f22.u32l;
        goto L_80005190;
    // 0x8000500C: swc1        $f22, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f22.u32l;
L_80005010:
    // 0x80005010: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
L_80005014:
    // 0x80005014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80005018: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000501C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005020: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005024: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x80005028: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8000502C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80005030: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80005034: nop

    // 0x80005038: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000503C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80005040: nop

    // 0x80005044: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80005048: beql        $a0, $zero, L_80005098
    if (ctx->r4 == 0) {
        // 0x8000504C: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_80005098;
    }
    goto skip_9;
    // 0x8000504C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x80005050: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80005054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80005058: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000505C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80005060: nop

    // 0x80005064: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80005068: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8000506C: nop

    // 0x80005070: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80005074: bne         $a0, $zero, L_8000508C
    if (ctx->r4 != 0) {
        // 0x80005078: nop
    
            goto L_8000508C;
    }
    // 0x80005078: nop

    // 0x8000507C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80005080: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80005084: b           L_800050A4
    // 0x80005088: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_800050A4;
    // 0x80005088: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8000508C:
    // 0x8000508C: b           L_800050A4
    // 0x80005090: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_800050A4;
    // 0x80005090: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80005094: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_80005098:
    // 0x80005098: nop

    // 0x8000509C: bltz        $a0, L_8000508C
    if (SIGNED(ctx->r4) < 0) {
        // 0x800050A0: nop
    
            goto L_8000508C;
    }
    // 0x800050A0: nop

L_800050A4:
    // 0x800050A4: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x800050A8: addiu       $t9, $t7, -0x100
    ctx->r25 = ADD32(ctx->r15, -0X100);
    // 0x800050AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800050B0: jal         0x80003E10
    // 0x800050B4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_5;
    // 0x800050B4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    after_5:
    // 0x800050B8: lh          $t2, 0x8($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X8);
    // 0x800050BC: addiu       $t3, $zero, 0xB4
    ctx->r11 = ADD32(0, 0XB4);
    // 0x800050C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800050C4: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x800050C8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800050CC: swc1        $f0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f0.u32l;
    // 0x800050D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800050D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800050D8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800050DC: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x800050E0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800050E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800050E8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800050EC: nop

    // 0x800050F0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800050F4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800050F8: nop

    // 0x800050FC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80005100: beql        $a0, $zero, L_80005150
    if (ctx->r4 == 0) {
        // 0x80005104: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_80005150;
    }
    goto skip_10;
    // 0x80005104: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x80005108: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000510C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80005110: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80005114: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80005118: nop

    // 0x8000511C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80005120: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80005124: nop

    // 0x80005128: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8000512C: bne         $a0, $zero, L_80005144
    if (ctx->r4 != 0) {
        // 0x80005130: nop
    
            goto L_80005144;
    }
    // 0x80005130: nop

    // 0x80005134: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80005138: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000513C: b           L_8000515C
    // 0x80005140: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8000515C;
    // 0x80005140: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80005144:
    // 0x80005144: b           L_8000515C
    // 0x80005148: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8000515C;
    // 0x80005148: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8000514C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_80005150:
    // 0x80005150: nop

    // 0x80005154: bltz        $a0, L_80005144
    if (SIGNED(ctx->r4) < 0) {
        // 0x80005158: nop
    
            goto L_80005144;
    }
    // 0x80005158: nop

L_8000515C:
    // 0x8000515C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005160: addiu       $t7, $t6, -0x100
    ctx->r15 = ADD32(ctx->r14, -0X100);
    // 0x80005164: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80005168: jal         0x80003E10
    // 0x8000516C: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x8000516C: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_6:
    // 0x80005170: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80005174: swc1        $f0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f0.u32l;
    // 0x80005178: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000517C: nop

    // 0x80005180: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80005184: jal         0x800417E0
    // 0x80005188: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_7;
    // 0x80005188: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_7:
    // 0x8000518C: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
L_80005190:
    // 0x80005190: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80005194: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x80005198: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8000519C: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x800051A0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x800051A4: bne         $at, $zero, L_80004C14
    if (ctx->r1 != 0) {
        // 0x800051A8: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_80004C14;
    }
    // 0x800051A8: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x800051AC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x800051B0: addiu       $t4, $t4, 0x7D38
    ctx->r12 = ADD32(ctx->r12, 0X7D38);
    // 0x800051B4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800051B8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x800051BC: addiu       $t2, $t2, 0x7E10
    ctx->r10 = ADD32(ctx->r10, 0X7E10);
    // 0x800051C0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x800051C4: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x800051C8: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x800051CC: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x800051D0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x800051D4: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x800051D8: sw          $t6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r14;
    // 0x800051DC: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x800051E0: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x800051E4: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x800051E8: sw          $t6, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r14;
    // 0x800051EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800051F0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800051F4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800051F8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800051FC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80005200: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80005204: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80005208: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x8000520C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80005210: jr          $ra
    // 0x80005214: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80005214: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80007EA0_8AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007EA0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80007EA4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80007EA8: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80007EAC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80007EB0: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x80007EB4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80007EB8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80007EBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80007EC0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80007EC4: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80007EC8: sh          $zero, 0x5F18($t9)
    MEM_H(0X5F18, ctx->r25) = 0;
    // 0x80007ECC: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80007ED0: jr          $ra
    // 0x80007ED4: sw          $zero, 0x5F38($t2)
    MEM_W(0X5F38, ctx->r10) = 0;
    TRACE_RETURN()
    return;
    // 0x80007ED4: sw          $zero, 0x5F38($t2)
    MEM_W(0X5F38, ctx->r10) = 0;
;}
RECOMP_FUNC void func_80033898_34498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033898: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8003389C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800338A0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800338A4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x800338A8: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x800338AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800338B0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x800338B4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x800338B8: jal         0x80003F30
    // 0x800338BC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x800338BC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x800338C0: lhu         $a0, 0x66($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X66);
    // 0x800338C4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x800338C8: jal         0x80003F30
    // 0x800338CC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x800338CC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800338D0: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x800338D4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800338D8: jal         0x80003F30
    // 0x800338DC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x800338DC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800338E0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800338E4: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x800338E8: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800338EC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800338F0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800338F4: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x800338F8: mul.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800338FC: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80033900: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80033904: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80033908: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003390C: mul.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80033910: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80033914: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80033918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8003391C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80033920: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80033924: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80033928: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8003392C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80033930: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80033934: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80033938: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8003393C: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80033940: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80033944: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80033948: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8003394C: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80033950: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80033954: mul.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80033958: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8003395C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80033960: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80033964: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80033968: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8003396C: nop

    // 0x80033970: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80033974: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80033978: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8003397C: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80033980: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80033984: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80033988: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8003398C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80033990: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80033994: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80033998: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8003399C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800339A0: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800339A4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800339A8: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800339AC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x800339B0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800339B4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800339B8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800339BC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800339C0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800339C4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800339C8: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800339CC: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800339D0: nop

    // 0x800339D4: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800339D8: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800339DC: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800339E0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800339E4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800339E8: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x800339EC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x800339F0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800339F4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800339F8: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800339FC: nop

    // 0x80033A00: mul.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80033A04: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80033A08: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80033A0C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80033A10: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80033A14: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80033A18: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80033A1C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80033A20: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80033A24: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80033A28: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80033A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033A30: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80033A34: jr          $ra
    // 0x80033A38: nop

    TRACE_RETURN()
    return;
    // 0x80033A38: nop

;}
RECOMP_FUNC void func_80039F3C_3AB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039F3C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80039F40: lbu         $t6, 0x9CF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9CF);
    // 0x80039F44: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x80039F48: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80039F4C: beq         $t6, $at, L_80039F58
    if (ctx->r14 == ctx->r1) {
        // 0x80039F50: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_80039F58;
    }
    // 0x80039F50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039F54: sb          $t7, 0x9CE($at)
    MEM_B(0X9CE, ctx->r1) = ctx->r15;
L_80039F58:
    // 0x80039F58: jr          $ra
    // 0x80039F5C: nop

    TRACE_RETURN()
    return;
    // 0x80039F5C: nop

;}
RECOMP_FUNC void func_80022A74_23674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022A74: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80022A78: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80022A7C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80022A80: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80022A84: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80022A88: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80022A8C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80022A90: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80022A94: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80022A98: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80022A9C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80022AA0: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80022AA4: addiu       $t2, $zero, 0x800
    ctx->r10 = ADD32(0, 0X800);
    // 0x80022AA8: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80022AAC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80022AB0: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80022AB4: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80022AB8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022ABC: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x80022AC0: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80022AC4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80022AC8: mfc1        $fp, $f6
    ctx->r30 = (int32_t)ctx->f6.u32l;
    // 0x80022ACC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80022AD0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022AD4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80022AD8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022ADC: div         $zero, $t2, $t1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r9)));
    // 0x80022AE0: mfc1        $s7, $f18
    ctx->r23 = (int32_t)ctx->f18.u32l;
    // 0x80022AE4: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x80022AE8: mflo        $s4
    ctx->r20 = lo;
    // 0x80022AEC: bne         $t1, $zero, L_80022AF8
    if (ctx->r9 != 0) {
        // 0x80022AF0: nop
    
            goto L_80022AF8;
    }
    // 0x80022AF0: nop

    // 0x80022AF4: break       7
    do_break(2147625716);
L_80022AF8:
    // 0x80022AF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022AFC: bne         $t1, $at, L_80022B10
    if (ctx->r9 != ctx->r1) {
        // 0x80022B00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022B10;
    }
    // 0x80022B00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022B04: bne         $t2, $at, L_80022B10
    if (ctx->r10 != ctx->r1) {
        // 0x80022B08: nop
    
            goto L_80022B10;
    }
    // 0x80022B08: nop

    // 0x80022B0C: break       6
    do_break(2147625740);
L_80022B10:
    // 0x80022B10: bgezl       $s7, L_80022B64
    if (SIGNED(ctx->r23) >= 0) {
        // 0x80022B14: lh          $t5, 0x10($s1)
        ctx->r13 = MEM_H(ctx->r17, 0X10);
            goto L_80022B64;
    }
    goto skip_0;
    // 0x80022B14: lh          $t5, 0x10($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X10);
    skip_0:
    // 0x80022B18: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x80022B1C: negu        $t3, $s7
    ctx->r11 = SUB32(0, ctx->r23);
    // 0x80022B20: div         $zero, $t3, $v0
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r2)));
    // 0x80022B24: mflo        $v1
    ctx->r3 = lo;
    // 0x80022B28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80022B2C: bne         $v0, $zero, L_80022B38
    if (ctx->r2 != 0) {
        // 0x80022B30: nop
    
            goto L_80022B38;
    }
    // 0x80022B30: nop

    // 0x80022B34: break       7
    do_break(2147625780);
L_80022B38:
    // 0x80022B38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022B3C: bne         $v0, $at, L_80022B50
    if (ctx->r2 != ctx->r1) {
        // 0x80022B40: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022B50;
    }
    // 0x80022B40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022B44: bne         $t3, $at, L_80022B50
    if (ctx->r11 != ctx->r1) {
        // 0x80022B48: nop
    
            goto L_80022B50;
    }
    // 0x80022B48: nop

    // 0x80022B4C: break       6
    do_break(2147625804);
L_80022B50:
    // 0x80022B50: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022B54: mflo        $t4
    ctx->r12 = lo;
    // 0x80022B58: addu        $s7, $s7, $t4
    ctx->r23 = ADD32(ctx->r23, ctx->r12);
    // 0x80022B5C: nop

    // 0x80022B60: lh          $t5, 0x10($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X10);
L_80022B64:
    // 0x80022B64: div         $zero, $s7, $t5
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r13)));
    // 0x80022B68: bne         $t5, $zero, L_80022B74
    if (ctx->r13 != 0) {
        // 0x80022B6C: nop
    
            goto L_80022B74;
    }
    // 0x80022B6C: nop

    // 0x80022B70: break       7
    do_break(2147625840);
L_80022B74:
    // 0x80022B74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022B78: bne         $t5, $at, L_80022B8C
    if (ctx->r13 != ctx->r1) {
        // 0x80022B7C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022B8C;
    }
    // 0x80022B7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022B80: bne         $s7, $at, L_80022B8C
    if (ctx->r23 != ctx->r1) {
        // 0x80022B84: nop
    
            goto L_80022B8C;
    }
    // 0x80022B84: nop

    // 0x80022B88: break       6
    do_break(2147625864);
L_80022B8C:
    // 0x80022B8C: mfhi        $s7
    ctx->r23 = hi;
    // 0x80022B90: bgezl       $s6, L_80022BE4
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80022B94: lh          $t8, 0x12($s1)
        ctx->r24 = MEM_H(ctx->r17, 0X12);
            goto L_80022BE4;
    }
    goto skip_1;
    // 0x80022B94: lh          $t8, 0x12($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X12);
    skip_1:
    // 0x80022B98: lh          $s3, 0x12($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X12);
    // 0x80022B9C: negu        $t6, $s6
    ctx->r14 = SUB32(0, ctx->r22);
    // 0x80022BA0: div         $zero, $t6, $s3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r19)));
    // 0x80022BA4: mflo        $v1
    ctx->r3 = lo;
    // 0x80022BA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80022BAC: bne         $s3, $zero, L_80022BB8
    if (ctx->r19 != 0) {
        // 0x80022BB0: nop
    
            goto L_80022BB8;
    }
    // 0x80022BB0: nop

    // 0x80022BB4: break       7
    do_break(2147625908);
L_80022BB8:
    // 0x80022BB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022BBC: bne         $s3, $at, L_80022BD0
    if (ctx->r19 != ctx->r1) {
        // 0x80022BC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022BD0;
    }
    // 0x80022BC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022BC4: bne         $t6, $at, L_80022BD0
    if (ctx->r14 != ctx->r1) {
        // 0x80022BC8: nop
    
            goto L_80022BD0;
    }
    // 0x80022BC8: nop

    // 0x80022BCC: break       6
    do_break(2147625932);
L_80022BD0:
    // 0x80022BD0: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022BD4: mflo        $t7
    ctx->r15 = lo;
    // 0x80022BD8: addu        $s6, $s6, $t7
    ctx->r22 = ADD32(ctx->r22, ctx->r15);
    // 0x80022BDC: nop

    // 0x80022BE0: lh          $t8, 0x12($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X12);
L_80022BE4:
    // 0x80022BE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80022BE8: div         $zero, $s6, $t8
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r24)));
    // 0x80022BEC: bne         $t8, $zero, L_80022BF8
    if (ctx->r24 != 0) {
        // 0x80022BF0: nop
    
            goto L_80022BF8;
    }
    // 0x80022BF0: nop

    // 0x80022BF4: break       7
    do_break(2147625972);
L_80022BF8:
    // 0x80022BF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80022BFC: bne         $t8, $at, L_80022C10
    if (ctx->r24 != ctx->r1) {
        // 0x80022C00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80022C10;
    }
    // 0x80022C00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80022C04: bne         $s6, $at, L_80022C10
    if (ctx->r22 != ctx->r1) {
        // 0x80022C08: nop
    
            goto L_80022C10;
    }
    // 0x80022C08: nop

    // 0x80022C0C: break       6
    do_break(2147625996);
L_80022C10:
    // 0x80022C10: mfhi        $s6
    ctx->r22 = hi;
    // 0x80022C14: jal         0x80022EC0
    // 0x80022C18: nop

    func_80022EC0_23AC0(rdram, ctx);
        goto after_0;
    // 0x80022C18: nop

    after_0:
    // 0x80022C1C: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80022C20: lh          $s3, 0x12($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X12);
    // 0x80022C24: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022C28: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80022C2C: nop

    // 0x80022C30: addu        $v0, $t0, $s6
    ctx->r2 = ADD32(ctx->r8, ctx->r22);
    // 0x80022C34: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022C38: beq         $at, $zero, L_80022D64
    if (ctx->r1 == 0) {
        // 0x80022C3C: slt         $at, $s6, $s3
        ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_80022D64;
    }
    // 0x80022C3C: slt         $at, $s6, $s3
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80022C40: beq         $at, $zero, L_80022CF4
    if (ctx->r1 == 0) {
        // 0x80022C44: or          $s0, $s6, $zero
        ctx->r16 = ctx->r22 | 0;
            goto L_80022CF4;
    }
    // 0x80022C44: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
L_80022C48:
    // 0x80022C48: addu        $s5, $s0, $s4
    ctx->r21 = ADD32(ctx->r16, ctx->r20);
    // 0x80022C4C: slt         $at, $s3, $s5
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80022C50: beq         $at, $zero, L_80022CA0
    if (ctx->r1 == 0) {
        // 0x80022C54: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_80022CA0;
    }
    // 0x80022C54: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80022C58: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80022C5C: subu        $t3, $s4, $s0
    ctx->r11 = SUB32(ctx->r20, ctx->r16);
    // 0x80022C60: subu        $t4, $t3, $s4
    ctx->r12 = SUB32(ctx->r11, ctx->r20);
    // 0x80022C64: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022C68: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x80022C6C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80022C70: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80022C74: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80022C78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80022C7C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80022C80: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80022C84: jal         0x80022DF4
    // 0x80022C88: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80022DF4_239F4(rdram, ctx);
        goto after_1;
    // 0x80022C88: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x80022C8C: lh          $s3, 0x12($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X12);
    // 0x80022C90: subu        $v0, $s5, $s3
    ctx->r2 = SUB32(ctx->r21, ctx->r19);
    // 0x80022C94: subu        $s6, $s6, $v0
    ctx->r22 = SUB32(ctx->r22, ctx->r2);
    // 0x80022C98: b           L_80022CD0
    // 0x80022C9C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
        goto L_80022CD0;
    // 0x80022C9C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
L_80022CA0:
    // 0x80022CA0: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80022CA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80022CA8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022CAC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80022CB0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80022CB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80022CB8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80022CBC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80022CC0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80022CC4: jal         0x80022DF4
    // 0x80022CC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80022DF4_239F4(rdram, ctx);
        goto after_2;
    // 0x80022CC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x80022CCC: lh          $s3, 0x12($s1)
    ctx->r19 = MEM_H(ctx->r17, 0X12);
L_80022CD0:
    // 0x80022CD0: slt         $at, $s5, $s3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80022CD4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80022CD8: bne         $at, $zero, L_80022C48
    if (ctx->r1 != 0) {
        // 0x80022CDC: addu        $s2, $s2, $s4
        ctx->r18 = ADD32(ctx->r18, ctx->r20);
            goto L_80022C48;
    }
    // 0x80022CDC: addu        $s2, $s2, $s4
    ctx->r18 = ADD32(ctx->r18, ctx->r20);
    // 0x80022CE0: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80022CE4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022CE8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80022CEC: nop

    // 0x80022CF0: addu        $v0, $t9, $s6
    ctx->r2 = ADD32(ctx->r25, ctx->r22);
L_80022CF4:
    // 0x80022CF4: subu        $t0, $v0, $s3
    ctx->r8 = SUB32(ctx->r2, ctx->r19);
    // 0x80022CF8: blez        $t0, L_80022DC4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80022CFC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80022DC4;
    }
    // 0x80022CFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80022D00: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
L_80022D04:
    // 0x80022D04: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80022D08: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022D0C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022D10: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80022D14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80022D18: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80022D1C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80022D20: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80022D24: jal         0x80022DF4
    // 0x80022D28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80022DF4_239F4(rdram, ctx);
        goto after_3;
    // 0x80022D28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
    // 0x80022D2C: lwc1        $f8, 0x28($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80022D30: lh          $t6, 0x12($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12);
    // 0x80022D34: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x80022D38: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80022D3C: addu        $s2, $s2, $s4
    ctx->r18 = ADD32(ctx->r18, ctx->r20);
    // 0x80022D40: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80022D44: nop

    // 0x80022D48: addu        $t5, $t4, $s6
    ctx->r13 = ADD32(ctx->r12, ctx->r22);
    // 0x80022D4C: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x80022D50: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80022D54: bnel        $at, $zero, L_80022D04
    if (ctx->r1 != 0) {
        // 0x80022D58: lwc1        $f4, 0x24($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
            goto L_80022D04;
    }
    goto skip_2;
    // 0x80022D58: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x80022D5C: b           L_80022DC8
    // 0x80022D60: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_80022DC8;
    // 0x80022D60: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80022D64:
    // 0x80022D64: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022D68: beq         $at, $zero, L_80022DC4
    if (ctx->r1 == 0) {
        // 0x80022D6C: or          $s0, $s6, $zero
        ctx->r16 = ctx->r22 | 0;
            goto L_80022DC4;
    }
    // 0x80022D6C: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x80022D70: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
L_80022D74:
    // 0x80022D74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80022D78: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022D7C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80022D80: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80022D84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80022D88: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80022D8C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80022D90: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80022D94: jal         0x80022DF4
    // 0x80022D98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80022DF4_239F4(rdram, ctx);
        goto after_4;
    // 0x80022D98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x80022D9C: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80022DA0: addu        $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x80022DA4: addu        $s2, $s2, $s4
    ctx->r18 = ADD32(ctx->r18, ctx->r20);
    // 0x80022DA8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80022DAC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80022DB0: nop

    // 0x80022DB4: addu        $t1, $t2, $s6
    ctx->r9 = ADD32(ctx->r10, ctx->r22);
    // 0x80022DB8: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80022DBC: bnel        $at, $zero, L_80022D74
    if (ctx->r1 != 0) {
        // 0x80022DC0: lwc1        $f16, 0x24($s1)
        ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
            goto L_80022D74;
    }
    goto skip_3;
    // 0x80022DC0: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    skip_3:
L_80022DC4:
    // 0x80022DC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80022DC8:
    // 0x80022DC8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80022DCC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80022DD0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80022DD4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80022DD8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80022DDC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80022DE0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80022DE4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80022DE8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80022DEC: jr          $ra
    // 0x80022DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80022DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80010864_11464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010864: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80010868: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001086C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80010870: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x80010874: mflo        $t6
    ctx->r14 = lo;
    // 0x80010878: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8001087C: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x80010880: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010884: bne         $at, $zero, L_80010894
    if (ctx->r1 != 0) {
        // 0x80010888: nop
    
            goto L_80010894;
    }
    // 0x80010888: nop

    // 0x8001088C: jr          $ra
    // 0x80010890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80010890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80010894:
    // 0x80010894: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010898: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8001089C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800108A0: mflo        $t0
    ctx->r8 = lo;
    // 0x800108A4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x800108A8: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x800108AC: andi        $t2, $t1, 0xDFFF
    ctx->r10 = ctx->r9 & 0XDFFF;
    // 0x800108B0: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x800108B4: jr          $ra
    // 0x800108B8: nop

    TRACE_RETURN()
    return;
    // 0x800108B8: nop

;}
RECOMP_FUNC void func_8001605C_16C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001605C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80016060: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80016064: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80016068: bne         $t6, $at, L_800160C8
    if (ctx->r14 != ctx->r1) {
        // 0x8001606C: addiu       $v1, $v1, -0x7B78
        ctx->r3 = ADD32(ctx->r3, -0X7B78);
            goto L_800160C8;
    }
    // 0x8001606C: addiu       $v1, $v1, -0x7B78
    ctx->r3 = ADD32(ctx->r3, -0X7B78);
    // 0x80016070: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80016074: addiu       $v1, $v1, -0x7B78
    ctx->r3 = ADD32(ctx->r3, -0X7B78);
    // 0x80016078: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8001607C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80016080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016084: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016088: addiu       $a0, $a0, -0x7E78
    ctx->r4 = ADD32(ctx->r4, -0X7E78);
    // 0x8001608C: sra         $t7, $a1, 5
    ctx->r15 = S32(SIGNED(ctx->r5) >> 5);
    // 0x80016090: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80016094: andi        $t9, $a1, 0x1F
    ctx->r25 = ctx->r5 & 0X1F;
    // 0x80016098: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x8001609C: addu        $a1, $t8, $t0
    ctx->r5 = ADD32(ctx->r24, ctx->r8);
    // 0x800160A0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800160A4: mflo        $t2
    ctx->r10 = lo;
    // 0x800160A8: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x800160AC: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x800160B0: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800160B4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800160B8: mflo        $t6
    ctx->r14 = lo;
    // 0x800160BC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x800160C0: jr          $ra
    // 0x800160C4: sh          $a1, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800160C4: sh          $a1, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r5;
L_800160C8:
    // 0x800160C8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x800160CC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800160D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800160D4: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800160D8: addiu       $a0, $a0, -0x7E78
    ctx->r4 = ADD32(ctx->r4, -0X7E78);
    // 0x800160DC: andi        $t9, $a1, 0xFFC0
    ctx->r25 = ctx->r5 & 0XFFC0;
    // 0x800160E0: andi        $t0, $a1, 0x3E
    ctx->r8 = ctx->r5 & 0X3E;
    // 0x800160E4: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x800160E8: sra         $t8, $t9, 5
    ctx->r24 = S32(SIGNED(ctx->r25) >> 5);
    // 0x800160EC: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x800160F0: andi        $t3, $a1, 0x1
    ctx->r11 = ctx->r5 & 0X1;
    // 0x800160F4: or          $v0, $t2, $t3
    ctx->r2 = ctx->r10 | ctx->r11;
    // 0x800160F8: mflo        $t5
    ctx->r13 = lo;
    // 0x800160FC: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x80016100: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x80016104: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016108: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001610C: mflo        $t0
    ctx->r8 = lo;
    // 0x80016110: addu        $t8, $a0, $t0
    ctx->r24 = ADD32(ctx->r4, ctx->r8);
    // 0x80016114: sh          $v0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r2;
    // 0x80016118: jr          $ra
    // 0x8001611C: nop

    TRACE_RETURN()
    return;
    // 0x8001611C: nop

;}
RECOMP_FUNC void func_800135D4_141D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800135D4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800135D8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800135DC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800135E0: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x800135E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800135E8: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x800135EC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800135F0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800135F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800135F8: bgez        $t6, L_80013610
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800135FC: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80013610;
    }
    // 0x800135FC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80013600: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80013608: nop

    // 0x8001360C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80013610:
    // 0x80013610: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80013614: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    // 0x80013618: bgez        $a2, L_80013630
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8001361C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80013630;
    }
    // 0x8001361C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80013620: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013624: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013628: nop

    // 0x8001362C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80013630:
    // 0x80013630: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x80013634: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x80013638: bgez        $a3, L_80013650
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8001363C: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80013650;
    }
    // 0x8001363C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80013640: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80013648: nop

    // 0x8001364C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80013650:
    // 0x80013650: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80013654: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x80013658: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001365C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80013660: nop

    // 0x80013664: bc1fl       L_80013688
    if (!c1cs) {
        // 0x80013668: lwc1        $f18, 0x2C($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80013688;
    }
    goto skip_0;
    // 0x80013668: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    skip_0:
    // 0x8001366C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80013670: lwc1        $f16, 0x2C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80013674: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80013678: sub.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8001367C: b           L_80013690
    // 0x80013680: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80013690;
    // 0x80013680: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80013684: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
L_80013688:
    // 0x80013688: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8001368C: sub.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f6.fl;
L_80013690:
    // 0x80013690: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80013694: lwc1        $f2, 0x38($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80013698: lwc1        $f12, 0x34($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8001369C: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800136A0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800136A4: nop

    // 0x800136A8: bc1f        L_800136BC
    if (!c1cs) {
        // 0x800136AC: swc1        $f4, 0x30($v0)
        MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
            goto L_800136BC;
    }
    // 0x800136AC: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
    // 0x800136B0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800136B4: b           L_800136C0
    // 0x800136B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800136C0;
    // 0x800136B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800136BC:
    // 0x800136BC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800136C0:
    // 0x800136C0: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800136C4: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x800136C8: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
    // 0x800136CC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800136D0: nop

    // 0x800136D4: bc1f        L_800136E8
    if (!c1cs) {
        // 0x800136D8: swc1        $f8, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
            goto L_800136E8;
    }
    // 0x800136D8: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x800136DC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800136E0: b           L_800136EC
    // 0x800136E4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800136EC;
    // 0x800136E4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800136E8:
    // 0x800136E8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800136EC:
    // 0x800136EC: div.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800136F0: jr          $ra
    // 0x800136F4: swc1        $f16, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x800136F4: swc1        $f16, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8003524C_35E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003524C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80035250: addiu       $v0, $v0, -0x254C
    ctx->r2 = ADD32(ctx->r2, -0X254C);
    // 0x80035254: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80035258: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8003525C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035264: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80035268: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8003526C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80035270: sw          $a2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r6;
    // 0x80035274: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80035278: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x8003527C: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80035280: jalr        $t9
    // 0x80035284: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80035284: nop

    after_0:
    // 0x80035288: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8003528C: addiu       $v0, $v0, -0x254C
    ctx->r2 = ADD32(ctx->r2, -0X254C);
    // 0x80035290: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80035294: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80035298: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x8003529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800352A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800352A4: jr          $ra
    // 0x800352A8: nop

    TRACE_RETURN()
    return;
    // 0x800352A8: nop

;}
RECOMP_FUNC void func_80006F8C_7B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006F8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80006F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80006F98: lw          $v1, 0x298($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X298);
    // 0x80006F9C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80006FA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80006FA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80006FA8: jal         0x800425C0
    // 0x80006FAC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80006FAC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80006FB0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80006FB4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80006FB8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80006FBC: beq         $v1, $zero, L_80006FFC
    if (ctx->r3 == 0) {
        // 0x80006FC0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80006FFC;
    }
    // 0x80006FC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80006FC4:
    // 0x80006FC4: bnel        $v1, $a1, L_80006FF0
    if (ctx->r3 != ctx->r5) {
        // 0x80006FC8: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80006FF0;
    }
    goto skip_0;
    // 0x80006FC8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    skip_0:
    // 0x80006FCC: beq         $a2, $zero, L_80006FE0
    if (ctx->r6 == 0) {
        // 0x80006FD0: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_80006FE0;
    }
    // 0x80006FD0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80006FD4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80006FD8: b           L_80006FFC
    // 0x80006FDC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
        goto L_80006FFC;
    // 0x80006FDC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_80006FE0:
    // 0x80006FE0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80006FE4: b           L_80006FFC
    // 0x80006FE8: sw          $t8, 0x298($t9)
    MEM_W(0X298, ctx->r25) = ctx->r24;
        goto L_80006FFC;
    // 0x80006FE8: sw          $t8, 0x298($t9)
    MEM_W(0X298, ctx->r25) = ctx->r24;
    // 0x80006FEC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_80006FF0:
    // 0x80006FF0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80006FF4: bne         $v1, $zero, L_80006FC4
    if (ctx->r3 != 0) {
        // 0x80006FF8: nop
    
            goto L_80006FC4;
    }
    // 0x80006FF8: nop

L_80006FFC:
    // 0x80006FFC: jal         0x800425C0
    // 0x80007000: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80007000: nop

    after_1:
    // 0x80007004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000700C: jr          $ra
    // 0x80007010: nop

    TRACE_RETURN()
    return;
    // 0x80007010: nop

;}
RECOMP_FUNC void func_80023410_24010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023410: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80023414: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x80023418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002341C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80023424: addiu       $t6, $t6, -0x7600
    ctx->r14 = ADD32(ctx->r14, -0X7600);
    // 0x80023428: lui         $a2, 0x4E47
    ctx->r6 = S32(0X4E47 << 16);
    // 0x8002342C: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80023430: addiu       $t7, $a0, 0x3F0
    ctx->r15 = ADD32(ctx->r4, 0X3F0);
    // 0x80023434: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80023438: addiu       $a3, $a3, -0x2E90
    ctx->r7 = ADD32(ctx->r7, -0X2E90);
    // 0x8002343C: ori         $a2, $a2, 0x3545
    ctx->r6 = ctx->r6 | 0X3545;
    // 0x80023440: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80023444: jal         0x80044CB0
    // 0x80023448: addiu       $a1, $zero, 0x4134
    ctx->r5 = ADD32(0, 0X4134);
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80023448: addiu       $a1, $zero, 0x4134
    ctx->r5 = ADD32(0, 0X4134);
    after_0:
    // 0x8002344C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80023450: jal         0x80023ADC
    // 0x80023454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x80023454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80023458: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002345C: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023460: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80023464: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80023468: sw          $t8, 0x3FC($t9)
    MEM_W(0X3FC, ctx->r25) = ctx->r24;
    // 0x8002346C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80023470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80023474: lw          $v0, 0x3FC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X3FC);
    // 0x80023478: jr          $ra
    // 0x8002347C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002347C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003EBAC_3F7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EBAC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8003EBB0: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x8003EBB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EBB8: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8003EBBC: addiu       $t8, $t8, 0x77F0
    ctx->r24 = ADD32(ctx->r24, 0X77F0);
    // 0x8003EBC0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003EBC4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003EBC8: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8003EBCC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003EBD0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003EBD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EBD8: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x8003EBDC: addiu       $t7, $t7, 0x6148
    ctx->r15 = ADD32(ctx->r15, 0X6148);
    // 0x8003EBE0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003EBE4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EBE8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8003EBEC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003EBF0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003EBF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EBF8: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8003EBFC: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8003EC00: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003EC04: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EC08: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8003EC0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003EC10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EC14: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8003EC18: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8003EC1C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003EC20: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003EC24: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003EC28: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003EC2C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EC30: lui         $t7, 0x77F
    ctx->r15 = S32(0X77F << 16);
    // 0x8003EC34: ori         $t7, $t7, 0xF100
    ctx->r15 = ctx->r15 | 0XF100;
    // 0x8003EC38: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003EC3C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EC40: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003EC44: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003EC48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EC4C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8003EC50: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8003EC54: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003EC58: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EC5C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003EC60: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003EC64: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EC68: ori         $t7, $t7, 0x1000
    ctx->r15 = ctx->r15 | 0X1000;
    // 0x8003EC6C: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8003EC70: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003EC74: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003EC78: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003EC7C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003EC80: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003EC84: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x8003EC88: ori         $t6, $t6, 0xC0FC
    ctx->r14 = ctx->r14 | 0XC0FC;
    // 0x8003EC8C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8003EC90: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EC94: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8003EC98: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003EC9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003ECA0: addiu       $t8, $a0, 0xF
    ctx->r24 = ADD32(ctx->r4, 0XF);
    // 0x8003ECA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003ECA8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003ECAC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003ECB0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8003ECB4: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8003ECB8: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8003ECBC: addiu       $t9, $a1, 0xF
    ctx->r25 = ADD32(ctx->r5, 0XF);
    // 0x8003ECC0: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8003ECC4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8003ECC8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8003ECCC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8003ECD0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8003ECD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003ECD8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8003ECDC: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8003ECE0: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x8003ECE4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003ECE8: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8003ECEC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8003ECF0: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8003ECF4: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8003ECF8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003ECFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003ED00: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8003ED04: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8003ED08: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003ED0C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003ED10: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003ED14: lw          $t8, 0x7860($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7860);
    // 0x8003ED18: lbu         $a3, 0x5C($t8)
    ctx->r7 = MEM_BU(ctx->r24, 0X5C);
    // 0x8003ED1C: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x8003ED20: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8003ED24: andi        $t6, $a3, 0x4
    ctx->r14 = ctx->r7 & 0X4;
    // 0x8003ED28: sll         $t9, $t6, 23
    ctx->r25 = S32(ctx->r14 << 23);
    // 0x8003ED2C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8003ED30: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8003ED34: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003ED38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003ED3C: lui         $t9, 0x1000
    ctx->r25 = S32(0X1000 << 16);
    // 0x8003ED40: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x8003ED44: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003ED48: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003ED4C: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x8003ED50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003ED54: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003ED58: jr          $ra
    // 0x8003ED5C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8003ED5C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80023B60_24760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023B60: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80023B64: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x80023B68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80023B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023B70: lw          $t6, 0x3F0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3F0);
    // 0x80023B74: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023B78: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023B7C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023B80: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80023B84: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023B88: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80023B8C: lw          $a1, 0x1B0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1B0);
    // 0x80023B90: jal         0x800148F0
    // 0x80023B94: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x80023B94: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80023B98: beq         $v0, $zero, L_80023C04
    if (ctx->r2 == 0) {
        // 0x80023B9C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80023C04;
    }
    // 0x80023B9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80023BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023BA4: jal         0x800234D8
    // 0x80023BA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800234D8_240D8(rdram, ctx);
        goto after_1;
    // 0x80023BA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80023BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023BB0: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x80023BB4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80023BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80023BBC:
    // 0x80023BBC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80023BC0:
    // 0x80023BC0: bnel        $v0, $v1, L_80023BC0
    if (ctx->r2 != ctx->r3) {
        // 0x80023BC4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80023BC0;
    }
    goto skip_0;
    // 0x80023BC4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x80023BC8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80023BCC: bnel        $a0, $a1, L_80023BBC
    if (ctx->r4 != ctx->r5) {
        // 0x80023BD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80023BBC;
    }
    goto skip_1;
    // 0x80023BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80023BD4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80023BD8: lw          $t9, -0x717C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X717C);
    // 0x80023BDC: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x80023BE0: jal         0x80023A1C
    // 0x80023BE4: lw          $a0, 0x3F4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3F4);
    func_80023A1C_2461C(rdram, ctx);
        goto after_2;
    // 0x80023BE4: lw          $a0, 0x3F4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3F4);
    after_2:
    // 0x80023BE8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023BEC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80023BF0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80023BF4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80023BF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80023BFC: jal         0x80014B74
    // 0x80023C00: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_3;
    // 0x80023C00: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
L_80023C04:
    // 0x80023C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023C08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80023C0C: jr          $ra
    // 0x80023C10: nop

    TRACE_RETURN()
    return;
    // 0x80023C10: nop

;}
RECOMP_FUNC void func_8003C184_3CD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C184: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003C188: addiu       $a1, $a1, 0x1728
    ctx->r5 = ADD32(ctx->r5, 0X1728);
    // 0x8003C18C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C190: lbu         $t6, 0x94($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X94);
    // 0x8003C194: bne         $t6, $zero, L_8003C2AC
    if (ctx->r14 != 0) {
        // 0x8003C198: nop
    
            goto L_8003C2AC;
    }
    // 0x8003C198: nop

    // 0x8003C19C: lhu         $t7, 0x96($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X96);
    // 0x8003C1A0: lbu         $t8, 0x95($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X95);
    // 0x8003C1A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003C1A8: sh          $t9, 0x96($v0)
    MEM_H(0X96, ctx->r2) = ctx->r25;
    // 0x8003C1AC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C1B0: lhu         $v1, 0x96($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X96);
    // 0x8003C1B4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003C1B8: bne         $at, $zero, L_8003C2AC
    if (ctx->r1 != 0) {
        // 0x8003C1BC: andi        $t0, $v1, 0xFF
        ctx->r8 = ctx->r3 & 0XFF;
            goto L_8003C2AC;
    }
    // 0x8003C1BC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8003C1C0: sh          $t0, 0x96($v0)
    MEM_H(0X96, ctx->r2) = ctx->r8;
    // 0x8003C1C4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C1C8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8003C1CC: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x8003C1D0: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x8003C1D4: sb          $t2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r10;
    // 0x8003C1D8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C1DC: lbu         $t3, 0x98($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X98);
    // 0x8003C1E0: lbu         $t4, 0x99($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X99);
    // 0x8003C1E4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003C1E8: sb          $t5, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r13;
    // 0x8003C1EC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C1F0: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x8003C1F4: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x8003C1F8: sb          $t7, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r15;
    // 0x8003C1FC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C200: lhu         $a0, 0x9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9C);
    // 0x8003C204: slt         $at, $a0, $at
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003C208: beq         $at, $zero, L_8003C248
    if (ctx->r1 == 0) {
        // 0x8003C20C: sra         $t5, $a0, 8
        ctx->r13 = S32(SIGNED(ctx->r4) >> 8);
            goto L_8003C248;
    }
    // 0x8003C20C: sra         $t5, $a0, 8
    ctx->r13 = S32(SIGNED(ctx->r4) >> 8);
    // 0x8003C210: sra         $t8, $a0, 7
    ctx->r24 = S32(SIGNED(ctx->r4) >> 7);
    // 0x8003C214: sh          $t8, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r24;
    // 0x8003C218: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C21C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x8003C220: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x8003C224: lh          $t2, 0x36($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X36);
    // 0x8003C228: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x8003C22C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8003C230: lbu         $t1, -0x1700($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1700);
    // 0x8003C234: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C238: mflo        $t3
    ctx->r11 = lo;
    // 0x8003C23C: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8003C240: b           L_8003C28C
    // 0x8003C244: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
        goto L_8003C28C;
    // 0x8003C244: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
L_8003C248:
    // 0x8003C248: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x8003C24C: sh          $t6, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r14;
    // 0x8003C250: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C254: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x8003C258: lh          $t7, 0x36($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X36);
    // 0x8003C25C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8003C260: sh          $t8, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r24;
    // 0x8003C264: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C268: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x8003C26C: lh          $t2, 0x36($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X36);
    // 0x8003C270: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x8003C274: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8003C278: lbu         $t1, -0x1700($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1700);
    // 0x8003C27C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C280: mflo        $t3
    ctx->r11 = lo;
    // 0x8003C284: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8003C288: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
L_8003C28C:
    // 0x8003C28C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8003C290: lbu         $t5, 0x98($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X98);
    // 0x8003C294: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8003C298: bne         $at, $zero, L_8003C2AC
    if (ctx->r1 != 0) {
        // 0x8003C29C: nop
    
            goto L_8003C2AC;
    }
    // 0x8003C29C: nop

    // 0x8003C2A0: lh          $t6, 0x36($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X36);
    // 0x8003C2A4: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x8003C2A8: sh          $t7, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r15;
L_8003C2AC:
    // 0x8003C2AC: jr          $ra
    // 0x8003C2B0: nop

    TRACE_RETURN()
    return;
    // 0x8003C2B0: nop

;}
RECOMP_FUNC void func_8002C9D4_2D5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C9D4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8002C9D8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002C9DC: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8002C9E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002C9E4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002C9E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8002C9EC: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x8002C9F0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002C9F4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8002C9F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8002C9FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002CA00: bc1f        L_8002CAAC
    if (!c1cs) {
        // 0x8002CA04: sw          $a3, 0xD4($sp)
        MEM_W(0XD4, ctx->r29) = ctx->r7;
            goto L_8002CAAC;
    }
    // 0x8002CA04: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x8002CA08: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002CA0C: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002CA10: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8002CA14: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8002CA18: nop

    // 0x8002CA1C: bc1fl       L_8002CAB0
    if (!c1cs) {
        // 0x8002CA20: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_8002CAB0;
    }
    goto skip_0;
    // 0x8002CA20: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    skip_0:
    // 0x8002CA24: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002CA28: c.eq.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d == ctx->f18.d;
    // 0x8002CA2C: nop

    // 0x8002CA30: bc1fl       L_8002CAB0
    if (!c1cs) {
        // 0x8002CA34: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_8002CAB0;
    }
    goto skip_1;
    // 0x8002CA34: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    skip_1:
    // 0x8002CA38: jal         0x80029E08
    // 0x8002CA3C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x8002CA3C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8002CA40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002CA44: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x8002CA48: sh          $v0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r2;
    // 0x8002CA4C: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x8002CA50: sh          $zero, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = 0;
    // 0x8002CA54: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x8002CA58: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x8002CA5C: addiu       $t9, $t6, 0x48
    ctx->r25 = ADD32(ctx->r14, 0X48);
    // 0x8002CA60: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002CA64: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA68: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA6C: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA70: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA74: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA78: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8002CA7C: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
L_8002CA80:
    // 0x8002CA80: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002CA84: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002CA88: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002CA8C: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002CA90: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002CA94: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002CA98: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002CA9C: bne         $t6, $t9, L_8002CA80
    if (ctx->r14 != ctx->r25) {
        // 0x8002CAA0: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002CA80;
    }
    // 0x8002CAA0: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8002CAA4: b           L_8002CC80
    // 0x8002CAA8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002CC80;
    // 0x8002CAA8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002CAAC:
    // 0x8002CAAC: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
L_8002CAB0:
    // 0x8002CAB0: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002CAB4: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002CAB8: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002CABC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8002CAC0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8002CAC4: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8002CAC8: lw          $a3, 0xD4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD4);
    // 0x8002CACC: swc1        $f12, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f12.u32l;
    // 0x8002CAD0: swc1        $f14, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f14.u32l;
    // 0x8002CAD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002CAD8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8002CADC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8002CAE0: jal         0x8002AA00
    // 0x8002CAE4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8002AA00_2B600(rdram, ctx);
        goto after_1;
    // 0x8002CAE4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8002CAE8: lwc1        $f12, 0xCC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8002CAEC: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002CAF0: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002CAF4: lwc1        $f18, 0xD8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002CAF8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002CAFC: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8002CB00: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8002CB04: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x8002CB08: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x8002CB0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002CB10: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x8002CB14: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8002CB18: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8002CB1C: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8002CB20: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x8002CB24: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x8002CB28: jal         0x80032320
    // 0x8002CB2C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_80032320_32F20(rdram, ctx);
        goto after_2;
    // 0x8002CB2C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8002CB30: lh          $v0, 0xB8($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XB8);
    // 0x8002CB34: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8002CB38: lh          $t1, 0x70($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X70);
    // 0x8002CB3C: bne         $v0, $zero, L_8002CB80
    if (ctx->r2 != 0) {
        // 0x8002CB40: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_8002CB80;
    }
    // 0x8002CB40: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8002CB44: bne         $t1, $zero, L_8002CB80
    if (ctx->r9 != 0) {
        // 0x8002CB48: or          $t4, $a0, $zero
        ctx->r12 = ctx->r4 | 0;
            goto L_8002CB80;
    }
    // 0x8002CB48: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x8002CB4C: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8002CB50: addiu       $t3, $a0, 0x48
    ctx->r11 = ADD32(ctx->r4, 0X48);
L_8002CB54:
    // 0x8002CB54: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8002CB58: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002CB5C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002CB60: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x8002CB64: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8002CB68: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x8002CB6C: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x8002CB70: bne         $t4, $t3, L_8002CB54
    if (ctx->r12 != ctx->r11) {
        // 0x8002CB74: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_8002CB54;
    }
    // 0x8002CB74: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x8002CB78: b           L_8002CC80
    // 0x8002CB7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002CC80;
    // 0x8002CB7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002CB80:
    // 0x8002CB80: bne         $v0, $v1, L_8002CC10
    if (ctx->r2 != ctx->r3) {
        // 0x8002CB84: lh          $t8, 0x70($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X70);
            goto L_8002CC10;
    }
    // 0x8002CB84: lh          $t8, 0x70($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X70);
    // 0x8002CB88: bne         $t8, $v1, L_8002CC10
    if (ctx->r24 != ctx->r3) {
        // 0x8002CB8C: lwc1        $f8, 0x74($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
            goto L_8002CC10;
    }
    // 0x8002CB8C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002CB90: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8002CB94: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8002CB98: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8002CB9C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8002CBA0: addiu       $t9, $a0, 0x48
    ctx->r25 = ADD32(ctx->r4, 0X48);
    // 0x8002CBA4: bc1fl       L_8002CBDC
    if (!c1cs) {
        // 0x8002CBA8: addiu       $t1, $sp, 0x80
        ctx->r9 = ADD32(ctx->r29, 0X80);
            goto L_8002CBDC;
    }
    goto skip_2;
    // 0x8002CBA8: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
    skip_2:
L_8002CBAC:
    // 0x8002CBAC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002CBB0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002CBB4: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8002CBB8: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8002CBBC: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002CBC0: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8002CBC4: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002CBC8: bne         $t6, $t9, L_8002CBAC
    if (ctx->r14 != ctx->r25) {
        // 0x8002CBCC: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8002CBAC;
    }
    // 0x8002CBCC: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8002CBD0: b           L_8002CC80
    // 0x8002CBD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002CC80;
    // 0x8002CBD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8002CBD8: addiu       $t1, $sp, 0x80
    ctx->r9 = ADD32(ctx->r29, 0X80);
L_8002CBDC:
    // 0x8002CBDC: addiu       $t3, $t1, 0x48
    ctx->r11 = ADD32(ctx->r9, 0X48);
    // 0x8002CBE0: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
L_8002CBE4:
    // 0x8002CBE4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8002CBE8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8002CBEC: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8002CBF0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x8002CBF4: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x8002CBF8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8002CBFC: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x8002CC00: bne         $t1, $t3, L_8002CBE4
    if (ctx->r9 != ctx->r11) {
        // 0x8002CC04: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8002CBE4;
    }
    // 0x8002CC04: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8002CC08: b           L_8002CC80
    // 0x8002CC0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002CC80;
    // 0x8002CC0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002CC10:
    // 0x8002CC10: bne         $v0, $v1, L_8002CC50
    if (ctx->r2 != ctx->r3) {
        // 0x8002CC14: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_8002CC50;
    }
    // 0x8002CC14: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8002CC18: addiu       $t5, $sp, 0x80
    ctx->r13 = ADD32(ctx->r29, 0X80);
    // 0x8002CC1C: addiu       $t7, $t5, 0x48
    ctx->r15 = ADD32(ctx->r13, 0X48);
    // 0x8002CC20: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
L_8002CC24:
    // 0x8002CC24: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8002CC28: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8002CC2C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002CC30: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002CC34: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8002CC38: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002CC3C: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x8002CC40: bne         $t5, $t7, L_8002CC24
    if (ctx->r13 != ctx->r15) {
        // 0x8002CC44: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002CC24;
    }
    // 0x8002CC44: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002CC48: b           L_8002CC80
    // 0x8002CC4C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8002CC80;
    // 0x8002CC4C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002CC50:
    // 0x8002CC50: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x8002CC54: addiu       $t0, $a0, 0x48
    ctx->r8 = ADD32(ctx->r4, 0X48);
L_8002CC58:
    // 0x8002CC58: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8002CC5C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8002CC60: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8002CC64: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x8002CC68: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x8002CC6C: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x8002CC70: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x8002CC74: bne         $t2, $t0, L_8002CC58
    if (ctx->r10 != ctx->r8) {
        // 0x8002CC78: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_8002CC58;
    }
    // 0x8002CC78: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x8002CC7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8002CC80:
    // 0x8002CC80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002CC84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8002CC88: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x8002CC8C: jr          $ra
    // 0x8002CC90: nop

    TRACE_RETURN()
    return;
    // 0x8002CC90: nop

;}
RECOMP_FUNC void func_8000EB50_F750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EB50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000EB54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000EB58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000EB5C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8000EB60: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8000EB64: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x8000EB68: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8000EB6C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000EB70: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x8000EB74: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000EB78: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8000EB7C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EB80: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8000EB84: lwc1        $f18, 0x10($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X10);
    // 0x8000EB88: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000EB8C: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8000EB90: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8000EB94: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000EB98: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8000EB9C: jal         0x800417E0
    // 0x8000EBA0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000EBA0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8000EBA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000EBA8: nop

    // 0x8000EBAC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8000EBB0: nop

    // 0x8000EBB4: bc1fl       L_8000EBC8
    if (!c1cs) {
        // 0x8000EBB8: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8000EBC8;
    }
    goto skip_0;
    // 0x8000EBB8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x8000EBBC: b           L_8000EBC8
    // 0x8000EBC0: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_8000EBC8;
    // 0x8000EBC0: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x8000EBC4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8000EBC8:
    // 0x8000EBC8: jal         0x800040A8
    // 0x8000EBCC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8000EBCC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8000EBD0: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x8000EBD4: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8000EBD8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8000EBDC: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x8000EBE0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EBE4: jal         0x800040A8
    // 0x8000EBE8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8000EBE8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8000EBEC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8000EBF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000EBF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000EBF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000EBFC: jr          $ra
    // 0x8000EC00: nop

    TRACE_RETURN()
    return;
    // 0x8000EC00: nop

;}
RECOMP_FUNC void func_8000186C_246C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000186C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001874: lui         $t6, 0xBFF0
    ctx->r14 = S32(0XBFF0 << 16);
    // 0x80001878: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8000187C: lui         $at, 0x4B4D
    ctx->r1 = S32(0X4B4D << 16);
    // 0x80001880: ori         $at, $at, 0x4300
    ctx->r1 = ctx->r1 | 0X4300;
    // 0x80001884: beq         $t7, $at, L_80001918
    if (ctx->r15 == ctx->r1) {
        // 0x80001888: lui         $a3, 0x8030
        ctx->r7 = S32(0X8030 << 16);
            goto L_80001918;
    }
    // 0x80001888: lui         $a3, 0x8030
    ctx->r7 = S32(0X8030 << 16);
    // 0x8000188C: addiu       $a1, $a3, 0x4000
    ctx->r5 = ADD32(ctx->r7, 0X4000);
    // 0x80001890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80001894: jal         0x80001640
    // 0x80001898: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80001640_2240(rdram, ctx);
        goto after_0;
    // 0x80001898: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_0:
    // 0x8000189C: lui         $a1, 0x8030
    ctx->r5 = S32(0X8030 << 16);
    // 0x800018A0: addiu       $a1, $a1, 0x4100
    ctx->r5 = ADD32(ctx->r5, 0X4100);
    // 0x800018A4: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x800018A8: jal         0x80001640
    // 0x800018AC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80001640_2240(rdram, ctx);
        goto after_1;
    // 0x800018AC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_1:
    // 0x800018B0: lui         $a3, 0x8030
    ctx->r7 = S32(0X8030 << 16);
    // 0x800018B4: addiu       $a3, $a3, 0x4000
    ctx->r7 = ADD32(ctx->r7, 0X4000);
    // 0x800018B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800018BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800018C0:
    // 0x800018C0: addu        $t8, $a3, $v0
    ctx->r24 = ADD32(ctx->r7, ctx->r2);
    // 0x800018C4: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x800018C8: lbu         $t1, 0x100($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X100);
    // 0x800018CC: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800018D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800018D4: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x800018D8: beq         $t9, $t1, L_80001910
    if (ctx->r25 == ctx->r9) {
        // 0x800018DC: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_80001910;
    }
    // 0x800018DC: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x800018E0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800018E4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800018E8: addiu       $a1, $a1, 0x19C0
    ctx->r5 = ADD32(ctx->r5, 0X19C0);
    // 0x800018EC: jal         0x80001928
    // 0x800018F0: addiu       $a0, $a0, 0x8FC
    ctx->r4 = ADD32(ctx->r4, 0X8FC);
    func_80001928_2528(rdram, ctx);
        goto after_2;
    // 0x800018F0: addiu       $a0, $a0, 0x8FC
    ctx->r4 = ADD32(ctx->r4, 0X8FC);
    after_2:
    // 0x800018F4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800018F8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800018FC: addiu       $a1, $a1, 0x1A00
    ctx->r5 = ADD32(ctx->r5, 0X1A00);
    // 0x80001900: jal         0x80001928
    // 0x80001904: addiu       $a0, $a0, 0x8E0
    ctx->r4 = ADD32(ctx->r4, 0X8E0);
    func_80001928_2528(rdram, ctx);
        goto after_3;
    // 0x80001904: addiu       $a0, $a0, 0x8E0
    ctx->r4 = ADD32(ctx->r4, 0X8E0);
    after_3:
    // 0x80001908: b           L_8000191C
    // 0x8000190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000191C;
    // 0x8000190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80001910:
    // 0x80001910: bne         $at, $zero, L_800018C0
    if (ctx->r1 != 0) {
        // 0x80001914: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800018C0;
    }
    // 0x80001914: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80001918:
    // 0x80001918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000191C:
    // 0x8000191C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001920: jr          $ra
    // 0x80001924: nop

    TRACE_RETURN()
    return;
    // 0x80001924: nop

;}
RECOMP_FUNC void func_80007024_7C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007024: jr          $ra
    // 0x80007028: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
    TRACE_RETURN()
    return;
    // 0x80007028: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
;}
RECOMP_FUNC void func_800231E0_23DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800231E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800231E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800231E8: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x800231EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800231F0: addiu       $s0, $s0, -0x717C
    ctx->r16 = ADD32(ctx->r16, -0X717C);
    // 0x800231F4: addiu       $t6, $t6, -0x7588
    ctx->r14 = ADD32(ctx->r14, -0X7588);
    // 0x800231F8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800231FC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80023200: lbu         $t7, 0x7192($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7192);
    // 0x80023204: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002320C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80023210: beq         $t8, $zero, L_80023268
    if (ctx->r24 == 0) {
        // 0x80023214: addiu       $a0, $a0, 0x7170
        ctx->r4 = ADD32(ctx->r4, 0X7170);
            goto L_80023268;
    }
    // 0x80023214: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80023218: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002321C: jal         0x80043F20
    // 0x80023220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x80023220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80023224: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023228: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x8002322C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80023230: jal         0x80043F20
    // 0x80023234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osPfsInitPak_recomp(rdram, ctx);
        goto after_1;
    // 0x80023234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80023238: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8002323C: bne         $v0, $at, L_8002325C
    if (ctx->r2 != ctx->r1) {
        // 0x80023240: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8002325C;
    }
    // 0x80023240: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80023244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023248: jal         0x80037B10
    // 0x8002324C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80037B10_38710(rdram, ctx);
        goto after_2;
    // 0x8002324C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80023250: bne         $v0, $zero, L_8002325C
    if (ctx->r2 != 0) {
        // 0x80023254: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_8002325C;
    }
    // 0x80023254: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80023258: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
L_8002325C:
    // 0x8002325C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80023260: b           L_80023278
    // 0x80023264: sb          $zero, 0x3F8($t9)
    MEM_B(0X3F8, ctx->r25) = 0;
        goto L_80023278;
    // 0x80023264: sb          $zero, 0x3F8($t9)
    MEM_B(0X3F8, ctx->r25) = 0;
L_80023268:
    // 0x80023268: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8002326C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80023270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80023274: sb          $t0, 0x3F8($t1)
    MEM_B(0X3F8, ctx->r9) = ctx->r8;
L_80023278:
    // 0x80023278: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8002327C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80023280: addiu       $t2, $t2, -0x75F8
    ctx->r10 = ADD32(ctx->r10, -0X75F8);
    // 0x80023284: addiu       $t5, $t3, 0x60
    ctx->r13 = ADD32(ctx->r11, 0X60);
L_80023288:
    // 0x80023288: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8002328C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80023290: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80023294: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80023298: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8002329C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x800232A0: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x800232A4: bne         $t3, $t5, L_80023288
    if (ctx->r11 != ctx->r13) {
        // 0x800232A8: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80023288;
    }
    // 0x800232A8: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x800232AC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x800232B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800232B4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x800232B8: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x800232BC: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x800232C0: jal         0x80023ADC
    // 0x800232C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80023ADC_246DC(rdram, ctx);
        goto after_3;
    // 0x800232C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_3:
    // 0x800232C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800232CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800232D0: sw          $a1, 0x3FC($t6)
    MEM_W(0X3FC, ctx->r14) = ctx->r5;
    // 0x800232D4: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800232D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800232DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800232E0: lw          $v0, 0x3FC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X3FC);
    // 0x800232E4: jr          $ra
    // 0x800232E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800232E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80007E5C_8A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007E5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80007E60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80007E68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80007E6C:
    // 0x80007E6C: jal         0x80007EA0
    // 0x80007E70: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80007EA0_8AA0(rdram, ctx);
        goto after_0;
    // 0x80007E70: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x80007E74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80007E78: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80007E7C: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80007E80: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80007E84: bne         $at, $zero, L_80007E6C
    if (ctx->r1 != 0) {
        // 0x80007E88: nop
    
            goto L_80007E6C;
    }
    // 0x80007E88: nop

    // 0x80007E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80007E90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007E94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80007E98: jr          $ra
    // 0x80007E9C: nop

    TRACE_RETURN()
    return;
    // 0x80007E9C: nop

;}
RECOMP_FUNC void func_80032B20_33720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032B20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80032B24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80032B28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80032B2C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80032B30: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80032B34: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80032B38: lw          $a2, 0x58($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X58);
    // 0x80032B3C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80032B40: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80032B44: bnel        $a2, $zero, L_80032B58
    if (ctx->r6 != 0) {
        // 0x80032B48: lw          $a1, 0x18($t7)
        ctx->r5 = MEM_W(ctx->r15, 0X18);
            goto L_80032B58;
    }
    goto skip_0;
    // 0x80032B48: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    skip_0:
    // 0x80032B4C: b           L_80032DB0
    // 0x80032B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032DB0;
    // 0x80032B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80032B54: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
L_80032B58:
    // 0x80032B58: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80032B5C: addiu       $a3, $a3, -0x7090
    ctx->r7 = ADD32(ctx->r7, -0X7090);
    // 0x80032B60: bne         $a1, $zero, L_80032B84
    if (ctx->r5 != 0) {
        // 0x80032B64: lui         $at, 0x8FFF
        ctx->r1 = S32(0X8FFF << 16);
            goto L_80032B84;
    }
    // 0x80032B64: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80032B68: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80032B6C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x80032B70: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80032B74: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x80032B78: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80032B7C: b           L_80032DB0
    // 0x80032B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032DB0;
    // 0x80032B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032B84:
    // 0x80032B84: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80032B88: and         $t8, $a2, $at
    ctx->r24 = ctx->r6 & ctx->r1;
    // 0x80032B8C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80032B90: beq         $t8, $zero, L_80032C0C
    if (ctx->r24 == 0) {
        // 0x80032B94: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_80032C0C;
    }
    // 0x80032B94: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80032B98: sll         $t9, $t8, 0
    ctx->r25 = S32(ctx->r24 << 0);
    // 0x80032B9C: bgez        $t9, L_80032BB4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80032BA0: lui         $t3, 0x8000
        ctx->r11 = S32(0X8000 << 16);
            goto L_80032BB4;
    }
    // 0x80032BA0: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x80032BA4: lui         $t0, 0x80FF
    ctx->r8 = S32(0X80FF << 16);
    // 0x80032BA8: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80032BAC: b           L_80032C1C
    // 0x80032BB0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_80032C1C;
    // 0x80032BB0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_80032BB4:
    // 0x80032BB4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80032BB8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80032BBC: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80032BC0: bne         $at, $zero, L_80032BF0
    if (ctx->r1 != 0) {
        // 0x80032BC4: lui         $t0, 0x80FF
        ctx->r8 = S32(0X80FF << 16);
            goto L_80032BF0;
    }
    // 0x80032BC4: lui         $t0, 0x80FF
    ctx->r8 = S32(0X80FF << 16);
    // 0x80032BC8: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x80032BCC: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80032BD0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80032BD4: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80032BD8: lui         $t0, 0x80FF
    ctx->r8 = S32(0X80FF << 16);
    // 0x80032BDC: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x80032BE0: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80032BE4: and         $t9, $v0, $t0
    ctx->r25 = ctx->r2 & ctx->r8;
    // 0x80032BE8: b           L_80032C00
    // 0x80032BEC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
        goto L_80032C00;
    // 0x80032BEC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80032BF0:
    // 0x80032BF0: lw          $t4, 0x38($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X38);
    // 0x80032BF4: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80032BF8: and         $t5, $v0, $t0
    ctx->r13 = ctx->r2 & ctx->r8;
    // 0x80032BFC: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
L_80032C00:
    // 0x80032C00: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80032C04: b           L_80032C1C
    // 0x80032C08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
        goto L_80032C1C;
    // 0x80032C08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80032C0C:
    // 0x80032C0C: lui         $t0, 0x80FF
    ctx->r8 = S32(0X80FF << 16);
    // 0x80032C10: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80032C14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032C18: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
L_80032C1C:
    // 0x80032C1C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80032C20: beq         $v1, $zero, L_80032DB0
    if (ctx->r3 == 0) {
        // 0x80032C24: srl         $t2, $v1, 8
        ctx->r10 = S32(U32(ctx->r3) >> 8);
            goto L_80032DB0;
    }
    // 0x80032C24: srl         $t2, $v1, 8
    ctx->r10 = S32(U32(ctx->r3) >> 8);
    // 0x80032C28: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x80032C2C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80032C30: andi        $t1, $t2, 0x7FFF
    ctx->r9 = ctx->r10 & 0X7FFF;
    // 0x80032C34: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x80032C38: bgez        $t7, L_80032C50
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80032C3C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80032C50;
    }
    // 0x80032C3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80032C40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80032C44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80032C48: nop

    // 0x80032C4C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80032C50:
    // 0x80032C50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80032C54: swc1        $f6, -0x7088($at)
    MEM_W(-0X7088, ctx->r1) = ctx->f6.u32l;
    // 0x80032C58: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80032C5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80032C60: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80032C64: swc1        $f10, -0x7084($at)
    MEM_W(-0X7084, ctx->r1) = ctx->f10.u32l;
    // 0x80032C68: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80032C6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80032C70: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80032C74: beq         $t8, $zero, L_80032CD8
    if (ctx->r24 == 0) {
        // 0x80032C78: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_80032CD8;
    }
    // 0x80032C78: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80032C7C: and         $t9, $t8, $t3
    ctx->r25 = ctx->r24 & ctx->r11;
    // 0x80032C80: beq         $t9, $zero, L_80032C90
    if (ctx->r25 == 0) {
        // 0x80032C84: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80032C90;
    }
    // 0x80032C84: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80032C88: b           L_80032CCC
    // 0x80032C8C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_80032CCC;
    // 0x80032C8C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80032C90:
    // 0x80032C90: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80032C94: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80032C98: bne         $at, $zero, L_80032CBC
    if (ctx->r1 != 0) {
        // 0x80032C9C: srl         $t4, $v0, 24
        ctx->r12 = S32(U32(ctx->r2) >> 24);
            goto L_80032CBC;
    }
    // 0x80032C9C: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x80032CA0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80032CA4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80032CA8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80032CAC: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x80032CB0: and         $t9, $v0, $t0
    ctx->r25 = ctx->r2 & ctx->r8;
    // 0x80032CB4: b           L_80032CC8
    // 0x80032CB8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
        goto L_80032CC8;
    // 0x80032CB8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80032CBC:
    // 0x80032CBC: lw          $t4, 0x38($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X38);
    // 0x80032CC0: and         $t5, $v0, $t0
    ctx->r13 = ctx->r2 & ctx->r8;
    // 0x80032CC4: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
L_80032CC8:
    // 0x80032CC8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80032CCC:
    // 0x80032CCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80032CD0: b           L_80032CDC
    // 0x80032CD4: sw          $a0, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = ctx->r4;
        goto L_80032CDC;
    // 0x80032CD4: sw          $a0, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = ctx->r4;
L_80032CD8:
    // 0x80032CD8: sw          $zero, -0x708C($at)
    MEM_W(-0X708C, ctx->r1) = 0;
L_80032CDC:
    // 0x80032CDC: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x80032CE0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80032CE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80032CE8: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80032CEC: beq         $t6, $zero, L_80032D4C
    if (ctx->r14 == 0) {
        // 0x80032CF0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80032D4C;
    }
    // 0x80032CF0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80032CF4: and         $t7, $t6, $t3
    ctx->r15 = ctx->r14 & ctx->r11;
    // 0x80032CF8: beq         $t7, $zero, L_80032D08
    if (ctx->r15 == 0) {
        // 0x80032CFC: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80032D08;
    }
    // 0x80032CFC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80032D00: b           L_80032D4C
    // 0x80032D04: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_80032D4C;
    // 0x80032D04: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80032D08:
    // 0x80032D08: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80032D0C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80032D10: bne         $at, $zero, L_80032D34
    if (ctx->r1 != 0) {
        // 0x80032D14: srl         $t8, $v0, 24
        ctx->r24 = S32(U32(ctx->r2) >> 24);
            goto L_80032D34;
    }
    // 0x80032D14: srl         $t8, $v0, 24
    ctx->r24 = S32(U32(ctx->r2) >> 24);
    // 0x80032D18: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80032D1C: sll         $t4, $t9, 3
    ctx->r12 = S32(ctx->r25 << 3);
    // 0x80032D20: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x80032D24: lw          $t6, -0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, -0X8);
    // 0x80032D28: and         $t7, $v0, $t0
    ctx->r15 = ctx->r2 & ctx->r8;
    // 0x80032D2C: b           L_80032D40
    // 0x80032D30: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
        goto L_80032D40;
    // 0x80032D30: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_80032D34:
    // 0x80032D34: lw          $t8, 0x38($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X38);
    // 0x80032D38: and         $t9, $v0, $t0
    ctx->r25 = ctx->r2 & ctx->r8;
    // 0x80032D3C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80032D40:
    // 0x80032D40: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80032D44: b           L_80032D4C
    // 0x80032D48: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_80032D4C;
    // 0x80032D48: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80032D4C:
    // 0x80032D4C: blez        $t2, L_80032DB0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80032D50: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80032DB0;
    }
    // 0x80032D50: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80032D54:
    // 0x80032D54: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x80032D58: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80032D5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80032D60: andi        $t4, $a0, 0x8000
    ctx->r12 = ctx->r4 & 0X8000;
    // 0x80032D64: bne         $t4, $zero, L_80032D9C
    if (ctx->r12 != 0) {
        // 0x80032D68: lw          $a3, 0x48($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X48);
            goto L_80032D9C;
    }
    // 0x80032D68: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80032D6C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80032D70: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80032D74: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80032D78: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80032D7C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80032D80: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80032D84: jal         0x80032DC4
    // 0x80032D88: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80032DC4_339C4(rdram, ctx);
        goto after_0;
    // 0x80032D88: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x80032D8C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80032D90: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80032D94: b           L_80032DA0
    // 0x80032D98: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
        goto L_80032DA0;
    // 0x80032D98: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
L_80032D9C:
    // 0x80032D9C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80032DA0:
    // 0x80032DA0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80032DA4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80032DA8: bne         $t0, $t1, L_80032D54
    if (ctx->r8 != ctx->r9) {
        // 0x80032DAC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80032D54;
    }
    // 0x80032DAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80032DB0:
    // 0x80032DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80032DB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80032DB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80032DBC: jr          $ra
    // 0x80032DC0: nop

    TRACE_RETURN()
    return;
    // 0x80032DC0: nop

;}
RECOMP_FUNC void func_8000FC94_10894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FC94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000FC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FC9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000FCA0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8000FCA4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8000FCA8: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x8000FCAC: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x8000FCB0: lwc1        $f14, 0x14($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000FCB4: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000FCB8: jal         0x8000E28C
    // 0x8000FCBC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8000E28C_EE8C(rdram, ctx);
        goto after_0;
    // 0x8000FCBC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000FCC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8000FCC4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8000FCC8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000FCCC: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000FCD0: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x8000FCD4: jal         0x8000E28C
    // 0x8000FCD8: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x8000FCD8: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    after_1:
    // 0x8000FCDC: lhu         $t6, 0x1C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1C);
    // 0x8000FCE0: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8000FCE4: jal         0x80003E10
    // 0x8000FCE8: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8000FCE8: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    after_2:
    // 0x8000FCEC: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8000FCF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8000FCF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FCF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000FCFC: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8000FD00: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000FD04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000FD08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000FD0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000FD10: add.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8000FD14: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8000FD18: nop

    // 0x8000FD1C: bc1fl       L_8000FD2C
    if (!c1cs) {
        // 0x8000FD20: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8000FD2C;
    }
    goto skip_0;
    // 0x8000FD20: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x8000FD24: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x8000FD28: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8000FD2C:
    // 0x8000FD2C: nop

    // 0x8000FD30: bc1fl       L_8000FD40
    if (!c1cs) {
        // 0x8000FD34: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_8000FD40;
    }
    goto skip_1;
    // 0x8000FD34: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x8000FD38: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8000FD3C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_8000FD40:
    // 0x8000FD40: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000FD44: lhu         $a0, 0x32($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X32);
    // 0x8000FD48: cvt.w.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8000FD4C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000FD50: nop

    // 0x8000FD54: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000FD58: beql        $a1, $zero, L_8000FDA8
    if (ctx->r5 == 0) {
        // 0x8000FD5C: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_8000FDA8;
    }
    goto skip_2;
    // 0x8000FD5C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8000FD60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000FD64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000FD68: sub.s       $f6, $f12, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8000FD6C: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000FD70: nop

    // 0x8000FD74: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000FD78: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000FD7C: nop

    // 0x8000FD80: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000FD84: bne         $a1, $zero, L_8000FD9C
    if (ctx->r5 != 0) {
        // 0x8000FD88: nop
    
            goto L_8000FD9C;
    }
    // 0x8000FD88: nop

    // 0x8000FD8C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8000FD90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000FD94: b           L_8000FDB4
    // 0x8000FD98: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8000FDB4;
    // 0x8000FD98: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8000FD9C:
    // 0x8000FD9C: b           L_8000FDB4
    // 0x8000FDA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8000FDB4;
    // 0x8000FDA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8000FDA4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_8000FDA8:
    // 0x8000FDA8: nop

    // 0x8000FDAC: bltz        $a1, L_8000FD9C
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000FDB0: nop
    
            goto L_8000FD9C;
    }
    // 0x8000FDB0: nop

L_8000FDB4:
    // 0x8000FDB4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000FDB8: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x8000FDBC: jal         0x80038BF8
    // 0x8000FDC0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_80038BF8_397F8(rdram, ctx);
        goto after_3;
    // 0x8000FDC0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_3:
    // 0x8000FDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000FDC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000FDCC: jr          $ra
    // 0x8000FDD0: nop

    TRACE_RETURN()
    return;
    // 0x8000FDD0: nop

;}
RECOMP_FUNC void alMainBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EB60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004EB64: bne         $a1, $at, L_8004EB88
    if (ctx->r5 != ctx->r1) {
        // 0x8004EB68: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_8004EB88;
    }
    // 0x8004EB68: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8004EB6C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8004EB70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004EB74: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8004EB78: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8004EB7C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x8004EB80: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8004EB84: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_8004EB88:
    // 0x8004EB88: jr          $ra
    // 0x8004EB8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8004EB8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
