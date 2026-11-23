#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F6744_5B2654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F674C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6750: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F6754: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x801F6758: jal         0x801F6770
    // 0x801F675C: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F675C: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    after_0:
    // 0x801F6760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6768: jr          $ra
    // 0x801F676C: nop

    TRACE_RETURN()
    return;
    // 0x801F676C: nop

;}
RECOMP_FUNC void func_801D628C_59219C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D628C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D6290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D6298: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x801D629C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D62A0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D62A4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x801D62A8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801D62AC: lbu         $t8, 0xBD($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XBD);
    // 0x801D62B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D62B4: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x801D62B8: beq         $t8, $zero, L_801D62E0
    if (ctx->r24 == 0) {
        // 0x801D62BC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D62E0;
    }
    // 0x801D62BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D62C0: lhu         $t9, 0x66($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X66);
    // 0x801D62C4: sb          $zero, 0xAB($a0)
    MEM_B(0XAB, ctx->r4) = 0;
    // 0x801D62C8: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x801D62CC: sh          $t9, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r25;
    // 0x801D62D0: jal         0x801D7B74
    // 0x801D62D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D62D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x801D62D8: b           L_801D6398
    // 0x801D62DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801D6398;
    // 0x801D62DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D62E0:
    // 0x801D62E0: lwc1        $f4, -0x2E30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D62E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D62E8: lwc1        $f6, -0x2E18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D62EC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D62F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801D62F4: nop

    // 0x801D62F8: bc1fl       L_801D634C
    if (!c1cs) {
        // 0x801D62FC: lbu         $t7, 0xE8($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0XE8);
            goto L_801D634C;
    }
    goto skip_0;
    // 0x801D62FC: lbu         $t7, 0xE8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE8);
    skip_0:
    // 0x801D6300: lhu         $v0, 0x66($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X66);
    // 0x801D6304: lhu         $t0, -0x2E2A($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2E2A);
    // 0x801D6308: ori         $at, $zero, 0xB800
    ctx->r1 = 0 | 0XB800;
    // 0x801D630C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D6310: subu        $v1, $v0, $t0
    ctx->r3 = SUB32(ctx->r2, ctx->r8);
    // 0x801D6314: addu        $t1, $v1, $at
    ctx->r9 = ADD32(ctx->r3, ctx->r1);
    // 0x801D6318: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x801D631C: slti        $at, $t2, 0x7000
    ctx->r1 = SIGNED(ctx->r10) < 0X7000 ? 1 : 0;
    // 0x801D6320: beq         $at, $zero, L_801D6348
    if (ctx->r1 == 0) {
        // 0x801D6324: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_801D6348;
    }
    // 0x801D6324: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x801D6328: beq         $t3, $zero, L_801D633C
    if (ctx->r11 == 0) {
        // 0x801D632C: addiu       $t5, $v0, 0x4000
        ctx->r13 = ADD32(ctx->r2, 0X4000);
            goto L_801D633C;
    }
    // 0x801D632C: addiu       $t5, $v0, 0x4000
    ctx->r13 = ADD32(ctx->r2, 0X4000);
    // 0x801D6330: addiu       $t4, $v0, -0x4000
    ctx->r12 = ADD32(ctx->r2, -0X4000);
    // 0x801D6334: b           L_801D6340
    // 0x801D6338: sh          $t4, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r12;
        goto L_801D6340;
    // 0x801D6338: sh          $t4, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r12;
L_801D633C:
    // 0x801D633C: sh          $t5, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r13;
L_801D6340:
    // 0x801D6340: b           L_801D6394
    // 0x801D6344: sb          $t6, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r14;
        goto L_801D6394;
    // 0x801D6344: sb          $t6, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r14;
L_801D6348:
    // 0x801D6348: lbu         $t7, 0xE8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE8);
L_801D634C:
    // 0x801D634C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6350: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x801D6354: slti        $at, $t7, 0x15
    ctx->r1 = SIGNED(ctx->r15) < 0X15 ? 1 : 0;
    // 0x801D6358: bne         $at, $zero, L_801D6384
    if (ctx->r1 != 0) {
        // 0x801D635C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_801D6384;
    }
    // 0x801D635C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D6360: lhu         $t8, 0x66($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X66);
    // 0x801D6364: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x801D6368: sb          $zero, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = 0;
    // 0x801D636C: sh          $t8, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r24;
    // 0x801D6370: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D6374: jal         0x801D7B74
    // 0x801D6378: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_801D7B74_593A84(rdram, ctx);
        goto after_1;
    // 0x801D6378: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_1:
    // 0x801D637C: b           L_801D6398
    // 0x801D6380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801D6398;
    // 0x801D6380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D6384:
    // 0x801D6384: lhu         $t9, -0x2E2A($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E2A);
    // 0x801D6388: sb          $zero, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = 0;
    // 0x801D638C: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
    // 0x801D6390: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
L_801D6394:
    // 0x801D6394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D6398:
    // 0x801D6398: jal         0x801D7F20
    // 0x801D639C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D7F20_593E30(rdram, ctx);
        goto after_2;
    // 0x801D639C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801D63A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D63A4: jal         0x801D5DC0
    // 0x801D63A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_3;
    // 0x801D63A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801D63AC: lbu         $t0, 0xE8($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE8);
    // 0x801D63B0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801D63B4: slti        $at, $t0, 0x15
    ctx->r1 = SIGNED(ctx->r8) < 0X15 ? 1 : 0;
    // 0x801D63B8: bne         $at, $zero, L_801D63D0
    if (ctx->r1 != 0) {
        // 0x801D63BC: nop
    
            goto L_801D63D0;
    }
    // 0x801D63BC: nop

    // 0x801D63C0: lhu         $t1, 0xA8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XA8);
    // 0x801D63C4: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x801D63C8: bnel        $t2, $zero, L_801D63EC
    if (ctx->r10 != 0) {
        // 0x801D63CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D63EC;
    }
    goto skip_1;
    // 0x801D63CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_801D63D0:
    // 0x801D63D0: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x801D63D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D63D8: lw          $t4, 0x5C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X5C);
    // 0x801D63DC: lbu         $t5, 0x18($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X18);
    // 0x801D63E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D63E4: beq         $t6, $zero, L_801D63FC
    if (ctx->r14 == 0) {
        // 0x801D63E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D63FC;
    }
    // 0x801D63E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D63EC:
    // 0x801D63EC: jal         0x801D5ECC
    // 0x801D63F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_4;
    // 0x801D63F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x801D63F4: b           L_801D6434
    // 0x801D63F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D6434;
    // 0x801D63F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D63FC:
    // 0x801D63FC: lwc1        $f8, -0x2E30($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D6400: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6404: lwc1        $f10, -0x2E18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D6408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D640C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801D6410: nop

    // 0x801D6414: bc1t        L_801D6428
    if (c1cs) {
        // 0x801D6418: nop
    
            goto L_801D6428;
    }
    // 0x801D6418: nop

    // 0x801D641C: lbu         $t7, 0xAB($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XAB);
    // 0x801D6420: beql        $t7, $zero, L_801D6434
    if (ctx->r15 == 0) {
        // 0x801D6424: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6434;
    }
    goto skip_2;
    // 0x801D6424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
L_801D6428:
    // 0x801D6428: jal         0x801D6098
    // 0x801D642C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D6098_591FA8(rdram, ctx);
        goto after_5;
    // 0x801D642C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x801D6430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D6434:
    // 0x801D6434: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D6438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D643C: jr          $ra
    // 0x801D6440: nop

    TRACE_RETURN()
    return;
    // 0x801D6440: nop

;}
RECOMP_FUNC void func_801D4828_590738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4828: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D482C: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x801D4830: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x801D4834: bne         $v0, $at, L_801D4844
    if (ctx->r2 != ctx->r1) {
        // 0x801D4838: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801D4844;
    }
    // 0x801D4838: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801D483C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D4840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4844:
    // 0x801D4844: lbu         $v1, 0xD1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD1);
    // 0x801D4848: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    // 0x801D484C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801D4850: beq         $v0, $v1, L_801D48D0
    if (ctx->r2 == ctx->r3) {
        // 0x801D4854: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_801D48D0;
    }
    // 0x801D4854: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x801D4858: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x801D485C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D4860: addiu       $t9, $t9, -0x36E4
    ctx->r25 = ADD32(ctx->r25, -0X36E4);
    // 0x801D4864: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801D4868: sb          $t7, 0xE8($a0)
    MEM_B(0XE8, ctx->r4) = ctx->r15;
    // 0x801D486C: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x801D4870: lhu         $t0, 0x4($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X4);
    // 0x801D4874: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D4878: sb          $t1, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r9;
    // 0x801D487C: beq         $a3, $v1, L_801D4890
    if (ctx->r7 == ctx->r3) {
        // 0x801D4880: sh          $t0, 0xA8($a0)
        MEM_H(0XA8, ctx->r4) = ctx->r8;
            goto L_801D4890;
    }
    // 0x801D4880: sh          $t0, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r8;
    // 0x801D4884: lbu         $t2, 0x6($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X6);
    // 0x801D4888: b           L_801D4894
    // 0x801D488C: sb          $t2, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r10;
        goto L_801D4894;
    // 0x801D488C: sb          $t2, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r10;
L_801D4890:
    // 0x801D4890: sb          $zero, 0x70($a0)
    MEM_B(0X70, ctx->r4) = 0;
L_801D4894:
    // 0x801D4894: beq         $a3, $v0, L_801D48A0
    if (ctx->r7 == ctx->r2) {
        // 0x801D4898: addiu       $t3, $zero, 0x100
        ctx->r11 = ADD32(0, 0X100);
            goto L_801D48A0;
    }
    // 0x801D4898: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x801D489C: sh          $t3, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r11;
L_801D48A0:
    // 0x801D48A0: lhu         $t4, 0x24($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X24);
    // 0x801D48A4: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801D48A8: addiu       $t7, $t7, 0x6444
    ctx->r15 = ADD32(ctx->r15, 0X6444);
    // 0x801D48AC: sh          $t4, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r12;
    // 0x801D48B0: lw          $t5, 0x20($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X20);
    // 0x801D48B4: sb          $zero, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = 0;
    // 0x801D48B8: sb          $zero, 0xAB($a0)
    MEM_B(0XAB, ctx->r4) = 0;
    // 0x801D48BC: bne         $t7, $t5, L_801D48D0
    if (ctx->r15 != ctx->r13) {
        // 0x801D48C0: sw          $t5, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r13;
            goto L_801D48D0;
    }
    // 0x801D48C0: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x801D48C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D48C8: lhu         $t9, -0x2E2A($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E2A);
    // 0x801D48CC: sh          $t9, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r25;
L_801D48D0:
    // 0x801D48D0: sb          $a1, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r5;
    // 0x801D48D4: jr          $ra
    // 0x801D48D8: sb          $a1, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D48D8: sb          $a1, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_801E7FB4_5A3EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7FB4: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E7FB8: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x801E7FBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x801E7FC0: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E7FC4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801E7FC8: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x801E7FCC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x801E7FD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7FD4: mflo        $t7
    ctx->r15 = lo;
    // 0x801E7FD8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x801E7FDC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x801E7FE0: sh          $zero, 0x30F2($t9)
    MEM_H(0X30F2, ctx->r25) = 0;
    // 0x801E7FE4: lbu         $t0, 0x90($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X90);
    // 0x801E7FE8: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E7FEC: mflo        $t1
    ctx->r9 = lo;
    // 0x801E7FF0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x801E7FF4: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x801E7FF8: sh          $zero, 0x30F4($t3)
    MEM_H(0X30F4, ctx->r11) = 0;
    // 0x801E7FFC: lbu         $t4, 0x90($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X90);
    // 0x801E8000: multu       $t4, $v1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E8004: mflo        $t5
    ctx->r13 = lo;
    // 0x801E8008: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x801E800C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x801E8010: sh          $zero, 0x30F6($t7)
    MEM_H(0X30F6, ctx->r15) = 0;
    // 0x801E8014: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801E8018: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E801C: mflo        $t9
    ctx->r25 = lo;
    // 0x801E8020: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801E8024: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x801E8028: sh          $zero, 0x30F8($t1)
    MEM_H(0X30F8, ctx->r9) = 0;
    // 0x801E802C: lbu         $t2, 0x90($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X90);
    // 0x801E8030: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E8034: mflo        $t3
    ctx->r11 = lo;
    // 0x801E8038: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x801E803C: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x801E8040: swc1        $f0, 0x30FC($t5)
    MEM_W(0X30FC, ctx->r13) = ctx->f0.u32l;
    // 0x801E8044: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E8048: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E804C: mflo        $t7
    ctx->r15 = lo;
    // 0x801E8050: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x801E8054: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x801E8058: swc1        $f0, 0x3100($t9)
    MEM_W(0X3100, ctx->r25) = ctx->f0.u32l;
    // 0x801E805C: lbu         $t0, 0x90($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X90);
    // 0x801E8060: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E8064: mflo        $t1
    ctx->r9 = lo;
    // 0x801E8068: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x801E806C: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x801E8070: jr          $ra
    // 0x801E8074: swc1        $f0, 0x3104($t3)
    MEM_W(0X3104, ctx->r11) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E8074: swc1        $f0, 0x3104($t3)
    MEM_W(0X3104, ctx->r11) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801E78DC_5A37EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E78DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E78E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E78E4: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E78E8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E78EC: lhu         $v1, 0x86($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X86);
    // 0x801E78F0: beql        $v1, $zero, L_801E7940
    if (ctx->r3 == 0) {
        // 0x801E78F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7940;
    }
    goto skip_0;
    // 0x801E78F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E78F8: beq         $v1, $at, L_801E793C
    if (ctx->r3 == ctx->r1) {
        // 0x801E78FC: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_801E793C;
    }
    // 0x801E78FC: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801E7900: sh          $t6, 0x86($v0)
    MEM_H(0X86, ctx->r2) = ctx->r14;
    // 0x801E7904: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7908: lhu         $t7, 0x86($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X86);
    // 0x801E790C: bnel        $t7, $zero, L_801E7940
    if (ctx->r15 != 0) {
        // 0x801E7910: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7940;
    }
    goto skip_1;
    // 0x801E7910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E7914: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7918: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801E791C: bnel        $t8, $zero, L_801E7940
    if (ctx->r24 != 0) {
        // 0x801E7920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7940;
    }
    goto skip_2;
    // 0x801E7920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801E7924: sb          $t9, 0x84($v0)
    MEM_B(0X84, ctx->r2) = ctx->r25;
    // 0x801E7928: jal         0x801DD498
    // 0x801E792C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DD498_5993A8(rdram, ctx);
        goto after_0;
    // 0x801E792C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E7930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E7934: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7938: sb          $zero, 0x84($t0)
    MEM_B(0X84, ctx->r8) = 0;
L_801E793C:
    // 0x801E793C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E7940:
    // 0x801E7940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7944: jr          $ra
    // 0x801E7948: nop

    TRACE_RETURN()
    return;
    // 0x801E7948: nop

;}
RECOMP_FUNC void func_801E7F08_5A3E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7F08: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7F0C: slti        $v0, $v1, 0x2C
    ctx->r2 = SIGNED(ctx->r3) < 0X2C ? 1 : 0;
    // 0x801E7F10: bne         $v0, $zero, L_801E7F20
    if (ctx->r2 != 0) {
        // 0x801E7F14: slti        $v0, $v1, 0x31
        ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
            goto L_801E7F20;
    }
    // 0x801E7F14: slti        $v0, $v1, 0x31
    ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
    // 0x801E7F18: bne         $v0, $zero, L_801E7F28
    if (ctx->r2 != 0) {
        // 0x801E7F1C: nop
    
            goto L_801E7F28;
    }
    // 0x801E7F1C: nop

L_801E7F20:
    // 0x801E7F20: xori        $v0, $v1, 0xB9
    ctx->r2 = ctx->r3 ^ 0XB9;
    // 0x801E7F24: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_801E7F28:
    // 0x801E7F28: jr          $ra
    // 0x801E7F2C: nop

    TRACE_RETURN()
    return;
    // 0x801E7F2C: nop

;}
RECOMP_FUNC void func_801E11D4_59D0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11D8: jr          $ra
    // 0x801E11DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EB63C_5A754C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB63C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB644: jal         0x801EB6BC
    // 0x801EB648: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB648: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB654: jr          $ra
    // 0x801EB658: nop

    TRACE_RETURN()
    return;
    // 0x801EB658: nop

;}
RECOMP_FUNC void func_801DA924_596834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA924: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DA928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DA92C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DA930: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DA934: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DA938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA93C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DA940: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801DA944: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801DA948: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801DA94C: jal         0x801E7DE8
    // 0x801DA950: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DA950: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x801DA954: beq         $v0, $zero, L_801DA968
    if (ctx->r2 == 0) {
        // 0x801DA958: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA968;
    }
    // 0x801DA958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA95C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA960: b           L_801DA970
    // 0x801DA964: lwc1        $f0, -0x50D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X50D0);
        goto L_801DA970;
    // 0x801DA964: lwc1        $f0, -0x50D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X50D0);
L_801DA968:
    // 0x801DA968: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA96C: lwc1        $f0, -0x50CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X50CC);
L_801DA970:
    // 0x801DA970: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801DA974: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801DA978: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801DA97C: jal         0x801E7DE8
    // 0x801DA980: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801DA980: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_1:
    // 0x801DA984: beq         $v0, $zero, L_801DA99C
    if (ctx->r2 == 0) {
        // 0x801DA988: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA99C;
    }
    // 0x801DA988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA98C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA990: lwc1        $f4, -0x50C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X50C8);
    // 0x801DA994: b           L_801DA9AC
    // 0x801DA998: swc1        $f4, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f4.u32l;
        goto L_801DA9AC;
    // 0x801DA998: swc1        $f4, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f4.u32l;
L_801DA99C:
    // 0x801DA99C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801DA9A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA9A4: nop

    // 0x801DA9A8: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
L_801DA9AC:
    // 0x801DA9AC: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x801DA9B0: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801DA9B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801DA9B8: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x801DA9BC: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x801DA9C0: jal         0x801DACDC
    // 0x801DA9C4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DA9C4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    after_2:
    // 0x801DA9C8: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    // 0x801DA9CC: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801DA9D0: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801DA9D4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801DA9D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801DA9DC: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x801DA9E0: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x801DA9E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DA9E8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x801DA9EC: nop

    // 0x801DA9F0: sh          $t6, 0x32($t7)
    MEM_H(0X32, ctx->r15) = ctx->r14;
    // 0x801DA9F4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801DA9F8: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801DA9FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAA00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DAA04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DAA08: jr          $ra
    // 0x801DAA0C: nop

    TRACE_RETURN()
    return;
    // 0x801DAA0C: nop

;}
RECOMP_FUNC void func_801EADBC_5A6CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EADBC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EADC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EADC4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EADC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EADCC: jal         0x801EAE88
    // 0x801EADD0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_801EAE88_5A6D98(rdram, ctx);
        goto after_0;
    // 0x801EADD0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EADD4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801EADD8: jal         0x801E8858
    // 0x801EADDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_1;
    // 0x801EADDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801EADE0: lbu         $t6, 0x9C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X9C);
    // 0x801EADE4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801EADE8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EADEC: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x801EADF0: andi        $v1, $t7, 0xFF
    ctx->r3 = ctx->r15 & 0XFF;
    // 0x801EADF4: slti        $at, $v1, 0x20
    ctx->r1 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x801EADF8: beq         $at, $zero, L_801EAE10
    if (ctx->r1 == 0) {
        // 0x801EADFC: sb          $t7, 0x9C($s0)
        MEM_B(0X9C, ctx->r16) = ctx->r15;
            goto L_801EAE10;
    }
    // 0x801EADFC: sb          $t7, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = ctx->r15;
    // 0x801EAE00: sb          $t8, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r24;
    // 0x801EAE04: jal         0x8003521C
    // 0x801EAE08: addiu       $a0, $a0, -0x51A8
    ctx->r4 = ADD32(ctx->r4, -0X51A8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EAE08: addiu       $a0, $a0, -0x51A8
    ctx->r4 = ADD32(ctx->r4, -0X51A8);
    after_2:
    // 0x801EAE0C: lbu         $v1, 0x9C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9C);
L_801EAE10:
    // 0x801EAE10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EAE14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EAE18: lbu         $v0, 0x9D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9D);
    // 0x801EAE1C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EAE20: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EAE24: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801EAE28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EAE2C: addiu       $a1, $s0, 0xB8
    ctx->r5 = ADD32(ctx->r16, 0XB8);
    // 0x801EAE30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EAE34: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801EAE38: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801EAE3C: jal         0x801DC554
    // 0x801EAE40: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801EAE40: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x801EAE44: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EAE48: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EAE4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EAE50: jr          $ra
    // 0x801EAE54: nop

    TRACE_RETURN()
    return;
    // 0x801EAE54: nop

;}
RECOMP_FUNC void func_801F4FD0_5B0EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4FD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F4FE0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801F4FE4: jal         0x801F50A4
    // 0x801F4FE8: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F4FE8: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    after_0:
    // 0x801F4FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4FF4: jr          $ra
    // 0x801F4FF8: nop

    TRACE_RETURN()
    return;
    // 0x801F4FF8: nop

;}
RECOMP_FUNC void func_801E1F00_59DE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1F00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1F04: lwc1        $f0, -0x4D00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D00);
    // 0x801E1F08: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801E1F0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E1F10: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E1F14: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1F18: lwc1        $f6, -0x4CFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4CFC);
    // 0x801E1F1C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E1F20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E1F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1F28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1F2C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801E1F30: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x801E1F34: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801E1F38: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801E1F3C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E1F40: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801E1F44: jal         0x801E1F5C
    // 0x801E1F48: nop

    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_0;
    // 0x801E1F48: nop

    after_0:
    // 0x801E1F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1F54: jr          $ra
    // 0x801E1F58: nop

    TRACE_RETURN()
    return;
    // 0x801E1F58: nop

;}
RECOMP_FUNC void func_801DAF54_596E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAF54: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801DAF58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DAF5C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x801DAF60: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x801DAF64: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801DAF68: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801DAF6C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801DAF70: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801DAF74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801DAF78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801DAF7C: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DAF80: lbu         $t6, 0xCC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DAF84: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801DAF88: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DAF8C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DAF90: lw          $t0, 0x3F34($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3F34);
    // 0x801DAF94: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801DAF98: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801DAF9C: addiu       $t2, $t2, 0x3FF0
    ctx->r10 = ADD32(ctx->r10, 0X3FF0);
    // 0x801DAFA0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DAFA4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801DAFA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801DAFAC: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x801DAFB0: lw          $s4, 0x18($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X18);
    // 0x801DAFB4: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801DAFB8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801DAFBC: lhu         $at, 0x4($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X4);
    // 0x801DAFC0: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x801DAFC4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801DAFC8: addiu       $s5, $s5, -0x2DF0
    ctx->r21 = ADD32(ctx->r21, -0X2DF0);
    // 0x801DAFCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801DAFD0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DAFD4: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
    // 0x801DAFD8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x801DAFDC: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x801DAFE0: sh          $at, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r1;
L_801DAFE4:
    // 0x801DAFE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DAFE8: jal         0x801DB180
    // 0x801DAFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801DB180_597090(rdram, ctx);
        goto after_0;
    // 0x801DAFEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x801DAFF0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x801DAFF4: addu        $t8, $t6, $s4
    ctx->r24 = ADD32(ctx->r14, ctx->r20);
    // 0x801DAFF8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x801DAFFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DB000: jal         0x801DC87C
    // 0x801DB004: lbu         $a2, 0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X1);
    func_801DC87C_59878C(rdram, ctx);
        goto after_1;
    // 0x801DB004: lbu         $a2, 0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X1);
    after_1:
    // 0x801DB008: lbu         $t9, 0x90($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X90);
    // 0x801DB00C: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x801DB010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801DB014: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x801DB018: addu        $t0, $s5, $t7
    ctx->r8 = ADD32(ctx->r21, ctx->r15);
    // 0x801DB01C: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x801DB020: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801DB024: sb          $s6, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r22;
    // 0x801DB028: sb          $zero, 0xD4($s1)
    MEM_B(0XD4, ctx->r17) = 0;
    // 0x801DB02C: bne         $s0, $s7, L_801DAFE4
    if (ctx->r16 != ctx->r23) {
        // 0x801DB030: sb          $zero, 0xD7($s1)
        MEM_B(0XD7, ctx->r17) = 0;
            goto L_801DAFE4;
    }
    // 0x801DB030: sb          $zero, 0xD7($s1)
    MEM_B(0XD7, ctx->r17) = 0;
    // 0x801DB034: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DB038: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801DB03C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801DB040: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801DB044: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801DB048: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801DB04C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801DB050: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB054: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x801DB058: jr          $ra
    // 0x801DB05C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801DB05C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801E2BA8_59EAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E2BB4: jal         0x801E3834
    // 0x801E2BB8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2BB8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x801E2BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2BC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E2BC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2BC8: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2BCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2BD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2BD4: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x801E2BD8: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2BDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2BE0: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x801E2BE4: lwc1        $f12, 0x68($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X68);
    // 0x801E2BE8: lwc1        $f14, 0x6C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801E2BEC: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E2BF0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E2BF4: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2BF8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E2BFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E2C00: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E2C04: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E2C08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2C0C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E2C10: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801E2C14: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
    // 0x801E2C18: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2C1C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E2C20: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801E2C24: swc1        $f16, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f16.u32l;
    // 0x801E2C28: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x801E2C2C: swc1        $f10, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f10.u32l;
    // 0x801E2C30: swc1        $f6, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f6.u32l;
    // 0x801E2C34: lhu         $t0, 0x1A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X1A);
    // 0x801E2C38: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x801E2C3C: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x801E2C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2C48: jr          $ra
    // 0x801E2C4C: nop

    TRACE_RETURN()
    return;
    // 0x801E2C4C: nop

;}
RECOMP_FUNC void func_801D23D4_58E2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D23D4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D23D8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x801D23DC: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801D23E0: addiu       $s0, $s0, -0x3410
    ctx->r16 = ADD32(ctx->r16, -0X3410);
    // 0x801D23E4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801D23E8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801D23EC: jal         0x801D25EC
    // 0x801D23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D25EC_58E4FC(rdram, ctx);
        goto after_0;
    // 0x801D23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801D23F4: jal         0x80003DC0
    // 0x801D23F8: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    func_80003DC0_49C0(rdram, ctx);
        goto after_1;
    // 0x801D23F8: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    after_1:
    // 0x801D23FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2400: lwc1        $f12, -0x53D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X53D4);
    // 0x801D2404: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801D2408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D240C: jal         0x80003A94
    // 0x801D2410: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801D2410: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    after_2:
    // 0x801D2414: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x801D2418: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D241C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D2420: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D2424: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D2428: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x801D242C: addiu       $t6, $t6, -0x33B0
    ctx->r14 = ADD32(ctx->r14, -0X33B0);
    // 0x801D2430: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x801D2434: addiu       $t8, $s0, 0x60
    ctx->r24 = ADD32(ctx->r16, 0X60);
L_801D2438:
    // 0x801D2438: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801D243C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801D2440: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D2444: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801D2448: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801D244C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801D2450: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801D2454: bne         $t9, $t8, L_801D2438
    if (ctx->r25 != ctx->r24) {
        // 0x801D2458: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801D2438;
    }
    // 0x801D2458: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801D245C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D2460: addu        $a1, $s0, $at
    ctx->r5 = ADD32(ctx->r16, ctx->r1);
    // 0x801D2464: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801D2468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D246C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2470: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801D2474: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D2478: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x801D247C: addiu       $a0, $a0, 0x23C8
    ctx->r4 = ADD32(ctx->r4, 0X23C8);
    // 0x801D2480: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D2484: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D2488: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D248C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D2490: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801D2494: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801D2498: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801D249C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D24A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D24A4: jal         0x80035854
    // 0x801D24A8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_3;
    // 0x801D24A8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801D24AC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801D24B0: addiu       $s0, $s0, -0x39DC
    ctx->r16 = ADD32(ctx->r16, -0X39DC);
    // 0x801D24B4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801D24B8: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x801D24BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801D24C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D24C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D24C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D24CC: jal         0x80035EEC
    // 0x801D24D0: sw          $t0, -0x39D8($at)
    MEM_W(-0X39D8, ctx->r1) = ctx->r8;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801D24D0: sw          $t0, -0x39D8($at)
    MEM_W(-0X39D8, ctx->r1) = ctx->r8;
    after_4:
    // 0x801D24D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D24D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801D24DC: sw          $v0, -0x39D4($at)
    MEM_W(-0X39D4, ctx->r1) = ctx->r2;
    // 0x801D24E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D24E4: addiu       $a1, $a1, -0x33B0
    ctx->r5 = ADD32(ctx->r5, -0X33B0);
    // 0x801D24E8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D24EC: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801D24F0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D24F4: addiu       $a2, $a2, -0x1F10
    ctx->r6 = ADD32(ctx->r6, -0X1F10);
    // 0x801D24F8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D24FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D2500: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D2504: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D2508: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D250C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801D2510: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801D2514: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801D2518: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D251C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D2520: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D2524: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D2528: jal         0x80035A5C
    // 0x801D252C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035A5C_3665C(rdram, ctx);
        goto after_5;
    // 0x801D252C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x801D2530: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801D2534: lw          $t2, -0x39D4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D4);
    // 0x801D2538: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D253C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D2540: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x801D2544: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D2548: jal         0x80035EEC
    // 0x801D254C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_6;
    // 0x801D254C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x801D2550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D2554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801D2558: sw          $v0, -0x39CC($at)
    MEM_W(-0X39CC, ctx->r1) = ctx->r2;
    // 0x801D255C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D2560: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801D2564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D256C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D2570: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D2574: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D2578: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801D257C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801D2580: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801D2584: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D2588: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D258C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D2590: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D2594: jal         0x80035A5C
    // 0x801D2598: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035A5C_3665C(rdram, ctx);
        goto after_7;
    // 0x801D2598: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x801D259C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801D25A0: lw          $t3, -0x39CC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39CC);
    // 0x801D25A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D25A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D25AC: sb          $a0, 0x64($t3)
    MEM_B(0X64, ctx->r11) = ctx->r4;
    // 0x801D25B0: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x801D25B4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801D25B8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801D25BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801D25C0: sw          $t4, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->r12;
    // 0x801D25C4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801D25C8: sb          $zero, 0x90($t7)
    MEM_B(0X90, ctx->r15) = 0;
    // 0x801D25CC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801D25D0: sh          $a0, 0x5C($t8)
    MEM_H(0X5C, ctx->r24) = ctx->r4;
    // 0x801D25D4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801D25D8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801D25DC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801D25E0: sb          $a0, 0x7AE8($at)
    MEM_B(0X7AE8, ctx->r1) = ctx->r4;
    // 0x801D25E4: jr          $ra
    // 0x801D25E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801D25E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801DCD48_598C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCD48: sll         $a1, $a0, 24
    ctx->r5 = S32(ctx->r4 << 24);
    // 0x801DCD4C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x801DCD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DCD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DCD58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DCD5C: blez        $t6, L_801DCDD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801DCD60: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801DCDD0;
    }
    // 0x801DCD60: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DCD64: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DCD68: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x801DCD6C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x801DCD70: lb          $t7, 0xF($v1)
    ctx->r15 = MEM_B(ctx->r3, 0XF);
    // 0x801DCD74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DCD78: slt         $at, $t7, $a0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801DCD7C: bnel        $at, $zero, L_801DCD90
    if (ctx->r1 != 0) {
        // 0x801DCD80: addiu       $a0, $zero, 0x26A
        ctx->r4 = ADD32(0, 0X26A);
            goto L_801DCD90;
    }
    goto skip_0;
    // 0x801DCD80: addiu       $a0, $zero, 0x26A
    ctx->r4 = ADD32(0, 0X26A);
    skip_0:
    // 0x801DCD84: b           L_801DCE00
    // 0x801DCD88: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
        goto L_801DCE00;
    // 0x801DCD88: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x801DCD8C: addiu       $a0, $zero, 0x26A
    ctx->r4 = ADD32(0, 0X26A);
L_801DCD90:
    // 0x801DCD90: jal         0x80038BC8
    // 0x801DCD94: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801DCD94: sb          $a1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DCD98: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DCD9C: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x801DCDA0: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x801DCDA4: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x801DCDA8: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x801DCDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DCDB0: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x801DCDB4: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x801DCDB8: lb          $t0, 0xF($v1)
    ctx->r8 = MEM_B(ctx->r3, 0XF);
    // 0x801DCDBC: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801DCDC0: beql        $at, $zero, L_801DCE00
    if (ctx->r1 == 0) {
        // 0x801DCDC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DCE00;
    }
    goto skip_1;
    // 0x801DCDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DCDC8: b           L_801DCE00
    // 0x801DCDCC: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
        goto L_801DCE00;
    // 0x801DCDCC: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
L_801DCDD0:
    // 0x801DCDD0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DCDD4: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x801DCDD8: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x801DCDDC: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x801DCDE0: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x801DCDE4: lb          $t3, 0xF($v1)
    ctx->r11 = MEM_B(ctx->r3, 0XF);
    // 0x801DCDE8: bgezl       $t3, L_801DCE00
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801DCDEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DCE00;
    }
    goto skip_2;
    // 0x801DCDEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801DCDF0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801DCDF4: b           L_801DCE00
    // 0x801DCDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DCE00;
    // 0x801DCDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DCDFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCE00:
    // 0x801DCE00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DCE04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DCE08: jr          $ra
    // 0x801DCE0C: nop

    TRACE_RETURN()
    return;
    // 0x801DCE0C: nop

;}
RECOMP_FUNC void func_801FA6C4_5B65D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FA6C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA6CC: jal         0x801FA6E4
    // 0x801FA6D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801FA6E4_5B65F4(rdram, ctx);
        goto after_0;
    // 0x801FA6D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x801FA6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FA6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FA6DC: jr          $ra
    // 0x801FA6E0: nop

    TRACE_RETURN()
    return;
    // 0x801FA6E0: nop

;}
RECOMP_FUNC void func_801DE6E4_59A5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE6E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE6EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE6F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE6F4: jal         0x801E3EBC
    // 0x801DE6F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_0;
    // 0x801DE6F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x801DE6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE704: jr          $ra
    // 0x801DE708: nop

    TRACE_RETURN()
    return;
    // 0x801DE708: nop

;}
RECOMP_FUNC void func_801EE2BC_5AA1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE2BC: beq         $a0, $zero, L_801EE2E4
    if (ctx->r4 == 0) {
        // 0x801EE2C0: nop
    
            goto L_801EE2E4;
    }
    // 0x801EE2C0: nop

    // 0x801EE2C4: beq         $a1, $zero, L_801EE2E4
    if (ctx->r5 == 0) {
        // 0x801EE2C8: nop
    
            goto L_801EE2E4;
    }
    // 0x801EE2C8: nop

    // 0x801EE2CC: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x801EE2D0: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x801EE2D4: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x801EE2D8: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801EE2DC: lhu         $t8, 0x18($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X18);
    // 0x801EE2E0: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
L_801EE2E4:
    // 0x801EE2E4: jr          $ra
    // 0x801EE2E8: nop

    TRACE_RETURN()
    return;
    // 0x801EE2E8: nop

;}
RECOMP_FUNC void func_801DFBC4_59BAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFBC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DFBC8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DFBCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DFBD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DFBD4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DFBD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DFBDC: jalr        $t9
    // 0x801DFBE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DFBE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DFBE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DFBE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DFBEC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFBF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DFBF4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DFBF8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DFBFC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DFC00: nop

    // 0x801DFC04: bc1fl       L_801DFC3C
    if (!c1cs) {
        // 0x801DFC08: lbu         $v0, 0x60($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X60);
            goto L_801DFC3C;
    }
    goto skip_0;
    // 0x801DFC08: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    skip_0:
    // 0x801DFC0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DFC10: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x801DFC14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801DFC18: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801DFC1C: jal         0x801E55D4
    // 0x801DFC20: nop

    func_801E55D4_5A14E4(rdram, ctx);
        goto after_1;
    // 0x801DFC20: nop

    after_1:
    // 0x801DFC24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DFC28: jal         0x801DACDC
    // 0x801DFC2C: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DFC2C: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_2:
    // 0x801DFC30: b           L_801DFC64
    // 0x801DFC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DFC64;
    // 0x801DFC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DFC38: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
L_801DFC3C:
    // 0x801DFC3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFC40: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFC44: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801DFC48: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801DFC4C: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801DFC50: lw          $a2, 0x4370($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4370);
    // 0x801DFC54: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFC58: jal         0x801E54E0
    // 0x801DFC5C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_3;
    // 0x801DFC5C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    after_3:
    // 0x801DFC60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DFC64:
    // 0x801DFC64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DFC68: jr          $ra
    // 0x801DFC6C: nop

    TRACE_RETURN()
    return;
    // 0x801DFC6C: nop

;}
RECOMP_FUNC void func_801E15D0_59D4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E15D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E15D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E15D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E15DC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E15E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E15E4: jal         0x801D9AB0
    // 0x801E15E8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_801D9AB0_5959C0(rdram, ctx);
        goto after_0;
    // 0x801E15E8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E15EC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x801E15F0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801E15F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E15F8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801E15FC: lw          $a0, 0x80($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X80);
    // 0x801E1600: beq         $a0, $zero, L_801E1610
    if (ctx->r4 == 0) {
        // 0x801E1604: nop
    
            goto L_801E1610;
    }
    // 0x801E1604: nop

    // 0x801E1608: b           L_801E1610
    // 0x801E160C: lhu         $a1, 0x5C($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X5C);
        goto L_801E1610;
    // 0x801E160C: lhu         $a1, 0x5C($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X5C);
L_801E1610:
    // 0x801E1610: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x801E1614: beql        $t7, $zero, L_801E1678
    if (ctx->r15 == 0) {
        // 0x801E1618: lbu         $t4, 0x90($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X90);
            goto L_801E1678;
    }
    goto skip_0;
    // 0x801E1618: lbu         $t4, 0x90($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X90);
    skip_0:
    // 0x801E161C: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x801E1620: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    // 0x801E1624: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E1628: addiu       $t0, $t0, 0x44D4
    ctx->r8 = ADD32(ctx->r8, 0X44D4);
    // 0x801E162C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E1630: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E1634: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801E1638: swc1        $f18, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f18.u32l;
    // 0x801E163C: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    // 0x801E1640: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801E1644: jal         0x801DC0A8
    // 0x801E1648: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    func_801DC0A8_597FB8(rdram, ctx);
        goto after_1;
    // 0x801E1648: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    after_1:
    // 0x801E164C: lbu         $t2, 0x30($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X30);
    // 0x801E1650: ori         $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 | 0X8000;
    // 0x801E1654: sh          $t1, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = ctx->r9;
    // 0x801E1658: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x801E165C: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x801E1660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1664: jal         0x801DACDC
    // 0x801E1668: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E1668: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_2:
    // 0x801E166C: b           L_801E1918
    // 0x801E1670: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801E1918;
    // 0x801E1670: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E1674: lbu         $t4, 0x90($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X90);
L_801E1678:
    // 0x801E1678: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801E167C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1680: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801E1684: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801E1688: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801E168C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801E1690: lhu         $t6, 0x7DB4($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7DB4);
    // 0x801E1694: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x801E1698: beql        $t7, $zero, L_801E1890
    if (ctx->r15 == 0) {
        // 0x801E169C: lhu         $t3, 0x32($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X32);
            goto L_801E1890;
    }
    goto skip_1;
    // 0x801E169C: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    skip_1:
    // 0x801E16A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E16A4: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801E16A8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E16AC: nop

    // 0x801E16B0: bc1fl       L_801E16C4
    if (!c1cs) {
        // 0x801E16B4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E16C4;
    }
    goto skip_2;
    // 0x801E16B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801E16B8: b           L_801E16C4
    // 0x801E16BC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E16C4;
    // 0x801E16BC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E16C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E16C4:
    // 0x801E16C4: lwc1        $f4, -0x4D2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D2C);
    // 0x801E16C8: addiu       $at, $zero, 0x322
    ctx->r1 = ADD32(0, 0X322);
    // 0x801E16CC: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x801E16D0: nop

    // 0x801E16D4: bc1fl       L_801E1890
    if (!c1cs) {
        // 0x801E16D8: lhu         $t3, 0x32($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X32);
            goto L_801E1890;
    }
    goto skip_3;
    // 0x801E16D8: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    skip_3:
    // 0x801E16DC: beq         $a1, $at, L_801E188C
    if (ctx->r5 == ctx->r1) {
        // 0x801E16E0: addiu       $at, $zero, 0x33B
        ctx->r1 = ADD32(0, 0X33B);
            goto L_801E188C;
    }
    // 0x801E16E0: addiu       $at, $zero, 0x33B
    ctx->r1 = ADD32(0, 0X33B);
    // 0x801E16E4: beq         $a1, $at, L_801E188C
    if (ctx->r5 == ctx->r1) {
        // 0x801E16E8: addiu       $at, $zero, 0x33C
        ctx->r1 = ADD32(0, 0X33C);
            goto L_801E188C;
    }
    // 0x801E16E8: addiu       $at, $zero, 0x33C
    ctx->r1 = ADD32(0, 0X33C);
    // 0x801E16EC: beql        $a1, $at, L_801E1890
    if (ctx->r5 == ctx->r1) {
        // 0x801E16F0: lhu         $t3, 0x32($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X32);
            goto L_801E1890;
    }
    goto skip_4;
    // 0x801E16F0: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    skip_4:
    // 0x801E16F4: lhu         $t8, 0x98($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X98);
    // 0x801E16F8: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x801E16FC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801E1700: beql        $t8, $at, L_801E1890
    if (ctx->r24 == ctx->r1) {
        // 0x801E1704: lhu         $t3, 0x32($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X32);
            goto L_801E1890;
    }
    goto skip_5;
    // 0x801E1704: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    skip_5:
    // 0x801E1708: lbu         $t9, 0x7AA4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7AA4);
    // 0x801E170C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E1710: beql        $t9, $at, L_801E1890
    if (ctx->r25 == ctx->r1) {
        // 0x801E1714: lhu         $t3, 0x32($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X32);
            goto L_801E1890;
    }
    goto skip_6;
    // 0x801E1714: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    skip_6:
    // 0x801E1718: jal         0x801E7DE8
    // 0x801E171C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_3;
    // 0x801E171C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E1720: bne         $v0, $zero, L_801E188C
    if (ctx->r2 != 0) {
        // 0x801E1724: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_801E188C;
    }
    // 0x801E1724: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E1728: lhu         $t0, 0x7AB2($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7AB2);
    // 0x801E172C: addiu       $at, $zero, 0x1E1
    ctx->r1 = ADD32(0, 0X1E1);
    // 0x801E1730: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801E1734: beq         $t0, $at, L_801E188C
    if (ctx->r8 == ctx->r1) {
        // 0x801E1738: lui         $a1, 0x4258
        ctx->r5 = S32(0X4258 << 16);
            goto L_801E188C;
    }
    // 0x801E1738: lui         $a1, 0x4258
    ctx->r5 = S32(0X4258 << 16);
    // 0x801E173C: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1740: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801E1744: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E1748: lhu         $t2, 0xA($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XA);
    // 0x801E174C: addiu       $t6, $t6, 0x44D4
    ctx->r14 = ADD32(ctx->r14, 0X44D4);
    // 0x801E1750: addiu       $t4, $t4, 0x44BC
    ctx->r12 = ADD32(ctx->r12, 0X44BC);
    // 0x801E1754: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801E1758: lbu         $v0, 0x90($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X90);
    // 0x801E175C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x801E1760: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x801E1764: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801E1768: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x801E176C: sll         $v0, $t3, 2
    ctx->r2 = S32(ctx->r11 << 2);
    // 0x801E1770: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x801E1774: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801E1778: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801E177C: jal         0x801DBA80
    // 0x801E1780: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_801DBA80_597990(rdram, ctx);
        goto after_4;
    // 0x801E1780: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_4:
    // 0x801E1784: beq         $v0, $zero, L_801E188C
    if (ctx->r2 == 0) {
        // 0x801E1788: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_801E188C;
    }
    // 0x801E1788: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801E178C: lbu         $v0, 0x90($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X90);
    // 0x801E1790: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801E1794: addiu       $t0, $t0, 0x44D4
    ctx->r8 = ADD32(ctx->r8, 0X44D4);
    // 0x801E1798: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801E179C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801E17A0: sll         $v0, $t8, 2
    ctx->r2 = S32(ctx->r24 << 2);
    // 0x801E17A4: addiu       $t9, $t9, 0x44BC
    ctx->r25 = ADD32(ctx->r25, 0X44BC);
    // 0x801E17A8: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x801E17AC: jal         0x801E8678
    // 0x801E17B0: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    func_801E8678_5A4588(rdram, ctx);
        goto after_5;
    // 0x801E17B0: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    after_5:
    // 0x801E17B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E17B8: beq         $v0, $zero, L_801E188C
    if (ctx->r2 == 0) {
        // 0x801E17BC: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_801E188C;
    }
    // 0x801E17BC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801E17C0: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E17C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801E17C8: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801E17CC: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x801E17D0: lbu         $t3, 0x90($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X90);
    // 0x801E17D4: swc1        $f18, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f18.u32l;
    // 0x801E17D8: swc1        $f18, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f18.u32l;
    // 0x801E17DC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E17E0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x801E17E4: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x801E17E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801E17EC: addiu       $t5, $t5, 0x44BC
    ctx->r13 = ADD32(ctx->r13, 0X44BC);
    // 0x801E17F0: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x801E17F4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E17F8: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801E17FC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801E1800: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801E1804: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E1808: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801E180C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E1810: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E1814: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1818: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801E181C: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E1820: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E1824: addiu       $t0, $t0, 0x44BC
    ctx->r8 = ADD32(ctx->r8, 0X44BC);
    // 0x801E1828: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x801E182C: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801E1830: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801E1834: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E1838: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E183C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E1840: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x801E1844: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1848: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    // 0x801E184C: lwc1        $f2, 0x4($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X4);
    // 0x801E1850: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E1854: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E1858: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801E185C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801E1860: swc1        $f2, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f2.u32l;
    // 0x801E1864: swc1        $f2, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f2.u32l;
    // 0x801E1868: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E186C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x801E1870: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801E1874: jal         0x8001D14C
    // 0x801E1878: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_6;
    // 0x801E1878: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801E187C: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1880: ori         $t1, $v0, 0x400
    ctx->r9 = ctx->r2 | 0X400;
    // 0x801E1884: b           L_801E1914
    // 0x801E1888: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
        goto L_801E1914;
    // 0x801E1888: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
L_801E188C:
    // 0x801E188C: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
L_801E1890:
    // 0x801E1890: lbu         $t4, 0x33($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X33);
    // 0x801E1894: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E1898: bne         $t3, $zero, L_801E18B4
    if (ctx->r11 != 0) {
        // 0x801E189C: addu        $a1, $a1, $t4
        ctx->r5 = ADD32(ctx->r5, ctx->r12);
            goto L_801E18B4;
    }
    // 0x801E189C: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x801E18A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E18A4: jal         0x801DACDC
    // 0x801E18A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801E18A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x801E18AC: b           L_801E1918
    // 0x801E18B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801E1918;
    // 0x801E18B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E18B4:
    // 0x801E18B4: lbu         $a1, 0x43AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X43AF);
    // 0x801E18B8: lbu         $t5, 0xCC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCC);
    // 0x801E18BC: beql        $a1, $t5, L_801E18E0
    if (ctx->r5 == ctx->r13) {
        // 0x801E18C0: lw          $v1, 0x5C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X5C);
            goto L_801E18E0;
    }
    goto skip_7;
    // 0x801E18C0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    skip_7:
    // 0x801E18C4: jal         0x801DACDC
    // 0x801E18C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801E18C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E18CC: jal         0x801E1928
    // 0x801E18D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1928_59D838(rdram, ctx);
        goto after_9;
    // 0x801E18D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E18D4: b           L_801E1918
    // 0x801E18D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801E1918;
    // 0x801E18D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E18DC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
L_801E18E0:
    // 0x801E18E0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801E18E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E18E8: lhu         $t6, 0x30($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X30);
    // 0x801E18EC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E18F0: sh          $t7, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r15;
    // 0x801E18F4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E18F8: lhu         $t9, 0x30($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X30);
    // 0x801E18FC: bne         $t9, $at, L_801E190C
    if (ctx->r25 != ctx->r1) {
        // 0x801E1900: nop
    
            goto L_801E190C;
    }
    // 0x801E1900: nop

    // 0x801E1904: jal         0x801DD6E0
    // 0x801E1908: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_10;
    // 0x801E1908: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_10:
L_801E190C:
    // 0x801E190C: jal         0x801E1928
    // 0x801E1910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1928_59D838(rdram, ctx);
        goto after_11;
    // 0x801E1910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_801E1914:
    // 0x801E1914: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E1918:
    // 0x801E1918: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E191C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E1920: jr          $ra
    // 0x801E1924: nop

    TRACE_RETURN()
    return;
    // 0x801E1924: nop

;}
RECOMP_FUNC void func_801ED1F0_5A9100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED1F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801ED1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED1F8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801ED1FC: addiu       $a1, $a1, -0x2D94
    ctx->r5 = ADD32(ctx->r5, -0X2D94);
    // 0x801ED200: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801ED204: jal         0x80034E08
    // 0x801ED208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801ED208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801ED20C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801ED210: beq         $v0, $zero, L_801ED25C
    if (ctx->r2 == 0) {
        // 0x801ED214: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801ED25C;
    }
    // 0x801ED214: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801ED218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801ED21C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801ED220: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801ED224: jal         0x80035EEC
    // 0x801ED228: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801ED228: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x801ED22C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801ED230: bne         $v0, $zero, L_801ED244
    if (ctx->r2 != 0) {
        // 0x801ED234: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_801ED244;
    }
    // 0x801ED234: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801ED238: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801ED23C: b           L_801ED25C
    // 0x801ED240: sb          $t6, 0x65($a3)
    MEM_B(0X65, ctx->r7) = ctx->r14;
        goto L_801ED25C;
    // 0x801ED240: sb          $t6, 0x65($a3)
    MEM_B(0X65, ctx->r7) = ctx->r14;
L_801ED244:
    // 0x801ED244: sb          $zero, 0x60($a0)
    MEM_B(0X60, ctx->r4) = 0;
    // 0x801ED248: sb          $zero, 0x61($a0)
    MEM_B(0X61, ctx->r4) = 0;
    // 0x801ED24C: sh          $zero, 0x62($a0)
    MEM_H(0X62, ctx->r4) = 0;
    // 0x801ED250: lw          $t7, 0x5C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X5C);
    // 0x801ED254: sw          $a3, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r7;
    // 0x801ED258: sw          $t7, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r15;
L_801ED25C:
    // 0x801ED25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801ED264: jr          $ra
    // 0x801ED268: nop

    TRACE_RETURN()
    return;
    // 0x801ED268: nop

;}
RECOMP_FUNC void func_801E0D5C_59CC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0D64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0D68: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801E0D6C: jal         0x801DD720
    // 0x801E0D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E0D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E0D74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0D78: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0D7C: jalr        $t9
    // 0x801E0D80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E0D80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E0D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0D88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0D8C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0D90: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E0D94: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E0D98: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0D9C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E0DA0: nop

    // 0x801E0DA4: bc1fl       L_801E0DEC
    if (!c1cs) {
        // 0x801E0DA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0DEC;
    }
    goto skip_0;
    // 0x801E0DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0DAC: lbu         $t7, 0x60($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X60);
    // 0x801E0DB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E0DB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E0DB8: bnel        $t7, $at, L_801E0DD4
    if (ctx->r15 != ctx->r1) {
        // 0x801E0DBC: lbu         $t8, 0x30($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X30);
            goto L_801E0DD4;
    }
    goto skip_1;
    // 0x801E0DBC: lbu         $t8, 0x30($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X30);
    skip_1:
    // 0x801E0DC0: jal         0x801DACDC
    // 0x801E0DC4: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0DC4: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_2:
    // 0x801E0DC8: b           L_801E0DEC
    // 0x801E0DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E0DEC;
    // 0x801E0DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0DD0: lbu         $t8, 0x30($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X30);
L_801E0DD4:
    // 0x801E0DD4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E0DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0DDC: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x801E0DE0: jal         0x801DACDC
    // 0x801E0DE4: sb          $t0, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r8;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E0DE4: sb          $t0, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r8;
    after_3:
    // 0x801E0DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0DEC:
    // 0x801E0DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0DF0: jr          $ra
    // 0x801E0DF4: nop

    TRACE_RETURN()
    return;
    // 0x801E0DF4: nop

;}
RECOMP_FUNC void func_801EE090_5A9FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EE094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EE098: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801EE09C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EE0A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801EE0A4: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x801EE0A8: addiu       $t7, $t6, 0x6
    ctx->r15 = ADD32(ctx->r14, 0X6);
    // 0x801EE0AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EE0B0: jal         0x801E8890
    // 0x801EE0B4: addiu       $a3, $t6, 0x4
    ctx->r7 = ADD32(ctx->r14, 0X4);
    func_801E8890_5A47A0(rdram, ctx);
        goto after_0;
    // 0x801EE0B4: addiu       $a3, $t6, 0x4
    ctx->r7 = ADD32(ctx->r14, 0X4);
    after_0:
    // 0x801EE0B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EE0BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EE0C0: jr          $ra
    // 0x801EE0C4: nop

    TRACE_RETURN()
    return;
    // 0x801EE0C4: nop

;}
RECOMP_FUNC void func_801CE3F0_58A300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE3F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CE3F4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CE3F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CE3FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CE400: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x801CE404: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x801CE408: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    // 0x801CE40C: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x801CE410: lbu         $t6, 0x5E($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5E);
    // 0x801CE414: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CE418: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x801CE41C: beq         $t7, $zero, L_801CE42C
    if (ctx->r15 == 0) {
        // 0x801CE420: nop
    
            goto L_801CE42C;
    }
    // 0x801CE420: nop

    // 0x801CE424: b           L_801CE4C0
    // 0x801CE428: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_801CE4C0;
    // 0x801CE428: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_801CE42C:
    // 0x801CE42C: lw          $v0, -0x35D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35D4);
    // 0x801CE430: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CE434: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CE438: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x801CE43C: nop

    // 0x801CE440: bc1fl       L_801CE47C
    if (!c1cs) {
        // 0x801CE444: c.eq.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
            goto L_801CE47C;
    }
    goto skip_0;
    // 0x801CE444: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    skip_0:
    // 0x801CE448: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CE44C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801CE450: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x801CE454: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x801CE458: bnel        $t0, $zero, L_801CE47C
    if (ctx->r8 != 0) {
        // 0x801CE45C: c.eq.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
            goto L_801CE47C;
    }
    goto skip_1;
    // 0x801CE45C: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    skip_1:
    // 0x801CE460: lw          $t1, -0x39DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39DC);
    // 0x801CE464: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x801CE468: sb          $zero, 0xAB($t1)
    MEM_B(0XAB, ctx->r9) = 0;
    // 0x801CE46C: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CE470: b           L_801CE4C0
    // 0x801CE474: sb          $zero, 0x78($t2)
    MEM_B(0X78, ctx->r10) = 0;
        goto L_801CE4C0;
    // 0x801CE474: sb          $zero, 0x78($t2)
    MEM_B(0X78, ctx->r10) = 0;
    // 0x801CE478: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
L_801CE47C:
    // 0x801CE47C: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CE480: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CE484: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x801CE488: bc1t        L_801CE498
    if (c1cs) {
        // 0x801CE48C: neg.s       $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
            goto L_801CE498;
    }
    // 0x801CE48C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801CE490: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801CE494: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
L_801CE498:
    // 0x801CE498: c.eq.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl == ctx->f14.fl;
    // 0x801CE49C: addiu       $a1, $a0, 0x74
    ctx->r5 = ADD32(ctx->r4, 0X74);
    // 0x801CE4A0: bc1t        L_801CE4C0
    if (c1cs) {
        // 0x801CE4A4: nop
    
            goto L_801CE4C0;
    }
    // 0x801CE4A4: nop

    // 0x801CE4A8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801CE4AC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801CE4B0: jal         0x801CE4D0
    // 0x801CE4B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801CE4D0_58A3E0(rdram, ctx);
        goto after_0;
    // 0x801CE4B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801CE4B8: b           L_801CE4C4
    // 0x801CE4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CE4C4;
    // 0x801CE4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CE4C0:
    // 0x801CE4C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CE4C4:
    // 0x801CE4C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CE4C8: jr          $ra
    // 0x801CE4CC: nop

    TRACE_RETURN()
    return;
    // 0x801CE4CC: nop

;}
RECOMP_FUNC void func_801EBA5C_5A796C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBA5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EBA60: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801EBA64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EBA68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EBA6C: lui         $a1, 0xC1B7
    ctx->r5 = S32(0XC1B7 << 16);
    // 0x801EBA70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EBA74: lui         $a2, 0x42D0
    ctx->r6 = S32(0X42D0 << 16);
    // 0x801EBA78: lui         $a3, 0x4219
    ctx->r7 = S32(0X4219 << 16);
    // 0x801EBA7C: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x801EBA80: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801EBA84: ori         $a3, $a3, 0x9134
    ctx->r7 = ctx->r7 | 0X9134;
    // 0x801EBA88: ori         $a2, $a2, 0x4CE7
    ctx->r6 = ctx->r6 | 0X4CE7;
    // 0x801EBA8C: ori         $a1, $a1, 0xB7B5
    ctx->r5 = ctx->r5 | 0XB7B5;
    // 0x801EBA90: jal         0x801EBAA8
    // 0x801EBA94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EBAA8_5A79B8(rdram, ctx);
        goto after_0;
    // 0x801EBA94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801EBA98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBA9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EBAA0: jr          $ra
    // 0x801EBAA4: nop

    TRACE_RETURN()
    return;
    // 0x801EBAA4: nop

;}
RECOMP_FUNC void func_801FADC4_5B6CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FADC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FADC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FADCC: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801FADD0: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801FADD4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x801FADD8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FADDC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FADE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FADE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FADE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FADEC: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x801FADF0: lhu         $t7, 0x2DF2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x801FADF4: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FADF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801FADFC: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    // 0x801FAE00: lhu         $t8, 0x2DF4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2DF4);
    // 0x801FAE04: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x801FAE08: lbu         $t9, 0x2DE4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2DE4);
    // 0x801FAE0C: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x801FAE10: sb          $zero, -0x774($at)
    MEM_B(-0X774, ctx->r1) = 0;
    // 0x801FAE14: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE18: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAE1C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FAE20: jal         0x801F8EDC
    // 0x801FAE24: sh          $a1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r5;
    func_801F8EDC_5B4DEC(rdram, ctx);
        goto after_0;
    // 0x801FAE24: sh          $a1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r5;
    after_0:
    // 0x801FAE28: jal         0x801F8790
    // 0x801FAE2C: nop

    func_801F8790_5B46A0(rdram, ctx);
        goto after_1;
    // 0x801FAE2C: nop

    after_1:
    // 0x801FAE30: jal         0x801F87F8
    // 0x801FAE34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F87F8_5B4708(rdram, ctx);
        goto after_2;
    // 0x801FAE34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801FAE38: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAE3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FAE40: jal         0x80035EEC
    // 0x801FAE44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801FAE44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801FAE48: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE4C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAE50: lui         $a1, 0xD
    ctx->r5 = S32(0XD << 16);
    // 0x801FAE54: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FAE58: sw          $v0, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r2;
    // 0x801FAE5C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE60: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAE64: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x801FAE68: jal         0x801F95D8
    // 0x801FAE6C: lw          $a1, -0x704($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X704);
    func_801F95D8_5B54E8(rdram, ctx);
        goto after_4;
    // 0x801FAE6C: lw          $a1, -0x704($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X704);
    after_4:
    // 0x801FAE70: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE74: lhu         $t3, 0x26($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X26);
    // 0x801FAE78: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAE7C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FAE80: sh          $t3, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r11;
    // 0x801FAE84: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE88: lhu         $t5, 0x24($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X24);
    // 0x801FAE8C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAE90: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FAE94: sh          $t5, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r13;
    // 0x801FAE98: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801FAE9C: lhu         $t7, 0x22($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X22);
    // 0x801FAEA0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAEA4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FAEA8: sb          $t7, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r15;
    // 0x801FAEAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FAEB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FAEB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FAEB8: jr          $ra
    // 0x801FAEBC: nop

    TRACE_RETURN()
    return;
    // 0x801FAEBC: nop

;}
RECOMP_FUNC void func_801EFACC_5AB9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFACC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EFAD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EFAD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EFAD8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801EFADC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801EFAE0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EFAE4: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801EFAE8: addiu       $t0, $t0, 0x4F4C
    ctx->r8 = ADD32(ctx->r8, 0X4F4C);
    // 0x801EFAEC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EFAF0: addiu       $t9, $sp, 0x2C
    ctx->r25 = ADD32(ctx->r29, 0X2C);
    // 0x801EFAF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EFAF8: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x801EFAFC: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x801EFB00: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EFB04: addiu       $a1, $a1, 0x4DD0
    ctx->r5 = ADD32(ctx->r5, 0X4DD0);
    // 0x801EFB08: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x801EFB0C: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x801EFB10: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801EFB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFB18: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x801EFB1C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x801EFB20: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x801EFB24: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x801EFB28: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x801EFB2C: sw          $t3, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r11;
    // 0x801EFB30: lw          $t3, 0x14($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X14);
    // 0x801EFB34: lw          $at, 0x10($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X10);
    // 0x801EFB38: sw          $t3, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r11;
    // 0x801EFB3C: jal         0x801EE688
    // 0x801EFB40: sw          $at, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r1;
    func_801EE688_5AA598(rdram, ctx);
        goto after_0;
    // 0x801EFB40: sw          $at, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r1;
    after_0:
    // 0x801EFB44: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x801EFB48: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EFB4C: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x801EFB50: lbu         $t5, 0x90($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X90);
    // 0x801EFB54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EFB58: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801EFB5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801EFB60: lw          $t7, -0x2DE0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2DE0);
    // 0x801EFB64: sw          $t7, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r15;
    // 0x801EFB68: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x801EFB6C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801EFB70: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x801EFB74: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x801EFB78: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801EFB7C: addu        $v0, $t2, $t1
    ctx->r2 = ADD32(ctx->r10, ctx->r9);
    // 0x801EFB80: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EFB84: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801EFB88: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x801EFB8C: jal         0x801EE530
    // 0x801EFB90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801EFB90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801EFB94: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801EFB98: jal         0x801EE0C8
    // 0x801EFB9C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801EE0C8_5A9FD8(rdram, ctx);
        goto after_2;
    // 0x801EFB9C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x801EFBA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EFBA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EFBA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EFBAC: jr          $ra
    // 0x801EFBB0: nop

    TRACE_RETURN()
    return;
    // 0x801EFBB0: nop

;}
RECOMP_FUNC void func_801ED500_5A9410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED500: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801ED504: jr          $ra
    // 0x801ED508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801ED508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E2950_59E860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2958: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E295C: addiu       $a0, $zero, 0x20E
    ctx->r4 = ADD32(0, 0X20E);
    // 0x801E2960: jal         0x80038BC8
    // 0x801E2964: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E2964: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    after_0:
    // 0x801E2968: jal         0x80038BC8
    // 0x801E296C: addiu       $a0, $zero, 0x24B
    ctx->r4 = ADD32(0, 0X24B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E296C: addiu       $a0, $zero, 0x24B
    ctx->r4 = ADD32(0, 0X24B);
    after_1:
    // 0x801E2970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2978: jr          $ra
    // 0x801E297C: nop

    TRACE_RETURN()
    return;
    // 0x801E297C: nop

;}
RECOMP_FUNC void func_801DC9C8_5988D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC9C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DC9CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801DC9D0: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x801DC9D4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801DC9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC9DC: addiu       $t8, $t8, 0x4020
    ctx->r24 = ADD32(ctx->r24, 0X4020);
    // 0x801DC9E0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x801DC9E4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x801DC9E8: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x801DC9EC: lbu         $t0, 0x90($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X90);
    // 0x801DC9F0: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x801DC9F4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801DC9F8: addiu       $t3, $t3, -0x2DE0
    ctx->r11 = ADD32(ctx->r11, -0X2DE0);
    // 0x801DC9FC: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x801DCA00: sh          $t9, 0x3C($a2)
    MEM_H(0X3C, ctx->r6) = ctx->r25;
    // 0x801DCA04: addu        $t1, $t2, $t3
    ctx->r9 = ADD32(ctx->r10, ctx->r11);
    // 0x801DCA08: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x801DCA0C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DCA10: jal         0x80001C00
    // 0x801DCA14: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x801DCA14: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    after_0:
    // 0x801DCA18: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x801DCA1C: beq         $v1, $zero, L_801DCA34
    if (ctx->r3 == 0) {
        // 0x801DCA20: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_801DCA34;
    }
    // 0x801DCA20: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_801DCA24:
    // 0x801DCA24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801DCA28: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x801DCA2C: bne         $t4, $zero, L_801DCA24
    if (ctx->r12 != 0) {
        // 0x801DCA30: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_801DCA24;
    }
    // 0x801DCA30: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_801DCA34:
    // 0x801DCA34: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x801DCA38: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801DCA3C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DCA40: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x801DCA44: sltu        $at, $t6, $v0
    ctx->r1 = ctx->r14 < ctx->r2 ? 1 : 0;
    // 0x801DCA48: beq         $at, $zero, L_801DCA58
    if (ctx->r1 == 0) {
        // 0x801DCA4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DCA58;
    }
    // 0x801DCA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DCA50: b           L_801DCA5C
    // 0x801DCA54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCA5C;
    // 0x801DCA54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCA58:
    // 0x801DCA58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DCA5C:
    // 0x801DCA5C: jr          $ra
    // 0x801DCA60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801DCA60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801FAD8C_5B6C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FAD8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FAD90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FAD94: jal         0x801CBD88
    // 0x801FAD98: nop

    func_801CBD88_587C98(rdram, ctx);
        goto after_0;
    // 0x801FAD98: nop

    after_0:
    // 0x801FAD9C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801FADA0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801FADA4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FADA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FADAC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FADB0: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    // 0x801FADB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FADB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FADBC: jr          $ra
    // 0x801FADC0: nop

    TRACE_RETURN()
    return;
    // 0x801FADC0: nop

;}
RECOMP_FUNC void func_801CEAD4_58A9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEAD4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CEAD8: lw          $t6, -0x35D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X35D4);
    // 0x801CEADC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CEAE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CEAE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CEAE8: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x801CEAEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CEAF0: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801CEAF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CEAF8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801CEAFC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CEB00: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801CEB04: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x801CEB08: nop

    // 0x801CEB0C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801CEB10: beq         $t8, $zero, L_801CEB38
    if (ctx->r24 == 0) {
        // 0x801CEB14: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_801CEB38;
    }
    // 0x801CEB14: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801CEB18: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CEB1C: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x801CEB20: lhu         $a0, 0xA8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA8);
    // 0x801CEB24: bne         $a0, $zero, L_801CEB44
    if (ctx->r4 != 0) {
        // 0x801CEB28: and         $t2, $a0, $t9
        ctx->r10 = ctx->r4 & ctx->r25;
            goto L_801CEB44;
    }
    // 0x801CEB28: and         $t2, $a0, $t9
    ctx->r10 = ctx->r4 & ctx->r25;
    // 0x801CEB2C: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x801CEB30: beql        $t3, $zero, L_801CEB48
    if (ctx->r11 == 0) {
        // 0x801CEB34: addu        $t5, $a0, $v1
        ctx->r13 = ADD32(ctx->r4, ctx->r3);
            goto L_801CEB48;
    }
    goto skip_0;
    // 0x801CEB34: addu        $t5, $a0, $v1
    ctx->r13 = ADD32(ctx->r4, ctx->r3);
    skip_0:
L_801CEB38:
    // 0x801CEB38: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEB3C: b           L_801CEB4C
    // 0x801CEB40: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
        goto L_801CEB4C;
    // 0x801CEB40: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
L_801CEB44:
    // 0x801CEB44: addu        $t5, $a0, $v1
    ctx->r13 = ADD32(ctx->r4, ctx->r3);
L_801CEB48:
    // 0x801CEB48: sh          $t5, 0xA8($v0)
    MEM_H(0XA8, ctx->r2) = ctx->r13;
L_801CEB4C:
    // 0x801CEB4C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEB50: lhu         $v1, 0xA8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA8);
    // 0x801CEB54: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x801CEB58: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801CEB5C: slti        $at, $t6, 0x2D1
    ctx->r1 = SIGNED(ctx->r14) < 0X2D1 ? 1 : 0;
    // 0x801CEB60: bne         $at, $zero, L_801CEB84
    if (ctx->r1 != 0) {
        // 0x801CEB64: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_801CEB84;
    }
    // 0x801CEB64: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801CEB68: addiu       $t7, $zero, 0x2D0
    ctx->r15 = ADD32(0, 0X2D0);
    // 0x801CEB6C: sh          $t7, 0xA8($v0)
    MEM_H(0XA8, ctx->r2) = ctx->r15;
    // 0x801CEB70: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEB74: lhu         $v1, 0xA8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA8);
    // 0x801CEB78: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x801CEB7C: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801CEB80: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_801CEB84:
    // 0x801CEB84: slti        $at, $a0, -0x2D0
    ctx->r1 = SIGNED(ctx->r4) < -0X2D0 ? 1 : 0;
    // 0x801CEB88: beq         $at, $zero, L_801CEB9C
    if (ctx->r1 == 0) {
        // 0x801CEB8C: ori         $t9, $zero, 0xFD30
        ctx->r25 = 0 | 0XFD30;
            goto L_801CEB9C;
    }
    // 0x801CEB8C: ori         $t9, $zero, 0xFD30
    ctx->r25 = 0 | 0XFD30;
    // 0x801CEB90: sh          $t9, 0xA8($v0)
    MEM_H(0XA8, ctx->r2) = ctx->r25;
    // 0x801CEB94: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEB98: lhu         $v1, 0xA8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA8);
L_801CEB9C:
    // 0x801CEB9C: lhu         $t2, 0xA4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XA4);
    // 0x801CEBA0: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x801CEBA4: sh          $t3, 0xA4($v0)
    MEM_H(0XA4, ctx->r2) = ctx->r11;
    // 0x801CEBA8: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEBAC: lhu         $a0, 0xA4($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0XA4);
    // 0x801CEBB0: jal         0x80003CC8
    // 0x801CEBB4: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    func_80003CC8_48C8(rdram, ctx);
        goto after_0;
    // 0x801CEBB4: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    after_0:
    // 0x801CEBB8: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x801CEBBC: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x801CEBC0: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEBC4: jal         0x80003D28
    // 0x801CEBC8: lhu         $a0, 0xA4($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0XA4);
    func_80003D28_4928(rdram, ctx);
        goto after_1;
    // 0x801CEBC8: lhu         $a0, 0xA4($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0XA4);
    after_1:
    // 0x801CEBCC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x801CEBD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CEBD4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CEBD8: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x801CEBDC: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
    // 0x801CEBE0: lw          $t6, -0x35D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X35D4);
    // 0x801CEBE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEBE8: lwc1        $f4, -0x5670($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5670);
    // 0x801CEBEC: lwc1        $f18, 0x14($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X14);
    // 0x801CEBF0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEBF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CEBF8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801CEBFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CEC00: lwc1        $f10, 0x54($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
    // 0x801CEC04: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801CEC08: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CEC0C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801CEC10: nop

    // 0x801CEC14: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x801CEC18: bc1f        L_801CEC28
    if (!c1cs) {
        // 0x801CEC1C: or          $t1, $t8, $zero
        ctx->r9 = ctx->r24 | 0;
            goto L_801CEC28;
    }
    // 0x801CEC1C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x801CEC20: b           L_801CEC2C
    // 0x801CEC24: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
        goto L_801CEC2C;
    // 0x801CEC24: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
L_801CEC28:
    // 0x801CEC28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_801CEC2C:
    // 0x801CEC2C: lhu         $t0, 0xA6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA6);
    // 0x801CEC30: addu        $t9, $a3, $t1
    ctx->r25 = ADD32(ctx->r7, ctx->r9);
    // 0x801CEC34: subu        $a0, $t9, $t0
    ctx->r4 = SUB32(ctx->r25, ctx->r8);
    // 0x801CEC38: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x801CEC3C: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x801CEC40: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801CEC44: slti        $at, $t3, 0x301
    ctx->r1 = SIGNED(ctx->r11) < 0X301 ? 1 : 0;
    // 0x801CEC48: bne         $at, $zero, L_801CEC58
    if (ctx->r1 != 0) {
        // 0x801CEC4C: or          $a1, $t3, $zero
        ctx->r5 = ctx->r11 | 0;
            goto L_801CEC58;
    }
    // 0x801CEC4C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x801CEC50: addiu       $v1, $zero, 0x300
    ctx->r3 = ADD32(0, 0X300);
    // 0x801CEC54: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
L_801CEC58:
    // 0x801CEC58: slti        $at, $a1, -0x300
    ctx->r1 = SIGNED(ctx->r5) < -0X300 ? 1 : 0;
    // 0x801CEC5C: beql        $at, $zero, L_801CEC6C
    if (ctx->r1 == 0) {
        // 0x801CEC60: addu        $t4, $t0, $v1
        ctx->r12 = ADD32(ctx->r8, ctx->r3);
            goto L_801CEC6C;
    }
    goto skip_1;
    // 0x801CEC60: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    skip_1:
    // 0x801CEC64: ori         $v1, $zero, 0xFD00
    ctx->r3 = 0 | 0XFD00;
    // 0x801CEC68: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
L_801CEC6C:
    // 0x801CEC6C: sh          $t4, 0xA6($v0)
    MEM_H(0XA6, ctx->r2) = ctx->r12;
    // 0x801CEC70: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEC74: addiu       $t6, $zero, 0x3800
    ctx->r14 = ADD32(0, 0X3800);
    // 0x801CEC78: lhu         $a0, 0xA6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA6);
    // 0x801CEC7C: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801CEC80: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801CEC84: slti        $at, $t5, 0x3801
    ctx->r1 = SIGNED(ctx->r13) < 0X3801 ? 1 : 0;
    // 0x801CEC88: bne         $at, $zero, L_801CECA8
    if (ctx->r1 != 0) {
        // 0x801CEC8C: or          $a1, $t5, $zero
        ctx->r5 = ctx->r13 | 0;
            goto L_801CECA8;
    }
    // 0x801CEC8C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x801CEC90: sh          $t6, 0xA6($v0)
    MEM_H(0XA6, ctx->r2) = ctx->r14;
    // 0x801CEC94: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEC98: lhu         $a0, 0xA6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA6);
    // 0x801CEC9C: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801CECA0: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801CECA4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_801CECA8:
    // 0x801CECA8: slti        $at, $a1, -0x3800
    ctx->r1 = SIGNED(ctx->r5) < -0X3800 ? 1 : 0;
    // 0x801CECAC: beq         $at, $zero, L_801CECC4
    if (ctx->r1 == 0) {
        // 0x801CECB0: addiu       $a1, $sp, 0x44
        ctx->r5 = ADD32(ctx->r29, 0X44);
            goto L_801CECC4;
    }
    // 0x801CECB0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801CECB4: ori         $t8, $zero, 0xC800
    ctx->r24 = 0 | 0XC800;
    // 0x801CECB8: sh          $t8, 0xA6($v0)
    MEM_H(0XA6, ctx->r2) = ctx->r24;
    // 0x801CECBC: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801CECC0: lhu         $a0, 0xA6($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0XA6);
L_801CECC4:
    // 0x801CECC4: jal         0x80003D88
    // 0x801CECC8: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    func_80003D88_4988(rdram, ctx);
        goto after_2;
    // 0x801CECC8: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    after_2:
    // 0x801CECCC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x801CECD0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801CECD4: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    // 0x801CECD8: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CECDC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801CECE0: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x801CECE4: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CECE8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CECEC: swc1        $f8, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f8.u32l;
    // 0x801CECF0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801CECF4: jal         0x8001D394
    // 0x801CECF8: swc1        $f10, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_3;
    // 0x801CECF8: swc1        $f10, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801CECFC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801CED00: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801CED04: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801CED08: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801CED0C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801CED10: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x801CED14: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801CED18: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CED1C: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x801CED20: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801CED24: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801CED28: jal         0x8001D394
    // 0x801CED2C: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801CED2C: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    after_4:
    // 0x801CED30: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x801CED34: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801CED38: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CED3C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CED40: lwc1        $f6, 0xAC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XAC);
    // 0x801CED44: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CED48: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x801CED4C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CED50: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CED54: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x801CED58: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801CED5C: lwc1        $f16, 0xAC($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0XAC);
    // 0x801CED60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CED64: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x801CED68: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CED6C: lwc1        $f6, 0xAC($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0XAC);
    // 0x801CED70: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CED74: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x801CED78: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CED7C: ldc1        $f18, -0x5668($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5668);
    // 0x801CED80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CED84: lwc1        $f10, 0xAC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801CED88: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CED8C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801CED90: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CED94: swc1        $f6, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f6.u32l;
    // 0x801CED98: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801CED9C: sb          $t5, 0x2F($t6)
    MEM_B(0X2F, ctx->r14) = ctx->r13;
    // 0x801CEDA0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEDA4: lwc1        $f10, -0x5660($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5660);
    // 0x801CEDA8: lwc1        $f8, 0xAC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801CEDAC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801CEDB0: nop

    // 0x801CEDB4: bc1f        L_801CEDE4
    if (!c1cs) {
        // 0x801CEDB8: nop
    
            goto L_801CEDE4;
    }
    // 0x801CEDB8: nop

    // 0x801CEDBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CEDC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CEDC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CEDC8: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x801CEDCC: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEDD0: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x801CEDD4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEDD8: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x801CEDDC: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801CEDE0: swc1        $f16, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f16.u32l;
L_801CEDE4:
    // 0x801CEDE4: jal         0x80003CC8
    // 0x801CEDE8: lhu         $a0, 0xA4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA4);
    func_80003CC8_48C8(rdram, ctx);
        goto after_5;
    // 0x801CEDE8: lhu         $a0, 0xA4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA4);
    after_5:
    // 0x801CEDEC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801CEDF0: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEDF4: jal         0x80003D28
    // 0x801CEDF8: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    func_80003D28_4928(rdram, ctx);
        goto after_6;
    // 0x801CEDF8: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    after_6:
    // 0x801CEDFC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CEE00: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801CEE04: lui         $at, 0x4620
    ctx->r1 = S32(0X4620 << 16);
    // 0x801CEE08: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801CEE0C: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CEE14: lui         $at, 0x4660
    ctx->r1 = S32(0X4660 << 16);
    // 0x801CEE18: lh          $t2, 0xA6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA6);
    // 0x801CEE1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CEE20: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801CEE24: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801CEE28: nop

    // 0x801CEE2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CEE30: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CEE34: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CEE38: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801CEE3C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x801CEE40: nop

    // 0x801CEE44: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x801CEE48: jal         0x80003D88
    // 0x801CEE4C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80003D88_4988(rdram, ctx);
        goto after_7;
    // 0x801CEE4C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_7:
    // 0x801CEE50: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801CEE54: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE58: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CEE5C: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x801CEE60: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801CEE64: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE68: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CEE6C: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x801CEE70: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE74: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801CEE78: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x801CEE7C: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE80: jal         0x8001D394
    // 0x801CEE84: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_8;
    // 0x801CEE84: addiu       $a0, $a0, 0x3C
    ctx->r4 = ADD32(ctx->r4, 0X3C);
    after_8:
    // 0x801CEE88: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801CEE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CEE90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CEE94: lhu         $v0, 0xA4($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0XA4);
    // 0x801CEE98: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801CEE9C: sra         $t2, $v0, 6
    ctx->r10 = S32(SIGNED(ctx->r2) >> 6);
    // 0x801CEEA0: jr          $ra
    // 0x801CEEA4: andi        $v0, $t2, 0x3FF
    ctx->r2 = ctx->r10 & 0X3FF;
    TRACE_RETURN()
    return;
    // 0x801CEEA4: andi        $v0, $t2, 0x3FF
    ctx->r2 = ctx->r10 & 0X3FF;
;}
RECOMP_FUNC void func_801E6B10_5A2A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6B10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E6B14: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E6B18: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801E6B1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E6B20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E6B24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6B28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801E6B2C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801E6B30: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801E6B34: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801E6B38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E6B3C: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801E6B40: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801E6B44: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801E6B48: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x801E6B4C: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x801E6B50: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E6B54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E6B58: jal         0x80033898
    // 0x801E6B5C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E6B5C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801E6B60: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6B64: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6B68: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E6B6C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E6B70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E6B74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E6B78: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x801E6B7C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801E6B80: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6B84: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6B88: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E6B8C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E6B90: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x801E6B94: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6B98: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6B9C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801E6BA0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x801E6BA4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E6BA8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x801E6BAC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E6BB0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801E6BB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E6BB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E6BBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E6BC0: jr          $ra
    // 0x801E6BC4: nop

    TRACE_RETURN()
    return;
    // 0x801E6BC4: nop

;}
RECOMP_FUNC void func_801DAD68_596C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAD68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DAD6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801DAD70: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x801DAD74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DAD78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801DAD7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DAD80: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DAD84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAD88: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x801DAD8C: bltz        $s1, L_801DADA0
    if (SIGNED(ctx->r17) < 0) {
        // 0x801DAD90: or          $v1, $s1, $zero
        ctx->r3 = ctx->r17 | 0;
            goto L_801DADA0;
    }
    // 0x801DAD90: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x801DAD94: slti        $at, $s1, 0xE8
    ctx->r1 = SIGNED(ctx->r17) < 0XE8 ? 1 : 0;
    // 0x801DAD98: bne         $at, $zero, L_801DADA8
    if (ctx->r1 != 0) {
        // 0x801DAD9C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_801DADA8;
    }
    // 0x801DAD9C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_801DADA0:
    // 0x801DADA0: b           L_801DAF40
    // 0x801DADA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DAF40;
    // 0x801DADA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DADA8:
    // 0x801DADA8: bne         $v1, $zero, L_801DAE30
    if (ctx->r3 != 0) {
        // 0x801DADAC: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_801DAE30;
    }
    // 0x801DADAC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801DADB0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801DADB4: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801DADB8: lbu         $t6, 0x2E24($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E24);
    // 0x801DADBC: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x801DADC0: bne         $t6, $zero, L_801DAE30
    if (ctx->r14 != 0) {
        // 0x801DADC4: nop
    
            goto L_801DAE30;
    }
    // 0x801DADC4: nop

    // 0x801DADC8: lbu         $t7, 0x2E23($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2E23);
    // 0x801DADCC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801DADD0: addiu       $a0, $a0, -0x3A28
    ctx->r4 = ADD32(ctx->r4, -0X3A28);
    // 0x801DADD4: bne         $t7, $zero, L_801DAE30
    if (ctx->r15 != 0) {
        // 0x801DADD8: nop
    
            goto L_801DAE30;
    }
    // 0x801DADD8: nop

    // 0x801DADDC: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
    // 0x801DADE0: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x801DADE4: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x801DADE8: addiu       $t1, $v0, 0x7FFF
    ctx->r9 = ADD32(ctx->r2, 0X7FFF);
    // 0x801DADEC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801DADF0: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801DADF4: bne         $at, $zero, L_801DAE30
    if (ctx->r1 != 0) {
        // 0x801DADF8: nop
    
            goto L_801DAE30;
    }
    // 0x801DADF8: nop

    // 0x801DADFC: lbu         $t1, 0x2E24($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2E24);
    // 0x801DAE00: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x801DAE04: bne         $t1, $zero, L_801DAE30
    if (ctx->r9 != 0) {
        // 0x801DAE08: nop
    
            goto L_801DAE30;
    }
    // 0x801DAE08: nop

    // 0x801DAE0C: lbu         $t2, 0x2E23($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2E23);
    // 0x801DAE10: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x801DAE14: bne         $t2, $zero, L_801DAE30
    if (ctx->r10 != 0) {
        // 0x801DAE18: nop
    
            goto L_801DAE30;
    }
    // 0x801DAE18: nop

    // 0x801DAE1C: lbu         $t3, 0x2E21($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X2E21);
    // 0x801DAE20: bne         $t3, $zero, L_801DAE30
    if (ctx->r11 != 0) {
        // 0x801DAE24: nop
    
            goto L_801DAE30;
    }
    // 0x801DAE24: nop

    // 0x801DAE28: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801DAE2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801DAE30:
    // 0x801DAE30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801DAE34: sw          $t4, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = ctx->r12;
    // 0x801DAE38: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
    // 0x801DAE3C: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x801DAE40: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801DAE44: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801DAE48: lbu         $t8, 0x69($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X69);
    // 0x801DAE4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801DAE50: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x801DAE54: lw          $t7, 0x3F34($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3F34);
    // 0x801DAE58: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x801DAE5C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801DAE60: bne         $t8, $zero, L_801DAEAC
    if (ctx->r24 != 0) {
        // 0x801DAE64: addu        $v0, $t7, $t9
        ctx->r2 = ADD32(ctx->r15, ctx->r25);
            goto L_801DAEAC;
    }
    // 0x801DAE64: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x801DAE68: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x801DAE6C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DAE70: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DAE74: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801DAE78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DAE7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAE80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DAE84: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DAE88: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801DAE8C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DAE90: swc1        $f18, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f18.u32l;
    // 0x801DAE94: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x801DAE98: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x801DAE9C: andi        $t2, $t1, 0x81
    ctx->r10 = ctx->r9 & 0X81;
    // 0x801DAEA0: sb          $t2, 0xDB($s0)
    MEM_B(0XDB, ctx->r16) = ctx->r10;
    // 0x801DAEA4: swc1        $f12, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f12.u32l;
    // 0x801DAEA8: swc1        $f0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f0.u32l;
L_801DAEAC:
    // 0x801DAEAC: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x801DAEB0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x801DAEB4: sw          $t3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r11;
    // 0x801DAEB8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801DAEBC: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x801DAEC0: sw          $t5, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r13;
    // 0x801DAEC4: lbu         $t6, 0xCC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCC);
    // 0x801DAEC8: beql        $v1, $t6, L_801DAF08
    if (ctx->r3 == ctx->r14) {
        // 0x801DAECC: lw          $t8, 0x5C($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X5C);
            goto L_801DAF08;
    }
    goto skip_0;
    // 0x801DAECC: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x801DAED0: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801DAED4: sb          $s1, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r17;
    // 0x801DAED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DAEDC: lbu         $v0, 0x69($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X69);
    // 0x801DAEE0: bne         $v0, $zero, L_801DAF0C
    if (ctx->r2 != 0) {
        // 0x801DAEE4: nop
    
            goto L_801DAF0C;
    }
    // 0x801DAEE4: nop

    // 0x801DAEE8: jal         0x801DC70C
    // 0x801DAEEC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_801DC70C_59861C(rdram, ctx);
        goto after_0;
    // 0x801DAEEC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_0:
    // 0x801DAEF0: jal         0x801DD498
    // 0x801DAEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DD498_5993A8(rdram, ctx);
        goto after_1;
    // 0x801DAEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DAEF8: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801DAEFC: b           L_801DAF0C
    // 0x801DAF00: lbu         $v0, 0x69($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X69);
        goto L_801DAF0C;
    // 0x801DAF00: lbu         $v0, 0x69($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X69);
    // 0x801DAF04: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
L_801DAF08:
    // 0x801DAF08: lbu         $v0, 0x69($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X69);
L_801DAF0C:
    // 0x801DAF0C: bnel        $v0, $zero, L_801DAF20
    if (ctx->r2 != 0) {
        // 0x801DAF10: sll         $t0, $s1, 2
        ctx->r8 = S32(ctx->r17 << 2);
            goto L_801DAF20;
    }
    goto skip_1;
    // 0x801DAF10: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    skip_1:
    // 0x801DAF14: jal         0x801DAF54
    // 0x801DAF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAF54_596E64(rdram, ctx);
        goto after_2;
    // 0x801DAF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DAF1C: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
L_801DAF20:
    // 0x801DAF20: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DAF24: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x801DAF28: lw          $a1, 0x3B90($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3B90);
    // 0x801DAF2C: jal         0x8003522C
    // 0x801DAF30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801DAF30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DAF34: jal         0x801D9C54
    // 0x801DAF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9C54_595B64(rdram, ctx);
        goto after_4;
    // 0x801DAF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DAF3C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_801DAF40:
    // 0x801DAF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAF44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801DAF48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801DAF4C: jr          $ra
    // 0x801DAF50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801DAF50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801E1500_59D410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1500: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1504: jr          $ra
    // 0x801E1508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CF848_58B758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF848: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CF84C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CF850: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801CF854: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801CF858: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801CF85C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801CF860: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801CF864: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CF868: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CF86C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801CF870: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CF874: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CF878: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801CF87C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801CF880: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x801CF884: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x801CF888: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CF88C: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x801CF890: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801CF894: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CF898: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    // 0x801CF89C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CF8A0: jal         0x8001D898
    // 0x801CF8A4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x801CF8A4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801CF8A8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CF8AC: jal         0x800040A8
    // 0x801CF8B0: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x801CF8B0: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801CF8B4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CF8B8: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x801CF8BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CF8C0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801CF8C4: lw          $t7, 0x5C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF8C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CF8CC: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801CF8D0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801CF8D4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CF8D8: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801CF8DC: nop

    // 0x801CF8E0: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801CF8E4: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801CF8E8: sqrt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = sqrtf(ctx->f0.fl);
    // 0x801CF8EC: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x801CF8F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801CF8F4: bc1t        L_801CF914
    if (c1cs) {
        // 0x801CF8F8: nop
    
            goto L_801CF914;
    }
    // 0x801CF8F8: nop

    // 0x801CF8FC: lw          $t8, 0x5C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF900: sh          $v0, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r2;
    // 0x801CF904: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF908: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801CF90C: b           L_801CF928
    // 0x801CF910: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
        goto L_801CF928;
    // 0x801CF910: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
L_801CF914:
    // 0x801CF914: lw          $t1, 0x5C($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF918: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x801CF91C: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x801CF920: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF924: swc1        $f12, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f12.u32l;
L_801CF928:
    // 0x801CF928: lbu         $t4, 0x90($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X90);
    // 0x801CF92C: lw          $t3, 0x5C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X5C);
    // 0x801CF930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CF934: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801CF938: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801CF93C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x801CF940: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801CF944: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801CF948: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801CF94C: jr          $ra
    // 0x801CF950: swc1        $f4, 0x7DBC($at)
    MEM_W(0X7DBC, ctx->r1) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801CF950: swc1        $f4, 0x7DBC($at)
    MEM_W(0X7DBC, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801F4FA4_5B0EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4FAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4FB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F4FB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F4FB8: jal         0x801F50A4
    // 0x801F4FBC: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F4FBC: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    after_0:
    // 0x801F4FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4FC8: jr          $ra
    // 0x801F4FCC: nop

    TRACE_RETURN()
    return;
    // 0x801F4FCC: nop

;}
RECOMP_FUNC void func_801D5338_591248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5338: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x801D533C: ori         $at, $zero, 0xDA00
    ctx->r1 = 0 | 0XDA00;
    // 0x801D5340: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x801D5344: bne         $t6, $zero, L_801D5360
    if (ctx->r14 != 0) {
        // 0x801D5348: slt         $at, $v0, $at
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
            goto L_801D5360;
    }
    // 0x801D5348: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x801D534C: slti        $at, $v0, 0x3001
    ctx->r1 = SIGNED(ctx->r2) < 0X3001 ? 1 : 0;
    // 0x801D5350: bne         $at, $zero, L_801D536C
    if (ctx->r1 != 0) {
        // 0x801D5354: addiu       $t7, $zero, 0x3000
        ctx->r15 = ADD32(0, 0X3000);
            goto L_801D536C;
    }
    // 0x801D5354: addiu       $t7, $zero, 0x3000
    ctx->r15 = ADD32(0, 0X3000);
    // 0x801D5358: jr          $ra
    // 0x801D535C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D535C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_801D5360:
    // 0x801D5360: beq         $at, $zero, L_801D536C
    if (ctx->r1 == 0) {
        // 0x801D5364: ori         $t8, $zero, 0xDA00
        ctx->r24 = 0 | 0XDA00;
            goto L_801D536C;
    }
    // 0x801D5364: ori         $t8, $zero, 0xDA00
    ctx->r24 = 0 | 0XDA00;
    // 0x801D5368: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_801D536C:
    // 0x801D536C: jr          $ra
    // 0x801D5370: nop

    TRACE_RETURN()
    return;
    // 0x801D5370: nop

;}
RECOMP_FUNC void func_801F0340_5AC250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0340: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F0344: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F0348: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801F034C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F0350: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x801F0354: beq         $v0, $zero, L_801F03F8
    if (ctx->r2 == 0) {
        // 0x801F0358: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_801F03F8;
    }
    // 0x801F0358: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x801F035C: lbu         $t6, 0x60($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X60);
    // 0x801F0360: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F0364: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F0368: blezl       $t6, L_801F0378
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801F036C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_801F0378;
    }
    goto skip_0;
    // 0x801F036C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x801F0370: sb          $t7, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r15;
    // 0x801F0374: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_801F0378:
    // 0x801F0378: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801F037C: jal         0x801EE5F4
    // 0x801F0380: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_0;
    // 0x801F0380: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F0384: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801F0388: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    // 0x801F038C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F0390: jal         0x801EE330
    // 0x801F0394: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801F0394: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    after_1:
    // 0x801F0398: bne         $v0, $zero, L_801F03F8
    if (ctx->r2 != 0) {
        // 0x801F039C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_801F03F8;
    }
    // 0x801F039C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F03A0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801F03A4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F03A8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801F03AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801F03B0: addiu       $t2, $zero, 0xBA
    ctx->r10 = ADD32(0, 0XBA);
    // 0x801F03B4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801F03B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801F03BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801F03C0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801F03C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801F03C8: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F03CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F03D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801F03D4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x801F03D8: lbu         $t5, 0x94($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X94);
    // 0x801F03DC: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x801F03E0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F03E4: or          $a2, $t8, $at
    ctx->r6 = ctx->r24 | ctx->r1;
    // 0x801F03E8: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    // 0x801F03EC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x801F03F0: jal         0x801DC554
    // 0x801F03F4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801F03F4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_2:
L_801F03F8:
    // 0x801F03F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F03FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801F0400: jr          $ra
    // 0x801F0404: nop

    TRACE_RETURN()
    return;
    // 0x801F0404: nop

;}
RECOMP_FUNC void func_801DDDEC_599CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDDEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DDDF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DDDF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DDDF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDDFC: jal         0x801E2740
    // 0x801DDE00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801E2740_59E650(rdram, ctx);
        goto after_0;
    // 0x801DDE00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDE04: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801DDE08: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801DDE0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDE10: lbu         $t6, 0x2D($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2D);
    // 0x801DDE14: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801DDE18: sb          $t7, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r15;
    // 0x801DDE1C: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    // 0x801DDE20: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DDE24: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801DDE28: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801DDE2C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DDE30: lhu         $t0, 0x7DB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB4);
    // 0x801DDE34: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801DDE38: bne         $t1, $zero, L_801DDE54
    if (ctx->r9 != 0) {
        // 0x801DDE3C: nop
    
            goto L_801DDE54;
    }
    // 0x801DDE3C: nop

    // 0x801DDE40: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801DDE44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DDE48: lbu         $t3, 0x68($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X68);
    // 0x801DDE4C: bne         $t3, $at, L_801DDE64
    if (ctx->r11 != ctx->r1) {
        // 0x801DDE50: nop
    
            goto L_801DDE64;
    }
    // 0x801DDE50: nop

L_801DDE54:
    // 0x801DDE54: jal         0x801E4624
    // 0x801DDE58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E4624_5A0534(rdram, ctx);
        goto after_1;
    // 0x801DDE58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801DDE5C: b           L_801DDF7C
    // 0x801DDE60: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DDF7C;
    // 0x801DDE60: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
L_801DDE64:
    // 0x801DDE64: jal         0x801E79F4
    // 0x801DDE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E79F4_5A3904(rdram, ctx);
        goto after_2;
    // 0x801DDE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DDE6C: bnel        $v0, $zero, L_801DDF7C
    if (ctx->r2 != 0) {
        // 0x801DDE70: lui         $a1, 0xBF19
        ctx->r5 = S32(0XBF19 << 16);
            goto L_801DDF7C;
    }
    goto skip_0;
    // 0x801DDE70: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    skip_0:
    // 0x801DDE74: jal         0x801E5328
    // 0x801DDE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5328_5A1238(rdram, ctx);
        goto after_3;
    // 0x801DDE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DDE7C: beql        $v0, $zero, L_801DDEAC
    if (ctx->r2 == 0) {
        // 0x801DDE80: lhu         $t5, 0x98($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X98);
            goto L_801DDEAC;
    }
    goto skip_1;
    // 0x801DDE80: lhu         $t5, 0x98($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X98);
    skip_1:
    // 0x801DDE84: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801DDE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDE8C: jal         0x801E20A0
    // 0x801DDE90: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_4;
    // 0x801DDE90: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    after_4:
    // 0x801DDE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDE98: jal         0x801DACDC
    // 0x801DDE9C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801DDE9C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_5:
    // 0x801DDEA0: b           L_801DDF7C
    // 0x801DDEA4: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DDF7C;
    // 0x801DDEA4: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    // 0x801DDEA8: lhu         $t5, 0x98($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X98);
L_801DDEAC:
    // 0x801DDEAC: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801DDEB0: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801DDEB4: bne         $t5, $zero, L_801DDEE0
    if (ctx->r13 != 0) {
        // 0x801DDEB8: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_801DDEE0;
    }
    // 0x801DDEB8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801DDEBC: jal         0x801E3324
    // 0x801DDEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_6;
    // 0x801DDEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DDEC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDEC8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DDECC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DDED0: jal         0x801DAC7C
    // 0x801DDED4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_7;
    // 0x801DDED4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_7:
    // 0x801DDED8: b           L_801DDF7C
    // 0x801DDEDC: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DDF7C;
    // 0x801DDEDC: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
L_801DDEE0:
    // 0x801DDEE0: jalr        $v0
    // 0x801DDEE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x801DDEE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_8:
    // 0x801DDEE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DDEEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DDEF0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801DDEF4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DDEF8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DDEFC: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DDF00: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DDF04: nop

    // 0x801DDF08: bc1fl       L_801DDF7C
    if (!c1cs) {
        // 0x801DDF0C: lui         $a1, 0xBF19
        ctx->r5 = S32(0XBF19 << 16);
            goto L_801DDF7C;
    }
    goto skip_2;
    // 0x801DDF0C: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    skip_2:
    // 0x801DDF10: jalr        $v0
    // 0x801DDF14: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x801DDF14: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_9:
    // 0x801DDF18: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801DDF1C: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801DDF20: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x801DDF24: div.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801DDF28: lbu         $t8, 0x2D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2D);
    // 0x801DDF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDF30: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801DDF34: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x801DDF38: nop

    // 0x801DDF3C: bgez        $t0, L_801DDF4C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801DDF40: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_801DDF4C;
    }
    // 0x801DDF40: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x801DDF44: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x801DDF48: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801DDF4C:
    // 0x801DDF4C: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801DDF50: bnel        $at, $zero, L_801DDF6C
    if (ctx->r1 != 0) {
        // 0x801DDF54: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_801DDF6C;
    }
    goto skip_3;
    // 0x801DDF54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_3:
    // 0x801DDF58: jal         0x801DACDC
    // 0x801DDF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_10;
    // 0x801DDF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801DDF60: b           L_801DDF7C
    // 0x801DDF64: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DDF7C;
    // 0x801DDF64: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    // 0x801DDF68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_801DDF6C:
    // 0x801DDF6C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x801DDF70: jal         0x801DACDC
    // 0x801DDF74: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_11;
    // 0x801DDF74: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    after_11:
    // 0x801DDF78: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
L_801DDF7C:
    // 0x801DDF7C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801DDF80: jal         0x801E3B9C
    // 0x801DDF84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_12;
    // 0x801DDF84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801DDF88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDF8C: jal         0x801E8964
    // 0x801DDF90: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_801E8964_5A4874(rdram, ctx);
        goto after_13;
    // 0x801DDF90: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_13:
    // 0x801DDF94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDF98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DDF9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801DDFA0: jr          $ra
    // 0x801DDFA4: nop

    TRACE_RETURN()
    return;
    // 0x801DDFA4: nop

;}
RECOMP_FUNC void func_801D5214_591124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5214: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D5218: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D521C: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801D5220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5224: lbu         $v1, 0x98($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X98);
    // 0x801D5228: lbu         $t7, 0x70($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X70);
    // 0x801D522C: lw          $t1, 0x5C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X5C);
    // 0x801D5230: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801D5234: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x801D5238: lbu         $t2, 0x59($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X59);
    // 0x801D523C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D5240: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801D5244: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x801D5248: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D524C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x801D5250: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D5254: beq         $t2, $zero, L_801D5260
    if (ctx->r10 == 0) {
        // 0x801D5258: lhu         $v0, -0x36D8($v0)
        ctx->r2 = MEM_HU(ctx->r2, -0X36D8);
            goto L_801D5260;
    }
    // 0x801D5258: lhu         $v0, -0x36D8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X36D8);
    // 0x801D525C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
L_801D5260:
    // 0x801D5260: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x801D5264: beq         $v1, $at, L_801D5320
    if (ctx->r3 == ctx->r1) {
        // 0x801D5268: sh          $v0, 0x6E($a3)
        MEM_H(0X6E, ctx->r7) = ctx->r2;
            goto L_801D5320;
    }
    // 0x801D5268: sh          $v0, 0x6E($a3)
    MEM_H(0X6E, ctx->r7) = ctx->r2;
    // 0x801D526C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D5270: lw          $v0, -0x39EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39EC);
    // 0x801D5274: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D5278: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x801D527C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D5280: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D5284: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D5288: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801D528C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D5290: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D5294: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x801D5298: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x801D529C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801D52A0: jal         0x8001D394
    // 0x801D52A4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801D52A4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801D52A8: beq         $v0, $zero, L_801D5320
    if (ctx->r2 == 0) {
        // 0x801D52AC: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_801D5320;
    }
    // 0x801D52AC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x801D52B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D52B4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801D52B8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801D52BC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x801D52C0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x801D52C4: jal         0x8001D460
    // 0x801D52C8: addiu       $a0, $a0, 0xB4
    ctx->r4 = ADD32(ctx->r4, 0XB4);
    func_8001D460_1E060(rdram, ctx);
        goto after_1;
    // 0x801D52C8: addiu       $a0, $a0, 0xB4
    ctx->r4 = ADD32(ctx->r4, 0XB4);
    after_1:
    // 0x801D52CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D52D0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D52D4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x801D52D8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801D52DC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801D52E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D52E4: bc1f        L_801D5320
    if (!c1cs) {
        // 0x801D52E8: nop
    
            goto L_801D5320;
    }
    // 0x801D52E8: nop

    // 0x801D52EC: jal         0x8001D394
    // 0x801D52F0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D52F0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x801D52F4: beq         $v0, $zero, L_801D5320
    if (ctx->r2 == 0) {
        // 0x801D52F8: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_801D5320;
    }
    // 0x801D52F8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x801D52FC: lhu         $t3, 0x98($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X98);
    // 0x801D5300: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5304: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5308: beq         $t3, $zero, L_801D5320
    if (ctx->r11 == 0) {
        // 0x801D530C: nop
    
            goto L_801D5320;
    }
    // 0x801D530C: nop

    // 0x801D5310: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x801D5314: jal         0x80003A94
    // 0x801D5318: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D5318: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_3:
    // 0x801D531C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
L_801D5320:
    // 0x801D5320: jal         0x801D5338
    // 0x801D5324: addiu       $a0, $a3, 0x6E
    ctx->r4 = ADD32(ctx->r7, 0X6E);
    func_801D5338_591248(rdram, ctx);
        goto after_4;
    // 0x801D5324: addiu       $a0, $a3, 0x6E
    ctx->r4 = ADD32(ctx->r7, 0X6E);
    after_4:
    // 0x801D5328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D532C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D5330: jr          $ra
    // 0x801D5334: nop

    TRACE_RETURN()
    return;
    // 0x801D5334: nop

;}
RECOMP_FUNC void func_801EA00C_5A5F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA00C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EA010: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EA014: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801EA018: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801EA01C: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801EA020: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801EA024: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801EA028: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA02C: lwc1        $f0, -0x47B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X47B0);
    // 0x801EA030: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801EA034: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801EA038: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801EA03C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EA040: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EA044: lhu         $t0, 0x14($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14);
    // 0x801EA048: lui         $t8, 0x901
    ctx->r24 = S32(0X901 << 16);
    // 0x801EA04C: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x801EA050: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801EA054: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x801EA058: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x801EA05C: addiu       $t9, $t9, -0x26E0
    ctx->r25 = ADD32(ctx->r25, -0X26E0);
    // 0x801EA060: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801EA064: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x801EA068: addiu       $t8, $t8, -0x6FE0
    ctx->r24 = ADD32(ctx->r24, -0X6FE0);
    // 0x801EA06C: addiu       $t3, $zero, 0x120
    ctx->r11 = ADD32(0, 0X120);
    // 0x801EA070: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EA074: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x801EA078: addu        $a1, $v1, $t8
    ctx->r5 = ADD32(ctx->r3, ctx->r24);
    // 0x801EA07C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801EA080: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EA084: or          $a2, $t9, $v1
    ctx->r6 = ctx->r25 | ctx->r3;
    // 0x801EA088: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801EA08C: jal         0x80034680
    // 0x801EA090: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EA090: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_0:
    // 0x801EA094: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x801EA098: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EA09C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801EA0A0: lbu         $t5, 0x90($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X90);
    // 0x801EA0A4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801EA0A8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801EA0AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801EA0B0: lw          $t7, -0x2DE0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2DE0);
    // 0x801EA0B4: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x801EA0B8: sw          $t7, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r15;
    // 0x801EA0BC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EA0C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EA0C4: jr          $ra
    // 0x801EA0C8: nop

    TRACE_RETURN()
    return;
    // 0x801EA0C8: nop

;}
RECOMP_FUNC void func_801ECCF0_5A8C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECCF0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801ECCF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801ECCF8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801ECCFC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801ECD00: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801ECD04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ECD08: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801ECD0C: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x801ECD10: lhu         $t6, 0x62($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X62);
    // 0x801ECD14: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801ECD18: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801ECD1C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801ECD20: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x801ECD24: beq         $at, $zero, L_801ECD38
    if (ctx->r1 == 0) {
        // 0x801ECD28: sh          $t7, 0x62($a0)
        MEM_H(0X62, ctx->r4) = ctx->r15;
            goto L_801ECD38;
    }
    // 0x801ECD28: sh          $t7, 0x62($a0)
    MEM_H(0X62, ctx->r4) = ctx->r15;
    // 0x801ECD2C: lbu         $t9, 0x60($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X60);
    // 0x801ECD30: beql        $t9, $zero, L_801ECD44
    if (ctx->r25 == 0) {
        // 0x801ECD34: lbu         $v0, 0x60($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X60);
            goto L_801ECD44;
    }
    goto skip_0;
    // 0x801ECD34: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    skip_0:
L_801ECD38:
    // 0x801ECD38: b           L_801ECEF8
    // 0x801ECD3C: sb          $t0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r8;
        goto L_801ECEF8;
    // 0x801ECD3C: sb          $t0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r8;
    // 0x801ECD40: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
L_801ECD44:
    // 0x801ECD44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ECD48: beql        $v0, $zero, L_801ECD64
    if (ctx->r2 == 0) {
        // 0x801ECD4C: lwc1        $f4, 0x9C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
            goto L_801ECD64;
    }
    goto skip_1;
    // 0x801ECD4C: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    skip_1:
    // 0x801ECD50: beq         $v0, $at, L_801ECE9C
    if (ctx->r2 == ctx->r1) {
        // 0x801ECD54: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801ECE9C;
    }
    // 0x801ECD54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ECD58: b           L_801ECEFC
    // 0x801ECD5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801ECEFC;
    // 0x801ECD5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801ECD60: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
L_801ECD64:
    // 0x801ECD64: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801ECD68: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801ECD6C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801ECD70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801ECD74: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECD78: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x801ECD7C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801ECD80: lwc1        $f8, 0xA4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801ECD84: jal         0x8002A458
    // 0x801ECD88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_0;
    // 0x801ECD88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801ECD8C: lhu         $t1, 0x62($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X62);
    // 0x801ECD90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ECD94: beql        $t1, $at, L_801ECE2C
    if (ctx->r9 == ctx->r1) {
        // 0x801ECD98: lwc1        $f4, 0x8($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
            goto L_801ECE2C;
    }
    goto skip_2;
    // 0x801ECD98: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    skip_2:
    // 0x801ECD9C: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x801ECDA0: lh          $t3, 0x7C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X7C);
    // 0x801ECDA4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801ECDA8: bne         $t2, $zero, L_801ECDB4
    if (ctx->r10 != 0) {
        // 0x801ECDAC: lh          $t4, 0x7C($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X7C);
            goto L_801ECDB4;
    }
    // 0x801ECDAC: lh          $t4, 0x7C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X7C);
    // 0x801ECDB0: bne         $t3, $at, L_801ECE28
    if (ctx->r11 != ctx->r1) {
        // 0x801ECDB4: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_801ECE28;
    }
L_801ECDB4:
    // 0x801ECDB4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801ECDB8: bne         $t4, $at, L_801ECDF0
    if (ctx->r12 != ctx->r1) {
        // 0x801ECDBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801ECDF0;
    }
    // 0x801ECDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECDC0: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801ECDC4: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801ECDC8: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801ECDCC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ECDD0: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801ECDD4: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801ECDD8: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801ECDDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ECDE0: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x801ECDE4: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801ECDE8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ECDEC: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
L_801ECDF0:
    // 0x801ECDF0: jal         0x801ECF0C
    // 0x801ECDF4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_801ECF0C_5A8E1C(rdram, ctx);
        goto after_1;
    // 0x801ECDF4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_1:
    // 0x801ECDF8: lbu         $t5, 0x30($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X30);
    // 0x801ECDFC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECE00: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x801ECE04: andi        $t6, $t5, 0xFFFD
    ctx->r14 = ctx->r13 & 0XFFFD;
    // 0x801ECE08: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x801ECE0C: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    // 0x801ECE10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801ECE14: jal         0x8000F420
    // 0x801ECE18: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_2;
    // 0x801ECE18: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_2:
    // 0x801ECE1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801ECE20: b           L_801ECEF8
    // 0x801ECE24: sb          $t7, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r15;
        goto L_801ECEF8;
    // 0x801ECE24: sb          $t7, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r15;
L_801ECE28:
    // 0x801ECE28: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
L_801ECE2C:
    // 0x801ECE2C: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801ECE30: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801ECE34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ECE38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ECE3C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801ECE40: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x801ECE44: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801ECE48: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ECE4C: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x801ECE50: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801ECE54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ECE58: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x801ECE5C: lhu         $t8, 0xA8($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XA8);
    // 0x801ECE60: lw          $a3, 0xA4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA4);
    // 0x801ECE64: lw          $a2, 0xA0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XA0);
    // 0x801ECE68: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x801ECE6C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x801ECE70: sh          $t0, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r8;
    // 0x801ECE74: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x801ECE78: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x801ECE7C: jal         0x801EE4E0
    // 0x801ECE80: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801EE4E0_5AA3F0(rdram, ctx);
        goto after_3;
    // 0x801ECE80: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
    // 0x801ECE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECE88: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801ECE8C: jal         0x801ED054
    // 0x801ECE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801ED054_5A8F64(rdram, ctx);
        goto after_4;
    // 0x801ECE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801ECE94: b           L_801ECEFC
    // 0x801ECE98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801ECEFC;
    // 0x801ECE98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801ECE9C:
    // 0x801ECE9C: jal         0x801E8858
    // 0x801ECEA0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_5;
    // 0x801ECEA0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x801ECEA4: addiu       $s1, $s0, 0xB8
    ctx->r17 = ADD32(ctx->r16, 0XB8);
    // 0x801ECEA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ECEAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801ECEB0: jal         0x801EE330
    // 0x801ECEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_6;
    // 0x801ECEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x801ECEB8: beq         $v0, $zero, L_801ECEC8
    if (ctx->r2 == 0) {
        // 0x801ECEBC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801ECEC8;
    }
    // 0x801ECEBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801ECEC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801ECEC4: sb          $t2, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r10;
L_801ECEC8:
    // 0x801ECEC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801ECECC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801ECED0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801ECED4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801ECED8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801ECEDC: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x801ECEE0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ECEE4: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801ECEE8: addiu       $a1, $s0, 0xBC
    ctx->r5 = ADD32(ctx->r16, 0XBC);
    // 0x801ECEEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801ECEF0: jal         0x801DC554
    // 0x801ECEF4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_7;
    // 0x801ECEF4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_7:
L_801ECEF8:
    // 0x801ECEF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801ECEFC:
    // 0x801ECEFC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801ECF00: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801ECF04: jr          $ra
    // 0x801ECF08: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801ECF08: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801D6444_592354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D644C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D6450: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D6454: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6458: lbu         $t7, 0xBD($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XBD);
    // 0x801D645C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D6460: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6464: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D6468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D646C: beq         $t7, $zero, L_801D64A0
    if (ctx->r15 == 0) {
        // 0x801D6470: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801D64A0;
    }
    // 0x801D6470: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6474: lhu         $t8, 0x66($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X66);
    // 0x801D6478: sb          $zero, 0xAB($a0)
    MEM_B(0XAB, ctx->r4) = 0;
    // 0x801D647C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D6480: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x801D6484: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x801D6488: jal         0x801D7B74
    // 0x801D648C: sh          $t8, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r24;
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D648C: sh          $t8, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r24;
    after_0:
    // 0x801D6490: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D6494: lhu         $t9, -0x2E2A($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E2A);
    // 0x801D6498: b           L_801D64D4
    // 0x801D649C: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
        goto L_801D64D4;
    // 0x801D649C: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
L_801D64A0:
    // 0x801D64A0: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
    // 0x801D64A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D64A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D64AC: addiu       $a2, $zero, 0x7800
    ctx->r6 = ADD32(0, 0X7800);
    // 0x801D64B0: jal         0x801D7B74
    // 0x801D64B4: addiu       $a3, $zero, 0x7800
    ctx->r7 = ADD32(0, 0X7800);
    func_801D7B74_593A84(rdram, ctx);
        goto after_1;
    // 0x801D64B4: addiu       $a3, $zero, 0x7800
    ctx->r7 = ADD32(0, 0X7800);
    after_1:
    // 0x801D64B8: lbu         $t0, 0xA3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA3);
    // 0x801D64BC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D64C0: beql        $t0, $zero, L_801D64D4
    if (ctx->r8 == 0) {
        // 0x801D64C4: sh          $zero, 0xB8($s0)
        MEM_H(0XB8, ctx->r16) = 0;
            goto L_801D64D4;
    }
    goto skip_0;
    // 0x801D64C4: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
    skip_0:
    // 0x801D64C8: lhu         $t1, -0x2E2A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E2A);
    // 0x801D64CC: sh          $t1, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r9;
    // 0x801D64D0: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
L_801D64D4:
    // 0x801D64D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D64D8: jal         0x801D7F20
    // 0x801D64DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D7F20_593E30(rdram, ctx);
        goto after_2;
    // 0x801D64DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801D64E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D64E4: jal         0x801D5DC0
    // 0x801D64E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_3;
    // 0x801D64E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x801D64EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D64F0: jal         0x801D5ECC
    // 0x801D64F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_4;
    // 0x801D64F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x801D64F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D64FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D6500: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D6504: jr          $ra
    // 0x801D6508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D6508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801F3FAC_5AFEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3FAC: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x801F3FB0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F3FB4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801F3FB8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x801F3FBC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x801F3FC0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x801F3FC4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x801F3FC8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x801F3FCC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x801F3FD0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801F3FD4: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x801F3FD8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x801F3FDC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801F3FE0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801F3FE4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801F3FE8: sw          $a0, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r4;
    // 0x801F3FEC: sw          $a1, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r5;
    // 0x801F3FF0: sw          $a3, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r7;
    // 0x801F3FF4: addiu       $t7, $t7, 0x52D0
    ctx->r15 = ADD32(ctx->r15, 0X52D0);
    // 0x801F3FF8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801F3FFC: addiu       $s6, $sp, 0x1C0
    ctx->r22 = ADD32(ctx->r29, 0X1C0);
    // 0x801F4000: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x801F4004: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x801F4008: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x801F400C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x801F4010: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F4014: sw          $t1, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r9;
    // 0x801F4018: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801F401C: sll         $s1, $a3, 1
    ctx->r17 = S32(ctx->r7 << 1);
    // 0x801F4020: addiu       $s2, $a3, -0x1
    ctx->r18 = ADD32(ctx->r7, -0X1);
    // 0x801F4024: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x801F4028: lw          $t1, 0xC($t7)
    ctx->r9 = MEM_W(ctx->r15, 0XC);
    // 0x801F402C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801F4030: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
    // 0x801F4034: sw          $t1, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r9;
    // 0x801F4038: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801F403C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F4040: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801F4044: sw          $at, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r1;
    // 0x801F4048: lw          $t1, 0x14($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X14);
    // 0x801F404C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x801F4050: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x801F4054: sw          $t1, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->r9;
    // 0x801F4058: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801F405C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x801F4060: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x801F4064: bne         $t0, $v0, L_801F40C0
    if (ctx->r8 != ctx->r2) {
        // 0x801F4068: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_801F40C0;
    }
    // 0x801F4068: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801F406C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801F4070: lw          $t2, -0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39FC);
    // 0x801F4074: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F4078: lbu         $v1, 0x60($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X60);
    // 0x801F407C: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x801F4080: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x801F4084: lw          $v0, -0x3954($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3954);
    // 0x801F4088: bne         $v0, $zero, L_801F4098
    if (ctx->r2 != 0) {
        // 0x801F408C: nop
    
            goto L_801F4098;
    }
    // 0x801F408C: nop

    // 0x801F4090: b           L_801F40B8
    // 0x801F4094: sb          $v1, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r3;
        goto L_801F40B8;
    // 0x801F4094: sb          $v1, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r3;
L_801F4098:
    // 0x801F4098: bne         $t0, $v0, L_801F40AC
    if (ctx->r8 != ctx->r2) {
        // 0x801F409C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F40AC;
    }
    // 0x801F409C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F40A0: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x801F40A4: b           L_801F40B8
    // 0x801F40A8: sb          $s5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r21;
        goto L_801F40B8;
    // 0x801F40A8: sb          $s5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r21;
L_801F40AC:
    // 0x801F40AC: bne         $v0, $at, L_801F40B8
    if (ctx->r2 != ctx->r1) {
        // 0x801F40B0: addiu       $s5, $zero, 0x5
        ctx->r21 = ADD32(0, 0X5);
            goto L_801F40B8;
    }
    // 0x801F40B0: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x801F40B4: sb          $s5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r21;
L_801F40B8:
    // 0x801F40B8: b           L_801F40F4
    // 0x801F40BC: sll         $t9, $s2, 24
    ctx->r25 = S32(ctx->r18 << 24);
        goto L_801F40F4;
    // 0x801F40BC: sll         $t9, $s2, 24
    ctx->r25 = S32(ctx->r18 << 24);
L_801F40C0:
    // 0x801F40C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F40C4: bne         $v0, $at, L_801F40F0
    if (ctx->r2 != ctx->r1) {
        // 0x801F40C8: lui         $t4, 0x8020
        ctx->r12 = S32(0X8020 << 16);
            goto L_801F40F0;
    }
    // 0x801F40C8: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801F40CC: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x801F40D0: addiu       $s5, $zero, 0x6
    ctx->r21 = ADD32(0, 0X6);
    // 0x801F40D4: lbu         $v0, 0x60($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X60);
    // 0x801F40D8: bne         $v0, $zero, L_801F40E4
    if (ctx->r2 != 0) {
        // 0x801F40DC: nop
    
            goto L_801F40E4;
    }
    // 0x801F40DC: nop

    // 0x801F40E0: sb          $s5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r21;
L_801F40E4:
    // 0x801F40E4: bne         $t0, $v0, L_801F40F0
    if (ctx->r8 != ctx->r2) {
        // 0x801F40E8: addiu       $s5, $zero, 0x7
        ctx->r21 = ADD32(0, 0X7);
            goto L_801F40F0;
    }
    // 0x801F40E8: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x801F40EC: sb          $s5, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r21;
L_801F40F0:
    // 0x801F40F0: sll         $t9, $s2, 24
    ctx->r25 = S32(ctx->r18 << 24);
L_801F40F4:
    // 0x801F40F4: sra         $t8, $t9, 24
    ctx->r24 = S32(SIGNED(ctx->r25) >> 24);
    // 0x801F40F8: bltz        $t8, L_801F4470
    if (SIGNED(ctx->r24) < 0) {
        // 0x801F40FC: lbu         $s5, 0x85($sp)
        ctx->r21 = MEM_BU(ctx->r29, 0X85);
            goto L_801F4470;
    }
    // 0x801F40FC: lbu         $s5, 0x85($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X85);
    // 0x801F4100: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F4104: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801F4108: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F410C: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801F4110: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F4114: ldc1        $f24, -0x3E10($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X3E10);
    // 0x801F4118: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F411C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801F4120: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801F4124: lw          $s4, 0x1E8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X1E8);
L_801F4128:
    // 0x801F4128: bne         $s0, $zero, L_801F427C
    if (ctx->r16 != 0) {
        // 0x801F412C: lw          $t3, 0x1D8($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X1D8);
            goto L_801F427C;
    }
    // 0x801F412C: lw          $t3, 0x1D8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1D8);
    // 0x801F4130: lbu         $t7, 0x1EF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1EF);
    // 0x801F4134: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x801F4138: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x801F413C: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x801F4140: addu        $t2, $s6, $t1
    ctx->r10 = ADD32(ctx->r22, ctx->r9);
    // 0x801F4144: jal         0x8001B918
    // 0x801F4148: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801F4148: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    after_0:
    // 0x801F414C: bne         $v0, $zero, L_801F415C
    if (ctx->r2 != 0) {
        // 0x801F4150: lwc1        $f4, 0xAC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
            goto L_801F415C;
    }
    // 0x801F4150: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801F4154: b           L_801F4498
    // 0x801F4158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F4498;
    // 0x801F4158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F415C:
    // 0x801F415C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F4160: lbu         $t3, 0x1F3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F3);
    // 0x801F4164: c.lt.d      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.d < ctx->f24.d;
    // 0x801F4168: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801F416C: addu        $t5, $s6, $t4
    ctx->r13 = ADD32(ctx->r22, ctx->r12);
    // 0x801F4170: bc1fl       L_801F4184
    if (!c1cs) {
        // 0x801F4174: addiu       $a0, $sp, 0x128
        ctx->r4 = ADD32(ctx->r29, 0X128);
            goto L_801F4184;
    }
    goto skip_0;
    // 0x801F4174: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
    skip_0:
    // 0x801F4178: b           L_801F4498
    // 0x801F417C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F4498;
    // 0x801F417C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F4180: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
L_801F4184:
    // 0x801F4184: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x801F4188: jal         0x8001B918
    // 0x801F418C: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    func_8001B918_1C518(rdram, ctx);
        goto after_1;
    // 0x801F418C: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    after_1:
    // 0x801F4190: bne         $v0, $zero, L_801F41A0
    if (ctx->r2 != 0) {
        // 0x801F4194: lwc1        $f8, 0x144($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X144);
            goto L_801F41A0;
    }
    // 0x801F4194: lwc1        $f8, 0x144($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X144);
    // 0x801F4198: b           L_801F4498
    // 0x801F419C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F4498;
    // 0x801F419C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F41A0:
    // 0x801F41A0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F41A4: lwc1        $f16, 0x130($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801F41A8: c.lt.d      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.d < ctx->f24.d;
    // 0x801F41AC: nop

    // 0x801F41B0: bc1f        L_801F41C0
    if (!c1cs) {
        // 0x801F41B4: nop
    
            goto L_801F41C0;
    }
    // 0x801F41B4: nop

    // 0x801F41B8: b           L_801F4498
    // 0x801F41BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F4498;
    // 0x801F41BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F41C0:
    // 0x801F41C0: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801F41C4: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x801F41C8: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x801F41CC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801F41D0: addiu       $t2, $t2, 0x52A0
    ctx->r10 = ADD32(ctx->r10, 0X52A0);
    // 0x801F41D4: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
    // 0x801F41D8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801F41DC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x801F41E0: nop

    // 0x801F41E4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x801F41E8: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801F41EC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801F41F0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F41F4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x801F41F8: nop

    // 0x801F41FC: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x801F4200: lwc1        $f16, 0x138($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801F4204: sll         $t1, $s5, 2
    ctx->r9 = S32(ctx->r21 << 2);
    // 0x801F4208: subu        $t1, $t1, $s5
    ctx->r9 = SUB32(ctx->r9, ctx->r21);
    // 0x801F420C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801F4210: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x801F4214: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x801F4218: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801F421C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x801F4220: nop

    // 0x801F4224: sh          $t3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r11;
    // 0x801F4228: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801F422C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801F4230: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F4234: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x801F4238: nop

    // 0x801F423C: sh          $t5, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r13;
    // 0x801F4240: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801F4244: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801F4248: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
    // 0x801F424C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801F4250: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F4254: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x801F4258: nop

    // 0x801F425C: sh          $t9, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = ctx->r25;
    // 0x801F4260: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801F4264: div.s       $f0, $f28, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f28.fl, ctx->f18.fl);
    // 0x801F4268: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801F426C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F4270: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801F4274: b           L_801F4390
    // 0x801F4278: sh          $t7, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r15;
        goto L_801F4390;
    // 0x801F4278: sh          $t7, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r15;
L_801F427C:
    // 0x801F427C: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x801F4280: lbu         $v0, 0xA6($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0XA6);
    // 0x801F4284: sll         $t4, $s5, 2
    ctx->r12 = S32(ctx->r21 << 2);
    // 0x801F4288: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F428C: subu        $t4, $t4, $s5
    ctx->r12 = SUB32(ctx->r12, ctx->r21);
    // 0x801F4290: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F4294: addiu       $t5, $t5, 0x52A0
    ctx->r13 = ADD32(ctx->r13, 0X52A0);
    // 0x801F4298: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x801F429C: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x801F42A0: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x801F42A4: beq         $at, $zero, L_801F42BC
    if (ctx->r1 == 0) {
        // 0x801F42A8: div.s       $f0, $f28, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f28.fl, ctx->f6.fl);
            goto L_801F42BC;
    }
    // 0x801F42A8: div.s       $f0, $f28, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f28.fl, ctx->f6.fl);
    // 0x801F42AC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x801F42B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F42B4: b           L_801F42C8
    // 0x801F42B8: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
        goto L_801F42C8;
    // 0x801F42B8: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
L_801F42BC:
    // 0x801F42BC: addiu       $a3, $s1, -0x2
    ctx->r7 = ADD32(ctx->r17, -0X2);
    // 0x801F42C0: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x801F42C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801F42C8:
    // 0x801F42C8: beq         $s0, $s2, L_801F4314
    if (ctx->r16 == ctx->r18) {
        // 0x801F42CC: sll         $t5, $a0, 4
        ctx->r13 = S32(ctx->r4 << 4);
            goto L_801F4314;
    }
    // 0x801F42CC: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x801F42D0: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x801F42D4: addu        $v1, $s3, $t9
    ctx->r3 = ADD32(ctx->r19, ctx->r25);
    // 0x801F42D8: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x801F42DC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x801F42E0: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x801F42E4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x801F42E8: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x801F42EC: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x801F42F0: lh          $t1, 0x4($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X4);
    // 0x801F42F4: sh          $t1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r9;
    // 0x801F42F8: lh          $t2, -0x10($v1)
    ctx->r10 = MEM_H(ctx->r3, -0X10);
    // 0x801F42FC: sh          $t2, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r10;
    // 0x801F4300: lh          $t3, -0xE($v1)
    ctx->r11 = MEM_H(ctx->r3, -0XE);
    // 0x801F4304: sh          $t3, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = ctx->r11;
    // 0x801F4308: lh          $t4, -0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, -0XC);
    // 0x801F430C: b           L_801F4390
    // 0x801F4310: sh          $t4, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r12;
        goto L_801F4390;
    // 0x801F4310: sh          $t4, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r12;
L_801F4314:
    // 0x801F4314: addu        $v0, $s3, $t5
    ctx->r2 = ADD32(ctx->r19, ctx->r13);
    // 0x801F4318: lh          $t6, -0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X10);
    // 0x801F431C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x801F4320: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801F4324: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x801F4328: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F432C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F4330: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801F4334: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F4338: mul.d       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f26.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f26.d);
    // 0x801F433C: trunc.w.d   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801F4340: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x801F4344: nop

    // 0x801F4348: sh          $t1, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r9;
    // 0x801F434C: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x801F4350: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x801F4354: lh          $t2, -0x10($v0)
    ctx->r10 = MEM_H(ctx->r2, -0X10);
    // 0x801F4358: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801F435C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x801F4360: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F4364: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801F4368: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801F436C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801F4370: mul.d       $f10, $f16, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f26.d);
    // 0x801F4374: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801F4378: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x801F437C: nop

    // 0x801F4380: sh          $t6, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = ctx->r14;
    // 0x801F4384: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x801F4388: sh          $t6, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r14;
    // 0x801F438C: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
L_801F4390:
    // 0x801F4390: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x801F4394: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801F4398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801F439C: sb          $t9, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r25;
    // 0x801F43A0: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x801F43A4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801F43A8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801F43AC: sb          $t8, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r24;
    // 0x801F43B0: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x801F43B4: cvt.w.s     $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = CVT_W_S(ctx->f22.fl);
    // 0x801F43B8: sll         $t5, $s0, 24
    ctx->r13 = S32(ctx->r16 << 24);
    // 0x801F43BC: sb          $t7, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r15;
    // 0x801F43C0: lbu         $t1, 0x3($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X3);
    // 0x801F43C4: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801F43C8: sra         $s0, $t5, 24
    ctx->r16 = S32(SIGNED(ctx->r13) >> 24);
    // 0x801F43CC: sb          $t1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r9;
    // 0x801F43D0: lbu         $t2, 0x4($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X4);
    // 0x801F43D4: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801F43D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F43DC: sb          $t2, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r10;
    // 0x801F43E0: lbu         $t3, 0x5($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X5);
    // 0x801F43E4: beq         $v1, $zero, L_801F4430
    if (ctx->r3 == 0) {
        // 0x801F43E8: sb          $t3, 0xE($v0)
        MEM_B(0XE, ctx->r2) = ctx->r11;
            goto L_801F4430;
    }
    // 0x801F43E8: sb          $t3, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r11;
    // 0x801F43EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F43F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801F43F4: sub.s       $f18, $f22, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x801F43F8: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801F43FC: nop

    // 0x801F4400: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801F4404: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801F4408: nop

    // 0x801F440C: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801F4410: bne         $v1, $zero, L_801F4428
    if (ctx->r3 != 0) {
        // 0x801F4414: nop
    
            goto L_801F4428;
    }
    // 0x801F4414: nop

    // 0x801F4418: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x801F441C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F4420: b           L_801F4440
    // 0x801F4424: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_801F4440;
    // 0x801F4424: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_801F4428:
    // 0x801F4428: b           L_801F4440
    // 0x801F442C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_801F4440;
    // 0x801F442C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_801F4430:
    // 0x801F4430: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x801F4434: nop

    // 0x801F4438: bltz        $v1, L_801F4428
    if (SIGNED(ctx->r3) < 0) {
        // 0x801F443C: nop
    
            goto L_801F4428;
    }
    // 0x801F443C: nop

L_801F4440:
    // 0x801F4440: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801F4444: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x801F4448: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x801F444C: add.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f0.fl;
    // 0x801F4450: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x801F4454: c.lt.s      $f28, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f28.fl < ctx->f22.fl;
    // 0x801F4458: nop

    // 0x801F445C: bc1f        L_801F4468
    if (!c1cs) {
        // 0x801F4460: nop
    
            goto L_801F4468;
    }
    // 0x801F4460: nop

    // 0x801F4464: mov.s       $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    ctx->f22.fl = ctx->f28.fl;
L_801F4468:
    // 0x801F4468: bgez        $s0, L_801F4128
    if (SIGNED(ctx->r16) >= 0) {
        // 0x801F446C: nop
    
            goto L_801F4128;
    }
    // 0x801F446C: nop

L_801F4470:
    // 0x801F4470: lw          $t9, 0x1D8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D8);
    // 0x801F4474: lw          $t1, 0x1DC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1DC);
    // 0x801F4478: lw          $t2, 0x1DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1DC);
    // 0x801F447C: lbu         $t8, 0xA6($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0XA6);
    // 0x801F4480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F4484: bne         $t8, $zero, L_801F4494
    if (ctx->r24 != 0) {
        // 0x801F4488: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_801F4494;
    }
    // 0x801F4488: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F448C: b           L_801F4498
    // 0x801F4490: sb          $t7, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r15;
        goto L_801F4498;
    // 0x801F4490: sb          $t7, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r15;
L_801F4494:
    // 0x801F4494: sb          $zero, 0x64($t2)
    MEM_B(0X64, ctx->r10) = 0;
L_801F4498:
    // 0x801F4498: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801F449C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801F44A0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801F44A4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801F44A8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x801F44AC: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x801F44B0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801F44B4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x801F44B8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801F44BC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x801F44C0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x801F44C4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x801F44C8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x801F44CC: jr          $ra
    // 0x801F44D0: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    TRACE_RETURN()
    return;
    // 0x801F44D0: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_801FC590_5B84A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC590: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801FC594: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801FC598: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x801FC59C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801FC5A0: lw          $v0, -0x710($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X710);
    // 0x801FC5A4: beq         $v0, $zero, L_801FC5B8
    if (ctx->r2 == 0) {
        // 0x801FC5A8: nop
    
            goto L_801FC5B8;
    }
    // 0x801FC5A8: nop

    // 0x801FC5AC: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x801FC5B0: andi        $t8, $t7, 0xFFEB
    ctx->r24 = ctx->r15 & 0XFFEB;
    // 0x801FC5B4: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
L_801FC5B8:
    // 0x801FC5B8: jr          $ra
    // 0x801FC5BC: nop

    TRACE_RETURN()
    return;
    // 0x801FC5BC: nop

;}
RECOMP_FUNC void func_801EB078_5A6F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB07C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB084: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB088: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB08C: jal         0x801EB180
    // 0x801EB090: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB090: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801EB094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB09C: jr          $ra
    // 0x801EB0A0: nop

    TRACE_RETURN()
    return;
    // 0x801EB0A0: nop

;}
RECOMP_FUNC void func_801DF7E0_59B6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF7E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF7E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF7E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF7EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF7F0: jal         0x801E7F50
    // 0x801DF7F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801DF7F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF7F8: jal         0x801E1E70
    // 0x801DF7FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1E70_59DD80(rdram, ctx);
        goto after_1;
    // 0x801DF7FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF800: jal         0x801DF858
    // 0x801DF804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF858_59B768(rdram, ctx);
        goto after_2;
    // 0x801DF804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF808: bne         $v0, $zero, L_801DF844
    if (ctx->r2 != 0) {
        // 0x801DF80C: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_801DF844;
    }
    // 0x801DF80C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801DF810: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DF814: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DF818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF81C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801DF820: nop

    // 0x801DF824: bc1f        L_801DF83C
    if (!c1cs) {
        // 0x801DF828: nop
    
            goto L_801DF83C;
    }
    // 0x801DF828: nop

    // 0x801DF82C: jal         0x801DACDC
    // 0x801DF830: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DF830: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_3:
    // 0x801DF834: b           L_801DF848
    // 0x801DF838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF848;
    // 0x801DF838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF83C:
    // 0x801DF83C: jal         0x801DF8B8
    // 0x801DF840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF8B8_59B7C8(rdram, ctx);
        goto after_4;
    // 0x801DF840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_801DF844:
    // 0x801DF844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF848:
    // 0x801DF848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF84C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF850: jr          $ra
    // 0x801DF854: nop

    TRACE_RETURN()
    return;
    // 0x801DF854: nop

;}
RECOMP_FUNC void func_801DDB08_599A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDB08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDB0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDB10: jal         0x801E15D0
    // 0x801DDB14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E15D0_59D4E0(rdram, ctx);
        goto after_0;
    // 0x801DDB14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDB20: jr          $ra
    // 0x801DDB24: nop

    TRACE_RETURN()
    return;
    // 0x801DDB24: nop

;}
